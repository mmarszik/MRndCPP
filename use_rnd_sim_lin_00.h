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
1663593917
2889060622
2121101423
3926921244
1784827376
1521327424
18446633594929367496

real	0m27.113s
user	0m27.052s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.34e+07  | 130142104|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.46390248|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.93066149|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.91227924|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.74497058|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.75828829|  PASSED  
        diehard_opso|   0|   2097152|     100|0.43567410|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.21639916|  PASSED  
         diehard_dna|   0|   2097152|     100|0.82235546|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.66286702|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.95250559|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.13186651|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.88841715|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.28437113|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.97189529|  PASSED  
        diehard_sums|   0|       100|     100|0.27296615|  PASSED  
        diehard_runs|   0|    100000|     100|0.83016127|  PASSED  
        diehard_runs|   0|    100000|     100|0.22870447|  PASSED  
       diehard_craps|   0|    200000|     100|0.87161969|  PASSED  
       diehard_craps|   0|    200000|     100|0.39585316|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.81241006|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.92822171|  PASSED  
         sts_monobit|   1|    100000|     100|0.99435090|  PASSED  
            sts_runs|   2|    100000|     100|0.61428793|  PASSED  
          sts_serial|   1|    100000|     100|0.14628255|  PASSED  
          sts_serial|   2|    100000|     100|0.01935340|  PASSED  
          sts_serial|   3|    100000|     100|0.01562614|  PASSED  
          sts_serial|   3|    100000|     100|0.89128979|  PASSED  
          sts_serial|   4|    100000|     100|0.33147197|  PASSED  
          sts_serial|   4|    100000|     100|0.96555050|  PASSED  
          sts_serial|   5|    100000|     100|0.48943195|  PASSED  
          sts_serial|   5|    100000|     100|0.83463072|  PASSED  
          sts_serial|   6|    100000|     100|0.30493589|  PASSED  
          sts_serial|   6|    100000|     100|0.87261049|  PASSED  
          sts_serial|   7|    100000|     100|0.92439567|  PASSED  
          sts_serial|   7|    100000|     100|0.35472223|  PASSED  
          sts_serial|   8|    100000|     100|0.97096526|  PASSED  
          sts_serial|   8|    100000|     100|0.61070059|  PASSED  
          sts_serial|   9|    100000|     100|0.87875335|  PASSED  
          sts_serial|   9|    100000|     100|0.93382110|  PASSED  
          sts_serial|  10|    100000|     100|0.25473839|  PASSED  
          sts_serial|  10|    100000|     100|0.33540784|  PASSED  
          sts_serial|  11|    100000|     100|0.90174538|  PASSED  
          sts_serial|  11|    100000|     100|0.89120773|  PASSED  
          sts_serial|  12|    100000|     100|0.26068154|  PASSED  
          sts_serial|  12|    100000|     100|0.23396824|  PASSED  
          sts_serial|  13|    100000|     100|0.55078879|  PASSED  
          sts_serial|  13|    100000|     100|0.16974737|  PASSED  
          sts_serial|  14|    100000|     100|0.47665608|  PASSED  
          sts_serial|  14|    100000|     100|0.96094505|  PASSED  
          sts_serial|  15|    100000|     100|0.38653234|  PASSED  
          sts_serial|  15|    100000|     100|0.46948850|  PASSED  
          sts_serial|  16|    100000|     100|0.25225933|  PASSED  
          sts_serial|  16|    100000|     100|0.87990690|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.10047782|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.49866273|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.82941711|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.59300522|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.77432289|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.97415916|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.29645258|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.57488025|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.96018216|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.80419833|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.15117127|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.47028659|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.41174225|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.81816421|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.25752989|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.97937535|  PASSED  
    rgb_permutations|   2|    100000|     100|0.98126846|  PASSED  
    rgb_permutations|   3|    100000|     100|0.87883956|  PASSED  
    rgb_permutations|   4|    100000|     100|0.75242681|  PASSED  
    rgb_permutations|   5|    100000|     100|0.53359572|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.62355292|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.21712452|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.79026557|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.29430201|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.84788410|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.38632205|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.43856478|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.92577514|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.81057910|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.76016097|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.32479441|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.79567375|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.55143684|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.01874812|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.71452700|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.74598809|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.90060372|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.71265639|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.79239293|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.70498329|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.91676177|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.71502971|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.19974007|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.58992966|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.57551547|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.41359725|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.55722238|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.99765429|   WEAK   
      rgb_lagged_sum|  28|   1000000|     100|0.73812875|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.17702890|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.23051389|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.65861186|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.63792725|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.78912048|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.94697076|  PASSED  
             dab_dct| 256|     50000|       1|0.55888187|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.56387092|  PASSED  
        dab_filltree|  32|  15000000|       1|0.39007050|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.27649410|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.90352601|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.05988122|  PASSED  

