##############################
# Country definition for HAI #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = HAI
  capital            = 1781 # Port-au-Prince
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
    relation = { tag = CUB value = 30 }
    relation = { tag = DOM value = -30 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "HAI" NumberOfSpies = 1 }

  nationalprovinces      = { 1780 1781 }
  ownedprovinces         = { 1781 }
  controlledprovinces    = { 1781 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5700 5600 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 2
    free_market       = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 350001 } # Stenio Vincent
  headofgovernment       = { type = 9 id = 350002 } # Stenio Vincent
  foreignminister        = { type = 9 id = 350003 } # Albert Blanchet
  armamentminister       = { type = 9 id = 350004 } # Élie Lescot
  ministerofsecurity     = { type = 9 id = 350005 } # Luis Dabtes Bellegarde
  ministerofintelligence = { type = 9 id = 350006 } # Sebastien de Arrondé
  chiefofstaff           = { type = 9 id = 350007 } # Élie Lescot
  chiefofarmy            = { type = 9 id = 350008 } # Élie Lescot
  chiefofnavy            = { type = 9 id = 350009 } # Alfred Nemours
  chiefofair             = { type = 9 id = 350010 } # G.Edouard Roy

  landunit = {
    id       = { type = 17500 id = 53 }
    name     = "La Grandé Armée du Haiti"
    location = 1781
    division = {
      id             = { type = 17500 id = 5301 }
      name           = "1ère Brigade d'Infanterie Haitien"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
}
