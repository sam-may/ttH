import ROOT
import os, sys
import math

import root_numpy

f = ROOT.TFile.Open("top_pt_sfs.root")
sfs = f.Get("pt_ratio")
powheg_nlo = f.Get("ttbar_nlo_pt")


def lo_to_nlo(gen_top_pt, gen_anti_top_pt, hist):
    bin_t = hist.FindBin(gen_top_pt)
    top_sf = hist.GetBinContent(bin_t)
    top_sf_unc = hist.GetBinError(bin_t)

    bin_at = hist.FindBin(gen_anti_top_pt)
    anti_top_sf = hist.GetBinContent(bin_at)
    anti_top_sf_unc = hist.GetBinError(bin_at)

    total_unc = math.sqrt( (anti_top_sf/(4*top_sf))*(top_sf_unc**2) + (top_sf/(4*anti_top_sf))*(anti_top_sf_unc**2) )

    return math.sqrt(top_sf*anti_top_sf), total_unc
    
def top_sf_formula(pt):
    return (0.103*math.exp(-0.0118*pt)) - (0.000134*pt) + 0.973

def nlo_to_nnlo(gen_top_pt, gen_anti_top_pt):
    top_sf = top_sf_formula(gen_top_pt)
    anti_top_sf = top_sf_formula(gen_anti_top_pt)
    return math.sqrt(top_sf*anti_top_sf)

file_fcnc = "inputs/fcnc.root"
f1 = ROOT.TFile.Open(file_fcnc)
tree = f1.Get("Events")

gen_particles = root_numpy.tree2array(tree, branches = ["GenPart_pt", "GenPart_pdgId", "GenPart_statusFlags", "nJet", "Jet_pt", "Jet_btagDeepFlavB"])
gen_particle_pt = gen_particles["GenPart_pt"]
gen_particle_pdg = gen_particles["GenPart_pdgId"]
gen_particle_status = gen_particles["GenPart_statusFlags"]

f_out = ROOT.TFile("top_reweighting.root", "RECREATE")
hOrig = ROOT.TH1D("orig_pt", "", 50, 0, 400)
hNLO  = ROOT.TH1D("nlo_pt" , "", 50, 0, 400)
hNNLO = ROOT.TH1D("nnlo_pt", "", 50, 0, 400)

hOrig_njets = ROOT.TH1D("orig_njets", "", 10, -0.5, 9)
hNLO_njets  = ROOT.TH1D("nlo_njets" , "", 10, -0.5, 9) 
hNNLO_njets = ROOT.TH1D("nnlo_njets", "", 10, -0.5, 9)

hOrig_jet_pt = ROOT.TH1D("orig_jet_pt", "", 25, 0, 200)
hNLO_jet_pt  = ROOT.TH1D("nlo_jet_pt" , "", 25, 0, 200) 
hNNLO_jet_pt = ROOT.TH1D("nnlo_jet_pt", "", 25, 0, 200)

hOrig_jet_btag = ROOT.TH1D("orig_jet_btag", "", 20, 0, 1) 
hNLO_jet_btag  = ROOT.TH1D("nlo_jet_btag" , "", 20, 0, 1)
hNNLO_jet_btag = ROOT.TH1D("nnlo_jet_btag", "", 20, 0, 1)

for i in range(len(gen_particle_pt)): # evt loop
    for j in range(len(gen_particle_pt[i])): # gen particle loop
        if abs(gen_particle_pdg[i][j]) != 6:
            continue
        if gen_particle_status[i][j] != 10497:
            continue
        if gen_particle_pdg[i][j] == 6: # top
            gen_top_pt = gen_particle_pt[i][j]
            nJet = gen_particles["nJet"][i]
            jet_pt = gen_particles["Jet_pt"][i][0]
            jet_btag = gen_particles["Jet_btagDeepFlavB"][i][0]
        if gen_particle_pdg[i][j] == -6: # anti-top
            gen_anti_top_pt = gen_particle_pt[i][j]
    weight = 1.
    sf_1, unc = lo_to_nlo(gen_top_pt, gen_anti_top_pt, sfs)
    sf_2 = nlo_to_nnlo(gen_top_pt, gen_anti_top_pt)

    #print "Event with gen top pt: %.3f and gen antitop pt: %.3f" % (gen_top_pt, gen_anti_top_pt)
    #print "Gets LO->NLO SF of %.3f +/- %.3f and NLO->NNLO SF of %.3f" % (sf_1, unc, sf_2)

    hOrig.Fill(gen_top_pt, weight)
    hNLO.Fill(gen_top_pt,  weight*sf_1)
    hNNLO.Fill(gen_top_pt, weight*sf_1*sf_2)

    hOrig.Fill(gen_anti_top_pt, weight) 
    hNLO.Fill(gen_anti_top_pt,  weight*sf_1) 
    hNNLO.Fill(gen_anti_top_pt, weight*sf_1*sf_2)

    hOrig_njets.Fill(nJet, weight)
    hNLO_njets.Fill(nJet, weight*sf_1)
    hNNLO_njets.Fill(nJet, weight*sf_1*sf_2)

    hOrig_jet_pt.Fill(jet_pt, weight)
    hNLO_jet_pt.Fill(jet_pt, weight*sf_1)
    hNNLO_jet_pt.Fill(jet_pt, weight*sf_1*sf_2)

    hOrig_jet_btag.Fill(jet_btag, weight)
    hNLO_jet_btag.Fill(jet_btag, weight*sf_1)
    hNNLO_jet_btag.Fill(jet_btag, weight*sf_1*sf_2)

powheg_nlo.Write()
sfs.Write()
hOrig.Write()
hNLO.Write()
hNNLO.Write()

hOrig_njets.Write()
hNLO_njets.Write()
hNNLO_njets.Write()

hOrig_jet_pt.Write()
hNLO_jet_pt.Write()
hNNLO_jet_pt.Write()

hOrig_jet_btag.Write()
hNLO_jet_btag.Write()
hNNLO_jet_btag.Write()

f_out.Close() 
