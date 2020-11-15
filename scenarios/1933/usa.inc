##############################
# Country definition for USA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = USA
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1809 # Washington
  dissent            = 10
  manpower           = 102
  peacetime_ic_mod       = 0.2
  wartime_ic_mod         = 0.8
  industrial_modifier    = 0.8
  # Resource Reserves
  energy         = 30060
  metal          = 15030
  rare_materials = 7515
  oil            = 5000
  supplies       = 5000
  money          = 100
  transports     = 360
  escorts        = 53

  diplomacy = {
    relation = {
      tag        = ARG
      value      = 75
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = AST value = 125 }
    relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 100 }
    relation = {
      tag        = BOL
      value      = 85
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = BRA
      value      = 120
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = CAN
      value      = 175
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = CHL
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = COL
      value      = 75
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = COS
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = CUB
      value      = 200
      access     = yes
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = DEN value = 75 }
    relation = {
      tag        = DOM
      value      = 125
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = ECU
      value      = 75
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = ENG value = 150 }
    relation = { tag = FIN value = 90 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = -10 }
    relation = {
      tag        = GUA
      value      = 125
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = HAI
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = HOL value = 70 }
    relation = {
      tag        = HON
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 120 }
    relation = { tag = JAP value = 15 }
    relation = { tag = LIB value = 200 access = yes }
    relation = { tag = LIT value = 65 }
    relation = { tag = LAT value = 65 }
    relation = { tag = EST value = 65 }
    relation = { tag = MAN value = 1 }
    relation = {
      tag        = MEX
      value      = 125
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = NEP value = 100 }
    relation = {
      tag        = NIC
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = NOR value = 75 }
    relation = { tag = NZL value = 125 }
    relation = { tag = OMN value = 100 }
    relation = {
      tag        = PAN
      value      = 175
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = PAR
      value      = 75
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = PHI value = 200 access = yes }
    relation = {
      tag        = PRU
      value      = 75
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = SAF value = 125 }
    relation = {
      tag        = SAL
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = SOV value = 35 }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = SWE value = 75 }
    relation = {
      tag        = URU
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = VEN
      value      = 125
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = YEM value = 100 }
  }
  SpyInfo                = { country = "USA" NumberOfSpies = 11 }

  nationalprovinces      = { 889 1778 1784 1785 1786 1787 1788 1789 1790 1791 1792 1793 1794 1795 1796 1797 1798 1799 1800 1801 1802 1803 1804 1805 1806 1807 1808 1809 1810 1811 1812 1813 1814 1815 1816 1817 1818 1819 1820 1821 1822 1823 1824 1825 1826 1827 1828 1829 1830 1831 1832 1833 1834 1835 1836 1837 1838 1839 1840 1841 1842 1843 1844 1845 1846 1847 1848 1849 1850 1851 1852 1853 1854 1855 1856 1857 1858 1859 1860 1861 1862 1863 1864 1865 1866 1867 1868 1869 1870 1871 1872 1873 1874 1875 1876 1877 1878 1879 1880 1881 1882 1883 1884 1885 1886 1887 1888 1889 1890 1891 1892 1893 1894 1895 1896 1897 1898 1899 1900 1901 1902 1903 1904 1905 1906 1907 1908 1909 1910 1911 1912 1913 1914 1915 1916 1917 1918 1919 1920 1921 1922 1923 1924 1925 1926 1927 1928 1929 1930 1931 1932 1933 1934 1935 1936 1937 1938 1939 1940 1941 1942 1943 1944 1945 1946 1947 1948 1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 1961 1962 1963 1964 2139 2140 2141 2142 2143 2144 2145 2146 2147 2150 2151 2174 }
  ownedprovinces         = { 889 1673 1683 1733 1734 1735 1736 1737 1738 1739 1745 1747 1751 1765 1778 1784 1785 1786 1787 1788 1789 1790 1791 1792 1793 1794 1795 1796 1797 1798 1799 1800 1801 1802 1803 1804 1805 1806 1807 1808 1809 1810 1811 1812 1813 1814 1815 1816 1817 1818 1819 1820 1821 1822 1823 1824 1825 1826 1827 1828 1829 1830 1831 1832 1833 1834 1835 1836 1837 1838 1839 1840 1841 1842 1843 1844 1845 1846 1847 1848 1849 1850 1851 1852 1853 1854 1855 1856 1857 1858 1859 1860 1861 1862 1863 1864 1865 1866 1867 1868 1869 1870 1871 1872 1873 1874 1875 1876 1877 1878 1879 1880 1881 1882 1883 1884 1885 1886 1887 1888 1889 1890 1891 1892 1893 1894 1895 1896 1897 1898 1899 1900 1901 1902 1903 1904 1905 1906 1907 1908 1909 1910 1911 1912 1913 1914 1915 1916 1917 1918 1919 1920 1921 1922 1923 1924 1925 1926 1927 1928 1929 1930 1931 1932 1933 1934 1935 1936 1937 1938 1939 1940 1941 1942 1943 1944 1945 1946 1947 1948 1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 1961 1962 1963 1964 2139 2140 2141 2142 2143 2144 2145 2146 2147 2150 2151 2174 }
  controlledprovinces    = { 889 1673 1683 1733 1734 1735 1736 1737 1738 1739 1745 1747 1751 1765 1778 1784 1785 1786 1787 1788 1789 1790 1791 1792 1793 1794 1795 1796 1797 1798 1799 1800 1801 1802 1803 1804 1805 1806 1807 1808 1809 1810 1811 1812 1813 1814 1815 1816 1817 1818 1819 1820 1821 1822 1823 1824 1825 1826 1827 1828 1829 1830 1831 1832 1833 1834 1835 1836 1837 1838 1839 1840 1841 1842 1843 1844 1845 1846 1847 1848 1849 1850 1851 1852 1853 1854 1855 1856 1857 1858 1859 1860 1861 1862 1863 1864 1865 1866 1867 1868 1869 1870 1871 1872 1873 1874 1875 1876 1877 1878 1879 1880 1881 1882 1883 1884 1885 1886 1887 1888 1889 1890 1891 1892 1893 1894 1895 1896 1897 1898 1899 1900 1901 1902 1903 1904 1905 1906 1907 1908 1909 1910 1911 1912 1913 1914 1915 1916 1917 1918 1919 1920 1921 1922 1923 1924 1925 1926 1927 1928 1929 1930 1931 1932 1933 1934 1935 1936 1937 1938 1939 1940 1941 1942 1943 1944 1945 1946 1947 1948 1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 1961 1962 1963 1964 2139 2140 2141 2142 2143 2144 2145 2146 2147 2150 2151 2174 }

  techapps               = { 12100 12110 12120 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4290 4250 4800 4810 4820 4220 2860 2870 2880 2020 7600 7610 2620 2010 2630 2290 2300 2310 2800 2450 21180 21190 21200 2810 2820 2510 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1910 1920 1930 1940 1950 1960 1970 1980 5700 5710 5010 5020 5810 5820 5050 5830 5060 5070 5800 5080 5090 5310 54010 54020 54030 5316 5326 5327 5190 5600 5610 5620 5630 5560 4300 4310 4320 4330 4340 4700 4710 1560 1570 1580 1160 1170 1180 1190 4740 4750 4760 4770 1830 1840 1850 1860 4900 4910 4920 3720 3730 3736 3740 3750 3900 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3470 3510 3520 3530 3610 3620 3630 3640 3650 14000 14010 14020 3810 3820 6500 6510 6530 6540 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6910 6010 6020 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9140 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8500 8510 8550 8600 8900 8910 8920 8930 8940 8950 81650 81850 82500 82300 55010 }
  blueprints             = { 81880 81890 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 1942 month = january day = 0 }
    democratic        = 9
    political_left    = 6
    freedom           = 10
    free_market       = 10
    professional_army = 2
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 240001 } # Franklin D. Roosevelt
  headofgovernment       = { type = 9 id = 240232 } # Harry I. Hopkins
  foreignminister        = { type = 9 id = 240003 } # Cordell Hull
  armamentminister       = { type = 9 id = 240004 } # Henry Morgenthau
  ministerofsecurity     = { type = 9 id = 240005 } # J. Edgar Hoover
  ministerofintelligence = { type = 9 id = 240006 } # William F. Friedman
  chiefofstaff           = { type = 9 id = 240007 } # Malin Craig
  chiefofarmy            = { type = 9 id = 240008 } # Malin Craig
  chiefofnavy            = { type = 9 id = 240121 } # William H. Standley
  chiefofair             = { type = 9 id = 240010 } # Oscar Westover

  landunit = {
    id       = { type = 14800 id = 600 }
    name     = "Roosevelt and Staff"
    location = 1809
    division = {
      id             = { type = 14800 id = 514 }
      name           = "Roosevelt and Staff"
      type           = d_10
      model          = 0
      experience     = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 14800 id = 601 }
    name     = "I Corps"
    location = 1789
    division = {
      id             = { type = 14800 id = 602 }
      name           = "26th Infantry Division 'Yankee'"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 603 }
      name           = "43rd Infantry Division 'Winged Victory'"
      type           = infantry
      model          = 6
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 14800 id = 604 }
    name     = "II Corps"
    location = 1795
    division = {
      id             = { type = 14800 id = 605 }
      name           = "1st Infantry Division 'Big Red One'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 14800 id = 606 }
      name           = "21st Cavalry Division"
      type           = cavalry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 607 }
      name           = "44th Infantry Division"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 608 }
      name           = "78th Infantry Division 'Lightning'"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14800 id = 609 }
    name     = "III Corps"
    location = 1808
    leader   = 240112
    division = {
      id             = { type = 13500 id = 610 }
      name           = "U.S. Army General Staff"
      type           = hq
      model          = 2
      strength       = 100
    }
    division = {
      id             = { type = 14800 id = 611 }
      name           = "28th Infantry Division 'Keystone'"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 612 }
      name           = "29th Infantry Division 'Blue and Gray'"
      type           = infantry
      model          = 6
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 14800 id = 613 }
    name     = "IV Corps"
    location = 1955
    division = {
      id             = { type = 14800 id = 614 }
      name           = "23rd Cavalry Division"
      type           = cavalry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 615 }
      name           = "31st Infantry Division 'Dixie'"
      type           = infantry
      model          = 6
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 14800 id = 616 }
    name     = "V Corps"
    location = 1821
    division = {
      id             = { type = 14800 id = 617 }
      name           = "22nd Cavalry Division"
      type           = cavalry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 618 }
      name           = "37th Infantry Division 'Buckeye'"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 619 }
      name           = "100th Infantry Division 'Century'"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14800 id = 620 }
    name     = "VI Corps"
    location = 1832
    division = {
      id             = { type = 14800 id = 621 }
      name           = "94th Infantry Division 'Pilgrim'"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14800 id = 622 }
    name     = "VII Corps"
    location = 1859
    division = {
      id             = { type = 14800 id = 623 }
      name           = "24th Cavalry Division"
      type           = cavalry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 624 }
      name           = "34th Infantry Division 'Red Bull'"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 625 }
      name           = "35th Infantry Division 'Santa Fe'"
      type           = infantry
      model          = 6
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 14800 id = 626 }
    name     = "VIII Corps"
    location = 1926
    division = {
      id             = { type = 14800 id = 627 }
      name           = "2nd Infantry Division 'Indianhead'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 14800 id = 628 }
      name           = "1st Cavalry Division 'First Team'"
      type           = cavalry
      model          = 7
      extra          = armored_car
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 14800 id = 629 }
      name           = "45th Infantry Division 'Thunderbird'"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 630 }
      name           = "95th Infantry Division 'Iron Men of Metz'"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14800 id = 631 }
    name     = "IX Corps"
    location = 1889
    division = {
      id             = { type = 14800 id = 632 }
      name           = "3rd Infantry Division 'Rock of the Marne'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 14800 id = 633 }
      name           = "40th Infantry Division 'Sunshine'"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 634 }
      name           = "41st Infantry Division 'Sunsetters'"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 14800 id = 635 }
      name           = "91st Infantry Division 'Wild West'"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 14800 id = 636 }
      name           = "104th Infantry Division 'Timberwolf'"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14800 id = 641 }
    name     = "1st Marine Division 'Old Breed'"
    location = 1886
    division = {
      id             = { type = 14800 id = 642 }
      name           = "1st Marine Division 'Old Breed'"
      type           = marine
      model          = 2
      strength       = 35
    }
  }
  landunit = {
    id       = { type = 14800 id = 639 }
    name     = "2nd Marine Division 'Silent Second'"
    location = 1886
    division = {
      id             = { type = 14800 id = 640 }
      name           = "2nd Marine Division 'Silent Second'"
      type           = marine
      model          = 2
      strength       = 35
    }
  }
  landunit = {
    id       = { type = 14800 id = 643 }
    name     = "Hawaiian Department"
    location = 1734
    division = {
      id             = { type = 14800 id = 644 }
      name           = "Hawaiian Division"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14800 id = 645 }
    name     = "Philippine Department"
    location = 1565
    division = {
      id             = { type = 14800 id = 646 }
      name           = "Philippine Division"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 14800 id = 647 }
    name     = "Panama Canal Department"
    location = 889
    division = {
      id             = { type = 14800 id = 648 }
      name           = "Panama Canal Garrison"
      type           = garrison
      model          = 3
      strength       = 100
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 14800 id = 26 }
    name     = "USN Battleship Fleet 1"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 14800 id = 28 }
      name           = "USS Nevada"
      type           = battleship
      model          = 4
      extra1         = floatplane
      extra2         = naval_anti_air_l
      extra3         = naval_improved_hull_l
      extra4         = naval_fire_controll_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 29 }
      name           = "USS Arizona"
      type           = battleship
      model          = 4
      extra1         = floatplane
      extra2         = naval_anti_air_l
      extra3         = naval_improved_hull_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 30 }
      name           = "USS Pennsylvania"
      type           = battleship
      model          = 4
      extra1         = floatplane
      extra2         = naval_anti_air_l
      extra3         = naval_improved_hull_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 49 }
      name           = "USS Chicago"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 50 }
      name           = "USS Indianapolis"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 52 }
      name           = "USS Northampton"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 2291 }
      name           = "Destroyer Division 11"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2292 }
      name           = "Destroyer Division 12"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2293 }
      name           = "Destroyer Division 28"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2294 }
      name           = "Destroyer Division 30"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2295 }
      name           = "Destroyer Division 33"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2296 }
      name           = "Destroyer Division 34"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 31 }
    name     = "USN Battleship Fleet 2"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 14800 id = 33 }
      name           = "USS Oklahoma"
      type           = battleship
      model          = 4
      extra1         = floatplane
      extra2         = naval_anti_air_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 34 }
      name           = "USS Tennessee"
      type           = battleship
      model          = 5
      extra1         = floatplane
      extra2         = naval_anti_air_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 35 }
      name           = "USS California"
      type           = battleship
      model          = 5
      extra1         = floatplane
      extra2         = naval_anti_air_l
      extra3         = naval_fire_controll_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 53 }
      name           = "USS Chester"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 54 }
      name           = "USS Louisville"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 55 }
      name           = "USS Portland"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 2297 }
      name           = "Destroyer Division 35"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2298 }
      name           = "Destroyer Division 36"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2299 }
      name           = "Destroyer Division 37"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2300 }
      name           = "Destroyer Division 38"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2301 }
      name           = "Destroyer Division 39"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2302 }
      name           = "Destroyer Division 40"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 36 }
    name     = "USN Battleship Fleet 4"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 14800 id = 37 }
      name           = "USS Colorado"
      type           = battleship
      model          = 6
      extra1         = floatplane
      extra2         = naval_anti_air_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 38 }
      name           = "USS West Virginia"
      type           = battleship
      model          = 6
      extra1         = floatplane
      extra2         = naval_anti_air_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 39 }
      name           = "USS Maryland"
      type           = battleship
      model          = 6
      extra1         = floatplane
      extra2         = naval_anti_air_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 57 }
      name           = "USS New Orleans"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 58 }
      name           = "USS Astoria"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 59 }
      name           = "USS Minneapolis"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 41 }
      name           = "USS Richmond"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 42 }
      name           = "USS Trenton"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 43 }
      name           = "USS Concord"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 44 }
      name           = "USS Raleigh"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 45 }
      name           = "USS Detroit"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 63 }
      name           = "Destroyer Division 2"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 40 }
    name     = "USN Cruiser Fleet 3"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 14800 id = 47 }
      name           = "USS Pensacola"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 48 }
      name           = "USS Salt Lake City"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 60 }
      name           = "USS San Francisco"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 2303 }
      name           = "Destroyer Division 47"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2304 }
      name           = "Destroyer Division 43"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2305 }
      name           = "Destroyer Division 42"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 46 }
    name     = "USN Carrier Fleet 1"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 14800 id = 27 }
      name           = "USS Lexington"
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 14800 id = 32 }
      name           = "USS Saratoga"
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 14800 id = 162 }
      name           = "USS Langley"
      type           = escort_carrier
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 2308 }
      name           = "Destroyer Division 31"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 62 }
      name           = "Destroyer Division 1"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 64 }
      name           = "Destroyer Division 3"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 51 }
    name     = "Pacific Transport Fleet 1"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 14800 id = 147 }
      name           = "Charles Goodyear Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 148 }
      name           = "Anthony Wayne Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 149 }
      name           = "John Hancock Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 2306 }
      name           = "Destroyer Division 41"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2307 }
      name           = "Destroyer Division 32"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2309 }
      name           = "Destroyer Division 29"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 56 }
    name     = "Pacific Transport Fleet 2"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 14800 id = 153 }
      name           = "George A. Custer Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 154 }
      name           = "August Belmont Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 156 }
      name           = "Emily Dickinson Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 2310 }
      name           = "Destroyer Division 25"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2311 }
      name           = "Destroyer Division 22"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2312 }
      name           = "Destroyer Division 15"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 61 }
    name     = "Pacific Transport Fleet 3"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 14800 id = 150 }
      name           = "Samuel Dexter Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 151 }
      name           = "Stephen C. Crane Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 152 }
      name           = "William McKinley Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 2313 }
      name           = "Destroyer Division 4"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2314 }
      name           = "Destroyer Division 10"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 74 }
    name     = "Pacific Submarine Fleet"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 14800 id = 75 }
      name           = "Submarine Division 1"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 76 }
      name           = "Submarine Division 2"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 77 }
      name           = "Submarine Division 3"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 78 }
      name           = "Submarine Division 4"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 79 }
      name           = "Submarine Division 5"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 80 }
      name           = "Submarine Division 6"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 14800 id = 81 }
    name     = "Asiatic Fleet"
    location = 1565
    base     = 1565
    division = {
      id             = { type = 14800 id = 112 }
      name           = "USS Augusta"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 82 }
      name           = "Destroyer Division 13"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 83 }
      name           = "Destroyer Division 14"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 14800 id = 87 }
    name     = "2nd USN Submarine Fleet"
    location = 1565
    base     = 1565
    division = {
      id             = { type = 14800 id = 85 }
      name           = "Submarine Division 7"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 86 }
      name           = "Submarine Division 8"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 88 }
      name           = "Submarine Division 9"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 14800 id = 89 }
    name     = "USN Seattle Fleet"
    location = 1874
    base     = 1874
    division = {
      id             = { type = 14800 id = 90 }
      name           = "USS Marblehead"
      type           = light_cruiser
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 14800 id = 91 }
      name           = "Destroyer Division 16"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 14800 id = 92 }
    name     = "3rd USN Submarine Fleet"
    location = 1874
    base     = 1874
    division = {
      id             = { type = 14800 id = 94 }
      name           = "Submarine Division 10"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 14800 id = 95 }
    name     = "USN Carribean Fleet"
    location = 889
    base     = 889
    division = {
      id             = { type = 14800 id = 96 }
      name           = "Destroyer Division 17"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 14800 id = 2322 }
    name     = "4th USN Submarine Fleet"
    location = 889
    base     = 889
    division = {
      id             = { type = 14800 id = 97 }
      name           = "Submarine Division 11"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 14800 id = 98 }
    name     = "USN Battleship Fleet 3"
    location = 1812
    base     = 1812
    division = {
      id             = { type = 14800 id = 99 }
      name           = "USS New Mexico"
      type           = battleship
      model          = 4
      extra1         = floatplane
      extra2         = naval_anti_air_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 100 }
      name           = "USS Mississippi"
      type           = battleship
      model          = 4
      extra1         = floatplane
      extra2         = naval_anti_air_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 101 }
      name           = "USS Idaho"
      type           = battleship
      model          = 4
      extra1         = floatplane
      extra2         = naval_anti_air_l
      extra3         = naval_improved_hull_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 103 }
      name           = "USS Arkansas"
      type           = battleship
      model          = 2
      extra1         = floatplane
      extra2         = naval_improved_hull_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 993 }
      name           = "USS Wyoming"
      type           = battleship
      model          = 2
      extra1         = floatplane
      extra2         = naval_improved_hull_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 104 }
      name           = "USS New York"
      type           = battleship
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 105 }
      name           = "USS Texas"
      type           = battleship
      model          = 3
      extra1         = floatplane
      extra2         = naval_fire_controll_l
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 107 }
      name           = "USS Omaha"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 108 }
      name           = "USS Milwaukee"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 109 }
      name           = "USS Cincinnati"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 110 }
      name           = "USS Memphis"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 194 }
      name           = "Destroyer Division 45"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 195 }
      name           = "Destroyer Division 46"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 102 }
    name     = "Atlantic Transport Fleet 1"
    location = 1812
    base     = 1812
    division = {
      id             = { type = 14800 id = 143 }
      name           = "Dolly Madison Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 144 }
      name           = "Frederick Douglass Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 145 }
      name           = "Clara Barton Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 117 }
      name           = "Destroyer Division 19"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 118 }
      name           = "Destroyer Division 20"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 106 }
    name     = "USN Cruiser Fleet 2"
    location = 1812
    base     = 1812
    division = {
      id             = { type = 14800 id = 93 }
      name           = "USS Houston"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      strength       = 100
    }
    division = {
      id             = { type = 14800 id = 113 }
      name           = "USS Tuscaloosa"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 14800 id = 193 }
      name           = "Destroyer Division 44"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 176 }
      name           = "Destroyer Division 27"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 111 }
    name     = "Atlantic Transport Fleet 2"
    location = 1812
    base     = 1812
    division = {
      id             = { type = 14800 id = 134 }
      name           = "Abner Doubleday Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 135 }
      name           = "Brigham Young Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 136 }
      name           = "William B. Travis Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 121 }
      name           = "Destroyer Division 23"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 172 }
      name           = "Destroyer Division 24"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 114 }
    name     = "USS Ranger Taskforce"
    location = 1812
    base     = 1812
    division = {
      id             = { type = 14800 id = 115 }
      name           = "USS Ranger"
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 14800 id = 116 }
      name           = "Destroyer Division 18"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 122 }
    name     = "Atlantic Submarine Fleet"
    location = 1812
    base     = 1812
    division = {
      id             = { type = 14800 id = 123 }
      name           = "Submarine Division 12"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 124 }
      name           = "Submarine Division 13"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 125 }
      name           = "Submarine Division 14"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 14800 id = 126 }
      name           = "Submarine Division 15"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 127 }
      name           = "Submarine Division 16"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 129 }
      name           = "Submarine Division 17"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 128 }
      name           = "Submarine Division 18"
      type           = submarine
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 14800 id = 133 }
    name     = "Atlantic Transport Fleet 3"
    location = 1812
    base     = 1812
    division = {
      id             = { type = 14800 id = 137 }
      name           = "Peter Stuyvesant Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 138 }
      name           = "Henry L. Benning Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 139 }
      name           = "Casimir Pulaski Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 119 }
      name           = "Destroyer Division 21"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 174 }
      name           = "Destroyer Division 26"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 2323 }
    name     = "Atlantic Transport Fleet 4"
    location = 1812
    base     = 1812
    division = {
      id             = { type = 14800 id = 140 }
      name           = "Sam Houston Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 141 }
      name           = "Francis Scott Key Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 142 }
      name           = "Walter Reed Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 2315 }
      name           = "Destroyer Division 5"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2316 }
      name           = "Destroyer Division 6"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2317 }
      name           = "Destroyer Division 7"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 14800 id = 146 }
    name     = "Pacific Transport Fleet 4"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 14800 id = 157 }
      name           = "Molly Pitcher Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 158 }
      name           = "Antonin Dvorak Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 159 }
      name           = "J. E. B. Stuart Flotilla"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 2318 }
      name           = "Destroyer Division 8"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 14800 id = 2319 }
      name           = "Destroyer Division 9"
      type           = destroyer
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 14800 id = 13 }
    name     = "1st USAAF Fighter Wing"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 14800 id = 14 }
      name           = "6th USAAF Fighter Wing"
      type           = interceptor
      model          = 5
    }
  }
  airunit = { 
    id       = { type = 14800 id = 17 }
    name     = "1st USAAF Bombardment Wing"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 14800 id = 18 }
      name           = "1st USAAF Dive Bomb. Wing"
      type           = tactical_bomber
      model          = 4
    }
  }
  airunit = { 
    id       = { type = 14800 id = 19 }
    name     = "5th USAAF Bombardment Wing"
    location = 889
    base     = 889
    division = {
      id             = { type = 14800 id = 20 }
      name           = "5th USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 4
    }
  }
  airunit = { 
    id       = { type = 14800 id = 21 }
    name     = "7th USAAF Bombardment Wing"
    location = 1874
    base     = 1874
    division = {
      id             = { type = 14800 id = 22 }
      name           = "1st USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 4
    }
  }
  airunit = { 
    id       = { type = 14800 id = 23 }
    name     = "US Army Airforce"
    location = 1795
    base     = 1795
    division = {
      id             = { type = 14800 id = 24 }
      name           = "9th USAAF Fighter Wing"
      type           = interceptor
      model          = 5
    }
    division = {
      id             = { type = 14800 id = 25 }
      name           = "2nd USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 4
    }
  }

  division_development = {
    id             = { type = 14800 id = 500 }
    name           = "USS Yorktown"
    type           = carrier
    model          = 2
    cost           = 0.5
    new_model      = no
    date           = { year = 1937 month = september day = 29 }
    extra1         = cag
    brigade_model1 = 2
  }
  division_development = {
    id             = { type = 14800 id = 501 }
    name           = "USS Enterprise"
    type           = carrier
    model          = 2
    cost           = 0.5
    new_model      = no
    date           = { year = 1938 month = may day = 12 }
    extra1         = cag
    brigade_model1 = 2
  }
  division_development = {
    id             = { type = 14800 id = 502 }
    name           = "USS Quincy"
    type           = heavy_cruiser
    model          = 4
    cost           = 0.3
    new_model      = no
    date           = { year = 1936 month = june day = 9 }
    extra1         = floatplane
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 14800 id = 592 }
    name           = "USS Vincennes"
    type           = heavy_cruiser
    model          = 4
    cost           = 0.3
    new_model      = no
    date           = { year = 1937 month = february day = 24 }
    extra1         = floatplane
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 14800 id = 503 }
    name           = "USS Wichita"
    type           = heavy_cruiser
    model          = 5
    cost           = 0.3
    new_model      = no
    date           = { year = 1939 month = february day = 16 }
    extra1         = floatplane
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 14800 id = 504 }
    name           = "USS Brooklyn"
    type           = light_cruiser
    model          = 5
    cost           = 0.3
    new_model      = no
    date           = { year = 1937 month = september day = 29 }
  }
  division_development = {
    id             = { type = 14800 id = 505 }
    name           = "USS Philadelphia"
    type           = light_cruiser
    model          = 5
    cost           = 0.3
    new_model      = no
    date           = { year = 1937 month = september day = 23 }
  }
  division_development = {
    id             = { type = 14800 id = 506 }
    name           = "USS Savannah"
    type           = light_cruiser
    model          = 5
    cost           = 0.3
    new_model      = no
    date           = { year = 1938 month = march day = 10 }
  }
  division_development = {
    id             = { type = 14800 id = 507 }
    name           = "USS Nashville"
    type           = light_cruiser
    model          = 5
    cost           = 0.3
    new_model      = no
    date           = { year = 1938 month = june day = 6 }
  }
  division_development = {
    id             = { type = 14800 id = 508 }
    name           = "USS Phoenix"
    type           = light_cruiser
    model          = 5
    cost           = 0.3
    new_model      = no
    date           = { year = 1938 month = october day = 3 }
  }
  division_development = {
    id             = { type = 14800 id = 509 }
    name           = "USS Boise"
    type           = light_cruiser
    model          = 5
    cost           = 0.3
    new_model      = no
    date           = { year = 1938 month = august day = 12 }
  }
  division_development = {
    id             = { type = 14800 id = 510 }
    name           = "USS Honolulu"
    type           = light_cruiser
    model          = 5
    cost           = 0.3
    new_model      = no
    date           = { year = 1938 month = june day = 15 }
  }
  division_development = {
    id             = { type = 14800 id = 511 }
    name           = "Destroyer Division 48"
    type           = destroyer
    model          = 5
    cost           = 0.1
    date           = { year = 1936 month = february day = 1 }
  }
  division_development = {
    id             = { type = 14800 id = 512 }
    name           = "Destroyer Division 49"
    type           = destroyer
    model          = 5
    cost           = 0.1
    date           = { year = 1936 month = march day = 1 }
  }
  division_development = {
    id             = { type = 14800 id = 513 }
    name           = "Submarine Division 19"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = may day = 1 }
  }

  landdivision = { dormant = yes id = { type = 14800 id = 515 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 516 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 517 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 518 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 519 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 520 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 521 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 522 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 523 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 524 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 525 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 526 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 527 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 528 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 529 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 530 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 531 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 532 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 533 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 534 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 535 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 536 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 537 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 538 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 539 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 540 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 541 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 542 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 543 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 544 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 545 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 546 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 547 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 548 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 549 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 550 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 551 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 552 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 553 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 554 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 555 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 556 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 557 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 558 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 559 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 560 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 561 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 562 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 563 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 564 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 565 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 566 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 567 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 568 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 569 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 570 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 571 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 572 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 573 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 574 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 575 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 576 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 577 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 578 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 579 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 580 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 581 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 582 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 583 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 584 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 585 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 586 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 587 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 588 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 589 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 590 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 591 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 1008 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 593 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 594 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 595 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 596 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 597 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 598 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 599 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 1000 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 1001 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 1002 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 1003 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 1004 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 1005 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 1006 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 1007 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 808 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 809 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 810 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 811 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 812 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 813 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 814 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 815 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 816 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 817 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 818 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 819 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 820 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 821 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 822 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 823 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 824 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 825 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 826 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 827 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 828 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 829 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 830 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 831 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 832 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 833 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 834 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 835 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 836 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 837 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 838 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 839 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 840 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 841 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 842 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 843 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 844 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 845 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 846 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 847 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 848 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 849 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 850 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 851 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 852 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 853 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 854 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 855 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 856 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 857 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 858 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 859 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 860 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 14800 id = 861 } name = "American Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked = yes } 
}
