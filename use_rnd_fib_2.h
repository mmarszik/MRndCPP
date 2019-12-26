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
/// @created on 2019-12-08 02:58:20 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e2ae05fa-041c-4033-ba46-dfc905ce47d2                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib2;
/* TEST00
time ./MRndCPP 
1604262765
3422254557
378000469
1617572592
4148197001
84671980
4611728547103129712

real	0m6.516s
user	0m6.508s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.23e+07  | 391904349|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.66839867|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.51896075|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.97997880|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.75458819|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.74598222|  PASSED  
        diehard_opso|   0|   2097152|     100|0.54008856|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.57900165|  PASSED  
         diehard_dna|   0|   2097152|     100|0.18082816|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.72049035|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.52408870|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.31706537|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.80043278|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.99489973|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.96208395|  PASSED  
        diehard_sums|   0|       100|     100|0.10950901|  PASSED  
        diehard_runs|   0|    100000|     100|0.81010340|  PASSED  
        diehard_runs|   0|    100000|     100|0.54083146|  PASSED  
       diehard_craps|   0|    200000|     100|0.15318842|  PASSED  
       diehard_craps|   0|    200000|     100|0.67090478|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.76633030|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.92403931|  PASSED  
         sts_monobit|   1|    100000|     100|0.93245102|  PASSED  
            sts_runs|   2|    100000|     100|0.73748976|  PASSED  
          sts_serial|   1|    100000|     100|0.39191739|  PASSED  
          sts_serial|   2|    100000|     100|0.77474918|  PASSED  
          sts_serial|   3|    100000|     100|0.35558023|  PASSED  
          sts_serial|   3|    100000|     100|0.37264752|  PASSED  
          sts_serial|   4|    100000|     100|0.99925418|   WEAK   
          sts_serial|   4|    100000|     100|0.55766225|  PASSED  
          sts_serial|   5|    100000|     100|0.33802835|  PASSED  
          sts_serial|   5|    100000|     100|0.64941228|  PASSED  
          sts_serial|   6|    100000|     100|0.01888937|  PASSED  
          sts_serial|   6|    100000|     100|0.00942249|  PASSED  
          sts_serial|   7|    100000|     100|0.46203559|  PASSED  
          sts_serial|   7|    100000|     100|0.96082404|  PASSED  
          sts_serial|   8|    100000|     100|0.06092883|  PASSED  
          sts_serial|   8|    100000|     100|0.03611576|  PASSED  
          sts_serial|   9|    100000|     100|0.17476229|  PASSED  
          sts_serial|   9|    100000|     100|0.52961981|  PASSED  
          sts_serial|  10|    100000|     100|0.02885694|  PASSED  
          sts_serial|  10|    100000|     100|0.09346886|  PASSED  
          sts_serial|  11|    100000|     100|0.00866851|  PASSED  
          sts_serial|  11|    100000|     100|0.76568184|  PASSED  
          sts_serial|  12|    100000|     100|0.11383484|  PASSED  
          sts_serial|  12|    100000|     100|0.89322658|  PASSED  
          sts_serial|  13|    100000|     100|0.88379444|  PASSED  
          sts_serial|  13|    100000|     100|0.04104291|  PASSED  
          sts_serial|  14|    100000|     100|0.99991288|   WEAK   
          sts_serial|  14|    100000|     100|0.88962072|  PASSED  
          sts_serial|  15|    100000|     100|0.85071535|  PASSED  
          sts_serial|  15|    100000|     100|0.24980717|  PASSED  
          sts_serial|  16|    100000|     100|0.13314041|  PASSED  
          sts_serial|  16|    100000|     100|0.63946135|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.56576972|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.30339686|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.93288012|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.54788585|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.62167004|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.20252699|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.51371659|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.36182979|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.28391863|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.77915925|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.91025288|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.86858207|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.58417454|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.12230063|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.52402421|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.00419266|   WEAK   
    rgb_permutations|   2|    100000|     100|0.63360353|  PASSED  
    rgb_permutations|   3|    100000|     100|0.17615162|  PASSED  
    rgb_permutations|   4|    100000|     100|0.99797896|   WEAK   
    rgb_permutations|   5|    100000|     100|0.23249961|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.36023823|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.23144638|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.75062656|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.79659162|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.76883914|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.92389895|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.51792972|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.53548270|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.85566990|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.88340524|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.51506155|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.91663382|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.61347047|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.35911288|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.84107921|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.24289547|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.05192548|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.93502842|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.90584989|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.78172805|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.25913218|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.42351452|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.50721337|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.42545520|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.70107076|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.09434033|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.44154882|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.70226638|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.16180558|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.65659313|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.94151263|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.54256896|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.74278590|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.15681251|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.00465911|   WEAK   
             dab_dct| 256|     50000|       1|0.95172091|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.35334234|  PASSED  
        dab_filltree|  32|  15000000|       1|0.46252451|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.65757905|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.62204776|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.77002542|  PASSED  

real	50m3.047s
user	46m16.512s
sys	3m40.316s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xeebad455
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xeebad455
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xeebad455
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xeebad455
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+4,13-4,T)         R=  -7.1  p =1-3.7e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xeebad455
length= 1 gigabyte (2^30 bytes), time= 19.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xeebad455
length= 2 gigabytes (2^31 bytes), time= 38.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xeebad455
length= 4 gigabytes (2^32 bytes), time= 73.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xeebad455
length= 5.500 gigabytes (2^32.459 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.598s
user	1m40.016s
sys	0m2.256s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf3058c6e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf3058c6e
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf3058c6e
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf3058c6e
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf3058c6e
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf3058c6e
length= 2 gigabytes (2^31 bytes), time= 39.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf3058c6e
length= 4 gigabytes (2^32 bytes), time= 73.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R=  -6.9  p =1-1.5e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf3058c6e
length= 5.500 gigabytes (2^32.459 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m42.011s
user	1m39.500s
sys	0m2.280s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x584bf9d5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x584bf9d5
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x584bf9d5
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -4.5  p =1-6.4e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x584bf9d5
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x584bf9d5
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x584bf9d5
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x584bf9d5
length= 4 gigabytes (2^32 bytes), time= 73.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x584bf9d5
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.957s
user	1m42.504s
sys	0m2.236s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x54fbd6c2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x54fbd6c2
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x54fbd6c2
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x54fbd6c2
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x54fbd6c2
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x54fbd6c2
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x54fbd6c2
length= 4 gigabytes (2^32 bytes), time= 72.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R=  +7.8  p =  1.8e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x54fbd6c2
length= 8 gigabytes (2^33 bytes), time= 149 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R= +10.2  p =  1.3e-4   mildly suspicious
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x54fbd6c2
length= 16 gigabytes (2^34 bytes), time= 304 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-2,T)         R=  +8.3  p =  7.6e-4   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0x54fbd6c2
length= 32 gigabytes (2^35 bytes), time= 610 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-1,T)         R= +12.7  p =  2.5e-6   suspicious       
  [Low1/32]BCFN(2+2,13-1,T)         R= +14.1  p =  4.6e-7   very suspicious  
  ...and 178 test result(s) without anomalies

rng=RNG_stdin32, seed=0x54fbd6c2
length= 64 gigabytes (2^36 bytes), time= 1234 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-0,T)         R= +31.3  p =  2.9e-16    FAIL !         
  [Low1/32]BCFN(2+2,13-1,T)         R= +29.2  p =  3.6e-15    FAIL !         
  ...and 187 test result(s) without anomalies


real	20m33.929s
user	20m5.604s
sys	0m25.392s
*/
