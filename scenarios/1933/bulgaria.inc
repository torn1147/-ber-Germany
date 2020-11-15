##############################
# Country definition for BUL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BUL
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 321 # Sofia
  manpower           = 0
  # Resource Reserves
  energy         = 1500
  metal          = 750
  rare_materials = 375
  oil            = 500
  supplies       = 500
  money          = 50
  transports     = 100
  escorts        = 4

  diplomacy = {
    relation = { tag = ENG value = 20 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 25 }
    relation = { tag = GRE value = -75 }
    relation = { tag = ITA value = 150 }
    relation = { tag = ROM value = 25 }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 75 }
    relation = { tag = YUG value = 25 }
  }
  SpyInfo                = { country = "BUL" NumberOfSpies = 6 }

  nationalprovinces      = { 307 317 318 319 320 321 322 323 324 325 326 364 370 328 333 363 365 366 }
  ownedprovinces         = { 317 318 319 320 321 322 323 324 325 326 }
  controlledprovinces    = { 317 318 319 320 321 322 323 324 325 326 }
  claimedprovinces       = { 331 334 }

  techapps               = { 5810 5820 5050 5830 5800 5080 5090 5700 5710 5010 5310 54010 54020 54030 5316 5326 5600 5610 5620 1010 1020 1030 1040 1050 1060 1070 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1830 1840 1850 1910 1920 1930 1940 1950 1960 7600 7610 2620 2010 2630 2640 2646 2860 2870 2880 2290 2300 2310 2900 2910 2920 2800 2450 21180 21190 2810 2820 2510 14000 14010 6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910 6560 3010 3720 3730 3900 3810 8010 8020 8050 4500 4510 4520 4530 4540 4550 4010 4300 4310 4320 4330 4600 4610 4620 4630 4120 4800 4810 4820 4700 4710 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 6
    free_market       = 7
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 9
  }
  headofstate            = { type = 9 id = 95001 } # Boris III
  headofgovernment       = { type = 9 id = 95002 } # Georgi Kyoseivanov
  foreignminister        = { type = 9 id = 95003 } # Georgi Kyoseivanov
  armamentminister       = { type = 9 id = 95004 } # Kiril Gunev
  ministerofsecurity     = { type = 9 id = 95060 } # Ivan Krasnovski
  ministerofintelligence = { type = 9 id = 95006 } # Dimitar Peshev
  chiefofstaff           = { type = 9 id = 95007 } # Hristo Lukov
  chiefofarmy            = { type = 9 id = 95008 } # Todor Georgiev
  chiefofnavy            = { type = 9 id = 95009 } # Sava Ivanov
  chiefofair             = { type = 9 id = 95010 } # Vasil Boydev

  landunit = {
    id       = { type = 19000 id = 1 }
    name     = "1-va Armija"
    location = 321
    division = {
      id             = { type = 19000 id = 2 }
      name           = "1-va Sofiiska pekhotna divizija"
      type           = infantry
      model          = 6
      strength       = 20
    }
    division = {
      id             = { type = 19000 id = 4 }
      name           = "1-va Konna divizija"
      type           = cavalry
      model          = 6
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 5 }
    name     = "2-ra Armija"
    location = 325
    division = {
      id             = { type = 19000 id = 6 }
      name           = "2-ra Trakiiska pekhotna divizija"
      type           = infantry
      model          = 7
      strength       = 20
    }
    division = {
      id             = { type = 19000 id = 19 }
      name           = "2-ra Konna divizija"
      type           = cavalry
      model          = 7
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 9 }
    name     = "3-ta Armija"
    location = 324
    division = {
      id             = { type = 19000 id = 10 }
      name           = "3-ta Balkanska pekhotna divizija"
      type           = infantry
      model          = 7
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 12 }
    name     = "4-ta Armija"
    location = 323
    division = {
      id             = { type = 19000 id = 13 }
      name           = "5-ta Dunavska pekhotna divizija"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 20
    }
  }
}
