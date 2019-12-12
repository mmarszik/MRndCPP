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
/// @created on 2019-12-09 19:36:47 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 55802526-3e41-4972-98d5-3b3cf98d3648                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin06;

/* TEST00
time ./MRndCPP 
323208208
3685989511
1474717894
3322609586
2569725805
1946063250
18446604684920938743

real	0m47.000s
user	0m46.812s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.98e+07  |1595829985|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.35827721|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.17552232|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.58446361|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.63729996|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.56380832|  PASSED  
        diehard_opso|   0|   2097152|     100|0.35318994|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.35385442|  PASSED  
         diehard_dna|   0|   2097152|     100|0.43760033|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.79534664|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.95621781|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.02307909|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.98410140|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.19876375|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.89048963|  PASSED  
        diehard_sums|   0|       100|     100|0.01419031|  PASSED  
        diehard_runs|   0|    100000|     100|0.99634551|   WEAK   
        diehard_runs|   0|    100000|     100|0.46941322|  PASSED  
       diehard_craps|   0|    200000|     100|0.85810359|  PASSED  
       diehard_craps|   0|    200000|     100|0.73074805|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.07409913|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.54227917|  PASSED  
         sts_monobit|   1|    100000|     100|0.93574879|  PASSED  
            sts_runs|   2|    100000|     100|0.45885668|  PASSED  
          sts_serial|   1|    100000|     100|0.20009681|  PASSED  
          sts_serial|   2|    100000|     100|0.99990499|   WEAK   
          sts_serial|   3|    100000|     100|0.62778643|  PASSED  
          sts_serial|   3|    100000|     100|0.54728614|  PASSED  
          sts_serial|   4|    100000|     100|0.78229084|  PASSED  
          sts_serial|   4|    100000|     100|0.99899991|   WEAK   
          sts_serial|   5|    100000|     100|0.95892889|  PASSED  
          sts_serial|   5|    100000|     100|0.80161336|  PASSED  
          sts_serial|   6|    100000|     100|0.88906419|  PASSED  
          sts_serial|   6|    100000|     100|0.46299297|  PASSED  
          sts_serial|   7|    100000|     100|0.96047485|  PASSED  
          sts_serial|   7|    100000|     100|0.88955821|  PASSED  
          sts_serial|   8|    100000|     100|0.98310498|  PASSED  
          sts_serial|   8|    100000|     100|0.52444950|  PASSED  
          sts_serial|   9|    100000|     100|0.85129814|  PASSED  
          sts_serial|   9|    100000|     100|0.74646671|  PASSED  
          sts_serial|  10|    100000|     100|0.80576171|  PASSED  
          sts_serial|  10|    100000|     100|0.85488612|  PASSED  
          sts_serial|  11|    100000|     100|0.98146140|  PASSED  
          sts_serial|  11|    100000|     100|0.68253401|  PASSED  
          sts_serial|  12|    100000|     100|0.99495522|  PASSED  
          sts_serial|  12|    100000|     100|0.93556917|  PASSED  
          sts_serial|  13|    100000|     100|0.67925791|  PASSED  
          sts_serial|  13|    100000|     100|0.53512493|  PASSED  
          sts_serial|  14|    100000|     100|0.21572253|  PASSED  
          sts_serial|  14|    100000|     100|0.75093860|  PASSED  
          sts_serial|  15|    100000|     100|0.31898378|  PASSED  
          sts_serial|  15|    100000|     100|0.82434956|  PASSED  
          sts_serial|  16|    100000|     100|0.93827725|  PASSED  
          sts_serial|  16|    100000|     100|0.79191645|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.66884057|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.63717560|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.14509609|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.62315948|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.42283134|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.13048799|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.95350095|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.08530474|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.96444893|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.79190646|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.15789742|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.07690563|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.27426872|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.40882662|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.60214470|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.85898266|  PASSED  
    rgb_permutations|   2|    100000|     100|0.81514673|  PASSED  
    rgb_permutations|   3|    100000|     100|0.21197933|  PASSED  
    rgb_permutations|   4|    100000|     100|0.52841909|  PASSED  
    rgb_permutations|   5|    100000|     100|0.35771233|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.50804594|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.75520504|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.80190037|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.54835693|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.35243944|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.86693284|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.88655913|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.95041206|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.65594823|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.04283734|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.56300314|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.00438254|   WEAK   
      rgb_lagged_sum|  12|   1000000|     100|0.79947957|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.70883117|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.29945392|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.47466205|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.57824197|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.85960660|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.76010399|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.01567499|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.25132849|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.11524847|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.43614289|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.88882318|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.69898269|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.76025603|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.78844716|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.48988441|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.15874451|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.40886641|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.58320998|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.33417438|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.65914130|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.15414321|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.74695029|  PASSED  
             dab_dct| 256|     50000|       1|0.95734583|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.13683414|  PASSED  
        dab_filltree|  32|  15000000|       1|0.68837086|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.54466898|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.42518083|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.31400623|  PASSED  

real	51m37.856s
user	48m0.672s
sys	3m29.340s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5f9fc6d7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5f9fc6d7
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5f9fc6d7
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5f9fc6d7
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5f9fc6d7
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5f9fc6d7
length= 2 gigabytes (2^31 bytes), time= 40.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5f9fc6d7
length= 4 gigabytes (2^32 bytes), time= 77.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  +4.7  p =  7.2e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5f9fc6d7
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:(1,14-0)     R=  +7.7  p =  9.6e-7   mildly suspicious
  [Low8/32]FPF-14+6/16:all          R=  +6.5  p =  1.3e-5   suspicious       
  [Low8/32]FPF-14+6/16:all2         R= +11.6  p =  3.3e-6   suspicious       
  [Low1/32]BCFN(2+1,13-3,T)         R=  +7.7  p =  1.9e-3   unusual          
  ...and 156 test result(s) without anomalies


real	1m43.897s
user	1m40.428s
sys	0m3.152s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x67575bf3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x67575bf3
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x67575bf3
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x67575bf3
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x67575bf3
length= 1 gigabyte (2^30 bytes), time= 21.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x67575bf3
length= 2 gigabytes (2^31 bytes), time= 41.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-0,T)                  R=  +7.5  p =  1.6e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x67575bf3
length= 4 gigabytes (2^32 bytes), time= 81.5 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-0,T)                  R=  +8.1  p =  7.5e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x67575bf3
length= 8 gigabytes (2^33 bytes), time= 164 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:(1,14-0)     R=  +7.0  p =  4.1e-6   unusual          
  [Low8/32]FPF-14+6/16:all          R=  +6.8  p =  6.6e-6   suspicious       
  [Low8/32]FPF-14+6/16:all2         R= +13.6  p =  4.1e-7   very suspicious  
  [Low8/32]FPF-14+6/16:cross        R=  -2.2  p =1-1.0e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin32, seed=0x67575bf3
length= 16 gigabytes (2^34 bytes), time= 326 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +15.0  p =  1.9e-13    FAIL           
  [Low8/32]FPF-14+6/16:(1,14-0)     R= +15.4  p =  7.4e-14    FAIL           
  [Low8/32]FPF-14+6/16:(2,14-0)     R=  +8.2  p =  3.6e-7   suspicious       
  [Low8/32]FPF-14+6/16:all          R= +14.9  p =  1.6e-13    FAIL           
  [Low8/32]FPF-14+6/16:all2         R= +88.9  p =  2.0e-38    FAIL !!!       
  ...and 167 test result(s) without anomalies


real	5m26.837s
user	5m17.032s
sys	0m8.900s
*/
