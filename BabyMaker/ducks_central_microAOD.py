import sys, os
import time
import itertools
import numpy
import glob
import datetime

from metis.Sample import Sample, DirectorySample
from metis.CondorTask import CondorTask
from metis.StatsParser import StatsParser

from flashgg_utils import *

import argparse
parser = argparse.ArgumentParser()
parser.add_argument("--tag", help = "tag to identify this set of babies", type=str)
parser.add_argument("--soft_rerun", help = "don't remake tarball", action="store_true")
parser.add_argument("--update_tarball", help = "remake and update tarball for each task", action = "store_true")
parser.add_argument("--update_executable", help = "remake and update executable for each task", action = "store_true")
parser.add_argument("--use_xrdcp", help = "copy the tarball with xrdcp", action = "store_true")
parser.add_argument("--use_gridftp", help = "copy the tarball with gfal-copy", action = "store_true")
parser.add_argument("--use_wget", help = "copy the tarball with wget, utilizing squid caches at sites", action = "store_true")
parser.add_argument("--get_nevents", help = "write json file with n_events for each sample in catalog (don't submit jobs)", action = "store_true")
parser.add_argument("--ttH_and_tH_only", help = "only submit jobs for ttH and tH samples", action = "store_true")
parser.add_argument("--run_2017F_only", help = "only submit jobs for DoubleEG Run2017F", action = "store_true")
parser.add_argument("--local_only", help = "only submit jobs for local microAOD samples", action = "store_true")
parser.add_argument("--legacy", help = "run on UL datasets", action = "store_true")
args = parser.parse_args()

job_tag = "ttH_Babies_RunII" + args.tag
exec_path = "condor_exe.sh"
tar_path = "package_%s.tar.gz" % job_tag if (args.use_xrdcp or args.use_gridftp or args.use_wget) else "package.tar.gz"
hadoop_path = "ttH"

cmssw_ver = "CMSSW_10_6_8"
if args.legacy:
    cmssw_ver = "legacy_stxs/CMSSW_10_6_8"

if not args.soft_rerun or (args.update_tarball or args.update_executable) and not args.get_nevents:
  if not (args.update_tarball or args.update_executable):
    os.system("rm -rf tasks/*" + args.tag + "*")

  if not args.update_executable: # if we aren't updating the executable, that means we're either doing a first run or updating tarball
      os.system("rm package.tar.gz")
      os.system("XZ_OPT='-3e -T24' tar -Jc --exclude='.git' --exclude='my*.root' --exclude='*.tar*' --exclude='merged_ntuple*.root' --exclude='*.out' --exclude='*.err' --exclude='*.log' --exclude *MicroAOD/BatchSubmit/* --exclude *MetaData/data/Era201*/*.json --exclude '*Taggers/data/DNN_models/*' --exclude '*Taggers/data/*dijet*' --exclude '*76X*.root' --exclude '*76X*.xml' --exclude '*Taggers/data/DNN_models/*' --exclude '*Taggers/data/HHTagger/*' --exclude '*Taggers/data/ttHKiller/*' -f package.tar.gz %s" % cmssw_ver)

  if args.use_xrdcp or args.use_gridftp or args.use_wget:
      if not args.update_executable:
          os.system("cp package.tar.gz /hadoop/cms/store/user/smay/ttH/tarballs/%s" % tar_path)
          os.system("hadoop fs -setrep -R 30 /cms/store/user/smay/ttH/tarballs/%s" % tar_path)
          #os.system("sleep 1h")
      if args.use_xrdcp:
          os.system("cp condor_exe_xrd.sh condor_exe_%s.sh" % job_tag)
      elif args.use_gridftp:
          os.system("cp condor_exe_gridftp.sh condor_exe_%s.sh" % job_tag)
      elif args.use_wget:
          os.system("cp condor_exe_wget.sh condor_exe_%s.sh" % job_tag)
      with open("condor_exe_%s.sh" % job_tag, "r") as f_in:
          lines = f_in.readlines()
      with open("condor_exe_%s.sh" % job_tag, "w") as f_out:
        for i in range(len(lines)):
            if "FIXME" in lines[i]:
                lines[i] = lines[i].replace("FIXME", tar_path)
        for line in lines:
            f_out.write(line)

  if args.update_tarball:
    os.system("for task in `ls -1 -d tasks/*%s*/`; do echo cp package.tar.gz $task/package.tar.gz; cp package.tar.gz $task/package.tar.gz; done" % args.tag) # make sure we overwrite any previously existing tar files

  if args.update_executable:
    os.system("for task in `ls -1 -d tasks/*%s*/`; do echo cp condor_exe_%s.sh $task/executable.sh; cp condor_exe_%s.sh $task/executable.sh; done" % (args.tag, job_tag, job_tag))


  if not args.update_tarball and not args.update_executable:
      with open("versions.txt", "a") as fout:
        os.chdir("%s/src/flashgg/" % cmssw_ver)
        commit = os.popen("git log -n 1 --pretty=format:'%H'").read()
        branch = "tth_dev" + ((os.popen("git branch").read()).strip("\n")).split("tth_dev")[-1]
        os.chdir("../../..")
        fout.write("Date: %s \n" % datetime.datetime.now())
        fout.write("Submitting ttH Babies version %s using central microAOD and commit %s of %s branch of flashgg\n" % (args.tag, commit, branch))
        fout.write("\n")

