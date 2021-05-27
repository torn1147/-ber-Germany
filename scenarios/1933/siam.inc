##############################
# Country definition for SIA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SIA
  name               = SIA36
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 1423 # Bangkok
  manpower           = 4
  # Resource Reserves
  energy         = 540
  metal          = 270
  rare_materials = 135
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
    relation = { tag = JAP value = 75 }
    relation = { tag = MAN value = 75 }
  }
  SpyInfo                = { country = "SIA" NumberOfSpies = 5 }

  nationalprovinces      = { 1422 1423 1424 1425 1426 1427 1428 1429 1430 1431 }
  ownedprovinces         = { 1422 1423 1424 1425 1426 1427 1428 1429 1430 1431 }
  controlledprovinces    = { 1422 1423 1424 1425 1426 1427 1428 1429 1430 1431 }
  claimedprovinces       = { 1391 1394 1398 1400 1401 1402 1404 1405 1409 1412 1413 1433 1434 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 2800 2450 21180 21190 2810 2820 2510 5810 5820 5800 5080 3010 3020 3030 3040 3110 3120 3130 3610 3620 8010 8050 1830 1840 3720 3730 3736 3740 3750 3900 3810 5600 5610 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 290001 } # Rama VIII
  headofgovernment       = { type = 9 id = 290002 } # Phot Bhahalyodin
  foreignminister        = { type = 9 id = 290003 } # Ha Samptasiri
  armamentminister       = { type = 9 id = 290004 } # Phot Bhahalyodin
  ministerofsecurity     = { type = 9 id = 290005 } # Pridi Phanomyong
  ministerofintelligence = { type = 9 id = 290006 } # Pridi Phanomyong
  chiefofstaff           = { type = 9 id = 290007 } # Luang Phibunsongkhram
  chiefofarmy            = { type = 9 id = 290008 } # Luang Phibunsongkhram
  chiefofnavy            = { type = 9 id = 290009 } # Pridi Phanomyong
  chiefofair             = { type = 9 id = 290010 } # Phra Vechayanrangsarit

  landunit = {
    id       = { type = 23600 id = 1 }
    name     = "Royal Thai Army"
    location = 1424
    division = {
      id             = { type = 23600 id = 2 }
      name           = "1. Thai Infantry Div."
      type           = infantry
      model          = 7
      strength       = 90
    }
    division = {
      id             = { type = 23600 id = 3 }
      name           = "2. Thai Infantry Div."
      type           = infantry
      model          = 6
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23600 id = 4 }
    name     = "Royal Thai Police Force"
    location = 1423
    division = {
      id             = { type = 23600 id = 5 }
      name           = "1. Royal Thai Police Div."
      type           = garrison
      model          = 3
      extra          = police
      brigade_model  = 1
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 23600 id = 6 }
    name     = "Royal Thai Navy"
    location = 1424
    base     = 1424
    division = {
      id             = { type = 23600 id = 7 }
      name           = "RTNS Sri Ayuthia"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 23600 id = 8 }
      name           = "RTNS Dhonburi"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 23600 id = 10 }
      name           = "Phra Ruang Flotille"
      type           = destroyer
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 23600 id = 12 }
    name     = "Royal Thai Airforce"
    location = 1424
    base     = 1424
    division = {
      id             = { type = 23600 id = 13 }
      name           = "1. RTAF Fighter Group"
      type           = interceptor
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 23600 id = 14 }
      name           = "1. RTAF Tactic Bomb Group"
      type           = tactical_bomber
      model          = 3
      strength       = 44
    }
  }
}
