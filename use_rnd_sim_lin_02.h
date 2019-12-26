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
/// @created on 2019-12-08 03:01:54 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 3d0be239-049e-4082-b213-9b26bfc18ea2                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin02;
/* TEST00
time ./MRndCPP 
1889262655
331459241
3829589973
902451912
3434156384
458466171
4611724073098850769

real	0m3.402s
user	0m3.392s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.35e+07  |1139648219|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.75828612|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.15124967|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.46446830|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.69423204|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.34357517|  PASSED  
        diehard_opso|   0|   2097152|     100|0.25188466|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.34233661|  PASSED  
         diehard_dna|   0|   2097152|     100|0.74658776|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.27462243|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.07856901|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.78148856|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.92176410|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.75169350|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.73571083|  PASSED  
        diehard_sums|   0|       100|     100|0.53380650|  PASSED  
        diehard_runs|   0|    100000|     100|0.29256074|  PASSED  
        diehard_runs|   0|    100000|     100|0.62059621|  PASSED  
       diehard_craps|   0|    200000|     100|0.69564343|  PASSED  
       diehard_craps|   0|    200000|     100|0.55291728|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.69657486|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.47783772|  PASSED  
         sts_monobit|   1|    100000|     100|0.98282459|  PASSED  
            sts_runs|   2|    100000|     100|0.93585443|  PASSED  
          sts_serial|   1|    100000|     100|0.66923536|  PASSED  
          sts_serial|   2|    100000|     100|0.97091610|  PASSED  
          sts_serial|   3|    100000|     100|0.36811734|  PASSED  
          sts_serial|   3|    100000|     100|0.69924351|  PASSED  
          sts_serial|   4|    100000|     100|0.29158123|  PASSED  
          sts_serial|   4|    100000|     100|0.17611741|  PASSED  
          sts_serial|   5|    100000|     100|0.02173395|  PASSED  
          sts_serial|   5|    100000|     100|0.07853932|  PASSED  
          sts_serial|   6|    100000|     100|0.18067759|  PASSED  
          sts_serial|   6|    100000|     100|0.37241189|  PASSED  
          sts_serial|   7|    100000|     100|0.73802834|  PASSED  
          sts_serial|   7|    100000|     100|0.76542810|  PASSED  
          sts_serial|   8|    100000|     100|0.16380882|  PASSED  
          sts_serial|   8|    100000|     100|0.24440010|  PASSED  
          sts_serial|   9|    100000|     100|0.75511088|  PASSED  
          sts_serial|   9|    100000|     100|0.83418597|  PASSED  
          sts_serial|  10|    100000|     100|0.40272303|  PASSED  
          sts_serial|  10|    100000|     100|0.16539595|  PASSED  
          sts_serial|  11|    100000|     100|0.06096214|  PASSED  
          sts_serial|  11|    100000|     100|0.17371100|  PASSED  
          sts_serial|  12|    100000|     100|0.40956059|  PASSED  
          sts_serial|  12|    100000|     100|0.80191567|  PASSED  
          sts_serial|  13|    100000|     100|0.99531472|   WEAK   
          sts_serial|  13|    100000|     100|0.56046137|  PASSED  
          sts_serial|  14|    100000|     100|0.90134719|  PASSED  
          sts_serial|  14|    100000|     100|0.59908046|  PASSED  
          sts_serial|  15|    100000|     100|0.77964551|  PASSED  
          sts_serial|  15|    100000|     100|0.69309492|  PASSED  
          sts_serial|  16|    100000|     100|0.35387858|  PASSED  
          sts_serial|  16|    100000|     100|0.59084667|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.37075641|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.60082853|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.48063607|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.15216943|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.13639339|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.77275195|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.56766530|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.31688901|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.34229729|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.78552730|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.26436171|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.95533463|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.01907405|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.22659992|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.99454957|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.38991523|  PASSED  
    rgb_permutations|   2|    100000|     100|0.18388617|  PASSED  
    rgb_permutations|   3|    100000|     100|0.96590290|  PASSED  
    rgb_permutations|   4|    100000|     100|0.77891188|  PASSED  
    rgb_permutations|   5|    100000|     100|0.17913474|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.88105667|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.36458869|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.72979400|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.36911219|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.63561545|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.99965293|   WEAK   
      rgb_lagged_sum|   6|   1000000|     100|0.74985134|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.99578940|   WEAK   
      rgb_lagged_sum|   8|   1000000|     100|0.40078008|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.57422582|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.34774193|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.19291655|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.43418550|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.60742128|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.32691612|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.70037009|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.19922795|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.65059644|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.89030256|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.59710585|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.26849498|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.04791029|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.74942368|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.48407544|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.61632025|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.24952078|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.71359462|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.69559560|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.96363170|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.69197770|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.93427049|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.31966949|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.79360256|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.21608070|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.56165710|  PASSED  
             dab_dct| 256|     50000|       1|0.05542600|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.53193424|  PASSED  
        dab_filltree|  32|  15000000|       1|0.65472520|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.65896227|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.29531202|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.38146121|  PASSED  

real	48m22.472s
user	44m41.440s
sys	3m33.312s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x29f8cab2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x29f8cab2
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x29f8cab2
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x29f8cab2
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-1)     R=  +8.0  p =  7.4e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:(2,14-2)     R=  +6.4  p =  2.2e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= +11.5  p =  2.6e-10   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +18.7  p =  3.5e-8   very suspicious  
  ...and 128 test result(s) without anomalies

rng=RNG_stdin32, seed=0x29f8cab2
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R= +12.3  p =  5.5e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-1)     R= +10.1  p =  1.1e-8   very suspicious  
  [Low1/32]FPF-14+6/16:(2,14-2)     R=  +8.9  p =  1.6e-7   suspicious       
  [Low1/32]FPF-14+6/16:(3,14-2)     R=  +8.5  p =  3.5e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= +20.8  p =  5.6e-19    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +72.2  p =  3.6e-27    FAIL !!        
  ...and 135 test result(s) without anomalies


real	0m19.578s
user	0m19.036s
sys	0m0.500s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2b8f49e0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2b8f49e0
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2b8f49e0
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  +6.5  p =  1.8e-5   mildly suspicious
  [Low1/32]FPF-14+6/16:all2         R=  +8.3  p =  1.4e-4   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2b8f49e0
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-1)     R= +12.6  p =  7.1e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-2)     R=  +9.1  p =  9.7e-8   suspicious       
  [Low1/32]FPF-14+6/16:(2,14-2)     R=  +8.9  p =  1.4e-7   suspicious       
  [Low1/32]FPF-14+6/16:(3,14-3)     R=  +7.0  p =  7.3e-6   unusual          
  [Low1/32]FPF-14+6/16:(4,14-4)     R=  +6.7  p =  1.9e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= +21.4  p =  1.5e-19    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +72.5  p =  1.2e-26    FAIL !!        
  ...and 125 test result(s) without anomalies


real	0m10.390s
user	0m10.076s
sys	0m0.264s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x30da6779
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x30da6779
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -3.3  p =1-2.7e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x30da6779
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  +5.6  p =  9.7e-5   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x30da6779
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-1)     R=  +8.9  p =  1.2e-7   suspicious       
  [Low1/32]FPF-14+6/16:(1,14-2)     R=  +8.6  p =  2.6e-7   suspicious       
  [Low1/32]FPF-14+6/16:all          R= +13.1  p =  8.4e-12    FAIL           
  [Low1/32]FPF-14+6/16:all2         R= +27.1  p =  4.8e-11   VERY SUSPICIOUS 
  ...and 128 test result(s) without anomalies


real	0m10.483s
user	0m10.232s
sys	0m0.192s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe8074b9f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe8074b9f
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xe8074b9f
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xe8074b9f
length= 512 megabytes (2^29 bytes), time= 9.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(2,14-2)     R=  +8.5  p =  3.5e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= +10.6  p =  2.1e-9    VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +16.9  p =  1.4e-7   very suspicious  
  ...and 129 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe8074b9f
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R= +20.8  p =  9.7e-19    FAIL !         
  [Low1/32]FPF-14+6/16:(1,14-1)     R= +14.3  p =  1.8e-12   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(2,14-2)     R= +13.2  p =  2.4e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(3,14-2)     R=  +6.5  p =  1.9e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= +28.5  p =  3.0e-26    FAIL !!        
  [Low1/32]FPF-14+6/16:all2         R=+171.7  p =  3.0e-62    FAIL !!!!      
  ...and 135 test result(s) without anomalies


real	0m19.532s
user	0m18.996s
sys	0m0.468s
*/