if args.legacy:
    conds_dict = {
            "2016" : "MetaData/data/MetaConditions/Era2016_RR-17Jul2018_v1.json",
            "2017" : "MetaData/data/MetaConditions/Era2017_legacy_v1.json",
            "2018" : "MetaData/data/MetaConditions/Era2018_RR-17Sep2018_v1.json"
    }
    catalogs = ["Era2016_RR-17Jul2018_v2", "Era2017_legacy_v1", "Era2018_RR-17Sep2018_v2"]

else:
    conds_dict = {
            "2016" : "MetaData/data/MetaConditions/Era2016_RR-17Jul2018_v1.json",
            "2017" : "MetaData/data/MetaConditions/Era2017_RR-31Mar2018_v1.json",
            "2018" : "MetaData/data/MetaConditions/Era2018_RR-17Sep2018_v1.json"
    }
    catalogs = ["Era2016_RR-17Jul2018_v2", "Era2017_RR-31Mar2018_v2", "Era2018_RR-17Sep2018_v2"]

samples = get_samples_from_catalogs(catalogs, args.legacy)
if args.get_nevents:
    summarize_samples(samples)
    quit()

#for key in samples.keys():
#    if "JHU" in key:
#        print key
print "Processing %d samples" % len(samples.keys())

def fpo(sample):
    if "ttHJetToGG" in sample or "ttHToGG" in sample or "THQ" in sample or "THW" in sample or "JHU" in sample:
        return 1
    elif any([x in sample for x in ["VBF", "GluGluHToGG", "VHToGG", "bbH"]]):
        return 3
    elif "DiPhoton" in sample or "TTGG" in sample:
        return 5
    elif any([x in sample for x in ["DoubleEG", "EGamma"]]):
        return 20
    elif any([x in sample for x in ["DYJetsToLL", "QCD", "GJets_HT", "TTJets", "GJet-Pt"]]):
        return 10
    else:
        return 10

blacklist = ["SingleElectron", "Box1BJet", "Box2BJets", "GJet_Pt", "ZH_HtoGG", "bbHToGG", "JHU", "ZNuNuGJets", "VBFHiggs", "VBFHH", "GluGluToHH"]
def skip(sample):
    if any([x in sample for x in blacklist]):
        return True
    if args.ttH_and_tH_only:
        if not ("ttHJetToGG" in sample or "ttHToGG" in sample or "THQ" in sample or "THW" in sample or "EGamma" in sample or "DoubleEG" in sample):
            return True
    if args.run_2017F_only:
        if not "DoubleEG" in sample:
            return True
    return False

class file:
    def __init__(self, **kwargs):
        self.name = kwargs.get('name', None)
    def get_name(self):
        return self.name
    def get_nevents(self):
        return 1

#local_samples = {
#        "tHq_JHUCPEven" : { "location" : "/hadoop/cms/store/user/smay/ttH/tH_CP_Samples/JHUSample_tHq_cpeven_2017_microAOD_v1.1_20May2020/", "fpo" : 5, "year" : "2017"},
#        "tHq_JHUCPOdd" : { "location" : "/hadoop/cms/store/user/smay/ttH/tH_CP_Samples/JHUSample_tHq_cpodd_2017_microAOD_v1.1_20May2020/", "fpo" : 5, "year" : "2017"},
#        "tHq_JHUCPkm" : { "location" : "/hadoop/cms/store/user/smay/ttH/tH_CP_Samples//JHUSample_tHq_cp_k0_2017_microAOD_v1.1_20May2020/", "fpo" : 5, "year" : "2017"},
#        "tHq_JHUCPk0" : { "location" : "/hadoop/cms/store/user/smay/ttH/tH_CP_Samples//JHUSample_tHq_cp_km_2017_microAOD_v1.1_20May2020/", "fpo" : 5, "year" : "2017"},
        #"tHq_" : { "location" : "/hadoop/cms/store/user/hmei/miniaod_runII/JHUSample_tHq_km_2017_20200525_STEP4_v1/
