##############################
# Country definition for GER #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = GER
  ai_settings        = { flags = { GERBuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 163 # Berlin
  manpower           = 124.5
  peacetime_ic_mod       = 0.9
  # Resource Reserves
  energy         = 9000
  metal          = 4500
  rare_materials = 2250
  oil            = 1000
  supplies       = 500
  money          = 70
  transports     = 450
  escorts        = 23

  diplomacy = {
    relation = { tag = ARG value = 75 }
    relation = { tag = AST value = 1 }
    relation = { tag = AUS value = 100 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = { tag = BUL value = 25 }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation = { tag = CZE value = -25 }
    relation = { tag = ENG value = 1 }
    relation = {
      tag        = DEN
      value      = 25
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = EST value = 10 }
    relation = { tag = FIN value = 25 }
    relation = { tag = FRA value = -35 }
    relation = { tag = GRE value = 15 }
    relation = { tag = HOL value = 1 }
    relation = { tag = HUN value = 100 }
    relation = { tag = IRE value = 15 }
    relation = { tag = IRQ value = 25 }
    relation = {
      tag        = ITA
      value      = -50
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 10 }
    relation = { tag = LIT value = -50 }
    relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 1 }
    relation = { tag = POL value = -10 }
    relation = { tag = POR value = 75 }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 1 }
    relation = {
      tag        = SCH
      value      = 50
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = -50 }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = 100 }
    relation = { tag = USA value = -10 }
    relation = { tag = YEM value = 1 }
    relation = { tag = YUG value = 50 }
  }
  SpyInfo                = { country = "GER" NumberOfSpies = 7 }

  nationalprovinces      = { 126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 181 182 183 184 185 216 221 224 225 261 389 392 143 186 187 188 189 190 191 192 193 194 195 401 402 }
  ownedprovinces         = { 126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 182 183 184 185 }
  controlledprovinces    = { 126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 182 183 184 185 }
  claimedprovinces       = { 846 847 848 849 850 851 882 883 884 885 886 908 909 910 911 919 925 928 933 936 948 950 955 1234 1587 1602 1603 1605 1610 1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1677 1681 1684 1685 1686 1725 1726 1727 1731 1328 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1396 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 2860 2870 2880 2020 2150 7600 7610 2620 2010 2630 2640 2646 2650 2030 2290 2300 2310 2900 2910 2920 2930 2800 2450 21180 21190 21200 2810 2820 2510 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3610 3620 3630 3640 3650 3510 4900 12100 12110 3720 3730 3736 3740 3750 3900 3810 3820 4290 4250 4300 4310 4320 4330 4340 4400 4800 4810 4820 4700 4710 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4740 4750 4760 5810 5820 5050 5830 5060 5800 5080 5090 5190 5200 5310 54010 54020 54030 5316 5326 5560 5700 5710 5010 5020 5600 5610 5620 5630 6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910 6210 6220 6230 6250 6900 14000 14010 14020 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9090 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8520 8550 8560 8570 8600 8610 81300 81310 81320 81330 81340 81350 8100 8110 8120 8150 8160 8170 8200 8210 7550 7690 }
  blueprints             = { 6240 6260 6270 7560 }
  inventions             = { 3000027 3000028 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    freedom           = 2
    free_market       = 5
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 1 } # Adolf Hitler
  headofgovernment       = { type = 9 id = 2 } # Rudolf Hess
  foreignminister        = { type = 9 id = 3 } # Konstantin von Neurath
  armamentminister       = { type = 9 id = 4 } # Werner von Blomberg
  ministerofsecurity     = { type = 9 id = 5 } # Wilhelm Frick
  ministerofintelligence = { type = 9 id = 6 } # Wilhelm Canaris
  chiefofstaff           = { type = 9 id = 7 } # Ludwig Beck
  chiefofarmy            = { type = 9 id = 8 } # Werner von Fritsch
  chiefofnavy            = { type = 9 id = 9 } # Erich Raeder
  chiefofair             = { type = 9 id = 10 } # Hermann Göring
  dormant_leaders        = { 36 44 54 66 67 223 226 292 352 473 479 526 542 543 544 546 547 549 550 551 553 558 559 560 561 562 563 567 571 572 573 578 595 686 712 746 749 816 821 909 983 992 576 1007 1008 }

  landunit = {
    id       = { type = 14500 id = 34 }
    name     = "I. Armeekorps"
    location = 184
    division = {
      id             = { type = 14500 id = 35 }
      name           = "1. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 36 }
      name           = "11. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 37 }
      name           = "21. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1001 }
      name           = "61. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1002 }
      name           = "206. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1003 }
      name           = "217. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1004 }
      name           = "228. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 38 }
    name     = "II. Armeekorps"
    location = 158
    division = {
      id             = { type = 14500 id = 39 }
      name           = "75. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 40 }
      name           = "207. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 41 }
      name           = "12. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1005 }
      name           = "258. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 42 }
    name     = "III. Armeekorps"
    location = 163
    leader   = 608
    division = {
      id             = { type = 14500 id = 1706 }
      name           = "Oberkommando des Heeres"
      type           = hq
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14500 id = 1080 }
      name           = "Hitler and Staff"
      type           = d_10
      model          = 0
      experience     = 100
      locked         = yes
    }
    division = {
      id             = { type = 14500 id = 43 }
      name           = "3. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 44 }
      name           = "23. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 3
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1006 }
      name           = "50. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1007 }
      name           = "68. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1008 }
      name           = "76. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1009 }
      name           = "208. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1010 }
      name           = "218. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1011 }
      name           = "257. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1012 }
      name           = "93. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 45 }
    name     = "VIII. Armeekorps"
    location = 167
    division = {
      id             = { type = 14500 id = 46 }
      name           = "8. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 47 }
      name           = "62. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 48 }
      name           = "18. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 3
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1013 }
      name           = "213. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1014 }
      name           = "221. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1015 }
      name           = "252. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 49 }
    name     = "V. Armeekorps"
    location = 134
    division = {
      id             = { type = 14500 id = 50 }
      name           = "78. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 51 }
      name           = "5. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 52 }
      name           = "260. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 53 }
    name     = "VI. Armeekorps"
    location = 141
    division = {
      id             = { type = 14500 id = 54 }
      name           = "6. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 55 }
      name           = "16. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 56 }
      name           = "69. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1016 }
      name           = "86. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1017 }
      name           = "211. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1018 }
      name           = "227. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1019 }
      name           = "253. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1020 }
      name           = "254. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 57 }
    name     = "IX. Armeekorps"
    location = 137
    division = {
      id             = { type = 14500 id = 58 }
      name           = "9. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 59 }
      name           = "15. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = anti_air
      brigade_model  = 2
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 60 }
      name           = "52. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1021 }
      name           = "214. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1022 }
      name           = "239. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1023 }
      name           = "251. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1024 }
      name           = "95. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 61 }
    name     = "XII. Armeekorps"
    location = 140
    division = {
      id             = { type = 14500 id = 62 }
      name           = "79. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 63 }
      name           = "246. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 64 }
      name           = "262. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1025 }
      name           = "263. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 65 }
    name     = "IV. Armeekorps"
    location = 173
    division = {
      id             = { type = 14500 id = 66 }
      name           = "4. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 67 }
      name           = "14. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 68 }
      name           = "24. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1026 }
      name           = "56. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1027 }
      name           = "87. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1028 }
      name           = "209. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1029 }
      name           = "223. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1030 }
      name           = "255. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1031 }
      name           = "256. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1032 }
      name           = "94. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 69 }
    name     = "VII. Armeekorps"
    location = 179
    division = {
      id             = { type = 14500 id = 70 }
      name           = "57. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 71 }
      name           = "7. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 72 }
      name           = "212. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 73 }
      name           = "168. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 74 }
    name     = "X. Armeekorps"
    location = 154
    division = {
      id             = { type = 14500 id = 75 }
      name           = "58. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 76 }
      name           = "22. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 77 }
      name           = "70. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1033 }
      name           = "215. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1034 }
      name           = "225. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1035 }
      name           = "269. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 78 }
    name     = "XI. Armeekorps"
    location = 146
    division = {
      id             = { type = 14500 id = 79 }
      name           = "71. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 80 }
      name           = "19. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = anti_air
      brigade_model  = 2
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 81 }
      name           = "216. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1036 }
      name           = "267. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1037 }
      name           = "96. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 82 }
    name     = "XVI. Armeekorps"
    location = 163
    division = {
      id             = { type = 14500 id = 83 }
      name           = "1. Panzer-Division"
      type           = light_armor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 84 }
      name           = "2. Panzer-Division"
      type           = light_armor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 85 }
      name           = "3. Panzer-Division"
      type           = light_armor
      model          = 0
      strength       = 65
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 14500 id = 1038 }
    name     = "XIII. Armeekorps"
    location = 177
    division = {
      id             = { type = 14500 id = 1039 }
      name           = "17. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1040 }
      name           = "10. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1041 }
      name           = "73. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1042 }
      name           = "231. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1043 }
      name           = "98. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 14500 id = 1 }
    name     = "Kriegsmarine"
    location = 147
    base     = 147
    division = {
      id             = { type = 14500 id = 2 }
      name           = "Deutschland"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 3 }
      name           = "Admiral Scheer"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 4 }
      name           = "Nürnberg"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 5 }
      name           = "Leipzig"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 6 }
      name           = "Königsberg"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 7 }
      name           = "Karlsruhe"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 8 }
      name           = "Köln"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 9 }
      name           = "Emden"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 10 }
      name           = "3. Zerstörergeschwader"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 33 }
      name           = "4. Zerstörergeschwader"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 14500 id = 104 }
    name     = "I. Truppentransporter Flotte"
    location = 147
    base     = 147
    division = {
      id             = { type = 14500 id = 105 }
      name           = "1. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 106 }
      name           = "2. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 107 }
      name           = "3. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14500 id = 20 }
    name     = "II. Unterseebootsflotte"
    location = 152
    base     = 152
    division = {
      id             = { type = 14500 id = 21 }
      name           = "2. Unterseebootsflottille"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 25 }
      name           = "3. Unterseebootsflottille"
      type           = submarine
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 14500 id = 26 }
    name     = "I. Unterseebootsflotte"
    location = 147
    base     = 147
    division = {
      id             = { type = 14500 id = 27 }
      name           = "1. Unterseebootsflottille"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 200 }
      name           = "4. Unterseebootsflottille"
      type           = submarine
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 14500 id = 28 }
    name     = "Baltische Flotte"
    location = 184
    base     = 184
    division = {
      id             = { type = 14500 id = 29 }
      name           = "Schleswig-Holstein"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 30 }
      name           = "Schlesien"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 157 }
      name           = "Hannover"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 31 }
      name           = "1. Zerstörergeschwader"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 32 }
      name           = "2. Zerstörergeschwader"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 155 }
      name           = "5. Zerstörergeschwader"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 156 }
      name           = "6. Zerstörergeschwader"
      type           = destroyer
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 14500 id = 86 }
    name     = "Luftflotte II"
    location = 163
    base     = 163
    division = {
      id             = { type = 14500 id = 87 }
      name           = "KG 2 'Holzhammer'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 88 }
      name           = "KG 3 'Blitz'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 89 }
      name           = "Sturzkampfgeschwader 51"
      type           = cas
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 90 }
      name           = "JG 2 'Richthofen'"
      type           = interceptor
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 91 }
      name           = "JG 26 'Schlageter'"
      type           = interceptor
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 92 }
      name           = "Kampfgeschwader zbV 172 'Hindenburg'"
      type           = transport_plane
      model          = 1
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 14500 id = 95 }
    name     = "Luftflotte III"
    location = 167
    base     = 167
    division = {
      id             = { type = 14500 id = 96 }
      name           = "KG 53 'Legion Condor'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 97 }
      name           = "Kampfgeschwader 25"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 98 }
      name           = "KG 30 'Adler'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 99 }
    name     = "Luftflotte IV"
    location = 137
    base     = 137
    division = {
      id             = { type = 14500 id = 100 }
      name           = "KG 1 'Hindenburg'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 101 }
      name           = "JG 3 'Udet'"
      type           = interceptor
      model          = 7
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 102 }
    name     = "Luftflotte V"
    location = 179
    base     = 179
    division = {
      id             = { type = 14500 id = 103 }
      name           = "KG 4 'General Wever'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 14500 id = 500 }
    name           = "Admiral Graf Spee"
    type           = heavy_cruiser
    model          = 4
    cost           = 0.2
    new_model      = no
    date           = { year = 1936 month = january day = 6 }
  }
  division_development = {
    id             = { type = 14500 id = 501 }
    name           = "Admiral Hipper"
    type           = heavy_cruiser
    model          = 5
    cost           = 0.2
    new_model      = no
    date           = { year = 1939 month = april day = 25 }
    size           = 2
  }
  division_development = {
    id             = { type = 14500 id = 502 }
    name           = "Blücher"
    type           = heavy_cruiser
    model          = 5
    cost           = 0.2
    new_model      = no
    date           = { year = 1939 month = september day = 20 }
    size           = 2
  }
  division_development = {
    id             = { type = 14500 id = 503 }
    name           = "Gneisenau"
    type           = battlecruiser
    model          = 3
    cost           = 0.3
    new_model      = no
    date           = { year = 1938 month = may day = 21 }
  }
  division_development = {
    id             = { type = 14500 id = 504 }
    name           = "Scharnhorst"
    type           = battlecruiser
    model          = 3
    cost           = 0.3
    new_model      = no
    date           = { year = 1939 month = january day = 7 }
  }
  division_development = {
    id             = { type = 14500 id = 565 }
    name           = "7. Zerstörergeschwader"
    type           = destroyer
    model          = 5
    cost           = 0.1
    date           = { year = 1936 month = march day = 1 }
    size           = 6
  }
  division_development = {
    id             = { type = 14500 id = 566 }
    name           = "8. Zerstörergeschwader"
    type           = destroyer
    model          = 5
    cost           = 0.1
    date           = { year = 1936 month = april day = 1 }
    size           = 6
  }
  division_development = {
    id             = { type = 14500 id = 567 }
    name           = "9. Zerstörergeschwader"
    type           = destroyer
    model          = 5
    cost           = 0.1
    date           = { year = 1936 month = may day = 1 }
    size           = 6
  }
  division_development = {
    id             = { type = 14500 id = 603 }
    name           = "5. Unterseebootsflottille"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = march day = 29 }
  }
  division_development = {
    id             = { type = 14500 id = 604 }
    name           = "6. Unterseebootsflottille"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = april day = 29 }
  }
  division_development = {
    id             = { type = 14500 id = 605 }
    name           = "7. Unterseebootsflottille"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = may day = 29 }
  }
  division_development = {
    id             = { type = 14500 id = 507 }
    name           = "32. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 508 }
    name           = "26. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 509 }
    name           = "36. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 510 }
    name           = "25. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = april day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 511 }
    name           = "35. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 512 }
    name           = "27. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 513 }
    name           = "28. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 514 }
    name           = "30. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 515 }
    name           = "31. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 516 }
    name           = "33. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = april day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 517 }
    name           = "34. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = april day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 518 }
    name           = "2. Infanterie-Division (mot.)"
    type           = motorized
    model          = 0
    cost           = 0.1
    date           = { year = 1937 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 519 }
    name           = "13. Infanterie-Division (mot.)"
    type           = motorized
    model          = 0
    cost           = 0.1
    date           = { year = 1937 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 520 }
    name           = "20. Infanterie-Division (mot.)"
    type           = motorized
    model          = 0
    cost           = 4.5
    date           = { year = 1937 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 521 }
    name           = "29. Infanterie-Division (mot.)"
    type           = motorized
    model          = 0
    cost           = 0.1
    date           = { year = 1937 month = october day = 1 }
  }

  province_development = {
    id             = { type = 14500 id = 540 }
    location       = 132
    cost           = 0.1000
    date           = { year = 1964 month = january day = 0 }
    size           = 4
    type           = land_fort
  }
  province_development = {
    id             = { type = 14500 id = 541 }
    location       = 127
    cost           = 0.1000
    date           = { year = 1964 month = january day = 0 }
    size           = 4
    type           = land_fort
  }
  province_development = {
    id             = { type = 14500 id = 542 }
    location       = 130
    cost           = 0.1000
    date           = { year = 1964 month = january day = 0 }
    size           = 4
    type           = land_fort
  }
  province_development = {
    id             = { type = 14500 id = 546 }
    location       = 152
    cost           = 0.1000
    date           = { year = 1964 month = january day = 0 }
    size           = 3
    type           = coastal_fort
  }

  convoy_development = {
    id             = { type = 14500 id = 543 }
    cost           = 0.1000
    date           = { year = 1964 month = january day = 0 }
    size           = 20
    type           = escorts
  }
  convoy_development = {
    id             = { type = 14500 id = 544 }
    cost           = 0.1000
    date           = { year = 1964 month = january day = 0 }
    size           = 20
    type           = transports
  }
  convoy_development = {
    id             = { type = 14500 id = 545 }
    cost           = 0.1000
    date           = { year = 1964 month = january day = 0 }
    size           = 20
    type           = transports
  }

  landdivision = { dormant = yes id = { type = 14500 id = 1045 } name = "22. (LL.) Infanterie-Division"  type = paratrooper model = 0 experience = 40 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1046 } name = "1. SS-Inf.Div. Leibstandarte Adolf Hitler"  type = d_01 model = 0 strength = 30 max_strength = 30 experience = 100 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1047 } name = "1.SS-Pz.Div. LSSAH"  type = d_04 model = 0 experience = 100 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1048 } name = "3. SS-Inf.Div. Totenkopf"  type = d_02 model = 1 experience = 80 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1049 } name = "3. SS-Pz.Div. 'Totenkopf'"  type = d_04 model = 1 experience = 80 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1050 } name = "2. SS-Div. Verfügungstruppe"  type = d_01 model = 0 strength = 60 max_strength = 30 experience = 80 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1051 } name = "2. SS-Inf.Div. „Reich“ (mot.) "  type = d_02 model = 0 experience = 80 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1052 } name = "2. SS-Pz.Div. 'Das Reich'"  type = d_04 model = 1 experience = 80 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1053 } name = "2. SS-Inf.Div. 'Polizei-Division'"  type = d_01 model = 1 experience = 50 extra = police brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1054 } name = "4. SS-Polizei-Panzergrenadier-Division"  type = d_03 model = 0 experience = 50 extra = police brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1055 } name = "5. SS-Inf.Div. 'Wiking'"  type = d_01 model = 1 experience = 40 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1056 } name = "5. SS-Pz.Div. 'Wiking'"  type = d_04 model = 1 experience = 40 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1057 } name = "6. SS-Gebirgs-Div. 'Nord'"  type = d_01 model = 2 experience = 30 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1058 } name = "7. SS-Freiwilligen-Gebirgs-Div. 'Prinz Eugen'"  type = d_01 model = 1 experience = 20 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1059 } name = "8. SS-Kavallerie-Div. 'Florian Geyer'"  type = d_01 model = 2 experience = 20 extra = cavalry_brigade brigade_model = 11 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1060 } name = "9. SS-Pz.Div. 'Hohenstaufen'"  type = d_04 model = 1 experience = 80 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1061 } name = "10. SS-Pz.Div. 'Frundsberg'"  type = d_04 model = 1 experience = 80 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1062 } name = "11. SS-Freiwilligen-Panzergrenadier-Div. 'Nordland'"  type = d_03 model = 0 experience = 20 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1063 } name = "12. SS-Inf.Pz. 'Hitlerjugend'"  type = d_04 model = 1 experience = 80 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1064 } name = "Infanterie-Div. 'Großdeutschland' (mot.)"  type = motorized model = 1 experience = 100 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1065 } name = "Panzergrenadier-Div. 'Großdeutschland'"  type = mechanized model = 0 experience = 100 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1066 } name = "Panzer-Lehr-Div."  type = armor model = 3 experience = 100 extra = super_heavy_armor brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1067 } name = "7. Fliegerdivision"  type = paratrooper model = 0 experience = 100 extra = glider_artillery brigade_model = 0 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1068 } name = "13. Waffen-Gebirgs-Div. der SS 'Handschar'"  type = d_08 model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1069 } name = "14. Waffen-Grenadier-Div. der SS (galizische Nr. 1)"  type = d_08 model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1070 } name = "15. Waffen-Grenadier-Div. der SS (lettische Nr. 1)"  type = d_08 model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1071 } name = "16. SS-Panzergrenadier-Div. 'Reichsführer SS'"  type = d_03 model = 0 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1072 } name = "17. SS-Panzergrenadier-Div. 'Götz von Berlichingen'"  type = d_03 model = 0 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1073 } name = "18. SS-Freiwilligen-Panzergrenadier-Div. 'Horst Wessel'"  type = d_03 model = 0 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1074 } name = "19. Waffen-Grenadier-Div. der SS (lettische Nr. 2)"  type = d_08 model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1077 } name = "2. Infanterie-Division (Mot)"  type = motorized model = 1 experience = 20 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1078 } name = "61. Infanterie-Division (Mot)"  type = motorized model = 1 experience = 20 } 
  landdivision = { dormant = yes id = { type = 14500 id = 1079 } name = "206. Infanterie-Division (Mot)"  type = motorized model = 1 experience = 20 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2027 } name = "1. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2028 } name = "2. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2029 } name = "3. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2030 } name = "4. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2031 } name = "5. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2032 } name = "6. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2033 } name = "7. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2034 } name = "8. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2035 } name = "9. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2036 } name = "10. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2037 } name = "11. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2038 } name = "12. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2039 } name = "13. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2040 } name = "14. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2041 } name = "15. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2042 } name = "16. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2043 } name = "17. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2044 } name = "18. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2045 } name = "19. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2046 } name = "2. Gebirgsjäger-Division"  type = bergsjaeger model = 10 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2047 } name = "3. Gebirgsjäger-Division"  type = bergsjaeger model = 10 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2048 } name = "169. Infanterie-Division"  type = infantry model = 10 extra = medium_armor brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2049 } name = "SS-Division Nord"  type = motorized model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2100 } name = "20. Festung Europa"  type = garrison model = 5 extra = anti_air brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2101 } name = "21. Festung Europa"  type = garrison model = 5 extra = anti_air brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2102 } name = "22. Festung Europa"  type = garrison model = 5 extra = anti_air brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2103 } name = "23. Festung Europa"  type = garrison model = 5 extra = anti_air brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2104 } name = "24. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2105 } name = "25. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2106 } name = "26. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2107 } name = "27. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2108 } name = "28. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2109 } name = "29. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2110 } name = "30. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2111 } name = "31. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2112 } name = "32. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2113 } name = "33. Festung Europa"  type = garrison model = 5 extra = anti_air brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2114 } name = "34. Festung Europa"  type = garrison model = 5 extra = anti_air brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 2050 } name = "Turkistanische Legion"  type = militia model = 4 strength = 10 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2051 } name = "369. (Kroatische) Infanterie-Division"  type = infantry model = 9 strength = 65 max_strength = 65 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2052 } name = "373. (Kroatische) Infanterie-Division"  type = infantry model = 9 strength = 100 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2053 } name = "392. (Kroatische) Infanterie-Division"  type = infantry model = 9 strength = 100 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2054 } name = "Armenische Legion"  type = militia model = 4 strength = 100 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2055 } name = "Aserbaidschanische Legion"  type = militia model = 4 strength = 100 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2056 } name = "Freikorps Dänemark"  type = infantry model = 9 strength = 40 max_strength = 40 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2057 } name = "Kalmücken-Kavallerie-Korps"  type = cavalry model = 9 strength = 55 max_strength = 55 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2058 } name = "Georgische Legion"  type = militia model = 4 strength = 100 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2059 } name = "1. Kosaken-Division"  type = cavalry model = 9 strength = 55 max_strength = 55 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2060 } name = "Legion of French Volunteers Against Bolshevism"  type = infantry model = 9 strength = 20 max_strength = 50 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2061 } name = "Russisches Schutzkorps Serbien"  type = militia model = 4 strength = 100 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2062 } name = "Russische Befreiungsarmee"  type = militia model = 4 strength = 100 } 

  airdivision = { dormant = yes id = { type = 14500 id = 1075 } name = "Legion Condor" type = tactical_bomber model = 5 experience = 80 }
  airdivision = { dormant = yes id = { type = 14500 id = 1076 } name = "JV 44 'Der Galland-Zirkus'" type = interceptor model = 11 strength = 100 experience = 100 }
}
