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
/// @created on 2019-12-08 02:59:39 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 729bd7da-da79-4064-8171-841d0860907d                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2;
/* TEST00
time ./MRndCPP 
3497841202
67965748
527131255
182892387
247477018
3100051826
18446287092895951539

real	0m56.401s
user	0m56.248s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.48e+07  |2248408881|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.74732310|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.82110843|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.06749878|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.76349092|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.80985345|  PASSED  
        diehard_opso|   0|   2097152|     100|0.48418003|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.86043424|  PASSED  
         diehard_dna|   0|   2097152|     100|0.40791717|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.77666292|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.88857122|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.54683180|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.85101124|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.21330979|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.15761609|  PASSED  
        diehard_sums|   0|       100|     100|0.01534032|  PASSED  
        diehard_runs|   0|    100000|     100|0.54552796|  PASSED  
        diehard_runs|   0|    100000|     100|0.69485953|  PASSED  
       diehard_craps|   0|    200000|     100|0.79461531|  PASSED  
       diehard_craps|   0|    200000|     100|0.22149590|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.95988716|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.98068360|  PASSED  
         sts_monobit|   1|    100000|     100|0.20794728|  PASSED  
            sts_runs|   2|    100000|     100|0.50467296|  PASSED  
          sts_serial|   1|    100000|     100|0.90392495|  PASSED  
          sts_serial|   2|    100000|     100|0.87417675|  PASSED  
          sts_serial|   3|    100000|     100|0.41451858|  PASSED  
          sts_serial|   3|    100000|     100|0.16051047|  PASSED  
          sts_serial|   4|    100000|     100|0.98400260|  PASSED  
          sts_serial|   4|    100000|     100|0.83753342|  PASSED  
          sts_serial|   5|    100000|     100|0.77925722|  PASSED  
          sts_serial|   5|    100000|     100|0.06262887|  PASSED  
          sts_serial|   6|    100000|     100|0.20606323|  PASSED  
          sts_serial|   6|    100000|     100|0.43808825|  PASSED  
          sts_serial|   7|    100000|     100|0.38506527|  PASSED  
          sts_serial|   7|    100000|     100|0.91928460|  PASSED  
          sts_serial|   8|    100000|     100|0.47579526|  PASSED  
          sts_serial|   8|    100000|     100|0.44891061|  PASSED  
          sts_serial|   9|    100000|     100|0.94047609|  PASSED  
          sts_serial|   9|    100000|     100|0.13777778|  PASSED  
          sts_serial|  10|    100000|     100|0.81268944|  PASSED  
          sts_serial|  10|    100000|     100|0.36033034|  PASSED  
          sts_serial|  11|    100000|     100|0.77741095|  PASSED  
          sts_serial|  11|    100000|     100|0.46841238|  PASSED  
          sts_serial|  12|    100000|     100|0.99183606|  PASSED  
          sts_serial|  12|    100000|     100|0.85579509|  PASSED  
          sts_serial|  13|    100000|     100|0.81373213|  PASSED  
          sts_serial|  13|    100000|     100|0.66417798|  PASSED  
          sts_serial|  14|    100000|     100|0.80690517|  PASSED  
          sts_serial|  14|    100000|     100|0.42772887|  PASSED  
          sts_serial|  15|    100000|     100|0.95648342|  PASSED  
          sts_serial|  15|    100000|     100|0.65997072|  PASSED  
          sts_serial|  16|    100000|     100|0.28146987|  PASSED  
          sts_serial|  16|    100000|     100|0.03177712|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.35850512|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.01788073|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.00704611|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.51836059|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.28589704|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.34567654|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.01742544|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.08498297|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.90397233|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.66282307|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.34007905|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.05383058|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.94533013|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.06537210|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.34124535|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.02414973|  PASSED  
    rgb_permutations|   2|    100000|     100|0.21857920|  PASSED  
    rgb_permutations|   3|    100000|     100|0.27793967|  PASSED  
    rgb_permutations|   4|    100000|     100|0.30567444|  PASSED  
    rgb_permutations|   5|    100000|     100|0.93242666|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.98801427|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.55163146|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.87089200|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.32639289|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.14607327|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.68642799|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.86474847|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.13390456|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.04022412|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.99930204|   WEAK   
      rgb_lagged_sum|  10|   1000000|     100|0.03140215|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.03624672|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.86900490|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.32893161|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.55162225|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.76745500|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.39093019|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.37622078|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.76762308|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.81660085|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.49571994|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.00005640|   WEAK   
      rgb_lagged_sum|  22|   1000000|     100|0.62794186|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.28928230|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.79706241|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.86495068|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.28685708|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.56962266|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.33046078|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.70466732|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.06832741|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.28763606|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.99761257|   WEAK   
     rgb_kstest_test|   0|     10000|    1000|0.02026498|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.55356594|  PASSED  
             dab_dct| 256|     50000|       1|0.13719345|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.30925693|  PASSED  
        dab_filltree|  32|  15000000|       1|0.69678869|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.15293697|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.17710022|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.66346178|  PASSED  

real	56m34.411s
user	52m29.428s
sys	3m47.736s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x35c2bc41
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x35c2bc41
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x35c2bc41
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x35c2bc41
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x35c2bc41
length= 1 gigabyte (2^30 bytes), time= 20.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x35c2bc41
length= 2 gigabytes (2^31 bytes), time= 39.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x35c2bc41
length= 4 gigabytes (2^32 bytes), time= 76.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x35c2bc41
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.419s
user	1m38.628s
sys	0m3.456s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa714fff0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa714fff0
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xa714fff0
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa714fff0
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.6  p =1-8.1e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa714fff0
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -5.5  p =1-6.8e-5   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa714fff0
length= 2 gigabytes (2^31 bytes), time= 40.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.4  p =  8.3e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa714fff0
length= 4 gigabytes (2^32 bytes), time= 78.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xa714fff0
length= 8 gigabytes (2^33 bytes), time= 157 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xa714fff0
length= 16 gigabytes (2^34 bytes), time= 323 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xa714fff0
length= 32 gigabytes (2^35 bytes), time= 650 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xa714fff0
length= 48.750 gigabytes (2^35.607 bytes), time= 1000 seconds
  no anomalies in 184 test result(s)


real	16m40.802s
user	16m8.704s
sys	0m29.780s
*/
