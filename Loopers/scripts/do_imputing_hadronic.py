import sys, os
sys.path.append("../")

import parallel_utils
import workflow_utils

import argparse
parser = argparse.ArgumentParser()
parser.add_argument("--tag", help = "tag to denote with", type=str)
parser.add_argument("--baby_version", help = "which version of babies to use", type=str)
args = parser.parse_args()

#bdt = "Hadronic__v1.5_1May2019_RunII_MVA_Presel_impute__bdt.xml"
#bdt = "../MVAs/Hadronic__v1.7_19Jun2019_RunII_MVA_Presel_impute_addDNNs_addTopTag_add_ttH_vs_tH_score__bdt.xml"
bdt = "none"

os.chdir("../")
#parallel_utils.run('./ttHHadronicLooper "ttHHadronic_RunII_DiPhotonFits_Presel" "RunII" "%s" "%s" "none"' % (args.tag + "prefit", bdt))
os.chdir("Plots")
#workflow_utils.make_tables_and_plots("../ttHHadronic_RunII_DiPhotonFits_Presel_%s_histogramsRunII.root" % (args.tag + "prefit"), "ttH Hadronic|DiPhoton Fit Presel.|Pre-Fit")
os.chdir("../PhotonID_Sideband/")
#parallel_utils.run('python derive_shape_fake.py --input "../ttHHadronic_RunII_DiPhotonFits_Presel_%s_histogramsRunII.root" --hist_name "hFakePhotonIDMVA"' % (args.tag + "prefit"))
dummy_input = raw_input("You probably want to update ttHLooper.h with results of deriving fake shape. Press any key to continue")

os.chdir("../")
command_list = []
#command_list.append('./ttHHadronicLooper "ttHHadronic_RunII_MVA_Presel" "RunII" "%s" "%s" "impute_no_scale"' % (args.tag + "_impute_prefit", bdt))
#command_list.append('./ttHHadronicLooper "ttHHadronic_RunII_MVA_Presel_CutPtoM_light" "RunII" "%s" "%s" "impute_no_scale"' % (args.tag + "_impute_prefit", bdt))
#command_list.append('./ttHHadronicLooper "ttHHadronic_RunII_MVA_Presel_CutPtoM" "RunII" "%s" "%s" "impute_no_scale"' % (args.tag + "_impute_prefit", bdt))
parallel_utils.submit_jobs(command_list, 3)

os.chdir("Plots")
#workflow_utils.make_tables_and_plots("../ttHHadronic_RunII_MVA_Presel_%s_histogramsRunII.root" % (args.tag + "_impute_prefit"), "ttH Hadronic|Loose MVA Presel.|Pre-Fit")

os.chdir("../tt_template_fit/")
#parallel_utils.run('python do_fits_impute.py --input_file "../ttHHadronic_RunII_MVA_Presel_%s_histogramsRunII.root" --jet_bin "2+"' % (args.tag + "_impute_prefit"))

dummy_input = raw_input("You probably want to update ttHLooper.h with results of DiPhoton Fits. Press any key to continue")

os.chdir("../")
command_list = []
#command_list.append('python looper_wrapper.py --channel "Hadronic" --baby_version "v2.5" --tag "%s" --selection "ttHHadronic_RunII_MVA_Presel" --bkg_options "impute" --bdt "Hadronic__v1.5_1May2019_RunII_MVA_Presel_impute__bdt.xml"' % (args.tag + "_impute"))
#command_list.append('python looper_wrapper.py --channel "Hadronic" --baby_version "v1.5" --tag "%s" --selection "ttHHadronic_RunII_MVA_Presel_CutPtoM" --bkg_options "impute" --bdt "Hadronic__v1.5_1May2019_RunII_MVA_Presel_impute_cutPtoM__bdt.xml"' % (args.tag + "_impute"))

#parallel_utils.run('python looper_wrapper.py --channel "Hadronic" --baby_version "%s" --tag "%s" --selection "ttHHadronic_RunII_MVA_Presel" --bkg_options "impute" --bdt "%s"' % (args.baby_version, args.tag + "_impute", bdt))


#parallel_utils.run('python looper_wrapper.py --channel "Hadronic" --baby_version "v1.5" --tag "%s" --selection "ttHHadronic_2017_TagsInclusive" --bkg_options "impute"' % (args.tag + "_impute"))
#parallel_utils.run('python looper_wrapper.py --channel "Hadronic" --baby_version "v1.5" --tag "%s" --selection "ttHHadronic_2017_Tag0" --bkg_options "impute"' % (args.tag + "_impute"))
#parallel_utils.run('python looper_wrapper.py --channel "Hadronic" --baby_version "v1.5" --tag "%s" --selection "ttHHadronic_2017_Tag1" --bkg_options "impute"' % (args.tag + "_impute"))
#parallel_utils.run('python looper_wrapper.py --channel "Hadronic" --baby_version "v1.5" --tag "%s" --selection "ttHHadronic_2017_Tag2" --bkg_options "impute"' % (args.tag + "_impute"))

