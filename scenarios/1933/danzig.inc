##############################
# Country definition for U06 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U06
  puppet             = POL
  ai_settings        = { flags = { MOB1 = yes } }
  capital            = 181 # Danzig
  manpower           = 0
  # Resource Reserves
  energy         = 100
  metal          = 100
  rare_materials = 50
  oil            = 50
  supplies       = 100
  money          = 50
  transports     = 50
  free = {
    ic             = -3
  }

  diplomacy = {
    relation = { tag = GER value = 80 }
  }
  SpyInfo                = { country = "U06" NumberOfSpies = 3 }

  nationalprovinces      = { 181 }
  ownedprovinces         = { 181 }
  controlledprovinces    = { 181 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 1970 1980 6560 6030 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 2860 2870 2880 2020 2290 2300 2310 2800 2450 3010 3020 3030 3040 3110 3120 3130 3140 3210 3220 3230 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 5810 5820 5050 5830 5060 5310 54010 54020 54030 5316 5326 5800 5080 5600 5610 5620 5630 3720 3730 3736 3740 3750 3900 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 8010 8020 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 10
    free_market       = 8
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 845001 } # Arthur Greiser
  headofgovernment       = { type = 9 id = 845002 } # Arthur Greiser
  foreignminister        = { type = 9 id = 845003 } # Arthur Greiser
  armamentminister       = { type = 9 id = 845004 } # Julius Hoppenrath
  ministerofsecurity     = { type = 9 id = 845005 } # Willibald Wiercinski-Keiser
  ministerofintelligence = { type = 9 id = 845006 } # Arthur Greiser
  chiefofstaff           = { type = 9 id = 845007 } # Arthur Greiser
  chiefofarmy            = { type = 9 id = 845008 } # Arthur Greiser
  chiefofnavy            = { type = 9 id = 845009 } # Johan A. Nederbragt
  chiefofair             = { type = 9 id = 845010 } # Arthur Greiser
}
