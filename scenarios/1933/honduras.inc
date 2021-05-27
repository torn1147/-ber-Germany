##############################
# Country definition for HON #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = HON
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 2085 # Tegucigalpa
  manpower           = 0
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "HON" NumberOfSpies = 1 }

  nationalprovinces      = { 2084 2085 }
  ownedprovinces         = { 2084 2085 }
  controlledprovinces    = { 2084 2085 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1850 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5080 5600 5610 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 355001 } # Tiburcio Carias Andina
  headofgovernment       = { type = 9 id = 355002 } # Carlos Alberto Ucles
  foreignminister        = { type = 9 id = 355003 } # Tiburcio Carias Andina
  armamentminister       = { type = 9 id = 355004 } # Roberto Michelleti Bain
  ministerofsecurity     = { type = 9 id = 355005 } # Carlos Alberto Ucles
  ministerofintelligence = { type = 9 id = 355006 } # Raimundo Stochler Garcia
  chiefofstaff           = { type = 9 id = 355007 } # Tiburcio Carias Andina
  chiefofarmy            = { type = 9 id = 355008 } # Raimundo Stochler Garcia
  chiefofnavy            = { type = 9 id = 355009 } # Carlos Vaupel Comeza
  chiefofair             = { type = 9 id = 355010 } # Gustavo Schmidt

  landunit = {
    id       = { type = 19500 id = 55 }
    name     = "Ejercito de Honduras"
    location = 2085
    division = {
      id             = { type = 19500 id = 5500 }
      name           = "1a Brig. de Inf. 'Francesco Marazán'"
      type           = infantry
      model          = 5
      strength       = 15
    }
  }
}
