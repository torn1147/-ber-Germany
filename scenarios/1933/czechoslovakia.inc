##############################
# Country definition for CZE #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CZE
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 207 # Prague
  manpower           = 10
  # Resource Reserves
  energy         = 2160
  metal          = 1080
  rare_materials = 540
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -25 }
    relation = { tag = HUN value = -50 }
    relation = { tag = ITA value = 15 }
    relation = { tag = POL value = -1 }
    relation = {
      tag        = ROM
      value      = 20
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = SOV value = 100 }
    relation = {
      tag        = YUG
      value      = 50
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = LIT value = 65 }
    relation = { tag = LAT value = 65 }
    relation = { tag = EST value = 65 }
  }
  SpyInfo                = { country = "CZE" NumberOfSpies = 7 }

  nationalprovinces      = { 196 197 198 199 200 201 202 203 204 205 206 207 208 209 210 211 212 213 214 215 }
  ownedprovinces         = { 196 197 198 199 200 201 202 203 204 205 206 207 208 209 210 211 212 213 214 215 }
  controlledprovinces    = { 196 197 198 199 200 201 202 203 204 205 206 207 208 209 210 211 212 213 214 215 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1910 1920 1930 1940 1950 1960 1970 1980 14000 14010 14020 1830 1840 1850 1860 7600 7610 2620 2010 2630 2640 2646 2650 2030 2860 2870 2880 2020 2150 2290 2300 2310 2800 2450 21180 21190 21200 2810 2820 2510 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 5600 5610 5620 5630 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5700 5710 5010 5800 5080 5090 5560 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 3
    freedom           = 8
    free_market       = 9
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 120001 } # Edouard Benes
  headofgovernment       = { type = 9 id = 120002 } # Milan Hodza
  foreignminister        = { type = 9 id = 120003 } # Edouard Benes
  armamentminister       = { type = 9 id = 120004 } # Josef Kalfus
  ministerofsecurity     = { type = 9 id = 120005 } # Ivan Derer
  ministerofintelligence = { type = 9 id = 120006 } # Frantisek Machník
  chiefofstaff           = { type = 9 id = 120007 } # Frantisek Machník
  chiefofarmy            = { type = 9 id = 120008 } # Ludvik Krejci
  chiefofnavy            = { type = 9 id = 120009 } # Antonin Hasal
  chiefofair             = { type = 9 id = 120010 } # Emil Janouska

  landunit = {
    id       = { type = 23000 id = 1 }
    name     = "Generální Rezervy"
    location = 201
    division = {
      id             = { type = 26000 id = 2 }
      name           = "1. Horská Brigada"
      type           = bergsjaeger
      model          = 7
      strength       = 30
    }
    division = {
      id             = { type = 26000 id = 3 }
      name           = "2. Horská Brigada"
      type           = bergsjaeger
      model          = 7
      strength       = 30
    }
    division = {
      id             = { type = 26000 id = 4 }
      name           = "13. Divize"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26000 id = 5 }
      name           = "15. Divize"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26000 id = 6 }
      name           = "18. Divize"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26000 id = 7 }
      name           = "21. Divize"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26000 id = 8 }
      name           = "22. Divize"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 9 }
    name     = "I. Armáda"
    location = 207
    division = {
      id             = { type = 26000 id = 10 }
      name           = "1. Rychlá Brigada"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 40
    }
    division = {
      id             = { type = 26000 id = 11 }
      name           = "2. Divize"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 12 }
      name           = "1. Divize"
      type           = garrison
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 13 }
      name           = "3. Divize"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 14 }
      name           = "4. Divize"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 15 }
      name           = "5. Divize"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 16 }
      name           = "16. Divize"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26000 id = 17 }
      name           = "17. Divize"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 22 }
    name     = "II. Armáda"
    location = 196
    division = {
      id             = { type = 26000 id = 23 }
      name           = "7. Divize"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 24 }
      name           = "8. Divize"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 25 }
      name           = "6. Divize"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 26 }
      name           = "2. Rychlá Brigada"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 26000 id = 29 }
    name     = "III. Armáda"
    location = 208
    division = {
      id             = { type = 26000 id = 30 }
      name           = "10. Divize"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 31 }
      name           = "9. Divize"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 32 }
      name           = "3. Rychlá Brigada"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 26000 id = 37 }
    name     = "IV. Armáda"
    location = 209
    division = {
      id             = { type = 26000 id = 38 }
      name           = "4. Rychlá Brigada"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 4
      strength       = 40
    }
    division = {
      id             = { type = 26000 id = 39 }
      name           = "12. Divize"
      type           = infantry
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 1040 }
      name           = "11. Divize"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 80
    }
    division = {
      id             = { type = 26000 id = 41 }
      name           = "19. Divize"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26000 id = 42 }
      name           = "20. Divize"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 45 }
    name     = "32. Hranicní Oblast"
    location = 205
    division = {
      id             = { type = 26000 id = 18 }
      name           = "32. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 46 }
    name     = "33. Hranicní Oblast"
    location = 200
    division = {
      id             = { type = 26000 id = 19 }
      name           = "33. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 47 }
    name     = "34. Hranicní Oblast"
    location = 200
    division = {
      id             = { type = 26000 id = 20 }
      name           = "34. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 48 }
    name     = "35. Hranicní Oblast"
    location = 198
    division = {
      id             = { type = 26000 id = 21 }
      name           = "35. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 49 }
    name     = "36. Hranicní Oblast"
    location = 206
    division = {
      id             = { type = 26000 id = 27 }
      name           = "36. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 50 }
    name     = "37. Hranicní Oblast"
    location = 206
    division = {
      id             = { type = 26000 id = 28 }
      name           = "37. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 51 }
    name     = "39. Hranicní Oblast"
    location = 208
    division = {
      id             = { type = 26000 id = 33 }
      name           = "39. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 52 }
    name     = "40. Hranicní Oblast"
    location = 210
    division = {
      id             = { type = 26000 id = 34 }
      name           = "40. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 53 }
    name     = "41. Hranicní Oblast"
    location = 209
    division = {
      id             = { type = 26000 id = 35 }
      name           = "41. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 54 }
    name     = "42. Hranicní Oblast"
    location = 215
    division = {
      id             = { type = 26000 id = 36 }
      name           = "42. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 55 }
    name     = "31. Hranicní Oblast"
    location = 197
    division = {
      id             = { type = 26000 id = 43 }
      name           = "31. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 26000 id = 56 }
    name     = "38. Hranicní Oblast"
    location = 204
    division = {
      id             = { type = 26000 id = 44 }
      name           = "38. Hranicní Oblast"
      type           = garrison
      model          = 3
      strength       = 5
    }
  }
}
