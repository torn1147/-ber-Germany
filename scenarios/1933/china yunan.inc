##############################
# Country definition for CYN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CYN
  regular_id         = CHI
  puppet             = CHI
  flag_ext           = _PNE
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
  intrinsic_gov_type = paternal_autocrat
  capital            = 1390 # Kunming
  dissent            = 40
  extra_tc           = 4
  manpower           = 0
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 100
  supplies       = 100
  money          = 50

  diplomacy = {
    relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = U67 value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }

  nationalprovinces      = { 1291 1292 1293 1296 1297 1298 1299 1300 1302 1304 1384 1385 1386 1387 1388 1389 1390 1413 }
  ownedprovinces         = { 1291 1292 1293 1384 1385 1386 1387 1388 1389 1390 }
  controlledprovinces    = { 1291 1292 1293 1384 1385 1386 1387 1388 1389 1390 }

  techapps               = { 5810 5820 5800 5080 5316 5326 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 1220 13060 13070 13080 1310 1830 1910 1920 1930 1940 1950 2290 2300 2310 2900 2910 5600 5610 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 4500 4510 4520 4530 4540 4550 4300 4310 4320 4600 4610 4620 4630 4120 4800 4810 4700 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  blueprints             = { 1070 1230 1320 1330 1340 1350 5050 5327 1960 7600 7610 2620 2010 2860 2870 2880 6570 8010 8020 8050 8060 8070 8080 3010 3110 3120 3210 3220 3810 3720 3410 4700 4740 4750 4760 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 615001 } # Long Yun
  headofgovernment       = { type = 9 id = 615002 } # Long Yun
  foreignminister        = { type = 9 id = 615003 } # Hu Ruoyu
  armamentminister       = { type = 9 id = 615004 } # Liu Wenhui
  ministerofsecurity     = { type = 9 id = 615005 } # Ding Zhipan
  ministerofintelligence = { type = 9 id = 615006 } # Mi Zaiming
  chiefofstaff           = { type = 9 id = 615007 } # Long Yun
  chiefofarmy            = { type = 9 id = 615008 } # Long Yun
  chiefofnavy            = { type = 9 id = 615009 } # Lu Han
  chiefofair             = { type = 9 id = 615010 } # Lu Han

  landunit = {
    id       = { type = 22100 id = 1 }
    name     = "24th Corps"
    location = 1292
    division = {
      id             = { type = 22100 id = 2 }
      name           = "136th Division"
      type           = militia
      model          = 3
      extra          = police
      brigade_model  = 1
      strength       = 33
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 3 }
      name           = "137th Division"
      type           = militia
      model          = 3
      extra          = police
      brigade_model  = 1
      strength       = 33
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 4 }
      name           = "138th Division"
      type           = militia
      model          = 3
      extra          = police
      brigade_model  = 1
      strength       = 33
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22100 id = 5 }
    name     = "10th Route Army"
    location = 1390
    division = {
      id             = { type = 22100 id = 6 }
      name           = "1st Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 7 }
      name           = "2nd Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 8 }
      name           = "3rd Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 9 }
      name           = "5th Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 10 }
      name           = "7th Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 11 }
      name           = "9th Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 12 }
      name           = "21st Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 13 }
      name           = "22nd Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 14 }
      name           = "23rd Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 15 }
      name           = "24th Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 16 }
      name           = "30th Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 17 }
      name           = "33rd Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22100 id = 18 }
      name           = "10th Route Army HQ"
      type           = hq
      model          = 2
      strength       = 40
      experience     = 30
    }
  }
}