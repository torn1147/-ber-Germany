##############################
# Country definition for SAU #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SAU
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 1045 # Riyadh
  manpower           = 3
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = { tag = AST value = 50 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 10 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = -25 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 100 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
    relation = { tag = YEM value = 125 }
  }
  SpyInfo                = { country = "SAU" NumberOfSpies = 4 }

  nationalprovinces      = { 1040 1044 1045 1046 1047 1048 1049 }
  ownedprovinces         = { 1040 1044 1045 1046 1047 1048 1049 }
  controlledprovinces    = { 1040 1044 1045 1046 1047 1048 1049 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 295001 } # Abdul Aziz al Saud
  headofgovernment       = { type = 9 id = 295002 } # Saud al Saud
  foreignminister        = { type = 9 id = 295003 } # Faisal al Saud
  armamentminister       = { type = 9 id = 295004 } # Faisal al Saud
  ministerofsecurity     = { type = 9 id = 295005 } # Khalid al Saud
  ministerofintelligence = { type = 9 id = 295006 } # Khalid al Saud
  chiefofstaff           = { type = 9 id = 295007 } # Saud al Saud
  chiefofarmy            = { type = 9 id = 295008 } # Faisal al Saud
  chiefofnavy            = { type = 9 id = 295009 } # Faisal al Saud
  chiefofair             = { type = 9 id = 295010 } # Faisal Saud

  landunit = {
    id       = { type = 22600 id = 1 }
    name     = "Royal Saudi Army"
    location = 1045
    division = {
      id             = { type = 22600 id = 2 }
      name           = "1. Royal Saudi Inf.Div."
      type           = infantry
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 22600 id = 3 }
      name           = "Royal Lifeguard"
      type           = infantry
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 22600 id = 4 }
      name           = "Royal Saudi Cav. 'Medina'"
      type           = cavalry
      model          = 6
      strength       = 100
    }
  }
}
