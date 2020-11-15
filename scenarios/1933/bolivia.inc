##############################
# Country definition for BOL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BOL
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 2020 # Nuestra Senora de La Paz
  manpower           = 23
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = GER value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
  }
  SpyInfo                = { country = "BOL" NumberOfSpies = 3 }

  nationalprovinces      = { 2002 2019 2020 2021 2024 2046 2063 2064 }
  ownedprovinces         = { 2019 2020 2021 2063 2064 }
  controlledprovinces    = { 2019 2020 2021 2063 2064 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 5600 5610 5620 1830 1840 1850 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5080 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 205001 } # Jose Tejada Sorzano
  headofgovernment       = { type = 9 id = 205002 } # Jose Tejada Sorzano
  foreignminister        = { type = 9 id = 205003 } # José Maria Gutierrez
  armamentminister       = { type = 9 id = 205004 } # Moritz Hochschild
  ministerofsecurity     = { type = 9 id = 205005 } # José Santos Quinteros
  ministerofintelligence = { type = 9 id = 205006 } # Carlos Altamirano
  chiefofstaff           = { type = 9 id = 205007 } # Gualberto Villarroel Lopez
  chiefofarmy            = { type = 9 id = 205008 } # Hans Kundt
  chiefofnavy            = { type = 9 id = 205009 } # Gil Ibarra Juarez
  chiefofair             = { type = 9 id = 205010 } # Hector Bilbao Roja

  landunit = {
    id       = { type = 17000 id = 40 }
    name     = "Ejercito de Bolivia"
    location = 2020
    division = {
      id             = { type = 17000 id = 4000 }
      name           = "1. Brigada de Infantería 'Bolivar'"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 30
    }
    division = {
      id             = { type = 17000 id = 4001 }
      name           = "2. Brigada de Infantería"
      type           = infantry
      model          = 5
      strength       = 30
    }
    division = {
      id             = { type = 17000 id = 4002 }
      name           = "3. Brigada de Infantería"
      type           = infantry
      model          = 5
      strength       = 30
    }
    division = {
      id             = { type = 17000 id = 4003 }
      name           = "1. Brigada de Caballería 'Chaco'"
      type           = cavalry
      model          = 6
      strength       = 20
    }
    division = {
      id             = { type = 17000 id = 4004 }
      name           = "2. Brigada de Caballería"
      type           = cavalry
      model          = 6
      strength       = 20
    }
  }

  airunit = { 
    id       = { type = 12000 id = 4005 }
    name     = "Aviación del Ejército"
    location = 2020
    base     = 2020
    division = {
      id             = { type = 12000 id = 4006 }
      name           = "Grupo Aérea Nro. 1"
      type           = interceptor
      model          = 6
      strength       = 20
    }
  }
}
