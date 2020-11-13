import json
import glob

import ROOT as r
r.gROOT.SetBatch(True)

import argparse
parser = argparse.ArgumentParser()
parser.add_argument("--baby_version", help = "which version of babies to use", default = "v5.8")
args = parser.parse_args()

channels = ["Hadronic", "Leptonic"]
procs = ["fcnc_hut", "fcnc_hct", "tth", "vbf", "ggh", "wh", "zh", "thq", "thw"]
years = ["2016", "2017", "2018"]

#metadata = {
#    "fcnc_hut" : ["FCNC_private_ST_HAD_HUT_2016_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hut-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020", "FCNC_private_TT_aT2HJ_HAD_HUT_2018_microAOD_v1.2_29May2020", "FCNC_private_TT_T2HJ_HAD_HUT_2018_microAOD_v1.2_29May2020", "ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020"],
#    "fcnc_hct" : ["FCNC_private_ST_HAD_HCT_2016_microAOD_v1.2_29May2020", "TT_FCNC-T2HJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020","TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2_MINIAODSIM_microAOD_v1.2_29May2020","FCNC_private_TT_T2HJ_HAD_HCT_2018_microAOD_v1.2_29May2020", "FCNC_private_TT_aT2HJ_HAD_HCT_2018_microAOD_v1.2_29May2020", "ST_FCNC-TH_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020","ST_FCNC-TH_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020","TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2_MINIAODSIM_microAOD_v1.2_29May2020","ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020"]
#}

metadata = {
        "fcnc_hut" : {
            "2016" : {
                "files" : ["FCNC_private_ST_HAD_HUT_2016_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_TuneCUETP8M1_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2_MINIAODSIM_microAOD_v1.2_29May2020"]
                },
            "2017" : {
                "files" : ["TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hut-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020"]
                },
            "2018" : {
                "files" : ["ST_FCNC-TH_Thadronic_HToaa_eta_hut-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020", "FCNC_private_TT_aT2HJ_HAD_HUT_2018_microAOD_v1.2_29May2020", "FCNC_private_TT_T2HJ_HAD_HUT_2018_microAOD_v1.2_29May2020", "ST_FCNC-TH_Tleptonic_HToaa_eta_hut-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aTleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hut_TuneCP5-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020"]
                }
            },
        "fcnc_hct" : {
                "2016" : {
                    "files" : ["FCNC_private_ST_HAD_HCT_2016_microAOD_v1.2_29May2020", "TT_FCNC-T2HJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_TuneCUETP8M1_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020","ST_FCNC-TH_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1_MINIAODSIM_microAOD_v1.2_29May2020"]
                    },
                "2017" : {
                    "files" : ["TT_FCNC-aTtoHJ_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v3_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-TtoHJ_aThadronic_HToaa_eta_hct-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct_TuneCP5-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hct_TuneCP5-MadGraph5-pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_tauDecays_94X_mc2017_realistic_v14-v1_MINIAODSIM_microAOD_v1.2_29May2020"]
                    },
                "2018" : {
                    "files" : ["FCNC_private_TT_T2HJ_HAD_HCT_2018_microAOD_v1.2_29May2020", "FCNC_private_TT_aT2HJ_HAD_HCT_2018_microAOD_v1.2_29May2020", "ST_FCNC-TH_Thadronic_HToaa_eta_hct-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020", "ST_FCNC-TH_Tleptonic_HToaa_eta_hct-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-T2HJ_aTleptonic_HToaa_eta_hct_TuneCP5-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020", "TT_FCNC-aTtoHJ_Tleptonic_HToaa_eta_hct_TuneCP5-MadGraph5-pythia8_RunIIAutumn18MiniAOD-tauDecays_102X_upgrade2018_realistic_v15-v1_MINIAODSIM_microAOD_v1.2_29May2020"]
                    }
            },
        "tth" : {
            "2016" : {
                "files" : ["ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_v2_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v1"]
                },
            "2017" : {
                "files" : ["ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1"]
                },
            "2018" : {
                "files" : ["ttHJetToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_RunIIAutumn18MiniAOD-102X_upgrade2018_realistic_v15-v1"]
                }
            },
        "ggh" : {
            "2016" : {
                "files" : ["GluGluHToGG_M125_13TeV_amcatnloFXFX_pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext2-v2"]
                },
            "2017" : {
                "files" : ["GluGluHToGG_M125_13TeV_amcatnloFXFX_pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v2"]
                },
            "2018" : {
                "files" : ["GluGluHToGG_M125_TuneCP5_13TeV-amcatnloFXFX-pythia8_RunIIAutumn18MiniAOD-102X_upgrade2018_realistic_v15-v1"]
                }
            },
        "vbf" : {
            "2016" : {
                "files" : ["VBFHToGG_M125_13TeV_amcatnlo_pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext1-v2"]
                },
            "2017" : {
                "files" : ["VBFHToGG_M125_13TeV_amcatnlo_pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1"]
                },
            "2018" : {
                "files" : ["VBFHToGG_M125_13TeV_amcatnlo_pythia8_RunIIAutumn18MiniAOD-102X_upgrade2018_realistic_v15-v1"]
                }
            },
        "vh" : {
           "2016" : {
               "files" : ["VHToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2"]
               },
           "2017" : {
               "files" : ["VHToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1"]
               },
           "2018" : {
               "files" : ["VHToGG_M125_13TeV_amcatnloFXFX_madspin_pythia8_RunIIAutumn18MiniAOD-102X_upgrade2018_realistic_v15-v1"]
               }
           },
        "thq" : {
            "2016" : {
                "files" : ["THQ_ctcvcp_HToGG_M125_13TeV-madgraph-pythia8_TuneCUETP8M1_v2_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2"]
                },
            "2017" : {
                "files" : ["THQ_ctcvcp_HToGG_M125_13TeV-madgraph-pythia8_TuneCUETP8M1_v2_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2"]
                },
            "2018" : {
                "files" : ["THQ_ctcvcp_HToGG_M125_13TeV-madgraph-pythia8_TuneCUETP8M1_v2_RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2"]
                }
            },
        "thw" : {
            "2016" : {
                "files" : ["THW_ctcvcp_HToGG_M125_13TeV-madgraph-pythia8_TuneCP5_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1"]
                },
            "2017" : {
                "files" : ["THW_ctcvcp_HToGG_M125_13TeV-madgraph-pythia8_TuneCP5_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1"]
                },
            "2018" : {
                "files" : ["THW_ctcvcp_HToGG_M125_13TeV-madgraph-pythia8_TuneCP5_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1"]
                }
            },
}

