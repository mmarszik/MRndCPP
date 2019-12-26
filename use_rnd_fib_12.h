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
/// @created on 2019-12-18 01:26:04 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 1da52c45-d183-4c0e-a911-9b0a9d322675                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib12;
/* TEST00
time ./MRndCPP 
1748401825
2901928947
3297125910
2772677448
4140836338
382762418
4611489358760660747

real	0m7.789s
user	0m7.748s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.12e+07  |2285856579|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.92664379|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.37727568|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.58603956|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.28047537|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.44323619|  PASSED  
        diehard_opso|   0|   2097152|     100|0.27854310|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.54105882|  PASSED  
         diehard_dna|   0|   2097152|     100|0.98918349|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.46019947|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.54117333|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.70977074|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.42285175|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.68412698|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.82346670|  PASSED  
        diehard_sums|   0|       100|     100|0.02189891|  PASSED  
        diehard_runs|   0|    100000|     100|0.93362479|  PASSED  
        diehard_runs|   0|    100000|     100|0.08874909|  PASSED  
       diehard_craps|   0|    200000|     100|0.90601073|  PASSED  
       diehard_craps|   0|    200000|     100|0.21562513|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.80628917|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.67118369|  PASSED  
         sts_monobit|   1|    100000|     100|0.97991389|  PASSED  
            sts_runs|   2|    100000|     100|0.81184760|  PASSED  
          sts_serial|   1|    100000|     100|0.04402322|  PASSED  
          sts_serial|   2|    100000|     100|0.72254939|  PASSED  
          sts_serial|   3|    100000|     100|0.99975350|   WEAK   
          sts_serial|   3|    100000|     100|0.79491522|  PASSED  
          sts_serial|   4|    100000|     100|0.17560366|  PASSED  
          sts_serial|   4|    100000|     100|0.11935381|  PASSED  
          sts_serial|   5|    100000|     100|0.70275474|  PASSED  
          sts_serial|   5|    100000|     100|0.38389101|  PASSED  
          sts_serial|   6|    100000|     100|0.45442715|  PASSED  
          sts_serial|   6|    100000|     100|0.12817725|  PASSED  
          sts_serial|   7|    100000|     100|0.16355129|  PASSED  
          sts_serial|   7|    100000|     100|0.80028106|  PASSED  
          sts_serial|   8|    100000|     100|0.88452952|  PASSED  
          sts_serial|   8|    100000|     100|0.58890697|  PASSED  
          sts_serial|   9|    100000|     100|0.47122488|  PASSED  
          sts_serial|   9|    100000|     100|0.41795250|  PASSED  
          sts_serial|  10|    100000|     100|0.21398408|  PASSED  
          sts_serial|  10|    100000|     100|0.05499275|  PASSED  
          sts_serial|  11|    100000|     100|0.72715396|  PASSED  
          sts_serial|  11|    100000|     100|0.30581410|  PASSED  
          sts_serial|  12|    100000|     100|0.84880365|  PASSED  
          sts_serial|  12|    100000|     100|0.32914109|  PASSED  
          sts_serial|  13|    100000|     100|0.49558640|  PASSED  
          sts_serial|  13|    100000|     100|0.23078996|  PASSED  
          sts_serial|  14|    100000|     100|0.83353918|  PASSED  
          sts_serial|  14|    100000|     100|0.29587611|  PASSED  
          sts_serial|  15|    100000|     100|0.68747501|  PASSED  
          sts_serial|  15|    100000|     100|0.64874444|  PASSED  
          sts_serial|  16|    100000|     100|0.95472623|  PASSED  
          sts_serial|  16|    100000|     100|0.14281580|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.09476113|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.27668576|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.33049791|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.49512450|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.07535614|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.64031152|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.81895267|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.21136874|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.96800592|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.44382156|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.04306983|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.93093169|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.98162068|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.43485555|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.42791720|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.23633438|  PASSED  
    rgb_permutations|   2|    100000|     100|0.03625398|  PASSED  
    rgb_permutations|   3|    100000|     100|0.37061067|  PASSED  
    rgb_permutations|   4|    100000|     100|0.89867863|  PASSED  
    rgb_permutations|   5|    100000|     100|0.97701025|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.25651190|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.82388468|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.88412039|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.19120010|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.17285441|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.59184741|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.38765161|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.80153857|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.15127163|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.61158633|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.08285735|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.36474857|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.98300556|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.29327410|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.22019018|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.91061836|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.32649972|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.84744430|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.09594509|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.99635334|   WEAK   
      rgb_lagged_sum|  20|   1000000|     100|0.18560935|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.63348607|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.48641244|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.04177570|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.21661921|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.52388737|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.19096009|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.74433307|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.69932922|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.81059811|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.96060980|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.97913479|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.08406153|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.61884161|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.56541522|  PASSED  
             dab_dct| 256|     50000|       1|0.04761828|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.77528402|  PASSED  
        dab_filltree|  32|  15000000|       1|0.68423953|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.04152948|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.52614646|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.86390221|  PASSED  

real	49m1.679s
user	45m16.476s
sys	3m36.412s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe564f6f3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe564f6f3
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xe564f6f3
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +10.1  p =  2.4e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe564f6f3
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +21.4  p =  6.4e-10   VERY SUSPICIOUS 
  [Low8/32]BCFN(2+3,13-3,T)         R= +10.6  p =  8.5e-5   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe564f6f3
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.1  p =1-2.0e-3   unusual          
  [Low8/32]BCFN(2+2,13-3,T)         R= +46.6  p =  7.8e-22    FAIL !!        
  [Low8/32]BCFN(2+3,13-3,T)         R= +11.6  p =  2.7e-5   mildly suspicious
  ...and 138 test result(s) without anomalies


real	0m20.048s
user	0m19.504s
sys	0m0.520s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3542cd84
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3542cd84
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-4,T)         R=  +9.3  p =  5.3e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3542cd84
length= 256 megabytes (2^28 bytes), time= 6.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +12.9  p =  1.3e-5   suspicious       
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3542cd84
length= 512 megabytes (2^29 bytes), time= 11.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +24.0  p =  3.8e-11    FAIL           
  ...and 131 test result(s) without anomalies


real	0m12.501s
user	0m12.240s
sys	0m0.240s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x24a2a4fc
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x24a2a4fc
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x24a2a4fc
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x24a2a4fc
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +26.9  p =  1.5e-12    FAIL           
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.6e-3   unusual          
  ...and 130 test result(s) without anomalies


real	0m10.569s
user	0m10.224s
sys	0m0.308s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x43ea94d2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x43ea94d2
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x43ea94d2
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +10.7  p =  1.3e-4   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x43ea94d2
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +21.3  p =  6.9e-10   VERY SUSPICIOUS 
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x43ea94d2
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +56.2  p =  2.1e-26    FAIL !!        
  [Low8/32]BCFN(2+3,13-3,T)         R=  +8.9  p =  5.2e-4   unusual          
  [Low1/32]FPF-14+6/16:all2         R=  +6.9  p =  3.9e-4   unusual          
  ...and 138 test result(s) without anomalies


real	0m20.170s
user	0m19.656s
sys	0m0.404s
*/
