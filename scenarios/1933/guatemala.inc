##############################
# Country definition for GUA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = GUA
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 2088 # Ciudad de Guatemala
  manpower           = 0
  # Resource Reserves
  energy         = 600
  metal          = 300
  rare_materials = 150
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
    relation = { tag = ENG value = 50 }
  }
  SpyInfo                = { country = "GUA" NumberOfSpies = 2 }

  nationalprovinces      = { 2086 2087 2088 }
  ownedprovinces         = { 2087 2088 }
  controlledprovinces    = { 2087 2088 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5080 5600 5610 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 305001 } # Jorge Ubico Castaneda
  headofgovernment       = { type = 9 id = 305002 } # Jorge Ubico Castaneda
  foreignminister        = { type = 9 id = 305003 } # Alfredo Skinner Klee
  armamentminister       = { type = 9 id = 305004 } # Guillermo Flores Arendano
  ministerofsecurity     = { type = 9 id = 305005 } # T. Castro Dominguez
  ministerofintelligence = { type = 9 id = 305006 } # Eduardo Villagran Ariza
  chiefofstaff           = { type = 9 id = 305007 } # Federico Ponce Vaides
  chiefofarmy            = { type = 9 id = 305008 } # Jorge Ubico Castaneda
  chiefofnavy            = { type = 9 id = 305009 } # Tomas Mendoza Urribe
  chiefofair             = { type = 9 id = 305010 } # R. Buenaventure Pineda

  landunit = {
    id       = { type = 16500 id = 65 }
    name     = "Ejercito de Guatemala"
    location = 2088
    division = {
      id             = { type = 16500 id = 6500 }
      name           = "1a Brig. de Infant. 'Adolfo V. Hall'"
      type           = infantry
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      strength       = 55
    }
  }
}
