##############################
# Country definition for COS #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = COS
  ai_settings        = { flags = { MOB1 = yes } }
  capital            = 2081 # San Jose
  manpower           = 0
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "COS" NumberOfSpies = 1 }

  nationalprovinces      = { 2081 2083 }
  ownedprovinces         = { 2081 2083 }
  controlledprovinces    = { 2081 2083 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5020 5800 5080 1830 5600 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 5
    free_market       = 8
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 310001 } # Romualdo Jímenez Oreamuno
  headofgovernment       = { type = 9 id = 310002 } # Leon Cortes Castro
  foreignminister        = { type = 9 id = 310003 } # Raúl Gundían
  armamentminister       = { type = 9 id = 310004 } # Julio Acosta Garcia
  ministerofsecurity     = { type = 9 id = 310005 } # Victor Sanabria Martinéz
  ministerofintelligence = { type = 9 id = 310006 } # Federico Tinoco
  chiefofstaff           = { type = 9 id = 310007 } # Federico Tinoco
  chiefofarmy            = { type = 9 id = 310008 } # Federico Tinoco
  chiefofnavy            = { type = 9 id = 310009 } # Roberto Juarez Camposino
  chiefofair             = { type = 9 id = 310010 } # Don Arnaldo Zamora
}
