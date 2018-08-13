// -*- C++ -*-
// This is a header file generated with the command:
// makeCMS3ClassFiles("merged_ntuple.root", "tthHadronicTagDumper/trees/tth_13TeV_all", "ttHHadronic", "tas", "cms3")

#ifndef ttHHadronic_H
#define ttHHadronic_H

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
class ttHHadronic {
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
  float    n_bjets_;
  TBranch *n_bjets_branch;
  bool     n_bjets_isLoaded;
  float    n_jets_;
  TBranch *n_jets_branch;
  bool     n_jets_isLoaded;
  float    bjet1_pt_;
  TBranch *bjet1_pt_branch;
  bool     bjet1_pt_isLoaded;
  float    bjet2_pt_;
  TBranch *bjet2_pt_branch;
  bool     bjet2_pt_isLoaded;
  float    MetPt_;
  TBranch *MetPt_branch;
  bool     MetPt_isLoaded;
  float    MetPhi_;
  TBranch *MetPhi_branch;
  bool     MetPhi_isLoaded;
  float    jet1_pt_;
  TBranch *jet1_pt_branch;
  bool     jet1_pt_isLoaded;
  float    jet2_pt_;
  TBranch *jet2_pt_branch;
  bool     jet2_pt_isLoaded;
  float    jet3_pt_;
  TBranch *jet3_pt_branch;
  bool     jet3_pt_isLoaded;
  float    jet4_pt_;
  TBranch *jet4_pt_branch;
  bool     jet4_pt_isLoaded;
  float    jet5_pt_;
  TBranch *jet5_pt_branch;
  bool     jet5_pt_isLoaded;
  float    jet6_pt_;
  TBranch *jet6_pt_branch;
  bool     jet6_pt_isLoaded;
  float    jet7_pt_;
  TBranch *jet7_pt_branch;
  bool     jet7_pt_isLoaded;
  float    jet8_pt_;
  TBranch *jet8_pt_branch;
  bool     jet8_pt_isLoaded;
  float    jet9_pt_;
  TBranch *jet9_pt_branch;
  bool     jet9_pt_isLoaded;
  float    jet10_pt_;
  TBranch *jet10_pt_branch;
  bool     jet10_pt_isLoaded;
  float    jet11_pt_;
  TBranch *jet11_pt_branch;
  bool     jet11_pt_isLoaded;
  float    jet12_pt_;
  TBranch *jet12_pt_branch;
  bool     jet12_pt_isLoaded;
  float    jet13_pt_;
  TBranch *jet13_pt_branch;
  bool     jet13_pt_isLoaded;
  float    jet14_pt_;
  TBranch *jet14_pt_branch;
  bool     jet14_pt_isLoaded;
  float    jet15_pt_;
  TBranch *jet15_pt_branch;
  bool     jet15_pt_isLoaded;
  float    jet1_eta_;
  TBranch *jet1_eta_branch;
  bool     jet1_eta_isLoaded;
  float    jet2_eta_;
  TBranch *jet2_eta_branch;
  bool     jet2_eta_isLoaded;
  float    jet3_eta_;
  TBranch *jet3_eta_branch;
  bool     jet3_eta_isLoaded;
  float    jet4_eta_;
  TBranch *jet4_eta_branch;
  bool     jet4_eta_isLoaded;
  float    jet5_eta_;
  TBranch *jet5_eta_branch;
  bool     jet5_eta_isLoaded;
  float    jet6_eta_;
  TBranch *jet6_eta_branch;
  bool     jet6_eta_isLoaded;
  float    jet7_eta_;
  TBranch *jet7_eta_branch;
  bool     jet7_eta_isLoaded;
  float    jet8_eta_;
  TBranch *jet8_eta_branch;
  bool     jet8_eta_isLoaded;
  float    jet9_eta_;
  TBranch *jet9_eta_branch;
  bool     jet9_eta_isLoaded;
  float    jet10_eta_;
  TBranch *jet10_eta_branch;
  bool     jet10_eta_isLoaded;
  float    jet11_eta_;
  TBranch *jet11_eta_branch;
  bool     jet11_eta_isLoaded;
  float    jet12_eta_;
  TBranch *jet12_eta_branch;
  bool     jet12_eta_isLoaded;
  float    jet13_eta_;
  TBranch *jet13_eta_branch;
  bool     jet13_eta_isLoaded;
  float    jet14_eta_;
  TBranch *jet14_eta_branch;
  bool     jet14_eta_isLoaded;
  float    jet15_eta_;
  TBranch *jet15_eta_branch;
  bool     jet15_eta_isLoaded;
  float    jet1_phi_;
  TBranch *jet1_phi_branch;
  bool     jet1_phi_isLoaded;
  float    jet2_phi_;
  TBranch *jet2_phi_branch;
  bool     jet2_phi_isLoaded;
  float    jet3_phi_;
  TBranch *jet3_phi_branch;
  bool     jet3_phi_isLoaded;
  float    jet4_phi_;
  TBranch *jet4_phi_branch;
  bool     jet4_phi_isLoaded;
  float    jet5_phi_;
  TBranch *jet5_phi_branch;
  bool     jet5_phi_isLoaded;
  float    jet6_phi_;
  TBranch *jet6_phi_branch;
  bool     jet6_phi_isLoaded;
  float    jet7_phi_;
  TBranch *jet7_phi_branch;
  bool     jet7_phi_isLoaded;
  float    jet8_phi_;
  TBranch *jet8_phi_branch;
  bool     jet8_phi_isLoaded;
  float    jet9_phi_;
  TBranch *jet9_phi_branch;
  bool     jet9_phi_isLoaded;
  float    jet10_phi_;
  TBranch *jet10_phi_branch;
  bool     jet10_phi_isLoaded;
  float    jet11_phi_;
  TBranch *jet11_phi_branch;
  bool     jet11_phi_isLoaded;
  float    jet12_phi_;
  TBranch *jet12_phi_branch;
  bool     jet12_phi_isLoaded;
  float    jet13_phi_;
  TBranch *jet13_phi_branch;
  bool     jet13_phi_isLoaded;
  float    jet14_phi_;
  TBranch *jet14_phi_branch;
  bool     jet14_phi_isLoaded;
  float    jet15_phi_;
  TBranch *jet15_phi_branch;
  bool     jet15_phi_isLoaded;
  float    jet1_bdiscriminant_;
  TBranch *jet1_bdiscriminant_branch;
  bool     jet1_bdiscriminant_isLoaded;
  float    jet2_bdiscriminant_;
  TBranch *jet2_bdiscriminant_branch;
  bool     jet2_bdiscriminant_isLoaded;
  float    jet3_bdiscriminant_;
  TBranch *jet3_bdiscriminant_branch;
  bool     jet3_bdiscriminant_isLoaded;
  float    jet4_bdiscriminant_;
  TBranch *jet4_bdiscriminant_branch;
  bool     jet4_bdiscriminant_isLoaded;
  float    jet5_bdiscriminant_;
  TBranch *jet5_bdiscriminant_branch;
  bool     jet5_bdiscriminant_isLoaded;
  float    jet6_bdiscriminant_;
  TBranch *jet6_bdiscriminant_branch;
  bool     jet6_bdiscriminant_isLoaded;
  float    jet7_bdiscriminant_;
  TBranch *jet7_bdiscriminant_branch;
  bool     jet7_bdiscriminant_isLoaded;
  float    jet8_bdiscriminant_;
  TBranch *jet8_bdiscriminant_branch;
  bool     jet8_bdiscriminant_isLoaded;
  float    jet9_bdiscriminant_;
  TBranch *jet9_bdiscriminant_branch;
  bool     jet9_bdiscriminant_isLoaded;
  float    jet10_bdiscriminant_;
  TBranch *jet10_bdiscriminant_branch;
  bool     jet10_bdiscriminant_isLoaded;
  float    jet11_bdiscriminant_;
  TBranch *jet11_bdiscriminant_branch;
  bool     jet11_bdiscriminant_isLoaded;
  float    jet12_bdiscriminant_;
  TBranch *jet12_bdiscriminant_branch;
  bool     jet12_bdiscriminant_isLoaded;
  float    jet13_bdiscriminant_;
  TBranch *jet13_bdiscriminant_branch;
  bool     jet13_bdiscriminant_isLoaded;
  float    jet14_bdiscriminant_;
  TBranch *jet14_bdiscriminant_branch;
  bool     jet14_bdiscriminant_isLoaded;
  float    jet15_bdiscriminant_;
  TBranch *jet15_bdiscriminant_branch;
  bool     jet15_bdiscriminant_isLoaded;
  float    jet1_bbdiscriminant_;
  TBranch *jet1_bbdiscriminant_branch;
  bool     jet1_bbdiscriminant_isLoaded;
  float    jet2_bbdiscriminant_;
  TBranch *jet2_bbdiscriminant_branch;
  bool     jet2_bbdiscriminant_isLoaded;
  float    jet3_bbdiscriminant_;
  TBranch *jet3_bbdiscriminant_branch;
  bool     jet3_bbdiscriminant_isLoaded;
  float    jet4_bbdiscriminant_;
  TBranch *jet4_bbdiscriminant_branch;
  bool     jet4_bbdiscriminant_isLoaded;
  float    jet5_bbdiscriminant_;
  TBranch *jet5_bbdiscriminant_branch;
  bool     jet5_bbdiscriminant_isLoaded;
  float    jet6_bbdiscriminant_;
  TBranch *jet6_bbdiscriminant_branch;
  bool     jet6_bbdiscriminant_isLoaded;
  float    jet7_bbdiscriminant_;
  TBranch *jet7_bbdiscriminant_branch;
  bool     jet7_bbdiscriminant_isLoaded;
  float    jet8_bbdiscriminant_;
  TBranch *jet8_bbdiscriminant_branch;
  bool     jet8_bbdiscriminant_isLoaded;
  float    jet9_bbdiscriminant_;
  TBranch *jet9_bbdiscriminant_branch;
  bool     jet9_bbdiscriminant_isLoaded;
  float    jet10_bbdiscriminant_;
  TBranch *jet10_bbdiscriminant_branch;
  bool     jet10_bbdiscriminant_isLoaded;
  float    jet11_bbdiscriminant_;
  TBranch *jet11_bbdiscriminant_branch;
  bool     jet11_bbdiscriminant_isLoaded;
  float    jet12_bbdiscriminant_;
  TBranch *jet12_bbdiscriminant_branch;
  bool     jet12_bbdiscriminant_isLoaded;
  float    jet13_bbdiscriminant_;
  TBranch *jet13_bbdiscriminant_branch;
  bool     jet13_bbdiscriminant_isLoaded;
  float    jet14_bbdiscriminant_;
  TBranch *jet14_bbdiscriminant_branch;
  bool     jet14_bbdiscriminant_isLoaded;
  float    jet15_bbdiscriminant_;
  TBranch *jet15_bbdiscriminant_branch;
  bool     jet15_bbdiscriminant_isLoaded;
  float    jet1_cdiscriminant_;
  TBranch *jet1_cdiscriminant_branch;
  bool     jet1_cdiscriminant_isLoaded;
  float    jet2_cdiscriminant_;
  TBranch *jet2_cdiscriminant_branch;
  bool     jet2_cdiscriminant_isLoaded;
  float    jet3_cdiscriminant_;
  TBranch *jet3_cdiscriminant_branch;
  bool     jet3_cdiscriminant_isLoaded;
  float    jet4_cdiscriminant_;
  TBranch *jet4_cdiscriminant_branch;
  bool     jet4_cdiscriminant_isLoaded;
  float    jet5_cdiscriminant_;
  TBranch *jet5_cdiscriminant_branch;
  bool     jet5_cdiscriminant_isLoaded;
  float    jet6_cdiscriminant_;
  TBranch *jet6_cdiscriminant_branch;
  bool     jet6_cdiscriminant_isLoaded;
  float    jet7_cdiscriminant_;
  TBranch *jet7_cdiscriminant_branch;
  bool     jet7_cdiscriminant_isLoaded;
  float    jet8_cdiscriminant_;
  TBranch *jet8_cdiscriminant_branch;
  bool     jet8_cdiscriminant_isLoaded;
  float    jet9_cdiscriminant_;
  TBranch *jet9_cdiscriminant_branch;
  bool     jet9_cdiscriminant_isLoaded;
  float    jet10_cdiscriminant_;
  TBranch *jet10_cdiscriminant_branch;
  bool     jet10_cdiscriminant_isLoaded;
  float    jet11_cdiscriminant_;
  TBranch *jet11_cdiscriminant_branch;
  bool     jet11_cdiscriminant_isLoaded;
  float    jet12_cdiscriminant_;
  TBranch *jet12_cdiscriminant_branch;
  bool     jet12_cdiscriminant_isLoaded;
  float    jet13_cdiscriminant_;
  TBranch *jet13_cdiscriminant_branch;
  bool     jet13_cdiscriminant_isLoaded;
  float    jet14_cdiscriminant_;
  TBranch *jet14_cdiscriminant_branch;
  bool     jet14_cdiscriminant_isLoaded;
  float    jet15_cdiscriminant_;
  TBranch *jet15_cdiscriminant_branch;
  bool     jet15_cdiscriminant_isLoaded;
  float    jet1_udsgdiscriminant_;
  TBranch *jet1_udsgdiscriminant_branch;
  bool     jet1_udsgdiscriminant_isLoaded;
  float    jet2_udsgdiscriminant_;
  TBranch *jet2_udsgdiscriminant_branch;
  bool     jet2_udsgdiscriminant_isLoaded;
  float    jet3_udsgdiscriminant_;
  TBranch *jet3_udsgdiscriminant_branch;
  bool     jet3_udsgdiscriminant_isLoaded;
  float    jet4_udsgdiscriminant_;
  TBranch *jet4_udsgdiscriminant_branch;
  bool     jet4_udsgdiscriminant_isLoaded;
  float    jet5_udsgdiscriminant_;
  TBranch *jet5_udsgdiscriminant_branch;
  bool     jet5_udsgdiscriminant_isLoaded;
  float    jet6_udsgdiscriminant_;
  TBranch *jet6_udsgdiscriminant_branch;
  bool     jet6_udsgdiscriminant_isLoaded;
  float    jet7_udsgdiscriminant_;
  TBranch *jet7_udsgdiscriminant_branch;
  bool     jet7_udsgdiscriminant_isLoaded;
  float    jet8_udsgdiscriminant_;
  TBranch *jet8_udsgdiscriminant_branch;
  bool     jet8_udsgdiscriminant_isLoaded;
  float    jet9_udsgdiscriminant_;
  TBranch *jet9_udsgdiscriminant_branch;
  bool     jet9_udsgdiscriminant_isLoaded;
  float    jet10_udsgdiscriminant_;
  TBranch *jet10_udsgdiscriminant_branch;
  bool     jet10_udsgdiscriminant_isLoaded;
  float    jet11_udsgdiscriminant_;
  TBranch *jet11_udsgdiscriminant_branch;
  bool     jet11_udsgdiscriminant_isLoaded;
  float    jet12_udsgdiscriminant_;
  TBranch *jet12_udsgdiscriminant_branch;
  bool     jet12_udsgdiscriminant_isLoaded;
  float    jet13_udsgdiscriminant_;
  TBranch *jet13_udsgdiscriminant_branch;
  bool     jet13_udsgdiscriminant_isLoaded;
  float    jet14_udsgdiscriminant_;
  TBranch *jet14_udsgdiscriminant_branch;
  bool     jet14_udsgdiscriminant_isLoaded;
  float    jet15_udsgdiscriminant_;
  TBranch *jet15_udsgdiscriminant_branch;
  bool     jet15_udsgdiscriminant_isLoaded;
  float    jet1_energy_;
  TBranch *jet1_energy_branch;
  bool     jet1_energy_isLoaded;
  float    jet2_energy_;
  TBranch *jet2_energy_branch;
  bool     jet2_energy_isLoaded;
  float    jet3_energy_;
  TBranch *jet3_energy_branch;
  bool     jet3_energy_isLoaded;
  float    jet4_energy_;
  TBranch *jet4_energy_branch;
  bool     jet4_energy_isLoaded;
  float    jet5_energy_;
  TBranch *jet5_energy_branch;
  bool     jet5_energy_isLoaded;
  float    jet6_energy_;
  TBranch *jet6_energy_branch;
  bool     jet6_energy_isLoaded;
  float    jet7_energy_;
  TBranch *jet7_energy_branch;
  bool     jet7_energy_isLoaded;
  float    jet8_energy_;
  TBranch *jet8_energy_branch;
  bool     jet8_energy_isLoaded;
  float    jet9_energy_;
  TBranch *jet9_energy_branch;
  bool     jet9_energy_isLoaded;
  float    jet10_energy_;
  TBranch *jet10_energy_branch;
  bool     jet10_energy_isLoaded;
  float    jet11_energy_;
  TBranch *jet11_energy_branch;
  bool     jet11_energy_isLoaded;
  float    jet12_energy_;
  TBranch *jet12_energy_branch;
  bool     jet12_energy_isLoaded;
  float    jet13_energy_;
  TBranch *jet13_energy_branch;
  bool     jet13_energy_isLoaded;
  float    jet14_energy_;
  TBranch *jet14_energy_branch;
  bool     jet14_energy_isLoaded;
  float    jet15_energy_;
  TBranch *jet15_energy_branch;
  bool     jet15_energy_isLoaded;
  float    bjet1_csv_;
  TBranch *bjet1_csv_branch;
  bool     bjet1_csv_isLoaded;
  float    bjet2_csv_;
  TBranch *bjet2_csv_branch;
  bool     bjet2_csv_isLoaded;
  float    tthMVA_;
  TBranch *tthMVA_branch;
  bool     tthMVA_isLoaded;
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
  const float &n_bjets();
  const float &n_jets();
  const float &bjet1_pt();
  const float &bjet2_pt();
  const float &MetPt();
  const float &MetPhi();
  const float &jet1_pt();
  const float &jet2_pt();
  const float &jet3_pt();
  const float &jet4_pt();
  const float &jet5_pt();
  const float &jet6_pt();
  const float &jet7_pt();
  const float &jet8_pt();
  const float &jet9_pt();
  const float &jet10_pt();
  const float &jet11_pt();
  const float &jet12_pt();
  const float &jet13_pt();
  const float &jet14_pt();
  const float &jet15_pt();
  const float &jet1_eta();
  const float &jet2_eta();
  const float &jet3_eta();
  const float &jet4_eta();
  const float &jet5_eta();
  const float &jet6_eta();
  const float &jet7_eta();
  const float &jet8_eta();
  const float &jet9_eta();
  const float &jet10_eta();
  const float &jet11_eta();
  const float &jet12_eta();
  const float &jet13_eta();
  const float &jet14_eta();
  const float &jet15_eta();
  const float &jet1_phi();
  const float &jet2_phi();
  const float &jet3_phi();
  const float &jet4_phi();
  const float &jet5_phi();
  const float &jet6_phi();
  const float &jet7_phi();
  const float &jet8_phi();
  const float &jet9_phi();
  const float &jet10_phi();
  const float &jet11_phi();
  const float &jet12_phi();
  const float &jet13_phi();
  const float &jet14_phi();
  const float &jet15_phi();
  const float &jet1_bdiscriminant();
  const float &jet2_bdiscriminant();
  const float &jet3_bdiscriminant();
  const float &jet4_bdiscriminant();
  const float &jet5_bdiscriminant();
  const float &jet6_bdiscriminant();
  const float &jet7_bdiscriminant();
  const float &jet8_bdiscriminant();
  const float &jet9_bdiscriminant();
  const float &jet10_bdiscriminant();
  const float &jet11_bdiscriminant();
  const float &jet12_bdiscriminant();
  const float &jet13_bdiscriminant();
  const float &jet14_bdiscriminant();
  const float &jet15_bdiscriminant();
  const float &jet1_bbdiscriminant();
  const float &jet2_bbdiscriminant();
  const float &jet3_bbdiscriminant();
  const float &jet4_bbdiscriminant();
  const float &jet5_bbdiscriminant();
  const float &jet6_bbdiscriminant();
  const float &jet7_bbdiscriminant();
  const float &jet8_bbdiscriminant();
  const float &jet9_bbdiscriminant();
  const float &jet10_bbdiscriminant();
  const float &jet11_bbdiscriminant();
  const float &jet12_bbdiscriminant();
  const float &jet13_bbdiscriminant();
  const float &jet14_bbdiscriminant();
  const float &jet15_bbdiscriminant();
  const float &jet1_cdiscriminant();
  const float &jet2_cdiscriminant();
  const float &jet3_cdiscriminant();
  const float &jet4_cdiscriminant();
  const float &jet5_cdiscriminant();
  const float &jet6_cdiscriminant();
  const float &jet7_cdiscriminant();
  const float &jet8_cdiscriminant();
  const float &jet9_cdiscriminant();
  const float &jet10_cdiscriminant();
  const float &jet11_cdiscriminant();
  const float &jet12_cdiscriminant();
  const float &jet13_cdiscriminant();
  const float &jet14_cdiscriminant();
  const float &jet15_cdiscriminant();
  const float &jet1_udsgdiscriminant();
  const float &jet2_udsgdiscriminant();
  const float &jet3_udsgdiscriminant();
  const float &jet4_udsgdiscriminant();
  const float &jet5_udsgdiscriminant();
  const float &jet6_udsgdiscriminant();
  const float &jet7_udsgdiscriminant();
  const float &jet8_udsgdiscriminant();
  const float &jet9_udsgdiscriminant();
  const float &jet10_udsgdiscriminant();
  const float &jet11_udsgdiscriminant();
  const float &jet12_udsgdiscriminant();
  const float &jet13_udsgdiscriminant();
  const float &jet14_udsgdiscriminant();
  const float &jet15_udsgdiscriminant();
  const float &jet1_energy();
  const float &jet2_energy();
  const float &jet3_energy();
  const float &jet4_energy();
  const float &jet5_energy();
  const float &jet6_energy();
  const float &jet7_energy();
  const float &jet8_energy();
  const float &jet9_energy();
  const float &jet10_energy();
  const float &jet11_energy();
  const float &jet12_energy();
  const float &jet13_energy();
  const float &jet14_energy();
  const float &jet15_energy();
  const float &bjet1_csv();
  const float &bjet2_csv();
  const float &tthMVA();
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
extern ttHHadronic cms3;
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
  const float &n_bjets();
  const float &n_jets();
  const float &bjet1_pt();
  const float &bjet2_pt();
  const float &MetPt();
  const float &MetPhi();
  const float &jet1_pt();
  const float &jet2_pt();
  const float &jet3_pt();
  const float &jet4_pt();
  const float &jet5_pt();
  const float &jet6_pt();
  const float &jet7_pt();
  const float &jet8_pt();
  const float &jet9_pt();
  const float &jet10_pt();
  const float &jet11_pt();
  const float &jet12_pt();
  const float &jet13_pt();
  const float &jet14_pt();
  const float &jet15_pt();
  const float &jet1_eta();
  const float &jet2_eta();
  const float &jet3_eta();
  const float &jet4_eta();
  const float &jet5_eta();
  const float &jet6_eta();
  const float &jet7_eta();
  const float &jet8_eta();
  const float &jet9_eta();
  const float &jet10_eta();
  const float &jet11_eta();
  const float &jet12_eta();
  const float &jet13_eta();
  const float &jet14_eta();
  const float &jet15_eta();
  const float &jet1_phi();
  const float &jet2_phi();
  const float &jet3_phi();
  const float &jet4_phi();
  const float &jet5_phi();
  const float &jet6_phi();
  const float &jet7_phi();
  const float &jet8_phi();
  const float &jet9_phi();
  const float &jet10_phi();
  const float &jet11_phi();
  const float &jet12_phi();
  const float &jet13_phi();
  const float &jet14_phi();
  const float &jet15_phi();
  const float &jet1_bdiscriminant();
  const float &jet2_bdiscriminant();
  const float &jet3_bdiscriminant();
  const float &jet4_bdiscriminant();
  const float &jet5_bdiscriminant();
  const float &jet6_bdiscriminant();
  const float &jet7_bdiscriminant();
  const float &jet8_bdiscriminant();
  const float &jet9_bdiscriminant();
  const float &jet10_bdiscriminant();
  const float &jet11_bdiscriminant();
  const float &jet12_bdiscriminant();
  const float &jet13_bdiscriminant();
  const float &jet14_bdiscriminant();
  const float &jet15_bdiscriminant();
  const float &jet1_bbdiscriminant();
  const float &jet2_bbdiscriminant();
  const float &jet3_bbdiscriminant();
  const float &jet4_bbdiscriminant();
  const float &jet5_bbdiscriminant();
  const float &jet6_bbdiscriminant();
  const float &jet7_bbdiscriminant();
  const float &jet8_bbdiscriminant();
  const float &jet9_bbdiscriminant();
  const float &jet10_bbdiscriminant();
  const float &jet11_bbdiscriminant();
  const float &jet12_bbdiscriminant();
  const float &jet13_bbdiscriminant();
  const float &jet14_bbdiscriminant();
  const float &jet15_bbdiscriminant();
  const float &jet1_cdiscriminant();
  const float &jet2_cdiscriminant();
  const float &jet3_cdiscriminant();
  const float &jet4_cdiscriminant();
  const float &jet5_cdiscriminant();
  const float &jet6_cdiscriminant();
  const float &jet7_cdiscriminant();
  const float &jet8_cdiscriminant();
  const float &jet9_cdiscriminant();
  const float &jet10_cdiscriminant();
  const float &jet11_cdiscriminant();
  const float &jet12_cdiscriminant();
  const float &jet13_cdiscriminant();
  const float &jet14_cdiscriminant();
  const float &jet15_cdiscriminant();
  const float &jet1_udsgdiscriminant();
  const float &jet2_udsgdiscriminant();
  const float &jet3_udsgdiscriminant();
  const float &jet4_udsgdiscriminant();
  const float &jet5_udsgdiscriminant();
  const float &jet6_udsgdiscriminant();
  const float &jet7_udsgdiscriminant();
  const float &jet8_udsgdiscriminant();
  const float &jet9_udsgdiscriminant();
  const float &jet10_udsgdiscriminant();
  const float &jet11_udsgdiscriminant();
  const float &jet12_udsgdiscriminant();
  const float &jet13_udsgdiscriminant();
  const float &jet14_udsgdiscriminant();
  const float &jet15_udsgdiscriminant();
  const float &jet1_energy();
  const float &jet2_energy();
  const float &jet3_energy();
  const float &jet4_energy();
  const float &jet5_energy();
  const float &jet6_energy();
  const float &jet7_energy();
  const float &jet8_energy();
  const float &jet9_energy();
  const float &jet10_energy();
  const float &jet11_energy();
  const float &jet12_energy();
  const float &jet13_energy();
  const float &jet14_energy();
  const float &jet15_energy();
  const float &bjet1_csv();
  const float &bjet2_csv();
  const float &tthMVA();
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
