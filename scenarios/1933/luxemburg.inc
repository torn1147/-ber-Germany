##############################
# Country definition for LUX #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = LUX
  ai_settings        = { flags = { MOB1 = yes } }
  capital            = 109 # Luxembourg
  manpower           = 0
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = BEL value = 200 }
    relation = { tag = DEN value = 100 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = -50 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
  }
  SpyInfo                = { country = "LUX" NumberOfSpies = 3 }

  nationalprovinces      = { 109 }
  ownedprovinces         = { 109 }
  controlledprovinces    = { 109 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2800 2450 21180 21190 5700 5710 5010 5020 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 14000 14010 14020 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 9
    free_market       = 8
    professional_army = 1
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 385001 } # Charlotte
  headofgovernment       = { type = 9 id = 385002 } # Joseph Bech
  foreignminister        = { type = 9 id = 385003 } # Joseph Bech
  armamentminister       = { type = 9 id = 385004 } # Pierre Dupong
  ministerofsecurity     = { type = 9 id = 385005 } # Norbert Dumont
  ministerofintelligence = { type = 9 id = 385006 } # Nicholas Marque
  chiefofstaff           = { type = 9 id = 385007 } # Pierre Dupong
  chiefofarmy            = { type = 9 id = 385008 } # Emile Speller
  chiefofnavy            = { type = 9 id = 385009 } # Emile Speller
  chiefofair             = { type = 9 id = 385010 } # Nicholas Diedrich
}
