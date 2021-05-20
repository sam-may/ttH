import pandas
from yahist import Hist1D
import matplotlib.pyplot as plt
import numpy
import awkward
import uproot

df = pandas.read_pickle("BDT_scaleWeightVariations.pkl")

name_dict = {
    "scaleWeight1_up" : "mu_R = 2.0, mu_F = 1.0",
    "scaleWeight1_down" : "mu_R = 0.5, mu_F = 1.0",
    "scaleWeight2_up" : "mu_R = 1.0, mu_F = 2.0",
    "scaleWeight2_down" : "mu_R = 1.0, mu_F = 0.5",
    "scaleWeight3_up" : "mu_R = 2.0, mu_F = 2.0",
    "scaleWeight3_down" : "mu_R = 0.5, mu_F = 0.5"
}

#BINS_NRB = "25, 0, 6"
#BINS_SMH = "25, 0, 5"

BINS_HUT_NRB = numpy.array([0, 0.760981, 0.880369, 0.9483, 0.9933])
BINS_HCT_NRB = numpy.array([0, 0.638741, 0.829832, 0.9478, 0.9933])
BINS_HUT_SMH = numpy.array([0, 0.002408, 0.527533, 0.823037, 0.9933])
BINS_HCT_SMH = numpy.array([0.267616, 0.510590, 0.675592, 0.9933])

def make_ratio_plot(nominal, variations_dict, title, name):
    fig, (ax1,ax2) = plt.subplots(2, sharex=True, figsize=(8,6), gridspec_kw=dict(height_ratios=[3, 1]))

    nominal.plot(ax=ax1, alpha = 0.8, color = "C0", errors = True, ms = 0., label = "Nominal")
    #ratio_nominal = nominal/nominal
    #ratio_nominal.plot(ax=ax2, errors=False)
    idx = 0
    for label, hist in variations_dict.items():
        idx += 1
        hist.plot(ax=ax1, alpha = 0.8, color = "C%d" % idx, errors = True, ms = 0.0, label = label)
        ratio = hist/nominal #hist.divide(nominal, binomial = True)
        ratio.plot(ax=ax2, errors=False, color = "C%d" % idx)

    ax2.set_ylabel("Scale Var. / Nominal")

    if "ST" in title:
        ax2.set_ylim([0.8, 1.2])
    else:
        ax2.set_ylim([0.98, 1.02])
    ax1.set_ylim(bottom=0)
    #if "ST" in title:
    #    ax2.set_ylim([0.9, 1.1])
    #elif "TT" in title:
    #    ax2.set_ylim([0.95, 1.05])
    ax2.set_xlabel("BDT Score")
    ax1.set_title(title)
    plt.savefig(name)

files = [
    "TT_Leptonic_Hut.pkl",
    "ST_Leptonic_Hut.pkl",
    "TT_Leptonic_Hct.pkl"
]

file_map = {
    "TT_Leptonic_Hut.pkl" : "Leptonic_Hut_TT_2016_nanoAOD.root",
    "ST_Leptonic_Hut.pkl" : "Leptonic_Hut_ST_2016_nanoAOD.root",
    "TT_Leptonic_Hct.pkl" : "Leptonic_Hct_TT_2016_nanoAOD.root"
} 

weight_map = {
    "scaleWeight1_up" : 7,
    "scaleWeight1_down" : 1,
    "scaleWeight2_up" : 5,
    "scaleWeight2_down" : 3,
    "scaleWeight3_up" : 8,
    "scaleWeight3_down" : 0
}

def get_norm(file, weight):
    with uproot.open(file_map[file]) as f:
        tree = f["Events"]
        events = tree.arrays(["genWeight", "LHEScaleWeight"], library = "ak", how = "zip")
   
        nominal_weights = events.jagged0.LHEScaleWeight[:,4]
        var_weights = events.jagged0.LHEScaleWeight[:,weight_map[weight]]

        sum_nominal = awkward.sum(nominal_weights)
        sum_weight = awkward.sum(var_weights)

        print(sum_nominal, sum_weight)
        return sum_nominal / sum_weight
        

for file in files:
    prefix = file.replace(".pkl", "")

    df = pandas.read_pickle(file)

    for mva_name in ["mva_nonres", "mva_smhiggs"]:
        mva = -numpy.log(1 - df[mva_name])
        nominal_weight = df["weight"]
        nominal_sum_weights = df["weight"].sum()

        if mva_name == "mva_nonres" and "Hut" in file:
            bins = BINS_HUT_NRB
        elif mva_name == "mva_smhiggs" and "Hut" in file:
            bins = BINS_HUT_SMH
        elif mva_name == "mva_nonres" and "Hct" in file:
            bins = BINS_HCT_NRB
        elif mva_name == "mva_smhiggs" and "Hct" in file:
            bins = BINS_HCT_SMH

        bins = -numpy.log(1 - bins)

        h_nominal = Hist1D(
                mva,
                weights = nominal_weight,
                bins = bins
        ) 

        h_var = {}

        for var in ["up", "down"]:
            for sw in ["1", "2", "3"]:
                name = "scaleWeight%s_%s" % (sw, var)
                weight = df[name] # not normalized to nominal

                print(file, name)
                print(nominal_sum_weights / weight.sum())
                weight_norm = weight * get_norm(file, name)
                #weight_norm = weight * (nominal_sum_weights / weight.sum())
                

                h = Hist1D(
                    mva,
                    weights = weight_norm,
                    bins = bins
                )

                plot_name = name_dict[name]

                h_var[plot_name] = h

        out_name = "scale_plots/%s_%s.pdf" % (prefix, mva_name)
        title = "%s (%s)" % (prefix.replace("Leptonic_", "").replace("_", " "), mva_name)
        make_ratio_plot(h_nominal, h_var, title, out_name)


