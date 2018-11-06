double scale1fb_2016(TString currentFileTitle) {
  std::map<TString, double> m = {
        {"GJet_Pt-20to40_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV_Pythia8", 0.0000000000},
        {"THW_ctcvcp_HToGG_M125_13TeV-madgraph-pythia8_TuneCP5", 0.0000000000},
        {"ttHJetToGG_M110_13TeV_amcatnloFXFX_madspin_pythia8", 0.0085825123},
        {"TTJets_SingleLeptFromT_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 0.0000836327},
        {"TTGG_0Jets_TuneCUETP8M1_13TeV_amcatnlo_madspin_pythia8", 0.0000223279},
        {"THQ_HToGG_13TeV-madgraph-pythia8_TuneCUETP8M1", 0.0000003371},
        {"TGJets_TuneCP5_13TeV_amcatnlo_madspin_pythia8", 0.0000000000},
        {"WGToLNuG_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 0.0663963222},
        {"DiPhotonJetsBox_M40_80-Sherpa", 0.0636380924},
        {"VBFHToGG_M125_13TeV_amcatnlo_pythia8", 0.0000087875},
        {"ZGTo2LG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8", 0.0103284667},
        {"DiPhotonJets_MGG-80toInf_13TeV_amcatnloFXFX_pythia8", 0.0068839358},
        {"ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_CUETP8M1Down", 0.0000116083},
        {"ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_UpPS", 0.0000055700},
        {"GluGluHToGG_M125_13TeV_amcatnloFXFX_pythia8", 0.0002475145},
        {"TTGJets_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8", 0.0024204082},
        {"TTJets_DiLept_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 0.0001640830},
        {"ttHJetToGG_M65_13TeV_amcatnloFXFX_madspin_pythia8", 0.0081308084},
        {"DiPhotonJetsBox_MGG-80toInf_13TeV-Sherpa", 0.0014570762},
        {"THQ_ctcvcp_HToGG_M125_13TeV-madgraph-pythia8_TuneCP5", 0.0000000000},
        {"ttHJetToGG_M85_13TeV_amcatnloFXFX_madspin_pythia8", 0.0081380871},
        {"ttHJetToGG_M127_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000125240},
        {"ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_DownPS", 0.0000078353},
        {"ttHJetToGG_M60_13TeV_amcatnloFXFX_madspin_pythia8", 0.0079920719},
        {"ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_v2", 0.0000104015},
        {"ttHJetToGG_M126_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000088312},
        {"TTGG_0Jets_TuneCP5_13TeV_amcatnlo_madspin_pythia8", 0.0000000000},
        {"ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_CUETP8M1Up", 0.0000108632},
        {"ttHJetToGG_M100_13TeV_amcatnloFXFX_madspin_pythia8", 0.0077291101},
        {"ttHJetToGG_M130_13TeV_amcatnloFXFX_madspin_pythia8_v2", 0.0000180178},
        {"ttHJetToGG_M120_13TeV_amcatnloFXFX_madspin_pythia8_v2", 0.0000221567},
        {"ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_PSWeights", 0.0000000000},
        {"ttHJetToGG_M90_13TeV_amcatnloFXFX_madspin_pythia8", 0.0062983398},
        {"QCD_Pt-30toInf_DoubleEMEnriched_MGG-40to80_TuneCP5_13TeV_Pythia8", 0.0000000000},
        {"QCD_Pt-40toInf_DoubleEMEnriched_MGG-80toInf_TuneCUETP8M1_13TeV_Pythia8", 5.4962961556},
        {"THW_HToGG_13TeV-madgraph-pythia8_TuneCUETP8M1", 0.0000000689},
        {"GJet_Pt-20toInf_DoubleEMEnriched_MGG-40to80_TuneCP5_13TeV_Pythia8", 0.0000000000},
        {"QCD_Pt-30toInf_DoubleEMEnriched_MGG-40to80_TuneCUETP8M1_13TeV_Pythia8RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1", 0.0000000000},
        {"GJet_Pt-20to40_DoubleEMEnriched_MGG-80toInf_TuneCUETP8M1_13TeV_Pythia8", 0.0088036451},
        {"GJet_Pt-40toInf_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV_Pythia8", 0.0000000000},
        {"TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8", 0.0000000000},
        {"TTGJets_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8", 0.0000000000},
        {"TTJets_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000000000},
        {"ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000000000},
        {"QCD_Pt-30to40_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV_Pythia8", 0.0000000000},
        {"ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_CP5Down", 0.0000000000},
        {"TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8", 0.0000000000},
        {"ttHToGG_M125_13TeV_powheg_pythia8", 0.0000000000},
        {"ttHJetToGG_M95_13TeV_amcatnloFXFX_madspin_pythia8", 0.0081666653},
        {"ttHJetToGG_M75_13TeV_amcatnloFXFX_madspin_pythia8", 0.0080821143},
        {"DYJetsToLL_M-50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8", 0.0736723112},
        {"WGToLNuG_TuneCP5_13TeV-madgraphMLM-pythia8", 0.0000000000},
        {"ttHJetToGG_M80_13TeV_amcatnloFXFX_madspin_pythia8", 0.0064522789},
        {"DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8", 0.0000000000},
        {"TTJets_SingleLeptFromTbar_TuneCUETP8M1_13TeV-madgraphMLM-pythia8", 0.0000837238},
        {"WGToLNuG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8", 0.0278004489},
        {"VHToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000315763},
        {"ttHJetToGG_M123_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000124664},
        {"ttHJetToGG_M130_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000349610},
        {"TGJets_TuneCUETP8M1_13TeV_amcatnlo_madspin_pythia8", 0.0080502059},
        {"ttHJetToGG_M120_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000218763},
        {"ttHJetToGG_M105_13TeV_amcatnloFXFX_madspin_pythia8", 0.0082000820},
        {"QCD_Pt-40toInf_DoubleEMEnriched_MGG-80toInf_TuneCP5_13TeV_Pythia8", 0.0000000000},
        {"ttHJetToGG_M70_13TeV_amcatnloFXFX_madspin_pythia8", 0.0216202192},
        {"ttHJetToGG_M115_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000000000},
        {"GJet_Pt-20toInf_DoubleEMEnriched_MGG-40to80_TuneCUETP8M1_13TeV_Pythia8", 0.0862786567},
        {"TTJets_TuneCUETP8M2T4_13TeV-amcatnloFXFX-pythia8", 0.0550919717},
        {"ttHJetToGG_M124_13TeV_amcatnloFXFX_madspin_pythia8", 0.0000126107},
        {"QCD_Pt-30to40_DoubleEMEnriched_MGG-80toInf_TuneCUETP8M1_13TeV_Pythia8", 1.2276989540},
        {"GJet_Pt-40toInf_DoubleEMEnriched_MGG-80toInf_TuneCUETP8M1_13TeV_Pythia8", 0.0117581899},
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