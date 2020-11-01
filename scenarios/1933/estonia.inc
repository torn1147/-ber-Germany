##############################
# Country definition for EST #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = EST
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 270 # Tallinn
  manpower           = 0
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = 65 }
    relation = { tag = FIN value = 120 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation = {
      tag        = LAT
      value      = 150
      guaranteed = { year = 1934 month = september day = 12 }
    }
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
  SpyInfo                = { country = "EST" NumberOfSpies = 3 }

  nationalprovinces      = { 270 271 272 273 274 275 }
  ownedprovinces         = { 270 271 272 273 274 275 }
  controlledprovinces    = { 270 271 272 273 274 275 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 2900 1010 1020 1030 1040 1050 1060 1070 1080 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1830 1840 1850 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5020 5800 5080 5810 5820 3610 3620 3630 3720 3730 3736 3740 3750 3900 5600 5610 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 8010 8040 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 130001 } # Konstantin Päts
  headofgovernment       = { type = 9 id = 130002 } # Konstantin Päts
  foreignminister        = { type = 9 id = 130003 } # Julius Seljamaa
  armamentminister       = { type = 9 id = 130004 } # Karl Selter
  ministerofsecurity     = { type = 9 id = 130005 } # Kaarel Eenpalu
  ministerofintelligence = { type = 9 id = 130006 } # Kaarel Eenpalu
  chiefofstaff           = { type = 9 id = 130007 } # Nikolai Reek
  chiefofarmy            = { type = 9 id = 130008 } # Johan Laidoner
  chiefofnavy            = { type = 9 id = 130009 } # Voldemar Mere
  chiefofair             = { type = 9 id = 130010 } # Richard Tomberg

  landunit = {
    id       = { type = 30000 id = 1 }
    name     = "Maavägi"
    location = 270
    division = {
      id             = { type = 30000 id = 2 }
      name           = "I Jalaväediviis"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 1
      strength       = 25
    }
    division = {
      id             = { type = 30000 id = 3 }
      name           = "II Jalaväediviis"
      type           = infantry
      model          = 7
      strength       = 25
    }
    division = {
      id             = { type = 30000 id = 4 }
      name           = "III Jalaväediviis"
      type           = infantry
      model          = 7
      extra          = armored_car
      brigade_model  = 1
      strength       = 25
    }
  }

  airunit = { 
    id       = { type = 30000 id = 5 }
    name     = "Eesti Ohuvagi"
    location = 270
    base     = 270
    division = {
      id             = { type = 30000 id = 6 }
      name           = "I Lennusalk"
      type           = interceptor
      model          = 6
      strength       = 60
    }
  }
}
