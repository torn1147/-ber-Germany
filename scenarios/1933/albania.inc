##############################
# Country definition for ALB #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ALB
  puppet             = ITA
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 359 # Tirana
  manpower           = -20
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ITA value = 100 }
  }
  SpyInfo                = { country = "ALB" NumberOfSpies = 3 }

  nationalprovinces      = { 329 334 359 360 361 362 }
  ownedprovinces         = { 359 360 361 362 }
  controlledprovinces    = { 359 360 361 362 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1910 1920 1930 1940 1950 1960 2800 2450 21180 21190 2810 2820 2510 5810 5800 5080 5600 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 7
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 285001 } # Zog I
  headofgovernment       = { type = 9 id = 285002 } # Midhat Frashëri
  foreignminister        = { type = 9 id = 285003 } # Fuat Aslam
  armamentminister       = { type = 9 id = 285004 } # Ruok Geraj
  ministerofsecurity     = { type = 9 id = 285005 } # Jocelyn Percy
  ministerofintelligence = { type = 9 id = 285006 } # Zog I
  chiefofstaff           = { type = 9 id = 285007 } # Qemal Komani
  chiefofarmy            = { type = 9 id = 285008 } # Stefkhi Shatun
  chiefofnavy            = { type = 9 id = 285009 } # Quamar Pakazi
  chiefofair             = { type = 9 id = 285010 } # Jocelyn Percy
}
