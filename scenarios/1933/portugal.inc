##############################
# Country definition for POR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = POR
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 476 # Lisbon
  manpower           = 94
  # Resource Reserves
  energy         = 1020
  metal          = 510
  rare_materials = 255
  oil            = 500
  supplies       = 500
  money          = 15
  transports     = 100
  escorts        = 7

  diplomacy = {
    relation = { tag = BEL value = -20 }
    relation = { tag = BRA value = 75 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 25 }
    relation = { tag = ITA value = 65 }
    relation = { tag = SAF value = 125 access = yes }
    relation = { tag = SPR value = -50 }
  }
  SpyInfo                = { country = "POR" NumberOfSpies = 5 }

  nationalprovinces      = { 476 477 478 479 480 481 482 }
  ownedprovinces         = { 476 477 478 479 480 481 482 853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1513 1617 }
  controlledprovinces    = { 476 477 478 479 480 481 482 853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1513 1617 }
  claimedprovinces       = { 853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1513 1617 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 7600 7610 2620 2010 2630 2640 2860 2870 2880 2020 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1910 1920 1930 1940 1950 1960 1830 1840 1850 1860 3010 3020 3030 3040 3050 3060 3110 3120 3130 3610 3620 3630 3640 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 4700 4710 5700 5710 5010 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 3720 3730 3736 3740 3750 3900 3810 5600 5610 5620 14000 14010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6010 6020 8010 8040 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 20001 } # António de Fragosa Carmona
  headofgovernment       = { type = 9 id = 20002 } # A. Oliveira Salazar
  foreignminister        = { type = 9 id = 20003 } # A. Oliveira Salazar
  armamentminister       = { type = 9 id = 20004 } # Raul Brandao
  ministerofsecurity     = { type = 9 id = 20005 } # Mario Pais Sousa
  ministerofintelligence = { type = 9 id = 20006 } # Pedro Teotónio Pereira
  chiefofstaff           = { type = 9 id = 20007 } # Tasso Miranda Cabral
  chiefofarmy            = { type = 9 id = 20008 } # J.A. Lobato Guerra
  chiefofnavy            = { type = 9 id = 20009 } # Jaime Afreixo
  chiefofair             = { type = 9 id = 20010 } # Manuel Gouveia

  landunit = {
    id       = { type = 14000 id = 1000 }
    name     = "Exército do Portugal"
    location = 476
    division = {
      id             = { type = 14000 id = 1001 }
      name           = "1o Batalhão de Infantaria"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 35
    }
    division = {
      id             = { type = 14000 id = 1002 }
      name           = "2o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
    }
    division = {
      id             = { type = 14000 id = 1003 }
      name           = "3o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
    }
    division = {
      id             = { type = 14000 id = 1004 }
      name           = "4o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 14000 id = 1005 }
      name           = "5o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 14000 id = 1006 }
      name           = "6o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 14000 id = 1007 }
      name           = "7o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
      organisation   = 30
      defaultorganisation = 0
    }
  }

  navalunit = {
    id       = { type = 19600 id = 1003 }
    name     = "Transporte de Navio do Portugal"
    location = 476
    base     = 476
    division = {
      id             = { type = 19600 id = 1004 }
      name           = "1o Flotilha de Navio de Transporte"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 19600 id = 9303 }
      name           = "Viana do Castello Flotilha"
      type           = destroyer
      model          = 4
      strength       = 100
    }
  }
  navalunit = {
    id       = { type = 19600 id = 1005 }
    name     = "Transporte de Navio de Colonias"
    location = 963
    base     = 963
    division = {
      id             = { type = 19600 id = 1006 }
      name           = "2o Flotilha de Navio de Transporte"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 19600 id = 1007 }
      name           = "Douro Flotilha"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 19600 id = 9302 }
    name     = "Marinha do Portugal"
    location = 476
    base     = 476
    division = {
      id             = { type = 19600 id = 9304 }
      name           = "1o Flotilha de Submarino"
      type           = submarine
      model          = 3
      strength       = 100
    }
  }

  airunit = { 
    id       = { type = 19600 id = 9300 }
    name     = "Aéreo do Portugal"
    location = 476
    base     = 476
    division = {
      id             = { type = 19600 id = 9301 }
      name           = "1o Avião de Bombardeiro Tático"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
}
