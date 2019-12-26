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
/// @created on 2019-12-08 02:59:53 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 7d31d573-c8f4-4651-ab8e-a8f0b614d221                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2a;
/* TEST00
time ./MRndCPP 
3526497076
1652012899
857344370
3687836006
3554605929
3543896927
4611659810381354553

real	0m27.290s
user	0m27.220s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.44e+07  |2711758513|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.58517289|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.17660455|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.20424982|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.96826474|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.65018364|  PASSED  
        diehard_opso|   0|   2097152|     100|0.93084780|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.70470504|  PASSED  
         diehard_dna|   0|   2097152|     100|0.13828732|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.83492621|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.53081160|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.95668914|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.86028611|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.25630980|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.42157819|  PASSED  
        diehard_sums|   0|       100|     100|0.81494831|  PASSED  
        diehard_runs|   0|    100000|     100|0.99063015|  PASSED  
        diehard_runs|   0|    100000|     100|0.60427568|  PASSED  
       diehard_craps|   0|    200000|     100|0.80518769|  PASSED  
       diehard_craps|   0|    200000|     100|0.94133812|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.04442000|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.17636717|  PASSED  
         sts_monobit|   1|    100000|     100|0.08008959|  PASSED  
            sts_runs|   2|    100000|     100|0.76492217|  PASSED  
          sts_serial|   1|    100000|     100|0.80060233|  PASSED  
          sts_serial|   2|    100000|     100|0.15571519|  PASSED  
          sts_serial|   3|    100000|     100|0.86561434|  PASSED  
          sts_serial|   3|    100000|     100|0.08005680|  PASSED  
          sts_serial|   4|    100000|     100|0.99349877|  PASSED  
          sts_serial|   4|    100000|     100|0.99695259|   WEAK   
          sts_serial|   5|    100000|     100|0.71782738|  PASSED  
          sts_serial|   5|    100000|     100|0.53761638|  PASSED  
          sts_serial|   6|    100000|     100|0.02632976|  PASSED  
          sts_serial|   6|    100000|     100|0.10679469|  PASSED  
          sts_serial|   7|    100000|     100|0.77128643|  PASSED  
          sts_serial|   7|    100000|     100|0.52078889|  PASSED  
          sts_serial|   8|    100000|     100|0.39172810|  PASSED  
          sts_serial|   8|    100000|     100|0.21652108|  PASSED  
          sts_serial|   9|    100000|     100|0.83637204|  PASSED  
          sts_serial|   9|    100000|     100|0.09882221|  PASSED  
          sts_serial|  10|    100000|     100|0.81915386|  PASSED  
          sts_serial|  10|    100000|     100|0.60794653|  PASSED  
          sts_serial|  11|    100000|     100|0.89579845|  PASSED  
          sts_serial|  11|    100000|     100|0.67988453|  PASSED  
          sts_serial|  12|    100000|     100|0.04199451|  PASSED  
          sts_serial|  12|    100000|     100|0.02764731|  PASSED  
          sts_serial|  13|    100000|     100|0.47638210|  PASSED  
          sts_serial|  13|    100000|     100|0.86159478|  PASSED  
          sts_serial|  14|    100000|     100|0.13338236|  PASSED  
          sts_serial|  14|    100000|     100|0.06941973|  PASSED  
          sts_serial|  15|    100000|     100|0.56905845|  PASSED  
          sts_serial|  15|    100000|     100|0.99187073|  PASSED  
          sts_serial|  16|    100000|     100|0.77481723|  PASSED  
          sts_serial|  16|    100000|     100|0.70220141|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.28669311|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.46779271|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.70977438|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.24552959|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.33715707|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.99313214|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.38584782|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.05975782|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.29272951|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.27507602|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.90172024|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.85868104|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.79001579|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.78863563|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.30168926|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.07504589|  PASSED  
    rgb_permutations|   2|    100000|     100|0.52083033|  PASSED  
    rgb_permutations|   3|    100000|     100|0.16536421|  PASSED  
    rgb_permutations|   4|    100000|     100|0.33432041|  PASSED  
    rgb_permutations|   5|    100000|     100|0.46845073|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.47185263|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.30902463|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.64150927|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.21489735|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.41486941|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.78867382|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.82313685|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.55789532|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.22436168|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.38391615|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.37905535|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.85522394|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.55943270|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.15626546|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.87198240|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.65051986|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.90576111|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.85889784|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.53384336|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.45501832|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.43201238|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.15291554|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.97404624|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.81099522|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.46669318|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.51865647|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.98474623|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.97705894|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.86282217|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.79330758|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.96319550|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.85986983|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.35280274|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.19558367|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.07500977|  PASSED  
             dab_dct| 256|     50000|       1|0.45276868|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.27221071|  PASSED  
        dab_filltree|  32|  15000000|       1|0.66708269|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.58715170|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.19427421|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.99649938|   WEAK   

real	64m1.891s
user	60m6.316s
sys	3m34.060s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6be89b80
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6be89b80
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6be89b80
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6be89b80
length= 512 megabytes (2^29 bytes), time= 11.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6be89b80
length= 1 gigabyte (2^30 bytes), time= 22.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.8  p =1-8.9e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6be89b80
length= 2 gigabytes (2^31 bytes), time= 43.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6be89b80
length= 4 gigabytes (2^32 bytes), time= 84.6 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.5  p =1-1.1e-3   unusual          
  Gap-16:B                          R=  -7.1  p =1-5.4e-6   suspicious       
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6be89b80
length= 4.750 gigabytes (2^32.248 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.1  p =1-1.8e-3   unusual          
  Gap-16:B                          R=  -7.0  p =1-6.7e-6   suspicious       
  ...and 157 test result(s) without anomalies


real	1m40.951s
user	1m37.108s
sys	0m3.272s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2dfe2bc7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2dfe2bc7
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2dfe2bc7
length= 256 megabytes (2^28 bytes), time= 6.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2dfe2bc7
length= 512 megabytes (2^29 bytes), time= 12.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2dfe2bc7
length= 1 gigabyte (2^30 bytes), time= 24.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2dfe2bc7
length= 2 gigabytes (2^31 bytes), time= 47.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2dfe2bc7
length= 4 gigabytes (2^32 bytes), time= 97.2 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -5.7  p =1-9.5e-5   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2dfe2bc7
length= 4.250 gigabytes (2^32.087 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -6.0  p =1-5.0e-5   mildly suspicious
  ...and 155 test result(s) without anomalies


real	1m44.859s
user	1m41.668s
sys	0m2.900s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7d5e938c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7d5e938c
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +5.1  p =  9.4e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7d5e938c
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7d5e938c
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7d5e938c
length= 1 gigabyte (2^30 bytes), time= 22.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +7.5  p =  3.0e-4   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7d5e938c
length= 2 gigabytes (2^31 bytes), time= 42.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x7d5e938c
length= 4 gigabytes (2^32 bytes), time= 83.1 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -6.2  p =1-3.2e-5   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7d5e938c
length= 5.000 gigabytes (2^32.322 bytes), time= 105 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -7.1  p =1-5.8e-6   suspicious       
  ...and 158 test result(s) without anomalies


real	1m46.130s
user	1m42.668s
sys	0m3.200s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3730e810
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3730e810
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3730e810
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +7.3  p =  7.4e-4   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3730e810
length= 512 megabytes (2^29 bytes), time= 11.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x3730e810
length= 1 gigabyte (2^30 bytes), time= 22.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x3730e810
length= 2 gigabytes (2^31 bytes), time= 44.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x3730e810
length= 4 gigabytes (2^32 bytes), time= 85.6 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -5.4  p =1-2.7e-4   mildly suspicious
  Gap-16:B                          R=  -6.0  p =1-4.9e-5   mildly suspicious
  [Low1/32]FPF-14+6/16:cross        R=  -2.4  p =1-4.4e-4   unusual          
  ...and 153 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3730e810
length= 8 gigabytes (2^33 bytes), time= 174 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x3730e810
length= 16 gigabytes (2^34 bytes), time= 353 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.0  p =  2.3e-3   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3730e810
length= 32 gigabytes (2^35 bytes), time= 705 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +7.5  p =  3.0e-5   mildly suspicious
  Gap-16:B                          R= +11.6  p =  7.9e-10   VERY SUSPICIOUS 
  ...and 178 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3730e810
length= 64 gigabytes (2^36 bytes), time= 1421 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R= +16.3  p =  4.8e-11    FAIL           
  Gap-16:B                          R= +29.1  p =  8.3e-25    FAIL !!        
  ...and 187 test result(s) without anomalies


real	23m41.357s
user	22m58.948s
sys	0m38.264s
*/
