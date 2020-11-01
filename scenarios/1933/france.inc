##############################
# Country definition for FRA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = FRA
  ai_settings        = { flags = { FRABuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 55 # Paris
  dissent            = 10
  manpower           = 28
  peacetime_ic_mod       = 0.36
  # Resource Reserves
  energy         = 7440
  metal          = 3720
  rare_materials = 1860
  oil            = 500
  supplies       = 500
  money          = 50
  transports     = 570
  escorts        = 60

  diplomacy = {
    relation = { tag = AST value = 150 }
    relation = { tag = AUS value = -10 }
    relation = {
      tag        = BEL
      value      = 120
      guaranteed = { year = 1935 month = january day = 0 }
    }
    relation = { tag = BHU value = 150 }
    relation = { tag = BUL value = 20 }
    relation = { tag = CAN value = 150 }
    relation = { tag = CZE value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = EST value = 65 }
    relation = { tag = ETH value = 25 }
    relation = { tag = FIN value = 85 }
    relation = { tag = GER value = -35 }
    relation = { tag = GRE value = 20 }
    relation = {
      tag        = HOL
      value      = 75
      guaranteed = { year = 1935 month = january day = 0 }
    }
    relation = { tag = HUN value = -70 }
    relation = { tag = IRE value = 25 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -50 }
    relation = { tag = JAP value = -20 }
    relation = { tag = LAT value = 65 }
    relation = { tag = LIT value = 65 }
    relation = {
      tag        = LUX
      value      = 120
      guaranteed = { year = 1935 month = january day = 0 }
    }
    relation = { tag = NEP value = 150 }
    relation = {
      tag        = NOR
      value      = 0
      guaranteed = { year = 1933 month = january day = 0 }
    }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = {
      tag        = POL
      value      = 100
      guaranteed = { year = 1933 month = january day = 0 }
    }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 10 }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1935 month = january day = 0 }
    }
    relation = { tag = SIA value = -100 }
    relation = { tag = SOV value = 100 }
    relation = { tag = SPR value = 10 }
    relation = {
      tag        = TUR
      value      = 50
      guaranteed = { year = 1935 month = january day = 0 }
    }
    relation = { tag = U03 value = 50 access = yes }
    relation = { tag = U04 value = 50 access = yes }
    relation = { tag = USA value = 65 }
    relation = { tag = YEM value = 150 }
    relation = {
      tag        = YUG
      value      = 50
      guaranteed = { year = 1935 month = january day = 0 }
    }
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 9 }

  nationalprovinces      = { 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 }
  ownedprovinces         = { 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 740 741 742 743 744 745 746 747 748 749 833 907 908 909 910 911 914 915 917 918 919 920 921 922 923 924 925 926 927 928 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 996 999 1000 1001 1002 1003 1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 1752 1767 1768 2000 2135 }
  controlledprovinces    = { 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 740 741 742 743 744 745 746 747 748 749 833 907 908 909 910 911 914 915 917 918 919 920 921 922 923 924 925 926 927 928 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 996 999 1000 1001 1002 1003 1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 1752 1767 1768 2000 2135 }
  claimedprovinces       = { 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 743 740 741 742 744 745 746 747 748 749 907 908 909 910 911 914 915 917 918 919 920 921 922 923 924 925 926 927 928 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 833 1001 1002 1003 996 999 1000 2000 1752 1767 1768 1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 2135 }

  techapps               = { 2860 2870 2880 2020 2150 7600 7610 2620 2010 2630 2640 2646 2650 2290 2300 2310 2900 2800 2450 21180 21190 2810 2820 2510 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1160 1170 1180 1190 1200 1210 1220 1230 1240 1396 1560 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 5700 5710 5010 5810 5820 5050 5830 5060 5800 5080 5090 5310 54010 54020 54030 5316 5326 5470 5480 5600 5610 5620 5630 5560 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3410 3420 3430 3440 3450 3456 3460 3470 3510 12100 12110 12120 3610 3620 3630 3640 3310 3320 3330 3340 3720 3730 3736 3740 3750 3900 3810 3820 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4300 4310 4320 4330 4740 4750 4760 4770 4800 4810 4820 4700 4710 4900 4910 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8550 8600 8900 8910 8920 8930 8940 8100 8110 8120 8150 8160 8200 8210 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 6
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 5001 } # Albert Lebrun
  headofgovernment       = { type = 9 id = 5002 } # Albert Sarraut
  foreignminister        = { type = 9 id = 5003 } # Pierre Etienne Flandin
  armamentminister       = { type = 9 id = 5004 } # Vincent Auriol
  ministerofsecurity     = { type = 9 id = 5005 } # Marx Dormoy
  ministerofintelligence = { type = 9 id = 5006 } # Joseph Paganon
  chiefofstaff           = { type = 9 id = 5007 } # Maurice Gamelin
  chiefofarmy            = { type = 9 id = 5008 } # Maurice Gamelin
  chiefofnavy            = { type = 9 id = 5397 } # Georges Durand-Viel
  chiefofair             = { type = 9 id = 5010 } # Victor Denain

  landunit = {
    id       = { type = 13500 id = 1 }
    name     = "Région militaire de Paris"
    location = 55
    leader   = 5076
    division = {
      id             = { type = 13500 id = 201 }
      name           = "Grand Quartier Général"
      type           = hq
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 2 }
      name           = "10ème Division d'Infanterie"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 3 }
      name           = "3ème Division d'Infanterie Coloniale"
      type           = infantry
      model          = 6
    }
    division = {
      id             = { type = 13500 id = 4 }
      name           = "2ème Division Légère Mécanisée"
      type           = light_armor
      model          = 0
      extra          = anti_air
      brigade_model  = 2
      strength       = 80
    }
    division = {
      id             = { type = 13500 id = 5 }
      name           = "3ème Division de Cavalerie"
      type           = cavalry
      model          = 7
      extra          = light_armor_brigade
      brigade_model  = 1
    }
    division = {
      id             = { type = 13500 id = 6 }
      name           = "41ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 7 }
      name           = "71ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 8 }
    name     = "Corps d'Armée Colonial"
    location = 55
    division = {
      id             = { type = 13500 id = 9 }
      name           = "5ème Division d'Infanterie Coloniale"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 10 }
      name           = "6ème Division d'Infanterie Coloniale"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 11 }
      name           = "7ème Division d'Infanterie Coloniale"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 13500 id = 12 }
    name     = "Ier Corps d'Armée"
    location = 52
    division = {
      id             = { type = 13500 id = 13 }
      name           = "1ère Division d'Infanterie Motorisée"
      type           = infantry
      model          = 7
      extra          = armored_car
      brigade_model  = 4
    }
    division = {
      id             = { type = 13500 id = 14 }
      name           = "2ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 15 }
      name           = "51ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 16 }
    name     = "IIème Corps d'Armée"
    location = 50
    division = {
      id             = { type = 13500 id = 17 }
      name           = "4ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 18 }
      name           = "3ème Division d'Infanterie Motorisée"
      type           = infantry
      model          = 8
      extra          = armored_car
      brigade_model  = 3
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 19 }
      name           = "52ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 20 }
    name     = "IIIème Corps d'Armée"
    location = 45
    division = {
      id             = { type = 13500 id = 21 }
      name           = "6ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 22 }
      name           = "5ème Division d'Infanterie Motorisée"
      type           = infantry
      model          = 8
      extra          = armored_car
      brigade_model  = 3
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 23 }
      name           = "53ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 24 }
    name     = "IVème Corps d'Armée"
    location = 58
    division = {
      id             = { type = 13500 id = 25 }
      name           = "19ème Division d'Infanterie"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 26 }
      name           = "7ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 27 }
      name           = "20ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 28 }
      name           = "54ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 29 }
    name     = "Vème Corps d'Armée"
    location = 66
    division = {
      id             = { type = 13500 id = 30 }
      name           = "1ère Division de Cavalerie"
      type           = cavalry
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 31 }
      name           = "9ème Division d'Infanterie Motorisée"
      type           = infantry
      model          = 7
      extra          = armored_car
      brigade_model  = 3
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 32 }
      name           = "45ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 33 }
      name           = "55ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 34 }
    name     = "VIème Corps d'Armée"
    location = 104
    division = {
      id             = { type = 13500 id = 35 }
      name           = "42ème Division d'Infanterie"
      type           = infantry
      model          = 7
      extra          = light_armor_brigade
      brigade_model  = 1
    }
    division = {
      id             = { type = 13500 id = 36 }
      name           = "2ème Division d'Infanterie Nord-Africaine"
      type           = infantry
      model          = 6
      extra          = light_armor_brigade
      brigade_model  = 0
    }
    division = {
      id             = { type = 13500 id = 37 }
      name           = "55ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 38 }
    name     = "VIIème Corps d'Armée"
    location = 97
    division = {
      id             = { type = 13500 id = 39 }
      name           = "13ème Division d'Infanterie"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 40 }
      name           = "14ème Division d'Infanterie"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 41 }
      name           = "47ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 42 }
      name           = "57ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 43 }
    name     = "VIIIème Corps d'Armée"
    location = 64
    division = {
      id             = { type = 13500 id = 44 }
      name           = "16ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 45 }
      name           = "15ème Division d'Infanterie Motorisée"
      type           = infantry
      model          = 8
      extra          = armored_car
      brigade_model  = 3
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 46 }
      name           = "58ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 47 }
    name     = "IXème Corps d'Armée"
    location = 61
    division = {
      id             = { type = 13500 id = 48 }
      name           = "23ème Division d'Infanterie"
      type           = infantry
      model          = 7
      extra          = light_armor_brigade
      brigade_model  = 1
    }
    division = {
      id             = { type = 13500 id = 49 }
      name           = "3ème Division d'Infanterie Nord-Africaine"
      type           = infantry
      model          = 6
    }
    division = {
      id             = { type = 13500 id = 50 }
      name           = "18ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 13500 id = 51 }
    name     = "Xème Corps d'Armée"
    location = 107
    division = {
      id             = { type = 13500 id = 52 }
      name           = "43ème Division d'Infanterie"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 53 }
      name           = "60ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 54 }
    name     = "XIème Corps d'Armée"
    location = 57
    division = {
      id             = { type = 13500 id = 55 }
      name           = "21ème Division d'Infanterie"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 56 }
      name           = "22ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 57 }
      name           = "61ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 58 }
    name     = "XIIème Corps d'Armée"
    location = 99
    division = {
      id             = { type = 13500 id = 59 }
      name           = "1ère Division Légère Mécanisée"
      type           = light_armor
      model          = 0
      strength       = 75
    }
    division = {
      id             = { type = 13500 id = 60 }
      name           = "24ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 61 }
      name           = "12ème Division d'Infanterie Motorisée"
      type           = infantry
      model          = 8
      extra          = armored_car
      brigade_model  = 3
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 62 }
      name           = "62ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 63 }
    name     = "XIIIème Corps d'Armée"
    location = 71
    division = {
      id             = { type = 13500 id = 64 }
      name           = "26ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 65 }
      name           = "25ème Division d'Infanterie Motorisée"
      type           = infantry
      model          = 8
      extra          = armored_car
      brigade_model  = 3
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 66 }
      name           = "63ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 67 }
    name     = "XIVème Corps d'Armée"
    location = 85
    division = {
      id             = { type = 13500 id = 68 }
      name           = "27ème Division d'Infanterie Alpine"
      type           = bergsjaeger
      model          = 6
    }
    division = {
      id             = { type = 13500 id = 69 }
      name           = "28ème Division d'Infanterie Alpine"
      type           = bergsjaeger
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 70 }
      name           = "64ème Division d'Infanterie Alpine"
      type           = bergsjaeger
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 13500 id = 71 }
      name           = "1ère Division d'Infanterie Nord-Africaine"
      type           = infantry
      model          = 6
      extra          = light_armor_brigade
      brigade_model  = 0
    }
  }
  landunit = {
    id       = { type = 13500 id = 72 }
    name     = "XVème Corps d'Armée"
    location = 89
    division = {
      id             = { type = 13500 id = 73 }
      name           = "29ème Division d'Infanterie Alpine"
      type           = bergsjaeger
      model          = 6
    }
    division = {
      id             = { type = 13500 id = 74 }
      name           = "30ème Division d'Infanterie Alpine"
      type           = bergsjaeger
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 75 }
      name           = "65ème Division d'Infanterie Alpine"
      type           = bergsjaeger
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 13500 id = 76 }
      name           = "2ème Division d'Infanterie Coloniale"
      type           = infantry
      model          = 6
      extra          = light_armor_brigade
      brigade_model  = 0
    }
  }
  landunit = {
    id       = { type = 13500 id = 77 }
    name     = "XVIème Corps d'Armée"
    location = 82
    division = {
      id             = { type = 13500 id = 78 }
      name           = "32ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 79 }
      name           = "31ème Division d'Infanterie Alpine"
      type           = bergsjaeger
      model          = 6
    }
    division = {
      id             = { type = 13500 id = 80 }
      name           = "66ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 81 }
    name     = "XVIIème Corps d'Armée"
    location = 77
    division = {
      id             = { type = 13500 id = 82 }
      name           = "4ème Division d'Infanterie Coloniale"
      type           = infantry
      model          = 6
    }
    division = {
      id             = { type = 13500 id = 83 }
      name           = "67ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 84 }
    name     = "XVIIIème Corps d'Armée"
    location = 68
    division = {
      id             = { type = 13500 id = 85 }
      name           = "1ère Division d'Infanterie Coloniale"
      type           = infantry
      model          = 6
    }
    division = {
      id             = { type = 13500 id = 86 }
      name           = "36ème Division d'Infanterie"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 87 }
      name           = "35ème Division d'Infanterie"
      type           = infantry
      model          = 6
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 13500 id = 88 }
    name     = "XXème Corps d'Armée"
    location = 106
    division = {
      id             = { type = 13500 id = 89 }
      name           = "QG Théâtre d'Opérations Nord-Est"
      type           = hq
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 13500 id = 90 }
      name           = "2ème Division de Cavalerie"
      type           = cavalry
      model          = 7
      extra          = light_armor_brigade
      brigade_model  = 1
    }
    division = {
      id             = { type = 13500 id = 91 }
      name           = "11ème Division d'Infanterie"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 3
    }
    division = {
      id             = { type = 13500 id = 92 }
      name           = "4ème Division d'Infanterie Nord-Africaine"
      type           = infantry
      model          = 6
    }
    division = {
      id             = { type = 13500 id = 93 }
      name           = "70ème Division d'Infanterie"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 94 }
    name     = "Division d'Alger"
    location = 727
    division = {
      id             = { type = 13500 id = 95 }
      name           = "Division d'Alger"
      type           = infantry
      model          = 6
      extra          = armored_car
      brigade_model  = 2
    }
  }
  landunit = {
    id       = { type = 13500 id = 96 }
    name     = "Division d'Oran"
    location = 728
    division = {
      id             = { type = 13500 id = 97 }
      name           = "Division d'Oran"
      type           = infantry
      model          = 6
      extra          = armored_car
      brigade_model  = 2
    }
  }
  landunit = {
    id       = { type = 13500 id = 98 }
    name     = "Division de Constantine"
    location = 734
    division = {
      id             = { type = 13500 id = 99 }
      name           = "Division de Constantine"
      type           = infantry
      model          = 6
      extra          = armored_car
      brigade_model  = 2
    }
  }
  landunit = {
    id       = { type = 13500 id = 100 }
    name     = "Division de Tunis"
    location = 747
    division = {
      id             = { type = 13500 id = 101 }
      name           = "Division de Tunis"
      type           = infantry
      model          = 6
      extra          = armored_car
      brigade_model  = 2
    }
  }
  landunit = {
    id       = { type = 13500 id = 102 }
    name     = "Division de Sousse"
    location = 745
    division = {
      id             = { type = 13500 id = 103 }
      name           = "Division de Sousse"
      type           = garrison
      model          = 2
    }
  }
  landunit = {
    id       = { type = 13500 id = 104 }
    name     = "XIXème Région Militaire"
    location = 727
    division = {
      id             = { type = 13500 id = 105 }
      name           = "81ème Division d'Infanterie d'Afrique"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 13500 id = 106 }
      name           = "82ème Division d'Infanterie d'Afrique"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 13500 id = 107 }
      name           = "83ème Division d'Infanterie d'Afrique"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 13500 id = 108 }
      name           = "84ème Division d'Infanterie d'Afrique"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 13500 id = 109 }
      name           = "85ème Division d'Infanterie d'Afrique"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 13500 id = 110 }
      name           = "86ème Division d'Infanterie d'Afrique"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 13500 id = 111 }
      name           = "87ème Division d'Infanterie d'Afrique"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 112 }
    name     = "Commandement des troupes du Maroc"
    location = 717
    division = {
      id             = { type = 13500 id = 113 }
      name           = "1ère Division Marocaine"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 13500 id = 114 }
      name           = "2ème Division Marocaine"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 13500 id = 115 }
      name           = "3ème Division Marocaine"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 13500 id = 116 }
    name     = "Division de Fès"
    location = 721
    division = {
      id             = { type = 13500 id = 117 }
      name           = "Division de Fès"
      type           = garrison
      model          = 2
    }
  }
  landunit = {
    id       = { type = 13500 id = 318 }
    name     = "Division de Marrakech"
    location = 722
    division = {
      id             = { type = 13500 id = 319 }
      name           = "Division de Marrakech"
      type           = garrison
      model          = 2
    }
  }
  landunit = {
    id       = { type = 13500 id = 320 }
    name     = "Division de Meknès"
    location = 717
    division = {
      id             = { type = 13500 id = 321 }
      name           = "Division de Meknès"
      type           = garrison
      model          = 2
    }
  }
  landunit = {
    id       = { type = 13500 id = 322 }
    name     = "Subdivision de Casablanca"
    location = 718
    division = {
      id             = { type = 13500 id = 323 }
      name           = "Subdivision de Casablanca"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 324 }
      name           = "Goumiers"
      type           = militia
      model          = 3
    }
  }
  landunit = {
    id       = { type = 13500 id = 325 }
    name     = "Troupes d'Afrique occidentale"
    location = 978
    division = {
      id             = { type = 13500 id = 326 }
      name           = "Point d'appui de la flotte de Dakar"
      type           = garrison
      model          = 2
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 13500 id = 327 }
    name     = "1ère Brigade de Tirailleurs Sénégalais"
    location = 983
    division = {
      id             = { type = 13500 id = 328 }
      name           = "1ère Brigade de Tirailleurs Sénégalais"
      type           = militia
      model          = 3
    }
  }
  landunit = {
    id       = { type = 13500 id = 329 }
    name     = "2ème Brigade de Tirailleurs Sénégalais"
    location = 976
    division = {
      id             = { type = 13500 id = 330 }
      name           = "2ème Brigade de Tirailleurs Sénégalais"
      type           = militia
      model          = 3
    }
  }
  landunit = {
    id       = { type = 13500 id = 331 }
    name     = "3ème Brigade de Tirailleurs Sénégalais"
    location = 962
    division = {
      id             = { type = 13500 id = 332 }
      name           = "3ème Brigade de Tirailleurs Sénégalais"
      type           = militia
      model          = 3
    }
  }
  landunit = {
    id       = { type = 13500 id = 333 }
    name     = "Troupes d'Afrique équatoriale"
    location = 920
    division = {
      id             = { type = 13500 id = 334 }
      name           = "Tirailleurs du Tchad"
      type           = militia
      model          = 3
    }
  }
  landunit = {
    id       = { type = 13500 id = 335 }
    name     = "Troupes d'Afrique orientale"
    location = 1001
    division = {
      id             = { type = 13500 id = 336 }
      name           = "Tirailleurs Malgaches"
      type           = militia
      model          = 3
    }
  }

  navalunit = {
    id       = { type = 13500 id = 118 }
    name     = "1ère Flotte"
    location = 37
    base     = 37
    division = {
      id             = { type = 13500 id = 119 }
      name           = "Béarn"
      type           = escort_carrier
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 120 }
      name           = "1ère Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13500 id = 121 }
      name           = "Lorraine"
      type           = battleship
      model          = 3
      extra1         = naval_anti_air_l
      extra2         = floatplane
      brigade_model2 = 4
    }
    division = {
      id             = { type = 13500 id = 122 }
      name           = "Provence"
      type           = battleship
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 123 }
      name           = "Colbert"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13500 id = 124 }
      name           = "Dupleix"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13500 id = 125 }
      name           = "Emile Bertin"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 128 }
      name           = "Algérie"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13500 id = 126 }
      name           = "Primauguet"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 127 }
      name           = "Duguay-Trouin"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 129 }
      name           = "Lamotte-Picquet"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 131 }
      name           = "La Galissonnière"
      type           = light_cruiser
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13500 id = 130 }
    name     = "2ème Flotte"
    location = 86
    base     = 86
    division = {
      id             = { type = 13500 id = 132 }
      name           = "Courbet"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 133 }
      name           = "Paris"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 134 }
      name           = "Suffren"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13500 id = 135 }
      name           = "Duquesne"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13500 id = 136 }
      name           = "Pluton"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 137 }
      name           = "Jeanne d'Arc"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 139 }
      name           = "2ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13500 id = 138 }
      name           = "3ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13500 id = 140 }
    name     = "3ème Flotte"
    location = 728
    base     = 728
    division = {
      id             = { type = 13500 id = 142 }
      name           = "Bretagne"
      type           = battleship
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 143 }
      name           = "Foch"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13500 id = 307 }
      name           = "Commandant Teste"
      type           = escort_carrier
      model          = 0
      extra1         = naval_anti_air_l
      brigade_model1 = 0
    }
    division = {
      id             = { type = 13500 id = 144 }
      name           = "Tourville"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13500 id = 145 }
      name           = "4ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 146 }
      name           = "5ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 147 }
      name           = "6ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 148 }
      name           = "7ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13500 id = 149 }
    name     = "1ère Flotte de Sous-marins"
    location = 86
    base     = 86
    division = {
      id             = { type = 13500 id = 150 }
      name           = "Surcouf"
      type           = nuclear_submarine
      model          = 0
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13500 id = 151 }
      name           = "1ère Flottille de Sous-Marins"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 152 }
      name           = "2ème Flottille de Sous-Marins"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 153 }
      name           = "3ème Flottille de Sous-Marins"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 154 }
      name           = "4ème Flottille de Sous-Marins"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13500 id = 155 }
    name     = "2ème Flotte de Sous-marins"
    location = 86
    base     = 86
    division = {
      id             = { type = 13500 id = 156 }
      name           = "5ème Flottille de Sous-Marins"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 157 }
      name           = "6ème Flottille de Sous-Marins"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 158 }
      name           = "7ème Flottille de Sous-Marins"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 159 }
      name           = "8ème Flottille de Sous-Marins"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13500 id = 160 }
    name     = "3ème Flotte de Sous-marins"
    location = 727
    base     = 727
    division = {
      id             = { type = 13500 id = 161 }
      name           = "9ème Flottille de Sous-Marins"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 162 }
      name           = "10ème Flottille de Sous-Marins"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 163 }
      name           = "11ème Flottille de Sous-Marins"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13500 id = 167 }
    name     = "Transport Expéditionnaire"
    location = 86
    base     = 86
    division = {
      id             = { type = 13500 id = 168 }
      name           = "1ère Flottille de Convoi"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 169 }
      name           = "2ème Flottille de Convoi"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 170 }
      name           = "3ème Flottille de Convoi"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 171 }
      name           = "8ème Flottille de Contre-torpilleurs"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 172 }
      name           = "9ème Flottille de Contre-torpilleurs"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 173 }
      name           = "10ème Flottille de Contre-torpilleurs"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13500 id = 174 }
    name     = "Transport Général"
    location = 86
    base     = 86
    division = {
      id             = { type = 13500 id = 175 }
      name           = "4ème Flottille de Convoi"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 176 }
      name           = "7ème Flottille de Convoi"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 177 }
      name           = "11ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 178 }
      name           = "12ème Flottille de Contre-torpilleurs"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13500 id = 179 }
    name     = "1ère Flotte de la France"
    location = 86
    base     = 86
    division = {
      id             = { type = 13500 id = 180 }
      name           = "13ème Flottille de Contre-torpilleurs"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 181 }
      name           = "14ème Flottille de Contre-torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 13500 id = 182 }
      name           = "6ème Flottille de Convoi"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 183 }
      name           = "5ème Flottille de Convoi"
      type           = transport
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13500 id = 184 }
    name     = "2e Flotte de la France"
    location = 37
    base     = 37
    division = {
      id             = { type = 13500 id = 185 }
      name           = "15ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 13500 id = 286 }
      name           = "16ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 13500 id = 188 }
    name     = "1ère Groupe de Bombardement"
    location = 55
    base     = 55
    division = {
      id             = { type = 13500 id = 189 }
      name           = "Groupe de Bombardement Tactique 1"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 190 }
      name           = "Groupe de Bombardement Tactique 2"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 191 }
      name           = "Groupe de Bombardement Tactique 3"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 192 }
    name     = "4ème Groupe de Bombardement"
    location = 728
    base     = 728
    division = {
      id             = { type = 13500 id = 293 }
      name           = "Groupe de Bombardement Tactique 6"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 294 }
    name     = "5ème Groupe de Bombardement"
    location = 89
    base     = 89
    division = {
      id             = { type = 13500 id = 295 }
      name           = "Groupe de Bombardement Tactique 7"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 196 }
    name     = "1er Groupe de Chasse"
    location = 55
    base     = 55
    division = {
      id             = { type = 13500 id = 197 }
      name           = "Groupe de Chasse 24"
      type           = interceptor
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 198 }
      name           = "Groupe de Chasse 21"
      type           = interceptor
      model          = 7
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 199 }
    name     = "3ème Groupe de Chasse"
    location = 89
    base     = 89
    division = {
      id             = { type = 13500 id = 200 }
      name           = "Groupe de Chasse 23"
      type           = interceptor
      model          = 7
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 13500 id = 300 }
    name           = "Dunkerque"
    type           = battlecruiser
    model          = 3
    cost           = 0.4
    new_model      = no
    date           = { year = 1937 month = may day = 1 }
  }
  division_development = {
    id             = { type = 13500 id = 301 }
    name           = "Strasbourg"
    type           = battlecruiser
    model          = 3
    cost           = 0.4
    new_model      = no
    date           = { year = 1939 month = april day = 6 }
  }
  division_development = {
    id             = { type = 13500 id = 302 }
    name           = "George Leygues"
    type           = light_cruiser
    model          = 4
    cost           = 0.4
    new_model      = no
    date           = { year = 1937 month = november day = 15 }
  }
  division_development = {
    id             = { type = 13500 id = 303 }
    name           = "Gloire"
    type           = light_cruiser
    model          = 4
    cost           = 0.4
    new_model      = no
    date           = { year = 1937 month = november day = 15 }
  }
  division_development = {
    id             = { type = 13500 id = 304 }
    name           = "Marsellaise"
    type           = light_cruiser
    model          = 4
    cost           = 0.4
    new_model      = no
    date           = { year = 1937 month = october day = 10 }
  }
  division_development = {
    id             = { type = 13500 id = 305 }
    name           = "Jean de Vienne"
    type           = light_cruiser
    model          = 4
    cost           = 0.4
    new_model      = no
    date           = { year = 1937 month = february day = 10 }
  }
  division_development = {
    id             = { type = 13500 id = 306 }
    name           = "Montcalm"
    type           = light_cruiser
    model          = 4
    cost           = 0.4
    new_model      = no
    date           = { year = 1937 month = november day = 15 }
  }
  division_development = {
    id             = { type = 13500 id = 308 }
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = may day = 1 }
  }
  division_development = {
    id             = { type = 13500 id = 309 }
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = may day = 1 }
  }
  division_development = {
    id             = { type = 13500 id = 310 }
    name           = "17ème Flottille de Contre-Torpilleurs"
    type           = destroyer
    model          = 5
    cost           = 0.2
    date           = { year = 1936 month = april day = 15 }
  }
  division_development = {
    id             = { type = 13500 id = 311 }
    name           = "18ème Flottille de Contre-Torpilleurs"
    type           = destroyer
    model          = 5
    cost           = 0.2
    date           = { year = 1936 month = may day = 20 }
  }
  division_development = {
    id             = { type = 13500 id = 312 }
    name           = "19ème Flottille de Contre-Torpilleurs"
    type           = destroyer
    model          = 5
    cost           = 0.2
    date           = { year = 1936 month = june day = 24 }
  }
  division_development = {
    id             = { type = 13500 id = 313 }
    name           = "20ème Flottille de Contre-Torpilleurs"
    type           = destroyer
    model          = 5
    cost           = 0.2
    date           = { year = 1936 month = july day = 10 }
  }
}
