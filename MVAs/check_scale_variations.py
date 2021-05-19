# conda activate hrl
import uproot
import awkward
import pandas
import numba

nano = "/home/users/smay/ttH/FCNC_Workspaces_v2/CMSSW_10_6_1_patch2/src/flashgg/TT_FCNC_Leptonic_Hut_2016_nanoAOD.root"
ff = "Leptonic_hut_merge2d_noTopBDTv5.10_22Jan2021.root"

with uproot.open(nano) as f:
    tree = f["Events"]
    events = tree.arrays(["run", "event", "luminosityBlock", "genWeight", "LHEScaleWeight"], library = "ak", how = "zip")

with uproot.open(ff) as f:
    tree = f["t"]
    events_ff = tree.arrays(["run", "evt", "lumi", "mva_nonres_score", "mva_smhiggs_score", "weight", "process_id"], library = "ak", how = "zip")

cut_proc = events_ff.process_id >= 22
events_ff = events_ff[cut_proc]

mvas = {
        "mva_nonres" : [],
        "mva_smhiggs" : [],
        "weight" : [],
        "scaleWeight1_up" : [],
        "scaleWeight1_down" : [],
        "scaleWeight2_up" : [],
        "scaleWeight2_down" : [],
        "scaleWeight3_up" : [],
        "scaleWeight3_down" : [] 
}


for i in range(len(events)):
    print(i)
    if i > 2500:
        continue
    run = events[i].run
    event = events[i].event
    lumi = events[i].luminosityBlock

    cut = (events_ff.run == run) & (events_ff.lumi == lumi)
    events_ff_1 = events_ff[cut]
    cut = events_ff_1.evt == event
    events_ff_2 = events_ff_1[cut]

    if len(events_ff_2) == 0:
        continue

    mva_nonres = events_ff_2.mva_nonres_score[0]
    mva_smhiggs = events_ff_2.mva_smhiggs_score[0]
    weight = events_ff_2.weight[0]
    weight = 1.

    scale_weights = events[i].jagged0.LHEScaleWeight

    #weight *= 1./scale_weights[0]

    weight_1_up = weight * (scale_weights[1] / scale_weights[0])
    weight_1_down = weight * (scale_weights[2] / scale_weights[0])

    weight_2_up = weight * (scale_weights[3] / scale_weights[0])
    weight_2_down = weight * (scale_weights[6] / scale_weights[0])

    weight_3_up = weight * (scale_weights[4] / scale_weights[0])
    weight_3_down = weight * (scale_weights[8] / scale_weights[0])


    print(weight, weight_1_up, weight_1_down, weight_2_up, weight_2_down, weight_3_up, weight_3_down)

    mvas["mva_nonres"].append(mva_nonres)
    mvas["mva_smhiggs"].append(mva_smhiggs)
    mvas["weight"].append(weight)
    mvas["scaleWeight1_up"].append(weight_1_up)
    mvas["scaleWeight1_down"].append(weight_1_down)
    mvas["scaleWeight2_up"].append(weight_2_up)
    mvas["scaleWeight2_down"].append(weight_2_down)
    mvas["scaleWeight3_up"].append(weight_3_up)
    mvas["scaleWeight3_down"].append(weight_3_down)

df = pandas.DataFrame.from_dict(mvas)
df.to_pickle("BDT_scaleWeightVariations.pkl")
