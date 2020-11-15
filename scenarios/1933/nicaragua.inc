##############################
# Country definition for NIC #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = NIC
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 2080 # Managua
  manpower           = 0
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "NIC" NumberOfSpies = 2 }

  nationalprovinces      = { 2080 2082 }
  ownedprovinces         = { 2080 2082 }
  controlledprovinces    = { 2080 2082 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5080 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 5600 5610 1830 1840 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 315001 } # Juan Bautista Sacasa
  headofgovernment       = { type = 9 id = 315002 } # Julían Irias Navarro
  foreignminister        = { type = 9 id = 315003 } # Leonardo Argüello Vargas
  armamentminister       = { type = 9 id = 315004 } # Anastacio G. Somoza
  ministerofsecurity     = { type = 9 id = 315005 } # Alcacio Trelles Mendoza
  ministerofintelligence = { type = 9 id = 315006 } # Leonardo Argüello Vargas
  chiefofstaff           = { type = 9 id = 315007 } # Anastacio G. Somoza
  chiefofarmy            = { type = 9 id = 315008 } # Augusto Caraval Antonio
  chiefofnavy            = { type = 9 id = 315009 } # Gustavo Flores Mendienta
  chiefofair             = { type = 9 id = 315010 } # Guillermo R. Cuadra

  landunit = {
    id       = { type = 11600 id = 45 }
    name     = "Ejercito de Nicaragua"
    location = 2080
    division = {
      id             = { type = 11600 id = 4500 }
      name           = "Guardia de Presidente"
      type           = infantry
      model          = 6
      strength       = 20
    }
  }
}
