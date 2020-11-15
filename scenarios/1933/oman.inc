##############################
# Country definition for OMN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = OMN
  puppet             = ENG
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1052 # Masqat
  manpower           = 0
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 200
  supplies       = 200
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = 50 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "OMN" NumberOfSpies = 1 }

  nationalprovinces      = { 840 1043 1052 }
  ownedprovinces         = { 1043 1052 }
  controlledprovinces    = { 1043 1052 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 5700 1910 1920 1930 1940 1950 1960 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 400001 } # Said ibn Timur
  headofgovernment       = { type = 9 id = 400002 } # Said ibn Timur
  foreignminister        = { type = 9 id = 400003 } # Said ibn Timur
  armamentminister       = { type = 9 id = 400004 } # James E. Drummond
  ministerofsecurity     = { type = 9 id = 400005 } # Henry L.W.L. Burnham
  ministerofintelligence = { type = 9 id = 400006 } # Geoffrey Dennis
  chiefofstaff           = { type = 9 id = 400007 } # Said ibn Timur
  chiefofarmy            = { type = 9 id = 400008 } # Said ibn Timur
  chiefofnavy            = { type = 9 id = 400009 } # Geoffrey Claydon
  chiefofair             = { type = 9 id = 400010 } # Abdallah ibn Timur

  landunit = {
    id       = { type = 11114 id = 1 }
    name     = "Royal Omani Army"
    location = 1052
    division = {
      id             = { type = 11114 id = 2 }
      name           = "Royal Omani Army"
      type           = cavalry
      model          = 7
      strength       = 15
    }
  }
}
