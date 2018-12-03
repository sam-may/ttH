std::map<double, double> m = {
  {0.0100, 0.00000000},
  {0.0200, 0.00000000},
  {0.0300, 0.00000000},
  {0.0400, 0.00000000},
  {0.0500, 0.00000000},
  {0.0600, 0.00000000},
  {0.0700, 0.00000000},
  {0.0800, 0.00000000},
  {0.0900, 0.01260615},
  {0.1000, 0.01099064},
  {0.1100, 0.00000000},
  {0.1200, 0.00000000},
  {0.1300, 0.00836984},
  {0.1400, 0.00357569},
  {0.1500, 0.00363672},
  {0.1600, 0.00351301},
  {0.1700, 0.02732670},
  {0.1800, 0.00840535},
  {0.1900, 0.04035901},
  {0.2000, 0.04542353},
  {0.2100, 0.08576137},
  {0.2200, 0.01252382},
  {0.2300, 0.03028701},
  {0.2400, 0.04198877},
  {0.2500, 0.07753383},
  {0.2600, 0.14678752},
  {0.2700, 0.13488741},
  {0.2800, 0.10215406},
  {0.2900, 0.15783761},
  {0.3000, 0.14676938},
  {0.3100, 0.16193463},
  {0.3200, 0.21862098},
  {0.3300, 0.24069460},
  {0.3400, 0.24678849},
  {0.3500, 0.29981837},
  {0.3600, 0.24465806},
  {0.3700, 0.32963197},
  {0.3800, 0.29683453},
  {0.3900, 0.42966157},
  {0.4000, 0.37074544},
  {0.4100, 0.44207875},
  {0.4200, 0.46555196},
  {0.4300, 0.52813254},
  {0.4400, 0.40118154},
  {0.4500, 0.58399225},
  {0.4600, 0.54337728},
  {0.4700, 0.62245874},
  {0.4800, 0.64664036},
  {0.4900, 0.79023837},
  {0.5000, 0.82131742},
  {0.5100, 1.08460712},
  {0.5200, 0.81239139},
  {0.5300, 1.04859633},
  {0.5400, 0.99252786},
  {0.5500, 1.52174265},
  {0.5600, 1.40238398},
  {0.5700, 1.03576127},
  {0.5800, 1.39058402},
  {0.5900, 0.93905631},
  {0.6000, 1.12735259},
  {0.6100, 1.13991262},
  {0.6200, 1.10832424},
  {0.6300, 1.29210401},
  {0.6400, 1.36719808},
  {0.6500, 1.41877153},
  {0.6600, 1.55561293},
  {0.6700, 2.15083695},
  {0.6800, 2.07511979},
  {0.6900, 1.85478700},
  {0.7000, 2.40605522},
  {0.7100, 2.59026686},
  {0.7200, 1.59511845},
  {0.7300, 2.12852813},
  {0.7400, 3.11056442},
  {0.7500, 2.32287684},
  {0.7600, 2.54788470},
  {0.7700, 2.68858427},
  {0.7800, 2.70428311},
  {0.7900, 3.04358854},
  {0.8000, 2.99198279},
  {0.8100, 3.65257977},
  {0.8200, 4.39900312},
  {0.8300, 3.40617057},
  {0.8400, 3.87408435},
  {0.8500, 5.47014374},
  {0.8600, 5.16777865},
  {0.8700, 5.51139080},
  {0.8800, 6.38477349},
  {0.8900, 7.85383687},
  {0.9000, 8.97145560},
  {0.9100, 10.51594333},
  {0.9200, 13.05386629},
  {0.9300, 15.57209106},
  {0.9400, 15.09127006},
  {0.9500, 26.98732991},
  {0.9600, 33.68435715},
  {0.9700, 51.24008401},
  {0.9800, 109.41945179},
  {0.9900, 1516.86479493},
  {1.0000, 0.00000000},
};

double prob_ratio_from_madgraph(double mva_score) {
  std::map<double, double>::iterator it;
  for (it = m.begin(); it != m.end(); it++) {
    if (mva_score <= it->first)
      return it->second;
  }
}