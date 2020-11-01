##############################
# Country definition for PER #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = PER
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 1085 # Teheran
  manpower           = 167
  # Resource Reserves
  energy         = 540
  metal          = 270
  rare_materials = 135
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = AFG value = 25 }
    relation = { tag = DEN value = 50 }
    relation = { tag = ENG value = 25 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = SAU value = 100 }
    relation = { tag = SOV value = -20 }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = -50 }
  }
  SpyInfo                = { country = "PER" NumberOfSpies = 5 }

  nationalprovinces      = { 1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095 }
  ownedprovinces         = { 1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095 }
  controlledprovinces    = { 1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 5600 1830 1840 13060 13070 13080 1310 1320 1330 1340 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 150001 } # Reza Pahlavi
  headofgovernment       = { type = 9 id = 150002 } # Mahmud Jam
  foreignminister        = { type = 9 id = 150003 } # Inoyatullah Khan Sami
  armamentminister       = { type = 9 id = 150004 } # Ahmad Khan Nakhjaavan
  ministerofsecurity     = { type = 9 id = 150005 } # Ali Akbar Deiva
  ministerofintelligence = { type = 9 id = 150006 } # Reza Mizani
  chiefofstaff           = { type = 9 id = 150007 } # Reza Pahlavi
  chiefofarmy            = { type = 9 id = 150008 } # Abdolreza Afkhami
  chiefofnavy            = { type = 9 id = 150125 } # Gholamali Bayandor
  chiefofair             = { type = 9 id = 150010 } # Ahmad Khan Nakhjavan

  landunit = {
    id       = { type = 16600 id = 1 }
    name     = "Lasgar Parsi"
    location = 1085
    division = {
      id             = { type = 16600 id = 2 }
      name           = "1. Dastebandi Sarbaze Piyade"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
    }
    division = {
      id             = { type = 16600 id = 3 }
      name           = "1. Dastebandi Savareh"
      type           = cavalry
      model          = 8
    }
  }
}
