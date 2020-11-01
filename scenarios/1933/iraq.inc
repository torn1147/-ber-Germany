##############################
# Country definition for IRQ #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = IRQ
  puppet             = ENG
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 1034 # Baghdad
  manpower           = 65
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 1000
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = AST value = 100 }
    relation = { tag = BHU value = 100 }
    relation = { tag = CAN value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = 25 }
    relation = { tag = ITA value = 25 }
    relation = { tag = NEP value = 100 }
    relation = { tag = NZL value = 100 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 125 }
    relation = { tag = SAF value = 100 }
    relation = { tag = SAU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = YEM value = 125 }
  }
  SpyInfo                = { country = "IRQ" NumberOfSpies = 3 }

  nationalprovinces      = { 1027 1028 1029 1030 1031 1032 1033 1034 1035 1036 1037 1041 1089 }
  ownedprovinces         = { 1027 1028 1029 1030 1031 1032 1033 1034 1035 1036 1037 }
  controlledprovinces    = { 1027 1028 1029 1030 1031 1032 1033 1034 1035 1036 1037 }

  techapps               = { 4500 4510 4520 4530 2860 2870 2880 2020 2290 2300 2310 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 13060 13070 13080 1310 1320 1330 1340 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 4
    free_market       = 6
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 365001 } # Ghazi I ibn Faysal
  headofgovernment       = { type = 9 id = 365002 } # Yasin Pasha al Hashimi
  foreignminister        = { type = 9 id = 365003 } # Nuri as Said
  armamentminister       = { type = 9 id = 365004 } # Ghazi I ibn Faysal
  ministerofsecurity     = { type = 9 id = 365005 } # Ali Abn Hussein
  ministerofintelligence = { type = 9 id = 365006 } # Yasin Pasha al Hashimi
  chiefofstaff           = { type = 9 id = 365007 } # Bakr Sidqi
  chiefofarmy            = { type = 9 id = 365008 } # Frederic G.Peake
  chiefofnavy            = { type = 9 id = 365009 } # A.R.H. Nye
  chiefofair             = { type = 9 id = 365010 } # Ali ben Jawad

  landunit = {
    id       = { type = 22500 id = 3 }
    name     = "Royal Iraqi Army"
    location = 1035
    division = {
      id             = { type = 22500 id = 4 }
      name           = "1. Iraqi Infantry Division"
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 5 }
      name           = "2. Iraqi Infantry Division"
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 6 }
      name           = "3. Iraqi Infantry Division"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 30
    }
    division = {
      id             = { type = 22500 id = 7 }
      name           = "4. Iraqi Infantry Division"
      type           = infantry
      model          = 7
      strength       = 30
    }
  }

  airunit = { 
    id       = { type = 22500 id = 8 }
    name     = "Royal Army Air Force"
    location = 1035
    base     = 1035
    division = {
      id             = { type = 22500 id = 9 }
      name           = "1. RIAF Bomber Group"
      type           = tactical_bomber
      model          = 4
      strength       = 30
    }
    division = {
      id             = { type = 22500 id = 2 }
      name           = "1. RIAF Fighter Group"
      type           = interceptor
      model          = 6
      strength       = 90
    }
  }
}
