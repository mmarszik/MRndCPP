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
1472598301
1427133193
971170876
3769792545
3301682133
3892378567
16199391709696

real	0m27.034s
user	0m27.012s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.31e+07  |2361897819|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.95149064|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.51710175|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.99640117|   WEAK   
    diehard_rank_6x8|   0|    100000|     100|0.86025330|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.03602535|  PASSED  
        diehard_opso|   0|   2097152|     100|0.93261367|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.36472067|  PASSED  
         diehard_dna|   0|   2097152|     100|0.92156487|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.96388388|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.52792778|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.25460871|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.55927911|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.57710025|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.94818234|  PASSED  
        diehard_sums|   0|       100|     100|0.02520410|  PASSED  
        diehard_runs|   0|    100000|     100|0.70582487|  PASSED  
        diehard_runs|   0|    100000|     100|0.89405350|  PASSED  
       diehard_craps|   0|    200000|     100|0.45466837|  PASSED  
       diehard_craps|   0|    200000|     100|0.39362616|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99107827|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.81798598|  PASSED  
         sts_monobit|   1|    100000|     100|0.86598391|  PASSED  
            sts_runs|   2|    100000|     100|0.05838792|  PASSED  
          sts_serial|   1|    100000|     100|0.96332346|  PASSED  
          sts_serial|   2|    100000|     100|0.98494131|  PASSED  
          sts_serial|   3|    100000|     100|0.70332130|  PASSED  
          sts_serial|   3|    100000|     100|0.77155175|  PASSED  
          sts_serial|   4|    100000|     100|0.39744347|  PASSED  
          sts_serial|   4|    100000|     100|0.83722848|  PASSED  
          sts_serial|   5|    100000|     100|0.15989432|  PASSED  
          sts_serial|   5|    100000|     100|0.50346276|  PASSED  
          sts_serial|   6|    100000|     100|0.13078841|  PASSED  
          sts_serial|   6|    100000|     100|0.35131890|  PASSED  
          sts_serial|   7|    100000|     100|0.15114175|  PASSED  
          sts_serial|   7|    100000|     100|0.88831696|  PASSED  
          sts_serial|   8|    100000|     100|0.10621024|  PASSED  
          sts_serial|   8|    100000|     100|0.48194232|  PASSED  
          sts_serial|   9|    100000|     100|0.22551699|  PASSED  
          sts_serial|   9|    100000|     100|0.08765203|  PASSED  
          sts_serial|  10|    100000|     100|0.77508803|  PASSED  
          sts_serial|  10|    100000|     100|0.34102439|  PASSED  
          sts_serial|  11|    100000|     100|0.62250494|  PASSED  
          sts_serial|  11|    100000|     100|0.17450518|  PASSED  
          sts_serial|  12|    100000|     100|0.35090080|  PASSED  
          sts_serial|  12|    100000|     100|0.16158240|  PASSED  
          sts_serial|  13|    100000|     100|0.74620235|  PASSED  
          sts_serial|  13|    100000|     100|0.97290925|  PASSED  
          sts_serial|  14|    100000|     100|0.88942787|  PASSED  
          sts_serial|  14|    100000|     100|0.95448448|  PASSED  
          sts_serial|  15|    100000|     100|0.71532385|  PASSED  
          sts_serial|  15|    100000|     100|0.72011982|  PASSED  
          sts_serial|  16|    100000|     100|0.32051474|  PASSED  
          sts_serial|  16|    100000|     100|0.84703638|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.99681960|   WEAK   
         rgb_bitdist|   2|    100000|     100|0.71207794|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.34536214|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.40589975|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.93413733|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.35432180|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.99978353|   WEAK   
         rgb_bitdist|   8|    100000|     100|0.81722105|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.97394176|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.76612358|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.92477141|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.56315910|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.59299648|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.96488157|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.51145518|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.34532503|  PASSED  
    rgb_permutations|   2|    100000|     100|0.82598037|  PASSED  
    rgb_permutations|   3|    100000|     100|0.66314745|  PASSED  
    rgb_permutations|   4|    100000|     100|0.02918634|  PASSED  
    rgb_permutations|   5|    100000|     100|0.67790465|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.08278970|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.19213653|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.00187291|   WEAK   
      rgb_lagged_sum|   3|   1000000|     100|0.92745092|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.82055446|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.46662984|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.44627777|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.93197113|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.24926310|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.99781928|   WEAK   
      rgb_lagged_sum|  10|   1000000|     100|0.95444314|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.16772091|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.90071534|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.86254547|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.06055081|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.86285266|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.76339568|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.03918976|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.82498180|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.46650987|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.28745543|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.50715317|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.36411020|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.46631035|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.10271323|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.82227178|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.35216147|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.80276141|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.98431058|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.92521706|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.76791252|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.87468619|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.88377820|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.79919758|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.54187272|  PASSED  
             dab_dct| 256|     50000|       1|0.98094497|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.54057446|  PASSED  
        dab_filltree|  32|  15000000|       1|0.85496664|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.02606695|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.91310424|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.61671514|  PASSED  

