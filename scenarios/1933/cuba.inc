##############################
# Country definition for CUB #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CUB
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1776 # Havana
  manpower           = 0
  # Resource Reserves
  energy         = 480
  metal          = 240
  rare_materials = 120
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = DOM value = 50 }
    relation = { tag = ENG value = 30 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 }
  }
  SpyInfo                = { country = "CUB" NumberOfSpies = 2 }

  nationalprovinces      = { 1775 1776 1777 1778 1779 }
  ownedprovinces         = { 1775 1776 1777 1779 }
  controlledprovinces    = { 1775 1776 1777 1779 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5080 5600 5610 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    freedom           = 5
    free_market       = 8
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 85001 } # José Barnet y Vinageras
  headofgovernment       = { type = 9 id = 85002 } # Miguel Gómez y Arias
  foreignminister        = { type = 9 id = 85003 } # José Barnet y Vinageras
  armamentminister       = { type = 9 id = 85004 } # Carlos Prio
  ministerofsecurity     = { type = 9 id = 85005 } # Sergio Carbo
  ministerofintelligence = { type = 9 id = 85006 } # Manuel Ferrara
  chiefofstaff           = { type = 9 id = 85007 } # Julio Sanguily
  chiefofarmy            = { type = 9 id = 85008 } # Salvador Castaneda Castro
  chiefofnavy            = { type = 9 id = 85009 } # Rodrigo A. Fuentes
  chiefofair             = { type = 9 id = 85010 } # Domingo R. del Toro

  landunit = {
    id       = { type = 26000 id = 40 }
    name     = "Ejercito de Cuba"
    location = 1776
    division = {
      id             = { type = 26000 id = 4000 }
      name           = "1a Brigada de Ejercito"
      type           = infantry
      model          = 6
      strength       = 35
    }
    division = {
      id             = { type = 26000 id = 4001 }
      name           = "1a Brigada de Caballería 'Floridita'"
      type           = cavalry
      model          = 6
      strength       = 35
    }
  }
}
