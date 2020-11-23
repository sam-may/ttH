double scale1fb_2018_RunII_legacy(TString currentFileTitle) {
  std::map<TString, double> m = {
        {"ZHiggs0L1Zgf05ph0ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"WGToLNuG_01J_5f_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000158212},
        {"TGJets_TuneCP5_13TeV_amcatnlo_madspin_pythia8", 0.0004986080},
        {"TTJets_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000017718},
        {"VBFHToGG_M123_13TeV_amcatnlo_pythia8", 0.0000024054},
        {"VBFHToGG_M127_13TeV_amcatnlo_pythia8", 0.0000070838},
        {"TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1", 0.0000000000},
        {"GJet_Pt-40toInf_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV_Pythia8", 0.0881669793},
        {"WHiggs0PMToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"VHToGG_M124_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000032759},
        {"VBFHToGG_M126_13TeV_amcatnlo_pythia8", 0.0000072082},
        {"VBFHHTo2B2G_CV_1_C2V_1_C3_2_dipoleRecoilOff-TuneCP5_PSweights_13TeV-madgraph-pythia8", 0.0000000000},
        {"TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8", 0.0000713601},
        {"VBFHToGG_M-125_13TeV_powheg_pythia8", 0.0000022326},
        {"VBFHToGG_M125_13TeV_amcatnlo_pythia8", 0.0000011176},
        {"ttHiggs0PMToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000015357},
        {"ttHJetToGG_M124_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000077847},
        {"tZq_ll_4f_ckm_NLO_TuneCP5_13TeV-madgraph-pythia8", 0.0000833681},
        {"GJet_Pt-20toInf_DoubleEMEnriched_MGG-40to80_TuneCP5_13TeV_Pythia8", 0.5247033845},
        {"ttHiggs0MToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000055106},
        {"FCNC_private_TT_aT2HJ_HAD_HUT_2018_microAOD_v1.2_29May2020", 0.0004927339},
        {"DiPhotonJetsBox2BJets_MGG-80toInf_13TeV-Sherpa", 0.0030635299},
        {"ZNuNuGJets_MonoPhoton_PtG-130_TuneCP5_13TeV-madgraph-pythia8", 0.0000000000},
        {"bbHToGG_M-125_4FS_yb2_TuneCP5-13TeV-amcatnlo-pythia8", 0.0000000000},
        {"GJets_HT-200To400_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"VHToGG_M130_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000022045},
        {"EGamma", 0.0000000000},
        {"VBFHiggs0MToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"VBFHHTo2B2G_CV_1_C2V_2_C3_1_dipoleRecoilOn-TuneCP5_PSweights_13TeV-madgraph-pythia8", 0.0000000000},
        {"VHToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000013480},
        {"bbHToGG_M-120_4FS_yb2_TuneCP5-13TeV-amcatnlo-pythia8", 0.0000000000},
        {"DiPhotonJetsBox_MGG-80toInf_13TeV-Sherpa", 0.0132507451},
        {"ttHiggs0Mf05ph0ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000015357},
        {"ttHJetToGG_M120_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000047155},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000000000},
        {"FCNC_private_TT_T2HJ_HAD_HCT_2018_microAOD_v1.2_29May2020", 0.0004927297},
        {"TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000783757},
        {"VBFHHTo2B2G_CV_1_C2V_2_C3_1_dipoleRecoilOff-TuneCP5_PSweights_13TeV-madgraph-pythia8", 0.0000000000},
        {"VBFHHTo2B2G_CV_1_C2V_1_C3_1_dipoleRecoilOff-TuneCP5_PSweights_13TeV-madgraph-pythia8", 0.0000000000},
        {"ST_FCNC-TH_Thadronic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000286063},
        {"GJet_Pt-20to40_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV_Pythia8", 0.0166472687},
        {"ZHiggs0PHf05ph0ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"VHToGG_M127_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000033674},
        {"WHiggs0PHToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"ZHiggs0L1ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000000000},
        {"ZNuNuGJets_MonoPhoton_PtG-40to130_TuneCP5_13TeV-madgraph-pythia8", 0.0000000000},
        {"TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000000000},
        {"bbHToGG_M-130_4FS_yb2_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000000000},
        {"ST_FCNC-TH_Thadronic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000019492},
        {"GluGluHToGG_M120_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000018922},
        {"GluGluHToGG_M-130_13TeV_powheg_pythia8", 0.0000101089},
        {"ZHiggs0PHToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"ZZ_TuneCP5_13TeV-pythia8", 0.0052153433},
        {"WHiggs0MToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"TTJets_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000037625},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000000000},
        {"WHiggs0Mf05ph0ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8", 0.0000218146},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000000000},
        {"WGToLNuG_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0663567973},
        {"THQ_ctcvcp_HToGG_M125_TuneCP5_13TeV-madgraph-pythia8", 0.0000000000},
        {"TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct_TuneCP5-MadGraph5-pythia8", 0.0000713949},
        {"VBFHHTo2B2G_CV_1_C2V_0_C3_1_dipoleRecoilOff-TuneCP5_PSweights_13TeV-madgraph-pythia8", 0.0000000000},
        {"TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0001208810},
        {"ZHiggs0L1ZgToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"ttHJetToGG_M130_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000036258},
        {"ZHiggs0PMToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"DiPhotonJetsBox1BJet_MGG-80toInf_13TeV-Sherpa", 0.0051250416},
        {"VBFHToGG_M120_13TeV_amcatnlo_pythia8", 0.0000020978},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hct_TuneCP5-MadGraph5-pythia8", 0.0000712859},
        {"VBFHHTo2B2G_CV_1_5_C2V_1_C3_1_dipoleRecoilOff-TuneCP5_PSweights_13TeV-madgraph-pythia8", 0.0000000000},
        {"ZH_HToGG_ZToAll_M120_TuneCP5_13TeV-powheg-pythia8", 0.0000000000},
        {"GJets_HT-100To200_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8", 0.0000730385},
        {"bbHToGG_M-125_4FS_ybyt_TuneCP5_13TeV-amcatnlo-pythia8", -0.0000000000},
        {"VBFHiggs0Mf05ph0ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"VBFHToGG_M-120_TuneCP5_13TeV-powheg-pythia8", 0.0000083811},
        {"FCNC_private_TT_aT2HJ_HAD_HCT_2018_microAOD_v1.2_29May2020", 0.0004937459},
        {"GluGluHToGG_M126_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000014712},
        {"FCNC_private_TT_T2HJ_HAD_HUT_2018_microAOD_v1.2_29May2020", 0.0004931804},
        {"TTGG_0Jets_TuneCP5_13TeV_amcatnlo_madspin_pythia8", 0.0007047173},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1", 0.0000000000},
        {"VHToGG_M123_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000031710},
        {"VHToGG_M120_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000020994},
        {"WHiggs0L1ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1", 0.0000000000},
        {"ZH_HToGG_ZToAll_M130_TuneCP5_13TeV-powheg-pythia8", 0.0000000000},
        {"ZGToLLG_01J_5f_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000778435},
        {"VBFHiggs0PMToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"VBFHiggs0PHf05ph0ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"ST_FCNC-TH_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000010074},
        {"WW_TuneCP5_13TeV-pythia8", 0.0080561948},
        {"GluGluHToGG_M124_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000023062},
        {"THQ_ctcvcp_HToGG_M123_TuneCP5_13TeV-madgraph-pythia8", 0.0000000000},
        {"WHiggs0PHf05ph0ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"VBFHHTo2B2G_CV_1_C2V_1_C3_1_dipoleRecoilOn-TuneCP5_PSweights_13TeV-madgraph-pythia8", 0.0000000000},
        {"VBFHHTo2B2G_CV_1_C2V_1_C3_0_dipoleRecoilOff-TuneCP5_PSweights_13TeV-madgraph-pythia8", 0.0000000000},
        {"FCNC_private_ST_HAD_HUT_2016_microAOD_v1.2_29May2020", 0.0000000000},
        {"GluGluHToGG_M-125_13TeV_powheg_pythia8", 0.0000046660},
        {"THQ_ctcvcp_HToGG_M120_TuneCP5_13TeV-madgraph-pythia8", 0.0000011416},
        {"GluGluHToGG_M130_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000019324},
        {"ST_tW_top_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8", 0.0001076157},
        {"VBFHToGG_M124_13TeV_amcatnlo_pythia8", 0.0000074313},
        {"ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000143695},
        {"VBFHHTo2B2G_CV_0_5_C2V_1_C3_1_dipoleRecoilOff-TuneCP5_PSweights_13TeV-madgraph-pythia8", 0.0000000000},
        {"TT_FCNC-T2HJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1", 0.0000000000},
        {"VBFHiggs0L1f05ph0ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"THQ_ctcvcp_HToGG_M130_TuneCP5_13TeV-madgraph-pythia8", 0.0000011425},
        {"QCD_Pt-40toInf_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV_Pythia8", 10.9191445164},
        {"TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000000000},
        {"GluGluHToGG_M127_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000022865},
        {"GJets_HT-600ToInf_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"VBFHiggs0L1ZgToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8", 0.0000167915},
        {"DiPhotonJetsBox_M40_80-Sherpa", 0.0893296714},
        {"VBFHiggs0L1Zgf05ph0ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"ZHiggs0MToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"bbHToGG_M-130_4FS_ybyt_TuneCP5_13TeV-amcatnlo-pythia8", -0.0000000000},
        {"ZHiggs0L1f05ph0ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"TTGJets_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0001160824},
        {"ttHJetToGG_M127_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000066587},
        {"ttHJetToGG_M126_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000042380},
        {"QCD_Pt-30toInf_DoubleEMEnriched_MGG-40to80_TuneCP5_13TeV_Pythia8", 22.4388249461},
        {"GluGluHToGG_M-120_13TeV_powheg_pythia8", 0.0000105708},
        {"THQ_ctcvcp_HToGG_M127_TuneCP5_13TeV-madgraph-pythia8", 0.0000000000},
        {"WHiggs0L1f05ph0ToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"GluGluHToGG_M125_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000005167},
        {"WZ_TuneCP5_13TeV-pythia8", 0.0058751336},
        {"ST_tW_antitop_5f_inclusiveDecays_TuneCP5_13TeV-powheg-pythia8", 0.0001345365},
        {"THQ_ctcvcp_HToGG_M126_TuneCP5_13TeV-madgraph-pythia8", 0.0000000000},
        {"DiPhotonJets_MGG-80toInf_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000000000},
        {"VBFHToGG_M130_13TeV_amcatnlo_pythia8", 0.0000022109},
        {"THQ_ctcvcp_HToGG_M124_TuneCP5_13TeV-madgraph-pythia8", 0.0000000000},
        {"FCNC_private_ST_HAD_HCT_2016_microAOD_v1.2_29May2020", 0.0000000000},
        {"TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000000000},
        {"VBFHiggs0PHToGG_M125_13TeV_JHUGenV7011_pythia8", 0.0000000000},
        {"VBFHiggs0L1ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"VHToGG_M126_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000032175},
        {"ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000043749},
        {"GJets_HT-40To100_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"GluGluHToGG_M123_13TeV_amcatnloFXFX_pythia8", 0.0000024148},
        {"TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000000000},
  };
  TObjArray *tx = currentFileTitle.Tokenize("/");
  TString key = ((TObjString *)(tx->At(tx->GetEntries()-2)))->String();
  std::map<TString, double>::iterator it;
  for (it = m.begin(); it != m.end(); it++) {
    if (key.Contains(it->first) && it->second > 0) {
      return it->second;
    }
  }
  cout << "Did not match " << key << " to a sample in the scale1fb map!" << endl;
}