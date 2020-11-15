##############################
# Country definition for MON #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = MON
  puppet             = SOV
  control            = SOV
  name               = MON1924
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1124 # Ulaanbaatar
  manpower           = 0
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 200
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = CHC value = 25 }
    relation = { tag = MON value = 150 }
    relation = { tag = TAN value = 200 }
  }
  SpyInfo                = { country = "MON" NumberOfSpies = 3 }

  nationalprovinces      = { 1120 1121 1122 1123 1124 1125 }
  ownedprovinces         = { 1120 1121 1122 1123 1124 1125 }
  controlledprovinces    = { 1120 1121 1122 1123 1124 1125 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1070 1910 1920 1930 1940 1950 1960 1970 13060 13070 13080 1310 1320 1330 1340 5700 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 7
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 300001 } # Agdanbuugiyn Amar
  headofgovernment       = { type = 9 id = 300002 } # Dogijavyn Luvsanshara
  foreignminister        = { type = 9 id = 300003 } # Peljidiyn Genden
  armamentminister       = { type = 9 id = 300004 } # Jambyn Lhümbe
  ministerofsecurity     = { type = 9 id = 300005 } # Jamtsangryin Damdinsüren
  ministerofintelligence = { type = 9 id = 300006 } # Horloogiyn Choybalsan
  chiefofstaff           = { type = 9 id = 300007 } # Chimid
  chiefofarmy            = { type = 9 id = 300008 } # Chimid
  chiefofnavy            = { type = 9 id = 300009 } # V.G. Pyrselov
  chiefofair             = { type = 9 id = 300010 } # Ulanhu

  landunit = {
    id       = { type = 30500 id = 1 }
    name     = "Armija Mongol Nayramdakh"
    location = 1124
    division = {
      id             = { type = 30500 id = 3 }
      name           = "2. Nayramdakh Kavaleriyskaya Div."
      type           = cavalry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 30500 id = 4 }
      name           = "3. Nayramdakh Opolcheniya Div."
      type           = militia
      model          = 3
      strength       = 10
    }
    division = {
      id             = { type = 30500 id = 5 }
      name           = "4. Nayramdakh Opolcheniya Div."
      type           = militia
      model          = 3
      strength       = 10
    }
  }
}
