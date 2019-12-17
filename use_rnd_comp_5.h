////////////////////////////////////////////////////////////////////////
///                                                                   //
/// It is file containing source code of library of pseudo random     //
/// number generator named MRndCPP.                                   //
///                                                                   //
/// The file is share on the open source licence, but unlike gpl,     //
/// mit, bsd apache, l-gpl, etc, it is NOT standard and NOT liberary  //
/// licence of the open source. By downloading and reading this       //
/// file, you conclude a contract with me. Namely, if you understand  //
/// that my source code can be improved (for example: speed up,       //
/// better algorithms, better implementation, better parametrs,       //
/// fixed bugs, etc), you need to present me everything in very       //
/// detail. You can use this code only for NON comercial and you can  //
/// NOT modify this header of file. Otherwise you need to the my      //
/// special licence.                                                  //
///                                                                   //
/// You can test how the generators pass the exam. The performence    //
/// test in the file test_00.cpp. Test in the file test_01.cpp is     //
/// prepared special to the external software like dieharder or       //
/// PractRand. The shell file test.sh containing complete test of     //
/// all generators in this library, but code of some headers from     //
/// this project will be modified.                                    //
///                                                                   //
////////////////////////////////////////////////////////////////////////
///                                                                   //
/// @created on 2019-12-08 02:56:45 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 20611663-ea55-4b72-863b-3cc66e970785                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib2, RndFib3, 9 >;

