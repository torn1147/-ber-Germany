##############################
# Country definition for SCH #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SCH
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 392 # Bern
  manpower           = 11
  # Resource Reserves
  energy         = 840
  metal          = 420
  rare_materials = 210
  oil            = 500
  supplies       = 500
  money          = 25

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
    relation = { tag = AUS value = 50 }
    relation = { tag = ITA value = 1 }
    relation = { tag = SCH value = 1 }
    relation = { tag = USA value = 1 }
  }
  SpyInfo                = { country = "SCH" NumberOfSpies = 6 }

  nationalprovinces      = { 389 390 391 392 }
  ownedprovinces         = { 389 390 391 392 }
  controlledprovinces    = { 389 390 391 392 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 4300 4310 4320 4330 2860 2870 2880 2020 2290 2300 2310 2800 2450 21180 21190 21200 2810 2820 2510 1010 1020 1030 1040 1050 1060 1070 1080 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1850 1860 5810 5820 5050 5830 5700 5710 5010 5020 5310 54010 54020 54030 5316 5326 5800 5080 5090 6010 6020 7600 7610 2620 2010 2630 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 7
    free_market       = 9
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 80001 } # Albert Meyer
  headofgovernment       = { type = 9 id = 80002 } # Albert Meyer
  foreignminister        = { type = 9 id = 80003 } # Giuseppe Motta
  armamentminister       = { type = 9 id = 80004 } # Albert Meyer
  ministerofsecurity     = { type = 9 id = 80005 } # Johannes Baumann
  ministerofintelligence = { type = 9 id = 80006 } # Roger Masson
  chiefofstaff           = { type = 9 id = 80007 } # Jakob I. Huber
  chiefofarmy            = { type = 9 id = 80008 } # Johann August Sutter
  chiefofnavy            = { type = 9 id = 80009 } # Rene von Graffenried
  chiefofair             = { type = 9 id = 80010 } # Oskar Bider

  landunit = {
    id       = { type = 30600 id = 1 }
    name     = "Ite Armeekorps"
    location = 392
    division = {
      id             = { type = 30600 id = 2 }
      name           = "1. Felddivision"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30600 id = 3 }
    name     = "IIème Corps d'Armée Suisse"
    location = 389
    division = {
      id             = { type = 30600 id = 4 }
      name           = "2ème Division d'Infanterie"
      type           = infantry
      model          = 8
      extra          = anti_air
      brigade_model  = 1
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 5 }
      name           = "1. Alpenjägerdivision"
      type           = bergsjaeger
      model          = 7
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 19 }
      name           = "2. Brigade di Alpinisti"
      type           = bergsjaeger
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30600 id = 6 }
    name     = "III Corpa di Armata"
    location = 391
    division = {
      id             = { type = 30600 id = 7 }
      name           = "3. Divisione di Fanteria"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 8 }
      name           = "4. Felddivisionen"
      type           = infantry
      model          = 8
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 9 }
      name           = "2ème Div. d'Infanterie de Montagne"
      type           = bergsjaeger
      model          = 7
      extra          = artillery
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 18 }
      name           = "3. Brigade di Alpinisti"
      type           = bergsjaeger
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30600 id = 10 }
    name     = "IV Armeekorps"
    location = 390
    division = {
      id             = { type = 30600 id = 11 }
      name           = "5ème Division d'Infanterie"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 3
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 12 }
      name           = "6. Divisione di Fanteria"
      type           = infantry
      model          = 8
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 13 }
      name           = "3. Divisione di Alpinisti"
      type           = bergsjaeger
      model          = 7
      extra          = artillery
      strength       = 5
    }
    division = {
      id             = { type = 30600 id = 17 }
      name           = "1. Brigade di Alpinisti"
      type           = bergsjaeger
      model          = 6
      strength       = 5
    }
  }

  airunit = { 
    id       = { type = 30600 id = 14 }
    name     = "Heeres Luftwaffe Abteilung 1"
    location = 392
    base     = 392
    division = {
      id             = { type = 30600 id = 15 }
      name           = "Taktikkampfgeschwader 1"
      type           = tactical_bomber
      model          = 4
      strength       = 20
    }
  }
}
