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
/// @created on 2019-12-08 02:58:30 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8158fed7-fa4c-4402-8961-e570927f3bc8                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib2a;
/* TEST00
time ./MRndCPP 
3655671857
3112833665
594534808
1954924846
3080878651
1703364130
4611650874895833246

real	0m7.876s
user	0m7.832s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.18e+07  |1071253702|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.97894938|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.01065619|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.45639127|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.70287648|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.61678131|  PASSED  
        diehard_opso|   0|   2097152|     100|0.59844519|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.38127473|  PASSED  
         diehard_dna|   0|   2097152|     100|0.65207939|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.25052691|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.53084195|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.75190252|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.79502978|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.79986406|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.57322040|  PASSED  
        diehard_sums|   0|       100|     100|0.18942313|  PASSED  
        diehard_runs|   0|    100000|     100|0.87757055|  PASSED  
        diehard_runs|   0|    100000|     100|0.31824036|  PASSED  
       diehard_craps|   0|    200000|     100|0.20323639|  PASSED  
       diehard_craps|   0|    200000|     100|0.14886493|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.93165059|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.78693659|  PASSED  
         sts_monobit|   1|    100000|     100|0.09505522|  PASSED  
            sts_runs|   2|    100000|     100|0.91151723|  PASSED  
          sts_serial|   1|    100000|     100|0.97310123|  PASSED  
          sts_serial|   2|    100000|     100|0.85624383|  PASSED  
          sts_serial|   3|    100000|     100|0.63828562|  PASSED  
          sts_serial|   3|    100000|     100|0.03984871|  PASSED  
          sts_serial|   4|    100000|     100|0.98138142|  PASSED  
          sts_serial|   4|    100000|     100|0.05764324|  PASSED  
          sts_serial|   5|    100000|     100|0.89224953|  PASSED  
          sts_serial|   5|    100000|     100|0.53438238|  PASSED  
          sts_serial|   6|    100000|     100|0.45318095|  PASSED  
          sts_serial|   6|    100000|     100|0.86263074|  PASSED  
          sts_serial|   7|    100000|     100|0.70048571|  PASSED  
          sts_serial|   7|    100000|     100|0.41181927|  PASSED  
          sts_serial|   8|    100000|     100|0.79686393|  PASSED  
          sts_serial|   8|    100000|     100|0.69191195|  PASSED  
          sts_serial|   9|    100000|     100|0.24985881|  PASSED  
          sts_serial|   9|    100000|     100|0.34048611|  PASSED  
          sts_serial|  10|    100000|     100|0.62723292|  PASSED  
          sts_serial|  10|    100000|     100|0.86643882|  PASSED  
          sts_serial|  11|    100000|     100|0.32902736|  PASSED  
          sts_serial|  11|    100000|     100|0.81063138|  PASSED  
          sts_serial|  12|    100000|     100|0.65053326|  PASSED  
          sts_serial|  12|    100000|     100|0.22740454|  PASSED  
          sts_serial|  13|    100000|     100|0.41114587|  PASSED  
          sts_serial|  13|    100000|     100|0.20480554|  PASSED  
          sts_serial|  14|    100000|     100|0.05299892|  PASSED  
          sts_serial|  14|    100000|     100|0.37884692|  PASSED  
          sts_serial|  15|    100000|     100|0.76809676|  PASSED  
          sts_serial|  15|    100000|     100|0.53477322|  PASSED  
          sts_serial|  16|    100000|     100|0.09170247|  PASSED  
          sts_serial|  16|    100000|     100|0.26904356|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.34943345|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.20478060|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.95170179|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.12737844|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.98663869|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.65154776|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.85357824|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.76263297|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.08253728|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.96826261|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.12551136|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.76191322|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.22247212|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.62482749|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.64353384|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.67831894|  PASSED  
    rgb_permutations|   2|    100000|     100|0.41003816|  PASSED  
    rgb_permutations|   3|    100000|     100|0.37670275|  PASSED  
    rgb_permutations|   4|    100000|     100|0.36377638|  PASSED  
    rgb_permutations|   5|    100000|     100|0.07615734|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.86581284|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.94206392|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.67031536|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.30380675|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.80411722|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.90852884|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.38833314|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.95196221|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.23346823|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.41483849|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.99328308|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.98763779|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.20946468|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.67470573|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.84093564|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.79365998|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.21762976|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.85066172|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.31178032|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.28651720|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.96942732|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.82566230|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.80237752|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.90457948|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.69089911|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.49256122|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.78066963|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.65713193|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.06001621|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.44598974|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.96134596|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.11986737|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.96673668|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.21980367|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.84805156|  PASSED  
             dab_dct| 256|     50000|       1|0.42773799|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.29137575|  PASSED  
        dab_filltree|  32|  15000000|       1|0.87687351|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.23954126|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.91978624|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.85230448|  PASSED  

real	47m51.800s
user	44m16.800s
sys	3m29.472s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9b063b34
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9b063b34
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-6,T)         R=  -6.6  p =1-1.0e-4   mildly suspicious
  [Low1/32]BCFN(2+2,13-6,T)         R= +15.3  p =  1.1e-5   suspicious       
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9b063b34
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.7  p =  5.2e-3   unusual          
  [Low8/32]BCFN(2+5,13-5,T)         R=  -7.5  p =1-6.0e-5   unusual          
  [Low1/32]BCFN(2+2,13-6,T)         R= +28.1  p =  4.7e-10   VERY SUSPICIOUS 
  ...and 121 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9b063b34
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-5,T)         R= +45.8  p =  4.0e-18    FAIL !         
  ...and 131 test result(s) without anomalies


real	0m11.044s
user	0m10.672s
sys	0m0.352s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc0830f2f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc0830f2f
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R= +23.2  p =  2.2e-8    VERY SUSPICIOUS 
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc0830f2f
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R= +31.0  p =  4.6e-11    FAIL           
  ...and 123 test result(s) without anomalies


real	0m6.148s
user	0m6.000s
sys	0m0.140s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x13a4f3d5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x13a4f3d5
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R= +13.3  p =  5.4e-5   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x13a4f3d5
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.3  p =1-4.5e-3   unusual          
  [Low1/32]BCFN(2+2,13-6,T)         R= +23.2  p =  2.2e-8    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+3,13-6,T)         R= +12.0  p =  1.4e-4   unusual          
  ...and 121 test result(s) without anomalies

rng=RNG_stdin32, seed=0x13a4f3d5
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-5,T)         R= +39.8  p =  9.1e-16    FAIL !         
  [Low1/32]BCFN(2+3,13-5,T)         R= +12.9  p =  3.1e-5   mildly suspicious
  ...and 130 test result(s) without anomalies


real	0m10.966s
user	0m10.672s
sys	0m0.244s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x15f57b6e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x15f57b6e
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R=  +9.0  p =  1.7e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x15f57b6e
length= 256 megabytes (2^28 bytes), time= 6.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R=  +9.1  p =  4.1e-4   unusual          
  [Low1/32]BCFN(2+2,13-6,T)         R= +21.0  p =  1.2e-7   very suspicious  
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x15f57b6e
length= 512 megabytes (2^29 bytes), time= 12.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +9.4  p =  7.2e-4   unusual          
  [Low1/32]BCFN(2+2,13-5,T)         R= +41.9  p =  1.3e-16    FAIL !         
  ...and 130 test result(s) without anomalies


real	0m12.682s
user	0m12.408s
sys	0m0.224s
*/
