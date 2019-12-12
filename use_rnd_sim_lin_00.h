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
18446575916242129522

real	0m13.711s
user	0m13.644s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.31e+07  |3722560814|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.89925936|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.98136870|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.55014348|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.19723474|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.24730007|  PASSED  
        diehard_opso|   0|   2097152|     100|0.19096874|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.81164372|  PASSED  
         diehard_dna|   0|   2097152|     100|0.42993960|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.23671403|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.41245779|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.17987567|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.74244376|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.51525434|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.53268446|  PASSED  
        diehard_sums|   0|       100|     100|0.43366816|  PASSED  
        diehard_runs|   0|    100000|     100|0.94737775|  PASSED  
        diehard_runs|   0|    100000|     100|0.96814076|  PASSED  
       diehard_craps|   0|    200000|     100|0.93288671|  PASSED  
       diehard_craps|   0|    200000|     100|0.80653924|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.49551231|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.02673244|  PASSED  
         sts_monobit|   1|    100000|     100|0.64746406|  PASSED  
            sts_runs|   2|    100000|     100|0.39490628|  PASSED  
          sts_serial|   1|    100000|     100|0.85351418|  PASSED  
          sts_serial|   2|    100000|     100|0.32828765|  PASSED  
          sts_serial|   3|    100000|     100|0.40510411|  PASSED  
          sts_serial|   3|    100000|     100|0.07252920|  PASSED  
          sts_serial|   4|    100000|     100|0.09066204|  PASSED  
          sts_serial|   4|    100000|     100|0.10829210|  PASSED  
          sts_serial|   5|    100000|     100|0.05818872|  PASSED  
          sts_serial|   5|    100000|     100|0.03600905|  PASSED  
          sts_serial|   6|    100000|     100|0.09748192|  PASSED  
          sts_serial|   6|    100000|     100|0.87393657|  PASSED  
          sts_serial|   7|    100000|     100|0.15338108|  PASSED  
          sts_serial|   7|    100000|     100|0.92719638|  PASSED  
          sts_serial|   8|    100000|     100|0.25080359|  PASSED  
          sts_serial|   8|    100000|     100|0.09806878|  PASSED  
          sts_serial|   9|    100000|     100|0.50705228|  PASSED  
          sts_serial|   9|    100000|     100|0.60425661|  PASSED  
          sts_serial|  10|    100000|     100|0.68709058|  PASSED  
          sts_serial|  10|    100000|     100|0.24893564|  PASSED  
          sts_serial|  11|    100000|     100|0.69318207|  PASSED  
          sts_serial|  11|    100000|     100|0.93357136|  PASSED  
          sts_serial|  12|    100000|     100|0.95669989|  PASSED  
          sts_serial|  12|    100000|     100|0.99043496|  PASSED  
          sts_serial|  13|    100000|     100|0.09388105|  PASSED  
          sts_serial|  13|    100000|     100|0.33350789|  PASSED  
          sts_serial|  14|    100000|     100|0.00777488|  PASSED  
          sts_serial|  14|    100000|     100|0.00111895|   WEAK   
          sts_serial|  15|    100000|     100|0.16954718|  PASSED  
          sts_serial|  15|    100000|     100|0.83369522|  PASSED  
          sts_serial|  16|    100000|     100|0.88307862|  PASSED  
          sts_serial|  16|    100000|     100|0.41192506|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.97461878|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.77857265|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.59202544|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.91436383|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.20560693|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.59897474|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.53569869|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.78461394|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.83630498|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.04284302|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.94755557|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.81775441|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.21121915|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.23315891|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.20684801|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.00488521|   WEAK   
    rgb_permutations|   2|    100000|     100|0.55344158|  PASSED  
    rgb_permutations|   3|    100000|     100|0.94667592|  PASSED  
    rgb_permutations|   4|    100000|     100|0.64412123|  PASSED  
    rgb_permutations|   5|    100000|     100|0.66144216|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.15036675|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.95325941|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.70396585|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.43033670|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.99560718|   WEAK   
      rgb_lagged_sum|   5|   1000000|     100|0.58327250|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.43736991|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.68137022|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.08319029|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.71988102|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.85546854|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.52144134|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.08523477|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.96897086|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.44633722|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.60220532|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.58372359|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.43378004|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.47871186|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.22448375|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.99092285|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.18593223|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.79006357|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.83894533|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.64066740|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.39125924|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.37516389|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.87145734|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.71260480|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.08075493|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.79117911|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.61445141|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.15904617|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.56129870|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.86064146|  PASSED  
             dab_dct| 256|     50000|       1|0.95336226|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.42534007|  PASSED  
        dab_filltree|  32|  15000000|       1|0.00846036|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.44720008|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.11338622|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.05529967|  PASSED  

real	51m43.369s
user	47m59.584s
sys	3m34.088s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf44d0e99
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf44d0e99
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf44d0e99
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.4  p =1-2.7e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf44d0e99
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf44d0e99
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.6  p =  4.4e-3   unusual          
  [Low1/32]FPF-14+6/16:all          R=  -4.1  p =1-1.4e-3   unusual          
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf44d0e99
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.8  p =1-1.5e-3   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -8.6  p =1-1.2e-7   suspicious       
  [Low1/32]FPF-14+6/16:all          R=  -8.8  p =1-3.8e-8   very suspicious  
  [Low1/32]FPF-14+6/16:all2         R= +13.5  p =  1.3e-6   suspicious       
  ...and 144 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf44d0e99
length= 4 gigabytes (2^32 bytes), time= 71.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +7.1  p =  8.8e-4   mildly suspicious
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -12.1  p =1-8.1e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R=  -7.2  p =1-2.3e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -8.2  p =1-3.0e-7   suspicious       
  [Low1/32]FPF-14+6/16:all          R= -16.6  p =1-7.2e-16    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +49.5  p =  3.7e-20    FAIL !!        
  ...and 150 test result(s) without anomalies


real	1m12.050s
user	1m10.076s
sys	0m1.704s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdce3599c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdce3599c
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xdce3599c
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xdce3599c
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+10,13-9,T)        R= +18.0  p =  3.6e-5   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdce3599c
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xdce3599c
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -7.0  p =1-2.2e-6   suspicious       
  [Low1/32]FPF-14+6/16:all2         R=  +7.2  p =  3.0e-4   unusual          
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdce3599c
length= 4 gigabytes (2^32 bytes), time= 75.1 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +9.9  p =  4.2e-5   suspicious       
  Gap-16:A                          R=  +6.4  p =  1.9e-4   mildly suspicious
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -12.1  p =1-8.2e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -6.9  p =1-4.6e-6   unusual          
  [Low1/32]FPF-14+6/16:(3,14-1)     R=  -7.9  p =1-2.0e-7   suspicious       
  [Low1/32]FPF-14+6/16:all          R= -17.2  p =1-1.8e-16    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +53.1  p =  1.7e-21    FAIL !!        
  ...and 149 test result(s) without anomalies


real	1m15.801s
user	1m14.036s
sys	0m1.500s
*/
