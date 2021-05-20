# conda activate hrl
import uproot
import awkward
import pandas
import os

### Scale Weight info ###
# Note: not sure if this is consistent between all nanoAODs
# 9 total weights in LHEScaleWeight branch, corresponding to different variations of 
# the QCD renormalization scale (mu_R) and factorization scale (mu_F)
# [0] : mu_R = 0.5, mu_F = 0.5
# [1] : mu_R = 0.5, mu_F = 1.0
# [2] : mu_R = 0.5, mu_F = 2.0  UNPHYSICAL
# [3] : mu_R = 1.0, mu_F = 0.5
# [4] : mu_R = 1.0, mu_F = 1.0  NOMINAL
# [5] : mu_R = 1.0, mu_F = 2.0
# [6] : mu_R = 2.0, mu_F = 0.5  UNPHYSICAL
# [7] : mu_R = 2.0, mu_F = 1.0
# [8] : mu_R = 2.0, mu_F = 2.0

# Usually, one wants to take the envelope of all the scale variations (excluding those deemed unphysical) wrt to the nominal
# The unphysical cases correspond to mu_R and mu_F being varied in opposite directions, I'm not sure why this is "unphysical".

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


def loop(nano, ff, proc_id, out_name):
    if os.path.exists(out_name):
        return
    
    with uproot.open(nano) as f:
        tree = f["Events"]
        events = tree.arrays(["run", "event", "luminosityBlock", "genWeight", "LHEScaleWeight"], library = "ak", how = "zip")
        print(events.fields)

    with uproot.open(ff) as f:
        tree = f["t"]
        events_ff = tree.arrays(["year", "run", "evt", "lumi", "mva_nonres_score", "mva_smhiggs_score", "weight", "process_id"], library = "ak", how = "zip")

    cut_proc = events_ff.process_id == proc_id
    events_ff = events_ff[cut_proc]

    print(len(events_ff))

    cut_year = events_ff.year == 2016
    events_ff = events_ff[cut_year]

    for i in range(len(events)):
        print("%d/%d" % (i, len(events)))

        if i > 100000:
            break

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

        scale_weights = events[i].jagged0.LHEScaleWeight

        weight_1_up = weight * scale_weights[7] 
        weight_1_down = weight * scale_weights[1]

        weight_2_up = weight * scale_weights[5]
        weight_2_down = weight * scale_weights[3]

        weight_3_up = weight * scale_weights[8]
        weight_3_down = weight * scale_weights[0]

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
    df.to_pickle(out_name)
    return

samples = {
        "TT_Leptonic_Hut" : { 
            "nano" : "Leptonic_Hut_TT_2016_nanoAOD.root",
            "ff" : "../Leptonic_hut_merge2d_noTopBDTv5.10_22Jan2021.root",
            "proc_id" : 22
        },
        "ST_Leptonic_Hut" : {
            "nano" : "Leptonic_Hut_ST_2016_nanoAOD.root",
            "ff" : "../Leptonic_hut_merge2d_noTopBDTv5.10_22Jan2021.root",
            "proc_id" : 24
        },
        "TT_Leptonic_Hct" : {
            "nano" : "Leptonic_Hct_TT_2016_nanoAOD.root",
            "ff" : "../Leptonic_hct_merge2d_noTopBDTv5.10_22Jan2021.root",
            "proc_id" : 23
        },
}


for sample, info in samples.items():
    print(sample, info)
    out_name = "%s.pkl" % sample
    loop(info["nano"], info["ff"], info["proc_id"], out_name)
