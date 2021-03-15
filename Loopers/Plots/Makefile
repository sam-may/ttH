ROOTLIBS = $(shell root-config --libs) -lMinuit -lMLP -lXMLIO -lTMVA -lGenVector

CC = g++
CFLAGS = -g -std=c++1y

TARGET = makePlots templatePlots makeTables fit_plots compare_shapes correlation_plots paperPlot makePlots_hig-19-015 makePlots_FCNC 

all: $(TARGET)

makePlots_hig-19-015: makePlots_hig-19-015.cpp PlotHelper.h
	$(CC) $(CFLAGS) -I${ROOTSYS}/include -o makePlots_hig-19-015 makePlots_hig-19-015.cpp $(ROOTLIBS)

makePlots_FCNC: makePlots_FCNC.cpp PlotHelper.h
	$(CC) $(CFLAGS) -I${ROOTSYS}/include -o makePlots_FCNC makePlots_FCNC.cpp $(ROOTLIBS)

makePlots: makePlots.cpp PlotHelper.h
	$(CC) $(CFLAGS) -I${ROOTSYS}/include -o makePlots makePlots.cpp $(ROOTLIBS)

templatePlots: templatePlots.cpp PlotHelper.h
	$(CC) $(CFLAGS) -I${ROOTSYS}/include -o templatePlots templatePlots.cpp $(ROOTLIBS)

makeTables: makeTables.cpp PlotHelper.h
	$(CC) $(CFLAGS) -I${ROOTSYS}/include -o makeTables makeTables.cpp $(ROOTLIBS)

fit_plots: fit_plots.cpp PlotHelper.h
	$(CC) $(CFLAGS) -I${ROOTSYS}/include -o fit_plots fit_plots.cpp $(ROOTLIBS)

compare_shapes: compare_shapes.cpp PlotHelper.h
	$(CC) $(CFLAGS) -I${ROOTSYS}/include -o compare_shapes compare_shapes.cpp $(ROOTLIBS)

correlation_plots: correlation_plots.cpp PlotHelper.h
	$(CC) $(CFLAGS) -I${ROOTSYS}/include -o correlation_plots correlation_plots.cpp $(ROOTLIBS)

paperPlot: paperPlot.cpp PlotHelper.h DoublePlotHelper.h
	$(CC) $(CFLAGS) -I${ROOTSYS}/include -o paperPlot paperPlot.cpp $(ROOTLIBS)
