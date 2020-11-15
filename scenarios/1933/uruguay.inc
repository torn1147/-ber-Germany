##############################
# Country definition for URU #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = URU
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 2052 # Montevideo
  manpower           = 0
  # Resource Reserves
  energy         = 480
  metal          = 240
  rare_materials = 120
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = -50 }
    relation = { tag = BOL value = 10 }
    relation = { tag = BRA value = 125 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = PAR value = 20 }
    relation = { tag = PRU value = 25 }
    relation = { tag = SOV value = -100 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "URU" NumberOfSpies = 4 }

  nationalprovinces      = { 2051 2052 }
  ownedprovinces         = { 2051 2052 }
  controlledprovinces    = { 2051 2052 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5020 5810 5820 5050 5800 5080 1830 1840 1850 5600 5610 3720 3730 3736 3740 3750 3900 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 195001 } # Gabriel Terra
  headofgovernment       = { type = 9 id = 195002 } # Gabriel Terra
  foreignminister        = { type = 9 id = 195003 } # José Espalter
  armamentminister       = { type = 9 id = 195004 } # Alfredo Baldomir
  ministerofsecurity     = { type = 9 id = 195005 } # Heinz Glockenberger
  ministerofintelligence = { type = 9 id = 195006 } # Cristiano Piraguy Trellés
  chiefofstaff           = { type = 9 id = 195007 } # Manuel Heinz Azpurua
  chiefofarmy            = { type = 9 id = 195008 } # Jorge Elio Mendoza
  chiefofnavy            = { type = 9 id = 195009 } # Carlos Jackson Urribé
  chiefofair             = { type = 9 id = 195010 } # Cosme Alvaréz Berisso

  landunit = {
    id       = { type = 13700 id = 1 }
    name     = "Ejercito de Uruguay"
    location = 2052
    division = {
      id             = { type = 13700 id = 2 }
      name           = "4a Brigada de Inf. 'Don Claudio'"
      type           = infantry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 13700 id = 3 }
      name           = "4a Brigada de Inf. 'Don Claudio'"
      type           = cavalry
      model          = 8
      strength       = 40
    }
  }

  navalunit = {
    id       = { type = 13700 id = 6 }
    name     = "I Flotilla de la Armada"
    location = 2052
    base     = 2052
    division = {
      id             = { type = 13700 id = 7 }
      name           = "Flotilla des Destructores nro. 1"
      type           = destroyer
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 13700 id = 4 }
    name     = "Aviación del Ejército"
    location = 2052
    base     = 2052
    division = {
      id             = { type = 13700 id = 5 }
      name           = "Grupo Aérea Nro. 1"
      type           = interceptor
      model          = 5
      strength       = 45
    }
  }
}
