##############################
# Country definition for SOV #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SOV
  regular_id         = RUS
  ai                 = "SOV_1936.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes SOVBuildLand = yes } }
  intrinsic_gov_type = leninist
  capital            = 572 # Moscow
  dissent            = 20
  manpower           = 1953
  peacetime_ic_mod       = 0.75
  wartime_ic_mod         = 0.8
  industrial_modifier    = 0.8
  # Resource Reserves
  energy         = 12000
  metal          = 6000
  rare_materials = 3000
  oil            = 500
  supplies       = 500
  money          = 30
  transports     = 300
  escorts        = 20

  diplomacy = {
    relation = {
      tag        = AFG
      value      = 1
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = BRA value = -50 }
    relation = {
      tag        = BUL
      value      = 15
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = CHC value = 100 }
    relation = { tag = CZE value = 100 }
    relation = { tag = ENG value = -25 }
    relation = {
      tag        = EST
      value      = -30
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = FIN value = 1 }
    relation = {
      tag        = FRA
      value      = 100
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = { tag = GER value = 1 }
    relation = { tag = GRE value = 15 }
    relation = { tag = IRE value = 1 }
    relation = { tag = JAP value = -10 }
    relation = {
      tag        = LAT
      value      = -30
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = {
      tag        = LIT
      value      = 75
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = MON value = 150 access = yes }
    relation = {
      tag        = PER
      value      = -20
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = POL value = -50 }
    relation = { tag = ROM value = 1 }
    relation = { tag = SAU value = 1 }
    relation = { tag = SIK value = 125 }
    relation = { tag = SPR value = -10 }
    relation = {
      tag        = TAN
      value      = 200
      access     = yes
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = {
      tag        = TUR
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = URU value = -100 }
    relation = { tag = USA value = 35 }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1935 month = may day = 16 }
    }
  }
  SpyInfo                = { country = "SOV" NumberOfSpies = 10 }

  nationalprovinces      = { 498 499 500 501 502 503 504 505 506 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 1542 }
  ownedprovinces         = { 498 499 500 501 502 503 504 505 506 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 }
  controlledprovinces    = { 498 499 500 501 502 503 504 505 506 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1670 1830 1840 1850 1910 1920 1930 1940 1950 1960 1970 7600 7610 2620 2010 2630 2640 2646 2650 2030 2100 2860 2870 2880 2020 2290 2300 2310 2900 2910 2920 2930 2940 2800 2450 21180 2810 2820 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3650 12100 3720 3730 3736 3740 3750 3900 3810 4500 4510 4520 4530 4540 4550 4010 4020 4400 4600 4610 4620 4630 4120 4130 4300 4310 4320 4330 4340 4800 4810 4820 4700 4710 4290 4740 4750 4760 4770 5700 5710 5310 54010 54020 54030 5316 5326 5810 5820 5800 5080 5190 5600 5610 5620 5560 14000 6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910 6570 6300 6900 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8550 8560 8600 8610 81300 81310 81320 81330 81340 8100 8110 8120 8150 8160 8200 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 1
    free_market       = 1
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 30002 } # Iosif V. Stalin
  headofgovernment       = { type = 9 id = 30016 } # Vyacheslav M. Molotov
  foreignminister        = { type = 9 id = 30003 } # Maksim M. Litvinov
  armamentminister       = { type = 9 id = 30004 } # Lazar M. Kaganovich
  ministerofsecurity     = { type = 9 id = 30005 } # Genrikh G. Yagoda
  ministerofintelligence = { type = 9 id = 30006 } # Yan K. Berzin
  chiefofstaff           = { type = 9 id = 30007 } # Mikhail N. Tukhatchevskiy
  chiefofarmy            = { type = 9 id = 30008 } # Kliment Y. Voroshilov
  chiefofnavy            = { type = 9 id = 30009 } # Vladimir M. Orlov
  chiefofair             = { type = 9 id = 30010 } # Yakov I. Alksnis

  landunit = {
    id       = { type = 10848 id = 1 }
    name     = "Raboche-Krest'yanskaya Krasnaya Armyia"
    location = 572
    division = {
      id             = { type = 10848 id = 2 }
      name           = "Generalnyi Shtab RKKA"
      type           = hq
      model          = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 3 }
    name     = "Vozdushno Desantnye Voiska"
    location = 572
    division = {
      id             = { type = 10848 id = 4 }
      name           = "1-i Vozdushno-Desantnyi Korpus"
      type           = paratrooper
      model          = 0
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 10848 id = 5 }
    name     = "Voiska NKVD"
    location = 572
    division = {
      id             = { type = 10848 id = 6 }
      name           = "1-ya Konvoynaya Diviziya NKVD"
      type           = garrison
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 7 }
      name           = "Diviziya o. n. Dzerzhinskogo"
      type           = motorized
      model          = 0
      extra          = armored_car
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 8 }
    name     = "Leningradskyi Voennyi Okrug"
    location = 553
    division = {
      id             = { type = 10848 id = 9 }
      name           = "Leningradskyi Voennyi Okrug"
      type           = hq
      model          = 2
      extra          = anti_air
      brigade_model  = 0
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 10 }
      name           = "25-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 11 }
      name           = "7-i Mekhanizirovannyi Korpus"
      type           = light_armor
      model          = 0
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 12 }
    name     = "1-i Strelkovyi Korpus"
    location = 553
    division = {
      id             = { type = 10848 id = 13 }
      name           = "16-ya Ulianovskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 7
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 14 }
      name           = "18-ya Yaroslavskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 15 }
      name           = "20-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 10848 id = 16 }
    name     = "19-i Strelkovyi Korpus"
    location = 550
    division = {
      id             = { type = 10848 id = 17 }
      name           = "4-ya Turkestanskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 18 }
      name           = "56-ya Moskovskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 10848 id = 19 }
    name     = "5-i Kavaleriiski Korpus"
    location = 566
    division = {
      id             = { type = 10848 id = 20 }
      name           = "3-ya Bessarabskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 21 }
      name           = "14-ya Maykopskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 22 }
      name           = "16-ya Sibirskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 23 }
    name     = "33-i Strelkovyi Korpus"
    location = 550
    division = {
      id             = { type = 10848 id = 24 }
      name           = "11-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 25 }
      name           = "158-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 26 }
    name     = "29-i Strelkovyi Korpus"
    location = 553
    division = {
      id             = { type = 10848 id = 27 }
      name           = "54-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 28 }
      name           = "153-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 29 }
    name     = "Severnyi Voennyi Kommissariat"
    location = 542
    division = {
      id             = { type = 10848 id = 30 }
      name           = "10-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 31 }
      name           = "88-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 32 }
    name     = "Uralskyi Voennyi Okrug"
    location = 1151
    division = {
      id             = { type = 10848 id = 34 }
      name           = "65-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 35 }
      name           = "82-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 0
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 36 }
      name           = "85-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 37 }
      name           = "29-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 38 }
      name           = "110-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 39 }
      name           = "112-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 40 }
      name           = "86-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 41 }
      name           = "87-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 4
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10848 id = 42 }
    name     = "Belorusskyi Voennyi Okrug"
    location = 599
    division = {
      id             = { type = 10848 id = 43 }
      name           = "Belorusskyi Voennyi Okrug"
      type           = hq
      model          = 2
      extra          = anti_air
      brigade_model  = 0
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 44 }
      name           = "24-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = armored_car
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 45 }
      name           = "27-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 46 }
    name     = "4-i Strelkovyi Korpus"
    location = 599
    division = {
      id             = { type = 10848 id = 47 }
      name           = "27-ya Omskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 48 }
      name           = "2-ya Belorusskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 49 }
      name           = "8-ya Minskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 10848 id = 50 }
    name     = "5-i Strelkovyi Korpus"
    location = 598
    division = {
      id             = { type = 10848 id = 51 }
      name           = "4-ya Smolenskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 52 }
      name           = "37-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 53 }
      name           = "43-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 10848 id = 54 }
    name     = "11-i Strelkovyi Korpus"
    location = 590
    division = {
      id             = { type = 10848 id = 55 }
      name           = "5-ya Vitebskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 56 }
      name           = "29-ya Finskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 57 }
      name           = "64-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 58 }
    name     = "16-i Strelkovyi Korpus"
    location = 600
    division = {
      id             = { type = 10848 id = 59 }
      name           = "33-ya Belorusskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 60 }
      name           = "48-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 61 }
      name           = "81-ya Kaluzhskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 62 }
    name     = "3-i Kavaleriiski Korpus"
    location = 599
    division = {
      id             = { type = 10848 id = 63 }
      name           = "7-ya Samarskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 64 }
      name           = "11-ya Orenburgskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 65 }
    name     = "6-i Kavaleriiski Korpus"
    location = 609
    division = {
      id             = { type = 10848 id = 66 }
      name           = "6-ya Changarskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 67 }
    name     = "7-i Kavaleriiski Korpus"
    location = 596
    division = {
      id             = { type = 10848 id = 68 }
      name           = "4-ya Leningradskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 69 }
    name     = "22-i Strelkovyi Korpus"
    location = 599
    division = {
      id             = { type = 10848 id = 70 }
      name           = "63-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 71 }
      name           = "67-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 72 }
    name     = "23-i Strelkovyi Korpus"
    location = 598
    division = {
      id             = { type = 10848 id = 73 }
      name           = "76-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 74 }
      name           = "155-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 75 }
    name     = "24-i Strelkovyi Korpus"
    location = 590
    division = {
      id             = { type = 10848 id = 76 }
      name           = "150-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 77 }
      name           = "145-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 78 }
    name     = "28-i Strelkovyi Korpus"
    location = 600
    division = {
      id             = { type = 10848 id = 79 }
      name           = "62-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 80 }
      name           = "66-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 81 }
      name           = "120-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 82 }
    name     = "Moskovskyi Voennyi Okrug"
    location = 572
    division = {
      id             = { type = 10848 id = 83 }
      name           = "Moskovskyi Voennyi Okrug"
      type           = hq
      model          = 2
      extra          = anti_air
      brigade_model  = 0
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 84 }
      name           = "Osobaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 85 }
      name           = "30-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = engineer
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 86 }
      name           = "5-i Mekhanizirovannyi Korpus"
      type           = light_armor
      model          = 0
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 87 }
      name           = "Moskovskaya Proletarskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 88 }
      name           = "126-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 89 }
    name     = "2-i Territorialnyi Korpus"
    location = 678
    division = {
      id             = { type = 10848 id = 90 }
      name           = "14-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 91 }
      name           = "49-ya Krasnozamennaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 92 }
      name           = "55-ya Kurskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 93 }
    name     = "3-i Territorialnyi Korpus"
    location = 584
    division = {
      id             = { type = 10848 id = 94 }
      name           = "6-ya Orlovskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 95 }
      name           = "52-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 96 }
      name           = "84-ya Tulskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 97 }
    name     = "10-i Territorialnyi Korpus"
    location = 571
    division = {
      id             = { type = 10848 id = 98 }
      name           = "17-ya Gorkovskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 99 }
      name           = "19-ya Voronezhskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 100 }
    name     = "20-i Strelkovyi Korpus"
    location = 678
    division = {
      id             = { type = 10848 id = 101 }
      name           = "68-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 102 }
      name           = "113-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 103 }
      name           = "142-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 104 }
    name     = "21-i Strelkovyi Korpus"
    location = 584
    division = {
      id             = { type = 10848 id = 105 }
      name           = "77-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 106 }
      name           = "38-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 107 }
    name     = "30-i Strelkovyi Korpus"
    location = 571
    division = {
      id             = { type = 10848 id = 108 }
      name           = "59-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 109 }
      name           = "39-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 110 }
    name     = "40-i Strelkovyi Korpus"
    location = 571
    division = {
      id             = { type = 10848 id = 111 }
      name           = "60-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 4
      strength       = 5
    }
    division = {
      id             = { type = 10848 id = 112 }
      name           = "42-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 4
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10848 id = 113 }
    name     = "41-i Strelkovyi Korpus"
    location = 678
    division = {
      id             = { type = 10848 id = 114 }
      name           = "127-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 4
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10848 id = 115 }
    name     = "Privoljsyi Voennyi Okrug"
    location = 672
    division = {
      id             = { type = 10848 id = 117 }
      name           = "125-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 118 }
      name           = "128-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 119 }
      name           = "159-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 4
      strength       = 5
    }
    division = {
      id             = { type = 10848 id = 120 }
      name           = "79-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 4
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10848 id = 121 }
    name     = "12-i Territorialnyi Korpus"
    location = 672
    division = {
      id             = { type = 10848 id = 122 }
      name           = "1-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 123 }
      name           = "31-ya Stalingradskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 0
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 124 }
      name           = "53-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 125 }
      name           = "61-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 126 }
      name           = "70-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 127 }
    name     = "34-i Strelkovyi Korpus"
    location = 672
    division = {
      id             = { type = 10848 id = 128 }
      name           = "111-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 129 }
      name           = "97-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 130 }
    name     = "26-i Strelkovyi Korpus"
    location = 672
    division = {
      id             = { type = 10848 id = 131 }
      name           = "129-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 132 }
      name           = "102-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 133 }
    name     = "42-i Strelkovyi Korpus"
    location = 672
    division = {
      id             = { type = 10848 id = 134 }
      name           = "108-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 4
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 135 }
    name     = "Kievskyi Voennyi Okrug"
    location = 617
    division = {
      id             = { type = 10848 id = 136 }
      name           = "Kievskyi Voennyi Okrug"
      type           = hq
      model          = 2
      extra          = anti_air
      brigade_model  = 0
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 137 }
      name           = "23-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = armored_car
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 138 }
      name           = "26-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 139 }
      name           = "28-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = engineer
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 140 }
      name           = "45-i Mekhanizirovannyi Korpus"
      type           = light_armor
      model          = 0
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 141 }
    name     = "6-i Strelkovyi Korpus"
    location = 617
    division = {
      id             = { type = 10848 id = 142 }
      name           = "2-ya Kavkazskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 143 }
      name           = "24-ya Zheleznaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 144 }
      name           = "46-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 10848 id = 145 }
    name     = "8-i Strelkovyi Korpus"
    location = 611
    division = {
      id             = { type = 10848 id = 146 }
      name           = "44-ya Kievskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 147 }
      name           = "51-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 148 }
      name           = "95-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 10848 id = 149 }
    name     = "15-i Strelkovyi Korpus"
    location = 614
    division = {
      id             = { type = 10848 id = 150 }
      name           = "2-ya Turkestanskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 151 }
      name           = "99-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 152 }
      name           = "100-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 10848 id = 153 }
    name     = "17-i Strelkovyi Korpus"
    location = 621
    division = {
      id             = { type = 10848 id = 154 }
      name           = "7-ya Chernigovskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 155 }
      name           = "15-ya Sivashskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 156 }
      name           = "96-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 157 }
      name           = "58-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 158 }
    name     = "1-i Kavaleriiski Korpus"
    location = 611
    division = {
      id             = { type = 10848 id = 159 }
      name           = "1-ya Lenina Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 160 }
      name           = "2-ya Krasnogo Znameni Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 161 }
    name     = "2-i Kavaleriiski Korpus"
    location = 612
    division = {
      id             = { type = 10848 id = 162 }
      name           = "5-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 163 }
      name           = "9-ya Krimskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 164 }
    name     = "35-i Strelkovyi Korpus"
    location = 617
    division = {
      id             = { type = 10848 id = 165 }
      name           = "159-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 166 }
    name     = "36-i Strelkovyi Korpus"
    location = 611
    division = {
      id             = { type = 10848 id = 167 }
      name           = "160-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 168 }
      name           = "161-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 169 }
    name     = "27-i Strelkovyi Korpus"
    location = 614
    division = {
      id             = { type = 10848 id = 170 }
      name           = "89-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 171 }
      name           = "101-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 172 }
      name           = "130-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 173 }
    name     = "37-i Strelkovyi Korpus"
    location = 621
    division = {
      id             = { type = 10848 id = 174 }
      name           = "131-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 175 }
      name           = "140-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 176 }
      name           = "152-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 177 }
      name           = "47-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 178 }
    name     = "Kharkovskyi Voennyi Okrug"
    location = 636
    division = {
      id             = { type = 10848 id = 180 }
      name           = "75-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 181 }
      name           = "151-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 182 }
    name     = "7-i Territorialnyi Korpus"
    location = 630
    division = {
      id             = { type = 10848 id = 183 }
      name           = "3-ya Krimskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 0
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 184 }
      name           = "25-ya Chapaeva Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 185 }
      name           = "41-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 186 }
    name     = "14-i Territorialnyi Korpus"
    location = 636
    division = {
      id             = { type = 10848 id = 187 }
      name           = "30-ya Irkutskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 188 }
      name           = "80-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 189 }
      name           = "23-ya Kharkovskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 190 }
    name     = "25-i Strelkovyi Korpus"
    location = 636
    division = {
      id             = { type = 10848 id = 191 }
      name           = "72-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 192 }
      name           = "132-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 193 }
      name           = "83-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 194 }
      name           = "141-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 195 }
      name           = "69-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 196 }
      name           = "156-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 197 }
      name           = "134-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 4
      strength       = 5
    }
    division = {
      id             = { type = 10848 id = 198 }
      name           = "139-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 4
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10848 id = 199 }
    name     = "Severokavkazskyi Voennyi Okrug"
    location = 644
    division = {
      id             = { type = 10848 id = 201 }
      name           = "10-ya Severokavkazskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      extra          = engineer
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 202 }
      name           = "28-ya Gorskaya Strelkovaya Diviziya"
      type           = bergsjaeger
      model          = 8
      extra          = anti_air
      brigade_model  = 0
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 203 }
      name           = "12-ya Kubanskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 204 }
    name     = "9-i Territorialnyi Korpus"
    location = 691
    division = {
      id             = { type = 10848 id = 205 }
      name           = "9-ya Krasnodarskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 206 }
      name           = "13-ya Dagestanskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 207 }
      name           = "22-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 208 }
      name           = "74-ya Tamanskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 209 }
    name     = "38-i Strelkovyi Korpus"
    location = 691
    division = {
      id             = { type = 10848 id = 210 }
      name           = "103-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 211 }
      name           = "118-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 212 }
      name           = "119-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 213 }
      name           = "157-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 214 }
    name     = "Zakavkazskyi Voennyi Okrug"
    location = 709
    division = {
      id             = { type = 10848 id = 217 }
      name           = "1-ya Gorskaya Kavkazskaya Strelkovaya Diviziya"
      type           = bergsjaeger
      model          = 8
      extra          = engineer
      brigade_model  = 2
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 218 }
      name           = "3-ya Gorskaya Kavkazskaya Strelkovaya Diviziya"
      type           = bergsjaeger
      model          = 8
      extra          = anti_air
      brigade_model  = 0
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 219 }
      name           = "1-ya Gorskaya Gruzinskaya Strelkovaya Diviziya"
      type           = bergsjaeger
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 220 }
      name           = "Gorskaya Azerbaidzhanskaya Strelkovaya Diviziya"
      type           = bergsjaeger
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 221 }
      name           = "Gorskaya Armianskaya Strelkovaya Diviziya"
      type           = bergsjaeger
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 10848 id = 222 }
      name           = "2-ya Gruzinskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 10848 id = 223 }
    name     = "Sredneaziatskyi Voennyi Okrug"
    location = 1103
    division = {
      id             = { type = 10848 id = 225 }
      name           = "1-ya Gorskaya Turkestanskaya Strelkovaya Diviziya"
      type           = bergsjaeger
      model          = 8
      extra          = engineer
      brigade_model  = 2
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 226 }
      name           = "3-ya Gorskaya Turkestanskaya Strelkovaya Diviziya"
      type           = bergsjaeger
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 227 }
      name           = "18-ya Turkmenskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 228 }
      name           = "19-ya Turkmenskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 229 }
      name           = "21-ya Turkmenskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 230 }
      name           = "20-ya Tadzhikskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 8
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 231 }
    name     = "Sibirskyi Voennyi Okrug"
    location = 1142
    division = {
      id             = { type = 10848 id = 233 }
      name           = "71-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 234 }
      name           = "73-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 235 }
      name           = "78-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 236 }
      name           = "94-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 237 }
      name           = "133-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 238 }
      name           = "109-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 239 }
      name           = "107-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10848 id = 240 }
      name           = "91-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10848 id = 241 }
    name     = "Zabaikalskyi Voennyi Okrug"
    location = 1169
    division = {
      id             = { type = 10848 id = 243 }
      name           = "36-ya Strelkovaya Divizija"
      type           = infantry
      model          = 8
      extra          = cavalry_brigade
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 244 }
      name           = "57-ya Strelkovaya Divizija"
      type           = infantry
      model          = 8
      extra          = anti_air
      brigade_model  = 0
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 245 }
      name           = "93-ya Strelkovaya Divizija"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 10848 id = 246 }
      name           = "15-ya Kubanskaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 247 }
      name           = "17-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 248 }
      name           = "22-ya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 249 }
      name           = "11-i Mekhanizirovannyi Korpus"
      type           = light_armor
      model          = 0
      extra          = engineer
      brigade_model  = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 250 }
    name     = "Osobaya Krasnozamennaya Dalnevostochnaya Armyia"
    location = 1190
    division = {
      id             = { type = 10848 id = 251 }
      name           = "Dalnevostochnyi Voennyi Okrug"
      type           = hq
      model          = 2
      extra          = anti_air
      brigade_model  = 0
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 252 }
      name           = "12-ya 'SibRevKoma' Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 253 }
      name           = "21-ya Permskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 2
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 254 }
      name           = "34-ya Srednevolzhskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 255 }
      name           = "35-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 256 }
      name           = "40-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 257 }
      name           = "8-ya Dalnevostochnaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 258 }
    name     = "18-i Strelkovyi Korpus"
    location = 1176
    division = {
      id             = { type = 10848 id = 259 }
      name           = "1-ya Tikhookeanskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 260 }
      name           = "26-ya Zlatoustovskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 261 }
      name           = "32-ya Saratovskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 10848 id = 262 }
    name     = "Osobyi Kolkhoznyi Korpus"
    location = 1191
    division = {
      id             = { type = 10848 id = 263 }
      name           = "1-ya Kolkhoznaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 264 }
      name           = "2-ya Kolkhoznaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 265 }
      name           = "3-ya Kolkhoznaya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 266 }
      name           = "Kolkhoznaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 8
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 8505 }
    name     = "Stalin and Staff"
    location = 572
    division = {
      id             = { type = 10848 id = 8506 }
      name           = "Stalin and Staff"
      type           = d_10
      model          = 0
      experience     = 100
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 10848 id = 5100 }
    name     = "Krasnoznamenny Baltijsky Flot"
    location = 553
    base     = 553
    division = {
      id             = { type = 10848 id = 5101 }
      name           = "Marat"
      type           = battleship
      model          = 2
      extra1         = floatplane
      extra2         = naval_fire_controll_l
      brigade_model1 = 4
      brigade_model2 = 0
    }
    division = {
      id             = { type = 10848 id = 5102 }
      name           = "Oktyabrskaya Revolutsiya"
      type           = battleship
      model          = 2
      extra1         = floatplane
      extra2         = naval_fire_controll_l
      brigade_model1 = 4
      brigade_model2 = 0
    }
    division = {
      id             = { type = 10848 id = 5103 }
      name           = "1 Brigada Esmintsev"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 10848 id = 5104 }
      name           = "2 Brigada Esmintsev"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 10848 id = 5150 }
    name     = "1ya Brigada PL KBF"
    location = 641
    base     = 641
    division = {
      id             = { type = 10848 id = 5151 }
      name           = "1. Divizion Podlodok"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10848 id = 5160 }
    name     = "2ya Brigada PL KBF"
    location = 641
    base     = 641
    division = {
      id             = { type = 10848 id = 5161 }
      name           = "2. Divizion Podlodok"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 10848 id = 5200 }
    name     = "Chernomorskiy Flot"
    location = 641
    base     = 641
    division = {
      id             = { type = 10848 id = 5201 }
      name           = "Parizhskaya Kommuna"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 5202 }
      name           = "Krasni Kavkaz"
      type           = heavy_cruiser
      model          = 2
      extra1         = floatplane
      brigade_model1 = 3
    }
    division = {
      id             = { type = 10848 id = 5203 }
      name           = "Profintern"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 5204 }
      name           = "Komintern"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 5205 }
      name           = "Chervonaya Ukraina"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 5206 }
      name           = "1. Divizion Esmintsev"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 5207 }
      name           = "2. Divizion Esmintsev"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10848 id = 5400 }
    name     = "Severnaya Voennaya Flotiliya"
    location = 535
    base     = 535
    division = {
      id             = { type = 10848 id = 5401 }
      name           = "3. Divizion Esmintsev"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 5402 }
      name           = "3. Divizion Podlodok"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10848 id = 5500 }
    name     = "Tikhookeanskiy Flot"
    location = 1191
    base     = 1191
    division = {
      id             = { type = 10848 id = 5501 }
      name           = "4. Divizion Esmintsev"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 5502 }
      name           = "5. Divizion Esmintsev"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10848 id = 5550 }
    name     = "1ya Brigada PL TOF"
    location = 1191
    base     = 1191
    division = {
      id             = { type = 10848 id = 5551 }
      name           = "4. Divizion Podlodok"
      type           = submarine
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 10848 id = 7000 }
    name     = "1 AviaKorpus"
    location = 572
    base     = 572
    division = {
      id             = { type = 10848 id = 7001 }
      name           = "403.IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7002 }
      name           = "23.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7003 }
    name     = "11 TBABR MVO"
    location = 654
    base     = 654
    division = {
      id             = { type = 10848 id = 7004 }
      name           = "11.TBABR"
      type           = strategic_bomber
      model          = 2
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7005 }
    name     = "4 AviaKorpus"
    location = 553
    base     = 553
    division = {
      id             = { type = 10848 id = 7006 }
      name           = "1.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7007 }
      name           = "2.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7008 }
    name     = "LVO"
    location = 553
    base     = 553
    division = {
      id             = { type = 10848 id = 7009 }
      name           = "53.LBABR"
      type           = multi_role
      model          = 3
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 7010 }
      name           = "100.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7011 }
    name     = "3 ABRON LVO"
    location = 553
    base     = 553
    division = {
      id             = { type = 10848 id = 7012 }
      name           = "3.ABRON"
      type           = transport_plane
      model          = 1
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7013 }
    name     = "200 IABR LVO"
    location = 566
    base     = 566
    division = {
      id             = { type = 10848 id = 7014 }
      name           = "3.IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7015 }
    name     = "6 AviaKorpus"
    location = 588
    base     = 588
    division = {
      id             = { type = 10848 id = 7016 }
      name           = "5.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7017 }
      name           = "9.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7018 }
      name           = "402.IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7019 }
    name     = "40 LBABR BVO"
    location = 590
    base     = 590
    division = {
      id             = { type = 10848 id = 7020 }
      name           = "40.LBABR"
      type           = multi_role
      model          = 3
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7021 }
    name     = "49 TBABR BVO"
    location = 590
    base     = 590
    division = {
      id             = { type = 10848 id = 7022 }
      name           = "49.TBABR"
      type           = tactical_bomber
      model          = 3
      extra          = escort
      brigade_model  = 0
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7023 }
    name     = "132 IABR BVO"
    location = 600
    base     = 600
    division = {
      id             = { type = 10848 id = 7024 }
      name           = "132. IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7025 }
    name     = "252 LSHABR BVO"
    location = 600
    base     = 600
    division = {
      id             = { type = 10848 id = 7026 }
      name           = "252.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7027 }
    name     = "116 TBABR BVO"
    location = 589
    base     = 589
    division = {
      id             = { type = 10848 id = 7028 }
      name           = "116.TBABR"
      type           = tactical_bomber
      model          = 3
      extra          = escort
      brigade_model  = 0
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7029 }
    name     = "47 ABRON BVO"
    location = 589
    base     = 589
    division = {
      id             = { type = 10848 id = 7030 }
      name           = "47.ABRON"
      type           = transport_plane
      model          = 1
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7031 }
    name     = "93 TBABR BVO"
    location = 563
    base     = 563
    division = {
      id             = { type = 10848 id = 7032 }
      name           = "93.TBABR"
      type           = tactical_bomber
      model          = 3
      extra          = escort
      brigade_model  = 0
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7033 }
    name     = "13 ABRON KVO"
    location = 617
    base     = 617
    division = {
      id             = { type = 10848 id = 7034 }
      name           = "13.ABRON"
      type           = transport_plane
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7035 }
    name     = "5 IABR KVO"
    location = 617
    base     = 617
    division = {
      id             = { type = 10848 id = 7036 }
      name           = "5.IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7037 }
    name     = "404 IABR KVO"
    location = 611
    base     = 611
    division = {
      id             = { type = 10848 id = 7038 }
      name           = "404.IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7039 }
    name     = "256 LSHABR KVO"
    location = 617
    base     = 617
    division = {
      id             = { type = 10848 id = 7040 }
      name           = "256.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7041 }
    name     = "10 AviaKorpus"
    location = 628
    base     = 628
    division = {
      id             = { type = 10848 id = 7042 }
      name           = "15.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7043 }
    name     = "18 TBABR KVO"
    location = 654
    base     = 654
    division = {
      id             = { type = 10848 id = 7044 }
      name           = "18.TBABR"
      type           = strategic_bomber
      model          = 2
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7045 }
    name     = "43 TBABR KhVO"
    location = 636
    base     = 636
    division = {
      id             = { type = 10848 id = 7046 }
      name           = "43.TBABR"
      type           = tactical_bomber
      model          = 3
      extra          = escort
      brigade_model  = 0
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7047 }
    name     = "16 TBABR KhVO"
    location = 636
    base     = 636
    division = {
      id             = { type = 10848 id = 7048 }
      name           = "16.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7049 }
    name     = "5 AviaKorpus"
    location = 1169
    base     = 1169
    division = {
      id             = { type = 10848 id = 7050 }
      name           = "29.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7051 }
      name           = "32.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7052 }
    name     = "26 TBABR DVO"
    location = 1190
    base     = 1190
    division = {
      id             = { type = 10848 id = 7053 }
      name           = "26.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7054 }
    name     = "50 LSHABR DVO"
    location = 1190
    base     = 1190
    division = {
      id             = { type = 10848 id = 7055 }
      name           = "50.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7056 }
    name     = "134 LSHABR  SibVO"
    location = 1143
    base     = 1143
    division = {
      id             = { type = 10848 id = 7057 }
      name           = "134.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7058 }
    name     = "21 TBABR SKVO"
    location = 644
    base     = 644
    division = {
      id             = { type = 10848 id = 7059 }
      name           = "21.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7080 }
    name     = "55 LBABR SKVO"
    location = 644
    base     = 644
    division = {
      id             = { type = 10848 id = 7081 }
      name           = "55.LBABR"
      type           = multi_role
      model          = 3
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7082 }
    name     = "20 TBABR TOF"
    location = 1190
    base     = 1190
    division = {
      id             = { type = 10848 id = 7083 }
      name           = "20.TBABR"
      type           = naval_bomber
      model          = 1
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7084 }
    name     = "106 TBABR CHF"
    location = 641
    base     = 641
    division = {
      id             = { type = 10848 id = 7085 }
      name           = "106.TBABR"
      type           = naval_bomber
      model          = 1
      strength       = 80
    }
  }

  division_development = {
    id             = { type = 10848 id = 8501 }
    name           = "5. Flotiliya Podlodok"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = february day = 1 }
  }
  division_development = {
    id             = { type = 10848 id = 8502 }
    name           = "6. Flotiliya Podlodok"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = march day = 1 }
  }
  division_development = {
    id             = { type = 10848 id = 8503 }
    name           = "Kirov"
    type           = heavy_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1938 month = september day = 23 }
    extra1         = floatplane
    brigade_model1 = 3
  }
  division_development = {
    id             = { type = 10848 id = 8504 }
    name           = "Voroshilov"
    type           = heavy_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1940 month = june day = 20 }
    extra1         = floatplane
    brigade_model1 = 3
  }

  landdivision = { dormant = yes id = { type = 10848 id = 5554 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5555 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5556 } name = "1. Leningrad PMD"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5557 } name = "2. Leningrad PMD"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5558 } name = "3. Leningrad PMD"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5559 } name = "Smolninskaya PMD"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5560 } name = "Oktiabrskaya PM"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5561 } name = "2. Guards PMD"  type = garrison model = 5 experience = 40 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5562 } name = "3. Guards PMD"  type = garrison model = 5 experience = 40 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5563 } name = "4. Reserve PMD"  type = garrison model = 5 strength = 30 experience = 20 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5564 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5565 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5566 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5567 } name = "1. Stalingrad PMD"  type = garrison model = 5 experience = 20 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5568 } name = "2. Stalingrad PMD"  type = garrison model = 5 experience = 20 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5569 } name = "3. Stalingrad PMD"  type = garrison model = 5 experience = 20 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5570 } name = "Special Cossack cavalry PMD"  type = cavalry model = 10 experience = 40 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5571 } name = "436-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5572 } name = "437-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5573 } name = "283-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5574 } name = "438-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5575 } name = "439-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5576 } name = "284-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5577 } name = "440-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5578 } name = "441-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5579 } name = "285-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5580 } name = "442-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5581 } name = "443-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5582 } name = "286-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5583 } name = "444-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5584 } name = "445-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5585 } name = "287-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5586 } name = "446-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5587 } name = "447-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5588 } name = "288-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5589 } name = "448-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5590 } name = "449-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5591 } name = "289-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5592 } name = "450-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5593 } name = "451-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5594 } name = "290-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5595 } name = "452-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5596 } name = "453-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5597 } name = "291-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5598 } name = "454-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5599 } name = "455-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5600 } name = "292-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5601 } name = "456-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5602 } name = "457-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5603 } name = "293-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5604 } name = "458-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5605 } name = "459-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5606 } name = "294-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5607 } name = "460-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5608 } name = "461-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5609 } name = "295-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5610 } name = "462-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5611 } name = "463-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5612 } name = "296-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5613 } name = "464-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5614 } name = "465-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5615 } name = "297-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5616 } name = "466-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5617 } name = "467-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5618 } name = "298-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5619 } name = "468-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5620 } name = "469-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5621 } name = "299-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5622 } name = "470-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5623 } name = "471-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5624 } name = "300-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5625 } name = "472-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5626 } name = "473-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5627 } name = "301-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5628 } name = "474-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5629 } name = "475-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5630 } name = "302-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5631 } name = "476-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5632 } name = "477-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5633 } name = "303-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5634 } name = "478-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5635 } name = "479-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5636 } name = "304-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5637 } name = "480-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5638 } name = "481-ya Strelkovaya Diviziya"  type = infantry model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5639 } name = "305-ya Garnizonnaya Diviziya"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5640 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5641 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5642 } name = "1. Sevastopol PMD"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5643 } name = "2. Sevastopol PMD"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5644 } name = "3. Sevastopol PMD"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5645 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5646 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5647 } name = "1. Cossack Divisions"  type = cavalry model = 10 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5648 } name = "2. Cossack Divisions"  type = cavalry model = 10 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5649 } name = "3. Cossack Divisions"  type = cavalry model = 10 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5650 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5651 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5652 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5653 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5654 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5655 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5656 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5657 } name = "Worker and Citizens"  type = militia model = 4 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5658 } name = "1. Moscow PMD"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5659 } name = "2. Moscow PMD"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5660 } name = "3. Moscow PMD"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5661 } name = "4. Moscow PMD"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5662 } name = "5. Moscow PMD"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5663 } name = "Yaroslavl Communist Rifle Division"  type = infantry model = 10 experience = 60 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5664 } name = "7. Guards PMD"  type = garrison model = 5 experience = 60 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5665 } name = "8. Guards PMD"  type = garrison model = 5 experience = 60 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5666 } name = "9. Guards PMD"  type = garrison model = 5 experience = 60 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5667 } name = "1. Voronezh PMD"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5668 } name = "2. Voronezh PMD"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5669 } name = "3. Voronezh PMD"  type = garrison model = 5 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5670 } name = "1st Guards Zvenigorod-Bucharest Red Banner Order"  type = paratrooper model = 1 } 
  landdivision = { dormant = yes id = { type = 10848 id = 5671 } name = "Stalingrad NKVD"  type = infantry model = 11 experience = 80 } 
  landdivision = { dormant = yes id = { type = 10848 id = 300 } name = "1st Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 301 } name = "2nd Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 302 } name = "3rd Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 303 } name = "4th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 304 } name = "5th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 305 } name = "6th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 306 } name = "7th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 307 } name = "8th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 308 } name = "9th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 309 } name = "10th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 310 } name = "11st Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 311 } name = "12nd Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 312 } name = "13rd Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 313 } name = "14th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 314 } name = "15th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 315 } name = "16th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 316 } name = "17th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 10848 id = 317 } name = "18th Guards Div"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
}
