##############################
# Country definition for POL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = POL
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 232 # Warsaw
  manpower           = 124
  # Resource Reserves
  energy         = 2460
  metal          = 1230
  rare_materials = 615
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100

  diplomacy = {
    relation = {
      tag        = CZE
      value      = -1
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = { tag = ENG value = 50 }
    relation = { tag = EST value = 75 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = -10 }
    relation = { tag = GRE value = 35 }
    relation = { tag = HUN value = 50 }
    relation = { tag = LAT value = 75 }
    relation = { tag = LIT value = -125 }
    relation = {
      tag        = ROM
      value      = 40
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = { tag = SOV value = -50 }
  }
  SpyInfo                = { country = "POL" NumberOfSpies = 9 }

  nationalprovinces      = { 168 185 203 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 614 618 }
  ownedprovinces         = { 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 }
  controlledprovinces    = { 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1910 1920 1930 1940 1950 1960 14000 14010 14020 1830 1840 1850 1860 7600 7610 2620 2010 2630 2640 2860 2870 2880 2020 2290 2300 2310 2900 2800 2450 2810 2820 3210 3220 3010 3020 3030 3040 3050 3060 3610 3620 3630 3640 3720 3730 3736 3740 3750 3900 3810 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4300 4310 4320 4330 4800 4810 5700 5710 5310 54010 54020 5316 5326 5810 5820 5050 5830 5800 5080 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 8010 8040 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    freedom           = 4
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 60001 } # Ignacy Moscicki
  headofgovernment       = { type = 9 id = 60002 } # Marian Zyndram-Koscialkowski
  foreignminister        = { type = 9 id = 60003 } # Józef Beck
  armamentminister       = { type = 9 id = 60004 } # Tadeusz Kasprzycki
  ministerofsecurity     = { type = 9 id = 60005 } # Wladyslaw Raczkiewicz
  ministerofintelligence = { type = 9 id = 60006 } # T. Pelczynski-Grzegorz
  chiefofstaff           = { type = 9 id = 60007 } # Edward Rydz-Smigly
  chiefofarmy            = { type = 9 id = 60008 } # Edward Rydz-Smigly
  chiefofnavy            = { type = 9 id = 60009 } # Jerzy Swirski
  chiefofair             = { type = 9 id = 60010 } # Józef Zajac

  landunit = {
    id       = { type = 18600 id = 1 }
    name     = "1 Okreg Wojskowy"
    location = 232
    division = {
      id             = { type = 18600 id = 2 }
      name           = "8 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 3 }
      name           = "9 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 4 }
      name           = "28 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 5 }
      name           = "1 Dywizja Kawalerii"
      type           = cavalry
      model          = 6
      extra          = artillery
      brigade_model  = 3
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 6 }
      name           = "Podlaska Brygada Kawalerii"
      type           = cavalry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 25
      max_strength   = 60
    }
    division = {
      id             = { type = 18600 id = 7 }
      name           = "Mazowiecka Brygada Kawalerii"
      type           = cavalry
      model          = 8
      extra          = armored_car
      brigade_model  = 3
      strength       = 25
      max_strength   = 60
    }
  }
  landunit = {
    id       = { type = 18600 id = 8 }
    name     = "2 Okreg Wojskowy"
    location = 243
    division = {
      id             = { type = 18600 id = 9 }
      name           = "3 Dywizja Piechoty Legionów"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 10 }
      name           = "13 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 11 }
      name           = "27 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 12 }
      name           = "Wolynska Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
    division = {
      id             = { type = 18600 id = 13 }
      name           = "41 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 14 }
    name     = "3 Okreg Wojskowy"
    location = 255
    division = {
      id             = { type = 18600 id = 15 }
      name           = "1 Dywizja Piechoty Legionów"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 16 }
      name           = "19 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 17 }
      name           = "29 Dywizja Piechoty"
      type           = infantry
      model          = 8
      strength       = 45
    }
    division = {
      id             = { type = 18600 id = 18 }
      name           = "Suwalska Brygada Kawalerii"
      type           = cavalry
      model          = 8
      strength       = 25
      max_strength   = 60
    }
    division = {
      id             = { type = 18600 id = 19 }
      name           = "Wilenska Brygada Kawalerii"
      type           = cavalry
      model          = 8
      strength       = 25
      max_strength   = 60
    }
    division = {
      id             = { type = 18600 id = 20 }
      name           = "39 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 18600 id = 21 }
      name           = "35 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 18600 id = 22 }
      name           = "33 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 23 }
    name     = "4 Okreg Wojskowy"
    location = 223
    division = {
      id             = { type = 18600 id = 24 }
      name           = "7 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 25 }
      name           = "10 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 3
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 26 }
      name           = "26 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 27 }
      name           = "Lodzka Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
    division = {
      id             = { type = 18600 id = 28 }
      name           = "45 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 29 }
    name     = "5 Okreg Wojskowy"
    location = 235
    division = {
      id             = { type = 18600 id = 30 }
      name           = "6 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 31 }
      name           = "21 Dywizja Piechoty Górskiej"
      type           = bergsjaeger
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 32 }
      name           = "23 Dywizja Piechoty"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 3
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 33 }
      name           = "Krakowska Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
    division = {
      id             = { type = 18600 id = 34 }
      name           = "55 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 35 }
    name     = "6 Okreg Wojskowy"
    location = 242
    division = {
      id             = { type = 18600 id = 36 }
      name           = "5 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 37 }
      name           = "11 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 38 }
      name           = "12 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 39 }
      name           = "Podolska Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
    division = {
      id             = { type = 18600 id = 40 }
      name           = "36 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 41 }
    name     = "7 Okreg Wojskowy"
    location = 224
    division = {
      id             = { type = 18600 id = 42 }
      name           = "14 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 43 }
      name           = "17 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 3
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 44 }
      name           = "25 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 45 }
      name           = "Wielkopolska Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 18600 id = 46 }
    name     = "8 Okreg Wojskowy"
    location = 222
    division = {
      id             = { type = 18600 id = 47 }
      name           = "4 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 48 }
      name           = "15 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 49 }
      name           = "16 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 50 }
      name           = "Pomorska Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 18600 id = 51 }
    name     = "9 Okreg Wojskowy"
    location = 247
    division = {
      id             = { type = 18600 id = 52 }
      name           = "18 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 53 }
      name           = "20 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 54 }
      name           = "30 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 55 }
      name           = "Nowogródzka Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
    division = {
      id             = { type = 18600 id = 56 }
      name           = "38 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 18600 id = 57 }
      name           = "44 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 58 }
    name     = "10 Okreg Wojskowy"
    location = 239
    division = {
      id             = { type = 18600 id = 59 }
      name           = "2 Dywizja Piechoty Legionów"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 60 }
      name           = "22 Dywizja Piechoty Górskiej"
      type           = bergsjaeger
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 61 }
      name           = "24 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 62 }
      name           = "Kresowa Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
  }

  navalunit = {
    id       = { type = 18600 id = 63 }
    name     = "Polska Flota Wojenna"
    location = 226
    base     = 226
    division = {
      id             = { type = 18600 id = 64 }
      name           = "Flotylla Niszczycieli"
      type           = destroyer
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 18600 id = 964 }
      name           = "Flotylla Dozorowców"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 18600 id = 65 }
      name           = "1 Flotylla Okretow Podwodnych"
      type           = submarine
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 18600 id = 66 }
    name     = "Wojska Lotnicze"
    location = 232
    base     = 232
    division = {
      id             = { type = 18600 id = 67 }
      name           = "3 Korpus Lotnictwa Mysliwskiego"
      type           = interceptor
      model          = 7
    }
    division = {
      id             = { type = 18600 id = 68 }
      name           = "4 Korpus Lotnictwa Szturmowego"
      type           = interceptor
      model          = 7
    }
    division = {
      id             = { type = 18600 id = 69 }
      name           = "15 Dywizja Lotnictwa Bombowego"
      type           = tactical_bomber
      model          = 4
    }
  }
}
