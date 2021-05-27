##############################
# Country definition for LIT #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = LIT
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 262 # Kaunas
  manpower           = 17
  # Resource Reserves
  energy         = 480
  metal          = 240
  rare_materials = 120
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = 65 }
    relation = {
      tag        = EST
      value      = 40
      guaranteed = { year = 1934 month = september day = 12 }
    }
    relation = { tag = FIN value = 80 }
    relation = { tag = CZE value = 65 }
    relation = { tag = USA value = 65 }
    relation = { tag = SWE value = 75 }
    relation = { tag = DEN value = 75 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = -50 }
    relation = {
      tag        = LAT
      value      = 40
      guaranteed = { year = 1934 month = september day = 12 }
    }
    relation = { tag = POL value = -125 }
    relation = { tag = SOV value = 75 }
  }
  SpyInfo                = { country = "LIT" NumberOfSpies = 3 }

  nationalprovinces      = { 252 255 258 259 260 261 262 263 }
  ownedprovinces         = { 259 260 261 262 263 }
  controlledprovinces    = { 259 260 261 262 263 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 2900 7600 7610 1010 1020 1030 1040 1050 1060 1070 1080 1910 1920 1930 1940 1950 1960 1970 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1830 1840 1850 2800 2450 21180 2810 2820 2510 5600 5610 5810 3810 5700 5710 5010 5800 5080 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 140001 } # Antanas Smetona
  headofgovernment       = { type = 9 id = 140002 } # Juozas Tubelis
  foreignminister        = { type = 9 id = 140003 } # Stasys Lozoraitis
  armamentminister       = { type = 9 id = 140004 } # Valdemaras Vytautas-Carneckis
  ministerofsecurity     = { type = 9 id = 140005 } # Antanas Smetona
  ministerofintelligence = { type = 9 id = 140006 } # Dovas Zaunius
  chiefofstaff           = { type = 9 id = 140007 } # Jonas Galvydis-Bykauskas
  chiefofarmy            = { type = 9 id = 140008 } # Stasys Rastikis
  chiefofnavy            = { type = 9 id = 140009 } # Garnis Dirmantas
  chiefofair             = { type = 9 id = 140010 } # Antanas Gustaitis

  landunit = {
    id       = { type = 26500 id = 1 }
    name     = "Lietuvos Sausumos kariuomene"
    location = 262
    division = {
      id             = { type = 26500 id = 2 }
      name           = "1. Divizija"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 26500 id = 3 }
      name           = "2. Divizija"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 26500 id = 4 }
      name           = "3. Divizija"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 26500 id = 5 }
      name           = "Kavalerijos brigada"
      type           = cavalry
      model          = 7
      strength       = 30
    }
  }

  airunit = { 
    id       = { type = 26500 id = 6 }
    name     = "Lietuvos Karines oro pajegos"
    location = 262
    base     = 262
    division = {
      id             = { type = 26500 id = 7 }
      name           = "I Naikintuvu Aviacijos Grupe"
      type           = interceptor
      model          = 6
      strength       = 45
    }
  }
}
