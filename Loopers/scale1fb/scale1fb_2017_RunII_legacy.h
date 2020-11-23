double scale1fb_2017_RunII_legacy(TString currentFileTitle) {
  std::map<TString, double> m = {
        {"ZHiggs0Mf05ph0ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"GluGluHToGG_M126_PtH-120toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"WGToLNuG_01J_5f_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000190043},
        {"DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000018238},
        {"DYJetsToMuMu_M-50_Zpt-150toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"QCD_Pt-170to300_EMEnriched_TuneCP5_13TeV_pythia8", 0.0000000000},
        {"ZH_HToGG_ZToAll_M125_TuneCP5_13TeV-powheg-pythia8", 0.0000090551},
        {"ZH_HToZG_ZToAll_M-130_TuneCP5_13TeV-powheg-pythia8", 0.0000000000},
        {"TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1", 0.0000000000},
        {"GJet_Pt-40toInf_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV_Pythia8", 0.0831565030},
        {"ZHiggs0L1Zgf05ph0ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8", 0.0000714441},
        {"ttHJetToGG_M124_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000043721},
        {"VBFHToEE_M125_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000000000},
        {"GJet_Pt-20toInf_DoubleEMEnriched_MGG-40to80_TuneCP5_13TeV_Pythia8", 0.3045187151},
        {"ttHiggs0PMToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"ttHJetToGG_M127_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000046329},
        {"FCNC_private_TT_aT2HJ_HAD_HUT_2018_microAOD_v1.2_29May2020", 0.0000000000},
        {"ttHJetToEE_M125_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000000000},
        {"VBFHToGG_M120_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000000000},
        {"QCD_Pt-50to80_EMEnriched_TuneCP5_13TeV_pythia8", 0.0000000000},
        {"ttHJetToGG_M125_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000028257},
        {"VHToGG_M123_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000031694},
        {"DiPhotonJetsBox2BJets_MGG-80toInf_13TeV-sherpa", 0.0000000000},
        {"GluGluHToGG_M125_PtH-270toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"QCD_Pt-120to170_EMEnriched_TuneCP5_13TeV_pythia8", 0.0000000000},
        {"TGJets_TuneCP5_13TeV-amcatnlo-madspin-pythia8", 0.0000000000},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000000000},
        {"FCNC_private_TT_T2HJ_HAD_HCT_2018_microAOD_v1.2_29May2020", 0.0000000000},
        {"WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000711634},
        {"ZHiggs0PMToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"DoubleEG", 0.0000000000},
        {"VBFHiggs0L1Zgf05ph0ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"ST_FCNC-TH_Thadronic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000289806},
        {"VHToGG_M127_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000034613},
        {"GJet_Pt-20to40_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV_Pythia8", 0.0100308355},
        {"VHToGG_M130_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000022993},
        {"DYJetsToMuMu_M-50_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"SingleElectron", 0.0000000000},
        {"VHToGG_M126_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000036691},
        {"WHiggs0PMToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"THW_ctcvcp_HToGG_M120_TuneCP5_13TeV-madgraph-pythia8", 0.0000003444},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000000000},
        {"GluGluHToGG_M125_PtH-120toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8", 0.0001488655},
        {"VHToGG_M120_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000022458},
        {"QCD_Pt-80to120_EMEnriched_TuneCP5_13TeV_pythia8", 0.0000000000},
        {"GluGluHToGG_M-125_TuneCP5_13TeV-powheg-pythia8", 0.0000047667},
        {"VBFHToGG_M126_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000070978},
        {"VBFHiggs0L1f05ph0ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"DiPhotonJetsBox1BJet_MGG-80toInf_13TeV-sherpa", 0.0000000000},
        {"ST_FCNC-TH_Thadronic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000019144},
        {"VBFHToGG_M125_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000010706},
        {"GluGluHToGG_M120_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000017672},
        {"WHiggs0L1ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"ZHiggs0MToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"ZZ_TuneCP5_13TeV-pythia8", 0.0061257443},
        {"TTJets_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000027908},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8", 0.0001518513},
        {"TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8", 0.0001437998},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hct-MadGraph5-pythia8", 0.0001576961},
        {"WGToLNuG_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0643242275},
        {"JJHiggs0Mf05ph0ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"THQ_ctcvcp_HToGG_M125_TuneCP5_13TeV-madgraph-pythia8", 0.0000000848},
        {"QCD_Pt-15to20_EMEnriched_TuneCP5_13TeV_pythia8", 0.0000000000},
        {"JJHiggs0PMToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct_TuneCP5-MadGraph5-pythia8", 0.0000755607},
        {"TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0001229670},
        {"VBFHiggs0MToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"ST_tW_antitop_5f_NoFullyHadronicDecays_TuneCP5CR1_13TeV-powheg-pythia8", 0.0000000000},
        {"GluGluHToGG_M-120_TuneCP5_13TeV-powheg-pythia8", 0.0000000000},
        {"DiPhotonJetsBox_M40_80-sherpa", 0.0881865636},
        {"GluGluHToGG_M125_TuneCP5_13TeV-amcatnloFXFX-pythia8_storeWeights", 0.0000000000},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hct_TuneCP5-MadGraph5-pythia8", 0.0000731446},
        {"ttHJetToGG_M120_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000043163},
        {"JJHiggs0MToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"GluGluHToGG_M120_PtH-120toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8", 0.0000713229},
        {"WHiggs0PHToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"ST_tW_top_5f_NoFullyHadronicDecays_TuneCP5CR1_13TeV-powheg-pythia8", 0.0000000000},
        {"WHiggs0PHf05ph0ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"GluGluHToGG_M123_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000024397},
        {"VBFHToGG_M-120_TuneCP5_13TeV-powheg-pythia8", 0.0000074845},
        {"FCNC_private_TT_aT2HJ_HAD_HCT_2018_microAOD_v1.2_29May2020", 0.0000000000},
        {"GluGluHToGG_M126_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000012823},
        {"FCNC_private_TT_T2HJ_HAD_HUT_2018_microAOD_v1.2_29May2020", 0.0000000000},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1", 0.0000000000},
        {"VBFHToGG_M-130_TuneCP5_13TeV-powheg-pythia8", 0.0000022487},
        {"QCD_Pt-300toInf_EMEnriched_TuneCP5_13TeV_pythia8", 0.0000000000},
        {"GJets_DoubleEMEnriched_PtG-20MGG-40To80_TuneCP5_13TeV-madgraphMLM-pythia8", 4.0096666205},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1", 0.0000000000},
        {"ttHJetToGG_M126_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000000000},
        {"ZGToLLG_01J_5f_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000170817},
        {"ST_FCNC-TH_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000009859},
        {"WW_TuneCP5_13TeV-pythia8", 0.0096238506},
        {"GluGluHToGG_M120_PtH-270toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"GluGluHToGG_M124_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000019758},
        {"THQ_ctcvcp_HToGG_M123_TuneCP5_13TeV-madgraph-pythia8", 0.0000012143},
        {"FCNC_private_ST_HAD_HUT_2016_microAOD_v1.2_29May2020", 0.0000000000},
        {"GluGluHToEE_M125_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000000000},
        {"THQ_ctcvcp_HToGG_M120_TuneCP5_13TeV-madgraph-pythia8", 0.0000011236},
        {"GluGluHToGG_M130_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000019401},
        {"GluGluHToGG_M127_PtH-120toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000142130},
        {"TT_FCNC-T2HJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1", 0.0000000000},
        {"VBFHiggs0PHf05ph0ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"GluGluHToGG_M123_PtH-270toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"GJets_DoubleEMEnriched_PtG-40MGG-80_TuneCP5_13TeV-madgraphMLM-pythia8", 0.4245705883},
        {"THQ_ctcvcp_HToGG_M130_TuneCP5_13TeV-madgraph-pythia8", 0.0000011945},
        {"WHiggs0L1f05ph0ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"VBFHToGG_M124_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000076469},
        {"TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hut-MadGraph5-pythia8", 0.0001487481},
        {"GluGluHToGG_M127_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000023900},
        {"TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8", 0.0000087673},
        {"VBFHToGG_M130_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000021929},
        {"ZHiggs0L1f05ph0ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"TTGJets_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0001308899},
        {"tZq_ll_4f_ckm_NLO_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000000000},
        {"GluGluHToGG_M-130_TuneCP5_13TeV-powheg-pythia8", 0.0000000000},
        {"GluGluHToGG_M123_PtH-120toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"VBFHiggs0Mf05ph0ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"VBFHToGG_M-125_TuneCP5_13TeV-powheg-pythia8", 0.0000022363},
        {"GluGluHToGG_M130_PtH-270toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"THQ_ctcvcp_HToGG_M127_TuneCP5_13TeV-madgraph-pythia8", 0.0000011236},
        {"GluGluHToGG_M127_PtH-270toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"GluGluHToGG_M125_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000004806},
        {"WZ_TuneCP5_13TeV-pythia8", 0.0069521411},
        {"VHToGG_M125_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000015237},
        {"DiPhotonJetsBox_MGG-80toInf_13TeV-sherpa", 0.0130793403},
        {"GluGluHToGG_M126_PtH-270toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"GluGluHToGG_M124_PtH-270toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"THQ_ctcvcp_HToGG_M126_TuneCP5_13TeV-madgraph-pythia8", 0.0000011787},
        {"VBFHToGG_M123_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000024155},
        {"ZH_HToZG_ZToAll_M-120_TuneCP5_13TeV-powheg-pythia8", 0.0000000000},
        {"VBFHiggs0PHToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"THW_ctcvcp_HToGG_M125_TuneCP5_13TeV-madgraph-pythia8", 0.0000000350},
        {"ZHiggs0L1ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"THQ_ctcvcp_HToGG_M124_TuneCP5_13TeV-madgraph-pythia8", 0.0000011236},
        {"ttHJetToGG_M123_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000046159},
        {"ZH_HToZG_ZToAll_M-125_TuneCP5_13TeV-powheg-pythia8", 0.0000000000},
        {"FCNC_private_ST_HAD_HCT_2016_microAOD_v1.2_29May2020", 0.0000000000},
        {"TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000000000},
        {"VBFHToGG_M127_TuneCP5_13TeV-amcatnlo-pythia8", 0.0000053578},
        {"ttHiggs0Mf05ph0ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"GluGluHToGG_M130_PtH-120toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"THW_ctcvcp_HToGG_M130_TuneCP5_13TeV-madgraph-pythia8", 0.0000003444},
        {"TTGG_0Jets_TuneCP5_13TeV-amcatnlo-madspin-pythia8", 0.0000000000},
        {"VBFHiggs0L1ToGG_M125_TuneCP5_13TeV-JHUGenV7011-pythia8", 0.0000000000},
        {"TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000000000},
        {"GluGluHToGG_M124_PtH-120toInf_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
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