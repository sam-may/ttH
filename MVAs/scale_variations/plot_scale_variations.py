import pandas
from yahist import Hist1D
import matplotlib.pyplot as plt
import numpy

df = pandas.read_pickle("BDT_scaleWeightVariations.pkl")

name_dict = {
    "scaleWeight1_up" : "mu_R = 2.0, mu_F = 1.0",
    "scaleWeight1_down" : "mu_R = 0.5, mu_F = 1.0",
    "scaleWeight2_up" : "mu_R = 1.0, mu_F = 2.0",
    "scaleWeight2_down" : "mu_R = 1.0, mu_F = 0.5",
    "scaleWeight3_up" : "mu_R = 2.0, mu_F = 2.0",
    "scaleWeight3_down" : "mu_R = 0.5, mu_F = 0.5"
}

BINS_NRB = "25, 0, 6"
BINS_SMH = "25, 0, 5"


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
        ax2.set_ylim([0.9, 1.1])
    else:
        ax2.set_ylim([0.95, 1.05])
    ax2.set_xlabel("BDT Score")
    ax1.set_title(title)
    plt.savefig(name)

files = [
    "TT_Leptonic_Hut.pkl",
    "ST_Leptonic_Hut.pkl",
    "TT_Leptonic_Hct.pkl"
]

for file in files:
    prefix = file.replace(".pkl", "")

    df = pandas.read_pickle(file)

    for mva_name in ["mva_nonres", "mva_smhiggs"]:
        mva = -numpy.log(1 - df[mva_name])
        nominal_weight = df["weight"]
        nominal_sum_weights = df["weight"].sum()

        if mva_name == "mva_nonres":
            bins = BINS_NRB
        else:
            bins = BINS_SMH

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
                weight *= nominal_sum_weights / weight.sum()

                h = Hist1D(
                    mva,
                    weights = weight,
                    bins = bins
                )

                plot_name = name_dict[name]

                h_var[plot_name] = h

        out_name = "scale_plots/%s_%s.pdf" % (prefix, mva_name)
        title = "%s (%s)" % (prefix.replace("Leptonic_", "").replace("_", " "), mva_name)
        make_ratio_plot(h_nominal, h_var, title, out_name)


