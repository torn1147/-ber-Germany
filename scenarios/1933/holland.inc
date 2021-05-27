##############################
# Country definition for HOL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = HOL
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 122 # Amsterdam
  manpower           = 14
  # Resource Reserves
  energy         = 1740
  metal          = 870
  rare_materials = 435
  oil            = 500
  supplies       = 500
  money          = 40
  transports     = 250
  escorts        = 21

  diplomacy = {
    relation = { tag = BEL value = 150 }
    relation = { tag = CAN value = 80 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 75 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = ITA value = -20 }
    relation = { tag = JAP value = -50 }
    relation = { tag = LUX value = 150 }
    relation = { tag = MEX value = 25 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 70 }
  }
  SpyInfo                = { country = "HOL" NumberOfSpies = 6 }

  nationalprovinces      = { 118 119 120 121 122 123 124 125 }
  ownedprovinces         = { 118 119 120 121 122 123 124 125 1761 1762 1999 }
  controlledprovinces    = { 118 119 120 121 122 123 124 125 1761 1762 1999 }
  claimedprovinces       = { 1761 1762 1999 }

  techapps               = { 1830 1840 1850 1860 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2860 2870 2880 2020 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 7600 7610 2010 2630 2640 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3720 3730 3736 3740 3900 3810 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 4700 4710 5700 5710 5010 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5800 5080 5090 5470 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 6110 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8600 8610 8900 8910 8920 8930 8940 14000 14010 14020 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 2
    freedom           = 10
    free_market       = 9
    professional_army = 4
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 15001 } # Wilhelmina
  headofgovernment       = { type = 9 id = 15002 } # Hendricus Colijn
  foreignminister        = { type = 9 id = 15003 } # Frans B. van Blokland
  armamentminister       = { type = 9 id = 15004 } # Pieter Oud
  ministerofsecurity     = { type = 9 id = 15005 } # Josephus H.H. van Schaik
  ministerofintelligence = { type = 9 id = 15006 } # Johan W. van Oorschot
  chiefofstaff           = { type = 9 id = 15007 } # Adriaan Dijxhoorn
  chiefofarmy            = { type = 9 id = 15008 } # Izaak Reynders
  chiefofnavy            = { type = 9 id = 15009 } # Johannes Furstner
  chiefofair             = { type = 9 id = 15010 } # Marius Raaijmakers

  landunit = {
    id       = { type = 18500 id = 1 }
    name     = "Ie Legerkorps"
    location = 125
    division = {
      id             = { type = 18500 id = 2 }
      name           = "1e Divisie"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 1
      strength       = 80
    }
    division = {
      id             = { type = 18500 id = 3 }
      name           = "5e Divisie"
      type           = infantry
      model          = 6
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 18500 id = 4 }
    name     = "IIe Legerkorps"
    location = 119
    division = {
      id             = { type = 18500 id = 5 }
      name           = "2e Divisie"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 80
    }
    division = {
      id             = { type = 18500 id = 6 }
      name           = "6e Divisie"
      type           = infantry
      model          = 6
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 18500 id = 7 }
    name     = "IIIe Legerkorps"
    location = 118
    division = {
      id             = { type = 18500 id = 8 }
      name           = "3e Divisie"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 3
      strength       = 80
    }
    division = {
      id             = { type = 18500 id = 9 }
      name           = "7e Divisie"
      type           = infantry
      model          = 6
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 18500 id = 10 }
    name     = "IVe Legerkorps"
    location = 120
    division = {
      id             = { type = 18500 id = 11 }
      name           = "4e Divisie"
      type           = infantry
      model          = 7
      extra          = armored_car
      brigade_model  = 2
      strength       = 80
    }
    division = {
      id             = { type = 18500 id = 12 }
      name           = "8e Divisie"
      type           = infantry
      model          = 6
      strength       = 10
    }
  }

  navalunit = {
    id       = { type = 18500 id = 17 }
    name     = "Koninklijke Vloot"
    location = 122
    base     = 122
    division = {
      id             = { type = 18500 id = 18 }
      name           = "HrMs De Ruyter"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 18500 id = 19 }
      name           = "HrMs Java"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 18500 id = 20 }
      name           = "HrMs Sumatra"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 18500 id = 21 }
      name           = "1e Torpedobootjager Smaldeel"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 18500 id = 44 }
      name           = "2e Torpedobootjager Smaldeel"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 18500 id = 45 }
      name           = "3e Torpedobootjager Smaldeel"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 18500 id = 23 }
      name           = "1e Transport Smaldeel"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 24 }
      name           = "2e Transport Smaldeel"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 25 }
      name           = "3e Transport Smaldeel"
      type           = transport
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 18500 id = 1381 }
    name     = "3e Koninklijke Vloot"
    location = 122
    base     = 122
    division = {
      id             = { type = 18500 id = 39 }
      name           = "1e Onderzeeboot Smaldeel"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 18500 id = 40 }
      name           = "2e Onderzeeboot Smaldeel"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 18500 id = 41 }
      name           = "3e Onderzeeboot Smaldeel"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 18500 id = 42 }
      name           = "4e Onderzeeboot Smaldeel"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 18500 id = 43 }
      name           = "5e Onderzeeboot Smaldeel"
      type           = submarine
      model          = 3
    }
  }
}
