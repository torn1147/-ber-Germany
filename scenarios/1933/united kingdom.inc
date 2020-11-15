##############################
# Country definition for ENG #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ENG
  ai                 = "ENG_1936.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 29 # London
  dissent            = 5
  manpower           = 20
  peacetime_ic_mod       = 0.52
  # Resource Reserves
  energy         = 8040
  metal          = 4020
  rare_materials = 2010
  oil            = 500
  supplies       = 500
  money          = 70
  transports     = 800
  escorts        = 150

  diplomacy = {
    relation = {
      tag        = AFG
      value      = -75
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = { tag = ARG value = 75 }
    relation = { tag = AST value = 200 }
    relation = {
      tag        = AUS
      value      = 75
      guaranteed = { year = 1934 month = september day = 27 }
    }
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 200 access = yes }
    relation = { tag = BUL value = 20 }
    relation = { tag = CAN value = 200 }
    relation = { tag = CUB value = 30 }
    relation = { tag = CZE value = 125 }
    relation = {
      tag        = DEN
      value      = 100
      guaranteed = { year = 1934 month = august day = 29 }
    }
    relation = { tag = EGY value = 200 }
    relation = { tag = EST value = 65 }
    relation = { tag = ETH value = 50 }
    relation = { tag = FIN value = 85 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = {
      tag        = GRE
      value      = 50
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = { tag = GUA value = 50 }
    relation = { tag = HOL value = 125 }
    relation = { tag = HON value = 50 }
    relation = { tag = HUN value = -50 }
    relation = {
      tag        = IRE
      value      = 25
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = {
      tag        = IRQ
      value      = 100
      access     = yes
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = { tag = ITA value = -50 }
    relation = { tag = JAP value = -25 }
    relation = { tag = LAT value = 65 }
    relation = { tag = LIT value = 65 }
    relation = { tag = MEX value = 50 }
    relation = { tag = NEP value = 200 access = yes }
    relation = {
      tag        = NOR
      value      = 90
      guaranteed = { year = 1934 month = august day = 29 }
    }
    relation = { tag = NZL value = 200 }
    relation = {
      tag        = OMN
      value      = 150
      access     = yes
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = {
      tag        = PER
      value      = 25
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = { tag = POL value = 50 }
    relation = {
      tag        = POR
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 200 }
    relation = {
      tag        = SAU
      value      = 100
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = {
      tag        = SCH
      value      = 50
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SIA value = 70 }
    relation = { tag = SPR value = -10 }
    relation = { tag = SOV value = -25 }
    relation = {
      tag        = SWE
      value      = 80
      guaranteed = { year = 1934 month = august day = 29 }
    }
    relation = {
      tag        = TUR
      value      = 75
      guaranteed = { year = 1934 month = february day = 11 }
    }
    relation = { tag = USA value = 150 }
    relation = { tag = VEN value = -10 }
    relation = {
      tag        = YEM
      value      = 150
      access     = yes
      guaranteed = { year = 1934 month = february day = 11 }
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 12 }

  nationalprovinces      = { 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 35 36 }
  ownedprovinces         = { 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 35 36 348 387 388 429 803 804 805 806 807 808 809 810 811 812 813 814 832 839 840 841 842 843 844 845 848 849 850 851 852 859 860 861 862 863 864 865 866 867 868 869 870 871 874 877 896 900 929 930 931 932 933 934 935 936 937 938 939 940 941 952 953 954 955 956 964 979 993 997 998 1008 1009 1010 1011 1013 1022 1023 1024 1025 1026 1038 1039 1041 1051 1053 1172 1371 1432 1433 1434 1435 1436 1437 1438 1509 1510 1511 1588 1589 1590 1591 1592 1593 1611 1613 1614 1624 1625 1626 1678 1679 1680 1687 1728 1729 1746 1749 1750 1753 1754 1755 1757 1758 1759 1760 1763 1764 1766 1769 1770 1771 1772 1773 1774 1782 1997 1998 2045 2086 2136 2137 2138 }
  controlledprovinces    = { 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 35 36 348 387 388 429 803 804 805 806 807 808 809 810 811 812 813 814 832 839 840 841 842 843 844 845 848 849 850 851 852 859 860 861 862 863 864 865 866 867 868 869 870 871 874 877 896 900 929 930 931 932 933 934 935 936 937 938 939 940 941 952 953 954 955 956 964 979 993 997 998 1008 1009 1010 1011 1013 1022 1023 1024 1025 1026 1038 1039 1041 1051 1053 1172 1371 1432 1433 1434 1435 1436 1437 1438 1509 1510 1511 1588 1589 1590 1591 1592 1593 1611 1613 1614 1624 1625 1626 1678 1679 1680 1687 1728 1729 1746 1749 1750 1753 1754 1755 1757 1758 1759 1760 1763 1764 1766 1769 1770 1771 1772 1773 1774 1782 1997 1998 2045 2086 2136 2137 2138 }
  claimedprovinces       = { 348 387 388 429 900 1371 2136 2137 2138 1008 1009 1010 1011 1013 1022 1023 1024 1025 1026 1172 1038 1039 1041 1051 1053 1432 1433 1434 1435 1436 1437 1438 1624 1625 1626 1997 1998 2045 2086 896 993 1753 1754 1755 1757 1758 1759 1760 1763 1764 1766 1769 1770 1771 1772 1773 1774 1782 929 930 931 932 933 934 935 936 937 938 939 940 941 952 953 954 955 956 964 979 803 804 805 806 807 808 809 810 811 812 813 814 832 839 841 842 843 844 845 848 849 850 851 852 859 860 861 862 863 864 865 866 867 868 869 870 871 874 877 840 997 998 1509 1510 1511 1611 1613 1614 1588 1589 1590 1591 1592 1593 1678 1679 1680 1687 1728 1729 1746 1749 1750 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1160 1170 1180 1190 1200 1210 1220 1230 1240 1560 1396 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 2860 2870 2880 2020 7600 7610 2620 2010 2630 2640 2646 2650 2290 2300 2310 2900 2910 2920 2800 2450 21180 21190 2810 2820 2510 3610 3620 3630 3640 3650 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 12100 12110 12120 12130 3510 3520 3530 3720 3730 3736 3740 3750 3900 3810 3820 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4300 4310 4320 4330 4340 4290 4700 4710 4900 4910 4920 4800 4810 4820 4220 4740 4750 4760 5700 5710 5010 5020 5810 5820 5050 5830 5060 5070 5800 5080 5090 5190 5310 54010 54020 54030 5316 5326 5327 5410 5416 5470 5560 5600 5610 5620 5630 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8520 8550 8560 8600 8610 8900 8910 8920 8930 8940 8950 8100 8110 8120 8150 8160 8200 8210 81650 81850 81700 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9140 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 2
    freedom           = 8
    free_market       = 8
    professional_army = 2
    defense_lobby     = 3
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 10001 } # George V
  headofgovernment       = { type = 9 id = 10002 } # Stanley Baldwin
  foreignminister        = { type = 9 id = 10003 } # Anthony Eden
  armamentminister       = { type = 9 id = 10004 } # Neville Chamberlain
  ministerofsecurity     = { type = 9 id = 10005 } # John Simon
  ministerofintelligence = { type = 9 id = 10006 } # Hugh Sinclair
  chiefofstaff           = { type = 9 id = 10007 } # A. Montgomery-Massingberd
  chiefofarmy            = { type = 9 id = 10008 } # A. Montgomery-Massingberd
  chiefofnavy            = { type = 9 id = 10009 } # Ernle Chatfield
  chiefofair             = { type = 9 id = 10010 } # Owen Boyd

  landunit = {
    id       = { type = 12700 id = 1 }
    name     = "Aldershot Command"
    location = 27
    division = {
      id             = { type = 12700 id = 63 }
      name           = "British Army HQ"
      type           = hq
      model          = 2
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 2 }
      name           = "1st Infantry Division"
      type           = infantry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 3 }
      name           = "2nd Infantry Division"
      type           = infantry
      model          = 7
      extra          = light_armor_brigade
      brigade_model  = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 4 }
    name     = "Northern Command"
    location = 18
    division = {
      id             = { type = 12700 id = 5 }
      name           = "5th Infantry Division"
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1501 }
      name           = "49th (West Riding) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 1502 }
      name           = "50th (Northumbrian) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 1503 }
      name           = "23rd (Northumbrian) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 12700 id = 1504 }
      name           = "46th Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12700 id = 6 }
    name     = "Southern Command"
    location = 19
    division = {
      id             = { type = 12700 id = 7 }
      name           = "3rd Infantry Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 505 }
      name           = "43rd (Wessex) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 506 }
      name           = "48th (South Midland) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 507 }
      name           = "45th Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 12700 id = 508 }
      name           = "61st Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12700 id = 509 }
    name     = "Scottish Command"
    location = 12
    division = {
      id             = { type = 12700 id = 510 }
      name           = "51st (Highland) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 511 }
      name           = "52nd (Lowland) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 512 }
      name           = "9th (Highland) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 12700 id = 513 }
      name           = "15th (Scottish) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12700 id = 514 }
    name     = "Western Command"
    location = 17
    division = {
      id             = { type = 12700 id = 515 }
      name           = "42nd (East Lancashire) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 516 }
      name           = "53rd (Welsh) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 517 }
      name           = "55th (West Lancashire) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 518 }
      name           = "38th (Welsh) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 12700 id = 519 }
      name           = "59th (Staffordshire) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 12700 id = 520 }
      name           = "66th Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12700 id = 521 }
    name     = "Eastern Command"
    location = 25
    division = {
      id             = { type = 12700 id = 522 }
      name           = "4th Infantry Division"
      type           = infantry
      model          = 8
      extra          = anti_air
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 523 }
      name           = "44th (Home Counties) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 524 }
      name           = "54th (East Anglian) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 525 }
      name           = "12th (Eastern) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 12700 id = 526 }
      name           = "18th Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12700 id = 527 }
    name     = "London District"
    location = 29
    division = {
      id             = { type = 12700 id = 528 }
      name           = "1st (London) Division"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 529 }
      name           = "2nd (London) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12700 id = 8 }
    name     = "China Command"
    location = 1371
    division = {
      id             = { type = 12700 id = 9 }
      name           = "Hong Kong Defence Force"
      type           = garrison
      model          = 3
      strength       = 75
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 10 }
    name     = "Malaya Command"
    location = 1432
    division = {
      id             = { type = 12700 id = 11 }
      name           = "Singapore Fortress"
      type           = garrison
      model          = 3
      strength       = 35
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 282 }
    name     = "Royal West African Frontier Force"
    location = 929
    division = {
      id             = { type = 12700 id = 283 }
      name           = "The Nigeria Regiment"
      type           = militia
      model          = 3
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 12700 id = 12 }
    name     = "British Troops on Gibraltar"
    location = 348
    division = {
      id             = { type = 12700 id = 13 }
      name           = "Gibraltar Defence Force"
      type           = garrison
      model          = 3
      strength       = 25
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 14 }
    name     = "Ceylon Command"
    location = 1511
    division = {
      id             = { type = 12700 id = 15 }
      name           = "Ceylon Defence Force"
      type           = militia
      model          = 3
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 12700 id = 16 }
    name     = "Malta Command"
    location = 429
    division = {
      id             = { type = 12700 id = 17 }
      name           = "Malta Defence Force"
      type           = garrison
      model          = 3
      strength       = 35
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 18 }
    name     = "Middle East Command"
    location = 789
    division = {
      id             = { type = 12700 id = 19 }
      name           = "7th Infantry Division"
      type           = infantry
      model          = 7
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 12700 id = 530 }
    name     = "British Forces in Palestine and Transjordan"
    location = 1172
    division = {
      id             = { type = 12700 id = 531 }
      name           = "8th Infantry Division"
      type           = infantry
      model          = 8
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 43 }
    name     = "Gold Coast Defence Force"
    location = 956
    division = {
      id             = { type = 12700 id = 44 }
      name           = "The Gold Coast Regiment"
      type           = militia
      model          = 3
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 12700 id = 45 }
    name     = "British troops in the Sudan"
    location = 810
    division = {
      id             = { type = 12700 id = 46 }
      name           = "Sudan Defence Force"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12700 id = 47 }
    name     = "Southern Rhodesia Defence Force"
    location = 867
    division = {
      id             = { type = 12700 id = 48 }
      name           = "Southern Rhodesia Defence Force"
      type           = militia
      model          = 3
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 12700 id = 55 }
    name     = "East Africa Force"
    location = 841
    division = {
      id             = { type = 12700 id = 56 }
      name           = "King's African Rifles"
      type           = militia
      model          = 3
      strength       = 70
    }
  }

  navalunit = {
    id       = { type = 12700 id = 84 }
    name     = "Home Fleet"
    location = 5
    base     = 5
    division = {
      id             = { type = 12700 id = 85 }
      name           = "HMS Nelson"
      type           = battleship
      model          = 6
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 86 }
      name           = "HMS Rodney"
      type           = battleship
      model          = 6
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 87 }
      name           = "HMS Royal Sovereign"
      type           = battleship
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 88 }
      name           = "HMS Royal Oak"
      type           = battleship
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 89 }
      name           = "HMS Resolution"
      type           = battleship
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 255 }
      name           = "HMS Pegasus"
      type           = escort_carrier
      model          = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 96 }
      name           = "HMS Cairo"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 97 }
      name           = "HMS Galatea"
      type           = light_cruiser
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 98 }
      name           = "HMS Dunedin"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 99 }
      name           = "HMS Neptune"
      type           = light_cruiser
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 100 }
      name           = "HMS Orion"
      type           = light_cruiser
      model          = 4
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 104 }
    name     = "Home Fleet Carrier Force"
    location = 5
    base     = 5
    division = {
      id             = { type = 12700 id = 105 }
      name           = "HMS Argus"
      type           = escort_carrier
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 93 }
      name           = "HMS Furious"
      type           = carrier
      extra1         = cag
      brigade_model1 = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2223 }
      name           = "Destroyer Division 35"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2224 }
      name           = "Destroyer Division 36"
      type           = destroyer
      model          = 3
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 106 }
    name     = "2nd Submarine Squadron"
    location = 5
    base     = 5
    division = {
      id             = { type = 12700 id = 107 }
      name           = "3rd Submarine Flotilla"
      type           = submarine
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 108 }
      name           = "4th Submarine Flotilla"
      type           = submarine
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 109 }
      name           = "5th Submarine Flotilla"
      type           = submarine
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 110 }
      name           = "6th Submarine Flotilla"
      type           = submarine
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 111 }
      name           = "7th Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 112 }
    name     = "1st Transport Squadron"
    location = 1517
    base     = 1517
    division = {
      id             = { type = 12700 id = 113 }
      name           = "Suffolk Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 114 }
      name           = "Trojan Star Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2227 }
      name           = "Destroyer Division 37"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2228 }
      name           = "Destroyer Division 38"
      type           = destroyer
      model          = 3
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 115 }
    name     = "2nd Transport Squadron"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 116 }
      name           = "Empire Arquebus Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 117 }
      name           = "Hororata Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 122 }
      name           = "Empire Charmain Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 222 }
      name           = "HMS Dauntless"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 224 }
      name           = "Destroyer Division 31"
      type           = destroyer
      model          = 3
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 118 }
    name     = "3rd Transport Squadron"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 119 }
      name           = "Clan Macauley Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 120 }
      name           = "Empire Captain Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 121 }
      name           = "Andes Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 144 }
      name           = "Destroyer Division 14"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 145 }
      name           = "Destroyer Division 15"
      type           = destroyer
      model          = 3
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 123 }
    name     = "4th Transport Squadron"
    location = 5
    base     = 5
    division = {
      id             = { type = 12700 id = 124 }
      name           = "Essex Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 125 }
      name           = "Maloja Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2221 }
      name           = "Destroyer Division 8"
      type           = destroyer
      model          = 3
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 126 }
    name     = "5th Transport Squadron"
    location = 20
    base     = 20
    division = {
      id             = { type = 12700 id = 127 }
      name           = "Empire Splendour Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 128 }
      name           = "Sam Torch Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 129 }
      name           = "Resolution Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 131 }
      name           = "Destroyer Division 5"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 132 }
      name           = "Destroyer Division 6"
      type           = destroyer
      model          = 3
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 134 }
    name     = "Destroyer Squadron 2"
    location = 17
    base     = 17
    division = {
      id             = { type = 12700 id = 135 }
      name           = "Destroyer Division 8"
      type           = destroyer
      model          = 5
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 136 }
      name           = "Destroyer Division 9"
      type           = destroyer
      model          = 5
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 137 }
    name     = "Destroyer Squadron 3"
    location = 17
    base     = 17
    division = {
      id             = { type = 12700 id = 138 }
      name           = "Destroyer Division 10"
      type           = destroyer
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 139 }
      name           = "Destroyer Division 11"
      type           = destroyer
      model          = 4
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 140 }
    name     = "Destroyer Squadron 4"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 141 }
      name           = "Destroyer Division 12"
      type           = destroyer
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 142 }
      name           = "Destroyer Division 13"
      type           = destroyer
      model          = 4
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 147 }
    name     = "Mediterranean Fleet"
    location = 789
    base     = 789
    division = {
      id             = { type = 12700 id = 148 }
      name           = "HMS Queen Elizabeth"
      type           = battleship
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 153 }
      name           = "HMS Revenge"
      type           = battleship
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 156 }
      name           = "HMS Devonshire"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 160 }
      name           = "HMS Exeter"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 161 }
      name           = "HMS York"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 162 }
      name           = "HMS Coventry"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 163 }
      name           = "HMS Curlew"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 164 }
      name           = "HMS Delhi"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 165 }
      name           = "HMS Despatch"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 166 }
      name           = "HMS Durban"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 167 }
      name           = "HMS Arethusa"
      type           = light_cruiser
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 149 }
      name           = "HMS Barham"
      type           = battleship
      model          = 4
      extra1         = naval_anti_air_l
      extra2         = naval_fire_controll_l
      extra3         = floatplane
      brigade_model3 = 4
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 174 }
    name     = "1st Submarine Squadron"
    location = 789
    base     = 789
    division = {
      id             = { type = 12700 id = 175 }
      name           = "1st Submarine Flotilla"
      type           = submarine
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 176 }
      name           = "2nd Submarine Flotilla"
      type           = submarine
      model          = 3
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 177 }
    name     = "America & West Indies Station"
    location = 1773
    base     = 1773
    division = {
      id             = { type = 12700 id = 178 }
      name           = "HMS Dragon"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 179 }
      name           = "HMS Ajax"
      type           = light_cruiser
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 180 }
      name           = "Destroyer Division 23"
      type           = destroyer
      model          = 2
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 182 }
    name     = "Africa Station"
    location = 964
    base     = 964
    division = {
      id             = { type = 12700 id = 183 }
      name           = "HMS Leander"
      type           = light_cruiser
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 184 }
      name           = "HMS Carlisle"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 185 }
      name           = "Destroyer Division 25"
      type           = destroyer
      model          = 2
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 187 }
    name     = "East Indies Station"
    location = 1511
    base     = 1511
    division = {
      id             = { type = 12700 id = 188 }
      name           = "HMS Norfolk"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 189 }
      name           = "HMS Diomede"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 190 }
      name           = "HMS Emerald"
      type           = light_cruiser
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 191 }
      name           = "HMS Enterprise"
      type           = light_cruiser
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 192 }
      name           = "Destroyer Division 27"
      type           = destroyer
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 193 }
      name           = "Destroyer Division 28"
      type           = destroyer
      model          = 4
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 194 }
    name     = "China Station"
    location = 1371
    base     = 1371
    division = {
      id             = { type = 12700 id = 195 }
      name           = "HMS Eagle"
      type           = escort_carrier
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 196 }
      name           = "HMS Capetown"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 197 }
      name           = "Destroyer Division 29"
      type           = destroyer
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 198 }
      name           = "Destroyer Division 30"
      type           = destroyer
      model          = 4
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 199 }
    name     = "3rd Submarine Squadron"
    location = 1371
    base     = 1371
    division = {
      id             = { type = 12700 id = 200 }
      name           = "8th Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 201 }
      name           = "9th Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 239 }
    name     = "4th Submarine Squadron"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 240 }
      name           = "10th Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 241 }
      name           = "11th Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 242 }
      name           = "12th Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 202 }
    name     = "Reserve Fleet"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 208 }
      name           = "HMS Berwick"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 209 }
      name           = "HMS Cornwall"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 210 }
      name           = "HMS Cumberland"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 211 }
      name           = "HMS Suffolk"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 212 }
      name           = "HMS Kent"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 217 }
      name           = "HMS Colombo"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 218 }
      name           = "HMS Cardiff"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 219 }
      name           = "HMS Ceres"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 220 }
      name           = "HMS Curacao"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 221 }
      name           = "HMS Danae"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 2219 }
    name     = "Force A"
    location = 5
    base     = 5
    division = {
      id             = { type = 12700 id = 90 }
      name           = "HMS Ramillies"
      type           = battleship
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 91 }
      name           = "HMS Hood"
      type           = battlecruiser
      model          = 2
      extra1         = floatplane
      extra2         = naval_fire_controll_l
      brigade_model1 = 4
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 92 }
      name           = "HMS Renown"
      type           = battlecruiser
      model          = 1
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 94 }
      name           = "HMS Repulse"
      type           = battlecruiser
      model          = 1
      extra1         = naval_anti_air_l
      extra2         = naval_fire_controll_l
      extra3         = naval_improved_hull_l
      extra4         = floatplane
      brigade_model4 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 103 }
      name           = "Destroyer Division 3"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 102 }
      name           = "Destroyer Division 2"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 95 }
      name           = "Destroyer Division 4"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 101 }
      name           = "Destroyer Division 1"
      type           = destroyer
      model          = 3
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 2229 }
    name     = "Force C"
    location = 789
    base     = 789
    division = {
      id             = { type = 12700 id = 2231 }
      name           = "Destroyer Division 39"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2232 }
      name           = "Destroyer Division 40"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 154 }
      name           = "HMS Courageous"
      type           = carrier
      extra1         = cag
      brigade_model1 = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 155 }
      name           = "HMS Glorious"
      type           = carrier
      extra1         = cag
      brigade_model1 = 2
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 2334 }
    name     = "Force B"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 203 }
      name           = "HMS Hermes"
      type           = escort_carrier
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 223 }
      name           = "HMS Achilles"
      type           = light_cruiser
      model          = 4
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 2338 }
    name     = "Force D"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 204 }
      name           = "HMS Effingham"
      type           = heavy_cruiser
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 205 }
      name           = "HMS Frobisher"
      type           = heavy_cruiser
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 206 }
      name           = "HMS Dorsetshire"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 207 }
      name           = "HMS Hawkins"
      type           = heavy_cruiser
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 564 }
      name           = "HMS Erebus"
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 565 }
      name           = "HMS Terror"
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 213 }
      name           = "HMS Caledon"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 214 }
      name           = "HMS Calypso"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 215 }
      name           = "HMS Caradoc"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 216 }
      name           = "HMS Calcutta"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 2342 }
    name     = "Force E"
    location = 789
    base     = 789
    division = {
      id             = { type = 12700 id = 150 }
      name           = "HMS Valiant"
      type           = battleship
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 151 }
      name           = "HMS Malaya"
      type           = battleship
      model          = 4
      extra1         = naval_anti_air_l
      extra2         = naval_fire_controll_l
      extra3         = floatplane
      brigade_model3 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 157 }
      name           = "HMS London"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 158 }
      name           = "HMS Shropshire"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 159 }
      name           = "HMS Sussex"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 173 }
      name           = "Destroyer Division 22"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 172 }
      name           = "Destroyer Division 21"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 171 }
      name           = "Destroyer Division 20"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 170 }
      name           = "Destroyer Division 19"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 169 }
      name           = "Destroyer Division 18"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 168 }
      name           = "Destroyer Division 17"
      type           = destroyer
      model          = 3
      experience     = 20
    }
  }

  airunit = { 
    id       = { type = 12700 id = 67 }
    name     = "1st Tactical Wing"
    location = 18
    base     = 18
    division = {
      id             = { type = 12700 id = 64 }
      name           = "No.1 RAF Tactical Group"
      type           = tactical_bomber
      model          = 5
      strength       = 20
    }
  }
  airunit = { 
    id       = { type = 12700 id = 65 }
    name     = "RAF Strategic Bomber Command"
    location = 25
    base     = 25
    division = {
      id             = { type = 12700 id = 66 }
      name           = "No.2 RAF Strategic Group"
      type           = strategic_bomber
      model          = 2
      strength       = 20
    }
    division = {
      id             = { type = 12700 id = 68 }
      name           = "no.3 RAF Strategic Group"
      type           = strategic_bomber
      model          = 3
      strength       = 20
    }
    division = {
      id             = { type = 12700 id = 69 }
      name           = "no.4 RAF Strategic Group"
      type           = strategic_bomber
      model          = 3
      strength       = 20
    }
  }
  airunit = { 
    id       = { type = 12700 id = 70 }
    name     = "2nd Tactical Wing"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 71 }
      name           = "No.5 RAF Tactical Group"
      type           = tactical_bomber
      model          = 5
      strength       = 20
    }
  }
  airunit = { 
    id       = { type = 12700 id = 72 }
    name     = "1st Fighter Wing"
    location = 18
    base     = 18
    division = {
      id             = { type = 12700 id = 73 }
      name           = "No.11 RAF Fighter Group"
      type           = interceptor
      model          = 7
      strength       = 20
    }
  }
  airunit = { 
    id       = { type = 12700 id = 74 }
    name     = "2nd Fighter Wing"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 75 }
      name           = "No.12 RAF Fighter Group"
      type           = multi_role
      model          = 3
      strength       = 20
    }
  }
  airunit = { 
    id       = { type = 12700 id = 76 }
    name     = "3rd Fighter Wing"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 77 }
      name           = "No.13 RAF Fighter Group"
      type           = interceptor
      model          = 7
      strength       = 20
    }
  }
  airunit = { 
    id       = { type = 12700 id = 78 }
    name     = "Middle East Air Command"
    location = 1008
    base     = 1008
    division = {
      id             = { type = 12700 id = 79 }
      name           = "Middle East Group"
      type           = tactical_bomber
      model          = 5
      strength       = 20
    }
  }
  airunit = { 
    id       = { type = 12700 id = 82 }
    name     = "Far East Air Command"
    location = 1432
    base     = 1432
    division = {
      id             = { type = 12700 id = 83 }
      name           = "Far East Group"
      type           = tactical_bomber
      model          = 5
      strength       = 20
    }
  }

  division_development = {
    id             = { type = 12700 id = 152 }
    name           = "HMS Warspite"
    type           = battleship
    model          = 4
    cost           = 0.5
    unitcost       = no
    new_model      = no
    date           = { year = 1937 month = january day = 1 }
    extra1         = naval_anti_air_l
    extra2         = naval_fire_controll_l
    extra3         = floatplane
    brigade_model3 = 4
  }
  division_development = {
    id             = { type = 12700 id = 226 }
    name           = "Destroyer Division 33"
    type           = destroyer
    model          = 5
    cost           = 0.1
    date           = { year = 1936 month = march day = 1 }
  }
  division_development = {
    id             = { type = 12700 id = 227 }
    name           = "Destroyer Division 34"
    type           = destroyer
    model          = 5
    cost           = 0.1
    date           = { year = 1936 month = april day = 1 }
  }
  division_development = {
    id             = { type = 12700 id = 228 }
    name           = "13th Submarine Flotilla"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = march day = 1 }
  }
  division_development = {
    id             = { type = 12700 id = 229 }
    name           = "HMS Aurora"
    type           = light_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1937 month = november day = 12 }
  }
  division_development = {
    id             = { type = 12700 id = 230 }
    name           = "HMS Birmingham"
    type           = light_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1937 month = november day = 18 }
  }
  division_development = {
    id             = { type = 12700 id = 231 }
    name           = "HMS Glasgow"
    type           = light_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1937 month = september day = 9 }
  }
  division_development = {
    id             = { type = 12700 id = 232 }
    name           = "HMS Newcastle"
    type           = light_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1937 month = march day = 5 }
  }
  division_development = {
    id             = { type = 12700 id = 233 }
    name           = "HMS Penelope"
    type           = light_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1936 month = november day = 13 }
  }
  division_development = {
    id             = { type = 12700 id = 234 }
    name           = "HMS Sheffield"
    type           = light_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1937 month = august day = 25 }
  }
  division_development = {
    id             = { type = 12700 id = 235 }
    name           = "HMS Southampton"
    type           = light_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1937 month = march day = 6 }
  }
  division_development = {
    id             = { type = 12700 id = 236 }
    name           = "HMS Ark Royal"
    type           = carrier
    model          = 2
    cost           = 0.1
    new_model      = no
    date           = { year = 1939 month = march day = 1 }
    extra1         = cag
    brigade_model1 = 2
  }
  division_development = {
    id             = { type = 12700 id = 237 }
    name           = "HMS Amphion"
    type           = light_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1936 month = june day = 15 }
  }
  division_development = {
    id             = { type = 12700 id = 238 }
    name           = "HMS Apollo"
    type           = light_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1936 month = january day = 13 }
  }

  landdivision = { dormant = yes id = { type = 12700 id = 10001 } name = "1. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10002 } name = "2. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10003 } name = "3. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10004 } name = "4. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10005 } name = "5. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10006 } name = "6. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10007 } name = "7. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10008 } name = "8. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10009 } name = "9. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10010 } name = "10. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10011 } name = "11. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10012 } name = "12. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10013 } name = "13. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10014 } name = "14. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10015 } name = "15. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10016 } name = "16. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10017 } name = "17. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10018 } name = "18. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10044 } name = "1. Norwich Garrison"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10045 } name = "2. Norwich Garrison"  type = garrison model = 5 extra = artillery brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10046 } name = "3. Norwich Garrison"  type = garrison model = 5 extra = light_armor_brigade brigade_model = 7 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10047 } name = "1. Dover Garrison"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10048 } name = "2. Dover Garrison"  type = garrison model = 5 extra = artillery brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10049 } name = "3. Dover Garrison"  type = garrison model = 5 extra = light_armor_brigade brigade_model = 7 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10050 } name = "1. Portsmouth Garrison"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10051 } name = "2. Portsmouth Garrison"  type = garrison model = 5 extra = artillery brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10052 } name = "3. Portsmouth Garrison"  type = garrison model = 5 extra = light_armor_brigade brigade_model = 7 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10053 } name = "1. Plymouth Garrison"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10054 } name = "2. Plymouth Garrison"  type = garrison model = 5 extra = artillery brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10055 } name = "3. Plymouth Garrison"  type = garrison model = 5 extra = light_armor_brigade brigade_model = 7 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10056 } name = "1. Cardiff Garrison"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10057 } name = "2. Cardiff Garrison"  type = garrison model = 5 extra = artillery brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10058 } name = "3. Cardiff Garrison"  type = garrison model = 5 extra = light_armor_brigade brigade_model = 7 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10059 } name = "1. Manchester Garrison"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10060 } name = "2. Manchester Garrison"  type = garrison model = 5 extra = artillery brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10061 } name = "3. Manchester Garrison"  type = garrison model = 5 extra = light_armor_brigade brigade_model = 7 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10062 } name = "1. Edinburgh Garrison"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10063 } name = "2. Edinburgh Garrison"  type = garrison model = 5 extra = artillery brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10064 } name = "3. Edinburgh Garrison"  type = garrison model = 5 extra = light_armor_brigade brigade_model = 7 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10065 } name = "1. Glasgow Garrison"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10066 } name = "2. Glasgow Garrison"  type = garrison model = 5 extra = artillery brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10067 } name = "3. Glasgow Garrison"  type = garrison model = 5 extra = light_armor_brigade brigade_model = 7 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10068 } name = "1. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10069 } name = "2. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10070 } name = "3. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10071 } name = "4. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10072 } name = "5. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10073 } name = "6. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10074 } name = "7. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10075 } name = "8. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10076 } name = "9. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10077 } name = "10. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10078 } name = "11. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10079 } name = "12. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10080 } name = "13. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10081 } name = "14. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10082 } name = "15. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10083 } name = "16. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10084 } name = "17. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10085 } name = "18. Home Guard Anti-Air"  type = garrison model = 5 extra = anti_air brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10086 } name = "1. Stornoway Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10087 } name = "2. Stornoway Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10088 } name = "3. Stornoway Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10089 } name = "1. Scapa Flow Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10090 } name = "2. Scapa Flow Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10091 } name = "3. Scapa Flow Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10092 } name = "1. Inverness Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10093 } name = "2. Inverness Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10094 } name = "3. Inverness Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10095 } name = "1. Aberdeen Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10096 } name = "2. Aberdeen Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10097 } name = "3. Aberdeen Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10098 } name = "1. Fort William Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10099 } name = "2. Fort William Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10100 } name = "3. Fort William Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10101 } name = "1. Dumfries Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10102 } name = "2. Dumfries Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10103 } name = "3. Dumfries Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10104 } name = "1. Glasgow Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10105 } name = "2. Glasgow Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10106 } name = "3. Glasgow Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10107 } name = "1. Edinburgh Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10108 } name = "2. Edinburgh Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10109 } name = "3. Edinburgh Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10110 } name = "1. Sunderland Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10111 } name = "2. Sunderland Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10112 } name = "3. Sunderland Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10113 } name = "1. Carlisle Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10114 } name = "2. Carlisle Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10115 } name = "3. Carlisle Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10116 } name = "1. Hull Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10117 } name = "2. Hull Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10118 } name = "3. Hull Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10119 } name = "1. Lincoln Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10120 } name = "2. Lincoln Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10121 } name = "3. Lincoln Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10122 } name = "1. Manchester Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10123 } name = "2. Manchester Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10124 } name = "3. Manchester Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10125 } name = "1. Sheffield Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10126 } name = "2. Sheffield Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10127 } name = "3. Sheffield Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10128 } name = "1. Bristol Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10129 } name = "2. Bristol Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10130 } name = "3. Bristol Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10131 } name = "1. Exeter Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10132 } name = "2. Exeter Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10133 } name = "3. Exeter Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10134 } name = "1. Caernarfon Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10135 } name = "2. Caernarfon Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10136 } name = "3. Caernarfon Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10137 } name = "1. Cardiff Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10138 } name = "2. Cardiff Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10139 } name = "3. Cardiff Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10140 } name = "1. Plymouth Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10141 } name = "2. Plymouth Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10142 } name = "3. Plymouth Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10143 } name = "1. Birmingham Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10144 } name = "2. Birmingham Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10145 } name = "3. Birmingham Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10146 } name = "1. Norwich Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10147 } name = "2. Norwich Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10148 } name = "3. Norwich Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10149 } name = "1. Dover Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10150 } name = "2. Dover Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10151 } name = "3. Dover Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10152 } name = "1. Portsmouth Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10153 } name = "2. Portsmouth Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10154 } name = "3. Portsmouth Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10155 } name = "1. Oxford Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10156 } name = "2. Oxford Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10157 } name = "3. Oxford Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10158 } name = "1. London Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10159 } name = "2. London Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10160 } name = "3. London Home Guard"  type = militia model = 5 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10161 } name = "1. Parliament Elite Guard"  type = infantry model = 11 experience = 80 extra = medium_armor brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10162 } name = "2. Parliament Elite Guard"  type = infantry model = 11 experience = 80 extra = medium_armor brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10163 } name = "3. Parliament Elite Guard"  type = infantry model = 11 experience = 80 extra = medium_armor brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10164 } name = "4. Winston's Wall"  type = armor model = 2 experience = 80 extra = sp_artillery brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10041 } name = "Churchill and Staff"  type = d_10 model = 0 experience = 100 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10019 } name = "Allied expeditionary corps"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10020 } name = "5th Infantry Division"  type = infantry model = 9 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10021 } name = "1st Infantry Division"  type = infantry model = 9 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10022 } name = "2nd Infantry Division"  type = infantry model = 9 extra = armored_car brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10023 } name = "48th (South Midland) Infantry Division"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10024 } name = "3rd Infantry Division"  type = infantry model = 9 extra = engineer brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10025 } name = "4th Infantry Division"  type = infantry model = 9 extra = anti_air brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10026 } name = "150th Infantry Division"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10027 } name = "42nd Infantry Division"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10028 } name = "44th Infantry Division"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10029 } name = "51st (Highland) Infantry Division"  type = infantry model = 9 extra = engineer brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10030 } name = "12th Infantry Division"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10031 } name = "23rd (Northumbrian) Infantry Division"  type = infantry model = 9 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10032 } name = "46th Infantry Division"  type = infantry model = 9 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10033 } name = "1st Armoured Division"  type = armor model = 0 extra = sp_artillery brigade_model = 0 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10034 } name = "British 52nd (Lowland) Infantry Division"  type = infantry model = 9 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10035 } name = "1st Canadian Infantry Brigade"  type = infantry model = 9 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10036 } name = "Corps Troops"  type = hq model = 3 extra = anti_air brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10037 } name = "50th Motor Infantry Division"  type = motorized model = 1 extra = tank_destroyer brigade_model = 0 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10038 } name = "Royal Armoured Corps"  type = armor model = 0 extra = sp_artillery brigade_model = 0 } 
  landdivision = { dormant = yes id = { type = 12700 id = 10039 } name = "21st Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10040 } name = "2nd New Zealand Division"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
}
