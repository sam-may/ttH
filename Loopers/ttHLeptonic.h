// -*- C++ -*-
// This is a header file generated with the command:
// makeCMS3ClassFiles("merged_babies/DiPhotonJetsBox_MGG-80toInf_13TeV-Sherpa_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2_MINIAODSIM_RunII_ttH_Babies_RunIIv1.7/merged_ntuple_1.root", "tthLeptonicTagDumper/trees/tth_13TeV_all", "ttHLeptonic", "tas", "cms3")

#ifndef ttHLeptonic_H
#define ttHLeptonic_H

#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include "TBits.h"
#include <vector> 
#include <unistd.h> 
typedef ROOT::Math::LorentzVector< ROOT::Math::PxPyPzE4D<float> > LorentzVector;

using namespace std; 
class ttHLeptonic {
 private: 
 protected: 
  unsigned int index;
  int      candidate_id_;
  TBranch *candidate_id_branch;
  bool     candidate_id_isLoaded;
  float    weight_;
  TBranch *weight_branch;
  bool     weight_isLoaded;
  float    dipho_sumpt_;
  TBranch *dipho_sumpt_branch;
  bool     dipho_sumpt_isLoaded;
  float    dipho_cosphi_;
  TBranch *dipho_cosphi_branch;
  bool     dipho_cosphi_isLoaded;
  float    mass_;
  TBranch *mass_branch;
  bool     mass_isLoaded;
  float    leadPt_;
  TBranch *leadPt_branch;
  bool     leadPt_isLoaded;
  float    leadEt_;
  TBranch *leadEt_branch;
  bool     leadEt_isLoaded;
  float    leadEnergy_;
  TBranch *leadEnergy_branch;
  bool     leadEnergy_isLoaded;
  float    leadEta_;
  TBranch *leadEta_branch;
  bool     leadEta_isLoaded;
  float    leadPhi_;
  TBranch *leadPhi_branch;
  bool     leadPhi_isLoaded;
  float    lead_sieie_;
  TBranch *lead_sieie_branch;
  bool     lead_sieie_isLoaded;
  float    lead_hoe_;
  TBranch *lead_hoe_branch;
  bool     lead_hoe_isLoaded;
  float    lead_sigmaEoE_;
  TBranch *lead_sigmaEoE_branch;
  bool     lead_sigmaEoE_isLoaded;
  float    lead_ptoM_;
  TBranch *lead_ptoM_branch;
  bool     lead_ptoM_isLoaded;
  float    leadR9_;
  TBranch *leadR9_branch;
  bool     leadR9_isLoaded;
  float    leadGenMatch_;
  TBranch *leadGenMatch_branch;
  bool     leadGenMatch_isLoaded;
  float    leadPtGen_;
  TBranch *leadPtGen_branch;
  bool     leadPtGen_isLoaded;
  float    leadGendeltaR_;
  TBranch *leadGendeltaR_branch;
  bool     leadGendeltaR_isLoaded;
  float    subleadPt_;
  TBranch *subleadPt_branch;
  bool     subleadPt_isLoaded;
  float    subleadEt_;
  TBranch *subleadEt_branch;
  bool     subleadEt_isLoaded;
  float    subleadEnergy_;
  TBranch *subleadEnergy_branch;
  bool     subleadEnergy_isLoaded;
  float    subleadEta_;
  TBranch *subleadEta_branch;
  bool     subleadEta_isLoaded;
  float    subleadPhi_;
  TBranch *subleadPhi_branch;
  bool     subleadPhi_isLoaded;
  float    sublead_sieie_;
  TBranch *sublead_sieie_branch;
  bool     sublead_sieie_isLoaded;
  float    sublead_hoe_;
  TBranch *sublead_hoe_branch;
  bool     sublead_hoe_isLoaded;
  float    sublead_sigmaEoE_;
  TBranch *sublead_sigmaEoE_branch;
  bool     sublead_sigmaEoE_isLoaded;
  float    sublead_ptoM_;
  TBranch *sublead_ptoM_branch;
  bool     sublead_ptoM_isLoaded;
  float    subleadR9_;
  TBranch *subleadR9_branch;
  bool     subleadR9_isLoaded;
  float    subleadGenMatch_;
  TBranch *subleadGenMatch_branch;
  bool     subleadGenMatch_isLoaded;
  float    subleadPtGen_;
  TBranch *subleadPtGen_branch;
  bool     subleadPtGen_isLoaded;
  float    subleadGendeltaR_;
  TBranch *subleadGendeltaR_branch;
  bool     subleadGendeltaR_isLoaded;
  float    leadIDMVA_;
  TBranch *leadIDMVA_branch;
  bool     leadIDMVA_isLoaded;
  float    subleadIDMVA_;
  TBranch *subleadIDMVA_branch;
  bool     subleadIDMVA_isLoaded;
  float    dipho_rapidity_;
  TBranch *dipho_rapidity_branch;
  bool     dipho_rapidity_isLoaded;
  float    vertex_idx_;
  TBranch *vertex_idx_branch;
  bool     vertex_idx_isLoaded;
  float    nGoodEls_;
  TBranch *nGoodEls_branch;
  bool     nGoodEls_isLoaded;
  float    nGoodElsFromTau_;
  TBranch *nGoodElsFromTau_branch;
  bool     nGoodElsFromTau_isLoaded;
  float    nGoodMus_;
  TBranch *nGoodMus_branch;
  bool     nGoodMus_isLoaded;
  float    nGoodMusFromTau_;
  TBranch *nGoodMusFromTau_branch;
  bool     nGoodMusFromTau_isLoaded;
  float    nGoodTaus_;
  TBranch *nGoodTaus_branch;
  bool     nGoodTaus_isLoaded;
  float    diphoMVARes_;
  TBranch *diphoMVARes_branch;
  bool     diphoMVARes_isLoaded;
  float    leadPassEVeto_;
  TBranch *leadPassEVeto_branch;
  bool     leadPassEVeto_isLoaded;
  float    subleadPassEVeto_;
  TBranch *subleadPassEVeto_branch;
  bool     subleadPassEVeto_isLoaded;
  float    leadPixelSeed_;
  TBranch *leadPixelSeed_branch;
  bool     leadPixelSeed_isLoaded;
  float    subleadPixelSeed_;
  TBranch *subleadPixelSeed_branch;
  bool     subleadPixelSeed_isLoaded;
  float    nb_loose_;
  TBranch *nb_loose_branch;
  bool     nb_loose_isLoaded;
  float    nb_medium_;
  TBranch *nb_medium_branch;
  bool     nb_medium_isLoaded;
  float    nb_tight_;
  TBranch *nb_tight_branch;
  bool     nb_tight_isLoaded;
  float    rand_;
  TBranch *rand_branch;
  bool     rand_isLoaded;
  float    lead_photon_type_;
  TBranch *lead_photon_type_branch;
  bool     lead_photon_type_isLoaded;
  float    sublead_photon_type_;
  TBranch *sublead_photon_type_branch;
  bool     sublead_photon_type_isLoaded;
  float    lead_closest_gen_Pt_;
  TBranch *lead_closest_gen_Pt_branch;
  bool     lead_closest_gen_Pt_isLoaded;
  float    sublead_closest_gen_Pt_;
  TBranch *sublead_closest_gen_Pt_branch;
  bool     sublead_closest_gen_Pt_isLoaded;
  float    lead_closest_gen_dR_;
  TBranch *lead_closest_gen_dR_branch;
  bool     lead_closest_gen_dR_isLoaded;
  float    sublead_closest_gen_dR_;
  TBranch *sublead_closest_gen_dR_branch;
  bool     sublead_closest_gen_dR_isLoaded;
  float    lead_PhoGenPt_;
  TBranch *lead_PhoGenPt_branch;
  bool     lead_PhoGenPt_isLoaded;
  float    lead_PhoGenEta_;
  TBranch *lead_PhoGenEta_branch;
  bool     lead_PhoGenEta_isLoaded;
  float    lead_PhoGenPhi_;
  TBranch *lead_PhoGenPhi_branch;
  bool     lead_PhoGenPhi_isLoaded;
  float    lead_Prompt_;
  TBranch *lead_Prompt_branch;
  bool     lead_Prompt_isLoaded;
  float    lead_Mad_;
  TBranch *lead_Mad_branch;
  bool     lead_Mad_isLoaded;
  float    lead_Pythia_;
  TBranch *lead_Pythia_branch;
  bool     lead_Pythia_isLoaded;
  float    lead_SimpleMomID_;
  TBranch *lead_SimpleMomID_branch;
  bool     lead_SimpleMomID_isLoaded;
  float    lead_SimpleMomStatus_;
  TBranch *lead_SimpleMomStatus_branch;
  bool     lead_SimpleMomStatus_isLoaded;
  float    lead_MomID_;
  TBranch *lead_MomID_branch;
  bool     lead_MomID_isLoaded;
  float    lead_MomMomID_;
  TBranch *lead_MomMomID_branch;
  bool     lead_MomMomID_isLoaded;
  float    lead_PassFrix_;
  TBranch *lead_PassFrix_branch;
  bool     lead_PassFrix_isLoaded;
  float    lead_SmallestDr_;
  TBranch *lead_SmallestDr_branch;
  bool     lead_SmallestDr_isLoaded;
  float    sublead_PhoGenPt_;
  TBranch *sublead_PhoGenPt_branch;
  bool     sublead_PhoGenPt_isLoaded;
  float    sublead_PhoGenEta_;
  TBranch *sublead_PhoGenEta_branch;
  bool     sublead_PhoGenEta_isLoaded;
  float    sublead_PhoGenPhi_;
  TBranch *sublead_PhoGenPhi_branch;
  bool     sublead_PhoGenPhi_isLoaded;
  float    sublead_Prompt_;
  TBranch *sublead_Prompt_branch;
  bool     sublead_Prompt_isLoaded;
  float    sublead_Mad_;
  TBranch *sublead_Mad_branch;
  bool     sublead_Mad_isLoaded;
  float    sublead_Pythia_;
  TBranch *sublead_Pythia_branch;
  bool     sublead_Pythia_isLoaded;
  float    sublead_SimpleMomID_;
  TBranch *sublead_SimpleMomID_branch;
  bool     sublead_SimpleMomID_isLoaded;
  float    sublead_SimpleMomStatus_;
  TBranch *sublead_SimpleMomStatus_branch;
  bool     sublead_SimpleMomStatus_isLoaded;
  float    sublead_MomID_;
  TBranch *sublead_MomID_branch;
  bool     sublead_MomID_isLoaded;
  float    sublead_MomMomID_;
  TBranch *sublead_MomMomID_branch;
  bool     sublead_MomMomID_isLoaded;
  float    sublead_PassFrix_;
  TBranch *sublead_PassFrix_branch;
  bool     sublead_PassFrix_isLoaded;
  float    sublead_SmallestDr_;
  TBranch *sublead_SmallestDr_branch;
  bool     sublead_SmallestDr_isLoaded;
  float    n_ele_;
  TBranch *n_ele_branch;
  bool     n_ele_isLoaded;
  float    ele1_pt_;
  TBranch *ele1_pt_branch;
  bool     ele1_pt_isLoaded;
  float    ele2_pt_;
  TBranch *ele2_pt_branch;
  bool     ele2_pt_isLoaded;
  float    ele1_eta_;
  TBranch *ele1_eta_branch;
  bool     ele1_eta_isLoaded;
  float    ele2_eta_;
  TBranch *ele2_eta_branch;
  bool     ele2_eta_isLoaded;
  float    ele1_phi_;
  TBranch *ele1_phi_branch;
  bool     ele1_phi_isLoaded;
  float    ele2_phi_;
  TBranch *ele2_phi_branch;
  bool     ele2_phi_isLoaded;
  float    ele1_energy_;
  TBranch *ele1_energy_branch;
  bool     ele1_energy_isLoaded;
  float    ele2_energy_;
  TBranch *ele2_energy_branch;
  bool     ele2_energy_isLoaded;
  float    n_muons_;
  TBranch *n_muons_branch;
  bool     n_muons_isLoaded;
  float    muon1_pt_;
  TBranch *muon1_pt_branch;
  bool     muon1_pt_isLoaded;
  float    muon2_pt_;
  TBranch *muon2_pt_branch;
  bool     muon2_pt_isLoaded;
  float    muon1_eta_;
  TBranch *muon1_eta_branch;
  bool     muon1_eta_isLoaded;
  float    muon2_eta_;
  TBranch *muon2_eta_branch;
  bool     muon2_eta_isLoaded;
  float    muon1_phi_;
  TBranch *muon1_phi_branch;
  bool     muon1_phi_isLoaded;
  float    muon2_phi_;
  TBranch *muon2_phi_branch;
  bool     muon2_phi_isLoaded;
  float    muon1_energy_;
  TBranch *muon1_energy_branch;
  bool     muon1_energy_isLoaded;
  float    muon2_energy_;
  TBranch *muon2_energy_branch;
  bool     muon2_energy_isLoaded;
  float    muonLeadIso_;
  TBranch *muonLeadIso_branch;
  bool     muonLeadIso_isLoaded;
  float    muonSubleadIso_;
  TBranch *muonSubleadIso_branch;
  bool     muonSubleadIso_isLoaded;
  float    nMuonLoose_;
  TBranch *nMuonLoose_branch;
  bool     nMuonLoose_isLoaded;
  float    nMuonMedium_;
  TBranch *nMuonMedium_branch;
  bool     nMuonMedium_isLoaded;
  float    nMuonTight_;
  TBranch *nMuonTight_branch;
  bool     nMuonTight_isLoaded;
  float    nElecLoose_;
  TBranch *nElecLoose_branch;
  bool     nElecLoose_isLoaded;
  float    nElecMedium_;
  TBranch *nElecMedium_branch;
  bool     nElecMedium_isLoaded;
  float    nElecTight_;
  TBranch *nElecTight_branch;
  bool     nElecTight_isLoaded;
  float    n_bjets_;
  TBranch *n_bjets_branch;
  bool     n_bjets_isLoaded;
  float    n_jets_;
  TBranch *n_jets_branch;
  bool     n_jets_isLoaded;
  float    topTag_score_;
  TBranch *topTag_score_branch;
  bool     topTag_score_isLoaded;
  float    topTag_topMass_;
  TBranch *topTag_topMass_branch;
  bool     topTag_topMass_isLoaded;
  float    topTag_WMass_;
  TBranch *topTag_WMass_branch;
  bool     topTag_WMass_isLoaded;
  float    Mjj_;
  TBranch *Mjj_branch;
  bool     Mjj_isLoaded;
  float    MetPt_;
  TBranch *MetPt_branch;
  bool     MetPt_isLoaded;
  float    MetPhi_;
  TBranch *MetPhi_branch;
  bool     MetPhi_isLoaded;
  float    mT_;
  TBranch *mT_branch;
  bool     mT_isLoaded;
  float    tthMVA_;
  TBranch *tthMVA_branch;
  bool     tthMVA_isLoaded;
  float    tthMVA_RunII_;
  TBranch *tthMVA_RunII_branch;
  bool     tthMVA_RunII_isLoaded;
  float    jet_pt1_;
  TBranch *jet_pt1_branch;
  bool     jet_pt1_isLoaded;
  float    jet_eta1_;
  TBranch *jet_eta1_branch;
  bool     jet_eta1_isLoaded;
  float    jet_phi1_;
  TBranch *jet_phi1_branch;
  bool     jet_phi1_isLoaded;
  float    jet_bdiscriminant1_;
  TBranch *jet_bdiscriminant1_branch;
  bool     jet_bdiscriminant1_isLoaded;
  float    jet_pt2_;
  TBranch *jet_pt2_branch;
  bool     jet_pt2_isLoaded;
  float    jet_eta2_;
  TBranch *jet_eta2_branch;
  bool     jet_eta2_isLoaded;
  float    jet_phi2_;
  TBranch *jet_phi2_branch;
  bool     jet_phi2_isLoaded;
  float    jet_bdiscriminant2_;
  TBranch *jet_bdiscriminant2_branch;
  bool     jet_bdiscriminant2_isLoaded;
  float    jet_pt3_;
  TBranch *jet_pt3_branch;
  bool     jet_pt3_isLoaded;
  float    jet_eta3_;
  TBranch *jet_eta3_branch;
  bool     jet_eta3_isLoaded;
  float    jet_phi3_;
  TBranch *jet_phi3_branch;
  bool     jet_phi3_isLoaded;
  float    jet_bdiscriminant3_;
  TBranch *jet_bdiscriminant3_branch;
  bool     jet_bdiscriminant3_isLoaded;
  float    jet_pt4_;
  TBranch *jet_pt4_branch;
  bool     jet_pt4_isLoaded;
  float    jet_eta4_;
  TBranch *jet_eta4_branch;
  bool     jet_eta4_isLoaded;
  float    jet_phi4_;
  TBranch *jet_phi4_branch;
  bool     jet_phi4_isLoaded;
  float    jet_bdiscriminant4_;
  TBranch *jet_bdiscriminant4_branch;
  bool     jet_bdiscriminant4_isLoaded;
  float    jet_pt5_;
  TBranch *jet_pt5_branch;
  bool     jet_pt5_isLoaded;
  float    jet_eta5_;
  TBranch *jet_eta5_branch;
  bool     jet_eta5_isLoaded;
  float    jet_phi5_;
  TBranch *jet_phi5_branch;
  bool     jet_phi5_isLoaded;
  float    jet_bdiscriminant5_;
  TBranch *jet_bdiscriminant5_branch;
  bool     jet_bdiscriminant5_isLoaded;
  float    jet_pt6_;
  TBranch *jet_pt6_branch;
  bool     jet_pt6_isLoaded;
  float    jet_eta6_;
  TBranch *jet_eta6_branch;
  bool     jet_eta6_isLoaded;
  float    jet_phi6_;
  TBranch *jet_phi6_branch;
  bool     jet_phi6_isLoaded;
  float    jet_bdiscriminant6_;
  TBranch *jet_bdiscriminant6_branch;
  bool     jet_bdiscriminant6_isLoaded;
  float    jet_pt7_;
  TBranch *jet_pt7_branch;
  bool     jet_pt7_isLoaded;
  float    jet_eta7_;
  TBranch *jet_eta7_branch;
  bool     jet_eta7_isLoaded;
  float    jet_phi7_;
  TBranch *jet_phi7_branch;
  bool     jet_phi7_isLoaded;
  float    jet_bdiscriminant7_;
  TBranch *jet_bdiscriminant7_branch;
  bool     jet_bdiscriminant7_isLoaded;
  float    jet_pt8_;
  TBranch *jet_pt8_branch;
  bool     jet_pt8_isLoaded;
  float    jet_eta8_;
  TBranch *jet_eta8_branch;
  bool     jet_eta8_isLoaded;
  float    jet_phi8_;
  TBranch *jet_phi8_branch;
  bool     jet_phi8_isLoaded;
  float    jet_bdiscriminant8_;
  TBranch *jet_bdiscriminant8_branch;
  bool     jet_bdiscriminant8_isLoaded;
  float    jet_pt9_;
  TBranch *jet_pt9_branch;
  bool     jet_pt9_isLoaded;
  float    jet_eta9_;
  TBranch *jet_eta9_branch;
  bool     jet_eta9_isLoaded;
  float    jet_phi9_;
  TBranch *jet_phi9_branch;
  bool     jet_phi9_isLoaded;
  float    jet_bdiscriminant9_;
  TBranch *jet_bdiscriminant9_branch;
  bool     jet_bdiscriminant9_isLoaded;
  float    jet_pt10_;
  TBranch *jet_pt10_branch;
  bool     jet_pt10_isLoaded;
  float    jet_eta10_;
  TBranch *jet_eta10_branch;
  bool     jet_eta10_isLoaded;
  float    jet_phi10_;
  TBranch *jet_phi10_branch;
  bool     jet_phi10_isLoaded;
  float    jet_bdiscriminant10_;
  TBranch *jet_bdiscriminant10_branch;
  bool     jet_bdiscriminant10_isLoaded;
  float    jet_pt11_;
  TBranch *jet_pt11_branch;
  bool     jet_pt11_isLoaded;
  float    jet_eta11_;
  TBranch *jet_eta11_branch;
  bool     jet_eta11_isLoaded;
  float    jet_phi11_;
  TBranch *jet_phi11_branch;
  bool     jet_phi11_isLoaded;
  float    jet_bdiscriminant11_;
  TBranch *jet_bdiscriminant11_branch;
  bool     jet_bdiscriminant11_isLoaded;
  float    jet_pt12_;
  TBranch *jet_pt12_branch;
  bool     jet_pt12_isLoaded;
  float    jet_eta12_;
  TBranch *jet_eta12_branch;
  bool     jet_eta12_isLoaded;
  float    jet_phi12_;
  TBranch *jet_phi12_branch;
  bool     jet_phi12_isLoaded;
  float    jet_bdiscriminant12_;
  TBranch *jet_bdiscriminant12_branch;
  bool     jet_bdiscriminant12_isLoaded;
  float    jet_pt13_;
  TBranch *jet_pt13_branch;
  bool     jet_pt13_isLoaded;
  float    jet_eta13_;
  TBranch *jet_eta13_branch;
  bool     jet_eta13_isLoaded;
  float    jet_phi13_;
  TBranch *jet_phi13_branch;
  bool     jet_phi13_isLoaded;
  float    jet_bdiscriminant13_;
  TBranch *jet_bdiscriminant13_branch;
  bool     jet_bdiscriminant13_isLoaded;
  float    jet_pt14_;
  TBranch *jet_pt14_branch;
  bool     jet_pt14_isLoaded;
  float    jet_eta14_;
  TBranch *jet_eta14_branch;
  bool     jet_eta14_isLoaded;
  float    jet_phi14_;
  TBranch *jet_phi14_branch;
  bool     jet_phi14_isLoaded;
  float    jet_bdiscriminant14_;
  TBranch *jet_bdiscriminant14_branch;
  bool     jet_bdiscriminant14_isLoaded;
  float    jet_pt15_;
  TBranch *jet_pt15_branch;
  bool     jet_pt15_isLoaded;
  float    jet_eta15_;
  TBranch *jet_eta15_branch;
  bool     jet_eta15_isLoaded;
  float    jet_phi15_;
  TBranch *jet_phi15_branch;
  bool     jet_phi15_isLoaded;
  float    jet_bdiscriminant15_;
  TBranch *jet_bdiscriminant15_branch;
  bool     jet_bdiscriminant15_isLoaded;
  float    jet_bbdiscriminant1_;
  TBranch *jet_bbdiscriminant1_branch;
  bool     jet_bbdiscriminant1_isLoaded;
  float    jet_bbdiscriminant2_;
  TBranch *jet_bbdiscriminant2_branch;
  bool     jet_bbdiscriminant2_isLoaded;
  float    jet_bbdiscriminant3_;
  TBranch *jet_bbdiscriminant3_branch;
  bool     jet_bbdiscriminant3_isLoaded;
  float    jet_bbdiscriminant4_;
  TBranch *jet_bbdiscriminant4_branch;
  bool     jet_bbdiscriminant4_isLoaded;
  float    jet_bbdiscriminant5_;
  TBranch *jet_bbdiscriminant5_branch;
  bool     jet_bbdiscriminant5_isLoaded;
  float    jet_bbdiscriminant6_;
  TBranch *jet_bbdiscriminant6_branch;
  bool     jet_bbdiscriminant6_isLoaded;
  float    jet_bbdiscriminant7_;
  TBranch *jet_bbdiscriminant7_branch;
  bool     jet_bbdiscriminant7_isLoaded;
  float    jet_bbdiscriminant8_;
  TBranch *jet_bbdiscriminant8_branch;
  bool     jet_bbdiscriminant8_isLoaded;
  float    jet_bbdiscriminant9_;
  TBranch *jet_bbdiscriminant9_branch;
  bool     jet_bbdiscriminant9_isLoaded;
  float    jet_bbdiscriminant10_;
  TBranch *jet_bbdiscriminant10_branch;
  bool     jet_bbdiscriminant10_isLoaded;
  float    jet_bbdiscriminant11_;
  TBranch *jet_bbdiscriminant11_branch;
  bool     jet_bbdiscriminant11_isLoaded;
  float    jet_bbdiscriminant12_;
  TBranch *jet_bbdiscriminant12_branch;
  bool     jet_bbdiscriminant12_isLoaded;
  float    jet_bbdiscriminant13_;
  TBranch *jet_bbdiscriminant13_branch;
  bool     jet_bbdiscriminant13_isLoaded;
  float    jet_bbdiscriminant14_;
  TBranch *jet_bbdiscriminant14_branch;
  bool     jet_bbdiscriminant14_isLoaded;
  float    jet_bbdiscriminant15_;
  TBranch *jet_bbdiscriminant15_branch;
  bool     jet_bbdiscriminant15_isLoaded;
  float    jet_cdiscriminant1_;
  TBranch *jet_cdiscriminant1_branch;
  bool     jet_cdiscriminant1_isLoaded;
  float    jet_cdiscriminant2_;
  TBranch *jet_cdiscriminant2_branch;
  bool     jet_cdiscriminant2_isLoaded;
  float    jet_cdiscriminant3_;
  TBranch *jet_cdiscriminant3_branch;
  bool     jet_cdiscriminant3_isLoaded;
  float    jet_cdiscriminant4_;
  TBranch *jet_cdiscriminant4_branch;
  bool     jet_cdiscriminant4_isLoaded;
  float    jet_cdiscriminant5_;
  TBranch *jet_cdiscriminant5_branch;
  bool     jet_cdiscriminant5_isLoaded;
  float    jet_cdiscriminant6_;
  TBranch *jet_cdiscriminant6_branch;
  bool     jet_cdiscriminant6_isLoaded;
  float    jet_cdiscriminant7_;
  TBranch *jet_cdiscriminant7_branch;
  bool     jet_cdiscriminant7_isLoaded;
  float    jet_cdiscriminant8_;
  TBranch *jet_cdiscriminant8_branch;
  bool     jet_cdiscriminant8_isLoaded;
  float    jet_cdiscriminant9_;
  TBranch *jet_cdiscriminant9_branch;
  bool     jet_cdiscriminant9_isLoaded;
  float    jet_cdiscriminant10_;
  TBranch *jet_cdiscriminant10_branch;
  bool     jet_cdiscriminant10_isLoaded;
  float    jet_cdiscriminant11_;
  TBranch *jet_cdiscriminant11_branch;
  bool     jet_cdiscriminant11_isLoaded;
  float    jet_cdiscriminant12_;
  TBranch *jet_cdiscriminant12_branch;
  bool     jet_cdiscriminant12_isLoaded;
  float    jet_cdiscriminant13_;
  TBranch *jet_cdiscriminant13_branch;
  bool     jet_cdiscriminant13_isLoaded;
  float    jet_cdiscriminant14_;
  TBranch *jet_cdiscriminant14_branch;
  bool     jet_cdiscriminant14_isLoaded;
  float    jet_cdiscriminant15_;
  TBranch *jet_cdiscriminant15_branch;
  bool     jet_cdiscriminant15_isLoaded;
  float    jet_udsgdiscriminant1_;
  TBranch *jet_udsgdiscriminant1_branch;
  bool     jet_udsgdiscriminant1_isLoaded;
  float    jet_udsgdiscriminant2_;
  TBranch *jet_udsgdiscriminant2_branch;
  bool     jet_udsgdiscriminant2_isLoaded;
  float    jet_udsgdiscriminant3_;
  TBranch *jet_udsgdiscriminant3_branch;
  bool     jet_udsgdiscriminant3_isLoaded;
  float    jet_udsgdiscriminant4_;
  TBranch *jet_udsgdiscriminant4_branch;
  bool     jet_udsgdiscriminant4_isLoaded;
  float    jet_udsgdiscriminant5_;
  TBranch *jet_udsgdiscriminant5_branch;
  bool     jet_udsgdiscriminant5_isLoaded;
  float    jet_udsgdiscriminant6_;
  TBranch *jet_udsgdiscriminant6_branch;
  bool     jet_udsgdiscriminant6_isLoaded;
  float    jet_udsgdiscriminant7_;
  TBranch *jet_udsgdiscriminant7_branch;
  bool     jet_udsgdiscriminant7_isLoaded;
  float    jet_udsgdiscriminant8_;
  TBranch *jet_udsgdiscriminant8_branch;
  bool     jet_udsgdiscriminant8_isLoaded;
  float    jet_udsgdiscriminant9_;
  TBranch *jet_udsgdiscriminant9_branch;
  bool     jet_udsgdiscriminant9_isLoaded;
  float    jet_udsgdiscriminant10_;
  TBranch *jet_udsgdiscriminant10_branch;
  bool     jet_udsgdiscriminant10_isLoaded;
  float    jet_udsgdiscriminant11_;
  TBranch *jet_udsgdiscriminant11_branch;
  bool     jet_udsgdiscriminant11_isLoaded;
  float    jet_udsgdiscriminant12_;
  TBranch *jet_udsgdiscriminant12_branch;
  bool     jet_udsgdiscriminant12_isLoaded;
  float    jet_udsgdiscriminant13_;
  TBranch *jet_udsgdiscriminant13_branch;
  bool     jet_udsgdiscriminant13_isLoaded;
  float    jet_udsgdiscriminant14_;
  TBranch *jet_udsgdiscriminant14_branch;
  bool     jet_udsgdiscriminant14_isLoaded;
  float    jet_udsgdiscriminant15_;
  TBranch *jet_udsgdiscriminant15_branch;
  bool     jet_udsgdiscriminant15_isLoaded;
  float    jet_energy1_;
  TBranch *jet_energy1_branch;
  bool     jet_energy1_isLoaded;
  float    jet_energy2_;
  TBranch *jet_energy2_branch;
  bool     jet_energy2_isLoaded;
  float    jet_energy3_;
  TBranch *jet_energy3_branch;
  bool     jet_energy3_isLoaded;
  float    jet_energy4_;
  TBranch *jet_energy4_branch;
  bool     jet_energy4_isLoaded;
  float    jet_energy5_;
  TBranch *jet_energy5_branch;
  bool     jet_energy5_isLoaded;
  float    jet_energy6_;
  TBranch *jet_energy6_branch;
  bool     jet_energy6_isLoaded;
  float    jet_energy7_;
  TBranch *jet_energy7_branch;
  bool     jet_energy7_isLoaded;
  float    jet_energy8_;
  TBranch *jet_energy8_branch;
  bool     jet_energy8_isLoaded;
  float    jet_energy9_;
  TBranch *jet_energy9_branch;
  bool     jet_energy9_isLoaded;
  float    jet_energy10_;
  TBranch *jet_energy10_branch;
  bool     jet_energy10_isLoaded;
  float    jet_energy11_;
  TBranch *jet_energy11_branch;
  bool     jet_energy11_isLoaded;
  float    jet_energy12_;
  TBranch *jet_energy12_branch;
  bool     jet_energy12_isLoaded;
  float    jet_energy13_;
  TBranch *jet_energy13_branch;
  bool     jet_energy13_isLoaded;
  float    jet_energy14_;
  TBranch *jet_energy14_branch;
  bool     jet_energy14_isLoaded;
  float    jet_energy15_;
  TBranch *jet_energy15_branch;
  bool     jet_energy15_isLoaded;
  float    rho_;
  TBranch *rho_branch;
  bool     rho_isLoaded;
  int      nvtx_;
  TBranch *nvtx_branch;
  bool     nvtx_isLoaded;
  unsigned long long event_;
  TBranch *event_branch;
  bool     event_isLoaded;
  unsigned int lumi_;
  TBranch *lumi_branch;
  bool     lumi_isLoaded;
  int      processIndex_;
  TBranch *processIndex_branch;
  bool     processIndex_isLoaded;
  unsigned int run_;
  TBranch *run_branch;
  bool     run_isLoaded;
  float    npu_;
  TBranch *npu_branch;
  bool     npu_isLoaded;
  float    puweight_;
  TBranch *puweight_branch;
  bool     puweight_isLoaded;
public: 
void Init(TTree *tree);
void GetEntry(unsigned int idx); 
void LoadAllBranches(); 
  const int &candidate_id();
  const float &weight();
  const float &dipho_sumpt();
  const float &dipho_cosphi();
  const float &mass();
  const float &leadPt();
  const float &leadEt();
  const float &leadEnergy();
  const float &leadEta();
  const float &leadPhi();
  const float &lead_sieie();
  const float &lead_hoe();
  const float &lead_sigmaEoE();
  const float &lead_ptoM();
  const float &leadR9();
  const float &leadGenMatch();
  const float &leadPtGen();
  const float &leadGendeltaR();
  const float &subleadPt();
  const float &subleadEt();
  const float &subleadEnergy();
  const float &subleadEta();
  const float &subleadPhi();
  const float &sublead_sieie();
  const float &sublead_hoe();
  const float &sublead_sigmaEoE();
  const float &sublead_ptoM();
  const float &subleadR9();
  const float &subleadGenMatch();
  const float &subleadPtGen();
  const float &subleadGendeltaR();
  const float &leadIDMVA();
  const float &subleadIDMVA();
  const float &dipho_rapidity();
  const float &vertex_idx();
  const float &nGoodEls();
  const float &nGoodElsFromTau();
  const float &nGoodMus();
  const float &nGoodMusFromTau();
  const float &nGoodTaus();
  const float &diphoMVARes();
  const float &leadPassEVeto();
  const float &subleadPassEVeto();
  const float &leadPixelSeed();
  const float &subleadPixelSeed();
  const float &nb_loose();
  const float &nb_medium();
  const float &nb_tight();
  const float &rand();
  const float &lead_photon_type();
  const float &sublead_photon_type();
  const float &lead_closest_gen_Pt();
  const float &sublead_closest_gen_Pt();
  const float &lead_closest_gen_dR();
  const float &sublead_closest_gen_dR();
  const float &lead_PhoGenPt();
  const float &lead_PhoGenEta();
  const float &lead_PhoGenPhi();
  const float &lead_Prompt();
  const float &lead_Mad();
  const float &lead_Pythia();
  const float &lead_SimpleMomID();
  const float &lead_SimpleMomStatus();
  const float &lead_MomID();
  const float &lead_MomMomID();
  const float &lead_PassFrix();
  const float &lead_SmallestDr();
  const float &sublead_PhoGenPt();
  const float &sublead_PhoGenEta();
  const float &sublead_PhoGenPhi();
  const float &sublead_Prompt();
  const float &sublead_Mad();
  const float &sublead_Pythia();
  const float &sublead_SimpleMomID();
  const float &sublead_SimpleMomStatus();
  const float &sublead_MomID();
  const float &sublead_MomMomID();
  const float &sublead_PassFrix();
  const float &sublead_SmallestDr();
  const float &n_ele();
  const float &ele1_pt();
  const float &ele2_pt();
  const float &ele1_eta();
  const float &ele2_eta();
  const float &ele1_phi();
  const float &ele2_phi();
  const float &ele1_energy();
  const float &ele2_energy();
  const float &n_muons();
  const float &muon1_pt();
  const float &muon2_pt();
  const float &muon1_eta();
  const float &muon2_eta();
  const float &muon1_phi();
  const float &muon2_phi();
  const float &muon1_energy();
  const float &muon2_energy();
  const float &muonLeadIso();
  const float &muonSubleadIso();
  const float &nMuonLoose();
  const float &nMuonMedium();
  const float &nMuonTight();
  const float &nElecLoose();
  const float &nElecMedium();
  const float &nElecTight();
  const float &n_bjets();
  const float &n_jets();
  const float &topTag_score();
  const float &topTag_topMass();
  const float &topTag_WMass();
  const float &Mjj();
  const float &MetPt();
  const float &MetPhi();
  const float &mT();
  const float &tthMVA();
  const float &tthMVA_RunII();
  const float &jet_pt1();
  const float &jet_eta1();
  const float &jet_phi1();
  const float &jet_bdiscriminant1();
  const float &jet_pt2();
  const float &jet_eta2();
  const float &jet_phi2();
  const float &jet_bdiscriminant2();
  const float &jet_pt3();
  const float &jet_eta3();
  const float &jet_phi3();
  const float &jet_bdiscriminant3();
  const float &jet_pt4();
  const float &jet_eta4();
  const float &jet_phi4();
  const float &jet_bdiscriminant4();
  const float &jet_pt5();
  const float &jet_eta5();
  const float &jet_phi5();
  const float &jet_bdiscriminant5();
  const float &jet_pt6();
  const float &jet_eta6();
  const float &jet_phi6();
  const float &jet_bdiscriminant6();
  const float &jet_pt7();
  const float &jet_eta7();
  const float &jet_phi7();
  const float &jet_bdiscriminant7();
  const float &jet_pt8();
  const float &jet_eta8();
  const float &jet_phi8();
  const float &jet_bdiscriminant8();
  const float &jet_pt9();
  const float &jet_eta9();
  const float &jet_phi9();
  const float &jet_bdiscriminant9();
  const float &jet_pt10();
  const float &jet_eta10();
  const float &jet_phi10();
  const float &jet_bdiscriminant10();
  const float &jet_pt11();
  const float &jet_eta11();
  const float &jet_phi11();
  const float &jet_bdiscriminant11();
  const float &jet_pt12();
  const float &jet_eta12();
  const float &jet_phi12();
  const float &jet_bdiscriminant12();
  const float &jet_pt13();
  const float &jet_eta13();
  const float &jet_phi13();
  const float &jet_bdiscriminant13();
  const float &jet_pt14();
  const float &jet_eta14();
  const float &jet_phi14();
  const float &jet_bdiscriminant14();
  const float &jet_pt15();
  const float &jet_eta15();
  const float &jet_phi15();
  const float &jet_bdiscriminant15();
  const float &jet_bbdiscriminant1();
  const float &jet_bbdiscriminant2();
  const float &jet_bbdiscriminant3();
  const float &jet_bbdiscriminant4();
  const float &jet_bbdiscriminant5();
  const float &jet_bbdiscriminant6();
  const float &jet_bbdiscriminant7();
  const float &jet_bbdiscriminant8();
  const float &jet_bbdiscriminant9();
  const float &jet_bbdiscriminant10();
  const float &jet_bbdiscriminant11();
  const float &jet_bbdiscriminant12();
  const float &jet_bbdiscriminant13();
  const float &jet_bbdiscriminant14();
  const float &jet_bbdiscriminant15();
  const float &jet_cdiscriminant1();
  const float &jet_cdiscriminant2();
  const float &jet_cdiscriminant3();
  const float &jet_cdiscriminant4();
  const float &jet_cdiscriminant5();
  const float &jet_cdiscriminant6();
  const float &jet_cdiscriminant7();
  const float &jet_cdiscriminant8();
  const float &jet_cdiscriminant9();
  const float &jet_cdiscriminant10();
  const float &jet_cdiscriminant11();
  const float &jet_cdiscriminant12();
  const float &jet_cdiscriminant13();
  const float &jet_cdiscriminant14();
  const float &jet_cdiscriminant15();
  const float &jet_udsgdiscriminant1();
  const float &jet_udsgdiscriminant2();
  const float &jet_udsgdiscriminant3();
  const float &jet_udsgdiscriminant4();
  const float &jet_udsgdiscriminant5();
  const float &jet_udsgdiscriminant6();
  const float &jet_udsgdiscriminant7();
  const float &jet_udsgdiscriminant8();
  const float &jet_udsgdiscriminant9();
  const float &jet_udsgdiscriminant10();
  const float &jet_udsgdiscriminant11();
  const float &jet_udsgdiscriminant12();
  const float &jet_udsgdiscriminant13();
  const float &jet_udsgdiscriminant14();
  const float &jet_udsgdiscriminant15();
  const float &jet_energy1();
  const float &jet_energy2();
  const float &jet_energy3();
  const float &jet_energy4();
  const float &jet_energy5();
  const float &jet_energy6();
  const float &jet_energy7();
  const float &jet_energy8();
  const float &jet_energy9();
  const float &jet_energy10();
  const float &jet_energy11();
  const float &jet_energy12();
  const float &jet_energy13();
  const float &jet_energy14();
  const float &jet_energy15();
  const float &rho();
  const int &nvtx();
  const unsigned long long &event();
  const unsigned int &lumi();
  const int &processIndex();
  const unsigned int &run();
  const float &npu();
  const float &puweight();

