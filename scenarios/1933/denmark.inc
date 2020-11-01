##############################
# Country definition for DEN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = DEN
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 294 # Copenhagen
  manpower           = 8
  # Resource Reserves
  energy         = 660
  metal          = 330
  rare_materials = 165
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 200

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 75 }
    relation = { tag = GER value = 25 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = SWE value = 75 }
    relation = { tag = USA value = 75 }
    relation = { tag = LIT value = 75 }
    relation = { tag = LAT value = 75 }
    relation = { tag = EST value = 75 }
  }
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }

  nationalprovinces      = { 1 2 3 216 217 218 219 220 294 1783 }
  ownedprovinces         = { 1 2 3 216 217 218 219 220 294 1783 }
  controlledprovinces    = { 1 2 3 216 217 218 219 220 294 1783 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 7600 7610 2620 2010 2290 2300 2310 2800 2450 21180 21190 21200 2810 2820 2510 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1850 1860 5700 5710 5010 5020 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5800 5080 5090 5470 8010 8020 8040 8050 3010 3020 3030 3040 3110 3120 3130 3210 3220 3230 3610 3620 3630 4300 4310 4320 4330 4800 4810 4820 4700 4710 3720 3730 3736 3740 3750 3900 3810 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 8
    free_market       = 6
    professional_army = 3
    defense_lobby     = 1
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 75001 } # Christian X
  headofgovernment       = { type = 9 id = 75002 } # Thorvald Stauning
  foreignminister        = { type = 9 id = 75003 } # Peter Munch
  armamentminister       = { type = 9 id = 75004 } # Alsing Andersen
  ministerofsecurity     = { type = 9 id = 75005 } # Karl Kristian Steincke
  ministerofintelligence = { type = 9 id = 75006 } # Erik Mertz
  chiefofstaff           = { type = 9 id = 75007 } # Wilhelm W. Prior
  chiefofarmy            = { type = 9 id = 75008 } # Erik With
  chiefofnavy            = { type = 9 id = 75009 } # Hjalmar Rechnitzer
  chiefofair             = { type = 9 id = 75163 } # Asger Grandjean

  landunit = {
    id       = { type = 27000 id = 40 }
    name     = "Sjællenske Division"
    location = 294
    division = {
      id             = { type = 27000 id = 41 }
      name           = "1. 'Sjællenske' Division"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 1
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 27000 id = 42 }
    name     = "Jydske Division"
    location = 220
    division = {
      id             = { type = 27000 id = 43 }
      name           = "2. 'Jydske' Division"
      type           = infantry
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 27000 id = 44 }
    name     = "Den Danske Flåde"
    location = 294
    base     = 294
    division = {
      id             = { type = 27000 id = 45 }
      name           = "HDMS Niels Juel"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 27000 id = 46 }
      name           = "HDMS Peder Skram"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 27000 id = 2426 }
      name           = "1. Torpedobåd Flotille"
      type           = destroyer
    }
    division = {
      id             = { type = 27000 id = 2427 }
      name           = "2. Torpedobåd Flotille"
      type           = destroyer
    }
    division = {
      id             = { type = 27000 id = 2428 }
      name           = "3. Torpedobåd Flotille"
      type           = destroyer
    }
    division = {
      id             = { type = 27000 id = 2429 }
      name           = "4. Torpedobåd Flotille"
      type           = destroyer
    }
  }
  navalunit = {
    id       = { type = 27000 id = 2424 }
    name     = "I. KDM Flaadestyrke"
    location = 294
    base     = 294
    division = {
      id             = { type = 27000 id = 47 }
      name           = "1. Ubåds Flotille"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 27000 id = 48 }
      name           = "2. Ubåds Flotille"
      type           = submarine
      model          = 1
    }
  }
}
