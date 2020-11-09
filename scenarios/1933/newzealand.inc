##############################
# Country definition for NZL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = NZL
  puppet             = ENG
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 1721 # Wellington
  manpower           = 5
  # Resource Reserves
  energy         = 420
  metal          = 210
  rare_materials = 105
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100
  escorts        = 15

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 25 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "NZL" NumberOfSpies = 5 }

  nationalprovinces      = { 1718 1719 1720 1721 1722 1723 }
  ownedprovinces         = { 1718 1719 1720 1721 1722 1723 1731 1732 1741 1742 1748 }
  controlledprovinces    = { 1718 1719 1720 1721 1722 1723 1731 1732 1741 1742 1748 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1910 1920 1930 1940 1950 1960 1970 1980 14000 14010 14020 1830 1840 1850 1860 7600 7610 2620 2010 2630 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4300 4310 4320 4330 4800 4810 4820 4700 4710 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5090 5310 54010 54020 54030 5316 5326 3720 3730 3736 3740 3750 3900 5600 5610 5620 5630 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8600 8900 8910 8920 8930 8940 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9140 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 10
    free_market       = 8
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 215001 } # George de Vere Viscount Galway
  headofgovernment       = { type = 9 id = 215002 } # Michael Joseph Savage
  foreignminister        = { type = 9 id = 215003 } # Michael Joseph Savage
  armamentminister       = { type = 9 id = 215004 } # Walter Nash
  ministerofsecurity     = { type = 9 id = 215005 } # William Parry
  ministerofintelligence = { type = 9 id = 215006 } # Kenneth Folkes
  chiefofstaff           = { type = 9 id = 215007 } # William Sinclair-Burgess
  chiefofarmy            = { type = 9 id = 215008 } # William Sinclair-Burgess
  chiefofnavy            = { type = 9 id = 215009 } # E.R. Drummond
  chiefofair             = { type = 9 id = 215010 } # Ralph Alexander Cochrane

  landunit = {
    id       = { type = 10600 id = 1 }
    name     = "New Zealand Military Forces"
    location = 1721
    division = {
      id             = { type = 10600 id = 2 }
      name           = "New Zealand Division"
      type           = infantry
      model          = 7
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 10600 id = 12 }
    name     = "HM New Zealand Navy"
    location = 1721
    base     = 1721
    division = {
      id             = { type = 10600 id = 15 }
      name           = "1st Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10600 id = 22 }
      name           = "4th Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10600 id = 23 }
      name           = "5th Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10600 id = 2299 }
      name           = "1st Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 10600 id = 2300 }
      name           = "2nd Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 10600 id = 2301 }
      name           = "3rd Destroyer Flotilla"
      type           = destroyer
    }
  }
  navalunit = {
    id       = { type = 10600 id = 2297 }
    name     = "RNZN Fleet 1"
    location = 1721
    base     = 1721
    division = {
      id             = { type = 10600 id = 2302 }
      name           = "4th Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 10600 id = 2303 }
      name           = "5th Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 10600 id = 20 }
      name           = "2nd Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10600 id = 21 }
      name           = "3rd Transport Flotilla"
      type           = transport
      model          = 1
    }
  }
}
