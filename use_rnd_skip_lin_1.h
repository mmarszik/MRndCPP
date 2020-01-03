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
/// @created on 2019-12-08 03:02:32 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 787c4945-7336-49a5-b536-8364bf0b4a8f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_skip_lin.h"

using TRnd = RndSkipLin1;
/* TEST00
time ./MRndCPP 
1427133193
3301682133
3892378567
2791253470
3216860243
2500568121
18446668791683258421

real	1m9.138s
user	1m9.076s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.10e+07  | 942469922|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.63813423|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.16240628|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.67151629|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.99739637|   WEAK   
   diehard_bitstream|   0|   2097152|     100|0.48049394|  PASSED  
        diehard_opso|   0|   2097152|     100|0.22180289|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.85847560|  PASSED  
         diehard_dna|   0|   2097152|     100|0.81596940|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.26202757|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.84277604|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.87830186|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.08078859|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.35626210|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.78572218|  PASSED  
        diehard_sums|   0|       100|     100|0.28441989|  PASSED  
        diehard_runs|   0|    100000|     100|0.90391880|  PASSED  
        diehard_runs|   0|    100000|     100|0.97791810|  PASSED  
       diehard_craps|   0|    200000|     100|0.01794045|  PASSED  
       diehard_craps|   0|    200000|     100|0.98027915|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.64877453|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.84815504|  PASSED  
         sts_monobit|   1|    100000|     100|0.96897863|  PASSED  
            sts_runs|   2|    100000|     100|0.34222055|  PASSED  
          sts_serial|   1|    100000|     100|0.16468569|  PASSED  
          sts_serial|   2|    100000|     100|0.82306954|  PASSED  
          sts_serial|   3|    100000|     100|0.11919046|  PASSED  
          sts_serial|   3|    100000|     100|0.35368780|  PASSED  
          sts_serial|   4|    100000|     100|0.54253443|  PASSED  
          sts_serial|   4|    100000|     100|0.71732996|  PASSED  
          sts_serial|   5|    100000|     100|0.42398566|  PASSED  
          sts_serial|   5|    100000|     100|0.83298712|  PASSED  
          sts_serial|   6|    100000|     100|0.92427310|  PASSED  
          sts_serial|   6|    100000|     100|0.57293685|  PASSED  
          sts_serial|   7|    100000|     100|0.76908692|  PASSED  
          sts_serial|   7|    100000|     100|0.56939508|  PASSED  
          sts_serial|   8|    100000|     100|0.96807271|  PASSED  
          sts_serial|   8|    100000|     100|0.80809437|  PASSED  
          sts_serial|   9|    100000|     100|0.77426259|  PASSED  
          sts_serial|   9|    100000|     100|0.60298093|  PASSED  
          sts_serial|  10|    100000|     100|0.45001057|  PASSED  
          sts_serial|  10|    100000|     100|0.91396041|  PASSED  
          sts_serial|  11|    100000|     100|0.98752698|  PASSED  
          sts_serial|  11|    100000|     100|0.99966337|   WEAK   
          sts_serial|  12|    100000|     100|0.61351199|  PASSED  
          sts_serial|  12|    100000|     100|0.94582566|  PASSED  
          sts_serial|  13|    100000|     100|0.35825001|  PASSED  
          sts_serial|  13|    100000|     100|0.17207299|  PASSED  
          sts_serial|  14|    100000|     100|0.82476745|  PASSED  
          sts_serial|  14|    100000|     100|0.99742164|   WEAK   
          sts_serial|  15|    100000|     100|0.08800492|  PASSED  
          sts_serial|  15|    100000|     100|0.50977596|  PASSED  
          sts_serial|  16|    100000|     100|0.02447819|  PASSED  
          sts_serial|  16|    100000|     100|0.14294298|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.93305413|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.94883135|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.97338845|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.61121206|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.49831998|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.48605667|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.22646142|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.48110380|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.99914820|   WEAK   
         rgb_bitdist|  10|    100000|     100|0.93667064|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.59102361|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.81269258|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.61361415|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.50349328|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.88800407|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.01164266|  PASSED  
    rgb_permutations|   2|    100000|     100|0.75869959|  PASSED  
    rgb_permutations|   3|    100000|     100|0.70893447|  PASSED  
    rgb_permutations|   4|    100000|     100|0.84009521|  PASSED  
    rgb_permutations|   5|    100000|     100|0.05402935|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.81843629|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.85017698|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.03559378|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.95663254|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.35277677|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.03727510|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.80310215|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.37493481|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.72645762|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.81425280|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.56061020|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.18316803|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.60039328|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.00883949|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.88001696|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.35748081|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.48002185|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.91924645|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.79204142|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.29602477|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.39168765|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.81660321|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.75691222|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.75229444|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.90396692|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.14165502|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.33404079|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.83873554|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.12550507|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.70761185|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.05926031|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.03671975|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.25863881|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.69226672|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.95267743|  PASSED  
             dab_dct| 256|     50000|       1|0.60747738|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.54414556|  PASSED  
        dab_filltree|  32|  15000000|       1|0.92572466|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.93241744|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.16752919|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.13175833|  PASSED  

real	50m29.998s
user	46m58.784s
sys	3m28.496s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2c45d5fd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2c45d5fd
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2c45d5fd
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2c45d5fd
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2c45d5fd
length= 1 gigabyte (2^30 bytes), time= 19.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2c45d5fd
length= 2 gigabytes (2^31 bytes), time= 38.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2c45d5fd
length= 4 gigabytes (2^32 bytes), time= 73.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2c45d5fd
length= 5.500 gigabytes (2^32.459 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m42.050s
user	1m39.100s
sys	0m2.864s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6ce15b0a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6ce15b0a
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.8e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6ce15b0a
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6ce15b0a
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6ce15b0a
length= 1 gigabyte (2^30 bytes), time= 19.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x6ce15b0a
length= 2 gigabytes (2^31 bytes), time= 38.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6ce15b0a
length= 4 gigabytes (2^32 bytes), time= 76.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x6ce15b0a
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.677s
user	1m41.556s
sys	0m1.996s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x528358f5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x528358f5
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x528358f5
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x528358f5
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x528358f5
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x528358f5
length= 2 gigabytes (2^31 bytes), time= 40.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.3  p =1-4.8e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x528358f5
length= 4 gigabytes (2^32 bytes), time= 78.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-3,T)         R=  +8.7  p =  6.3e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x528358f5
length= 5.250 gigabytes (2^32.392 bytes), time= 105 seconds
  no anomalies in 160 test result(s)


real	1m45.574s
user	1m43.004s
sys	0m2.468s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9a828d87
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9a828d87
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9a828d87
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9a828d87
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x9a828d87
length= 1 gigabyte (2^30 bytes), time= 24.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9a828d87
length= 2 gigabytes (2^31 bytes), time= 46.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x9a828d87
length= 4 gigabytes (2^32 bytes), time= 90.6 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.1  p =  9.0e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9a828d87
length= 8 gigabytes (2^33 bytes), time= 187 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x9a828d87
length= 16 gigabytes (2^34 bytes), time= 389 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.4  p =1-8.0e-4   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9a828d87
length= 32 gigabytes (2^35 bytes), time= 786 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.6  p =1-5.2e-4   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9a828d87
length= 64 gigabytes (2^36 bytes), time= 1594 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R= -11.6  p =1-5.4e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +14.7  p =  1.5e-7   very suspicious  
  ...and 187 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9a828d87
length= 128 gigabytes (2^37 bytes), time= 3199 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.5  p =  9.7e-4   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -9.7  p =1-1.1e-8   very suspicious  
  [Low1/32]FPF-14+6/16:(1,14-0)     R= -10.7  p =1-1.4e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(2,14-0)     R= -10.0  p =1-7.2e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(3,14-0)     R=  -7.3  p =1-2.1e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:(4,14-0)     R=  -8.1  p =1-3.7e-7   suspicious       
  [Low1/32]FPF-14+6/16:(5,14-0)     R=  -6.7  p =1-7.3e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= -20.2  p =1-2.2e-19    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +70.5  p =  9.4e-31    FAIL !!!       
  ...and 187 test result(s) without anomalies


real	53m19.229s
user	52m16.424s
sys	0m59.232s
*/
