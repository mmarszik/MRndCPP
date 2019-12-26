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
/// @created on 2019-12-08 02:57:46 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token da5caad5-47b0-45bf-8100-04d7fbb20b94                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib0a;
/* TEST00
time ./MRndCPP 
3233202625
2328409647
3361551064
2495864169
3328962110
888761389
4611768298330966372

real	0m7.832s
user	0m7.828s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.11e+07  |1668864667|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.65929958|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.70577754|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.88585986|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.35766400|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.12948573|  PASSED  
        diehard_opso|   0|   2097152|     100|0.83276832|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.75947327|  PASSED  
         diehard_dna|   0|   2097152|     100|0.18093548|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.95224174|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.38007059|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.94278939|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.19358197|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.89367046|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.66300527|  PASSED  
        diehard_sums|   0|       100|     100|0.32535559|  PASSED  
        diehard_runs|   0|    100000|     100|0.03571404|  PASSED  
        diehard_runs|   0|    100000|     100|0.05738508|  PASSED  
       diehard_craps|   0|    200000|     100|0.47233751|  PASSED  
       diehard_craps|   0|    200000|     100|0.62379813|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.60724744|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.19730312|  PASSED  
         sts_monobit|   1|    100000|     100|0.68786619|  PASSED  
            sts_runs|   2|    100000|     100|0.37783261|  PASSED  
          sts_serial|   1|    100000|     100|0.00095261|   WEAK   
          sts_serial|   2|    100000|     100|0.33565719|  PASSED  
          sts_serial|   3|    100000|     100|0.47617215|  PASSED  
          sts_serial|   3|    100000|     100|0.34596545|  PASSED  
          sts_serial|   4|    100000|     100|0.70109207|  PASSED  
          sts_serial|   4|    100000|     100|0.98251689|  PASSED  
          sts_serial|   5|    100000|     100|0.70344057|  PASSED  
          sts_serial|   5|    100000|     100|0.77597883|  PASSED  
          sts_serial|   6|    100000|     100|0.72482475|  PASSED  
          sts_serial|   6|    100000|     100|0.29724578|  PASSED  
          sts_serial|   7|    100000|     100|0.95912380|  PASSED  
          sts_serial|   7|    100000|     100|0.93779287|  PASSED  
          sts_serial|   8|    100000|     100|0.67096347|  PASSED  
          sts_serial|   8|    100000|     100|0.64044259|  PASSED  
          sts_serial|   9|    100000|     100|0.36399105|  PASSED  
          sts_serial|   9|    100000|     100|0.19535433|  PASSED  
          sts_serial|  10|    100000|     100|0.05091789|  PASSED  
          sts_serial|  10|    100000|     100|0.21468000|  PASSED  
          sts_serial|  11|    100000|     100|0.14196975|  PASSED  
          sts_serial|  11|    100000|     100|0.83394729|  PASSED  
          sts_serial|  12|    100000|     100|0.83724413|  PASSED  
          sts_serial|  12|    100000|     100|0.78384559|  PASSED  
          sts_serial|  13|    100000|     100|0.80398077|  PASSED  
          sts_serial|  13|    100000|     100|0.45905335|  PASSED  
          sts_serial|  14|    100000|     100|0.23010323|  PASSED  
          sts_serial|  14|    100000|     100|0.98770180|  PASSED  
          sts_serial|  15|    100000|     100|0.96964068|  PASSED  
          sts_serial|  15|    100000|     100|0.44321199|  PASSED  
          sts_serial|  16|    100000|     100|0.71283931|  PASSED  
          sts_serial|  16|    100000|     100|0.82347079|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.87845621|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.89849864|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.33440463|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.77681271|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.58711641|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.55198056|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.95487168|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.63002789|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.84418622|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.54637799|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.02609143|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.80993160|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.88893587|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.35259535|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.50892637|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.10054264|  PASSED  
    rgb_permutations|   2|    100000|     100|0.47156335|  PASSED  
    rgb_permutations|   3|    100000|     100|0.60819739|  PASSED  
    rgb_permutations|   4|    100000|     100|0.92071889|  PASSED  
    rgb_permutations|   5|    100000|     100|0.48168803|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.22292587|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.64705600|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.12156410|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.88323302|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.36900863|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.78492751|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.27795833|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.58003959|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.89434060|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.93790326|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.94568543|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.55547436|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.29278145|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.74679478|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.07277648|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.23111439|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.55346139|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.42801268|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.48439729|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.24096890|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.95310335|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.23282245|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.35834684|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.25037743|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.48406502|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.99998513|   WEAK   
      rgb_lagged_sum|  26|   1000000|     100|0.87162920|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.92976016|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.33496700|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.59625086|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.20389367|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.22709805|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.01985186|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.00406384|   WEAK   
     dab_bytedistrib|   0|  51200000|       1|0.26150433|  PASSED  
             dab_dct| 256|     50000|       1|0.07830755|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.76741573|  PASSED  
        dab_filltree|  32|  15000000|       1|0.84462078|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.14778120|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.27190913|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.20157542|  PASSED  

real	49m15.217s
user	45m35.688s
sys	3m33.512s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5b666a61
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5b666a61
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5b666a61
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5b666a61
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5b666a61
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5b666a61
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5b666a61
length= 4 gigabytes (2^32 bytes), time= 72.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +7.1  p =  5.8e-4   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5b666a61
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +9.5  p =  5.6e-5   suspicious       
  ...and 159 test result(s) without anomalies


real	1m44.937s
user	1m42.212s
sys	0m2.484s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc86460f2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc86460f2
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc86460f2
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc86460f2
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xc86460f2
length= 1 gigabyte (2^30 bytes), time= 19.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc86460f2
length= 2 gigabytes (2^31 bytes), time= 38.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xc86460f2
length= 4 gigabytes (2^32 bytes), time= 77.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +7.8  p =  2.0e-4   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc86460f2
length= 5.250 gigabytes (2^32.392 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +9.4  p =  2.3e-5   suspicious       
  ...and 159 test result(s) without anomalies


real	1m44.688s
user	1m42.272s
sys	0m2.188s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb8a94139
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb8a94139
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb8a94139
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb8a94139
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb8a94139
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb8a94139
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.5  p =  7.2e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb8a94139
length= 4 gigabytes (2^32 bytes), time= 72.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.0  p =  2.9e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb8a94139
length= 5.500 gigabytes (2^32.459 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m41.136s
user	1m38.472s
sys	0m2.392s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6c651cfd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6c651cfd
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6c651cfd
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6c651cfd
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6c651cfd
length= 1 gigabyte (2^30 bytes), time= 20.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x6c651cfd
length= 2 gigabytes (2^31 bytes), time= 38.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6c651cfd
length= 4 gigabytes (2^32 bytes), time= 73.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x6c651cfd
length= 8 gigabytes (2^33 bytes), time= 146 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +8.3  p =  2.3e-4   mildly suspicious
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6c651cfd
length= 16 gigabytes (2^34 bytes), time= 303 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R= +16.2  p =  2.7e-9    VERY SUSPICIOUS 
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6c651cfd
length= 32 gigabytes (2^35 bytes), time= 611 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-1,T)         R= +18.1  p =  3.2e-9    VERY SUSPICIOUS 
  [Low1/32]DC6-9x1Bytes-1           R= +31.9  p =  1.2e-16    FAIL !         
  ...and 178 test result(s) without anomalies


real	10m11.922s
user	9m58.196s
sys	0m12.376s
*/
