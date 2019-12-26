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
/// @created on 2019-12-18 01:26:49 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 46fbd289-4503-4e5a-b558-1bfc72632058                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib17;
/* TEST00
time ./MRndCPP 
2871199048
2597401541
465743039
1284333374
3834753749
3303864459
4611696633428452409

real	0m7.829s
user	0m7.800s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.05e+07  |2859437736|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.00000000|  FAILED  
      diehard_operm5|   0|   1000000|     100|0.78956191|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.08579733|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.82452914|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.27357254|  PASSED  
        diehard_opso|   0|   2097152|     100|0.42284542|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.73160169|  PASSED  
         diehard_dna|   0|   2097152|     100|0.86064677|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.34253828|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.25388432|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.98719193|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.93515900|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.05696771|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.08783201|  PASSED  
        diehard_sums|   0|       100|     100|0.07047579|  PASSED  
        diehard_runs|   0|    100000|     100|0.32135608|  PASSED  
        diehard_runs|   0|    100000|     100|0.88299706|  PASSED  
       diehard_craps|   0|    200000|     100|0.27930027|  PASSED  
       diehard_craps|   0|    200000|     100|0.66406359|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.53983435|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.38764143|  PASSED  
         sts_monobit|   1|    100000|     100|0.88816026|  PASSED  
            sts_runs|   2|    100000|     100|0.87425475|  PASSED  
          sts_serial|   1|    100000|     100|0.05636918|  PASSED  
          sts_serial|   2|    100000|     100|0.33224763|  PASSED  
          sts_serial|   3|    100000|     100|0.77865229|  PASSED  
          sts_serial|   3|    100000|     100|0.88091599|  PASSED  
          sts_serial|   4|    100000|     100|0.56121261|  PASSED  
          sts_serial|   4|    100000|     100|0.44161338|  PASSED  
          sts_serial|   5|    100000|     100|0.34583461|  PASSED  
          sts_serial|   5|    100000|     100|0.06548074|  PASSED  
          sts_serial|   6|    100000|     100|0.92591930|  PASSED  
          sts_serial|   6|    100000|     100|0.87428566|  PASSED  
          sts_serial|   7|    100000|     100|0.79880765|  PASSED  
          sts_serial|   7|    100000|     100|0.75709118|  PASSED  
          sts_serial|   8|    100000|     100|0.23821899|  PASSED  
          sts_serial|   8|    100000|     100|0.57414018|  PASSED  
          sts_serial|   9|    100000|     100|0.92032605|  PASSED  
          sts_serial|   9|    100000|     100|0.31857908|  PASSED  
          sts_serial|  10|    100000|     100|0.21548818|  PASSED  
          sts_serial|  10|    100000|     100|0.00314180|   WEAK   
          sts_serial|  11|    100000|     100|0.19499047|  PASSED  
          sts_serial|  11|    100000|     100|0.91346911|  PASSED  
          sts_serial|  12|    100000|     100|0.72537554|  PASSED  
          sts_serial|  12|    100000|     100|0.66809226|  PASSED  
          sts_serial|  13|    100000|     100|0.49697179|  PASSED  
          sts_serial|  13|    100000|     100|0.84367472|  PASSED  
          sts_serial|  14|    100000|     100|0.60016331|  PASSED  
          sts_serial|  14|    100000|     100|0.85710795|  PASSED  
          sts_serial|  15|    100000|     100|0.60528711|  PASSED  
          sts_serial|  15|    100000|     100|0.26922018|  PASSED  
          sts_serial|  16|    100000|     100|0.97674894|  PASSED  
          sts_serial|  16|    100000|     100|0.98050514|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.93914357|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.75972044|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.97263566|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.24735059|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.61590380|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.74344229|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.82441151|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.24732943|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.70176126|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.78090063|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.21730867|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.52206909|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.14874576|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.89957457|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.72143455|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.00455648|   WEAK   
    rgb_permutations|   2|    100000|     100|0.96622907|  PASSED  
    rgb_permutations|   3|    100000|     100|0.70079960|  PASSED  
    rgb_permutations|   4|    100000|     100|0.92023492|  PASSED  
    rgb_permutations|   5|    100000|     100|0.71625676|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.10021128|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.80279080|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.85580485|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.97698826|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.75502530|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.82987620|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.93183490|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.98045377|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.68565139|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.60891104|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.72323799|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.36870249|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.96782875|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.58281183|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.86829556|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.36686199|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.04025040|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.90864482|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.39016949|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.86188480|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.14620085|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.68998455|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.11792178|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.72216689|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.83965934|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.37461004|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.54682487|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.95173402|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.98149073|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.27508329|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.58952490|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.66669131|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.56425275|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.76183926|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.97767894|  PASSED  
             dab_dct| 256|     50000|       1|0.76915578|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.24471329|  PASSED  
        dab_filltree|  32|  15000000|       1|0.56976494|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.75141552|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.63926035|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.16260320|  PASSED  

real	55m27.086s
user	51m26.780s
sys	3m44.396s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3e216d96
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3e216d96
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3e216d96
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x3e216d96
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x3e216d96
length= 1 gigabyte (2^30 bytes), time= 20.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.5  p =  4.9e-3   unusual          
  [Low1/32]BCFN(2+0,13-4,T)         R= +19.5  p =  1.8e-8    VERY SUSPICIOUS 
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3e216d96
length= 2 gigabytes (2^31 bytes), time= 38.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +25.9  p =  4.9e-12    FAIL           
  ...and 147 test result(s) without anomalies


real	0m39.568s
user	0m38.372s
sys	0m1.080s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7c219803
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7c219803
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7c219803
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7c219803
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7c219803
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +10.0  p =  2.4e-4   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7c219803
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +23.6  p =  5.9e-11    FAIL           
  ...and 147 test result(s) without anomalies


real	0m38.086s
user	0m37.176s
sys	0m0.828s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7882fc59
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7882fc59
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7882fc59
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7882fc59
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7882fc59
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7882fc59
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +21.2  p =  7.8e-10   VERY SUSPICIOUS 
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7882fc59
length= 4 gigabytes (2^32 bytes), time= 74.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +47.3  p =  3.4e-22    FAIL !!        
  [Low1/32]BCFN(2+6,13-5,T)         R= +11.6  p =  9.7e-5   unusual          
  ...and 154 test result(s) without anomalies


real	1m14.916s
user	1m13.172s
sys	0m1.628s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd844a609
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd844a609
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd844a609
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd844a609
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xd844a609
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xd844a609
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +19.2  p =  7.1e-9    VERY SUSPICIOUS 
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd844a609
length= 4 gigabytes (2^32 bytes), time= 72.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-1,T)         R=  +9.1  p =  2.2e-4   unusual          
  [Low1/32]BCFN(2+0,13-3,T)         R= +44.0  p =  1.3e-20    FAIL !!        
  ...and 154 test result(s) without anomalies


real	1m13.105s
user	1m11.268s
sys	0m1.620s
*/
