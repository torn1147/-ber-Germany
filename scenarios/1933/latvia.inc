##############################
# Country definition for LAT #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = LAT
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 264 # Riga
  manpower           = 1
  # Resource Reserves
  energy         = 420
  metal          = 210
  rare_materials = 105
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = 65 }
    relation = {
      tag        = EST
      value      = 150
      guaranteed = { year = 1934 month = september day = 12 }
    }
    relation = { tag = FIN value = 90 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation = {
      tag        = LIT
      value      = 40
      guaranteed = { year = 1934 month = september day = 12 }
    }
    relation = { tag = POL value = 75 }
    relation = { tag = SOV value = -30 }
    relation = { tag = CZE value = 65 }
    relation = { tag = USA value = 65 }
    relation = { tag = SWE value = 75 }
    relation = { tag = DEN value = 75 }
  }
  SpyInfo                = { country = "LAT" NumberOfSpies = 3 }

  nationalprovinces      = { 264 265 266 267 268 269 }
  ownedprovinces         = { 264 265 266 267 268 269 }
  controlledprovinces    = { 264 265 266 267 268 269 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 2900 7600 7610 1010 1020 1030 1040 1050 1060 1070 1080 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5020 5800 5080 5810 5820 1830 1840 1850 3610 3620 8010 8040 5600 5610 3720 3730 3736 3740 3750 3900 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
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
  headofstate            = { type = 9 id = 135001 } # Alberts Kviesis
  headofgovernment       = { type = 9 id = 135002 } # Kàrlis Ulmanis
  foreignminister        = { type = 9 id = 135003 } # Kàrlis Ulmanis
  armamentminister       = { type = 9 id = 135004 } # Ludvigs Ctis
  ministerofsecurity     = { type = 9 id = 135005 } # Vilis Gulbis
  ministerofintelligence = { type = 9 id = 135006 } # Hermanis Apsitis
  chiefofstaff           = { type = 9 id = 135007 } # Jànis Balodis
  chiefofarmy            = { type = 9 id = 135008 } # Rudolfs Bangerskis
  chiefofnavy            = { type = 9 id = 135009 } # Tomas Spade
  chiefofair             = { type = 9 id = 135010 } # Janis Indans

  landunit = {
    id       = { type = 24500 id = 1 }
    name     = "Latvijas Armija"
    location = 264
    division = {
      id             = { type = 24500 id = 2 }
      name           = "Kurzemes Divizija"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 2
      strength       = 40
    }
    division = {
      id             = { type = 24500 id = 3 }
      name           = "Vidzemes Divizija"
      type           = infantry
      model          = 7
      extra          = armored_car
      brigade_model  = 1
      strength       = 40
    }
    division = {
      id             = { type = 24500 id = 4 }
      name           = "Zemgales Divizija"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 40
    }
    division = {
      id             = { type = 24500 id = 5 }
      name           = "Latgales Divizija"
      type           = infantry
      model          = 7
      strength       = 40
    }
  }

  airunit = { 
    id       = { type = 24500 id = 8 }
    name     = "Latvijas Gaisa speki"
    location = 264
    base     = 264
    division = {
      id             = { type = 24500 id = 9 }
      name           = "I Aviacijas pulka"
      type           = interceptor
      model          = 6
      strength       = 60
    }
  }
}
