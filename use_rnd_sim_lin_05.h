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
/// @created on 2019-12-08 03:02:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 995f3936-f3cc-4472-9a0d-d22eb4f2f7e1                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin05;
/* TEST00
time ./MRndCPP 
450647553
1626776225
2111440573
3385282940
1835585326
2004076447
4611711641555967295

real	0m6.029s
user	0m6.008s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.25e+07  |3980162943|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.45754895|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.32119406|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.54301458|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.43628825|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.93588683|  PASSED  
        diehard_opso|   0|   2097152|     100|0.74654922|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.68289926|  PASSED  
         diehard_dna|   0|   2097152|     100|0.35655733|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.99360265|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.96916894|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.59516268|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.48608333|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.53880905|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.48131968|  PASSED  
        diehard_sums|   0|       100|     100|0.00098784|   WEAK   
        diehard_runs|   0|    100000|     100|0.55242791|  PASSED  
        diehard_runs|   0|    100000|     100|0.56278816|  PASSED  
       diehard_craps|   0|    200000|     100|0.71670127|  PASSED  
       diehard_craps|   0|    200000|     100|0.68705425|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.19255725|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.95500426|  PASSED  
         sts_monobit|   1|    100000|     100|0.61357773|  PASSED  
            sts_runs|   2|    100000|     100|0.08473801|  PASSED  
          sts_serial|   1|    100000|     100|0.28761242|  PASSED  
          sts_serial|   2|    100000|     100|0.34718715|  PASSED  
          sts_serial|   3|    100000|     100|0.31759224|  PASSED  
          sts_serial|   3|    100000|     100|0.35558160|  PASSED  
          sts_serial|   4|    100000|     100|0.55098657|  PASSED  
          sts_serial|   4|    100000|     100|0.80431746|  PASSED  
          sts_serial|   5|    100000|     100|0.75331511|  PASSED  
          sts_serial|   5|    100000|     100|0.49639555|  PASSED  
          sts_serial|   6|    100000|     100|0.96076711|  PASSED  
          sts_serial|   6|    100000|     100|0.61086739|  PASSED  
          sts_serial|   7|    100000|     100|0.35005160|  PASSED  
          sts_serial|   7|    100000|     100|0.31798319|  PASSED  
          sts_serial|   8|    100000|     100|0.98981839|  PASSED  
          sts_serial|   8|    100000|     100|0.61741362|  PASSED  
          sts_serial|   9|    100000|     100|0.93486475|  PASSED  
          sts_serial|   9|    100000|     100|0.85705873|  PASSED  
          sts_serial|  10|    100000|     100|0.46867305|  PASSED  
          sts_serial|  10|    100000|     100|0.33637556|  PASSED  
          sts_serial|  11|    100000|     100|0.20342384|  PASSED  
          sts_serial|  11|    100000|     100|0.00707872|  PASSED  
          sts_serial|  12|    100000|     100|0.33285436|  PASSED  
          sts_serial|  12|    100000|     100|0.29347807|  PASSED  
          sts_serial|  13|    100000|     100|0.34245026|  PASSED  
          sts_serial|  13|    100000|     100|0.03752515|  PASSED  
          sts_serial|  14|    100000|     100|0.76979460|  PASSED  
          sts_serial|  14|    100000|     100|0.56981830|  PASSED  
          sts_serial|  15|    100000|     100|0.73314909|  PASSED  
          sts_serial|  15|    100000|     100|0.99222634|  PASSED  
          sts_serial|  16|    100000|     100|0.81117399|  PASSED  
          sts_serial|  16|    100000|     100|0.18004262|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.97540625|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.87814041|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.14374640|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.58803568|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.56731192|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.41122228|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.18902570|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.90999299|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.99987821|   WEAK   
         rgb_bitdist|  10|    100000|     100|0.12819368|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.19273454|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.39664999|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.09755831|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.76184048|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.70279045|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.19240653|  PASSED  
    rgb_permutations|   2|    100000|     100|0.08590809|  PASSED  
    rgb_permutations|   3|    100000|     100|0.86075670|  PASSED  
    rgb_permutations|   4|    100000|     100|0.57686982|  PASSED  
    rgb_permutations|   5|    100000|     100|0.54586039|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.84686050|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.99525502|   WEAK   
      rgb_lagged_sum|   2|   1000000|     100|0.76854158|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.05072069|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.43225508|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.48906551|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.24547654|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.81205222|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.76640961|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.39386273|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.98854338|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.35540261|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.35276924|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.21299481|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.39360627|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.95305541|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.63357330|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.15037179|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.79003903|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.49075530|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.33591224|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.42397741|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.93696634|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.53376001|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.77348520|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.74662695|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.18393016|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.69000935|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.77642196|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.56722861|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.42656224|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.30562244|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.17669817|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.72909367|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.75863480|  PASSED  
             dab_dct| 256|     50000|       1|0.87530694|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.00036571|   WEAK   
        dab_filltree|  32|  15000000|       1|0.62796296|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.35772121|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.10748476|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.68861302|  PASSED  

real	52m45.360s
user	49m7.404s
sys	3m28.984s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x54df6c45
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x54df6c45
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x54df6c45
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x54df6c45
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x54df6c45
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x54df6c45
length= 2 gigabytes (2^31 bytes), time= 37.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x54df6c45
length= 4 gigabytes (2^32 bytes), time= 72.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x54df6c45
length= 5.500 gigabytes (2^32.459 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.427s
user	1m38.924s
sys	0m2.236s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x111a97d2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x111a97d2
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x111a97d2
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x111a97d2
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x111a97d2
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x111a97d2
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x111a97d2
length= 4 gigabytes (2^32 bytes), time= 75.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x111a97d2
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.271s
user	1m39.124s
sys	0m1.832s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc891a41d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc891a41d
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc891a41d
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.6  p =1-9.5e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc891a41d
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  -6.5  p =1-2.9e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc891a41d
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc891a41d
length= 2 gigabytes (2^31 bytes), time= 36.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xc891a41d
length= 4 gigabytes (2^32 bytes), time= 71.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xc891a41d
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m45.005s
user	1m42.452s
sys	0m2.244s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x15eb9101
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x15eb9101
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x15eb9101
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x15eb9101
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x15eb9101
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x15eb9101
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.6  p = 0.988     unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x15eb9101
length= 4 gigabytes (2^32 bytes), time= 71.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x15eb9101
length= 8 gigabytes (2^33 bytes), time= 144 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x15eb9101
length= 16 gigabytes (2^34 bytes), time= 299 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x15eb9101
length= 32 gigabytes (2^35 bytes), time= 604 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x15eb9101
length= 64 gigabytes (2^36 bytes), time= 1226 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x15eb9101
length= 128 gigabytes (2^37 bytes), time= 2464 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x15eb9101
length= 187.500 gigabytes (2^37.551 bytes), time= 3603 seconds
  no anomalies in 201 test result(s)


real	60m4.164s
user	58m44.112s
sys	1m10.696s
*/
/* TEST00
time ./MRndCPP 
450647553
1626776225
2111440573
3385282940
1835585326
2004076447
135568375777917

real	0m48.146s
user	0m48.088s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.23e+07  |2351821165|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.04873402|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.49322021|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.91397677|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.72575478|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.95534811|  PASSED  
        diehard_opso|   0|   2097152|     100|0.86209240|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.18094701|  PASSED  
         diehard_dna|   0|   2097152|     100|0.14942509|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.44514429|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.59261778|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.55915630|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.99949722|   WEAK   
    diehard_3dsphere|   3|      4000|     100|0.12878386|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.49321870|  PASSED  
        diehard_sums|   0|       100|     100|0.60352302|  PASSED  
        diehard_runs|   0|    100000|     100|0.08552690|  PASSED  
        diehard_runs|   0|    100000|     100|0.99823585|   WEAK   
       diehard_craps|   0|    200000|     100|0.18586757|  PASSED  
       diehard_craps|   0|    200000|     100|0.06769862|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.28532723|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.35322068|  PASSED  
         sts_monobit|   1|    100000|     100|0.59746287|  PASSED  
            sts_runs|   2|    100000|     100|0.36494634|  PASSED  
          sts_serial|   1|    100000|     100|0.50438395|  PASSED  
          sts_serial|   2|    100000|     100|0.44572740|  PASSED  
          sts_serial|   3|    100000|     100|0.74484024|  PASSED  
          sts_serial|   3|    100000|     100|0.49268690|  PASSED  
          sts_serial|   4|    100000|     100|0.07330920|  PASSED  
          sts_serial|   4|    100000|     100|0.47942928|  PASSED  
          sts_serial|   5|    100000|     100|0.63456452|  PASSED  
          sts_serial|   5|    100000|     100|0.79820580|  PASSED  
          sts_serial|   6|    100000|     100|0.54605237|  PASSED  
          sts_serial|   6|    100000|     100|0.24504699|  PASSED  
          sts_serial|   7|    100000|     100|0.83520759|  PASSED  
          sts_serial|   7|    100000|     100|0.77532865|  PASSED  
          sts_serial|   8|    100000|     100|0.91032086|  PASSED  
          sts_serial|   8|    100000|     100|0.71951899|  PASSED  
          sts_serial|   9|    100000|     100|0.66603807|  PASSED  
          sts_serial|   9|    100000|     100|0.99632993|   WEAK   
          sts_serial|  10|    100000|     100|0.83076871|  PASSED  
          sts_serial|  10|    100000|     100|0.29384551|  PASSED  
          sts_serial|  11|    100000|     100|0.47414943|  PASSED  
          sts_serial|  11|    100000|     100|0.58816114|  PASSED  
          sts_serial|  12|    100000|     100|0.28077674|  PASSED  
          sts_serial|  12|    100000|     100|0.27695863|  PASSED  
          sts_serial|  13|    100000|     100|0.10929602|  PASSED  
          sts_serial|  13|    100000|     100|0.34139610|  PASSED  
          sts_serial|  14|    100000|     100|0.98569452|  PASSED  
          sts_serial|  14|    100000|     100|0.02589424|  PASSED  
          sts_serial|  15|    100000|     100|0.48116112|  PASSED  
          sts_serial|  15|    100000|     100|0.08805179|  PASSED  
          sts_serial|  16|    100000|     100|0.51934269|  PASSED  
          sts_serial|  16|    100000|     100|0.93335958|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.18484427|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.83023005|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.04936551|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.55932208|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.31390870|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.49879633|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.16517705|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.91901944|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.85752683|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.96968999|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.99963594|   WEAK   
         rgb_bitdist|  12|    100000|     100|0.06884478|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.57274435|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.71155134|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.32235211|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.23709039|  PASSED  
    rgb_permutations|   2|    100000|     100|0.93854380|  PASSED  
    rgb_permutations|   3|    100000|     100|0.17580999|  PASSED  
    rgb_permutations|   4|    100000|     100|0.96734633|  PASSED  
    rgb_permutations|   5|    100000|     100|0.96614751|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.08837281|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.54475460|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.42298769|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.06595073|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.43864408|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.09341245|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.14993729|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.46771851|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.21219848|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.14396772|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.27606488|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.94209111|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.24801390|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.98377279|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.02827699|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.76562245|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.89536132|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.85816324|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.04658960|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.52428866|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.98252863|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.38764987|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.01557960|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.81564033|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.74760741|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.07320574|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.37807345|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.59252355|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.80309359|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.35895733|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.88933403|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.70442741|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.35551278|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.53585324|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.08549885|  PASSED  
             dab_dct| 256|     50000|       1|0.54711775|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.96674334|  PASSED  
        dab_filltree|  32|  15000000|       1|0.38192095|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.47915240|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.05490793|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.15876226|  PASSED  

real	49m13.772s
user	45m35.776s
sys	3m34.948s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x33a5946c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x33a5946c
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x33a5946c
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x33a5946c
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x33a5946c
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x33a5946c
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x33a5946c
length= 4 gigabytes (2^32 bytes), time= 73.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x33a5946c
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.632s
user	1m42.300s
sys	0m2.160s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8ee8ff5e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8ee8ff5e
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -6.3  p =1-2.3e-4   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8ee8ff5e
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -5.1  p =1-1.3e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8ee8ff5e
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8ee8ff5e
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x8ee8ff5e
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8ee8ff5e
length= 4 gigabytes (2^32 bytes), time= 71.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -5.7  p =1-6.0e-4   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8ee8ff5e
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.4  p =  7.3e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m44.337s
user	1m41.956s
sys	0m2.184s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8fe17a9e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8fe17a9e
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.1  p =1-7.1e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8fe17a9e
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8fe17a9e
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8fe17a9e
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x8fe17a9e
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8fe17a9e
length= 4 gigabytes (2^32 bytes), time= 74.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x8fe17a9e
length= 5.250 gigabytes (2^32.392 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.6  p =  1.0e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m40.914s
user	1m38.520s
sys	0m2.140s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x510e17ed
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x510e17ed
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-4,T)         R=  +8.0  p =  1.9e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x510e17ed
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x510e17ed
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x510e17ed
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x510e17ed
length= 2 gigabytes (2^31 bytes), time= 36.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x510e17ed
length= 4 gigabytes (2^32 bytes), time= 71.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x510e17ed
length= 8 gigabytes (2^33 bytes), time= 147 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x510e17ed
length= 16 gigabytes (2^34 bytes), time= 301 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x510e17ed
length= 32 gigabytes (2^35 bytes), time= 604 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.2  p =1-1.7e-3   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0x510e17ed
length= 64 gigabytes (2^36 bytes), time= 1223 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +6.2  p =  1.2e-3   unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0x510e17ed
length= 128 gigabytes (2^37 bytes), time= 2448 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x510e17ed
length= 188.750 gigabytes (2^37.560 bytes), time= 3601 seconds
  no anomalies in 201 test result(s)


real	60m1.244s
user	58m44.784s
sys	1m12.000s
*/
