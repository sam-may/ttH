import os

# Note: not all samples have LHEScaleWeight variations saved.
# For example,
    # sample: /TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_tauDecays_102X_mc2017_realistic_v8-v1/NANOAODSIM 
    # file: /store/mc/RunIIFall17NanoAODv7/TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano02Apr2020_tauDecays_102X_mc2017_realistic_v8-v1/260000/A0B1D613-FB75-BF4D-9AD4-70537069D18C.root
    # gives: root [3] Events->Print("LHEScale*")
    #******************************************************************************
    #*Tree    :Events    : Events                                                 *
    #*Entries :   422440 : Total =      3505090186 bytes  File  Size =  827528841 *
    #*        :          : Tree compression factor =   4.23                       *
    #******************************************************************************
    #*Br    0 :LHEScaleWeight : Float_t                                           *
    #*Entries :   422440 : Total  Size=    1712066 bytes  File Size  =      38984 *
    #*Baskets :      197 : Basket Size=      28672 bytes  Compression=  43.80     *
    #*............................................................................*

# Samples and files
# Hadronic, Hut TT (DOESNT HAVE ALL LHEScaleWeights)
    # sample (2017) : /TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM
    # file : 
    # sample : /TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1/RunIISummer16NanoAODv7-PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/NANOAODSIM
    # nanoAOD file : /store/mc/RunIISummer16NanoAODv7/TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/70000/88EA7B40-3BD3-B141-9E57-167BCA019621.root
# Hadronic, Hct TT (DOESNT HAVE ALL LHEScaleWeights)
    # sample : /TT_FCNC-T2HJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1/RunIISummer16NanoAODv7-PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/NANOAODSIM
    # nanoAOD file : /store/mc/RunIISummer16NanoAODv7/TT_FCNC-T2HJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/270000/7C88EBC2-C2F3-9642-A52F-49821F83D708.root
# Leptonic, Hut TT
    # sample : /TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut-MadGraph5-pythia8/RunIISummer16NanoAODv7-PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/NANOAODSIM 
    # nanoAOD file : /store/mc/RunIISummer16NanoAODv7/TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut-MadGraph5-pythia8/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/270000/B6B576EE-DD31-1340-9335-E4C3C5BFEC1F.root 
# Leptonic, Hct TT
    # sample : /TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct-MadGraph5-pythia8/RunIISummer16NanoAODv7-PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/NANOAODSIM
    # nanoAOD file : /store/mc/RunIISummer16NanoAODv7/TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct-MadGraph5-pythia8/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/120000/ABDA6A8E-E930-0145-AED7-66DA3291F288.root 
# Hadronic, Hut ST
    # sample : 
    # nanoAOD file : 
# Hadronic, Hct ST
    # sample : 
    # nanoAOD file : 
# Leptonic, Hut ST
    # sample : /ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8/RunIISummer16NanoAODv7-PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/NANOAODSIM 
    # nanoAOD file : /store/mc/RunIISummer16NanoAODv7/ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/120000/E9EB167E-0DB8-7E4A-BFE5-3F1EA58899EC.root 
# Leptonic, Hct ST 
    # sample : 
    # nanoAOD file :

files = {
    "Leptonic_Hut_TT_2016" : "/store/mc/RunIISummer16NanoAODv7/TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut-MadGraph5-pythia8/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/270000/B6B576EE-DD31-1340-9335-E4C3C5BFEC1F.root",
    "Leptonic_Hut_ST_2016" : "/store/mc/RunIISummer16NanoAODv7/ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/120000/E9EB167E-0DB8-7E4A-BFE5-3F1EA58899EC.root",
    "Hadronic_Hct_TT_2016" : "/store/mc/RunIISummer16NanoAODv7/TT_FCNC-T2HJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/270000/7C88EBC2-C2F3-9642-A52F-49821F83D708.root",
    "Leptonic_Hct_TT_2016" : "/store/mc/RunIISummer16NanoAODv7/TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct-MadGraph5-pythia8/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/120000/ABDA6A8E-E930-0145-AED7-66DA3291F288.root",
    "Hadronic_Hut_TT_2016" : "/store/mc/RunIISummer16NanoAODv7/TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/70000/88EA7B40-3BD3-B141-9E57-167BCA019621.root",
}

for sample, file in files.items():
    src = "root://cmsxrootd.fnal.gov/" + file
    target = sample + "_nanoAOD.root"

    if os.path.exists(target):
        continue

    os.system("xrdcp %s %s" % (src, target))