#parallel_utils.submit_jobs(command_list, 3)
command_list = []

os.chdir("Plots")
#workflow_utils.make_tables_and_plots("../ttHHadronic_RunII_MVA_Presel_%s_histogramsRunII.root" % (args.tag + "_impute"), "ttH Hadronic|Loose MVA Presel.")
#workflow_utils.make_tables_and_plots("../ttHHadronic_RunII_MVA_Presel_CutPtoM_light%s_histogramsRunII.root" % (args.tag + "_impute"), "ttH Hadronic|Loose MVA Presel.|Cut on #gamma p_{T}/m_{#gamma#gamma}")
#workflow_utils.make_tables_and_plots("../ttHHadronic_RunII_MVA_Presel_CutPtoM_%s_histogramsRunII.root" % (args.tag + "_impute"), "ttH Hadronic|Loose MVA Presel.|Cut on #gamma p_{T}/m_{#gamma#gamma}")

do_mva = True
if do_mva:
  os.chdir("../")
  #parallel_utils.run('python looper_wrapper.py --channel "Hadronic" --baby_version "v1.5" --tag "%s" --selection "ttHHadronic_RunII_MVA_Presel" --bkg_options "scale_diphoton" --babymaker' % (args.tag + "_RunII_MVA_Presel_scale_diphoton"))

  #parallel_utils.run('python looper_wrapper.py --channel "Hadronic" --baby_version "%s" --tag "%s" --selection "ttHHadronic_RunII_MVA_Presel" --bkg_options "impute" --babymaker' % (args.baby_version, args.tag + "_RunII_MVA_Presel_impute"))

  #parallel_utils.run('python looper_wrapper.py --channel "Hadronic" --baby_version "v1.5" --tag "%s" --selection "ttHHadronic_2017_Presel" --bkg_options "impute" --babymaker --years "2017"' % (args.tag + "_2017_Presel_impute"))

  # 2016 + 2017 Year Study
  #parallel_utils.run('python looper_wrapper.py --channel "Hadronic" --baby_version "%s" --tag "%s" --selection "ttHHadronic_RunII_MVA_Presel" --bkg_options "impute" --babymaker --years "2016,2017"' % (args.baby_version, args.tag + "_RunII_MVA_Presel_impute"))
  os.chdir("../MVAs/")
  
  #parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --tag "addTopTag" --do_top_tag' % (args.tag))
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_featuresaddTopTag.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_impute_addTopTag" --ext ""' % (args.tag, args.tag))

  #parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --tag "addTopTag_addYear" --do_top_tag --add_year' % (args.tag))
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_featuresaddTopTag_addYear.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_impute_addTopTag_addYear" --ext ""' % (args.tag, args.tag))
  # End 2016 + 2017 Year Study


  os.chdir("../MVAs/")

  # DNN
  #parallel_utils.run('python prep_dnn.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --signal "ttH" --background "dipho" --tag "dipho"' % (args.tag))
  #parallel_utils.run('python train_dnn.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_dnn_features_dipho.hdf5" --tag "ttHHadronic_ttH_vs_dipho_%s" --channel "Hadronic"' % (args.tag, args.tag))

  #parallel_utils.run('python prep_dnn.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --signal "ttH" --background "ttGG" --tag "ttGG"' % (args.tag))
  #parallel_utils.run('python train_dnn.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_dnn_features_ttGG.hdf5" --tag "ttHHadronic_ttH_vs_ttGG_%s" --channel "Hadronic"' % (args.tag, args.tag))


  # 2017 Ref BDT
  #parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_2017_Presel_impute.root" --channel "Hadronic"' % (args.tag))
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_2017_Presel_impute_features.hdf5" --channel "Hadronic" --tag "_%s_2017_Presel_impute" --ext ""' % (args.tag, args.tag))

  # BDT
  #parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_scale_diphoton.root" --channel "Hadronic" --cut_ptoM --tag "cutPtoM"' % (args.tag))
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_scale_diphoton_featurescutPtoM.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_scale_diphoton_cutPtoM" --ext ""' % (args.tag, args.tag))

  #parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --cut_ptoM --tag "cutPtoM"' % (args.tag))
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_featurescutPtoM.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_impute_cutPtoM" --ext ""' % (args.tag, args.tag))
  #parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic"' % (args.tag))
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_features.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_impute" --ext ""' % (args.tag, args.tag))
  #parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --dnn_models "dnn_weights/ttHHadronic_ttH_vs_dipho_%s_weights_00.hdf5,dnn_weights/ttHHadronic_ttH_vs_ttGG_%s_weights_00.hdf5" --tag "addDNNs"' % (args.tag, args.tag, args.tag))
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_featuresaddDNNs.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_impute_addDNNs" --ext ""' % (args.tag, args.tag))

  # Baseline
  #parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --dnn_models "dnn_weights/ttHHadronic_ttH_vs_dipho_v1.6_28May2019_weights_00.hdf5,dnn_weights/ttHHadronic_ttH_vs_ttGG_v1.6_28May2019_weights_00.hdf5" --tag "addDNNs_addTopTag" --do_top_tag' % (args.tag))
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_featuresaddDNNs_addTopTag.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_impute_addDNNs_addTopTag" --ext ""' % (args.tag, args.tag))

  # Baseline 2017 only
  os.chdir("../Loopers")
  #parallel_utils.run('python looper_wrapper.py --channel "Hadronic" --baby_version "%s" --tag "%s" --selection "ttHHadronic_RunII_MVA_Presel" --bkg_options "impute" --babymaker --years "2017"' % (args.baby_version, args.tag + "_2017_only_RunII_MVA_Presel_impute"))
  os.chdir("../MVAs")

  #parallel_utils.run('python prep_dnn.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --signal "ttH" --background "dipho" --tag "dipho" --z_score' % (args.tag + "_2017_only"))
  #parallel_utils.run('python prep_dnn.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --signal "ttH" --background "dipho" --tag "dipho"' % (args.tag + "_2017_only"))
  #parallel_utils.run('python train_dnn.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_dnn_features_dipho.hdf5" --tag "ttHHadronic_ttH_vs_dipho_%s" --channel "Hadronic"' % (args.tag + "_2017_only", args.tag + "_2017_only"))

  #parallel_utils.run('python prep_dnn.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --signal "ttH" --background "ttGG" --tag "ttGG" --z_score' % (args.tag + "_2017_only"))
  #parallel_utils.run('python prep_dnn.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --signal "ttH" --background "ttGG" --tag "ttGG"' % (args.tag + "_2017_only"))
  #parallel_utils.run('python train_dnn.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_dnn_features_ttGG.hdf5" --tag "ttHHadronic_ttH_vs_ttGG_%s" --channel "Hadronic"' % (args.tag + "_2017_only", args.tag + "_2017_only"))

  #parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic"' % (args.tag + "_2017_only"))
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_features.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_impute" --ext ""' % (args.tag + "_2017_only", args.tag + "_2017_only"))

  parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --dnn_models "dnn_weights/ttHHadronic_ttH_vs_dipho_%s_2017_only_weights_00.hdf5,dnn_weights/ttHHadronic_ttH_vs_ttGG_%s_2017_only_weights_00.hdf5" --tag "addDNNs_addTopTag" --do_top_tag' % (args.tag + "_2017_only", args.tag, args.tag))
  parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_featuresaddDNNs_addTopTag.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_impute_addDNNs_addTopTag" --ext ""' % (args.tag + "_2017_only", args.tag + "_2017_only"))
  # End Baseline 2017 only

  # Add year
  #parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --tag "addTopTag_addYear" --do_top_tag --add_year' % (args.tag))
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_featuresaddTopTag_addYear.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_impute_addTopTag_addYear" --ext ""' % (args.tag, args.tag))
  #parallel_utils.run('python prep.py --input "../Loopers/MVABaby_ttHHadronic_%s_RunII_MVA_Presel_impute.root" --channel "Hadronic" --dnn_models "dnn_weights/ttHHadronic_ttH_vs_dipho_v1.6_28May2019_weights_00.hdf5,dnn_weights/ttHHadronic_ttH_vs_ttGG_v1.6_28May2019_weights_00.hdf5" --tag "addDNNs_addTopTag_addYear" --do_top_tag --add_year' % (args.tag))
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_featuresaddDNNs_addTopTag_addYear.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_impute_addDNNs_addTopTag_addYear" --ext ""' % (args.tag, args.tag))

  # Train and also zip in ttH vs. tH BDT score
  #reference_mva_name = "/home/users/sjmay/ttH/MVAs/Hadronic_ttH_vs_tH_test_tH_17Jun2019__bdt.xgb"
  #parallel_utils.run('python train.py --input "ttHHadronic_%s_RunII_MVA_Presel_impute_featuresaddDNNs_addTopTag.hdf5" --channel "Hadronic" --tag "_%s_RunII_MVA_Presel_impute_addDNNs_addTopTag_add_ttH_vs_tH_score" --ext "" --reference_mva "%s" --reference_mva_name "ttH_vs_tH_bdt_score"' % (args.tag, args.tag, reference_mva_name))
