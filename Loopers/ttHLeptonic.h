// -*- C++ -*-
// This is a header file generated with the command:
// makeCMS3ClassFiles("/hadoop/cms/store/user/smay/ttH/ttHJetToGG_M100_13TeV_amcatnloFXFX_madspin_pythia8__ttH_Babies_v1/merged_ntuple_1.root", "tthLeptonicTagDumper/trees/tth_13TeV_all", "ttHLeptonic", "tas", "cms3")

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
  float    subleadPt_;
  TBranch *subleadPt_branch;
  bool     subleadPt_isLoaded;
  float    subleadEt_;
  TBranch *subleadEt_branch;
  bool     subleadEt_isLoaded;
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
  float    leadIDMVA_;
  TBranch *leadIDMVA_branch;
  bool     leadIDMVA_isLoaded;
  float    subleadIDMVA_;
  TBranch *subleadIDMVA_branch;
  bool     subleadIDMVA_isLoaded;
  float    dipho_rapidity_;
  TBranch *dipho_rapidity_branch;
  bool     dipho_rapidity_isLoaded;
  float    n_ele_;
  TBranch *n_ele_branch;
  bool     n_ele_isLoaded;
  float    ele1_pt_;
  TBranch *ele1_pt_branch;
  bool     ele1_pt_isLoaded;
  float    ele2_pt_;
  TBranch *ele2_pt_branch;
  bool     ele2_pt_isLoaded;
  float    n_muons_;
  TBranch *n_muons_branch;
  bool     n_muons_isLoaded;
  float    muon1_pt_;
  TBranch *muon1_pt_branch;
  bool     muon1_pt_isLoaded;
  float    muon2_pt_;
  TBranch *muon2_pt_branch;
  bool     muon2_pt_isLoaded;
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
  float    Mjj_;
  TBranch *Mjj_branch;
  bool     Mjj_isLoaded;
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
  const float &leadEta();
  const float &leadPhi();
  const float &lead_sieie();
  const float &lead_hoe();
  const float &lead_sigmaEoE();
  const float &lead_ptoM();
  const float &leadR9();
  const float &subleadPt();
  const float &subleadEt();
  const float &subleadEta();
  const float &subleadPhi();
  const float &sublead_sieie();
  const float &sublead_hoe();
  const float &sublead_sigmaEoE();
  const float &sublead_ptoM();
  const float &subleadR9();
  const float &leadIDMVA();
  const float &subleadIDMVA();
  const float &dipho_rapidity();
  const float &n_ele();
  const float &ele1_pt();
  const float &ele2_pt();
  const float &n_muons();
  const float &muon1_pt();
  const float &muon2_pt();
  const float &n_bjets();
  const float &n_jets();
  const float &bjet1_pt();
  const float &bjet2_pt();
  const float &Mjj();
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
  const float &leadEta();
  const float &leadPhi();
  const float &lead_sieie();
  const float &lead_hoe();
  const float &lead_sigmaEoE();
  const float &lead_ptoM();
  const float &leadR9();
  const float &subleadPt();
  const float &subleadEt();
  const float &subleadEta();
  const float &subleadPhi();
  const float &sublead_sieie();
  const float &sublead_hoe();
  const float &sublead_sigmaEoE();
  const float &sublead_ptoM();
  const float &subleadR9();
  const float &leadIDMVA();
  const float &subleadIDMVA();
  const float &dipho_rapidity();
  const float &n_ele();
  const float &ele1_pt();
  const float &ele2_pt();
  const float &n_muons();
  const float &muon1_pt();
  const float &muon2_pt();
  const float &n_bjets();
  const float &n_jets();
  const float &bjet1_pt();
  const float &bjet2_pt();
  const float &Mjj();
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
