##############################
# Country definition for U04 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U04
  puppet             = FRA
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1019 # Beirut
  manpower           = 0
  # Resource Reserves
  energy         = 60
  metal          = 30
  rare_materials = 15
  oil            = 500
  supplies       = 2000
  money          = 50
  transports     = 100
  escorts        = 10

  diplomacy = {
    relation = { tag = FRA value = 50 access = yes }
  }
  SpyInfo                = { country = "U04" NumberOfSpies = 3 }

  nationalprovinces      = { }
  ownedprovinces         = { 1014 1015 1016 1017 1018 1019 1020 1021 1054 }
  controlledprovinces    = { 1014 1015 1016 1017 1018 1019 1020 1021 1054 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1910 1920 1930 1940 1950 1960 2860 2870 2880 2020 2290 2300 2310 2800 2450 7600 7610 3010 3020 3030 3040 3110 3120 3130 3140 3210 3220 3230 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 5800 5080 1830 1840 6010 6030 3720 3730 3736 3740 3750 3900 3810 5600 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 8010 8020 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 10
    free_market       = 8
    professional_army = 2
    defense_lobby     = 7
    interventionism   = 2
  }
  chiefofstaff           = { type = 9 id = 835065 }

  landunit = {
    id       = { type = 13500 id = 1001 }
    name     = "Troupes du Levant"
    location = 1016
    division = {
      id             = { type = 13500 id = 1002 }
      name           = "Forces supplétives du Levant"
      type           = militia
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 13500 id = 1003 }
      name           = "Subdivision de Damas"
      type           = militia
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13500 id = 1004 }
    name     = "Subdivision de Beyrouth"
    location = 1019
    division = {
      id             = { type = 13500 id = 1005 }
      name           = "Subdivision de Beyrouth"
      type           = militia
      model          = 4
      strength       = 100
    }
  }
}
