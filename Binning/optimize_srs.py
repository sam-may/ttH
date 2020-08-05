import os, sys
import json
import numpy

import guided_optimizer

import argparse
parser = argparse.ArgumentParser()
parser.add_argument("--tag", help = "tag to distinguish this optimization", type=str, default = "test")
parser.add_argument("--channel", help = "leptonic or hadronic", type=str, default = "Hadronic")
parser.add_argument("--file", help = "path to final fit tree", type=str)
parser.add_argument("--coupling", help = "coupling (Hut or Hct)", type=str)
parser.add_argument("--mvas", help = "list of mva branches to perform Nd optimization with", type=str, default = "mva_score")
parser.add_argument("--sm_higgs_unc", help = "value of unc on sm higgs processes", type=float, default = 0.1)
parser.add_argument("--nCores", help = "number of cores to use", type=int, default = 12)
parser.add_argument("--bins", help = "csv list of number of bins", type=str, default = "1,2,3,4,5")
args = parser.parse_args()

mvas = args.mvas.split(",")
dim = len(mvas)
mva_dict = { str(dim) + "d" : mvas }

bins = [int(a) for a in args.bins.split(",")]

optimizer = guided_optimizer.Guided_Optimizer(
                input = args.file,
                tag = args.tag,
                channel = args.channel,
                coupling = args.coupling,
                nCores = args.nCores,

                sm_higgs_unc = args.sm_higgs_unc,

                #n_bins = [1,2,3,4,5],
                n_bins = bins,
                mvas = mva_dict,
                #mvas = { "1d" : ["mva_score"], "2d" : ["mva_smhiggs_score", "mva_nonres_score"] },
                strategies = ['guided'],
               
                initial_points = 48,
                points_per_epoch = 48,
                n_epochs = 1,
                verbose = True
)

optimizer.optimize()
