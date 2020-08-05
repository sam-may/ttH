import os, sys
import json

import argparse
parser = argparse.ArgumentParser()
parser.add_argument("--input", help = "input json", type=str)
args = parser.parse_args()


bins = { "Leptonic" : ["FCNC_Leptonic_0", "FCNC_Leptonic_1", "FCNC_Leptonic_2"],
         "Hadronic" : ["FCNC_Hadronic_0", "FCNC_Hadronic_1", "FCNC_Hadronic_2", "FCNC_Hadronic_3"]
       }
limit = { "Hut" : 0.2617, "Hct" : 0.3328 }
assumed_br = 0.1441

with open(args.input, "r") as f_in:
    results = json.load(f_in)


couplings = ["Hut", "Hct"]
for coupling in couplings:
    table = ""
    table += "\\begin{center} \\Fontvi \n"
    table += "\\begin{tabular}{ l r r r r r } \\hline \\hline \n"
    table += " & Exp. Lim. & \\multicolumn{4}{c}{Yields} \\\\ \n"
    table += " & & FCNC " + coupling + " & Total Bkg. & Non-res Bkg. & SM Higgs \\\\ \n"
    for channel in ["Hadronic", "Leptonic"]:
        for bin in bins[channel]:
            key = results[channel + " (" + coupling +")"].keys()[0]
            info = results[channel + " (" + coupling +")"][key]
            exp_lim = info["exp_lim_full"][bin][0] * assumed_br
            fcnc_yield = info["yields"][bin.replace("FCNC_" + channel, "Bin")]["FCNC_" + coupling] * limit[coupling] 
            nrb_yield = info["yields"][bin.replace("FCNC_" + channel, "Bin")]["bkg"]
            sm_higgs_yield = info["yields"][bin.replace("FCNC_" + channel, "Bin")]["sm_higgs"]
            tot_bkg_yield = nrb_yield + sm_higgs_yield
            table += bin.replace("_","") + " & %.3f & %.3f & %.3f & %.3f & %.3f" % (exp_lim, fcnc_yield, tot_bkg_yield, nrb_yield, sm_higgs_yield)
            table += " \\\\ \n"
    table += " \\hline \\hline \n"
    table += "\\end{tabular} \n"
    table += "\\end{center}\n"
    print coupling, table
