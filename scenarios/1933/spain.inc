##############################
# Country definition for SPR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SPR
  regular_id         = SPA
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  intrinsic_gov_type = left_wing_radical
  capital            = 460 # Madrid
  dissent            = 30
  manpower           = 30
  # Resource Reserves
  energy         = 2280
  metal          = 1140
  rare_materials = 570
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100
  escorts        = 27

  diplomacy = {
    relation = { tag = ENG value = -10 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 10 }
    relation = { tag = GER value = -50 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = -50 }
    relation = { tag = POR value = -50 }
    relation = { tag = SOV value = -10 }
  }
  SpyInfo                = { country = "SPR" NumberOfSpies = 7 }

  nationalprovinces      = { 348 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 990 991 }
  ownedprovinces         = { 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 715 716 913 916 987 988 989 990 991 }
  controlledprovinces    = { 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 715 716 913 916 987 988 989 990 991 }
  claimedprovinces       = { 715 716 913 916 987 988 989 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 2860 2870 2880 2020 7600 7610 2620 2010 2630 2640 2290 2300 2310 2800 2450 21180 21190 4600 4610 4620 4630 4120 4130 2810 2820 2510 1910 1920 1930 1940 1950 1960 1830 1840 1850 1860 3410 3420 3430 3440 3450 3456 3460 3470 3210 3220 3230 3240 3250 3610 3620 3630 3640 3110 3120 3130 3140 3010 3020 3030 3040 3050 3060 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 5700 5710 5010 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 4300 4310 4320 4330 4800 4810 4820 4700 4710 3720 3730 3736 3740 3750 3900 3810 5600 5610 5620 14000 14010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 8010 8020 8040 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 7
    free_market       = 4
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 255001 } # Niceto Alcalá-Zamora
  headofgovernment       = { type = 9 id = 255002 } # Manuel Portela Valladares
  foreignminister        = { type = 9 id = 255003 } # Joaquín Urzaiz Cadaval
  armamentminister       = { type = 9 id = 255004 } # José Mendizábal y Bonilla
  ministerofsecurity     = { type = 9 id = 255005 } # Manuel Portela Valladares
  ministerofintelligence = { type = 9 id = 255006 } # Juan Hernández Sarabia
  chiefofstaff           = { type = 9 id = 255007 } # José Miaja Menant
  chiefofarmy            = { type = 9 id = 255008 } # Nicolás Molero Lobo
  chiefofnavy            = { type = 9 id = 255009 } # Antonio Azarola Gresillón
  chiefofair             = { type = 9 id = 255010 } # Miguel Nuñez de Prado
  dormant_leaders        = { 255008 255051 }

  landunit = {
    id       = { type = 27600 id = 1 }
    name     = "1a División Orgánica"
    location = 460
    division = {
      id             = { type = 27600 id = 2 }
      name           = "1a División Orgánica"
      type           = infantry
      model          = 7
      extra          = light_armor_brigade
      brigade_model  = 1
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 27600 id = 3 }
    name     = "1a División de Caballería"
    location = 460
    division = {
      id             = { type = 27600 id = 4 }
      name           = "1a División de Caballería"
      type           = cavalry
      model          = 8
      extra          = artillery
      brigade_model  = 1
      strength       = 75
    }
    division = {
      id             = { type = 27600 id = 5 }
      name           = "Brigada Blindada"
      type           = light_armor
      model          = 0
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 27600 id = 6 }
    name     = "2a División Orgánica"
    location = 474
    division = {
      id             = { type = 27600 id = 7 }
      name           = "2a División Orgánica"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 27600 id = 8 }
    name     = "3a División Orgánica"
    location = 464
    division = {
      id             = { type = 27600 id = 9 }
      name           = "3a División Orgánica"
      type           = infantry
      model          = 7
      extra          = cavalry_brigade
      brigade_model  = 8
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 27600 id = 10 }
    name     = "4a División Orgánica"
    location = 440
    division = {
      id             = { type = 27600 id = 11 }
      name           = "4a División Orgánica"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 1
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 27600 id = 12 }
    name     = "5a División Orgánica"
    location = 442
    division = {
      id             = { type = 27600 id = 13 }
      name           = "5a División Orgánica"
      type           = infantry
      model          = 7
      extra          = cavalry_brigade
      brigade_model  = 8
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 27600 id = 14 }
    name     = "Brigadas de Montaña"
    location = 446
    division = {
      id             = { type = 27600 id = 15 }
      name           = "Brigadas de Montaña"
      type           = bergsjaeger
      model          = 7
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 27600 id = 16 }
    name     = "6a División Orgánica"
    location = 451
    division = {
      id             = { type = 27600 id = 17 }
      name           = "6a División Orgánica"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 0
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 27600 id = 18 }
    name     = "7a División Orgánica"
    location = 448
    division = {
      id             = { type = 27600 id = 19 }
      name           = "7a División Orgánica"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 1
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 27600 id = 20 }
    name     = "8a División Orgánica"
    location = 441
    division = {
      id             = { type = 27600 id = 21 }
      name           = "8a División Orgánica"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 1
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 27600 id = 22 }
    name     = "Comandancia Militar de Baleares"
    location = 475
    division = {
      id             = { type = 27600 id = 23 }
      name           = "Comandancia Militar de Baleares"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 27600 id = 24 }
    name     = "Comandancia Militar de Canarias"
    location = 990
    division = {
      id             = { type = 27600 id = 25 }
      name           = "Comandancia Militar de Canarias"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 27600 id = 26 }
    name     = "Comandancia Militar de Asturias"
    location = 444
    division = {
      id             = { type = 27600 id = 27 }
      name           = "Comandancia Militar de Asturias"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 27600 id = 28 }
    name     = "Fuerzas de África Occidental"
    location = 987
    division = {
      id             = { type = 27600 id = 29 }
      name           = "Fuerzas de África Occidental"
      type           = militia
      model          = 3
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 27600 id = 30 }
    name     = "Circunscripción Occidental"
    location = 715
    division = {
      id             = { type = 27600 id = 31 }
      name           = "Tercios de la Legión"
      type           = infantry
      model          = 7
      strength       = 60
    }
    division = {
      id             = { type = 27600 id = 32 }
      name           = "Mehal-La 1"
      type           = militia
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 27600 id = 33 }
      name           = "Mehal-La 3"
      type           = militia
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 27600 id = 34 }
      name           = "Mehal-La 4"
      type           = militia
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 27600 id = 35 }
    name     = "Circunscripción Oriental"
    location = 716
    division = {
      id             = { type = 27600 id = 36 }
      name           = "Fuerzas Regulares Indigenas"
      type           = infantry
      model          = 5
      strength       = 70
    }
    division = {
      id             = { type = 27600 id = 37 }
      name           = "Mehal-La 2"
      type           = militia
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 27600 id = 38 }
      name           = "Mehal-La 5"
      type           = militia
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 27600 id = 39 }
    name     = "Guardias Coloniales"
    location = 913
    division = {
      id             = { type = 27600 id = 40 }
      name           = "Guardias Coloniales"
      type           = militia
      model          = 4
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 27600 id = 50 }
    name     = "Base Naval Cádiz"
    location = 473
    base     = 473
    division = {
      id             = { type = 27600 id = 51 }
      name           = "ARE República"
      type           = light_cruiser
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 27600 id = 52 }
      name           = "Flotilla de Destructores No. 3"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 27600 id = 53 }
    name     = "ARE Méndez Núñez"
    location = 441
    base     = 441
    division = {
      id             = { type = 27600 id = 54 }
      name           = "ARE Méndez Núñez"
      type           = light_cruiser
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 27600 id = 55 }
    name     = "Escuadrón de Batalla"
    location = 436
    base     = 436
    division = {
      id             = { type = 27600 id = 56 }
      name           = "1a Flotilla de Transporte Naval"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 27600 id = 57 }
      name           = "2a Flotilla de Transporte Naval"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 27600 id = 58 }
      name           = "Flotilla de Torpederas No. 1"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 27600 id = 59 }
      name           = "Flotilla de Torpederas No. 2"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 27600 id = 60 }
    name     = "Armada Colonial"
    location = 990
    base     = 990
    division = {
      id             = { type = 27600 id = 61 }
      name           = "Flotilla de Destructores No. 1"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 27600 id = 62 }
      name           = "3a Flotilla de Transporte Naval"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 27600 id = 63 }
      name           = "4a Flotilla de Transporte Naval"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 27600 id = 64 }
      name           = "Flotilla de Destructores No. 2"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 27600 id = 65 }
    name     = "Grupo C"
    location = 464
    base     = 464
    division = {
      id             = { type = 27600 id = 66 }
      name           = "S101 Flotilla"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 27600 id = 67 }
      name           = "S103 Flotilla"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 27600 id = 68 }
    name     = "I Flotilla de la Armada"
    location = 436
    base     = 436
    division = {
      id             = { type = 27600 id = 69 }
      name           = "ARE Jaime I"
      type           = battleship
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 27600 id = 70 }
      name           = "ARE España"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 27600 id = 71 }
      name           = "ARE Almirante Cervera"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 27600 id = 72 }
      name           = "ARE Libertad"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 27600 id = 73 }
      name           = "ARE Miguel de Cervantes"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 27600 id = 74 }
      name           = "Flotilla de Destructores No. 4"
      type           = destroyer
      model          = 4
    }
  }

  airunit = { 
    id       = { type = 27600 id = 100 }
    name     = "1a Escuadra Aérea"
    location = 460
    base     = 460
    division = {
      id             = { type = 27600 id = 101 }
      name           = "1er Grupo Táctico"
      type           = tactical_bomber
      model          = 4
      strength       = 30
    }
    division = {
      id             = { type = 27600 id = 102 }
      name           = "2o Grupo Táctico"
      type           = tactical_bomber
      model          = 4
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 27600 id = 103 }
    name     = "2a Escuadra Aérea"
    location = 436
    base     = 436
    division = {
      id             = { type = 27600 id = 104 }
      name           = "1er Grupo de Caza"
      type           = interceptor
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 27600 id = 105 }
      name           = "3er Grupo de Caza"
      type           = interceptor
      model          = 6
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 27600 id = 106 }
    name     = "Fuerzas Aéreas del África"
    location = 990
    base     = 990
    division = {
      id             = { type = 27600 id = 107 }
      name           = "1er Grupo de Bombardeo"
      type           = tactical_bomber
      model          = 4
      strength       = 30
    }
    division = {
      id             = { type = 27600 id = 108 }
      name           = "2o Grupo de Caza"
      type           = interceptor
      model          = 5
      strength       = 30
    }
  }

  division_development = {
    id             = { type = 27600 id = 500 }
    name           = "ARE Canarias"
    type           = heavy_cruiser
    model          = 4
    cost           = 0.3
    new_model      = no
    date           = { year = 1936 month = march day = 1 }
  }
  division_development = {
    id             = { type = 27600 id = 501 }
    name           = "ARE Baleares"
    type           = heavy_cruiser
    model          = 4
    cost           = 0.3
    new_model      = no
    date           = { year = 1936 month = june day = 1 }
  }
  division_development = {
    id             = { type = 27600 id = 502 }
    name           = "S104 Flotilla"
    type           = submarine
    model          = 3
    cost           = 0.1
    date           = { year = 1936 month = march day = 1 }
  }
}
