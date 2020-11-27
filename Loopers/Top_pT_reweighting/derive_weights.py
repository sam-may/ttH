import os, sys

import ROOT
import numpy
import root_numpy

from metis.Sample import DBSSample

datasets_fcnc = ["/TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM"]

datasets_ttbar = ["/TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_new_pmx_102X_mc2017_realistic_v8-v1/NANOAODSIM"]

def get_files(datasets):
    sample = DBSSample(dataset=dataset)
    files = sample.get_files()
    xrd_files = []
    for file in files:
        print file
        xrd_files.append("root://cmsxrootd.fnal.gov//" + str(file).split()[1])
    return xrd_files

def fill_histogram(name, files):
    hist = ROOT.TH1D(name, "", 50, 0, 400)
    for file in files:
        f = ROOT.TFile.Open(file)
        tree = f.Get("Events")
        gen_particles = root_numpy.tree2array(tree, branches = ["GenPart_pt", "GenPart_pdgId", "GenPart_statusFlags"])
        gen_particle_pt = gen_particles["GenPart_pt"]
        gen_particle_pdg = gen_particles["GenPart_pdgId"]
        gen_particle_status = gen_particles["GenPart_statusFlags"]
        #for i in range(5000):
        for i in range(len(gen_particle_pt)): # evt loop
            for j in range(len(gen_particle_pt[i])): # gen particle loop
                if abs(gen_particle_pdg[i][j]) != 6:
                    continue
                if gen_particle_status[i][j] != 10497: # bitwise representation
                    continue
                #print "Gen top pt: %.3f" % gen_particle_pt[i][j]
                hist.Fill(gen_particle_pt[i][j])
    return hist

def calculate_sfs(base, target):
    base.Scale(1./base.GetSumOfWeights())
    target.Scale(1./target.GetSumOfWeights())

    #ratio = ROOT.TH1D("ratio", "", 100, 0, 400)

    ratio = target.Clone("pt_ratio")
    ratio.Divide(base)
    return ratio

files_fcnc = ["inputs/fcnc.root"]
files_ttbar = ["inputs/ttbar_powheg.root"]

fcnc_pt = fill_histogram("fcnc_pt", files_fcnc)
ttbar_nlo_pt = fill_histogram("ttbar_nlo_pt", files_ttbar)
ratio = calculate_sfs(fcnc_pt, ttbar_nlo_pt)

f_out = ROOT.TFile("top_pt_sfs.root", "RECREATE")
fcnc_pt.Write()
ttbar_nlo_pt.Write()
ratio.Write()
f_out.Close()

