from ROOT import *
from tdrStyle import *
setTDRStyle()

f = TFile.Open("top_reweighting.root")

c = TCanvas("c", "", 800, 800)

hists = ["pt", "jet_pt", "jet_btag"]
xmins = [0, 40, 0]
xmaxs = [400, 200, 1]
ymaxs = [0.06, 0.125, 0.8]
x_labels = ["Gen top p_{T} [GeV]", "Lead jet p_{T} [GeV]", "Lead jet b-tag score"]

savepath = "~/public_html/FCNC/Top_pT_reweighting/"

def plot_hists(name, xmin, xmax, x_label, y_max):
    c = TCanvas("c", "", 800, 800)
    lo = f.Get("orig_%s" % name)
    nlo = f.Get("nlo_%s" % name)
    nnlo = f.Get("nnlo_%s" % name)

    dists = [lo, nlo, nnlo]
    labels = ["Original", "Reweight to NLO", "Reweight to NNLO"]
    colors = [1,2,4]

    if name == "pt":
        powheg_nlo = f.Get("ttbar_nlo_pt")
        dists.append(powheg_nlo)
        labels.append("Powheg NLO")
        colors.append(8)

    legend = TLegend(0.6,0.65,0.9,0.9)
    dummy = TH1D("dummy","dummy",1, xmin, xmax)
    dummy.SetMinimum(0)
    dummy.SetMaximum(y_max)
    dummy.SetLineColor(0)
    dummy.SetMarkerColor(0)
    dummy.SetLineWidth(0)
    dummy.SetMarkerSize(0)
    dummy.GetXaxis().SetTitle(x_label)
    dummy.Draw()

    for dist, label, color in zip(dists, labels, colors):
        dist.Scale(1./dist.Integral())
        dist.SetLineWidth(2)
        dist.SetLineColor(color)
        dist.Draw("hist same")
        legend.AddEntry(dist, label, 'l')

    legend.SetTextSize(0.03)
    legend.SetLineWidth(1)
    legend.SetFillColor(0)
    legend.SetBorderSize(1)
    legend.Draw("same")

    #cms = TLatex(0.12, 0.8, "#bf{CMS} #it{Preliminary}")
    #lumi = TLatex(0.8, 0.8, "(13 TeV)")
    #cms.Draw("same")
    #lumi.Draw("same")

    c.SaveAs(savepath + "_" + name + ".pdf")

for hist, xmin, xmax, xlabel, ymax in zip(hists, xmins, xmaxs, x_labels, ymaxs):
    plot_hists(hist, xmin, xmax, xlabel, ymax)

from subprocess import call
call("chmod -R 755 %s" % savepath, shell=True)


