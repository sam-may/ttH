import os, sys
import json

import guided_optimizer

import argparse
parser = argparse.ArgumentParser()
parser.add_argument("--input", help = "input json with srs", type=str)
parser.add_argument("--tag", help = "tag to identify", type=str, default = "test")
parser.add_argument("--sm_higgs_unc", help = "value of unc on sm higgs processes", type=float, default = 0.4)
parser.add_argument("--nrb_choice", help = "data or bkg (for MC)", type=str, default="bkg")
args = parser.parse_args()

tree_map = {
        "Hadronic (Hct)" : "/home/users/sjmay/ttH/MVAs/Hadronic_hct_merge2d_v5.7_19Oct2020.root",
        "Hadronic (Hut)" : "/home/users/sjmay/ttH/MVAs/Hadronic_hut_merge2d_v5.7_19Oct2020.root",
        "Leptonic (Hct)" : "/home/users/sjmay/ttH/MVAs/Leptonic_hct_merge2d_v5.7_19Oct2020.root",
        "Leptonic (Hut)" : "/home/users/sjmay/ttH/MVAs/Leptonic_hut_merge2d_v5.7_19Oct2020.root"
}

with open(args.input, "r") as f_in:
    results = json.load(f_in)

idx = 0
full_summary = {}
for key, info in results.items():
    summary = {}
    os.chdir("/home/users/sjmay/ttH/Binning/")
    #print key.split(" ")
    channel, coupling = key.strip().split(" ")
    #print space, channel, coupling, space
    coupling = coupling[1:-1] # strip parentheses

    optimizer = guided_optimizer.Guided_Optimizer(
        input = tree_map[key.strip()],
        tag = args.tag,
        channel = channel,
        coupling = coupling,
        nCores = 12,

        sm_higgs_unc = args.sm_higgs_unc,

        n_bins = [len(info["selection"])],
        mvas = { "2d" : ["mva_smhiggs_score", "mva_nonres_score"] },

        strategies = ['guided'],

        initial_points = 0,
        points_per_epoch = 0,
        n_epochs = 1,
        diagnostic_mode = True,
        nrb_choice = args.nrb_choice,
        verbose = True
    )

    optimizer.optimize()

    print info["selection"]
    optimizer.calculate_expected_limit(info["selection"], idx, [0], summary)

    full_summary[key] = summary
    idx += 1


os.chdir("/home/users/sjmay/ttH/Binning/")
with open("detailed_summary_%s_%s.json" % (args.tag, args.nrb_choice), "w") as f_out:
    json.dump(full_summary, f_out, indent=4, sort_keys=True)