real	52m52.514s
user	49m7.192s
sys	3m41.860s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb7b9e529
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb7b9e529
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb7b9e529
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.2  p = 0.011     unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb7b9e529
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -6.2  p =1-1.2e-5   suspicious       
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb7b9e529
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -6.3  p =1-1.0e-5   suspicious       
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb7b9e529
length= 2 gigabytes (2^31 bytes), time= 36.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -11.2  p =1-4.9e-10  very suspicious  
  [Low1/32]FPF-14+6/16:(1,14-0)     R=  -6.6  p =1-9.0e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= -13.6  p =1-6.0e-13    FAIL           
  [Low1/32]FPF-14+6/16:all2         R= +33.7  p =  6.6e-14    FAIL           
  ...and 144 test result(s) without anomalies


real	0m37.163s
user	0m36.132s
sys	0m0.996s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa7a89268
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa7a89268
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xa7a89268
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa7a89268
length= 512 megabytes (2^29 bytes), time= 9.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xa7a89268
length= 1 gigabyte (2^30 bytes), time= 18.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -6.0  p =1-2.0e-5   mildly suspicious
  [Low1/32]FPF-14+6/16:all2         R=  +7.3  p =  2.8e-4   unusual          
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa7a89268
length= 2 gigabytes (2^31 bytes), time= 36.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +7.5  p =  4.2e-4   mildly suspicious
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -11.2  p =1-4.9e-10  very suspicious  
  [Low1/32]FPF-14+6/16:(1,14-0)     R=  -7.8  p =1-7.6e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:(2,14-1)     R=  -8.4  p =1-5.3e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R= -16.1  p =1-2.3e-15    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +53.4  p =  4.8e-21    FAIL !!        
  ...and 142 test result(s) without anomalies


real	0m37.010s
user	0m36.120s
sys	0m0.856s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x52fadbc9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x52fadbc9
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x52fadbc9
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x52fadbc9
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+3,13-5,T)         R= +11.3  p =  1.3e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x52fadbc9
length= 1 gigabyte (2^30 bytes), time= 20.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -8.0  p =1-2.0e-7   very suspicious  
  [Low1/32]FPF-14+6/16:all2         R= +12.2  p =  4.8e-6   suspicious       
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x52fadbc9
length= 2 gigabytes (2^31 bytes), time= 38.6 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +6.4  p =  1.5e-3   unusual          
  [Low8/32]Gap-16:A                 R=  -3.5  p =1-2.9e-3   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -14.3  p =1-6.9e-13    FAIL           
  [Low1/32]FPF-14+6/16:(2,14-1)     R=  -6.3  p =1-7.1e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= -14.5  p =1-7.9e-14    FAIL           
  [Low1/32]FPF-14+6/16:all2         R= +48.7  p =  2.5e-19    FAIL !         
  ...and 142 test result(s) without anomalies


real	0m39.346s
user	0m38.428s
sys	0m0.852s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3aeec4ea
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3aeec4ea
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.4  p =1-2.1e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3aeec4ea
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x3aeec4ea
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.5  p =1-2.2e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3aeec4ea
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -4.3  p =1-5.1e-4   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -6.7  p =1-3.5e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R=  -6.9  p =1-2.4e-6   suspicious       
  [Low1/32]FPF-14+6/16:all2         R=  +9.4  p =  4.7e-5   mildly suspicious
  ...and 137 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3aeec4ea
length= 2 gigabytes (2^31 bytes), time= 36.6 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +6.3  p =  1.7e-3   unusual          
  [Low8/32]Gap-16:A                 R=  -4.5  p =1-3.4e-4   unusual          
  [Low8/32]Gap-16:B                 R=  -4.2  p =1-1.5e-3   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -13.6  p =1-3.4e-12   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all          R= -12.9  p =1-3.5e-12    FAIL           
  [Low1/32]FPF-14+6/16:all2         R= +37.8  p =  2.2e-15    FAIL !         
  ...and 142 test result(s) without anomalies


real	0m37.277s
user	0m36.412s
sys	0m0.812s
*/
