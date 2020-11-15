##############################
# Country definition for TIB #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = TIB
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1289 # Lhasa
  manpower           = 0
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 500
  supplies       = 500
  money          = 10
  SpyInfo                = { country = "TIB" NumberOfSpies = 4 }

  nationalprovinces      = { 1294 1286 1287 1288 1289 1295 1290 1278 1285 }
  ownedprovinces         = { 1286 1287 1288 1289 1290 1294 1295 }
  controlledprovinces    = { 1286 1287 1288 1289 1290 1294 1295 }
  claimedprovinces       = { 1455 1458 1283 1284 1292 1293 1262 }

  techapps               = { 5800 5316 5326 1010 1020 1030 1040 1160 1170 1180 1190 1200 1210 13060 13070 13080 1310 1910 1920 1930 2290 14000 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 }
  blueprints             = { 5600 2300 1050 1060 1220 6540 6910 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 1
    free_market       = 5
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 440001 } # Dalai Lama Lhamo Tondup
  headofgovernment       = { type = 9 id = 440002 } # Reting Rimpoche
  foreignminister        = { type = 9 id = 440003 } # Reting Rimpoche
  armamentminister       = { type = 9 id = 440004 } # Tsepon Shakabpa
  ministerofsecurity     = { type = 9 id = 440005 } # Reting Rimpoche
  ministerofintelligence = { type = 9 id = 440006 } # W.G. Kundeling
  chiefofstaff           = { type = 9 id = 440007 } # Gyato Wangdu
  chiefofarmy            = { type = 9 id = 440008 } # Tenpa Jamyang
  chiefofnavy            = { type = 9 id = 440009 } # Chama Samphe
  chiefofair             = { type = 9 id = 440010 } # Sampo Tsewang Rigzin

  landunit = {
    id       = { type = 10700 id = 1 }
    name     = "Xizang Army"
    location = 1289
    division = {
      id             = { type = 10700 id = 2 }
      name           = "1st 2nd 3rd Regiments"
      type           = infantry
      model          = 3
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 18
    }
    division = {
      id             = { type = 10700 id = 3 }
      name           = "4th 5th 6th Regiments"
      type           = infantry
      model          = 4
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 9
    }
    division = {
      id             = { type = 10700 id = 4 }
      name           = "7th 8th 9th 10th Regiments"
      type           = infantry
      model          = 3
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 12
    }
  }
}
