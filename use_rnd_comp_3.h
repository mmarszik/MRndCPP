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
