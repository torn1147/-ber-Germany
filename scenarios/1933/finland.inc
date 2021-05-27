##############################
# Country definition for FIN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = FIN
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes FINNormal = yes } }
  capital            = 525 # Helsinki
  manpower           = 4
  # Resource Reserves
  energy         = 900
  metal          = 450
  rare_materials = 225
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100
  escorts        = 2

  diplomacy = {
    relation = { tag = AST value = 65 }
    relation = { tag = AUS value = 55 }
    relation = { tag = BEL value = 100 }
    relation = { tag = BUL value = 35 }
    relation = { tag = CZE value = 50 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 85 }
    relation = { tag = EST value = 120 }
    relation = { tag = FRA value = 85 }
    relation = { tag = GER value = 25 }
    relation = { tag = GRE value = 40 }
    relation = { tag = HOL value = 100 }
    relation = { tag = HUN value = 75 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = 50 }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 90 }
    relation = { tag = LIT value = 80 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 75 }
    relation = { tag = NZL value = 50 }
    relation = { tag = POL value = 100 }
    relation = { tag = POR value = 50 }
    relation = { tag = ROM value = 40 }
    relation = { tag = SAF value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = 35 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 90 }
    relation = { tag = YUG value = 35 }
  }
  SpyInfo                = { country = "FIN" NumberOfSpies = 5 }

  nationalprovinces      = { 511 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 527 528 529 530 531 532 533 536 537 538 539 540 }
  ownedprovinces         = { 511 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 527 528 529 530 531 532 533 }
  controlledprovinces    = { 511 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 527 528 529 530 531 532 533 }

  techapps               = { 5810 5820 5050 5830 5800 5080 5090 5700 5710 5010 5310 54010 54020 54030 5316 5326 5190 5600 5610 5620 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 13060 13070 13080 1310 1320 1330 1340 1350 1360 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 7600 7610 2620 2010 2630 2640 2646 2860 2870 2880 2020 2290 2300 2310 2900 2910 2920 2930 2800 2450 21180 21190 2810 2820 2510 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6390 3010 3020 3030 3040 3210 3220 3230 3610 3620 3630 3640 3720 3730 3736 3740 3750 3900 3810 3820 8010 8020 8040 8050 8070 8080 8100 8200 8500 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 7
    free_market       = 9
    professional_army = 4
    defense_lobby     = 9
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 145001 } # Pehr E. Svinhufvud
  headofgovernment       = { type = 9 id = 145002 } # Toivo M. Kivimäki
  foreignminister        = { type = 9 id = 145003 } # Antti V. Hackzell
  armamentminister       = { type = 9 id = 145004 } # Arvi A. Oksala
  ministerofsecurity     = { type = 9 id = 145005 } # Yrjö W. Puhakka
  ministerofintelligence = { type = 9 id = 145006 } # Esko Riekki
  chiefofstaff           = { type = 9 id = 145007 } # K. Lennart Oesch
  chiefofarmy            = { type = 9 id = 145008 } # Hugo V. Österman
  chiefofnavy            = { type = 9 id = 145009 } # Väinö L. R. Valve
  chiefofair             = { type = 9 id = 145010 } # Jarl F. Lundqvist

  landunit = {
    id       = { type = 32000 id = 1 }
    name     = "Maavoimat"
    location = 525
    division = {
      id             = { type = 32000 id = 2 }
      name           = "Päämaja"
      type           = hq
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 32000 id = 3 }
      name           = "Ratsuväenprikatii"
      type           = cavalry
      model          = 8
      strength       = 20
    }
    division = {
      id             = { type = 32000 id = 4 }
      name           = "6. Divisioona"
      type           = infantry
      model          = 7
      strength       = 5
    }
    division = {
      id             = { type = 32000 id = 5 }
      name           = "9. Divisioona"
      type           = infantry
      model          = 7
      strength       = 5
    }
    division = {
      id             = { type = 32000 id = 6 }
      name           = "14. Divisioona"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 32000 id = 7 }
      name           = "17. Divisioona"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 32000 id = 8 }
    name     = "I Armeijakunta"
    location = 531
    division = {
      id             = { type = 32000 id = 9 }
      name           = "1. Divisioona"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 35
    }
    division = {
      id             = { type = 32000 id = 10 }
      name           = "2. Divisioona"
      type           = infantry
      model          = 8
      extra          = anti_air
      brigade_model  = 2
      strength       = 35
    }
    division = {
      id             = { type = 32000 id = 11 }
      name           = "3. Divisioona"
      type           = bergsjaeger
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 32000 id = 12 }
    name     = "II Armeijakunta"
    location = 531
    division = {
      id             = { type = 32000 id = 13 }
      name           = "4. Divisioona"
      type           = infantry
      model          = 7
      strength       = 5
    }
    division = {
      id             = { type = 32000 id = 14 }
      name           = "5. Divisioona"
      type           = infantry
      model          = 7
      strength       = 5
    }
    division = {
      id             = { type = 32000 id = 15 }
      name           = "11. Divisioona"
      type           = infantry
      model          = 7
      strength       = 5
    }
    division = {
      id             = { type = 32000 id = 16 }
      name           = "15. Divisioona"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 32000 id = 17 }
      name           = "18. Divisioona"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 32000 id = 18 }
    name     = "III Armeijakunta"
    location = 531
    division = {
      id             = { type = 32000 id = 19 }
      name           = "8. Divisioona"
      type           = infantry
      model          = 7
      strength       = 5
    }
    division = {
      id             = { type = 32000 id = 20 }
      name           = "10. Divisioona"
      type           = infantry
      model          = 7
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 32000 id = 21 }
    name     = "IV Armeijakunta"
    location = 532
    division = {
      id             = { type = 32000 id = 22 }
      name           = "12. Divisioona"
      type           = bergsjaeger
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 32000 id = 23 }
      name           = "13. Divisioona"
      type           = bergsjaeger
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 32000 id = 24 }
    name     = "VII Armeijakunta"
    location = 528
    division = {
      id             = { type = 32000 id = 25 }
      name           = "7. Divisioona"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 32000 id = 26 }
      name           = "19. Divisioona"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 32000 id = 27 }
    name     = "Kenttätäydennysprikaati"
    location = 525
    division = {
      id             = { type = 32000 id = 28 }
      name           = "21. Divisioona"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 32000 id = 29 }
      name           = "23. Divisioona"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 32000 id = 30 }
    name     = "Suomen Laivasto"
    location = 525
    base     = 525
    division = {
      id             = { type = 32000 id = 31 }
      name           = "Ilmarinen"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 32000 id = 32 }
      name           = "Väinämöinen"
      type           = heavy_cruiser
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 32000 id = 35 }
    name     = "I. Laivasto"
    location = 525
    base     = 525
    division = {
      id             = { type = 32000 id = 36 }
      name           = "1. Sukellusvenelaivue"
      type           = submarine
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 32000 id = 37 }
    name     = "Suomen ilmavoimat"
    location = 528
    base     = 528
    division = {
      id             = { type = 32000 id = 38 }
      name           = "Lentorykmentti 1"
      type           = tactical_bomber
      model          = 3
      strength       = 30
    }
    division = {
      id             = { type = 32000 id = 39 }
      name           = "Lentorykmentti 2"
      type           = interceptor
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 32000 id = 40 }
      name           = "Lentorykmentti 4"
      type           = tactical_bomber
      model          = 4
      strength       = 30
    }
  }

  landdivision = { dormant = yes id = { type = 32000 id = 400 } name = "Ryhmä Talvela"  type = infantry model = 7 strength = 100 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 32000 id = 401 } name = "Ahvenanmaa Prikaati"  type = garrison model = 4 strength = 30 max_strength = 30 } 
  landdivision = { dormant = yes id = { type = 32000 id = 402 } name = "Ryhmä Pohjois-Suomen"  type = infantry model = 8 strength = 80 max_strength = 80 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 32000 id = 403 } name = "Ryhmä Räsänen"  type = infantry model = 7 strength = 60 max_strength = 60 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 32000 id = 404 } name = "Ryhmä Rautu"  type = infantry model = 7 strength = 80 max_strength = 80 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 32000 id = 405 } name = "Ryhmä Metsäpirtti"  type = infantry model = 7 strength = 30 max_strength = 30 } 
  landdivision = { dormant = yes id = { type = 32000 id = 406 } name = "Ryhmä Lipola"  type = infantry model = 7 strength = 40 max_strength = 40 } 
  landdivision = { dormant = yes id = { type = 32000 id = 407 } name = "Ryhmä Muolaa"  type = bergsjaeger model = 8 strength = 60 max_strength = 60 } 
  landdivision = { dormant = yes id = { type = 32000 id = 408 } name = "Ryhmä Uusikirkko"  type = infantry model = 7 strength = 50 max_strength = 50 } 
}
