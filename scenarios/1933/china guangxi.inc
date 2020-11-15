##############################
# Country definition for CGX #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CGX
  regular_id         = CHI
  puppet             = CHI
  flag_ext           = _PNE
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
  intrinsic_gov_type = paternal_autocrat
  capital            = 1378 # Guilin
  dissent            = 40
  extra_tc           = 10
  manpower           = 32
  # Resource Reserves
  energy         = 600
  metal          = 300
  rare_materials = 150
  oil            = 100
  supplies       = 100
  money          = 50
  transports     = 100

  diplomacy = {
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 100 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = U67 value = 150 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
  }
  SpyInfo                = { country = "CGX" NumberOfSpies = 2 }

  nationalprovinces      = { 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 }
  ownedprovinces         = { 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 }
  controlledprovinces    = { 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 }

  techapps               = { 5810 5820 5050 5800 5080 5316 5326 5327 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1220 13060 13070 13080 1310 1320 1330 1340 1830 1910 1920 1930 1940 1950 1960 2860 2870 2290 2300 2310 2900 2910 6570 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 3010 3110 3120 3130 3140 3210 3220 3810 3720 3730 3410 3420 8010 8020 8050 8060 8070 8080 4500 4510 4520 4530 4540 4300 4310 4320 4600 4610 4620 4630 4800 4810 4700 4740 4750 4760 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  blueprints             = { 1090 1560 1230 1350 1360 1840 1850 5700 5600 1970 7600 7610 2620 2010 2880 2920 2930 2800 6210 4120 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 1
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 585001 } # Li Zongren
  headofgovernment       = { type = 9 id = 585002 } # Huang Shaohong
  foreignminister        = { type = 9 id = 585003 } # Li Zongren
  armamentminister       = { type = 9 id = 585004 } # Yu Hanmou
  ministerofintelligence = { type = 9 id = 585006 } # Li Jishen
  chiefofstaff           = { type = 9 id = 585007 } # Li Jishen
  chiefofarmy            = { type = 9 id = 585009 } # Chen Jitang
  chiefofnavy            = { type = 9 id = 585010 } # Bai Chongxi
  chiefofair             = { type = 9 id = 585012 } # Wang Shuming

  landunit = {
    id       = { type = 22400 id = 1 }
    name     = "7th Corps"
    location = 1378
    division = {
      id             = { type = 22400 id = 2 }
      name           = "19th Division"
      type           = infantry
      model          = 5
      strength       = 33
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 3 }
      name           = "21st Division"
      type           = infantry
      model          = 5
      strength       = 33
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 4 }
      name           = "24th Division"
      type           = infantry
      model          = 5
      strength       = 33
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 5 }
    name     = "8th Corps"
    location = 1378
    division = {
      id             = { type = 22400 id = 6 }
      name           = "20th Division"
      type           = infantry
      model          = 5
      strength       = 33
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 7 }
      name           = "22nd Division"
      type           = infantry
      model          = 5
      strength       = 33
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 8 }
      name           = "23rd Division"
      type           = infantry
      model          = 5
      strength       = 33
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 9 }
    name     = "15th Corps"
    location = 1378
    division = {
      id             = { type = 22400 id = 10 }
      name           = "43rd Division"
      type           = infantry
      model          = 5
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 11 }
      name           = "44th Division"
      type           = infantry
      model          = 5
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 12 }
      name           = "45th Division"
      type           = infantry
      model          = 5
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 13 }
    name     = "4th Army"
    location = 1378
    division = {
      id             = { type = 22400 id = 14 }
      name           = "25th Division"
      type           = infantry
      model          = 6
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 60
    }
    division = {
      id             = { type = 22400 id = 15 }
      name           = "26th Division"
      type           = militia
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 22400 id = 16 }
      name           = "27th Division"
      type           = infantry
      model          = 6
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 60
    }
    division = {
      id             = { type = 22400 id = 17 }
      name           = "28th Division"
      type           = militia
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 22400 id = 18 }
      name           = "29th Division"
      type           = militia
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 22400 id = 19 }
      name           = "30th Division"
      type           = militia
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 22400 id = 20 }
      name           = "31st Division"
      type           = militia
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 22400 id = 21 }
      name           = "32nd Division"
      type           = militia
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 22400 id = 22 }
      name           = "33rd Division"
      type           = militia
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 22400 id = 23 }
      name           = "34th Division"
      type           = militia
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 22400 id = 24 }
      name           = "46th Division"
      type           = militia
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 22400 id = 25 }
      name           = "47th Division"
      type           = militia
      model          = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22400 id = 26 }
    name     = "1st Corps"
    location = 1369
    division = {
      id             = { type = 22400 id = 27 }
      name           = "1st Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 28 }
      name           = "2nd Division"
      type           = infantry
      model          = 6
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 29 }
      name           = "3rd Division"
      type           = infantry
      model          = 8
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 30 }
    name     = "2nd Corps"
    location = 1369
    division = {
      id             = { type = 22400 id = 31 }
      name           = "4th Division"
      type           = infantry
      model          = 6
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 32 }
      name           = "5th Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 33 }
      name           = "6th Division"
      type           = infantry
      model          = 8
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 34 }
    name     = "3rd Corps"
    location = 1369
    division = {
      id             = { type = 22400 id = 35 }
      name           = "7th Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 36 }
      name           = "8th Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 37 }
      name           = "9th Division"
      type           = infantry
      model          = 8
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 38 }
    name     = "4th Army"
    location = 1369
    division = {
      id             = { type = 22400 id = 39 }
      name           = "1st Independent Division"
      type           = militia
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 22400 id = 40 }
      name           = "2nd Independent Division"
      type           = militia
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 22400 id = 41 }
      name           = "3rd Independent Division"
      type           = militia
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 22400 id = 42 }
      name           = "4th Independent Division"
      type           = militia
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 22400 id = 43 }
      name           = "Training Division"
      type           = infantry
      model          = 8
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 100
    }
    division = {
      id             = { type = 22400 id = 44 }
      name           = "4th Army HQ"
      type           = hq
      model          = 2
      extra          = police
      brigade_model  = 1
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 22400 id = 45 }
    name     = "4th Fleet"
    location = 1369
    base     = 1369
    division = {
      id             = { type = 22400 id = 46 }
      name           = "Haizhou, Haihu"
      type           = destroyer
      model          = 0
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 22400 id = 47 }
      name           = "Haiqiang, Haiji, Jiangda, Jianggong, Guangjin"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22400 id = 48 }
      name           = "Guangcheng, Anbei, Fengwu, Jianru, Zhixin"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22400 id = 49 }
      name           = "Hushan, Guanghua, Zhili, Jinma, Feipeng"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22400 id = 50 }
      name           = "Jiangcheng, Jiangping, Pingxi, Jingdong, Guangan"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22400 id = 51 }
      name           = "Guangyuan, Lichen, Suijiang, Haiou, Zhujiang "
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22400 id = 52 }
      name           = "Xixing, Zhongyuan, Zhongkai, Xinsongjiang"
      type           = destroyer
      model          = 0
      strength       = 80
    }
    division = {
      id             = { type = 22400 id = 53 }
      name           = "S-1, S-2, S-3, S-4"
      type           = destroyer
      model          = 0
      strength       = 80
    }
    division = {
      id             = { type = 22400 id = 54 }
      name           = "Zhaohe"
      type           = light_cruiser
      model          = 2
      strength       = 100
    }
    division = {
      id             = { type = 22400 id = 55 }
      name           = "Hairui, Fuan"
      type           = transport
      model          = 0
      strength       = 40
    }
  }

  airunit = { 
    id       = { type = 22400 id = 56 }
    name     = "Guangdong Fighter Force"
    location = 1369
    base     = 1369
    division = {
      id             = { type = 22400 id = 57 }
      name           = "16th Squadron"
      type           = interceptor
      model          = 0
      strength       = 9
    }
    division = {
      id             = { type = 22400 id = 58 }
      name           = "17th Squadron"
      type           = interceptor
      model          = 4
      strength       = 10
    }
    division = {
      id             = { type = 22400 id = 59 }
      name           = "28th Squadron"
      type           = interceptor
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 22400 id = 60 }
      name           = "29th Squadron"
      type           = interceptor
      model          = 3
      strength       = 20
    }
  }
  airunit = { 
    id       = { type = 22400 id = 61 }
    name     = "Guangdong Bomber Force"
    location = 1369
    base     = 1369
    division = {
      id             = { type = 22400 id = 62 }
      name           = "18th 19th 20th 31st Squadrons"
      type           = tactical_bomber
      model          = 2
      strength       = 37
    }
    division = {
      id             = { type = 22400 id = 63 }
      name           = "30th Squadron"
      type           = tactical_bomber
      model          = 3
      strength       = 6
    }
  }
  airunit = { 
    id       = { type = 22400 id = 64 }
    name     = "Guangxi Air Force"
    location = 1369
    base     = 1369
    division = {
      id             = { type = 22400 id = 65 }
      name           = "7th 8th 34th Squadrons"
      type           = interceptor
      model          = 5
      strength       = 25
    }
    division = {
      id             = { type = 22400 id = 66 }
      name           = "32nd Squadron"
      type           = tactical_bomber
      model          = 2
      strength       = 9
    }
  }
}
