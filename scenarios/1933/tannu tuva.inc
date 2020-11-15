##############################
# Country definition for TAN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = TAN
  puppet             = SOV
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1119 # Kyzyl
  manpower           = 0
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = MON value = 200 }
    relation = { tag = SIK value = 125 }
    relation = { tag = SOV value = 200 }
    relation = { tag = TAN value = 50 }
  }
  SpyInfo                = { country = "TAN" NumberOfSpies = 1 }

  nationalprovinces      = { 1119 }
  ownedprovinces         = { 1119 }
  controlledprovinces    = { 1119 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 435001 } # Salchak Toka
  headofgovernment       = { type = 9 id = 435002 } # Kemchik-ool
  foreignminister        = { type = 9 id = 435003 } # Kemchik-ool
  armamentminister       = { type = 9 id = 435004 } # S.T. Perilenko
  ministerofsecurity     = { type = 9 id = 435005 } # A.D. Kravchenko
  ministerofintelligence = { type = 9 id = 435006 } # Valerie Mejlauk
  chiefofstaff           = { type = 9 id = 435007 } # Tanchak Shoma
  chiefofarmy            = { type = 9 id = 435008 } # Tanchak Shoma
  chiefofnavy            = { type = 9 id = 435009 } # V.I. Kulikovskij
  chiefofair             = { type = 9 id = 435010 } # I.P. Rugalinskij

  landunit = {
    id       = { type = 31600 id = 1 }
    name     = "1ya Tunska Armiya"
    location = 1119
    division = {
      id             = { type = 31600 id = 2 }
      name           = "1. Tuvanska Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 20
    }
  }
}
