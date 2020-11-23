double scale1fb_2016_RunII_legacy(TString currentFileTitle) {
  std::map<TString, double> m = {
        {"GluGluToHHTo2B2G_node_7_13TeV-madgraph", 0.0000200000},
        {"TTGG_0Jets_TuneCUETP8M1_13TeV_amcatnlo_madspin_pythia8", 0.0006896735},
        {"DiPhotonJets_MGG-80toInf_13TeV_amcatnloFXFX_pythia8", 0.0000463418},
        {"VBFHToGG_M123_13TeV_amcatnlo_pythia8", 0.0000024654},
        {"TTGJets_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000849383},
        {"VBFHToGG_M127_13TeV_amcatnlo_pythia8", 0.0000024702},
        {"TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1", 0.0001566194},
        {"ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_v2", 0.0000058100},
        {"VBFHToGG_M126_13TeV_amcatnlo_pythia8", 0.0000074757},
        {"TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8", 0.0000000000},
        {"VBFHToGG_M125_13TeV_amcatnlo_pythia8", 0.0000007162},
        {"ttHJetToGG_M130_13TeV_amcatnloFXFX_madspin_pythia8_v2", 0.0000059052},
        {"FCNC_private_TT_aT2HJ_HAD_HUT_2018_microAOD_v1.2_29May2020", 0.0000000000},
        {"GluGluToHHTo2B2G_node_6_13TeV-madgraph", 0.0000200000},
        {"VHToGG_M130_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000041357},
        {"WZ_TuneCUETP8M1_13TeV-pythia8", 0.0114348250},
        {"VHToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000037422},
        {"ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M2T4", 0.0413309845},
        {"THQ_ctcvcp_HToGG_M125_13TeV-madgraph-pythia8_TuneCUETP8M1_v2", 0.0000000851},
        {"DiPhotonJetsBox_MGG-80toInf_13TeV-Sherpa", 0.0019666039},
        {"TTJets_TuneCUETP8M2T4_13TeV-amcatnloFXFX-pythia8", 0.0000246719},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000680236},
        {"FCNC_private_TT_T2HJ_HAD_HCT_2018_microAOD_v1.2_29May2020", 0.0000000000},
        {"GJet_Pt-20toInf_DoubleEMEnriched_MGG-40to80_TuneCUETP8M1_13TeV_Pythia8", 0.1089264221},
        {"DoubleEG", 0.0000000000},
        {"ST_FCNC-TH_Thadronic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000000000},
        {"GluGluHToGG_M120_13TeV_amcatnloFXFX_pythia8", 0.0000023557},
        {"ttHJetToGG_M120_13TeV_amcatnloFXFX_madspin_pythia8_v2", 0.0000066789},
        {"SingleElectron", 0.0000000000},
        {"VHToGG_M127_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000113281},
        {"ZZ_TuneCUETP8M1_13TeV-pythia8", 0.0109710670},
        {"tZq_ll_4f_13TeV-amcatnlo-pythia8", 0.0128464500},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000684001},
        {"GluGluToHHTo2B2G_node_13_13TeV-madgraph", 0.0000200000},
        {"TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000000000},
        {"ttHJetToGG_M123_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000052552},
        {"ST_FCNC-TH_Thadronic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000000000},
        {"QCD_Pt-40toInf_DoubleEMEnriched_MGG-80toInf_TuneCUETP8M1_13TeV_Pythia8", 4.0062975889},
        {"GluGluHToGG_M-130_13TeV_powheg_pythia8", 0.0002028076},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000000000},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000000000},
        {"GluGluToHHTo2B2G_node_2_13TeV-madgraph", 0.0000201613},
        {"GluGluToHHTo2B2G_node_4_13TeV-madgraph", 0.0000200000},
        {"GJets_HT-200To400_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 0.1118885072},
        {"TTJets_SingleLeptFromTbar_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 0.0499382744},
        {"TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct_TuneCP5-MadGraph5-pythia8", 0.0000000000},
        {"GluGluToHHTo2B2G_node_10_13TeV-madgraph", 0.0000200803},
        {"ttHJetToGG_M130_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000114581},
        {"ttHToGG_M125_13TeV_powheg_pythia8_v2", 0.0000035993},
        {"VBFHToGG_M120_13TeV_amcatnlo_pythia8", 0.0000025720},
        {"THW_ctcvcp_HToGG_M130_13TeV-madgraph-pythia8_TuneCUETP8M1_v2", 0.0000000742},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hct_TuneCP5-MadGraph5-pythia8", 0.0000000000},
        {"VBFHToGG_M125_13TeV_amcatnlo_pythia8_v2", 0.0000021964},
        {"GJet_Pt-40toInf_DoubleEMEnriched_MGG-80toInf_TuneCUETP8M1_13TeV_Pythia8", 0.1189939556},
        {"GJets_HT-40To100_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 5.1469269393},
        {"TTJets_SingleLeptFromT_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 0.0148816401},
        {"WGToLNuG_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 0.3786825613},
        {"TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8", 0.0000000000},
        {"ZGTo2LG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8", 0.0000328446},
        {"GluGluHToGG_M125_13TeV_amcatnloFXFX_pythia8", 0.0000012361},
        {"VBFHHTo2B2G_CV_1_C2V_1_C3_2_dipoleRecoilOff-TuneCUETP8M1_PSweights_13TeV-madgraph-pythia8", 0.0000000000},
        {"ST_tW_antitop_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1", 0.0052654522},
        {"FCNC_private_TT_aT2HJ_HAD_HCT_2018_microAOD_v1.2_29May2020", 0.0000000000},
        {"FCNC_private_TT_T2HJ_HAD_HUT_2018_microAOD_v1.2_29May2020", 0.0000000000},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1", 0.0001485937},
        {"VHToGG_M123_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000038590},
        {"VHToGG_M120_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000040568},
        {"TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1", 0.0001502897},
        {"ST_FCNC-TH_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000019335},
        {"GluGluToHHTo2B2G_node_8_13TeV-madgraph", 0.0000200000},
        {"ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1", 0.0113084348},
        {"FCNC_private_ST_HAD_HUT_2016_microAOD_v1.2_29May2020", 0.0001100439},
        {"VBFHToGG_M124_13TeV_amcatnlo_pythia8", 0.0000075859},
        {"ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000279984},
        {"TT_FCNC-T2HJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1", 0.0001327320},
        {"GluGluToHHTo2B2G_node_box_13TeV-madgraph", 0.0000200000},
        {"GluGluToHHTo2B2G_node_3_13TeV-madgraph", 0.0000200000},
        {"GluGluHToGG_M127_13TeV_amcatnloFXFX_pythia8", 0.0000011498},
        {"GluGluHToGG_M126_13TeV_amcatnloFXFX_pythia8", 0.0000013999},
        {"TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000000000},
        {"DiPhotonJetsBox_M40_80-Sherpa", 0.0919567794},
        {"ttHJetToGG_M124_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000048243},
        {"TTJets_DiLept_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 0.0120798844},
        {"ttHJetToGG_M127_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000046419},
        {"GJets_HT-600ToInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 0.0110612684},
        {"ttHJetToGG_M126_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000031642},
        {"GluGluHToGG_M-120_13TeV_powheg_pythia8", 0.0002318334},
        {"VBFHToGG_M-130_13TeV_powheg_pythia8", 0.0000050266},
        {"GJets_HT-100To200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 367.3979674141},
        {"GluGluToHHTo2B2G_node_9_13TeV-madgraph", 0.0000201613},
        {"ST_tW_antitop_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M2T4", 0.0181941275},
        {"GluGluHToGG_M130_13TeV_amcatnloFXFX_pythia8", 0.0000023081},
        {"TTWJetsToLNu_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8", 0.0001937047},
        {"GJets_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 0.0802337064},
        {"DYJetsToLL_M-50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8", 0.0026524553},
        {"VBFHToGG_M130_13TeV_amcatnlo_pythia8", 0.0000025818},
        {"GluGluToHHTo2B2G_node_SM_13TeV-madgraph", 0.0000200000},
        {"FCNC_private_ST_HAD_HCT_2016_microAOD_v1.2_29May2020", 0.0000076034},
        {"TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct-MadGraph5-pythia8", 0.0000683188},
        {"TTZToLLNuNu_M-10_TuneCUETP8M1_13TeV-amcatnlo-pythia8", 0.0001385075},
        {"QCD_Pt-30toInf_DoubleEMEnriched_MGG-40to80_TuneCUETP8M1_13TeV_Pythia8", 57.0929372201},
        {"WGToLNuG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8", 0.0000125145},
        {"WW_TuneCUETP8M1_13TeV-pythia8", 0.0090451466},
        {"VHToGG_M126_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000100442},
        {"GluGluToHHTo2B2G_node_11_13TeV-madgraph", 0.0000200000},
        {"GluGluHToGG_M123_13TeV_amcatnloFXFX_pythia8", 0.0000022893},
        {"TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut-MadGraph5-pythia8", 0.0000690597},
        {"VBFHToGG_M-120_13TeV_powheg_pythia8", 0.0000074953},
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