##############################
# Country definition for ARG #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ARG
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 2050 # Buenos Aires
  manpower           = 28
  # Resource Reserves
  energy         = 1620
  metal          = 810
  rare_materials = 405
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100

  diplomacy = {
    relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 20 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "ARG" NumberOfSpies = 6 }

  nationalprovinces      = { 2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2043 2044 2045 2048 2049 2050 2053 2054 2055 2056 }
  ownedprovinces         = { 2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2044 2048 2049 2050 2053 2054 2055 2056 }
  controlledprovinces    = { 2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2044 2048 2049 2050 2053 2054 2055 2056 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 4130 4740 4750 4760 7600 7610 2620 2010 2630 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1850 1860 5600 5610 5620 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5310 54010 54020 54030 5316 5326 3010 3020 3030 3040 3050 3110 3120 3130 3140 3210 3220 3230 3240 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3720 3730 3736 3740 3900 3810 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 8010 8020 8040 8050 8100 8900 8910 8920 8930 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 6
    free_market       = 8
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 165001 } # Agustín P. Justo
  headofgovernment       = { type = 9 id = 165002 } # Agustín P. Justo
  foreignminister        = { type = 9 id = 165003 } # Carlos Saavedra Lamas
  armamentminister       = { type = 9 id = 165004 } # Alberto Hueyo
  ministerofsecurity     = { type = 9 id = 165005 } # Ramon Castillo
  ministerofintelligence = { type = 9 id = 165006 } # Jorge de la Torre
  chiefofstaff           = { type = 9 id = 165007 } # Manuel A. Rodriguez
  chiefofarmy            = { type = 9 id = 165008 } # Manuel A. Rodriguez
  chiefofnavy            = { type = 9 id = 165009 } # Pedro S. Casal
  chiefofair             = { type = 9 id = 165010 } # Antonio Parodi

  landunit = {
    id       = { type = 12000 id = 1 }
    name     = "I Cuerpo de Ejército"
    location = 2048
    division = {
      id             = { type = 12000 id = 2 }
      name           = "Supreme HQ"
      type           = hq
      model          = 2
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 3 }
      name           = "III Brigada 'Pellegrini'"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 6
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 4 }
      name           = "II Brigada 'San Martín'"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 6
      strength       = 60
    }
    division = {
      id             = { type = 12000 id = 5 }
      name           = "II Brigada de Montaña"
      type           = bergsjaeger
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 12000 id = 6 }
      name           = "I Brigada 'Ing. Krausse'"
      type           = infantry
      model          = 6
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 12000 id = 7 }
    name     = "II Cuerpo de Ejército"
    location = 2048
    division = {
      id             = { type = 12000 id = 8 }
      name           = "VI Brigada de Montaña 'Villegas'"
      type           = bergsjaeger
      model          = 6
      strength       = 35
    }
    division = {
      id             = { type = 12000 id = 9 }
      name           = "IV Brigada de Infantería"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 12000 id = 10 }
      name           = "IX Brigada de Infantería"
      type           = infantry
      model          = 6
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 12000 id = 11 }
    name     = "III Cuerpo de Ejército"
    location = 2048
    division = {
      id             = { type = 12000 id = 12 }
      name           = "VI Brigada"
      type           = cavalry
      model          = 9
      strength       = 30
    }
    division = {
      id             = { type = 12000 id = 13 }
      name           = "IV Brigada"
      type           = cavalry
      model          = 9
      strength       = 30
    }
    division = {
      id             = { type = 12000 id = 14 }
      name           = "IX Brigada"
      type           = cavalry
      model          = 9
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 12000 id = 15 }
    name     = "Argentinian Navy"
    location = 2048
    base     = 2048
    division = {
      id             = { type = 12000 id = 16 }
      name           = "ARA Veinticinco De Mayo"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 12000 id = 17 }
      name           = "ARA Almirante Brown"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 12000 id = 18 }
      name           = "ARA Moreno"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 12000 id = 20 }
      name           = "ARA Rivadavia"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 12000 id = 22 }
      name           = "ARA Independencia"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 12000 id = 24 }
      name           = "ARA La Libertad"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 12000 id = 26 }
      name           = "ARA Generale Belgrano"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12000 id = 28 }
      name           = "ARA Generale Pueyrredon"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12000 id = 30 }
      name           = "Flotilla de Destructores nro. 1"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 12000 id = 32 }
      name           = "Flotilla de Destructores nro. 2"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 12000 id = 33 }
      name           = "Flotilla de Submarinos nro. 1"
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 12000 id = 36 }
    name     = "Aviación del Ejército"
    location = 2048
    base     = 2048
    division = {
      id             = { type = 12000 id = 37 }
      name           = "Grupo Aérea Nro. 1"
      type           = multi_role
      model          = 5
      strength       = 90
    }
  }
  airunit = { 
    id       = { type = 12000 id = 38 }
    name     = "Aviación Naval"
    location = 2048
    base     = 2048
    division = {
      id             = { type = 12000 id = 39 }
      name           = "Fuerza Aeronaval Nro. 1"
      type           = naval_bomber
      model          = 1
      strength       = 40
    }
  }
}
