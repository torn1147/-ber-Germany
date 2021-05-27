##############################
# Country definition for AST #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = AST
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 1707 # Canberra
  manpower           = 16
  # Resource Reserves
  energy         = 1620
  metal          = 810
  rare_materials = 405
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 120
  escorts        = 1

  diplomacy = {
    relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 65 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 40 }
    relation = { tag = SAF value = 200 }
    relation = { tag = SAU value = 50 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "AST" NumberOfSpies = 6 }

  nationalprovinces      = { 1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 }
  ownedprovinces         = { 1234 1587 1602 1603 1604 1605 1606 1607 1608 1609 1610 1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1724 1725 1726 1727 1682 }
  controlledprovinces    = { 1234 1587 1602 1603 1604 1605 1606 1607 1608 1609 1610 1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1724 1725 1726 1727 1682 }
  claimedprovinces       = { 1682 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 14000 14010 14020 7600 7610 2620 2010 2630 2860 2870 2880 2020 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1830 1840 1850 1860 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5090 5310 54010 54020 54030 5316 5326 1910 1920 1930 1940 1950 1960 1970 4300 4310 4320 4330 4800 4810 4820 4740 4750 4760 3720 3730 3736 3740 3900 3810 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8600 8900 8910 8920 8930 8940 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9140 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 10
    free_market       = 8
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 225001 } # Isaac Alfred Isaacs
  headofgovernment       = { type = 9 id = 225002 } # Joseph A. Lyons
  foreignminister        = { type = 9 id = 225003 } # George F. Pearce
  armamentminister       = { type = 9 id = 225004 } # Robert A. Parkhill
  ministerofsecurity     = { type = 9 id = 225005 } # Thomas Paterson
  ministerofintelligence = { type = 9 id = 225006 } # Alexander McLachlan
  chiefofstaff           = { type = 9 id = 225007 } # Joseph A. Lyons
  chiefofarmy            = { type = 9 id = 225008 } # John Lavarack
  chiefofnavy            = { type = 9 id = 225009 } # Ragnar M. Colvin
  chiefofair             = { type = 9 id = 225010 } # Richard Williams

  landunit = {
    id       = { type = 30001 id = 1 }
    name     = "2nd Military District"
    location = 1705
    division = {
      id             = { type = 30001 id = 2 }
      name           = "1st Infantry Division"
      type           = garrison
      model          = 3
      strength       = 5
    }
    division = {
      id             = { type = 30001 id = 3 }
      name           = "2nd Infantry Division"
      type           = garrison
      model          = 3
      strength       = 5
    }
    division = {
      id             = { type = 30001 id = 4 }
      name           = "1st Cavalry Division"
      type           = cavalry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30001 id = 5 }
    name     = "3rd Military District"
    location = 1708
    division = {
      id             = { type = 30001 id = 6 }
      name           = "3rd Infantry Division"
      type           = garrison
      model          = 3
      strength       = 5
    }
    division = {
      id             = { type = 30001 id = 7 }
      name           = "4th Infantry Division"
      type           = garrison
      model          = 3
      strength       = 5
    }
    division = {
      id             = { type = 30001 id = 8 }
      name           = "2nd Cavalry Division"
      type           = cavalry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 30001 id = 9 }
    name     = "2nd Australian Imperial Force"
    location = 1707
    division = {
      id             = { type = 30001 id = 10 }
      name           = "6th Australian Infantry Division"
      type           = infantry
      model          = 7
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 10500 id = 17 }
    name     = "HM Australian Fleet"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 12700 id = 2020 }
      name           = "HMAS Albatross"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 10500 id = 18 }
      name           = "HMAS Australia"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 10500 id = 19 }
      name           = "HMAS Canberra"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 10500 id = 20 }
      name           = "HMAS Sydney"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 10500 id = 25 }
      name           = "HMAS Adelaide"
      type           = light_cruiser
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 10500 id = 22 }
    name     = "Transport Flotilla"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 10500 id = 23 }
      name           = "HMAS Kanimbla Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 29 }
      name           = "1st Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 30 }
      name           = "2nd Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 34 }
      name           = "6th Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 2290 }
      name           = "1st Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 10500 id = 24 }
    name     = "HM Australian Reserve Fleet"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 10500 id = 31 }
      name           = "3rd Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 32 }
      name           = "4th Transport Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10500 id = 2294 }
      name           = "2nd Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 10500 id = 33 }
      name           = "5th Transport Flotilla"
      type           = transport
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 10500 id = 15 }
    name     = "No.1 RAAF Tactical Bomber Group"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 10500 id = 16 }
      name           = "No.1 RAAF Tactical Bomber Group"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 10500 id = 101 }
    name           = "HMAS Perth"
    type           = light_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1936 month = january day = 13 }
  }

  landdivision = { dormant = yes id = { type = 30001 id = 1001 } name = "1. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
}
