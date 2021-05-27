##############################
# Country definition for BRA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BRA
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 2075 # Rio de Janeiro
  manpower           = 46
  # Resource Reserves
  energy         = 2040
  metal          = 1020
  rare_materials = 510
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 50 }
    relation = { tag = IRE value = 20 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 75 }
    relation = { tag = PRU value = 10 }
    relation = { tag = SOV value = -50 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = VEN value = 10 }
  }
  SpyInfo                = { country = "BRA" NumberOfSpies = 5 }

  nationalprovinces      = { 2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076 }
  ownedprovinces         = { 2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076 }
  controlledprovinces    = { 2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4740 4750 4760 1910 1920 1930 1940 1950 1960 1830 1840 1850 1860 2860 2870 2880 2020 7600 7610 2620 2010 2630 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1010 1020 1030 1040 1050 1060 1070 1080 13060 13070 13080 1310 1320 1330 1340 1350 1160 1170 1180 1190 1200 1210 1220 1230 1240 5310 54010 54020 54030 5316 5326 5700 5710 5010 5810 5820 5050 5830 5800 5080 3010 3020 3030 3040 3110 3120 3130 3210 3220 3230 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3720 3730 3736 3740 3900 3810 5600 5610 5620 14000 14010 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 8010 8020 8040 8050 8100 8900 8910 8920 8930 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 7
    free_market       = 8
    professional_army = 3
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 160001 } # Getulio Vargas
  headofgovernment       = { type = 9 id = 160002 } # Getulio Vargas
  foreignminister        = { type = 9 id = 160003 } # José de Macedo Soares
  armamentminister       = { type = 9 id = 160004 } # Joao Café Filho
  ministerofsecurity     = { type = 9 id = 160005 } # Marcondes Filho
  ministerofintelligence = { type = 9 id = 160006 } # Filinto Muller
  chiefofstaff           = { type = 9 id = 160007 } # Eurico Gaspar Dutra
  chiefofarmy            = { type = 9 id = 160008 } # Joao Neves da Fontoura
  chiefofnavy            = { type = 9 id = 160009 } # Aristides Guilhem
  chiefofair             = { type = 9 id = 160010 } # Salgado Filho

  landunit = {
    id       = { type = 18000 id = 1 }
    name     = "1o Exército do Brasil"
    location = 2059
    division = {
      id             = { type = 18000 id = 2 }
      name           = "I Divisão de Infantaria"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 3 }
      name           = "II Divisão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 4 }
      name           = "CCLXVIII Divisão do Guarda Civíl"
      type           = militia
      model          = 3
      extra          = anti_air
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 5 }
      name           = "CCLXIX Divisão do Guarda Civíl"
      type           = militia
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 18000 id = 6 }
    name     = "2o Exército do Brasil"
    location = 2075
    division = {
      id             = { type = 18000 id = 7 }
      name           = "III Divisão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 8 }
      name           = "XCII Divisão de Cavalaria"
      type           = cavalry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 30 }
      name           = "XCI Divisão de Cavalaria"
      type           = cavalry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 28 }
      name           = "IV Divisão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 27 }
      name           = "V Divisão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 18000 id = 26 }
      name           = "VI Divisão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 18000 id = 25 }
    name     = "Navais do Transporte"
    location = 2075
    base     = 2075
    division = {
      id             = { type = 18000 id = 15 }
      name           = "4. Flotilla de Navios de Transporte"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 16 }
      name           = "5. Flotilla de Navios de Transporte"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 17 }
      name           = "6. Flotilla de Navios de Transporte"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 2306 }
      name           = "1. Flotilla de Contratorpedeiros"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 18000 id = 18 }
    name     = "Marinha do Brazil"
    location = 2058
    base     = 2058
    division = {
      id             = { type = 18000 id = 19 }
      name           = "NRB São Paulo"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 18000 id = 29 }
      name           = "NRB Minas Gerais"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 18000 id = 21 }
      name           = "NRB Bahia"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 18000 id = 23 }
      name           = "NRB Rio Grande do Sul"
      type           = light_cruiser
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 18000 id = 2304 }
    name     = "I Flotilla do Brasil"
    location = 2075
    base     = 2075
    division = {
      id             = { type = 18000 id = 2307 }
      name           = "2. Flotilla de Contratorpedeiros"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 18000 id = 13 }
      name           = "2. Flotilla de Navios de Transporte"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 12 }
      name           = "1. Flotilla de Navios de Transporte"
      type           = transport
    }
    division = {
      id             = { type = 18000 id = 14 }
      name           = "3. Flotilla de Navios de Transporte"
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 18000 id = 9 }
    name     = "Aereo do Brésil"
    location = 2075
    base     = 2075
    division = {
      id             = { type = 18000 id = 10 }
      name           = "1. Grupo de Caças"
      type           = interceptor
      model          = 6
      strength       = 50
    }
  }

  division_development = {
    id             = { type = 18000 id = 20 }
    name           = "1. Flotilla de Submarinos"
    type           = submarine
    model          = 3
    cost           = 0.1
    date           = { year = 1936 month = june day = 29 }
  }
}
