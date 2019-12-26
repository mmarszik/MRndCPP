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
/// @created on 2019-12-08 03:03:05 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token d438ac46-cbde-477f-8846-5865c74a1cfd                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_xor3.h"
#include "rnd_mlin.h"

using TRnd = RndXor3<RndMLin, 3607, 3613, 3617>;
/* TEST00
time ./MRndCPP 
1600542879
2563198783
2258462826
2680277355
3488658062
3432880974
4611681963778163056

real	0m5.246s
user	0m5.240s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  |1108062886|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.33142221|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.61267327|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.25050864|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.86513255|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.22895771|  PASSED  
        diehard_opso|   0|   2097152|     100|0.32786055|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.65021275|  PASSED  
         diehard_dna|   0|   2097152|     100|0.43658105|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.86316262|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.38527250|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.48712953|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.74621644|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.84633439|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.70278185|  PASSED  
        diehard_sums|   0|       100|     100|0.08681074|  PASSED  
        diehard_runs|   0|    100000|     100|0.22319152|  PASSED  
        diehard_runs|   0|    100000|     100|0.03610332|  PASSED  
       diehard_craps|   0|    200000|     100|0.25953992|  PASSED  
       diehard_craps|   0|    200000|     100|0.37879673|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.35536025|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.96328975|  PASSED  
         sts_monobit|   1|    100000|     100|0.46186814|  PASSED  
            sts_runs|   2|    100000|     100|0.28446777|  PASSED  
          sts_serial|   1|    100000|     100|0.86700111|  PASSED  
          sts_serial|   2|    100000|     100|0.77445096|  PASSED  
          sts_serial|   3|    100000|     100|0.45199708|  PASSED  
          sts_serial|   3|    100000|     100|0.06391489|  PASSED  
          sts_serial|   4|    100000|     100|0.33496672|  PASSED  
          sts_serial|   4|    100000|     100|0.69765246|  PASSED  
          sts_serial|   5|    100000|     100|0.83791022|  PASSED  
          sts_serial|   5|    100000|     100|0.52416446|  PASSED  
          sts_serial|   6|    100000|     100|0.97898339|  PASSED  
          sts_serial|   6|    100000|     100|0.45144836|  PASSED  
          sts_serial|   7|    100000|     100|0.11003762|  PASSED  
          sts_serial|   7|    100000|     100|0.16772997|  PASSED  
          sts_serial|   8|    100000|     100|0.66777971|  PASSED  
          sts_serial|   8|    100000|     100|0.78540599|  PASSED  
          sts_serial|   9|    100000|     100|0.96287094|  PASSED  
          sts_serial|   9|    100000|     100|0.91477182|  PASSED  
          sts_serial|  10|    100000|     100|0.15306964|  PASSED  
          sts_serial|  10|    100000|     100|0.46587555|  PASSED  
          sts_serial|  11|    100000|     100|0.67452183|  PASSED  
          sts_serial|  11|    100000|     100|0.03491403|  PASSED  
          sts_serial|  12|    100000|     100|0.52470561|  PASSED  
          sts_serial|  12|    100000|     100|0.76385677|  PASSED  
          sts_serial|  13|    100000|     100|0.46965805|  PASSED  
          sts_serial|  13|    100000|     100|0.72686532|  PASSED  
          sts_serial|  14|    100000|     100|0.35658108|  PASSED  
          sts_serial|  14|    100000|     100|0.36685968|  PASSED  
          sts_serial|  15|    100000|     100|0.98608723|  PASSED  
          sts_serial|  15|    100000|     100|0.33344002|  PASSED  
          sts_serial|  16|    100000|     100|0.77432142|  PASSED  
          sts_serial|  16|    100000|     100|0.65744691|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.67229607|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.23758208|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.91275441|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.89613859|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.99626445|   WEAK   
         rgb_bitdist|   6|    100000|     100|0.90677350|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.67095366|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.79217482|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.64650628|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.86100802|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.56651464|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.96237777|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.76670937|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.69573188|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.97768403|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.41834830|  PASSED  
    rgb_permutations|   2|    100000|     100|0.93284643|  PASSED  
    rgb_permutations|   3|    100000|     100|0.37338301|  PASSED  
    rgb_permutations|   4|    100000|     100|0.03004780|  PASSED  
    rgb_permutations|   5|    100000|     100|0.35321383|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.59242745|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.92423167|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.87931043|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.10122684|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.33177235|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.89537964|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.61398393|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.88027245|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.48462282|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.99580866|   WEAK   
      rgb_lagged_sum|  10|   1000000|     100|0.78960336|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.41303512|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.00959127|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.52117157|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.94555814|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.60193719|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.86136944|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.47877407|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.54881143|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.97270779|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.97064042|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.39285218|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.08888275|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.95247969|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.15184896|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.40837556|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.25552064|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.43848799|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.96731697|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.61990963|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.13999212|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.38390652|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.51797797|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.13842018|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.10565767|  PASSED  
             dab_dct| 256|     50000|       1|0.16521276|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.38280627|  PASSED  
        dab_filltree|  32|  15000000|       1|0.72546492|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.07017367|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.74822070|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.64811192|  PASSED  

real	49m21.834s
user	45m48.680s
sys	3m30.488s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x254f5bfe
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x254f5bfe
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x254f5bfe
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x254f5bfe
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x254f5bfe
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x254f5bfe
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x254f5bfe
length= 4 gigabytes (2^32 bytes), time= 71.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  -2.4  p =1-4.5e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x254f5bfe
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.291s
user	1m41.324s
sys	0m2.744s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xeacf06cb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xeacf06cb
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xeacf06cb
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xeacf06cb
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xeacf06cb
length= 1 gigabyte (2^30 bytes), time= 22.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xeacf06cb
length= 2 gigabytes (2^31 bytes), time= 43.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xeacf06cb
length= 4 gigabytes (2^32 bytes), time= 87.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xeacf06cb
length= 4.750 gigabytes (2^32.248 bytes), time= 105 seconds
  no anomalies in 159 test result(s)


real	1m45.765s
user	1m43.436s
sys	0m2.224s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xba1d0fcb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xba1d0fcb
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xba1d0fcb
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xba1d0fcb
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xba1d0fcb
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-2,T)         R=  -7.1  p =1-8.8e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xba1d0fcb
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xba1d0fcb
length= 4 gigabytes (2^32 bytes), time= 72.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xba1d0fcb
length= 5.750 gigabytes (2^32.524 bytes), time= 105 seconds
  no anomalies in 160 test result(s)


real	1m45.440s
user	1m42.692s
sys	0m2.644s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5cb21527
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5cb21527
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5cb21527
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  -2.3  p =1-4.1e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5cb21527
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5cb21527
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5cb21527
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5cb21527
length= 4 gigabytes (2^32 bytes), time= 71.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x5cb21527
length= 8 gigabytes (2^33 bytes), time= 144 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.5  p =  3.4e-3   unusual          
  Gap-16:B                          R=  +6.5  p =  1.7e-5   suspicious       
  ...and 163 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5cb21527
length= 16 gigabytes (2^34 bytes), time= 299 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +8.7  p =  4.9e-6   suspicious       
  Gap-16:B                          R= +13.5  p =  1.9e-11    FAIL           
  [Low8/32]Gap-16:A                 R=  +6.9  p =  9.2e-5   mildly suspicious
  [Low8/32]Gap-16:B                 R= +11.0  p =  2.7e-9    VERY SUSPICIOUS 
  [Low1/32]Gap-16:A                 R=  +6.7  p =  3.2e-5   mildly suspicious
  ...and 167 test result(s) without anomalies


real	4m59.441s
user	4m52.152s
sys	0m6.984s
*/
