##############################
# Country definition for COL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = COL
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 1991 # Santa Fe de Bogota
  manpower           = 0
  # Resource Reserves
  energy         = 660
  metal          = 330
  rare_materials = 165
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = 1 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = -20 }
    relation = { tag = PAN value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = -35 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  SpyInfo                = { country = "COL" NumberOfSpies = 3 }

  nationalprovinces      = { 1756 1985 1986 1987 1990 1991 1994 2009 }
  ownedprovinces         = { 1756 1985 1986 1987 1990 1991 1994 2009 }
  controlledprovinces    = { 1756 1985 1986 1987 1990 1991 1994 2009 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 2620 2010 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5080 1830 1840 1850 1860 3010 3020 3030 3040 3720 3730 3736 3740 3750 3900 3810 5600 5610 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 8010 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    freedom           = 7
    free_market       = 8
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 175001 } # Alfonso López Pumarejo
  headofgovernment       = { type = 9 id = 175002 } # Alfonso López Pumarejo
  foreignminister        = { type = 9 id = 175003 } # Ernesto Gonzalez Piedrahita
  armamentminister       = { type = 9 id = 175004 } # Benito Hernandez
  ministerofsecurity     = { type = 9 id = 175005 } # Jorge Roa Martinez
  ministerofintelligence = { type = 9 id = 175006 } # Fernando Londono y Londono
  chiefofstaff           = { type = 9 id = 175007 } # Jorge Mercado Sanchez
  chiefofarmy            = { type = 9 id = 175008 } # Eduardo Poirier Escobar
  chiefofnavy            = { type = 9 id = 175009 } # Luis Acevedo
  chiefofair             = { type = 9 id = 175010 } # German Olano

  landunit = {
    id       = { type = 23000 id = 40 }
    name     = "Ejercito de Colombia"
    location = 1991
    division = {
      id             = { type = 23000 id = 4000 }
      name           = "1a División de Infantería"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 1
      strength       = 40
    }
    division = {
      id             = { type = 23000 id = 4001 }
      name           = "2a División de Infantería"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 40
    }
    division = {
      id             = { type = 23000 id = 4002 }
      name           = "3a División de Infantería"
      type           = infantry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 23000 id = 4003 }
      name           = "1a Brigada de Caballería 'Montería'"
      type           = cavalry
      model          = 6
      strength       = 15
    }
  }

  navalunit = {
    id       = { type = 23000 id = 4004 }
    name     = "Armada de Colombia"
    location = 1990
    base     = 1990
    division = {
      id             = { type = 23000 id = 4005 }
      name           = "1a Flotilla de Torpedillos"
      type           = destroyer
      model          = 1
    }
  }
}
