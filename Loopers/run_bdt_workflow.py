import sys, os

import argparse
parser = argparse.ArgumentParser()
parser.add_argument("channel", help = "Hadronic or Leptonic", type=str)
parser.add_argument("selection", help = "e.g. ttHLeptonicLoose", type=str)
parser.add_argument("year", help = "e.g. 2016 or 2017", type=str)
parser.add_argument("tag", help = "tag to identify this training of the BDT", type=str)
args = parser.parse_args()

build_success = os.system("make")
if build_success != 0:
  print "Errors building, will not run rest of BDT workflow"
  os.system("exit(1)")

os.system("./ttH%sMVABabyMaker %s %s" % (args.channel, args.selection, args.year))
os.chdir("../MVAs")
os.system("source setup.sh")
os.system("python prep.py %s" % args.channel)
os.system("python train.py %s" % args.channel)
os.chdir("../Loopers")
os.system("source setup.sh")
os.system("./ttH%sLooper %s %s" % (args.channel, args.selection, args.year))
