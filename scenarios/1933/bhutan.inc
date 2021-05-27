##############################
# Country definition for BHU #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BHU
  puppet             = ENG
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1456 # Punakha
  manpower           = 0
  # Resource Reserves
  energy         = 180
  metal          = 90
  rare_materials = 45
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "BHU" NumberOfSpies = 1 }

  nationalprovinces      = { 1456 }
  ownedprovinces         = { 1456 }
  controlledprovinces    = { 1456 }

  techapps               = { 4500 4510 4520 4530 2860 2290 1910 1920 1930 1940 1950 1960 7600 7610 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 5700 5600 1830 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 9
    free_market       = 8
    professional_army = 2
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 330001 } # Jigme Wangchuk
  headofgovernment       = { type = 9 id = 330002 } # Sonam Tobgay Dorji
  foreignminister        = { type = 9 id = 330003 } # Sonam Tobgay Dorji
  armamentminister       = { type = 9 id = 330004 } # Ahmad Akhaz
  ministerofsecurity     = { type = 9 id = 330005 } # Mang-pos Bhur-ba'i Rgyalpo
  ministerofintelligence = { type = 9 id = 330006 } # Reginald B. Stevens
  chiefofstaff           = { type = 9 id = 330007 } # Namgyal Bahadur
  chiefofarmy            = { type = 9 id = 330008 } # Philip Toozey
  chiefofnavy            = { type = 9 id = 330009 } # Tommy Gould
  chiefofair             = { type = 9 id = 330010 } # Nicky Barr

  landunit = {
    id       = { type = 16000 id = 1 }
    name     = "Royal Bhutanese Army"
    location = 1456
    division = {
      id             = { type = 16000 id = 2 }
      name           = "Household Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 16000 id = 3 }
      name           = "Royal Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
}
