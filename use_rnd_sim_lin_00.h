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
/// @created on 2019-12-08 03:01:18 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 15ea84c7-9601-4790-a433-ebd1f3508e8f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin00;
/* TEST00
time ./MRndCPP 
831796958
1444530311
1060550711
1963460622
3039897336
2908147360
4611649753107206212

real	0m3.435s
user	0m3.400s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.37e+07  | 214333176|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.05359242|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.44901344|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.32877372|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.70574611|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.45728620|  PASSED  
        diehard_opso|   0|   2097152|     100|0.58286408|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.41395588|  PASSED  
         diehard_dna|   0|   2097152|     100|0.75545850|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.77860493|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.97056414|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.68219063|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.93158203|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.25151608|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.87018762|  PASSED  
        diehard_sums|   0|       100|     100|0.12134068|  PASSED  
        diehard_runs|   0|    100000|     100|0.99884023|   WEAK   
        diehard_runs|   0|    100000|     100|0.68677778|  PASSED  
       diehard_craps|   0|    200000|     100|0.96875417|  PASSED  
       diehard_craps|   0|    200000|     100|0.90399901|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.84346196|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.65102386|  PASSED  
         sts_monobit|   1|    100000|     100|0.41997516|  PASSED  
            sts_runs|   2|    100000|     100|0.22389084|  PASSED  
          sts_serial|   1|    100000|     100|0.16351889|  PASSED  
          sts_serial|   2|    100000|     100|0.49838685|  PASSED  
          sts_serial|   3|    100000|     100|0.39846045|  PASSED  
          sts_serial|   3|    100000|     100|0.38467064|  PASSED  
          sts_serial|   4|    100000|     100|0.91542715|  PASSED  
          sts_serial|   4|    100000|     100|0.99993152|   WEAK   
          sts_serial|   5|    100000|     100|0.47786272|  PASSED  
          sts_serial|   5|    100000|     100|0.75187981|  PASSED  
          sts_serial|   6|    100000|     100|0.04458689|  PASSED  
          sts_serial|   6|    100000|     100|0.20172119|  PASSED  
          sts_serial|   7|    100000|     100|0.54362160|  PASSED  
          sts_serial|   7|    100000|     100|0.66824982|  PASSED  
          sts_serial|   8|    100000|     100|0.61002835|  PASSED  
          sts_serial|   8|    100000|     100|0.59052910|  PASSED  
          sts_serial|   9|    100000|     100|0.98952392|  PASSED  
          sts_serial|   9|    100000|     100|0.41483741|  PASSED  
          sts_serial|  10|    100000|     100|0.71216496|  PASSED  
          sts_serial|  10|    100000|     100|0.40437656|  PASSED  
          sts_serial|  11|    100000|     100|0.70068368|  PASSED  
          sts_serial|  11|    100000|     100|0.27900828|  PASSED  
          sts_serial|  12|    100000|     100|0.90744829|  PASSED  
          sts_serial|  12|    100000|     100|0.93010699|  PASSED  
          sts_serial|  13|    100000|     100|0.95746971|  PASSED  
          sts_serial|  13|    100000|     100|0.37596647|  PASSED  
          sts_serial|  14|    100000|     100|0.84063867|  PASSED  
          sts_serial|  14|    100000|     100|0.41874622|  PASSED  
          sts_serial|  15|    100000|     100|0.18137896|  PASSED  
          sts_serial|  15|    100000|     100|0.50521916|  PASSED  
          sts_serial|  16|    100000|     100|0.43590270|  PASSED  
          sts_serial|  16|    100000|     100|0.88464621|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.14507872|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.51076030|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.41741681|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.99359739|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.51869550|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.25722895|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.23041369|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.82951827|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.95883641|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.72280313|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.97314975|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.90086906|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.88665497|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.40047688|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.88638588|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.16012158|  PASSED  
    rgb_permutations|   2|    100000|     100|0.37413993|  PASSED  
    rgb_permutations|   3|    100000|     100|0.83942875|  PASSED  
    rgb_permutations|   4|    100000|     100|0.77668615|  PASSED  
    rgb_permutations|   5|    100000|     100|0.21845158|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.04083291|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.47077853|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.93066392|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.44703415|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.79281734|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.74692682|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.26092812|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.94666345|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.29247809|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.29726669|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.75883415|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.59441702|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.98054874|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.24382099|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.05915192|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.38499054|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.97213379|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.74824037|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.19475191|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.41302803|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.72555790|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.47374966|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.01023058|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.24307386|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.26063500|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.28343635|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.49834548|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.96063204|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.40275914|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.81751940|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.02399280|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.60447797|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.59558808|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.04611661|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.79530724|  PASSED  
             dab_dct| 256|     50000|       1|0.65633664|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.01229062|  PASSED  
        dab_filltree|  32|  15000000|       1|0.46016592|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.76723046|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.41074539|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.39432973|  PASSED  

real	48m43.996s
user	45m6.380s
sys	3m26.892s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5e0a8f5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5e0a8f5
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5e0a8f5
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5e0a8f5
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.9  p =  3.1e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5e0a8f5
length= 1 gigabyte (2^30 bytes), time= 21.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +6.9  p =  9.9e-4   mildly suspicious
  [Low8/32]DC6-9x1Bytes-1           R=  -3.6  p = 0.990     unusual          
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5e0a8f5
length= 2 gigabytes (2^31 bytes), time= 40.9 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.1  p =  7.6e-3   unusual          
  [Low1/32]FPF-14+6/16:all          R=  -7.8  p =1-3.7e-7   very suspicious  
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5e0a8f5
length= 4 gigabytes (2^32 bytes), time= 79.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +7.4  p =  6.8e-4   mildly suspicious
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -10.8  p =1-1.2e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(1,14-0)     R=  -6.9  p =1-4.9e-6   unusual          
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -6.3  p =1-1.6e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= -15.2  p =1-1.9e-14    FAIL           
  [Low1/32]FPF-14+6/16:all2         R= +38.2  p =  6.2e-16    FAIL !         
  ...and 150 test result(s) without anomalies


real	1m19.917s
user	1m18.128s
sys	0m1.620s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x423a2472
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x423a2472
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x423a2472
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x423a2472
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x423a2472
length= 1 gigabyte (2^30 bytes), time= 21.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x423a2472
length= 2 gigabytes (2^31 bytes), time= 41.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.3  p =1-9.8e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x423a2472
length= 4 gigabytes (2^32 bytes), time= 84.1 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +9.1  p =  9.9e-5   suspicious       
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -7.8  p =1-6.3e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:(1,14-0)     R=  -7.6  p =1-1.0e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -7.1  p =1-3.3e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= -15.5  p =1-9.6e-15    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +32.5  p =  8.4e-14    FAIL           
  ...and 150 test result(s) without anomalies


real	1m24.870s
user	1m23.028s
sys	0m1.568s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7f724b51
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7f724b51
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7f724b51
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.1  p =  1.4e-4   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7f724b51
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7f724b51
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -5.7  p =1-3.6e-5   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7f724b51
length= 2 gigabytes (2^31 bytes), time= 36.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.7  p =1-8.7e-3   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -6.4  p =1-1.2e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R=  -7.6  p =1-5.3e-7   very suspicious  
  [Low1/32]FPF-14+6/16:all2         R=  +8.3  p =  1.0e-4   unusual          
  ...and 144 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7f724b51
length= 4 gigabytes (2^32 bytes), time= 70.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  6.1e-3   unusual          
  [Low8/32]Gap-16:A                 R=  -4.3  p =1-4.9e-4   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -11.7  p =1-1.8e-10   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R=  -6.8  p =1-6.3e-6   unusual          
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -8.1  p =1-3.5e-7   suspicious       
  [Low1/32]FPF-14+6/16:(3,14-1)     R=  -6.2  p =1-9.6e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= -16.7  p =1-5.9e-16    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +48.6  p =  8.6e-20    FAIL !         
  ...and 148 test result(s) without anomalies


real	1m11.000s
user	1m9.344s
sys	0m1.468s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x39575170
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x39575170
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x39575170
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x39575170
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x39575170
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x39575170
length= 2 gigabytes (2^31 bytes), time= 36.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.0  p =  8.4e-3   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -7.6  p =1-1.0e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R=  -7.6  p =1-4.7e-7   very suspicious  
  [Low1/32]FPF-14+6/16:all2         R=  +9.3  p =  4.7e-5   mildly suspicious
  ...and 144 test result(s) without anomalies

rng=RNG_stdin32, seed=0x39575170
length= 4 gigabytes (2^32 bytes), time= 72.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +9.9  p =  4.5e-5   suspicious       
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -11.5  p =1-2.6e-10   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R=  -6.4  p =1-1.4e-5   unusual          
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -7.2  p =1-2.5e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= -15.8  p =1-4.7e-15    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +41.0  p =  5.6e-17    FAIL !         
  ...and 150 test result(s) without anomalies


real	1m12.884s
user	1m11.216s
sys	0m1.544s
*/
