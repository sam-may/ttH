import os, sys
import h5py
import ROOT
import numpy
import root_numpy
import json

import utils
import prep_utils
import dnn_helper

import argparse
parser = argparse.ArgumentParser()
parser.add_argument("--input", help = "input root file", type=str)
parser.add_argument("--channel", help = "Hadronic or Leptonic", type=str, default = "Hadronic")
parser.add_argument("--tag", help = "name to append to filename", type=str, default = "")

parser.add_argument("--signal", help = "csv list of processes to consider as signal", type=str)

parser.add_argument("--bkg", help = "csv list of processes to consider as bkg", type=str)
parser.add_argument("--features", help = "csv list of features to use in training", type=str)

parser.add_argument("--objects", help = "create dset of pt ordered objects", action="store_true")
parser.add_argument("--z_score", help = "preprocess features with z-score transformation", action="store_true")
parser.add_argument("--dnn_models", help = "csv list of dnn models to add as inputs", type=str, default = "")

args = parser.parse_args()

print "[prep.py]: args.input               : %s" % args.input
print "[prep.py]: args.channel             : %s" % args.channel
print "[prep.py]: args.tag                 : %s" % args.tag
print "[prep.py]: args.signal              : %s" % args.signal
print "[prep.py]: args.bkg                 : %s" % args.bkg
print "[prep.py]: args.features            : %s" % args.features
print "[prep.py]: args.objects             : %s" % args.objects


output_file = args.input.replace(".root", "").replace("../Loopers/MVABaby_","") + "_features" + "_" + args.tag + ".hdf5"
z_score_json = "preprocess_scheme_%s_%s.json" % (args.channel, args.tag)

print "[prep.py]: output file              : %s" % output_file
print "[prep.py]: output z-score json      : %s" % z_score_json

# Load features from TTree
f = ROOT.TFile(args.input)
tree = f.Get("t")

training_features = args.features.split(",")
default_branches = ["evt_weight_", "process_id_", "mass_", "dipho_pt_", "evt_", "run_", "lumi_", "year_", "tth_runII_mva_", "signal_mass_category_", "rand_", "signal_mass_label_", "lead_phi_", "sublead_phi_", "log_met_", "met_phi_", "objects_"]

branches = training_features + default_branches
if args.z_score:
    branches.append("objects_")

signal = args.signal.split(",")
bkg = args.bkg.split(",")

if "fcnc" in signal[0]:
    fcnc = True
else:
    fcnc = False

selection_train = prep_utils.selection(signal, bkg, 0, fcnc=fcnc)
selection_test  = prep_utils.selection(signal, bkg, 1, fcnc=fcnc)
selection_data  = prep_utils.selection(signal, bkg, 2, fcnc=fcnc)

features_train = root_numpy.tree2array(tree, branches = branches, selection = selection_train)
features_test = root_numpy.tree2array(tree, branches = branches, selection = selection_test)
features_data = root_numpy.tree2array(tree, branches = branches, selection = selection_data)

features = {
    "train" : features_train,
    "test"  : features_test,
    "data"  : features_data,
}

feature_idx_map = {
    "train" : 0,
    "test"  : 1,
    "data"  : 2,
}

dnn_models = args.dnn_models.split(",")
do_dnn = len(args.dnn_models) > 0

dnn_predictions = []
dnn_features = ["lead_eta_", "sublead_eta_", "lead_phi_", "sublead_phi_", "leadptoM_", "subleadptoM_", "maxIDMVA_", "minIDMVA_", "log_met_", "met_phi_", "leadPSV_", "subleadPSV_", "dipho_rapidity_", "dipho_pt_over_mass_", "dipho_delta_R", "max1_btag_", "max2_btag_", "njets_"]
if args.channel == "Leptonic":
    dnn_features += ["n_lep_tight_"]

if len(args.dnn_models) > 0:
    with open(dnn_models[0], "r") as f_in:
        preprocess_scheme = json.load(f_in)["preprocess_scheme"]

else:
    preprocess_scheme = "none"

if ".json" in preprocess_scheme:
    with open(preprocess_scheme) as f_in:
        preprocess_scheme = json.load(f_in)

print("Preprocessing scheme: ", preprocess_scheme)

dnn_branches = []

if do_dnn:
    print("Calculating dnn scores")
    print((len(dnn_features)))
    print([feat for feat in dnn_features])
    i = 0
    for dnn_model in dnn_models:
        with open(dnn_model, "r") as f_in:
            model = json.load(f_in)
        dnn_features_data = dnn_helper.DNN_Features(name = 'data', global_features = utils.create_array(features_data, dnn_features, model["preprocess_scheme"], True), objects = utils.preprocess_array(utils.pad_array(features_data["objects_"]), model["preprocess_scheme"]))
        dnn_features_validation = dnn_helper.DNN_Features(name = 'test', global_features = utils.create_array(features_test, dnn_features, model["preprocess_scheme"], True), objects = utils.preprocess_array(utils.pad_array(features_test["objects_"]), model["preprocess_scheme"]), lumi = features_test["lumi_"], run = features_test["run_"], evt = features_test["evt_"])
        dnn_features_train = dnn_helper.DNN_Features(name = 'train', global_features = utils.create_array(features_train, dnn_features, model["preprocess_scheme"], True), objects = utils.preprocess_array(utils.pad_array(features_train["objects_"]), model["preprocess_scheme"]))

        dnn = dnn_helper.DNN_Helper(features_validation = dnn_features_validation, features_train = dnn_features_train, features_data = dnn_features_data, metadata = model, weights_file = "dnn_weights/" + model["weights"], train_mode = False)
        dnn_predictions.append(dnn.predict(debug=True))
        training_features.append("dnn_score_%d" % i)
        dnn_branches.append("dnn_score_%d" % i)
        i += 1

print(dnn_predictions)

preprocess_dict = {}
if args.z_score:
    for feat in training_features:
        mean, std = utils.get_mean_and_std(features_train[feat])
        preprocess_dict[feat] = {
            "mean"      : float(mean),
            "std_dev"   : float(std)
        }

    with open(z_score_json, "w") as f_out:
        json.dump(preprocess_dict, f_out, indent=4, sort_keys=True)

f_out = h5py.File(output_file, "w")
f_out.create_dataset("feature_names", data = training_features)
if fcnc:
    training_features = [feat for feat in training_features]
else:
    training_features = [feat for feat in training_features if "dnn_score" not in feat]

for set in features.keys():
    j = feature_idx_map[set]
    if do_dnn:
        dnn_info = {
            "do_dnn" : True,
            "dnn_predictions" : dnn_predictions,
            "idx" : j
        }
    else:
        dnn_info = { "do_dnn" : False }
    
    global_features, label = prep_utils.create_features_and_label(features[set], training_features, signal, bkg, preprocess_dict, args.z_score, dnn_info = dnn_info)

    f_out.create_dataset("global_%s" % set, data = global_features)
    f_out.create_dataset("label_%s" % set, data = label)

    for misc in default_branches: 
        if misc in ["lead_phi_", "sublead_phi_", "log_met_", "met_phi_", "objects_"]:
            continue
        array = features[set][misc]
        f_out.create_dataset("%s_%s" % (misc, set), data = array)

    for i in range(len(dnn_predictions)):
        array = dnn_predictions[i][feature_idx_map[set]]
        f_out.create_dataset("%s_%s" % ("dnn_score_%d" % i, set), data = array)

    if args.objects:
        objects = utils.pad_array(features[set]["objects_"])
        f_out.create_dataset("objects_%s" % set, data = objects)

f_out.close()
