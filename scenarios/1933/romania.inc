##############################
# Country definition for ROM #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ROM
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 316 # Bucharest
  manpower           = 48
  # Resource Reserves
  energy         = 1920
  metal          = 960
  rare_materials = 480
  oil            = 500
  supplies       = 500
  money          = 15
  transports     = 100

  diplomacy = {
    relation = { tag = BUL value = 25 }
    relation = {
      tag        = CZE
      value      = 20
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation = {
      tag        = GRE
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = { tag = HUN value = 1 }
    relation = { tag = ITA value = 50 }
    relation = { tag = POL value = 40 }
    relation = { tag = SOV value = 1 }
    relation = {
      tag        = TUR
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = {
      tag        = YUG
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
  }
  SpyInfo                = { country = "ROM" NumberOfSpies = 8 }

  nationalprovinces      = { 285 286 287 288 289 291 292 293 295 296 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 312 313 314 315 316 621 }
  ownedprovinces         = { 285 286 287 288 289 291 292 293 295 296 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 312 313 314 315 316 }
  controlledprovinces    = { 285 286 287 288 289 291 292 293 295 296 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 312 313 314 315 316 }

  techapps               = { 5810 5820 5050 5830 5800 5080 5090 5700 5710 5010 5310 54010 54020 54030 5316 5326 5327 5190 5600 5610 5620 1010 1020 1030 1040 1050 1060 1070 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1830 1840 1850 1910 1920 1930 1940 1950 1960 7600 7610 2620 2010 2630 2640 2860 2870 2880 2020 2290 2300 2310 2900 2910 2800 2450 21180 21190 2810 2820 2510 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 3010 3020 3030 3040 3610 3620 3630 3720 3730 3736 3740 3900 3810 8010 8020 8040 8050 8060 8070 8080 4500 4510 4520 4530 4540 4550 4010 4020 4300 4310 4320 4330 4600 4610 4620 4630 4120 4800 4810 4820 4700 4710 4740 4750 4760 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 4
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 110001 } # Carol II
  headofgovernment       = { type = 9 id = 110002 } # Gheorghe Tatarescu
  foreignminister        = { type = 9 id = 110003 } # Nicolae Titulescu
  armamentminister       = { type = 9 id = 110202 } # Victor Slavescu
  ministerofsecurity     = { type = 9 id = 110200 } # Ion C. Inculet
  ministerofintelligence = { type = 9 id = 110006 } # Mihail Moruzov
  chiefofstaff           = { type = 9 id = 110007 } # Ion Antonescu
  chiefofarmy            = { type = 9 id = 110008 } # Marin Ceausu
  chiefofnavy            = { type = 9 id = 110009 } # Nicolae Caranfil
  chiefofair             = { type = 9 id = 110010 } # Dante Vizante

  landunit = {
    id       = { type = 20600 id = 1 }
    name     = "Armata Regala"
    location = 316
    division = {
      id             = { type = 20600 id = 2 }
      name           = "Cartier General"
      type           = hq
      model          = 2
      strength       = 30
    }
    division = {
      id             = { type = 20600 id = 3 }
      name           = "Divizie Garda Regala"
      type           = infantry
      model          = 8
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 4 }
      name           = "Brigada 1 Fortificatii"
      type           = garrison
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 5 }
      name           = "Brigada 2 Fortificatii"
      type           = garrison
      model          = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20600 id = 6 }
    name     = "Corp I Armata"
    location = 315
    division = {
      id             = { type = 20600 id = 7 }
      name           = "Divizie 2 Infanterie"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 8 }
      name           = "Divizie 3 Infanterie"
      type           = infantry
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 9 }
      name           = "Divizie 11 Infanterie"
      type           = infantry
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 10 }
      name           = "Divizie 31 Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20600 id = 11 }
    name     = "Corp II Armata"
    location = 316
    division = {
      id             = { type = 20600 id = 12 }
      name           = "Divizie 4 Infanterie"
      type           = infantry
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 13 }
      name           = "Divizie 9 Infanterie"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 14 }
      name           = "Divizie 10 Infanterie"
      type           = infantry
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 15 }
      name           = "Divizie 32 Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20600 id = 16 }
    name     = "Corp III Armata"
    location = 298
    division = {
      id             = { type = 20600 id = 17 }
      name           = "Divizie 15 Infanterie"
      type           = infantry
      model          = 6
      extra          = light_armor_brigade
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 18 }
      name           = "Divizie 20 Infanterie"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 19 }
      name           = "Divizie 21 Infanterie"
      type           = infantry
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 20 }
      name           = "Divizie 35 Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20600 id = 21 }
    name     = "Corp IV Armata"
    location = 297
    division = {
      id             = { type = 20600 id = 22 }
      name           = "Divizie 7 Infanterie"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 23 }
      name           = "Divizie 8 Infanterie"
      type           = infantry
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 24 }
      name           = "Divizie 14 Infanterie"
      type           = infantry
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 25 }
      name           = "Divizie 27 Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20600 id = 26 }
    name     = "Corp V Armata"
    location = 309
    division = {
      id             = { type = 20600 id = 27 }
      name           = "Divizie 5 Infanterie"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 28 }
      name           = "Divizie 6 Infanterie"
      type           = infantry
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 29 }
      name           = "Divizie 13 Infanterie"
      type           = infantry
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 30 }
      name           = "Divizie 30 Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20600 id = 31 }
    name     = "Corp VI Armata"
    location = 286
    division = {
      id             = { type = 20600 id = 32 }
      name           = "Divizie 12 Infanterie"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 33 }
      name           = "Divizie 16 Infanterie"
      type           = infantry
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 34 }
      name           = "Divizie 17 Infanterie"
      type           = infantry
      model          = 6
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 20600 id = 35 }
    name     = "Corp VII Armata"
    location = 291
    division = {
      id             = { type = 20600 id = 36 }
      name           = "Divizie 1 Infanterie"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 37 }
      name           = "Divizie 18 Infanterie"
      type           = infantry
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 38 }
      name           = "Divizie 19 Infanterie"
      type           = infantry
      model          = 6
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 20600 id = 39 }
    name     = "Corp Munte"
    location = 288
    division = {
      id             = { type = 20600 id = 40 }
      name           = "Brigada 1 Munte"
      type           = bergsjaeger
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 41 }
      name           = "Brigada 2 Munte"
      type           = bergsjaeger
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 20600 id = 42 }
    name     = "Corp Cavalerie"
    location = 311
    division = {
      id             = { type = 20600 id = 43 }
      name           = "Brigada 1 Cavalerie"
      type           = cavalry
      model          = 6
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 44 }
      name           = "Brigada 2 Cavalerie"
      type           = cavalry
      model          = 6
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 45 }
      name           = "Brigada 3 Cavalerie"
      type           = cavalry
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 46 }
      name           = "Brigada 4 Cavalerie"
      type           = cavalry
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 47 }
      name           = "Brigada 5 Cavalerie"
      type           = cavalry
      model          = 7
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 48 }
      name           = "Brigada 6 Cavalerie"
      type           = cavalry
      model          = 7
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 49 }
      name           = "Brigada 7 Cavalerie"
      type           = cavalry
      model          = 6
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 50 }
      name           = "Brigada 8 Cavalerie"
      type           = cavalry
      model          = 7
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 20600 id = 51 }
    name     = "Brigada 1 Graniceri"
    location = 308
    division = {
      id             = { type = 20600 id = 52 }
      name           = "Brigada 1 Graniceri"
      type           = militia
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20600 id = 53 }
    name     = "Brigada 4 Graniceri"
    location = 303
    division = {
      id             = { type = 20600 id = 54 }
      name           = "Brigada 4 Graniceri"
      type           = militia
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20600 id = 55 }
    name     = "Brigada 2 Graniceri"
    location = 296
    division = {
      id             = { type = 20600 id = 56 }
      name           = "Brigada 2 Graniceri"
      type           = militia
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 20600 id = 57 }
    name     = "Brigada 3 Graniceri"
    location = 304
    division = {
      id             = { type = 20600 id = 58 }
      name           = "Brigada 3 Graniceri"
      type           = militia
      model          = 4
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 20600 id = 59 }
    name     = "Flota Romania de Mare"
    location = 307
    base     = 307
    division = {
      id             = { type = 20600 id = 60 }
      name           = "'NMS Regele Ferdinand' Flotila"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 20600 id = 61 }
      name           = "'NMS Delfinul' Flotila"
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 20600 id = 62 }
    name     = "Gruparea Aeriana de Lupta"
    location = 316
    base     = 316
    division = {
      id             = { type = 20600 id = 63 }
      name           = "Grup 1 Avion de Vanatoare"
      type           = interceptor
      model          = 4
      strength       = 40
    }
    division = {
      id             = { type = 20600 id = 64 }
      name           = "Grup 1 Tactic Bombardier"
      type           = tactical_bomber
      model          = 3
      strength       = 10
    }
    division = {
      id             = { type = 20600 id = 65 }
      name           = "Grup 1 Hidroavioane"
      type           = naval_bomber
      model          = 1
      strength       = 28
    }
  }
}
