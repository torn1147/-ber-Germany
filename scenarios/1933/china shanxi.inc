##############################
# Country definition for CSX #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CSX
  regular_id         = CHI
  puppet             = CHI
  flag_ext           = _PNE
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
  intrinsic_gov_type = paternal_autocrat
  capital            = 1252 # Taiyuan
  dissent            = 40
  extra_tc           = 20
  manpower           = 173
  # Resource Reserves
  energy         = 480
  metal          = 240
  rare_materials = 120
  oil            = 100
  supplies       = 100
  money          = 50

  diplomacy = {
    relation = { tag = CHI value = 100 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = U67 value = 200 access = yes }
    relation = { tag = JAP value = -100 }
    relation = { tag = MAN value = -100 }
    relation = { tag = CHC value = -75 }
  }
  SpyInfo                = { country = "CSX" NumberOfSpies = 2 }

  nationalprovinces      = { 1238 1239 1248 1249 1250 1251 1252 1253 1254 1257 1258 }
  ownedprovinces         = { 1238 1239 1248 1249 1250 1251 1252 1253 1254 1257 1258 }
  controlledprovinces    = { 1238 1239 1248 1249 1250 1251 1252 1253 1254 1257 1258 }

  techapps               = { 5810 5820 5800 5080 5316 5326 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1220 1230 13060 13070 13080 1310 1320 1330 1340 1830 1910 1920 1930 1940 1950 1960 2290 2300 2310 2900 2910 2920 2930 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6570 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 7690 }
  blueprints             = { 1350 1360 5050 5327 5700 5600 7600 7610 2620 2010 2860 2870 2880 8010 8020 8050 8060 8070 8080 3010 3110 3120 3210 3220 3810 3720 3410 4500 4510 4520 4530 4540 4550 4300 4310 4320 4600 4610 4620 4630 4120 4800 4810 4700 4740 4750 4760 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 605001 } # Yan Xishan
  headofgovernment       = { type = 9 id = 605002 } # Yan Xishan
  foreignminister        = { type = 9 id = 605003 } # Wang Zuanxu
  armamentminister       = { type = 9 id = 605004 } # Fu Zuoyi
  ministerofsecurity     = { type = 9 id = 605005 } # Qu Yangke
  ministerofintelligence = { type = 9 id = 605006 } # Shang Zhen
  chiefofstaff           = { type = 9 id = 605007 } # Yan Xishan
  chiefofarmy            = { type = 9 id = 605008 } # Yan Xishan
  chiefofnavy            = { type = 9 id = 605009 } # Dmitrij Krolcheff
  chiefofair             = { type = 9 id = 605010 } # Yan Xishan

  landunit = {
    id       = { type = 22300 id = 1 }
    name     = "19th Corps"
    location = 1252
    division = {
      id             = { type = 22300 id = 2 }
      name           = "70th Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22300 id = 3 }
      name           = "72nd Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22300 id = 4 }
    name     = "33rd Corps"
    location = 1252
    division = {
      id             = { type = 22300 id = 5 }
      name           = "69th Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22300 id = 6 }
      name           = "71st Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22300 id = 7 }
    name     = "34th Corps"
    location = 1252
    division = {
      id             = { type = 22300 id = 8 }
      name           = "66th Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22300 id = 9 }
      name           = "73rd Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22300 id = 10 }
    name     = "35th Corps"
    location = 1252
    division = {
      id             = { type = 22300 id = 11 }
      name           = "68th Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22300 id = 12 }
      name           = "101st Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22300 id = 13 }
    name     = "Shanxi Independent Divisions"
    location = 1252
    division = {
      id             = { type = 22300 id = 14 }
      name           = "New 2nd Division"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22300 id = 15 }
      name           = "1st Cavalry Division"
      type           = cavalry
      model          = 6
      strength       = 33
      experience     = 30
    }
    division = {
      id             = { type = 22300 id = 16 }
      name           = "2nd Cavalry Division"
      type           = cavalry
      model          = 6
      strength       = 33
      experience     = 30
    }
    division = {
      id             = { type = 22300 id = 17 }
      name           = "1st Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22300 id = 18 }
      name           = "2nd Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22300 id = 19 }
      name           = "3rd Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22300 id = 20 }
      name           = "7th Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22300 id = 21 }
      name           = "8th Independent Brigade"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
  }
}
