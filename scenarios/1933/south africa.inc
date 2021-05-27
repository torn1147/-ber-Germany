##############################
# Country definition for SAF #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SAF
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 876 # Johannesburg
  manpower           = 51
  # Resource Reserves
  energy         = 720
  metal          = 360
  rare_materials = 180
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 35 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 80 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "SAF" NumberOfSpies = 5 }

  nationalprovinces      = { 872 873 875 876 878 879 880 881 882 883 884 885 886 }
  ownedprovinces         = { 872 873 875 876 878 879 880 881 882 883 884 885 886 }
  controlledprovinces    = { 872 873 875 876 878 879 880 881 882 883 884 885 886 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 2860 2870 2880 2020 1830 1840 1850 7600 7610 2620 2010 2630 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 5700 5710 5010 5020 5810 5820 5050 5830 5800 5080 5090 5310 54010 54020 54030 5316 5326 5600 5610 5620 3810 14000 14010 14020 1910 1920 1930 1940 1950 1960 1970 3010 3020 3030 3040 3720 3730 3736 3740 3750 3900 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9140 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8600 8900 8910 8920 8930 8940 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 10
    free_market       = 8
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 425001 } # G.H.H. Villiers Lord Clarendon
  headofgovernment       = { type = 9 id = 425002 } # James Hertzog
  foreignminister        = { type = 9 id = 425003 } # James Hertzog
  armamentminister       = { type = 9 id = 425004 } # Nicolaas Havenga
  ministerofsecurity     = { type = 9 id = 425005 } # Jan C. Smuts
  ministerofintelligence = { type = 9 id = 425006 } # Jan C. Smuts
  chiefofstaff           = { type = 9 id = 425007 } # Pierre van Ryneveld
  chiefofarmy            = { type = 9 id = 425008 } # Jan C. Smuts
  chiefofnavy            = { type = 9 id = 425009 } # Pierre Oliver-Knoll
  chiefofair             = { type = 9 id = 425010 } # Pierre van Ryneveld

  landunit = {
    id       = { type = 26600 id = 1 }
    name     = "South African Army"
    location = 876
    division = {
      id             = { type = 26600 id = 2 }
      name           = "1st South African Infantry Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26600 id = 3 }
      name           = "2nd South African Infantry Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26600 id = 4 }
      name           = "3rd South African Infantry Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 26600 id = 5 }
      name           = "1st Mounted Commando Division"
      type           = cavalry
      model          = 6
      strength       = 10
    }
  }

  navalunit = {
    id       = { type = 26600 id = 7 }
    name     = "South African Navy"
    location = 880
    base     = 880
    division = {
      id             = { type = 26600 id = 13 }
      name           = "4th SAN Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 14 }
      name           = "5th SAN Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 15 }
      name           = "6th SAN Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 2326 }
      name           = "1st SAN Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 26600 id = 2327 }
      name           = "2nd SAN Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 26600 id = 2328 }
      name           = "3rd SAN Destroyer Flotilla"
      type           = destroyer
    }
  }
  navalunit = {
    id       = { type = 26600 id = 2324 }
    name     = "RSAN Fleet 1"
    location = 880
    base     = 880
    division = {
      id             = { type = 26600 id = 2329 }
      name           = "4th SAN Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 26600 id = 2330 }
      name           = "5th SAN Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 26600 id = 2331 }
      name           = "6th SAN Destroyer Flotilla"
      type           = destroyer
    }
    division = {
      id             = { type = 26600 id = 10 }
      name           = "1st SAN Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 11 }
      name           = "2nd SAN Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 26600 id = 12 }
      name           = "3rd SAN Transport Flotilla"
      type           = transport
    }
  }
}
