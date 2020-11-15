##############################
# Country definition for NEP #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = NEP
  puppet             = ENG
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1457 # Kathmandu
  manpower           = 1
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "NEP" NumberOfSpies = 2 }

  nationalprovinces      = { 1457 }
  ownedprovinces         = { 1457 }
  controlledprovinces    = { 1457 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5700 5600 1830 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 6
    free_market       = 5
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 395001 } # Tribhuvana
  headofgovernment       = { type = 9 id = 395002 } # Juddha Rana
  foreignminister        = { type = 9 id = 395003 } # Keshar Rana
  armamentminister       = { type = 9 id = 395004 } # Mohan Rana
  ministerofsecurity     = { type = 9 id = 395005 } # Juddha Rana
  ministerofintelligence = { type = 9 id = 395006 } # Baber Rana
  chiefofstaff           = { type = 9 id = 395007 } # Juddha Rana
  chiefofarmy            = { type = 9 id = 395008 } # Padma Rana
  chiefofnavy            = { type = 9 id = 395009 } # Rudra Rana
  chiefofair             = { type = 9 id = 395010 } # Kiran Rana

  landunit = {
    id       = { type = 31500 id = 1 }
    name     = "Royal Nepalese Army"
    location = 1457
    division = {
      id             = { type = 31500 id = 2 }
      name           = "Royal Nepalese Lifeguard Div."
      type           = infantry
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 31500 id = 3 }
      name           = "Royal Household Division"
      type           = infantry
      model          = 7
      strength       = 50
    }
  }
}
