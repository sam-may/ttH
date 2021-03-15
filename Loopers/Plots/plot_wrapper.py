import sys, os
sys.path.append("../")

import argparse
parser = argparse.ArgumentParser()
parser.add_argument("--input_file", help = "root file with histograms to plot", type=str)
parser.add_argument("--backgrounds", help = "list of processes to plot as bkgs", type=str, default="DiPhoton|GammaJets|TTGG|TTGJets|TTJets|DY|VG|TGamma|TTV|VV|tV")
parser.add_argument("--signals", help = "list of processes to plot as signals", type=str, default="ttH|TT_FCNC_hct|TT_FCNC_hut|ST_FCNC_hct|ST_FCNC_hut")
parser.add_argument("--plot_type", help = "which type of plot to make (e.g. std, std_linear, etc.)", type=str, default="std")
parser.add_argument("--plot_labels", help = "labels to put on plots", type=str, default = "")
parser.add_argument("--hig_19_015", help = "run special plotter for hig_19_015", action="store_true")
parser.add_argument("--fcnc", help = "run special plotter for fcnc", action="store_true")
args = parser.parse_args()

import parallel_utils

if args.hig_19_015:
    parallel_utils.run('./makePlots_hig-19-015 "%s" "%s" "%s" "%s" "%s"' % (args.plot_type, args.input_file, args.plot_labels, args.backgrounds, args.signals))

elif args.fcnc:
    parallel_utils.run('./makePlots_FCNC "%s" "%s" "%s" "%s" "%s"' % (args.plot_type, args.input_file, args.plot_labels, args.backgrounds, args.signals))

else:
    parallel_utils.run('./makePlots "%s" "%s" "%s" "%s" "%s"' % (args.plot_type, args.input_file, args.plot_labels, args.backgrounds, args.signals))

    #full_bkgs = "DiPhoton|QCD_GammaJets_imputed|GammaJets|QCD|TTGG|TTGJets|TTJets|DY|VG|TGamma|TTV|VV|tV|ggH|VBF|VH|THQ|THW"

    if args.signals == "TT_FCNC_hut":
        args.signals = "TT_FCNC_hct|TT_FCNC_hut|ST_FCNC_hct|ST_FCNC_hut"

    full_bkgs = "DiPhoton|QCD_GammaJets_imputed|GammaJets|QCD|TTGG|TTGJets|TTJets|DY|VG|TGamma|TTZ|TTW|VV|tV|ggH|VBF|VH|THQ|THW|ttH"

    parallel_utils.run('./makeTables "%s" "%s" "%s" > tables_%s.txt' % (args.input_file, args.signals, full_bkgs, args.input_file.replace(".root", "").replace("../", "")))
    #parallel_utils.run('./makeTables "%s" "%s" "%s" > tables_%s.txt' % (args.input_file, args.signals, args.backgrounds, args.input_file.replace(".root", "").replace("../", "")))
