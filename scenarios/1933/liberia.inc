##############################
# Country definition for LIB #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = LIB
  puppet             = USA
  control            = USA
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 969 # Monrovia
  manpower           = 0
  # Resource Reserves
  energy         = 120
  metal          = 60
  rare_materials = 30
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = PHI value = 200 }
    relation = { tag = USA value = 200 }
  }
  SpyInfo                = { country = "LIB" NumberOfSpies = 1 }

  nationalprovinces      = { 969 }
  ownedprovinces         = { 969 }
  controlledprovinces    = { 969 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5600 5610 3810 1830 1840 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 7690 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 3
    defense_lobby     = 3
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 380001 } # Edwin J. Barclay
  headofgovernment       = { type = 9 id = 380002 } # Edwin J. Barclay
  foreignminister        = { type = 9 id = 380003 } # Clarence L. Simpson
  armamentminister       = { type = 9 id = 380004 } # Frederic K. Nielsen
  ministerofsecurity     = { type = 9 id = 380005 } # Henry R. Grimes
  ministerofintelligence = { type = 9 id = 380006 } # Henry M. Robinson
  chiefofstaff           = { type = 9 id = 380007 } # Benjamin O. Davis
  chiefofarmy            = { type = 9 id = 380008 } # Iver Virgin
  chiefofnavy            = { type = 9 id = 380009 } # Reginald Brandon
  chiefofair             = { type = 9 id = 380010 } # Won Loy Chan

  landunit = {
    id       = { type = 25500 id = 1 }
    name     = "Army of Liberia"
    location = 969
    division = {
      id             = { type = 25000 id = 2 }
      name           = "1st Republican Guards Div."
      type           = infantry
      model          = 5
      strength       = 50
    }
  }
}
