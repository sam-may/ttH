import pandas
from hist import Hist
import matplotlib.pyplot as plt
import numpy

df = pandas.read_pickle("BDT_scaleWeightVariations.pkl")

for mva_name in ["mva_nonres", "mva_smhiggs"]:
    mva = -numpy.log(1 - df[mva_name])
    h_nominal = Hist.new.Reg(25, 0, 6, name = "mva score").Double()
    h_nominal.fill(mva, weight = df["weight"])
    h_var = {}
    for var in ["up", "down"]:
        for sw in ["1", "2", "3"]:
            name = "scaleWeight%s_%s" % (sw, var)
            h = Hist.new.Reg(25, 0, 6, name = "mva_score").Double()
            h.fill(mva, weight = df[name])
            h_var[name] = h

            fig = plt.figure()
            a, b = h_nominal.plot_ratio(
                    h,
                    rp_ylabel = "Nominal / %s" % name,
                    rp_num_label = "Nominal",
                    rp_denom_label = name,
                    rp_uncert_draw_type = "line",
                    rp_ylim = [0.5, 1.5]
            )

            plt.savefig("scale_plots/%s_%s.pdf" % (mva_name, name))
