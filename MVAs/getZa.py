import os, sys
import h5py
import ROOT
import numpy
import root_numpy
import utils

f = ROOT.TFile("Event_promptness.root")
tree_test = f.Get("tree")

#var = "(mva_score1 + (1-mva_score2) + (1-mva_score3) + (1-mva_score4))/4"
var = "mva_score_"
signal_mva_scores = root_numpy.tree2array(tree_test, branches = [var], selection = "label_ == 1")
#qcd_mva_scores = root_numpy.tree2array(tree_test, branches = ["mva_score4"], selection = "label == 3")

n_quantiles = 100
#n_quantiles2 = 100
quantiles, mva_cut = utils.quantiles_to_mva_score(n_quantiles, signal_mva_scores)
#quantiles2, mva_cut2 = utils.quantiles_to_mva_score(n_quantiles2, qcd_mva_scores)

print "Significance estimate sfor our BDT: s, b_mc, b_data, z_mc, z_data"
nGrid = 100
#nGrid2 = 10
#step1 = (maxmva - minmva)/float(nGrid)
for i in range(nGrid):
#  for j in range(nGrid2):
#  selection_base = "mva_score_ >= %.10f" % mva_cut[i][0]
#    selection_base = "mva_score1 >= %.10f && mva_score4 < %.10f" % (0.8+i*0.001, 0.05-j*0.001)
    selection_base = var + "> %.10f" % ( mva_cut[i][0])#, mva_cut2[n_quantiles2-j-1][0])
#    print selection_base
    utils.calc_significance(tree_test, selection_base, i, mva_cut[i][0], "Hadronic")
