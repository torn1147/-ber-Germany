##############################
# Country definition for U03 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U03
  puppet             = FRA
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1395 # Hanoi
  manpower           = 26
  # Resource Reserves
  energy         = 420
  metal          = 210
  rare_materials = 105
  oil            = 500
  supplies       = 2000
  money          = 50
  transports     = 100
  escorts        = 10

  diplomacy = {
    relation = { tag = FRA value = 50 access = yes }
  }
  SpyInfo                = { country = "U03" NumberOfSpies = 3 }

  nationalprovinces      = { 1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401 1402 1403 1404 1405 }
  ownedprovinces         = { 1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401 1402 1403 1404 1405 }
  controlledprovinces    = { 1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401 1402 1403 1404 1405 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 2860 2870 2880 2020 2290 2300 2310 2800 2450 7600 7610 3010 3020 3030 3040 3110 3120 3130 3140 3210 3220 3230 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 5800 5080 1830 1840 3720 3730 3736 3740 3750 3900 3810 5600 5610 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 8010 8020 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 10
    free_market       = 8
    professional_army = 2
    defense_lobby     = 7
    interventionism   = 5
  }

  landunit = {
    id       = { type = 13500 id = 2001 }
    name     = "Division du Tonkin"
    location = 1395
    division = {
      id             = { type = 13500 id = 2002 }
      name           = "Division du Tonkin"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13500 id = 2003 }
    name     = "Division de Cochinchine-Cambodge"
    location = 1399
    division = {
      id             = { type = 13500 id = 2004 }
      name           = "Division de Cochinchine-Cambodge"
      type           = garrison
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13500 id = 2005 }
    name     = "Brigade d'Annam"
    location = 1397
    division = {
      id             = { type = 13500 id = 2006 }
      name           = "Brigade d'Annam"
      type           = militia
      model          = 4
      strength       = 100
    }
  }
}
