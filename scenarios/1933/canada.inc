##############################
# Country definition for CAN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CAN
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 2108 # Ottawa
  manpower           = 18
  # Resource Reserves
  energy         = 2460
  metal          = 1230
  rare_materials = 615
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100
  escorts        = 10

  diplomacy = {
    relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = HOL value = 80 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 175 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "CAN" NumberOfSpies = 6 }

  nationalprovinces      = { 2089 2090 2091 2092 2093 2094 2095 2096 2097 2098 2099 2100 2101 2102 2103 2104 2105 2106 2107 2108 2109 2110 2111 2112 2113 2114 2115 2116 2117 2118 2119 2120 2121 2122 2123 2124 2125 2126 2127 2128 2129 2130 2131 2132 2133 2134 2135 2136 2137 2138 2148 2149 }
  ownedprovinces         = { 2089 2090 2091 2092 2093 2094 2095 2096 2097 2098 2099 2100 2101 2102 2103 2104 2105 2106 2107 2108 2109 2110 2111 2112 2113 2114 2115 2116 2117 2118 2119 2120 2121 2122 2123 2124 2125 2126 2127 2128 2129 2130 2131 2132 2133 2134 2148 2149 }
  controlledprovinces    = { 2089 2090 2091 2092 2093 2094 2095 2096 2097 2098 2099 2100 2101 2102 2103 2104 2105 2106 2107 2108 2109 2110 2111 2112 2113 2114 2115 2116 2117 2118 2119 2120 2121 2122 2123 2124 2125 2126 2127 2128 2129 2130 2131 2132 2133 2134 2148 2149 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 14000 14010 14020 1910 1920 1930 1940 1950 1960 1970 1980 1830 1840 1850 1860 7600 7610 2620 2010 2630 2860 2870 2880 2020 2290 2300 2310 2800 2450 21180 21190 21200 2810 2820 2510 3010 3020 3030 3040 3050 3060 3110 3120 3130 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4300 4310 4320 4330 4800 4810 4820 4740 4750 4760 4770 4290 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5090 5310 54010 54020 54030 5316 5326 3610 3620 3630 3640 3720 3730 3736 3740 3900 3810 3820 5600 5610 5620 5630 5560 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8600 8900 8910 8920 8930 8940 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9140 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 2
    freedom           = 10
    free_market       = 10
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 220001 } # Sir John Buchan
  headofgovernment       = { type = 9 id = 220002 } # Mackenzie King
  foreignminister        = { type = 9 id = 220003 } # Mackenzie King
  armamentminister       = { type = 9 id = 220004 } # Ian A. Mackenzie
  ministerofsecurity     = { type = 9 id = 220005 } # Ernest Lapointe
  ministerofintelligence = { type = 9 id = 220006 } # Henry Crerar
  chiefofstaff           = { type = 9 id = 220007 } # Ernest Ashton
  chiefofarmy            = { type = 9 id = 220008 } # Ernest Ashton
  chiefofnavy            = { type = 9 id = 220009 } # Percy Nelles
  chiefofair             = { type = 9 id = 220010 } # George Croil

  landunit = {
    id       = { type = 20000 id = 1 }
    name     = "Canadian Army"
    location = 2108
    division = {
      id             = { type = 20000 id = 2 }
      name           = "1st Canadian Infantry Division"
      type           = infantry
      model          = 7
      strength       = 25
    }
    division = {
      id             = { type = 20000 id = 3 }
      name           = "2nd Canadian Infantry Division"
      type           = infantry
      model          = 7
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 20000 id = 500 }
    name     = "Canadian Transport Fleet"
    location = 2132
    base     = 2132
    division = {
      id             = { type = 30053 id = 504 }
      name           = "'Empress of Canada' Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 30053 id = 505 }
      name           = "'Empress of Russia' Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 30053 id = 506 }
      name           = "'Empress of Asia' Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 30053 id = 2279 }
      name           = "Destroyer Flotilla 2"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 30053 id = 2280 }
      name           = "Destroyer Flotilla 4"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 20000 id = 7 }
    name     = "Royal Canadian Navy"
    location = 2132
    base     = 2132
    division = {
      id             = { type = 20000 id = 8 }
      name           = "Destroyer Flotilla 1"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 30053 id = 501 }
      name           = "'Empress of Japan' Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 30053 id = 502 }
      name           = "'Empress of Australia' Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 30053 id = 503 }
      name           = "'Empress of Britain' Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 30053 id = 2282 }
      name           = "Destroyer Flotilla 3"
      type           = destroyer
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 20000 id = 4 }
    name     = "Royal Canadian Air Force"
    location = 2108
    base     = 2108
    division = {
      id             = { type = 20000 id = 5 }
      name           = "No.1 Group RCAF"
      type           = multi_role
      model          = 2
      strength       = 15
    }
    division = {
      id             = { type = 20000 id = 6 }
      name           = "No.2 Group RCAF"
      type           = transport_plane
      model          = 0
      strength       = 15
    }
  }
}
