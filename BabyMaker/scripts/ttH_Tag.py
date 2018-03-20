import sys

import FWCore.ParameterSet.Config as cms
import FWCore.Utilities.FileUtils as FileUtils

process = cms.Process("FLASHggTag")

process.load("FWCore.MessageService.MessageLogger_cfi")

process.load("Configuration.StandardSequences.GeometryDB_cff")
process.load("Configuration.StandardSequences.MagneticField_cff")
#process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff")
#process.GlobalTag.globaltag = 'POSTLS170_V5::All'
process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff")
from Configuration.AlCa.GlobalTag import GlobalTag
process.GlobalTag = GlobalTag(process.GlobalTag, 'auto:run2_mc')
process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
#process.MessageLogger.cerr.FwkReport.reportEvery = cms.untracked.int32( 100 )

# Uncomment the following if you notice you have a memory leak
# This is a lightweight tool to digg further
#process.SimpleMemoryCheck = cms.Service("SimpleMemoryCheck",
#                                        ignoreTotal = cms.untracked.int32(1),
#                                        monitorPssAndPrivate = cms.untracked.bool(True)
#                                       )

#process.source = cms.Source("PoolSource", fileNames = cms.untracked.vstring("file:/hadoop/cms/store/user/smay/tth/ttHJetToGG_M100_13TeV_amcatnloFXFX_madspin_pythia8/RunIISummer16-2_4_1-25ns_Moriond17-2_4_1-v0-RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/170119_110959/0000/myMicroAODOutputFile_1.root"))
fileNames = sys.argv[2]
fileNames = fileNames.replace('/hadoop','file:/hadoop')
fileNames = fileNames.split(",")
process.source = cms.Source("PoolSource", fileNames = cms.untracked.vstring(fileNames))
#process.source = cms.Source("PoolSource", fileNames = cms.untracked.vstring("file:/hadoop/cms/store/user/bemarsh/flashgg/MicroAOD_skim/2016_skim_v2/DoubleEG/ReMiniAOD-03Feb2017-2_5_4-2_5_1-v0-Run2016B-03Feb2017_ver2-v2/microAOD_1.root", "file:/hadoop/cms/store/user/bemarsh/flashgg/MicroAOD_skim/2016_skim_v2/DoubleEG/ReMiniAOD-03Feb2017-2_5_4-2_5_1-v0-Run2016B-03Feb2017_ver2-v2/microAOD_2.root"))

process.load("flashgg/Taggers/flashggTagSequence_cfi")
process.load("flashgg/Taggers/flashggTagTester_cfi")

# For debugging
switchToUnPreselected = False
switchToFinal = False
switchToPuppi = False
switchToReadOld = False
assert(not switchToUnPreselected or not switchToFinal)
assert(not switchToReadOld or not switchToUnPreselected)
assert(not switchToReadOld or not switchToFinal)

if switchToReadOld:
    from PhysicsTools.PatAlgos.tools.helpers import massSearchReplaceAnyInputTag
    massSearchReplaceAnyInputTag(process.flashggTagSequence,cms.InputTag("flashggPreselectedDiPhotons"),cms.InputTag("flashggDiPhotonsWithAddedDz"))
    process.flashggDiPhotonsWithAddedDz = cms.EDProducer('FlashggDiPhotonGenZProducer',
                                                 DiPhotonTag=cms.InputTag('flashggPreselectedDiPhotons'),
                                                 GenParticleTag=cms.InputTag( "flashggPrunedGenParticles" ))
    process.flashggNewPreselectedDiPhotons = cms.Sequence(process.flashggPreselectedDiPhotons*process.flashggDiPhotonsWithAddedDz)
    process.flashggTagSequence.replace(process.flashggPreselectedDiPhotons,process.flashggNewPreselectedDiPhotons)
    process.source.fileNames=cms.untracked.vstring("root://eoscms.cern.ch//eos/cms/store/group/phys_higgs/cmshgg/sethzenz/flashgg/RunIISpring15-ReMiniAOD-BetaV7-25ns/Spring15BetaV7/GluGluHToGG_M-125_13TeV_powheg_pythia8/RunIISpring15-ReMiniAOD-BetaV7-25ns-Spring15BetaV7-v0-RunIISpring15MiniAODv2-74X_mcRun2_asymptotic_v2-v1/151021_152108/0000/myMicroAODOutputFile_2.root")
    print process.flashggTagSequence

if switchToUnPreselected:
    from PhysicsTools.PatAlgos.tools.helpers import massSearchReplaceAnyInputTag
    massSearchReplaceAnyInputTag(process.flashggTagSequence,cms.InputTag("flashggPreselectedDiPhotons"),cms.InputTag("flashggDiPhotons"))

if switchToFinal:
    from flashgg.MicroAOD.flashggFinalEGamma_cfi import flashggFinalEGamma
    from PhysicsTools.PatAlgos.tools.helpers import massSearchReplaceAnyInputTag
    massSearchReplaceAnyInputTag(process.flashggTagSequence,cms.InputTag("flashggPreselectedDiPhotons"),cms.InputTag("flashggFinalEGamma",flashggFinalEGamma.DiPhotonCollectionName.value()))

if switchToPuppi:
    process.flashggUnpackedJets.JetsTag = cms.InputTag("flashggFinalPuppiJets")

from flashgg.Taggers.flashggTagOutputCommands_cff import tagDefaultOutputCommand

process.out = cms.OutputModule("PoolOutputModule", fileName = cms.untracked.string('myTagOutputFile.root'),
                               outputCommands = tagDefaultOutputCommand			       
                               )

process.p = cms.Path(process.flashggTagSequence*process.flashggTagTester)

process.e = cms.EndPath(process.out)