real	50m47.329s
user	47m2.312s
sys	3m41.828s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc7b629c8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc7b629c8
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc7b629c8
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +4.5  p =  2.6e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc7b629c8
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xc7b629c8
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -9.1  p =1-1.5e-8   very suspicious  
  [Low1/32]FPF-14+6/16:all2         R=  +8.3  p =  1.1e-4   unusual          
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc7b629c8
length= 2 gigabytes (2^31 bytes), time= 36.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -12.5  p =1-3.7e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R= -10.3  p =1-3.4e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(2,14-1)     R=  -6.9  p =1-2.1e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= -19.1  p =1-2.2e-18    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +62.4  p =  2.7e-24    FAIL !!        
  ...and 143 test result(s) without anomalies


real	0m37.427s
user	0m36.452s
sys	0m0.928s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8f1c4d28
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8f1c4d28
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.3  p =1-9.8e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8f1c4d28
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.0  p =1-2.2e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8f1c4d28
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.9  p =1-2.3e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8f1c4d28
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:(2,14-0)              R=  +6.4  p =  1.5e-5   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -6.0  p =1-1.7e-5   unusual          
  [Low1/32]FPF-14+6/16:(1,14-1)     R=  -6.7  p =1-3.1e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R=  -9.6  p =1-5.9e-9    VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +14.6  p =  7.0e-7   suspicious       
  ...and 136 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8f1c4d28
length= 2 gigabytes (2^31 bytes), time= 36.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -10.6  p =1-1.7e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(1,14-0)     R= -11.2  p =1-5.1e-10  very suspicious  
  [Low1/32]FPF-14+6/16:(2,14-1)     R=  -7.6  p =1-3.3e-7   suspicious       
  [Low1/32]FPF-14+6/16:(3,14-2)     R=  -6.5  p =1-6.6e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= -19.5  p =1-1.0e-18    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +66.1  p =  1.2e-25    FAIL !!        
  ...and 142 test result(s) without anomalies


real	0m37.229s
user	0m36.328s
sys	0m0.836s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xeade9953
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xeade9953
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xeade9953
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  +4.6  p =  8.9e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xeade9953
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xeade9953
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -7.7  p =1-3.7e-7   suspicious       
  [Low1/32]FPF-14+6/16:all          R= -10.1  p =1-1.9e-9    VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +14.7  p =  6.3e-7   suspicious       
  ...and 138 test result(s) without anomalies

rng=RNG_stdin32, seed=0xeade9953
length= 2 gigabytes (2^31 bytes), time= 36.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -13.1  p =1-1.0e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R= -10.8  p =1-1.2e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(2,14-1)     R=  -7.3  p =1-7.6e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:(3,14-2)     R=  -6.3  p =1-9.5e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= -20.7  p =1-5.9e-20    FAIL !!        
  [Low1/32]FPF-14+6/16:all2         R= +74.6  p =  1.0e-28    FAIL !!!       
  ...and 142 test result(s) without anomalies


real	0m37.359s
user	0m36.492s
sys	0m0.812s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2a0acf5e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2a0acf5e
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2a0acf5e
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2a0acf5e
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.0  p =  9.7e-4   unusual          
  [Low8/32]Gap-16:A                 R=  -3.9  p =1-1.0e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2a0acf5e
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.7  p =  5.6e-3   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -6.4  p =1-8.3e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R=  -8.6  p =1-5.6e-8   very suspicious  
  [Low1/32]FPF-14+6/16:all2         R=  +9.9  p =  3.2e-5   mildly suspicious
  ...and 137 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2a0acf5e
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -11.3  p =1-4.0e-10  very suspicious  
  [Low1/32]FPF-14+6/16:(1,14-0)     R= -11.4  p =1-3.8e-10   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(2,14-1)     R=  -8.2  p =1-9.1e-8   suspicious       
  [Low1/32]FPF-14+6/16:(4,14-2)     R=  -6.5  p =1-5.9e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= -19.8  p =1-5.1e-19    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +70.7  p =  2.7e-27    FAIL !!        
  ...and 142 test result(s) without anomalies


real	0m37.845s
user	0m37.060s
sys	0m0.744s
*/