def calculate_btag_sf(files, channel):
    ratio = []
    n_evts = []
    for file in files:
        f = r.TFile.Open(file)
        tree = f.Get("tagsDumper/trees/_13TeV_TTH%sTag" % channel)
        tree.Draw("weight")
        hist = r.gPad.GetPrimitive("htemp")
        mean = hist.GetMean()
        tree.Draw("weight/weight_JetBTagWeight")
        hist = r.gPad.GetPrimitive("htemp")
        mean_no_btag = hist.GetMean()
        total_evts = tree.GetEntries()
        ratio.append(mean/mean_no_btag)
        n_evts.append(total_evts)

    return ( sum(ratio[i] * n_evts[i] for i in range(len(ratio))) / sum(n_evts) )


results = {}
for proc in procs:
    results[proc] = {}
    for year in years:
        results[proc][year] = {}

for proc, info in metadata.items():
    for year, subinfo in info.items():
        files = []
        for file in subinfo["files"]:
            ntuples = glob.glob("merged_babies/%s_ttH_Babies_RunII%s/merged_ntuple_*.root" % (file, args.baby_version))
            files += ntuples
        #print "For proc %s, year %s, getting info from the following files" % (proc, year)
        #for file in files:
        #    print file
        #print "\n\n"
        val_had = calculate_btag_sf(files, "Hadronic")
        val_lep = calculate_btag_sf(files, "Leptonic")
        #print "Correction factor for Hadronic: %.3f, Leptonic: %.3f" % (val_had, val_lep)
        if proc == "vh":
            results["wh"][year] = { "Hadronic" : val_had, "Leptonic" : val_lep }
            results["zh"][year] = { "Hadronic" : val_had, "Leptonic" : val_lep }
        else:
            results[proc][year] = { "Hadronic" : val_had, "Leptonic" : val_lep }

with open("btag_normSFs.json", "w") as f_out:
    json.dump(results, f_out, indent=4, sort_keys=True)
