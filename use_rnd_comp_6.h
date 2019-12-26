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
/// @created on 2019-12-08 02:56:59 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 05797b04-8611-4fbb-b369-4396d8dd65c0                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib2a, RndFib3a, 9 >;
/* TEST00
time ./MRndCPP 
1871541365
3259764588
258764547
23779551
2346585856
1841442965
4611687232714178183

real	0m13.418s
user	0m13.396s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.85e+07  |3910109516|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.34574346|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.74346039|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.92588160|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.29966619|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.33884649|  PASSED  
        diehard_opso|   0|   2097152|     100|0.37868543|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.99063696|  PASSED  
         diehard_dna|   0|   2097152|     100|0.13272519|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.93616312|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.97399315|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.28871500|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.94779284|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.81283225|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.97955409|  PASSED  
        diehard_sums|   0|       100|     100|0.11467776|  PASSED  
        diehard_runs|   0|    100000|     100|0.47390653|  PASSED  
        diehard_runs|   0|    100000|     100|0.47072404|  PASSED  
       diehard_craps|   0|    200000|     100|0.99064341|  PASSED  
       diehard_craps|   0|    200000|     100|0.85801698|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.28770758|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.15366380|  PASSED  
         sts_monobit|   1|    100000|     100|0.72163991|  PASSED  
            sts_runs|   2|    100000|     100|0.91462630|  PASSED  
          sts_serial|   1|    100000|     100|0.53443439|  PASSED  
          sts_serial|   2|    100000|     100|0.65777403|  PASSED  
          sts_serial|   3|    100000|     100|0.80676855|  PASSED  
          sts_serial|   3|    100000|     100|0.67075937|  PASSED  
          sts_serial|   4|    100000|     100|0.21605929|  PASSED  
          sts_serial|   4|    100000|     100|0.50382890|  PASSED  
          sts_serial|   5|    100000|     100|0.26229273|  PASSED  
          sts_serial|   5|    100000|     100|0.74510242|  PASSED  
          sts_serial|   6|    100000|     100|0.86905267|  PASSED  
          sts_serial|   6|    100000|     100|0.37708692|  PASSED  
          sts_serial|   7|    100000|     100|0.61941778|  PASSED  
          sts_serial|   7|    100000|     100|0.89512809|  PASSED  
          sts_serial|   8|    100000|     100|0.85094077|  PASSED  
          sts_serial|   8|    100000|     100|0.81331173|  PASSED  
          sts_serial|   9|    100000|     100|0.94044179|  PASSED  
          sts_serial|   9|    100000|     100|0.89536703|  PASSED  
          sts_serial|  10|    100000|     100|0.73415783|  PASSED  
          sts_serial|  10|    100000|     100|0.91032361|  PASSED  
          sts_serial|  11|    100000|     100|0.88487583|  PASSED  
          sts_serial|  11|    100000|     100|0.61407560|  PASSED  
          sts_serial|  12|    100000|     100|0.95059218|  PASSED  
          sts_serial|  12|    100000|     100|0.90493254|  PASSED  
          sts_serial|  13|    100000|     100|0.68504070|  PASSED  
          sts_serial|  13|    100000|     100|0.78390460|  PASSED  
          sts_serial|  14|    100000|     100|0.68960030|  PASSED  
          sts_serial|  14|    100000|     100|0.99767912|   WEAK   
          sts_serial|  15|    100000|     100|0.63886887|  PASSED  
          sts_serial|  15|    100000|     100|0.69297967|  PASSED  
          sts_serial|  16|    100000|     100|0.96775174|  PASSED  
          sts_serial|  16|    100000|     100|0.96465984|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.44457387|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.56447490|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.30342836|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.38757230|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.86870306|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.50622913|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.94339529|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.46567746|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.49983093|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.71474575|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.82480173|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.91992576|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.65490015|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.22494726|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.22822179|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.28948769|  PASSED  
    rgb_permutations|   2|    100000|     100|0.89575589|  PASSED  
    rgb_permutations|   3|    100000|     100|0.99781098|   WEAK   
    rgb_permutations|   4|    100000|     100|0.07713121|  PASSED  
    rgb_permutations|   5|    100000|     100|0.76692299|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.16269307|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.35425036|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.28265456|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.98361766|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.08287187|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.74852843|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.51401119|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.09866451|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.31913538|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.44721961|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.85014451|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.43085557|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.25262279|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.36495250|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.55345915|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.32759038|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.58256341|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.99991425|   WEAK   
      rgb_lagged_sum|  18|   1000000|     100|0.92303116|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.65876341|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.50055528|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.75955730|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.84100851|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.78815051|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.22008973|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.62536119|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.66483501|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.30596352|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.66978217|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.15327696|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.29352231|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.35819857|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.90025534|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.22011631|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.18593347|  PASSED  
             dab_dct| 256|     50000|       1|0.42527183|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.59266724|  PASSED  
        dab_filltree|  32|  15000000|       1|0.21128344|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.72140129|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.39103733|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.84787997|  PASSED  

real	52m13.679s
user	48m30.120s
sys	3m35.780s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2be50f14
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2be50f14
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2be50f14
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2be50f14
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2be50f14
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2be50f14
length= 2 gigabytes (2^31 bytes), time= 39.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2be50f14
length= 4 gigabytes (2^32 bytes), time= 77.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2be50f14
length= 5.250 gigabytes (2^32.392 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.360s
user	1m40.652s
sys	0m3.352s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5e534e71
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5e534e71
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=  -6.6  p =1-1.5e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5e534e71
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.2  p = 0.011     unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5e534e71
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5e534e71
length= 1 gigabyte (2^30 bytes), time= 20.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5e534e71
length= 2 gigabytes (2^31 bytes), time= 39.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5e534e71
length= 4 gigabytes (2^32 bytes), time= 76.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+5,13-5,T)         R= +10.4  p =  3.0e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5e534e71
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R=  +9.6  p =  2.5e-4   unusual          
  ...and 159 test result(s) without anomalies


real	1m42.340s
user	1m38.760s
sys	0m3.284s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2085b7b0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2085b7b0
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2085b7b0
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2085b7b0
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2085b7b0
length= 1 gigabyte (2^30 bytes), time= 20.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  -6.5  p =1-2.8e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2085b7b0
length= 2 gigabytes (2^31 bytes), time= 39.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-4,T)         R=  +9.1  p =  6.2e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2085b7b0
length= 4 gigabytes (2^32 bytes), time= 79.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R=  +9.2  p =  3.8e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2085b7b0
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R= +10.2  p =  1.2e-4   mildly suspicious
  [Low1/32]BCFN(2+6,13-5,T)         R= +13.1  p =  2.6e-5   unusual          
  ...and 157 test result(s) without anomalies


real	1m41.341s
user	1m38.000s
sys	0m3.068s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1328f0c6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1328f0c6
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x1328f0c6
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x1328f0c6
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x1328f0c6
length= 1 gigabyte (2^30 bytes), time= 20.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x1328f0c6
length= 2 gigabytes (2^31 bytes), time= 39.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x1328f0c6
length= 4 gigabytes (2^32 bytes), time= 77.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R=  +8.5  p =  8.5e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1328f0c6
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R= +16.2  p =  1.7e-7   very suspicious  
  [Low1/32]BCFN(2+3,13-3,T)         R= +12.7  p =  8.8e-6   mildly suspicious
  ...and 163 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1328f0c6
length= 16 gigabytes (2^34 bytes), time= 325 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  -4.8  p =1-3.0e-4   unusual          
  [Low1/32]BCFN(2+2,13-2,T)         R= +22.0  p =  7.6e-11   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+3,13-2,T)         R= +14.6  p =  4.9e-7   very suspicious  
  [Low1/32]BCFN(2+6,13-4,T)         R= +11.2  p =  7.9e-5   unusual          
  ...and 168 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1328f0c6
length= 32 gigabytes (2^35 bytes), time= 652 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-1,T)         R= +12.8  p =  2.3e-6   suspicious       
  [Low1/32]BCFN(2+2,13-1,T)         R= +31.8  p =  1.4e-16    FAIL !         
  [Low1/32]BCFN(2+3,13-1,T)         R= +18.5  p =  2.1e-9    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+4,13-2,T)         R= +14.5  p =  5.3e-7   suspicious       
  [Low1/32]BCFN(2+5,13-3,T)         R= +15.0  p =  6.5e-7   suspicious       
  [Low1/32]BCFN(2+6,13-3,T)         R= +22.3  p =  2.2e-10   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+7,13-4,T)         R= +16.9  p =  2.5e-7   suspicious       
  ...and 173 test result(s) without anomalies


real	10m52.845s
user	10m32.152s
sys	0m18.752s
*/
