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
/// @created on 2019-12-08 02:59:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8e200c1f-f53f-48b8-9d3a-c301e6742617                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin1;
/* TEST00
time ./MRndCPP 
2883782798
713566596
2633069086
1884896272
1650841066
4093672931
4611597444850883690

real	0m3.444s
user	0m3.388s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.29e+07  |2681701174|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.82409603|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.99889746|   WEAK   
  diehard_rank_32x32|   0|     40000|     100|0.87200058|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.24848115|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.52175689|  PASSED  
        diehard_opso|   0|   2097152|     100|0.88448165|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.49716413|  PASSED  
         diehard_dna|   0|   2097152|     100|0.88263752|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.75194649|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.94454219|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.17333962|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.59014063|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.53060116|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.88550693|  PASSED  
        diehard_sums|   0|       100|     100|0.13724082|  PASSED  
        diehard_runs|   0|    100000|     100|0.56167625|  PASSED  
        diehard_runs|   0|    100000|     100|0.35693307|  PASSED  
       diehard_craps|   0|    200000|     100|0.07968308|  PASSED  
       diehard_craps|   0|    200000|     100|0.12768040|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.12987811|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.72705311|  PASSED  
         sts_monobit|   1|    100000|     100|0.51771342|  PASSED  
            sts_runs|   2|    100000|     100|0.50461338|  PASSED  
          sts_serial|   1|    100000|     100|0.88496171|  PASSED  
          sts_serial|   2|    100000|     100|0.45114719|  PASSED  
          sts_serial|   3|    100000|     100|0.58020986|  PASSED  
          sts_serial|   3|    100000|     100|0.97187022|  PASSED  
          sts_serial|   4|    100000|     100|0.17050911|  PASSED  
          sts_serial|   4|    100000|     100|0.94230253|  PASSED  
          sts_serial|   5|    100000|     100|0.69521883|  PASSED  
          sts_serial|   5|    100000|     100|0.47588241|  PASSED  
          sts_serial|   6|    100000|     100|0.48841534|  PASSED  
          sts_serial|   6|    100000|     100|0.45150625|  PASSED  
          sts_serial|   7|    100000|     100|0.83039110|  PASSED  
          sts_serial|   7|    100000|     100|0.98684933|  PASSED  
          sts_serial|   8|    100000|     100|0.68957682|  PASSED  
          sts_serial|   8|    100000|     100|0.92455836|  PASSED  
          sts_serial|   9|    100000|     100|0.38643563|  PASSED  
          sts_serial|   9|    100000|     100|0.51487344|  PASSED  
          sts_serial|  10|    100000|     100|0.12493304|  PASSED  
          sts_serial|  10|    100000|     100|0.04018090|  PASSED  
          sts_serial|  11|    100000|     100|0.43111511|  PASSED  
          sts_serial|  11|    100000|     100|0.95105265|  PASSED  
          sts_serial|  12|    100000|     100|0.85270929|  PASSED  
          sts_serial|  12|    100000|     100|0.17081174|  PASSED  
          sts_serial|  13|    100000|     100|0.37280073|  PASSED  
          sts_serial|  13|    100000|     100|0.21178931|  PASSED  
          sts_serial|  14|    100000|     100|0.26173548|  PASSED  
          sts_serial|  14|    100000|     100|0.75967113|  PASSED  
          sts_serial|  15|    100000|     100|0.18924978|  PASSED  
          sts_serial|  15|    100000|     100|0.94412710|  PASSED  
          sts_serial|  16|    100000|     100|0.38712360|  PASSED  
          sts_serial|  16|    100000|     100|0.48556687|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.29595660|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.91035747|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.88678461|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.32847195|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.12587596|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.13452017|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.84472698|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.38819393|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.24088443|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.26403754|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.54607921|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.95384270|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.12900643|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.35868362|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.77759569|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.64411853|  PASSED  
    rgb_permutations|   2|    100000|     100|0.36006934|  PASSED  
    rgb_permutations|   3|    100000|     100|0.69581701|  PASSED  
    rgb_permutations|   4|    100000|     100|0.83863444|  PASSED  
    rgb_permutations|   5|    100000|     100|0.48797939|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.52398338|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.56110315|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.82571385|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.74548951|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.55640552|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.52681079|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.76298901|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.74632100|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.87084546|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.90457294|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.32190010|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.98299157|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.94065934|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.28739237|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.03164564|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.29212192|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.86732218|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.55105994|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.98594716|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.42782527|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.44685594|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.90235857|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.37854561|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.82419753|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.91140116|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.03775951|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.59108140|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.18820362|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.40452842|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.05108831|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.79950924|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.70162728|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.75408941|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.36480505|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.77585388|  PASSED  
             dab_dct| 256|     50000|       1|0.93021544|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.08642517|  PASSED  
        dab_filltree|  32|  15000000|       1|0.67531442|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.60246647|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.04795783|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.10287616|  PASSED  

real	51m40.513s
user	47m58.164s
sys	3m33.920s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3cea679a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3cea679a
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3cea679a
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x3cea679a
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.9  p =1-1.1e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3cea679a
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -7.4  p =1-7.6e-7   very suspicious  
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3cea679a
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -6.1  p =1-2.6e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R=  -8.2  p =1-1.3e-7   very suspicious  
  [Low1/32]FPF-14+6/16:all2         R=  +6.6  p =  4.4e-4   unusual          
  ...and 145 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3cea679a
length= 4 gigabytes (2^32 bytes), time= 72.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -4.0  p =1-9.8e-4   unusual          
  [Low8/32]Gap-16:B                 R=  -4.0  p =1-2.5e-3   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -12.9  p =1-1.3e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R=  -9.5  p =1-1.9e-8   very suspicious  
  [Low1/32]FPF-14+6/16:(2,14-0)     R= -10.0  p =1-6.6e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(5,14-2)     R=  -6.1  p =1-1.5e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= -21.0  p =1-3.1e-20    FAIL !!        
  [Low1/32]FPF-14+6/16:all2         R= +75.9  p =  5.5e-30    FAIL !!!       
  ...and 148 test result(s) without anomalies


real	1m13.379s
user	1m11.428s
sys	0m1.648s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdb713a53
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdb713a53
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xdb713a53
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xdb713a53
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.3  p =  5.3e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdb713a53
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -5.4  p =1-7.9e-5   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdb713a53
length= 2 gigabytes (2^31 bytes), time= 40.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -7.9  p =1-5.9e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= -12.0  p =1-2.4e-11    FAIL           
  [Low1/32]FPF-14+6/16:all2         R= +18.4  p =  2.3e-8   very suspicious  
  ...and 145 test result(s) without anomalies


real	0m41.383s
user	0m40.256s
sys	0m0.932s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x72d3a5d8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x72d3a5d8
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x72d3a5d8
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x72d3a5d8
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +7.2  p =  5.0e-4   mildly suspicious
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x72d3a5d8
length= 1 gigabyte (2^30 bytes), time= 19.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.9  p =1-2.6e-4   unusual          
  [Low1/32]FPF-14+6/16:all2         R=  +6.6  p =  4.6e-4   unusual          
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x72d3a5d8
length= 2 gigabytes (2^31 bytes), time= 38.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -7.2  p =1-2.4e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= -10.2  p =1-1.5e-9    VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +14.2  p =  7.9e-7   suspicious       
  ...and 145 test result(s) without anomalies

rng=RNG_stdin32, seed=0x72d3a5d8
length= 4 gigabytes (2^32 bytes), time= 74.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -5.3  p =1-2.0e-4   mildly suspicious
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -13.1  p =1-9.0e-12   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R= -10.4  p =1-2.9e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -9.3  p =1-3.1e-8   very suspicious  
  [Low1/32]FPF-14+6/16:(4,14-2)     R=  -6.1  p =1-1.4e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= -20.9  p =1-3.9e-20    FAIL !!        
  [Low1/32]FPF-14+6/16:all2         R= +76.8  p =  2.5e-30    FAIL !!!       
  ...and 149 test result(s) without anomalies


real	1m15.147s
user	1m13.248s
sys	0m1.728s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6ac4cb4a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6ac4cb4a
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6ac4cb4a
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6ac4cb4a
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -4.0  p =1-8.2e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6ac4cb4a
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.8  p =1-2.9e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6ac4cb4a
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(1,14-0)     R=  -6.6  p =1-9.5e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R=  -9.2  p =1-1.2e-8    VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +10.8  p =  1.3e-5   mildly suspicious
  ...and 145 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6ac4cb4a
length= 4 gigabytes (2^32 bytes), time= 74.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.8  p =1-4.9e-4   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -13.7  p =1-2.4e-12   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R= -11.0  p =1-8.7e-10  very suspicious  
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -8.5  p =1-1.4e-7   suspicious       
  [Low1/32]FPF-14+6/16:(3,14-1)     R=  -6.9  p =1-1.9e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= -20.6  p =1-8.7e-20    FAIL !!        
  [Low1/32]FPF-14+6/16:all2         R= +79.0  p =  3.8e-31    FAIL !!!       
  ...and 149 test result(s) without anomalies


real	1m14.696s
user	1m12.836s
sys	0m1.592s
*/