  static void progress(int nEventsTotal, int nEventsChain);
};

#ifndef __CINT__
extern ttHLeptonic cms3;
#endif

namespace tas {
  const int &candidate_id();
  const float &weight();
  const float &dipho_sumpt();
  const float &dipho_cosphi();
  const float &mass();
  const float &leadPt();
  const float &leadEt();
  const float &leadEnergy();
  const float &leadEta();
  const float &leadPhi();
  const float &lead_sieie();
  const float &lead_hoe();
  const float &lead_sigmaEoE();
  const float &lead_ptoM();
  const float &leadR9();
  const float &leadGenMatch();
  const float &leadPtGen();
  const float &leadGendeltaR();
  const float &subleadPt();
  const float &subleadEt();
  const float &subleadEnergy();
  const float &subleadEta();
  const float &subleadPhi();
  const float &sublead_sieie();
  const float &sublead_hoe();
  const float &sublead_sigmaEoE();
  const float &sublead_ptoM();
  const float &subleadR9();
  const float &subleadGenMatch();
  const float &subleadPtGen();
  const float &subleadGendeltaR();
  const float &leadIDMVA();
  const float &subleadIDMVA();
  const float &dipho_rapidity();
  const float &vertex_idx();
  const float &nGoodEls();
  const float &nGoodElsFromTau();
  const float &nGoodMus();
  const float &nGoodMusFromTau();
  const float &nGoodTaus();
  const float &diphoMVARes();
  const float &leadPassEVeto();
  const float &subleadPassEVeto();
  const float &leadPixelSeed();
  const float &subleadPixelSeed();
  const float &nb_loose();
  const float &nb_medium();
  const float &nb_tight();
  const float &rand();
  const float &lead_photon_type();
  const float &sublead_photon_type();
  const float &lead_closest_gen_Pt();
  const float &sublead_closest_gen_Pt();
  const float &lead_closest_gen_dR();
  const float &sublead_closest_gen_dR();
  const float &lead_PhoGenPt();
  const float &lead_PhoGenEta();
  const float &lead_PhoGenPhi();
  const float &lead_Prompt();
  const float &lead_Mad();
  const float &lead_Pythia();
  const float &lead_SimpleMomID();
  const float &lead_SimpleMomStatus();
  const float &lead_MomID();
  const float &lead_MomMomID();
  const float &lead_PassFrix();
  const float &lead_SmallestDr();
  const float &sublead_PhoGenPt();
  const float &sublead_PhoGenEta();
  const float &sublead_PhoGenPhi();
  const float &sublead_Prompt();
  const float &sublead_Mad();
  const float &sublead_Pythia();
  const float &sublead_SimpleMomID();
  const float &sublead_SimpleMomStatus();
  const float &sublead_MomID();
  const float &sublead_MomMomID();
  const float &sublead_PassFrix();
  const float &sublead_SmallestDr();
  const float &n_ele();
  const float &ele1_pt();
  const float &ele2_pt();
  const float &ele1_eta();
  const float &ele2_eta();
  const float &ele1_phi();
  const float &ele2_phi();
  const float &ele1_energy();
  const float &ele2_energy();
  const float &n_muons();
  const float &muon1_pt();
  const float &muon2_pt();
  const float &muon1_eta();
  const float &muon2_eta();
  const float &muon1_phi();
  const float &muon2_phi();
  const float &muon1_energy();
  const float &muon2_energy();
  const float &muonLeadIso();
  const float &muonSubleadIso();
  const float &nMuonLoose();
  const float &nMuonMedium();
  const float &nMuonTight();
  const float &nElecLoose();
  const float &nElecMedium();
  const float &nElecTight();
  const float &n_bjets();
  const float &n_jets();
  const float &topTag_score();
  const float &topTag_topMass();
  const float &topTag_WMass();
  const float &Mjj();
  const float &MetPt();
  const float &MetPhi();
  const float &mT();
  const float &tthMVA();
  const float &tthMVA_RunII();
  const float &jet_pt1();
  const float &jet_eta1();
  const float &jet_phi1();
  const float &jet_bdiscriminant1();
  const float &jet_pt2();
  const float &jet_eta2();
  const float &jet_phi2();
  const float &jet_bdiscriminant2();
  const float &jet_pt3();
  const float &jet_eta3();
  const float &jet_phi3();
  const float &jet_bdiscriminant3();
  const float &jet_pt4();
  const float &jet_eta4();
  const float &jet_phi4();
  const float &jet_bdiscriminant4();
  const float &jet_pt5();
  const float &jet_eta5();
  const float &jet_phi5();
  const float &jet_bdiscriminant5();
  const float &jet_pt6();
  const float &jet_eta6();
  const float &jet_phi6();
  const float &jet_bdiscriminant6();
  const float &jet_pt7();
  const float &jet_eta7();
  const float &jet_phi7();
  const float &jet_bdiscriminant7();
  const float &jet_pt8();
  const float &jet_eta8();
  const float &jet_phi8();
  const float &jet_bdiscriminant8();
  const float &jet_pt9();
  const float &jet_eta9();
  const float &jet_phi9();
  const float &jet_bdiscriminant9();
  const float &jet_pt10();
  const float &jet_eta10();
  const float &jet_phi10();
  const float &jet_bdiscriminant10();
  const float &jet_pt11();
  const float &jet_eta11();
  const float &jet_phi11();
  const float &jet_bdiscriminant11();
  const float &jet_pt12();
  const float &jet_eta12();
  const float &jet_phi12();
  const float &jet_bdiscriminant12();
  const float &jet_pt13();
  const float &jet_eta13();
  const float &jet_phi13();
  const float &jet_bdiscriminant13();
  const float &jet_pt14();
  const float &jet_eta14();
  const float &jet_phi14();
  const float &jet_bdiscriminant14();
  const float &jet_pt15();
  const float &jet_eta15();
  const float &jet_phi15();
  const float &jet_bdiscriminant15();
  const float &jet_bbdiscriminant1();
  const float &jet_bbdiscriminant2();
  const float &jet_bbdiscriminant3();
  const float &jet_bbdiscriminant4();
  const float &jet_bbdiscriminant5();
  const float &jet_bbdiscriminant6();
  const float &jet_bbdiscriminant7();
  const float &jet_bbdiscriminant8();
  const float &jet_bbdiscriminant9();
  const float &jet_bbdiscriminant10();
  const float &jet_bbdiscriminant11();
  const float &jet_bbdiscriminant12();
  const float &jet_bbdiscriminant13();
  const float &jet_bbdiscriminant14();
  const float &jet_bbdiscriminant15();
  const float &jet_cdiscriminant1();
  const float &jet_cdiscriminant2();
  const float &jet_cdiscriminant3();
  const float &jet_cdiscriminant4();
  const float &jet_cdiscriminant5();
  const float &jet_cdiscriminant6();
  const float &jet_cdiscriminant7();
  const float &jet_cdiscriminant8();
  const float &jet_cdiscriminant9();
  const float &jet_cdiscriminant10();
  const float &jet_cdiscriminant11();
  const float &jet_cdiscriminant12();
  const float &jet_cdiscriminant13();
  const float &jet_cdiscriminant14();
  const float &jet_cdiscriminant15();
  const float &jet_udsgdiscriminant1();
  const float &jet_udsgdiscriminant2();
  const float &jet_udsgdiscriminant3();
  const float &jet_udsgdiscriminant4();
  const float &jet_udsgdiscriminant5();
  const float &jet_udsgdiscriminant6();
  const float &jet_udsgdiscriminant7();
  const float &jet_udsgdiscriminant8();
  const float &jet_udsgdiscriminant9();
  const float &jet_udsgdiscriminant10();
  const float &jet_udsgdiscriminant11();
  const float &jet_udsgdiscriminant12();
  const float &jet_udsgdiscriminant13();
  const float &jet_udsgdiscriminant14();
  const float &jet_udsgdiscriminant15();
  const float &jet_energy1();
  const float &jet_energy2();
  const float &jet_energy3();
  const float &jet_energy4();
  const float &jet_energy5();
  const float &jet_energy6();
  const float &jet_energy7();
  const float &jet_energy8();
  const float &jet_energy9();
  const float &jet_energy10();
  const float &jet_energy11();
  const float &jet_energy12();
  const float &jet_energy13();
  const float &jet_energy14();
  const float &jet_energy15();
  const float &rho();
  const int &nvtx();
  const unsigned long long &event();
  const unsigned int &lumi();
  const int &processIndex();
  const unsigned int &run();
  const float &npu();
  const float &puweight();
}
#endif
