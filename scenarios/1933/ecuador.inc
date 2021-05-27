##############################
# Country definition for ECU #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ECU
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 2042 # San Francisco de Quito
  manpower           = 1
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  SpyInfo                = { country = "ECU" NumberOfSpies = 3 }

  nationalprovinces      = { 2007 2008 2010 2033 2040 2041 2042 }
  ownedprovinces         = { 2007 2008 2010 2033 2040 2041 2042 }
  controlledprovinces    = { 2007 2008 2010 2033 2040 2041 2042 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 2800 2450 21180 21190 2810 2820 2510 5600 5610 5700 5710 5010 5800 5080 3810 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 5
    free_market       = 8
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 190001 } # Federico Páez Chiriboaga
  headofgovernment       = { type = 9 id = 190002 } # Federico Páez Chiriboaga
  foreignminister        = { type = 9 id = 190003 } # Alberto Larrea Chiriboaga
  armamentminister       = { type = 9 id = 190004 } # Fabian Del Castello
  ministerofsecurity     = { type = 9 id = 190005 } # Davide Flores
  ministerofintelligence = { type = 9 id = 190006 } # Aurelio Mosquera Narváez
  chiefofstaff           = { type = 9 id = 190007 } # Benigno Andrade Flores
  chiefofarmy            = { type = 9 id = 190008 } # Gilberto Enriquez Gallo
  chiefofnavy            = { type = 9 id = 190009 } # Juan Ramon Castro
  chiefofair             = { type = 9 id = 190010 } # Cosme Renella Barbatto

  landunit = {
    id       = { type = 29000 id = 50 }
    name     = "Ejercito de Ecuador"
    location = 2042
    division = {
      id             = { type = 29000 id = 5000 }
      name           = "1a Brigada de Infantería"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 1
      strength       = 100
    }
  }
}
