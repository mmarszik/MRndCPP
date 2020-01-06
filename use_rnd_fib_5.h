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
/// @created on 2019-12-18 01:27:46 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token a2dd08a7-9dc2-4201-9715-62da74a61002                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib5;
/* TEST00
time ./MRndCPP 10 
1351727642
2871725058
1378769685
540271206
1044876935
933927816
3532849240
2515431399
2492945960
2077743540
9787216154887690234

real	0m2.326s
user	0m2.323s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.07e+07  | 702788210|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.97752643|  PASSED  

real	0m22.106s
user	0m22.519s
sys	0m0.593s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x79024106
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x79024106
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x79024106
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x79024106
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x79024106
length= 1 gigabyte (2^30 bytes), time= 22.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x79024106
length= 1.500 gigabytes (2^30.585 bytes), time= 32.5 seconds
  no anomalies in 187 test result(s)


real	0m33.368s
user	0m33.000s
sys	0m1.181s
*/
/* TEST00
time ./MRndCPP 10 
1351727642
2871725058
1378769685
540271206
1044876935
933927816
3532849240
2515431399
2492945960
2077743540
9787216154887690234

real	0m2.317s
user	0m2.316s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.99e+07  | 146443646|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.78595915|  PASSED  

real	0m21.944s
user	0m22.376s
sys	0m0.643s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x3d610997
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x3d610997
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x3d610997
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +7.4  p =  8.3e-4   mildly suspicious
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x3d610997
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.3  p =  2.3e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x3d610997
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x3d610997
length= 2 gigabytes (2^31 bytes), time= 42.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x3d610997
length= 4 gigabytes (2^32 bytes), time= 82.0 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x3d610997
length= 8 gigabytes (2^33 bytes), time= 162 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.2  p =1-1.1e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x3d610997
length= 15.000 gigabytes (2^33.907 bytes), time= 301 seconds
  no anomalies in 226 test result(s)


real	5m2.181s
user	5m0.055s
sys	0m10.228s
*/
/* TEST00
time ./MRndCPP 12 
1351727642
2871725058
1378769685
540271206
1044876935
933927816
3532849240
2515431399
2492945960
2077743540
4915794722019973752

real	0m9.130s
user	0m9.126s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.38e+07  |1065894275|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.58540233|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.88409999|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.81474923|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.31707024|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.85237056|  PASSED  
        diehard_opso|   0|   2097152|     100|0.36831139|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.60644954|  PASSED  
         diehard_dna|   0|   2097152|     100|0.57235411|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.72749370|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.34575768|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.97689496|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.37126069|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.15920756|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.44697857|  PASSED  
        diehard_sums|   0|       100|     100|0.52121467|  PASSED  
        diehard_runs|   0|    100000|     100|0.21181261|  PASSED  
        diehard_runs|   0|    100000|     100|0.49621395|  PASSED  
       diehard_craps|   0|    200000|     100|0.82796911|  PASSED  
       diehard_craps|   0|    200000|     100|0.99640838|   WEAK   
 marsaglia_tsang_gcd|   0|  10000000|     100|0.41307363|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.49748173|  PASSED  
         sts_monobit|   1|    100000|     100|0.48207765|  PASSED  
            sts_runs|   2|    100000|     100|0.15560634|  PASSED  
          sts_serial|   1|    100000|     100|0.68557848|  PASSED  
          sts_serial|   2|    100000|     100|0.99496268|  PASSED  
          sts_serial|   3|    100000|     100|0.94188567|  PASSED  
          sts_serial|   3|    100000|     100|0.85860774|  PASSED  
          sts_serial|   4|    100000|     100|0.82944494|  PASSED  
          sts_serial|   4|    100000|     100|0.29065553|  PASSED  
          sts_serial|   5|    100000|     100|0.97891765|  PASSED  
          sts_serial|   5|    100000|     100|0.89604188|  PASSED  
          sts_serial|   6|    100000|     100|0.46178449|  PASSED  
          sts_serial|   6|    100000|     100|0.36674850|  PASSED  
          sts_serial|   7|    100000|     100|0.06641741|  PASSED  
          sts_serial|   7|    100000|     100|0.09219129|  PASSED  
          sts_serial|   8|    100000|     100|0.11004701|  PASSED  
          sts_serial|   8|    100000|     100|0.69246043|  PASSED  
          sts_serial|   9|    100000|     100|0.33410884|  PASSED  
          sts_serial|   9|    100000|     100|0.53873691|  PASSED  
          sts_serial|  10|    100000|     100|0.98690940|  PASSED  
          sts_serial|  10|    100000|     100|0.28215693|  PASSED  
          sts_serial|  11|    100000|     100|0.60304143|  PASSED  
          sts_serial|  11|    100000|     100|0.48483697|  PASSED  
          sts_serial|  12|    100000|     100|0.79150356|  PASSED  
          sts_serial|  12|    100000|     100|0.96909704|  PASSED  
          sts_serial|  13|    100000|     100|0.52267272|  PASSED  
          sts_serial|  13|    100000|     100|0.60184182|  PASSED  
          sts_serial|  14|    100000|     100|0.06217223|  PASSED  
          sts_serial|  14|    100000|     100|0.07341192|  PASSED  
          sts_serial|  15|    100000|     100|0.04681908|  PASSED  
          sts_serial|  15|    100000|     100|0.07746040|  PASSED  
          sts_serial|  16|    100000|     100|0.04890356|  PASSED  
          sts_serial|  16|    100000|     100|0.45170775|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.72747407|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.78565021|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.39580211|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.87375326|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.61009735|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.78359171|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.58111092|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.50817359|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.64458475|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.98885974|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.60347619|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.04755822|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.99150148|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.98986922|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.54123018|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.83638112|  PASSED  
    rgb_permutations|   2|    100000|     100|0.95929867|  PASSED  
    rgb_permutations|   3|    100000|     100|0.89254086|  PASSED  
    rgb_permutations|   4|    100000|     100|0.30456240|  PASSED  
    rgb_permutations|   5|    100000|     100|0.15447346|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.77949672|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.40795202|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.05541274|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.96818456|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.89037587|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.81013681|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.63468648|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.49667066|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.68527470|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.98826067|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.75036265|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.73124869|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.61855789|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.19625871|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.11442400|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.18016313|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.99199764|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.37865541|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.75829885|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.17684720|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.54291511|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.93945910|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.65326530|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.66829798|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.32311074|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.20991905|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.78398421|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.37727147|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.30314721|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.50632765|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.00050875|   WEAK   
      rgb_lagged_sum|  31|   1000000|     100|0.50495265|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.65301033|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.28998388|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.35241493|  PASSED  
             dab_dct| 256|     50000|       1|0.55055909|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.45258758|  PASSED  
        dab_filltree|  32|  15000000|       1|0.92249328|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.72594982|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.38469732|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.68530198|  PASSED  

real	36m51.971s
user	39m7.056s
sys	4m0.006s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd2f99493
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd2f99493
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd2f99493
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +5.7  p =  5.0e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -5.8  p =1-5.2e-4   mildly suspicious
  ...and 160 test result(s) without anomalies

rng=RNG_stdin, seed=0xd2f99493
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -7.6  p =1-3.6e-5   suspicious       
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xd2f99493
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xd2f99493
length= 2 gigabytes (2^31 bytes), time= 42.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd2f99493
length= 4 gigabytes (2^32 bytes), time= 81.3 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xd2f99493
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 207 test result(s)


real	1m42.071s
user	1m41.240s
sys	0m3.521s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xba53e91a
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xba53e91a
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xba53e91a
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xba53e91a
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xba53e91a
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xba53e91a
length= 2 gigabytes (2^31 bytes), time= 42.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xba53e91a
length= 4 gigabytes (2^32 bytes), time= 81.7 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xba53e91a
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+3,13-2,T)          R=  +8.7  p =  5.1e-4   unusual          
  ...and 206 test result(s) without anomalies


real	1m42.584s
user	1m41.781s
sys	0m3.504s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xacf5c3df
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xacf5c3df
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xacf5c3df
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xacf5c3df
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  -7.4  p =1-7.1e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xacf5c3df
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xacf5c3df
length= 2 gigabytes (2^31 bytes), time= 42.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xacf5c3df
length= 4 gigabytes (2^32 bytes), time= 81.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xacf5c3df
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 207 test result(s)


real	1m42.250s
user	1m41.251s
sys	0m3.708s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe36d0e13
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe36d0e13
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe36d0e13
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xe36d0e13
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xe36d0e13
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe36d0e13
length= 2 gigabytes (2^31 bytes), time= 42.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe36d0e13
length= 4 gigabytes (2^32 bytes), time= 81.5 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xe36d0e13
length= 8 gigabytes (2^33 bytes), time= 161 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xe36d0e13
length= 16 gigabytes (2^34 bytes), time= 318 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xe36d0e13
length= 32 gigabytes (2^35 bytes), time= 624 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xe36d0e13
length= 64 gigabytes (2^36 bytes), time= 1250 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xe36d0e13
length= 128 gigabytes (2^37 bytes), time= 2495 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0xe36d0e13
length= 186.000 gigabytes (2^37.539 bytes), time= 3602 seconds
  no anomalies in 263 test result(s)


real	60m3.050s
user	59m40.014s
sys	2m1.965s
*/
/* TEST00
time ./MRndCPP 10 
1351727642
2871725058
1378769685
540271206
1044876935
933927816
3532849240
2515431399
2492945960
2077743540
9787216154887690234

real	0m3.243s
user	0m3.228s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  |3540815579|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.22058506|  PASSED  

real	0m24.980s
user	0m24.452s
sys	0m0.496s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xb7108b75
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xb7108b75
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xb7108b75
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xb7108b75
length= 512 megabytes (2^29 bytes), time= 12.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xb7108b75
length= 1 gigabyte (2^30 bytes), time= 23.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xb7108b75
length= 2 gigabytes (2^31 bytes), time= 45.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xb7108b75
length= 4 gigabytes (2^32 bytes), time= 87.5 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xb7108b75
length= 8 gigabytes (2^33 bytes), time= 177 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xb7108b75
length= 16 gigabytes (2^34 bytes), time= 363 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xb7108b75
length= 32 gigabytes (2^35 bytes), time= 728 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xb7108b75
length= 43.500 gigabytes (2^35.443 bytes), time= 1003 seconds
  no anomalies in 242 test result(s)


real	16m44.612s
user	16m25.560s
sys	0m17.940s
*/
/* TEST00
time ./MRndCPP 12 
2588166005
3737404736
3860014650
1500346174
1563647462
1859742570
4097100740
1037511761
153241025
3741037504
8925537325030964639

real	0m12.381s
user	0m12.379s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.03e+07  |2637184655|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.62247956|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.15754919|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.99832604|   WEAK   
    diehard_rank_6x8|   0|    100000|     100|0.99675651|   WEAK   
   diehard_bitstream|   0|   2097152|     100|0.69905106|  PASSED  
        diehard_opso|   0|   2097152|     100|0.47320202|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.19279146|  PASSED  
         diehard_dna|   0|   2097152|     100|0.24664554|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.21199170|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.24623917|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.99803020|   WEAK   
    diehard_2dsphere|   2|      8000|     100|0.86645722|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.84394203|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.70940555|  PASSED  
        diehard_sums|   0|       100|     100|0.98883252|  PASSED  
        diehard_runs|   0|    100000|     100|0.78038873|  PASSED  
        diehard_runs|   0|    100000|     100|0.87751876|  PASSED  
       diehard_craps|   0|    200000|     100|0.43637304|  PASSED  
       diehard_craps|   0|    200000|     100|0.06277825|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.57224477|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.12223704|  PASSED  
         sts_monobit|   1|    100000|     100|0.58796685|  PASSED  
            sts_runs|   2|    100000|     100|0.50578896|  PASSED  
          sts_serial|   1|    100000|     100|0.40585933|  PASSED  
          sts_serial|   2|    100000|     100|0.42973704|  PASSED  
          sts_serial|   3|    100000|     100|0.44221492|  PASSED  
          sts_serial|   3|    100000|     100|0.20090207|  PASSED  
          sts_serial|   4|    100000|     100|0.46030225|  PASSED  
          sts_serial|   4|    100000|     100|0.56328535|  PASSED  
          sts_serial|   5|    100000|     100|0.97549391|  PASSED  
          sts_serial|   5|    100000|     100|0.93566541|  PASSED  
          sts_serial|   6|    100000|     100|0.68082794|  PASSED  
          sts_serial|   6|    100000|     100|0.61907135|  PASSED  
          sts_serial|   7|    100000|     100|0.94602706|  PASSED  
          sts_serial|   7|    100000|     100|0.65824224|  PASSED  
          sts_serial|   8|    100000|     100|0.15512511|  PASSED  
          sts_serial|   8|    100000|     100|0.02251967|  PASSED  
          sts_serial|   9|    100000|     100|0.99805995|   WEAK   
          sts_serial|   9|    100000|     100|0.21245488|  PASSED  
          sts_serial|  10|    100000|     100|0.77569732|  PASSED  
          sts_serial|  10|    100000|     100|0.88093022|  PASSED  
          sts_serial|  11|    100000|     100|0.06091088|  PASSED  
          sts_serial|  11|    100000|     100|0.17770702|  PASSED  
          sts_serial|  12|    100000|     100|0.61225613|  PASSED  
          sts_serial|  12|    100000|     100|0.81717680|  PASSED  
          sts_serial|  13|    100000|     100|0.68649119|  PASSED  
          sts_serial|  13|    100000|     100|0.41368266|  PASSED  
          sts_serial|  14|    100000|     100|0.20134744|  PASSED  
          sts_serial|  14|    100000|     100|0.91412096|  PASSED  
          sts_serial|  15|    100000|     100|0.63573553|  PASSED  
          sts_serial|  15|    100000|     100|0.84076748|  PASSED  
          sts_serial|  16|    100000|     100|0.39667080|  PASSED  
          sts_serial|  16|    100000|     100|0.75314615|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.98032416|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.19301110|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.42214167|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.99978294|   WEAK   
         rgb_bitdist|   5|    100000|     100|0.34259761|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.92039554|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.83495058|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.82873811|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.88765144|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.49108119|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.68686856|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.32695642|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.70229586|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.50679126|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.14855831|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.44333587|  PASSED  
    rgb_permutations|   2|    100000|     100|0.33052428|  PASSED  
    rgb_permutations|   3|    100000|     100|0.97600908|  PASSED  
    rgb_permutations|   4|    100000|     100|0.98509037|  PASSED  
    rgb_permutations|   5|    100000|     100|0.15453584|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.05512990|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.44804250|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.46708340|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.39427684|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.93224702|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.06354635|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.72906525|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.32235678|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.11910395|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.70326268|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.59901968|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.21750508|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.54691371|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.70184400|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.05043852|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.56481085|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.93565070|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.60167802|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.53639693|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.25238773|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.81568224|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.09972347|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.82803265|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.54306771|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.47681990|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.18055146|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.82260730|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.03126138|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.63993867|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.82253533|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.88258808|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.71381536|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.04874965|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.79682196|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.87960504|  PASSED  
             dab_dct| 256|     50000|       1|0.99500095|   WEAK   
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.89880771|  PASSED  
        dab_filltree|  32|  15000000|       1|0.45601049|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.34339043|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.43698013|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.42083521|  PASSED  

real	69m21.061s
user	60m48.268s
sys	8m29.432s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x1604c657
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x1604c657
length= 64 megabytes (2^26 bytes), time= 2.4 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x1604c657
length= 128 megabytes (2^27 bytes), time= 5.4 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x1604c657
length= 256 megabytes (2^28 bytes), time= 10.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x1604c657
length= 512 megabytes (2^29 bytes), time= 18.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x1604c657
length= 1 gigabyte (2^30 bytes), time= 33.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x1604c657
length= 2 gigabytes (2^31 bytes), time= 64.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x1604c657
length= 4 gigabytes (2^32 bytes), time= 120 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x1604c657
length= 8 gigabytes (2^33 bytes), time= 236 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x1604c657
length= 16 gigabytes (2^34 bytes), time= 465 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x1604c657
length= 32 gigabytes (2^35 bytes), time= 926 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x1604c657
length= 64 gigabytes (2^36 bytes), time= 1849 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x1604c657
length= 124.750 gigabytes (2^36.963 bytes), time= 3603 seconds
  no anomalies in 258 test result(s)


real	60m4.589s
user	58m42.510s
sys	1m17.039s
*/
