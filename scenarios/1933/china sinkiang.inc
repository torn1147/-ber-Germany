##############################
# Country definition for SIK #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SIK
  puppet             = SOV
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
  capital            = 1281 # Urumqi
  dissent            = 40
  manpower           = 0
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 5000
  supplies       = 2000
  money          = 10

  diplomacy = {
    relation = { tag = CHC value = 40 }
    relation = { tag = SOV value = 125 }
    relation = { tag = TAN value = 125 }
  }
  SpyInfo                = { country = "SIK" NumberOfSpies = 4 }

  nationalprovinces      = { 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 }
  ownedprovinces         = { 1273 1274 1275 1276 1277 1279 1280 1281 1282 }
  controlledprovinces    = { 1273 1274 1275 1276 1277 1279 1280 1281 1282 }

  techapps               = { 5810 5820 5050 5800 5316 5326 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 13060 13070 13080 1310 1320 1330 1340 1350 1830 1910 1920 1930 1940 1950 2290 2300 2310 6570 14000 14010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 7690 }
  blueprints             = { 1070 1220 1360 5327 5700 5600 7600 7610 2620 2010 2860 2870 2920 2900 2910 14020 4500 4510 4520 4530 4540 4300 4310 4320 4600 4610 4620 4630 4800 4810 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 420001 } # Sheng Shicai
  headofgovernment       = { type = 9 id = 420002 } # Xoja Niyaz Haji
  foreignminister        = { type = 9 id = 420003 } # Sheng Shicai
  armamentminister       = { type = 9 id = 420004 } # Habibullah Huseinov
  ministerofsecurity     = { type = 9 id = 420005 } # Zhang Xiliang
  ministerofintelligence = { type = 9 id = 420006 } # Viktor A.F. Polinov
  chiefofstaff           = { type = 9 id = 420007 } # Sheng Shicai
  chiefofarmy            = { type = 9 id = 420008 } # Sheng Shicai
  chiefofnavy            = { type = 9 id = 420009 } # Sa Zhenbing
  chiefofair             = { type = 9 id = 420010 } # Piotr Orlov

  landunit = {
    id       = { type = 25600 id = 20 }
    name     = "Anti Imperialist Army"
    location = 1281
    division = {
      id             = { type = 25600 id = 21 }
      name           = "Guard Regiment"
      type           = infantry
      model          = 4
      strength       = 15
    }
    division = {
      id             = { type = 25600 id = 22 }
      name           = "Dihua City Defense Battalion"
      type           = garrison
      model          = 3
      strength       = 8
    }
    division = {
      id             = { type = 25600 id = 23 }
      name           = "Training Regiment"
      type           = militia
      model          = 3
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 25600 id = 24 }
    name     = "Yili Garrison Command"
    location = 1280
    division = {
      id             = { type = 25600 id = 25 }
      name           = "Yili-Tacheng Garrisons"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 25600 id = 26 }
    name     = "Chenghua Garrison Command"
    location = 1273
    division = {
      id             = { type = 25600 id = 27 }
      name           = "Ashan Garrison"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 25600 id = 28 }
    name     = "Qitai City Defense Command"
    location = 1276
    division = {
      id             = { type = 25600 id = 29 }
      name           = "Qitai Garrison"
      type           = garrison
      model          = 3
      strength       = 8
    }
  }
  landunit = {
    id       = { type = 25600 id = 30 }
    name     = "Hami Garrison Command"
    location = 1277
    division = {
      id             = { type = 25600 id = 31 }
      name           = "Hami Garrison"
      type           = garrison
      model          = 3
      strength       = 4
    }
  }
  landunit = {
    id       = { type = 25600 id = 32 }
    name     = "Tushantuo Garrison Command"
    location = 1281
    division = {
      id             = { type = 25600 id = 33 }
      name           = "12th Infantry 8th Cavalry"
      type           = infantry
      model          = 5
      strength       = 12
    }
  }
  landunit = {
    id       = { type = 25600 id = 34 }
    name     = "Kashengeer Garrison Command"
    location = 1279
    division = {
      id             = { type = 25600 id = 35 }
      name           = "4th 5th 7th 9th Cavalry Regiments"
      type           = cavalry
      model          = 6
      strength       = 20
    }
    division = {
      id             = { type = 25600 id = 36 }
      name           = "7th Division"
      type           = infantry
      model          = 6
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 25600 id = 37 }
    name     = "Yanqi Garrison Command"
    location = 1275
    division = {
      id             = { type = 25600 id = 38 }
      name           = "Yanqi Garrison"
      type           = garrison
      model          = 3
      strength       = 4
    }
  }
  landunit = {
    id       = { type = 25600 id = 39 }
    name     = "White Russian Expeditionary Force"
    location = 1282
    division = {
      id             = { type = 25600 id = 40 }
      name           = "6th Cavalry Regiment"
      type           = cavalry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 6
    }
  }
}
