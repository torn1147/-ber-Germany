##############################
# Country definition for CHC #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CHC
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
  intrinsic_gov_type = leninist
  capital            = 1259 # Yan'an
  dissent            = 5
  extra_tc           = 7
  manpower           = 220
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 100
  supplies       = 800
  money          = 50

  diplomacy = {
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -100 }
    relation = { tag = CHI value = -200 }
    relation = { tag = CGX value = -200 }
    relation = { tag = CYN value = -200 }
    relation = { tag = CSX value = -75 }
    relation = { tag = CXB value = -100 }
    relation = { tag = SOV value = 100 }
    relation = { tag = MON value = 25 }
    relation = { tag = U67 value = 50 }
    relation = { tag = SIK value = 40 }
  }
  SpyInfo                = { country = "CHC" NumberOfSpies = 3 }

  nationalprovinces      = { 1255 1259 1260 1256 1257 1258 1261 1262 1267 1291 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1384 1385 1386 1387 1388 1389 1390 1361 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1327 1328 1329 1330 1331 1332 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285 1286 1287 1288 1289 1290 1294 1295 1273 1274 1275 1277 1279 1280 1281 1282 1276 1278 1219 1238 1239 1240 1371 1372 1362 1363 1364 }
  ownedprovinces         = { 1255 1259 1260 1296 1325 1322 1314 }
  controlledprovinces    = { 1255 1259 1260 1296 1325 1322 1314 }
  claimedprovinces       = { 1455 1458 }

  techapps               = { 5800 5080 5310 5316 5326 5327 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1220 1230 13060 13070 13080 1310 1320 1330 1910 1920 1930 1940 1950 1960 2290 2300 2310 2900 2910 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6570 6300 7690 }
  blueprints             = { 5810 5820 54010 1340 1350 1360 1370 2860 5600 4500 4510 4520 4300 4310 4600 4610 4620 4800 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 8
    freedom           = 4
    free_market       = 4
    professional_army = 2
    defense_lobby     = 10
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 260848 } # Mao Zedong
  headofgovernment       = { type = 9 id = 260858 } # Zhou Enlai
  foreignminister        = { type = 9 id = 260861 } # Zhou Enlai
  armamentminister       = { type = 9 id = 260814 } # Lin Boqu
  ministerofsecurity     = { type = 9 id = 260856 } # Zhou Enlai
  ministerofintelligence = { type = 9 id = 260868 } # Li Kenong
  chiefofstaff           = { type = 9 id = 260820 } # Xu Xiangqian
  chiefofarmy            = { type = 9 id = 260867 } # Peng Dehuai
  chiefofnavy            = { type = 9 id = 260806 } # He Long
  chiefofair             = { type = 9 id = 260808 } # Ye Ting

  landunit = {
    id       = { type = 24000 id = 1 }
    name     = "1st Red Army Front"
    location = 1259
    division = {
      id             = { type = 24000 id = 2 }
      name           = "1st Army Group"
      type           = bergsjaeger
      model          = 7
      strength       = 80
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 3 }
      name           = "15th Army Group"
      type           = bergsjaeger
      model          = 7
      strength       = 63
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 4 }
      name           = "28th 29th Armies"
      type           = bergsjaeger
      model          = 7
      strength       = 29
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 24000 id = 5 }
    name     = "2nd Army Front"
    location = 1296
    division = {
      id             = { type = 24000 id = 6 }
      name           = "2nd Red Army Group"
      type           = bergsjaeger
      model          = 7
      strength       = 18
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 7 }
      name           = "6th Red Army Group"
      type           = bergsjaeger
      model          = 7
      strength       = 18
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 24000 id = 8 }
    name     = "4th Army Front"
    location = 1296
    division = {
      id             = { type = 24000 id = 9 }
      name           = "4th Army"
      type           = bergsjaeger
      model          = 7
      strength       = 54
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 10 }
      name           = "9th Army"
      type           = bergsjaeger
      model          = 8
      strength       = 27
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 11 }
      name           = "30th 31st 32nd Armies"
      type           = bergsjaeger
      model          = 7
      strength       = 24
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 12 }
      name           = "5th Army"
      type           = bergsjaeger
      model          = 7
      strength       = 22
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 24000 id = 13 }
    name     = "16th Army"
    location = 1325
    division = {
      id             = { type = 24000 id = 14 }
      name           = "6th Army Group"
      type           = militia
      model          = 5
      strength       = 50
      experience     = 60
    }
    dig_in   = 20.000
  }
}
