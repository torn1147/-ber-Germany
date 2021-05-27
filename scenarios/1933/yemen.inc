##############################
# Country definition for YEM #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = YEM
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1050 # Sanaa
  manpower           = 1
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
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "YEM" NumberOfSpies = 1 }

  nationalprovinces      = { 1050 1051 1053 }
  ownedprovinces         = { 1050 }
  controlledprovinces    = { 1050 }

  techapps               = { 4500 4510 4520 4530 2860 2290 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 7600 7610 5700 5600 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 445001 } # Yahya Muhammad Hamid ed-Din
  headofgovernment       = { type = 9 id = 445002 } # Yahya Muhammad Hamid ed-Din
  foreignminister        = { type = 9 id = 445003 } # Yahya Muhammad Hamid ed-Din
  armamentminister       = { type = 9 id = 445004 } # Ahmad al Hamid
  ministerofsecurity     = { type = 9 id = 445005 } # Yahya Muhammad Hamid ed-Din
  ministerofintelligence = { type = 9 id = 445006 } # Ahmad al Hamid
  chiefofstaff           = { type = 9 id = 445007 } # Yahya Muhammad Hamid ed-Din
  chiefofarmy            = { type = 9 id = 445008 } # Ahmad al Hamid
  chiefofnavy            = { type = 9 id = 445009 } # Mansur al Badr
  chiefofair             = { type = 9 id = 445010 } # Mansur al Badr

  landunit = {
    id       = { type = 16800 id = 1 }
    name     = "Royal Yemenite Army"
    location = 1050
    division = {
      id             = { type = 16800 id = 2 }
      name           = "Royal Division"
      type           = cavalry
      model          = 7
      strength       = 60
    }
  }
}
