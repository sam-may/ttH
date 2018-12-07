std::map<double, double> m = {
  {0.0100, 0.00000000},
  {0.0200, 0.00000000},
  {0.0300, 0.00000000},
  {0.0400, 0.00000000},
  {0.0500, 0.00000000},
  {0.0600, 0.00000000},
  {0.0700, 0.00000000},
  {0.0800, 0.00000000},
  {0.0900, 0.00000000},
  {0.1000, 0.00000000},
  {0.1100, 0.00000000},
  {0.1200, 0.00000000},
  {0.1300, 0.00000000},
  {0.1400, 0.00000000},
  {0.1500, 0.00000000},
  {0.1600, 0.00000000},
  {0.1700, 0.00000000},
  {0.1800, 0.00000000},
  {0.1900, 0.00000000},
  {0.2000, 0.00000000},
  {0.2100, 0.00000000},
  {0.2200, 0.00000000},
  {0.2300, 0.00000000},
  {0.2400, 0.00000000},
  {0.2500, 0.00000000},
  {0.2600, 0.00000000},
  {0.2700, 0.00000000},
  {0.2800, 0.00000000},
  {0.2900, 0.00000000},
  {0.3000, 0.00000000},
  {0.3100, 0.00000000},
  {0.3200, 0.00000000},
  {0.3300, 0.00000000},
  {0.3400, 0.00000000},
  {0.3500, 0.00000000},
  {0.3600, 0.00000000},
  {0.3700, 0.00000000},
  {0.3800, 0.00000000},
  {0.3900, 0.00000000},
  {0.4000, 0.00000000},
  {0.4100, 0.00000000},
  {0.4200, 0.00000000},
  {0.4300, 0.00000000},
  {0.4400, 0.00000000},
  {0.4500, 0.00000000},
  {0.4600, 0.00917932},
  {0.4700, 0.00000000},
  {0.4800, 0.00000000},
  {0.4900, 0.02754499},
  {0.5000, 0.01977448},
  {0.5100, 0.03270951},
  {0.5200, 0.07542255},
  {0.5300, 0.14698298},
  {0.5400, 0.19650549},
  {0.5500, 0.37912083},
  {0.5600, 0.38954957},
  {0.5700, 0.62368047},
  {0.5800, 0.87183826},
  {0.5900, 1.32664535},
  {0.6000, 1.68808184},
  {0.6100, 1.88747445},
  {0.6200, 2.71365247},
  {0.6300, 3.28016785},
  {0.6400, 3.55428480},
  {0.6500, 5.43608699},
  {0.6600, 5.92898918},
  {0.6700, 8.83024727},
  {0.6800, 14.50072534},
  {0.6900, 18.36164906},
  {0.7000, 29.70227066},
  {0.7100, 67.11579524},
  {0.7200, 180.76758501},
  {0.7300, 0.00000000},
  {0.7400, 0.00000000},
  {0.7500, 0.00000000},
  {0.7600, 0.00000000},
  {0.7700, 0.00000000},
  {0.7800, 0.00000000},
  {0.7900, 0.00000000},
  {0.8000, 0.00000000},
  {0.8100, 0.00000000},
  {0.8200, 0.00000000},
  {0.8300, 0.00000000},
  {0.8400, 0.00000000},
  {0.8500, 0.00000000},
  {0.8600, 0.00000000},
  {0.8700, 0.00000000},
  {0.8800, 0.00000000},
  {0.8900, 0.00000000},
  {0.9000, 0.00000000},
  {0.9100, 0.00000000},
  {0.9200, 0.00000000},
  {0.9300, 0.00000000},
  {0.9400, 0.00000000},
  {0.9500, 0.00000000},
  {0.9600, 0.00000000},
  {0.9700, 0.00000000},
  {0.9800, 0.00000000},
  {0.9900, 0.00000000},
  {1.0000, 0.00000000},
};

double prob_ratio_from_madgraph(double mva_score) {
  std::map<double, double>::iterator it;
  for (it = m.begin(); it != m.end(); it++) {
    if (mva_score <= it->first)
      return it->second;
  }
}
