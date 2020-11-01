##############################
# Country definition for PAN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = PAN
  ai_settings        = { flags = { MOB1 = yes } }
  capital            = 2078 # Ciudad de Panama
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
    relation = { tag = USA value = 175 }
    relation = { tag = COL value = 50 }
  }
  SpyInfo                = { country = "PAN" NumberOfSpies = 2 }

  nationalprovinces      = { 889 2077 2078 }
  ownedprovinces         = { 2077 2078 }
  controlledprovinces    = { 2077 2078 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5600 5700 5710 5010 1830 1840 5800 5080 5090 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 1
    defense_lobby     = 4
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 405001 } # Harmodio Arías de la Madrid
  headofgovernment       = { type = 9 id = 405002 } # Harmodio Arías de la Madrid
  foreignminister        = { type = 9 id = 405003 } # Narciso Garay Díaz
  armamentminister       = { type = 9 id = 405004 } # Daniel C. Pinzon
  ministerofsecurity     = { type = 9 id = 405005 } # Ignacio E. Mendoza
  ministerofintelligence = { type = 9 id = 405006 } # Ezequeil Fernandez Jaen
  chiefofstaff           = { type = 9 id = 405007 } # Juan Remón
  chiefofarmy            = { type = 9 id = 405008 } # Bolivar Villarino
  chiefofnavy            = { type = 9 id = 405009 } # Juan A. Hernandez
  chiefofair             = { type = 9 id = 405010 } # Juan Remón
}
