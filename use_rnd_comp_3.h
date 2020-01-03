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
/// @created on 2019-12-08 02:56:18 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 0ff3b5f3-789f-404a-9120-d809aa46f6fd                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib0a, RndFib1a, 7 >;
/* TEST00
time ./MRndCPP 
1973536367
3381483824
3556148829
2430275353
1787476771
1747937403
4611553282717041167

real	0m13.359s
user	0m13.336s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.82e+07  |3158674300|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.18049105|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.42933427|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.30451773|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.94193597|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.26306767|  PASSED  
        diehard_opso|   0|   2097152|     100|0.26101604|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.77460650|  PASSED  
         diehard_dna|   0|   2097152|     100|0.49945611|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.37890466|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.97667212|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.25432384|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.18626144|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.87526151|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.44829204|  PASSED  
        diehard_sums|   0|       100|     100|0.04143869|  PASSED  
        diehard_runs|   0|    100000|     100|0.83546813|  PASSED  
        diehard_runs|   0|    100000|     100|0.57114207|  PASSED  
       diehard_craps|   0|    200000|     100|0.21679881|  PASSED  
       diehard_craps|   0|    200000|     100|0.07335712|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.62441605|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.49355797|  PASSED  
         sts_monobit|   1|    100000|     100|0.47315948|  PASSED  
            sts_runs|   2|    100000|     100|0.36427273|  PASSED  
          sts_serial|   1|    100000|     100|0.49898674|  PASSED  
          sts_serial|   2|    100000|     100|0.85043246|  PASSED  
          sts_serial|   3|    100000|     100|0.03768684|  PASSED  
          sts_serial|   3|    100000|     100|0.31560349|  PASSED  
          sts_serial|   4|    100000|     100|0.15789630|  PASSED  
          sts_serial|   4|    100000|     100|0.79897649|  PASSED  
          sts_serial|   5|    100000|     100|0.56578415|  PASSED  
          sts_serial|   5|    100000|     100|0.55395503|  PASSED  
          sts_serial|   6|    100000|     100|0.05558492|  PASSED  
          sts_serial|   6|    100000|     100|0.32375729|  PASSED  
          sts_serial|   7|    100000|     100|0.68326605|  PASSED  
          sts_serial|   7|    100000|     100|0.54608545|  PASSED  
          sts_serial|   8|    100000|     100|0.33041865|  PASSED  
          sts_serial|   8|    100000|     100|0.85528698|  PASSED  
          sts_serial|   9|    100000|     100|0.18787403|  PASSED  
          sts_serial|   9|    100000|     100|0.26523867|  PASSED  
          sts_serial|  10|    100000|     100|0.09721030|  PASSED  
          sts_serial|  10|    100000|     100|0.81161016|  PASSED  
          sts_serial|  11|    100000|     100|0.48084191|  PASSED  
          sts_serial|  11|    100000|     100|0.99115582|  PASSED  
          sts_serial|  12|    100000|     100|0.39245161|  PASSED  
          sts_serial|  12|    100000|     100|0.82864353|  PASSED  
          sts_serial|  13|    100000|     100|0.93623051|  PASSED  
          sts_serial|  13|    100000|     100|0.67451474|  PASSED  
          sts_serial|  14|    100000|     100|0.75229866|  PASSED  
          sts_serial|  14|    100000|     100|0.94393506|  PASSED  
          sts_serial|  15|    100000|     100|0.98619358|  PASSED  
          sts_serial|  15|    100000|     100|0.93019745|  PASSED  
          sts_serial|  16|    100000|     100|0.98346187|  PASSED  
          sts_serial|  16|    100000|     100|0.31462597|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.68448394|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.64866696|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.11169920|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.52604700|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.32111278|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.86494615|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.37801723|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.62538296|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.95823536|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.67923715|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.07899604|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.99791960|   WEAK   
rgb_minimum_distance|   2|     10000|    1000|0.25617299|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.74594987|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.93007440|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.55455766|  PASSED  
    rgb_permutations|   2|    100000|     100|0.97240793|  PASSED  
    rgb_permutations|   3|    100000|     100|0.92741979|  PASSED  
    rgb_permutations|   4|    100000|     100|0.58738136|  PASSED  
    rgb_permutations|   5|    100000|     100|0.92375088|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.59276177|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.87165289|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.50899988|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.68548913|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.00025673|   WEAK   
      rgb_lagged_sum|   5|   1000000|     100|0.57791360|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.87227775|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.70312114|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.15744237|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.83968944|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.62256420|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.91103856|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.54117407|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.07262211|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.78095969|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.92087315|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.50954316|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.72196462|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.97940334|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.66936331|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.98123893|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.74816080|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.44850085|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.35890692|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.49892474|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.53862230|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.99908402|   WEAK   
      rgb_lagged_sum|  27|   1000000|     100|0.95496753|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.25789141|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.73537001|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.93923797|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.72637335|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.88425615|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.79345703|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.79486566|  PASSED  
             dab_dct| 256|     50000|       1|0.34229848|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.88504366|  PASSED  
        dab_filltree|  32|  15000000|       1|0.17791786|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.94635701|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.21462843|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.12134657|  PASSED  

real	52m24.457s
user	48m57.276s
sys	3m20.024s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8261a119
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8261a119
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.6  p =1-9.9e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8261a119
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8261a119
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8261a119
length= 1 gigabyte (2^30 bytes), time= 20.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x8261a119
length= 2 gigabytes (2^31 bytes), time= 39.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8261a119
length= 4 gigabytes (2^32 bytes), time= 77.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x8261a119
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.814s
user	1m40.292s
sys	0m3.184s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xce3d8a8c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xce3d8a8c
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xce3d8a8c
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xce3d8a8c
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.0  p =  3.6e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xce3d8a8c
length= 1 gigabyte (2^30 bytes), time= 20.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xce3d8a8c
length= 2 gigabytes (2^31 bytes), time= 39.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xce3d8a8c
length= 4 gigabytes (2^32 bytes), time= 77.3 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -3.9  p =1-2.6e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xce3d8a8c
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -3.9  p =1-2.9e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m42.929s
user	1m39.548s
sys	0m3.200s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa5f6eabe
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa5f6eabe
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xa5f6eabe
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa5f6eabe
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xa5f6eabe
length= 1 gigabyte (2^30 bytes), time= 21.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xa5f6eabe
length= 2 gigabytes (2^31 bytes), time= 41.0 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -5.6  p =1-9.4e-4   mildly suspicious
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa5f6eabe
length= 4 gigabytes (2^32 bytes), time= 82.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xa5f6eabe
length= 5.000 gigabytes (2^32.322 bytes), time= 104 seconds
  no anomalies in 159 test result(s)


real	1m44.331s
user	1m41.208s
sys	0m2.904s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x44e04056
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x44e04056
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x44e04056
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  -5.9  p =1-1.7e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x44e04056
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-5,T)         R=  +8.5  p =  1.7e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x44e04056
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x44e04056
length= 2 gigabytes (2^31 bytes), time= 39.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x44e04056
length= 4 gigabytes (2^32 bytes), time= 76.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x44e04056
length= 8 gigabytes (2^33 bytes), time= 158 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x44e04056
length= 16 gigabytes (2^34 bytes), time= 323 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x44e04056
length= 32 gigabytes (2^35 bytes), time= 648 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x44e04056
length= 64 gigabytes (2^36 bytes), time= 1308 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x44e04056
length= 128 gigabytes (2^37 bytes), time= 2616 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x44e04056
length= 176.500 gigabytes (2^37.464 bytes), time= 3602 seconds
  no anomalies in 201 test result(s)


real	60m2.756s
user	58m13.004s
sys	1m41.452s
*/
/* TEST00
time ./MRndCPP 
1694654968
1726884280
2249819224
519540344
3391913720
3100542552
7153116066712265824

real	1m30.095s
user	1m29.860s
sys	0m0.048s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.95e+07  | 950814860|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.00000000|  FAILED  
      diehard_operm5|   0|   1000000|     100|0.00000000|  FAILED  
  diehard_rank_32x32|   0|     40000|     100|0.00000000|  FAILED  
    diehard_rank_6x8|   0|    100000|     100|0.00000000|  FAILED  
   diehard_bitstream|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_opso|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_oqso|   0|   2097152|     100|0.00000000|  FAILED  
         diehard_dna|   0|   2097152|     100|0.00000000|  FAILED  
diehard_count_1s_str|   0|    256000|     100|0.00000000|  FAILED  
diehard_count_1s_byt|   0|    256000|     100|0.00000000|  FAILED  
 diehard_parking_lot|   0|     12000|     100|0.00000000|  FAILED  
    diehard_2dsphere|   2|      8000|     100|0.00000000|  FAILED  
    diehard_3dsphere|   3|      4000|     100|0.00000000|  FAILED  
     diehard_squeeze|   0|    100000|     100|0.00000000|  FAILED  
        diehard_sums|   0|       100|     100|0.00000000|  FAILED  
        diehard_runs|   0|    100000|     100|0.00000000|  FAILED  
        diehard_runs|   0|    100000|     100|0.00000000|  FAILED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.00000000|  FAILED  
            sts_runs|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   1|    100000|     100|0.00000000|  FAILED  
          sts_serial|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
          sts_serial|   5|    100000|     100|0.00000000|  FAILED  
          sts_serial|   5|    100000|     100|0.00000000|  FAILED  
          sts_serial|   6|    100000|     100|0.00000000|  FAILED  
          sts_serial|   6|    100000|     100|0.00000000|  FAILED  
          sts_serial|   7|    100000|     100|0.00000000|  FAILED  
          sts_serial|   7|    100000|     100|0.00000000|  FAILED  
          sts_serial|   8|    100000|     100|0.00000000|  FAILED  
          sts_serial|   8|    100000|     100|0.00000000|  FAILED  
          sts_serial|   9|    100000|     100|0.00000000|  FAILED  
          sts_serial|   9|    100000|     100|0.00000000|  FAILED  
          sts_serial|  10|    100000|     100|0.00000000|  FAILED  
          sts_serial|  10|    100000|     100|0.00000000|  FAILED  
          sts_serial|  11|    100000|     100|0.00000000|  FAILED  
          sts_serial|  11|    100000|     100|0.00000000|  FAILED  
          sts_serial|  12|    100000|     100|0.00000000|  FAILED  
          sts_serial|  12|    100000|     100|0.00000000|  FAILED  
          sts_serial|  13|    100000|     100|0.00000000|  FAILED  
          sts_serial|  13|    100000|     100|0.00000000|  FAILED  
          sts_serial|  14|    100000|     100|0.00000000|  FAILED  
          sts_serial|  14|    100000|     100|0.00000000|  FAILED  
          sts_serial|  15|    100000|     100|0.00000000|  FAILED  
          sts_serial|  15|    100000|     100|0.00000000|  FAILED  
          sts_serial|  16|    100000|     100|0.00000000|  FAILED  
          sts_serial|  16|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   1|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   2|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   3|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   4|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   5|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   6|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   7|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   8|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   9|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|  10|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|  11|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|  12|    100000|     100|0.00000000|  FAILED  
rgb_minimum_distance|   2|     10000|    1000|0.00000000|  FAILED  
rgb_minimum_distance|   3|     10000|    1000|0.00000000|  FAILED  
rgb_minimum_distance|   4|     10000|    1000|0.00000000|  FAILED  
rgb_minimum_distance|   5|     10000|    1000|0.00000000|  FAILED  
    rgb_permutations|   2|    100000|     100|0.00000000|  FAILED  
    rgb_permutations|   3|    100000|     100|0.00000000|  FAILED  
    rgb_permutations|   4|    100000|     100|0.00000000|  FAILED  
    rgb_permutations|   5|    100000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   0|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   1|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   2|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   3|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   4|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   5|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   6|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   7|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   8|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   9|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  10|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  11|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  12|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  13|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  14|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  15|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  16|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  17|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  18|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  19|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  20|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  21|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  22|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  23|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  24|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  25|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  26|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  27|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  28|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  29|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  30|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  31|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  32|   1000000|     100|0.00000000|  FAILED  
./test.sh: line 7:  6980 Broken pipe             ./MRndCPP
      6981 Segmentation fault      (core dumped) | dieharder -g200 -a -k2 > test.txt

real	191m6.342s
user	187m32.168s
sys	3m22.048s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5fb27657
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5fb27657
length= 128 megabytes (2^27 bytes), time= 2.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+11775712 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+6268437 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+3274441 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+1688249 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+1098345 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+701554 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+354535 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+221411 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+111278 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+67943  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+40456  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20270  p =  4e-5145    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11671  p =  1e-2623    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5830  p =  3e-1311    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+4286840 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+3581764 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+16039621 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+5082920 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -49.5  p =1-3.3e-45    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R= -74.5  p =1-3.5e-68    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R=+6678310 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R= -38.3  p =1-1.5e-37    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -46.9  p =1-5.2e-46    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -32.7  p =1-8.4e-30    FAIL !!!       
  FPF-14+6/16:(7,14-4)              R= -24.5  p =1-1.9e-25    FAIL !!        
  FPF-14+6/16:(8,14-5)              R= -16.4  p =1-6.2e-17    FAIL !         
  FPF-14+6/16:(9,14-5)              R= -20.6  p =1-2.3e-21    FAIL !!        
  FPF-14+6/16:(10,14-6)             R= -13.0  p =1-4.2e-14    FAIL           
  FPF-14+6/16:(11,14-7)             R=  -9.3  p =1-3.9e-10  very suspicious  
  FPF-14+6/16:all                   R=+5269953 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+19562212584242 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+22051186 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4686  p~=  3e-2493    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+3754446 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1998380 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+1313371 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+677064 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+345866 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+217680 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+109999 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+67430  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+40257  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+20194  p =  7e-5126    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R=+11634  p =  3e-2615    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +5817  p =  3e-1308    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+1402639 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1070922 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+5233554 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+4360882 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+5814694 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+15505433 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+1099294 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+519590 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+249477 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+121164 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+72212  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+42258  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+20899  p =  5e-5305    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11920  p =  1e-2679    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+483643 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223041 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888483 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+7961869 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m2.643s
user	0m2.456s
sys	0m0.184s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x42f399b6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x42f399b6
length= 256 megabytes (2^28 bytes), time= 3.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18329452 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9756592 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6553374 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3378675 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726086 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115741 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709480 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357400 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222721 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111758 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68176  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40574  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+7872924 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6682012 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26201106 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+10170619 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -49.9  p =1-1.5e-45    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R= -75.1  p =1-9.7e-69    FAIL !!!!      
  FPF-14+6/16:(3,14-0)              R=+10173006 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-1)              R= -65.9  p =1-3.8e-67    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -46.8  p =1-5.6e-46    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -52.1  p =1-3.5e-51    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -40.1  p =1-1.3e-36    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -27.6  p =1-9.3e-29    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -18.9  p =1-1.4e-19    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -21.6  p =1-1.6e-22    FAIL !!        
  FPF-14+6/16:(11,14-6)             R= -15.3  p =1-9.3e-17    FAIL !         
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+9811445 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+58273336224261 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+43051670 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4676  p~=  1e-2487    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897137 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138822 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087667 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076218 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691792 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351150 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2503129 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943570 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8553120 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+8722287 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+11629911 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+30183767 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1773252 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+838148 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498977 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242351 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118686 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71158  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868131 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354161 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690856 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+16445984 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m4.519s
user	0m4.332s
sys	0m0.180s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8d16242c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8d16242c
length= 256 megabytes (2^28 bytes), time= 3.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18329414 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9756531 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6553352 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3378669 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726097 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115773 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709496 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357410 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222721 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111771 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68176  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40574  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+7872910 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6682014 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26201103 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+10170601 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -50.3  p =1-5.8e-46    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R= -76.5  p =1-5.0e-70    FAIL !!!!      
  FPF-14+6/16:(3,14-0)              R=+10173005 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-1)              R= -65.5  p =1-1.1e-66    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -45.8  p =1-6.3e-45    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -55.4  p =1-2.0e-54    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -38.0  p =1-1.1e-34    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -28.2  p =1-2.1e-29    FAIL !!!       
  FPF-14+6/16:(9,14-5)              R= -18.0  p =1-1.2e-18    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -19.1  p =1-7.6e-20    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -14.8  p =1-3.7e-16    FAIL           
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+9811439 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+58273225979467 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+43051824 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4686  p~=  3e-2493    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897143 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138806 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087670 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076220 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691794 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351150 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2503122 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943569 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8553116 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+8722288 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+11629913 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+30183767 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1773252 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+838148 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498977 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242351 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118686 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71158  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868131 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354161 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690856 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+16445984 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m4.519s
user	0m4.320s
sys	0m0.192s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x158d094b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x158d094b
length= 128 megabytes (2^27 bytes), time= 2.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+11775748 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+6268444 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+3274469 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+1688313 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+1098333 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+701571 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+354554 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+221424 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+111300 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+67965  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+40459  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20270  p =  4e-5145    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11671  p =  1e-2623    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5830  p =  3e-1311    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+4286808 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+3581765 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+16039650 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+5082904 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -48.9  p =1-1.1e-44    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R= -76.9  p =1-2.2e-70    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R=+6678299 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R= -36.3  p =1-1.5e-35    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -48.3  p =1-1.8e-47    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -34.0  p =1-4.9e-31    FAIL !!!       
  FPF-14+6/16:(7,14-4)              R= -23.8  p =1-1.2e-24    FAIL !!        
  FPF-14+6/16:(8,14-5)              R= -17.6  p =1-3.6e-18    FAIL !         
  FPF-14+6/16:(9,14-5)              R= -19.4  p =1-4.1e-20    FAIL !         
  FPF-14+6/16:(10,14-6)             R= -13.9  p =1-3.7e-15    FAIL           
  FPF-14+6/16:(11,14-7)             R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(12,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+5267536 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+18794680925594 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+22051321 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4686  p~=  3e-2493    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+3754469 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1998377 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+1313375 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+677063 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+345868 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+217680 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+109999 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+67430  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+40257  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+20194  p =  7e-5126    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R=+11634  p =  3e-2615    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +5817  p =  3e-1308    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+1402639 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1070923 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+5233566 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+4360869 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+5814681 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+15505433 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+1099294 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+519590 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+249477 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+121164 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+72212  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+42258  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+20899  p =  5e-5305    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11920  p =  1e-2679    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+483643 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223041 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888483 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+7961869 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m2.616s
user	0m2.504s
sys	0m0.108s
*/