/* TEST00
time ./MRndCPP 
1623909407
3839886961
2841323221
3500042686
1429884035
682825171
51791064940910

real	0m40.098s
user	0m39.972s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.98e+07  |2831575428|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.99373470|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.20281362|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.51820484|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.79348333|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.80406851|  PASSED  
        diehard_opso|   0|   2097152|     100|0.20796239|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.44395287|  PASSED  
         diehard_dna|   0|   2097152|     100|0.31184768|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.99953202|   WEAK   
diehard_count_1s_byt|   0|    256000|     100|0.95273955|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.87273794|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.44832664|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.85290108|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.47846246|  PASSED  
        diehard_sums|   0|       100|     100|0.07522257|  PASSED  
        diehard_runs|   0|    100000|     100|0.69912504|  PASSED  
        diehard_runs|   0|    100000|     100|0.39988282|  PASSED  
       diehard_craps|   0|    200000|     100|0.95726840|  PASSED  
       diehard_craps|   0|    200000|     100|0.66226933|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.02396942|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.10890025|  PASSED  
         sts_monobit|   1|    100000|     100|0.24816419|  PASSED  
            sts_runs|   2|    100000|     100|0.48299589|  PASSED  
          sts_serial|   1|    100000|     100|0.72307075|  PASSED  
          sts_serial|   2|    100000|     100|0.74145061|  PASSED  
          sts_serial|   3|    100000|     100|0.69176081|  PASSED  
          sts_serial|   3|    100000|     100|0.48631267|  PASSED  
          sts_serial|   4|    100000|     100|0.49302772|  PASSED  
          sts_serial|   4|    100000|     100|0.06435575|  PASSED  
          sts_serial|   5|    100000|     100|0.97732269|  PASSED  
          sts_serial|   5|    100000|     100|0.86512327|  PASSED  
          sts_serial|   6|    100000|     100|0.29961217|  PASSED  
          sts_serial|   6|    100000|     100|0.02931496|  PASSED  
          sts_serial|   7|    100000|     100|0.52698919|  PASSED  
          sts_serial|   7|    100000|     100|0.19695511|  PASSED  
          sts_serial|   8|    100000|     100|0.09757367|  PASSED  
          sts_serial|   8|    100000|     100|0.67899512|  PASSED  
          sts_serial|   9|    100000|     100|0.62625148|  PASSED  
          sts_serial|   9|    100000|     100|0.28830615|  PASSED  
          sts_serial|  10|    100000|     100|0.99178197|  PASSED  
          sts_serial|  10|    100000|     100|0.91460018|  PASSED  
          sts_serial|  11|    100000|     100|0.80944080|  PASSED  
          sts_serial|  11|    100000|     100|0.90695843|  PASSED  
          sts_serial|  12|    100000|     100|0.43237093|  PASSED  
          sts_serial|  12|    100000|     100|0.70334281|  PASSED  
          sts_serial|  13|    100000|     100|0.86531911|  PASSED  
          sts_serial|  13|    100000|     100|0.98043976|  PASSED  
          sts_serial|  14|    100000|     100|0.28274891|  PASSED  
          sts_serial|  14|    100000|     100|0.17757367|  PASSED  
          sts_serial|  15|    100000|     100|0.56107353|  PASSED  
          sts_serial|  15|    100000|     100|0.84000383|  PASSED  
          sts_serial|  16|    100000|     100|0.83685035|  PASSED  
          sts_serial|  16|    100000|     100|0.97558080|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.88227379|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.98877660|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.92565839|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.61681877|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.86746896|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.10757814|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.23692145|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.97831441|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.95697468|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.95092702|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.97536033|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.26191873|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.79026635|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.24940095|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.68642213|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.20169352|  PASSED  
    rgb_permutations|   2|    100000|     100|0.06285991|  PASSED  
    rgb_permutations|   3|    100000|     100|0.02974995|  PASSED  
    rgb_permutations|   4|    100000|     100|0.37576725|  PASSED  
    rgb_permutations|   5|    100000|     100|0.60445896|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.82431764|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.28735443|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.11479326|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.71731072|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.87546493|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.71415493|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.75031006|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.33181127|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.12524530|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.89671197|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.34908380|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.76654814|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.68189986|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.65209670|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.99911767|   WEAK   
      rgb_lagged_sum|  15|   1000000|     100|0.14467487|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.94433947|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.46148673|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.31540290|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.93891734|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.90072032|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.61211059|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.99110074|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.87292185|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.48407704|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.44480767|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.79516744|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.99886508|   WEAK   
      rgb_lagged_sum|  28|   1000000|     100|0.91961314|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.22902547|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.59281688|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.04012663|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.41698328|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.11043618|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.81949183|  PASSED  
             dab_dct| 256|     50000|       1|0.14135522|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.38192940|  PASSED  
        dab_filltree|  32|  15000000|       1|0.61408870|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.20706167|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.56826906|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.82183034|  PASSED  

real	50m35.505s
user	46m39.980s
sys	3m44.764s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xcdb515fb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xcdb515fb
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xcdb515fb
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xcdb515fb
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xcdb515fb
length= 1 gigabyte (2^30 bytes), time= 20.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xcdb515fb
length= 2 gigabytes (2^31 bytes), time= 38.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xcdb515fb
length= 4 gigabytes (2^32 bytes), time= 76.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xcdb515fb
length= 5.250 gigabytes (2^32.392 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.277s
user	1m40.876s
sys	0m3.032s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbf9b0f8b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbf9b0f8b
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xbf9b0f8b
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xbf9b0f8b
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xbf9b0f8b
length= 1 gigabyte (2^30 bytes), time= 20.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xbf9b0f8b
length= 2 gigabytes (2^31 bytes), time= 38.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xbf9b0f8b
length= 4 gigabytes (2^32 bytes), time= 75.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xbf9b0f8b
length= 8 gigabytes (2^33 bytes), time= 155 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xbf9b0f8b
length= 16 gigabytes (2^34 bytes), time= 317 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xbf9b0f8b
length= 32 gigabytes (2^35 bytes), time= 637 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xbf9b0f8b
length= 50.000 gigabytes (2^35.644 bytes), time= 1007 seconds
  no anomalies in 184 test result(s)


real	16m48.055s
user	16m15.336s
sys	0m28.828s
*/
/* TEST00
time ./MRndCPP 
1623909407
3839886961
2841323221
3500042686
1429884035
682825171
51791064940910

real	0m40.106s
user	0m40.016s
sys	0m0.032s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.00e+07  |1782183366|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.31598579|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.63855869|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.43973231|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.96285634|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.02300760|  PASSED  
        diehard_opso|   0|   2097152|     100|0.53232613|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.80958653|  PASSED  
         diehard_dna|   0|   2097152|     100|0.00755522|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.53519693|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.09680010|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.76205443|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.66798975|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.00312711|   WEAK   
     diehard_squeeze|   0|    100000|     100|0.55426095|  PASSED  
        diehard_sums|   0|       100|     100|0.00468144|   WEAK   
        diehard_runs|   0|    100000|     100|0.69562629|  PASSED  
        diehard_runs|   0|    100000|     100|0.73267940|  PASSED  
       diehard_craps|   0|    200000|     100|0.64439380|  PASSED  
       diehard_craps|   0|    200000|     100|0.16483472|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.72802706|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.06842892|  PASSED  
         sts_monobit|   1|    100000|     100|0.97199143|  PASSED  
            sts_runs|   2|    100000|     100|0.99635004|   WEAK   
          sts_serial|   1|    100000|     100|0.08246610|  PASSED  
          sts_serial|   2|    100000|     100|0.61350878|  PASSED  
          sts_serial|   3|    100000|     100|0.75479294|  PASSED  
          sts_serial|   3|    100000|     100|0.20055933|  PASSED  
          sts_serial|   4|    100000|     100|0.77013357|  PASSED  
          sts_serial|   4|    100000|     100|0.89030363|  PASSED  
          sts_serial|   5|    100000|     100|0.57828370|  PASSED  
          sts_serial|   5|    100000|     100|0.64048241|  PASSED  
          sts_serial|   6|    100000|     100|0.83318284|  PASSED  
          sts_serial|   6|    100000|     100|0.48577506|  PASSED  
          sts_serial|   7|    100000|     100|0.83606952|  PASSED  
          sts_serial|   7|    100000|     100|0.78925852|  PASSED  
          sts_serial|   8|    100000|     100|0.82720249|  PASSED  
          sts_serial|   8|    100000|     100|0.30769883|  PASSED  
          sts_serial|   9|    100000|     100|0.92175375|  PASSED  
          sts_serial|   9|    100000|     100|0.97066861|  PASSED  
          sts_serial|  10|    100000|     100|0.88508692|  PASSED  
          sts_serial|  10|    100000|     100|0.97399991|  PASSED  
          sts_serial|  11|    100000|     100|0.76883002|  PASSED  
          sts_serial|  11|    100000|     100|0.65549139|  PASSED  
          sts_serial|  12|    100000|     100|0.91918490|  PASSED  
          sts_serial|  12|    100000|     100|0.56258515|  PASSED  
          sts_serial|  13|    100000|     100|0.66242524|  PASSED  
          sts_serial|  13|    100000|     100|0.86885485|  PASSED  
          sts_serial|  14|    100000|     100|0.44511941|  PASSED  
          sts_serial|  14|    100000|     100|0.12978739|  PASSED  
          sts_serial|  15|    100000|     100|0.16413086|  PASSED  
          sts_serial|  15|    100000|     100|0.45208938|  PASSED  
          sts_serial|  16|    100000|     100|0.33496030|  PASSED  
          sts_serial|  16|    100000|     100|0.39529550|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.28400688|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.28135744|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.36916195|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.28136699|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.07713607|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.11402696|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.99584146|   WEAK   
         rgb_bitdist|   8|    100000|     100|0.57162915|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.71308804|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.87214538|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.88033353|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.98587583|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.61314379|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.26896295|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.96886467|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.02542303|  PASSED  
    rgb_permutations|   2|    100000|     100|0.27842371|  PASSED  
    rgb_permutations|   3|    100000|     100|0.48526676|  PASSED  
    rgb_permutations|   4|    100000|     100|0.93628352|  PASSED  
    rgb_permutations|   5|    100000|     100|0.67181542|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.65123096|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.36319135|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.19243032|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.21827211|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.76783709|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.74631816|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.58012089|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.51522820|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.60581944|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.66711952|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.99343933|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.36879167|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.69115528|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.92542053|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.51526457|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.89821911|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.80237003|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.31308651|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.43877779|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.20817733|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.04650417|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.34554231|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.03615339|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.99996100|   WEAK   
      rgb_lagged_sum|  24|   1000000|     100|0.72030050|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.53658844|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.40888492|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.32558749|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.09301882|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.97706893|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.85804871|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.94047510|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.15509266|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.33757747|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.45705952|  PASSED  
             dab_dct| 256|     50000|       1|0.41404810|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.70801045|  PASSED  
        dab_filltree|  32|  15000000|       1|0.77956518|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.18459729|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.74164372|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.37017841|  PASSED  

real	52m37.382s
user	48m58.524s
sys	3m29.504s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x958ecf64
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x958ecf64
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.4  p =1-2.3e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x958ecf64
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x958ecf64
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x958ecf64
length= 1 gigabyte (2^30 bytes), time= 20.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x958ecf64
length= 2 gigabytes (2^31 bytes), time= 38.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x958ecf64
length= 4 gigabytes (2^32 bytes), time= 74.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x958ecf64
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.995s
user	1m40.580s
sys	0m3.144s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x137ca0ae
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x137ca0ae
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +5.0  p =  1.5e-4   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x137ca0ae
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.1  p =  7.8e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x137ca0ae
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x137ca0ae
length= 1 gigabyte (2^30 bytes), time= 20.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x137ca0ae
length= 2 gigabytes (2^31 bytes), time= 39.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x137ca0ae
length= 4 gigabytes (2^32 bytes), time= 79.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x137ca0ae
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x137ca0ae
length= 16 gigabytes (2^34 bytes), time= 321 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x137ca0ae
length= 32 gigabytes (2^35 bytes), time= 638 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x137ca0ae
length= 50.000 gigabytes (2^35.644 bytes), time= 1004 seconds
  no anomalies in 184 test result(s)


real	16m44.898s
user	16m15.640s
sys	0m26.240s
*/
