##############################
# Country definition for YUG #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = YUG
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 338 # Belgrade
  manpower           = 36
  # Resource Reserves
  energy         = 1500
  metal          = 750
  rare_materials = 375
  oil            = 500
  supplies       = 500
  money          = 15
  transports     = 100

  diplomacy = {
    relation = { tag = BUL value = 25 }
    relation = {
      tag        = CZE
      value      = 50
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation = {
      tag        = GRE
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = { tag = HUN value = 80 }
    relation = { tag = ITA value = 75 }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = {
      tag        = TUR
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
  }
  SpyInfo                = { country = "YUG" NumberOfSpies = 7 }

  nationalprovinces      = { 327 328 329 330 331 332 333 334 335 336 337 338 339 340 341 342 343 344 345 346 347 349 350 351 352 353 354 355 356 357 358 }
  ownedprovinces         = { 327 328 329 330 331 332 333 334 335 336 337 338 339 340 341 342 343 344 345 346 347 349 350 351 352 353 354 355 356 357 358 }
  controlledprovinces    = { 327 328 329 330 331 332 333 334 335 336 337 338 339 340 341 342 343 344 345 346 347 349 350 351 352 353 354 355 356 357 358 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 2620 2010 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5810 5820 5050 5830 5310 54010 54020 54030 5316 5326 5800 5080 5090 4600 4610 4620 4630 4120 3010 3020 3030 3040 3050 3060 3610 3620 3720 3730 3736 3740 3750 3900 3810 5600 5610 1910 1920 1930 1940 1950 1960 8010 8040 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 14000 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 100001 } # Pavle Karadjordjevic
  headofgovernment       = { type = 9 id = 100002 } # Milan Stojadinovic
  foreignminister        = { type = 9 id = 100003 } # Milan Stojadinovic
  armamentminister       = { type = 9 id = 100004 } # Boguljub Jevtic
  ministerofsecurity     = { type = 9 id = 100005 } # Pavle Karadjordjevic
  ministerofintelligence = { type = 9 id = 100006 } # Borivoje Josimovic
  chiefofstaff           = { type = 9 id = 100007 } # Petar Kosic
  chiefofarmy            = { type = 9 id = 100008 } # Aleksandar Cincar-Markovic
  chiefofnavy            = { type = 9 id = 100009 } # Bogoljub Ilic
  chiefofair             = { type = 9 id = 100010 } # Dusan Simovic

  landunit = {
    id       = { type = 19800 id = 1 }
    name     = "IV. Kraljevska Jugoslavenska Armija"
    location = 338
    division = {
      id             = { type = 19800 id = 2 }
      name           = "27. Savska Pesadijska Divizija"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 19800 id = 3 }
    name     = "VII. Kraljevska Jugoslavenska Armija"
    location = 338
    division = {
      id             = { type = 19800 id = 4 }
      name           = "32. Triglavska Pesadijska Divizija"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 6
      strength       = 50
    }
    division = {
      id             = { type = 19800 id = 5 }
      name           = "Triglavski Odred"
      type           = bergsjaeger
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 19800 id = 6 }
      name           = "1. Konjicka Divizija"
      type           = cavalry
      model          = 7
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 19800 id = 7 }
    name     = "I. Kraljevska Jugoslavenska Armija"
    location = 338
    division = {
      id             = { type = 19800 id = 8 }
      name           = "7. Potiska Pesadijska Divizija"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 50
    }
    division = {
      id             = { type = 19800 id = 9 }
      name           = "3. Konjicka Divizija"
      type           = cavalry
      model          = 6
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 19800 id = 10 }
    name     = "II. Kraljevska Jugoslavenska Armija"
    location = 354
    division = {
      id             = { type = 19800 id = 11 }
      name           = "10. Bosanska Pesadijska Divizija"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 19800 id = 12 }
      name           = "17. Vrbaska Pesadijska Divizija"
      type           = infantry
      model          = 7
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 19800 id = 13 }
    name     = "III. Kraljevska Jugoslavenska Armija"
    location = 329
    division = {
      id             = { type = 19800 id = 14 }
      name           = "13. Hercegovacka Pesadijska Divizija"
      type           = infantry
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 19800 id = 15 }
      name           = "15. Zetska Pesadijska Divizija"
      type           = infantry
      model          = 7
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 19800 id = 16 }
    name     = "III. Kraljevska Teritorijalna Armija"
    location = 350
    division = {
      id             = { type = 19800 id = 17 }
      name           = "5. Sumadijska Pesadijska Divizija"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 19800 id = 18 }
      name           = "20. Bregalnicka Pesadijska Divizija"
      type           = infantry
      model          = 8
      strength       = 50
    }
    division = {
      id             = { type = 19800 id = 19 }
      name           = "22. Ibarska Pesadijska Divizija"
      type           = infantry
      model          = 7
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 19800 id = 20 }
    name     = "V. Nezavisna Armija"
    location = 349
    division = {
      id             = { type = 19800 id = 21 }
      name           = "8. Krajinska Pesadijska Divizija"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 50
    }
    division = {
      id             = { type = 19800 id = 22 }
      name           = "9. Timocka Pesadijska Divizija"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 19800 id = 23 }
      name           = "2. Konjicka Divizija"
      type           = cavalry
      model          = 6
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 19800 id = 24 }
    name     = "VI. Nezavisna Armija"
    location = 338
    division = {
      id             = { type = 19800 id = 25 }
      name           = "3. Dunavska Pesadijska Divizija"
      type           = infantry
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 19800 id = 26 }
      name           = "4. Konjicka Divizija"
      type           = cavalry
      model          = 7
      strength       = 50
    }
  }

  navalunit = {
    id       = { type = 19800 id = 30 }
    name     = "Kraljevska Jugoslavenska Ratna Mornarica"
    location = 350
    base     = 350
    division = {
      id             = { type = 19800 id = 233 }
      name           = "Dalmacija"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 19800 id = 32 }
      name           = "1. Razaracka Flotila"
      type           = destroyer
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 19800 id = 232 }
      name           = "2. Razaracka Flotila"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 19800 id = 234 }
      name           = "3. Razaracka Flotila"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 19800 id = 33 }
      name           = "1. Podmornicka Flotila"
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 19800 id = 27 }
    name     = "Operativno Zrakoplovstvo"
    location = 338
    base     = 338
    division = {
      id             = { type = 19800 id = 28 }
      name           = "2. Vazduhoplovni Lovacki Puk"
      type           = interceptor
      model          = 5
      strength       = 30
    }
    division = {
      id             = { type = 19800 id = 29 }
      name           = "26. Takticki Bombarderski Puk"
      type           = tactical_bomber
      model          = 4
      strength       = 30
    }
  }
}
