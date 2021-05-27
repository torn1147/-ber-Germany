##############################
# Country definition for AUS #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = AUS
  regular_id         = GER
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  intrinsic_gov_type = social_liberal
  capital            = 195 # Vienna
  manpower           = 23
  # Resource Reserves
  energy         = 1140
  metal          = 570
  rare_materials = 285
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 75 }
    relation = { tag = FIN value = 55 }
    relation = { tag = FRA value = -10 }
    relation = { tag = GER value = 10 }
    relation = {
      tag        = HUN
      value      = 100
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = IRE value = 10 }
    relation = { tag = ITA value = 125 }
    relation = { tag = SCH value = 50 }
  }
  SpyInfo                = { country = "AUS" NumberOfSpies = 6 }

  nationalprovinces      = { 186 187 188 189 190 191 192 193 194 195 401 402 }
  ownedprovinces         = { 186 187 188 189 190 191 192 193 194 195 }
  controlledprovinces    = { 186 187 188 189 190 191 192 193 194 195 }
  claimedprovinces       = { 197 279 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 1830 1840 1850 1860 5600 5610 5620 5630 2860 2870 2880 2020 7600 7610 2620 2010 2630 2640 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 1970 1980 14000 14010 14020 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5090 5310 54010 54020 54030 5316 5326 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    freedom           = 7
    free_market       = 8
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 115001 } # Wilhelm Miklas
  headofgovernment       = { type = 9 id = 115002 } # Kurt Schuschnigg
  foreignminister        = { type = 9 id = 115003 } # Egon Berger-Waldenegg
  armamentminister       = { type = 9 id = 115004 } # Julius Raab
  ministerofsecurity     = { type = 9 id = 115005 } # Eduard Baar-Baarenfels
  ministerofintelligence = { type = 9 id = 115006 } # Wilhelm Gebauer
  chiefofstaff           = { type = 9 id = 115007 } # Alfred von Jansa
  chiefofarmy            = { type = 9 id = 115008 } # Wilhelm Zehner
  chiefofnavy            = { type = 9 id = 115009 } # Paul von Hegedüs
  chiefofair             = { type = 9 id = 115010 } # Alexander Löhr

  landunit = {
    id       = { type = 14000 id = 9000 }
    name     = "Oberkommando des Bundesheeres"
    location = 195
    division = {
      id             = { type = 14000 id = 9001 }
      name           = "Schnelle Division"
      type           = cavalry
      model          = 7
      extra          = armored_car
      brigade_model  = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9002 }
      name           = "1. Division"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 35
    }
    division = {
      id             = { type = 14000 id = 9003 }
      name           = "2. Division"
      type           = infantry
      model          = 7
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 14000 id = 9004 }
    name     = "3. 'Niederösterreich' Division"
    location = 193
    division = {
      id             = { type = 14000 id = 9005 }
      name           = "3. Division"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 14000 id = 9006 }
    name     = "4. 'Oberösterreich' Division"
    location = 187
    division = {
      id             = { type = 14000 id = 9007 }
      name           = "4. Division"
      type           = infantry
      model          = 7
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 14000 id = 9008 }
    name     = "5. 'Steiermark' Division"
    location = 190
    division = {
      id             = { type = 14000 id = 9009 }
      name           = "5. Division"
      type           = bergsjaeger
      model          = 7
      extra          = anti_air
      brigade_model  = 1
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 14000 id = 9010 }
    name     = "6. 'Salzburg, Nordtirol und Vorarlberg' Division"
    location = 189
    division = {
      id             = { type = 14000 id = 9011 }
      name           = "6. Division"
      type           = bergsjaeger
      model          = 7
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14000 id = 9012 }
    name     = "7. 'Kärnten und Osttirol' Division"
    location = 191
    division = {
      id             = { type = 14000 id = 9013 }
      name           = "7. Division"
      type           = bergsjaeger
      model          = 7
      strength       = 25
    }
  }
}