#}

if args.legacy:
    local_samples_list = []
else:
    local_samples_list = glob.glob("/hadoop/cms/store/user/smay/FCNC/MicroAOD/*FCNC*v1.2_29May2020/")

local_samples = {}

def get_year(local_sample):
    if "RunIISummer16MiniAODv3" in local_sample:
        return "2016"
    if "RunIIFall17MiniAODv2" in local_sample:
        return "2017"
    if "RunIIAutumn18MiniAOD" in local_sample:
        return "2018"
    for year in ["2016", "2017", "2018"]:
        if year in local_sample:
            return year
    return "-1"

for sample in local_samples_list:
    ds = sample.split("/")[-2]
    location = sample
    fpo_ = 10 if "private" in sample else 1
    year = get_year(sample)
    local_samples[ds] = { "location" : location, "fpo" : fpo_, "year" : year }


total_summary = {}
first_run = False
while True:
    allcomplete = True
    for sample, info in local_samples.items():
        if skip(sample):
            continue
        dataset = sample
        year = info["year"]
        metis_sample = DirectorySample(dataset = dataset, location = info["location"]) 

        print dataset, info["fpo"]

        task = CondorTask(
                sample = metis_sample,
                open_dataset = False,
                flush = True,
                files_per_output = info["fpo"],
                output_name = "merged_ntuple.root",
                tag = job_tag,
                cmssw_version = cmssw_ver,
                executable = "condor_exe_%s.sh" % job_tag if (args.use_xrdcp or args.use_gridftp or args.use_wget) else "condor_exe.sh",
                tarfile = "empty" if (args.use_xrdcp or args.use_gridftp or args.use_wget) else tar_path,
                condor_submit_params = {"sites" : "T2_US_UCSD"},
                special_dir = hadoop_path,
                arguments = conds_dict[year]
        )
        task.process()
        if not task.complete():
            allcomplete = False
        total_summary[dataset] = task.get_task_summary()

    if not args.local_only:
        for sample in samples.keys():
            if skip(sample):
                continue
            for year in samples[sample].keys():
                if year == "xs" or year == "-1":
                    continue
                for production in samples[sample][year].keys():
                    if production == "scale1fb":
                        continue
                    if args.run_2017F_only:
                        if not "2017F" in production:
                            continue
                    dataset = sample + "_" + production
                    files = samples[sample][year][production]["files"]
                    if files == -1:
                        continue
                    files = [file(name=x) for x in files]
                    metis_sample = Sample(dataset = dataset, files = files) 
                    metis_sample.info["nevts"] = 0
                    #print "Task for %s, %s, %s" % (sample, year, production)
                    #print "Files: "
                    #print metis_sample.get_files()
                    #print "FPO: %d for sample: %s" % (fpo(sample), sample)
                    task = CondorTask(
                            sample = metis_sample,
                            open_dataset = False,
                            flush = True,
                            files_per_output = fpo(sample),
                            output_name = "merged_ntuple.root",
                            tag = job_tag,
                            cmssw_version = cmssw_ver,
                            executable = "condor_exe_%s.sh" % job_tag if (args.use_xrdcp or args.use_gridftp or args.use_wget) else "condor_exe.sh",
                            tarfile = "empty" if (args.use_xrdcp or args.use_gridftp or args.use_wget) else tar_path,
                            condor_submit_params = {"sites" : "T2_US_UCSD"} if (args.use_wget) else {"sites" : "T2_US_UCSD,T2_US_CALTECH,T2_US_MIT,T2_US_WISCONSIN,T2_US_Nebraska,T2_US_Purdue,T2_US_Vanderbilt,T2_US_Florida"},
                            special_dir = hadoop_path,
                            arguments = conds_dict[year]
                    )
                    task.process()
                    if not task.complete():
                        allcomplete = False
                    total_summary[dataset] = task.get_task_summary()
                    if first_run:
                        print "Sleeping 30s to space out jobs"
                        os.system("sleep 30s")
    StatsParser(data=total_summary, webdir="~/public_html/dump/ttH_BabyMaker_v2_%s/" % job_tag).do()
    os.system("chmod -R 755 ~/public_html/dump/ttH_BabyMaker_v2_%s" % job_tag)
    if allcomplete:
        print("")
        print("Job={} finished".format(job_tag))
        print("")
        break
    first_run = False
    print("Sleeping 1000 seconds ...")
    time.sleep(1000)

signal_strings = ["ttHJetToGG", "ttHToGG", "THQ", "THW", "VBF", "GluGluHToGG", "VHToGG", "FCNC", "ttHiggs"]
