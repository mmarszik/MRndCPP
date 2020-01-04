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
time ./MRndCPP 10 
1062339175
1857199017
2295839526
2809988542
22956491
3565999184
4216451073
4209978137
3776636362
2242267147
6633772557753845308

real	0m1.777s
user	0m1.776s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.10e+07  |2524935704|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.97445397|  PASSED  

real	0m22.005s
user	0m22.300s
sys	0m0.618s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xdd37ff98
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xdd37ff98
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.1  p =1-5.7e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xdd37ff98
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xdd37ff98
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xdd37ff98
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xdd37ff98
length= 1.500 gigabytes (2^30.585 bytes), time= 31.8 seconds
  no anomalies in 187 test result(s)


real	0m32.648s
user	0m32.417s
sys	0m0.988s
*/
/* TEST00
time ./MRndCPP 10 
1062339175
1857199017
2295839526
2809988542
22956491
3565999184
4216451073
4209978137
3776636362
2242267147
6633772557753845308

real	0m1.821s
user	0m1.817s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.53e+07  |3234997848|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.56502594|  PASSED  

real	0m21.933s
user	0m22.222s
sys	0m0.677s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x97aefeff
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x97aefeff
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.6  p =1-3.2e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x97aefeff
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.9  p =1-1.7e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x97aefeff
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x97aefeff
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x97aefeff
length= 2 gigabytes (2^31 bytes), time= 42.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x97aefeff
length= 4 gigabytes (2^32 bytes), time= 81.2 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x97aefeff
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x97aefeff
length= 15.250 gigabytes (2^33.931 bytes), time= 302 seconds
  no anomalies in 226 test result(s)


real	5m2.914s
user	5m1.201s
sys	0m9.596s
*/
/* TEST00
time ./MRndCPP 12 
1062339175
1857199017
2295839526
2809988542
22956491
3565999184
4216451073
4209978137
3776636362
2242267147
9979219548465350802

real	0m7.178s
user	0m7.172s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.21e+07  | 665037579|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.91552674|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.26758307|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.26472587|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.75539331|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.78656566|  PASSED  
        diehard_opso|   0|   2097152|     100|0.33369360|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.87292006|  PASSED  
         diehard_dna|   0|   2097152|     100|0.49732602|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.58732779|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.09601479|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.18735442|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.47662282|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.81490949|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.78139004|  PASSED  
        diehard_sums|   0|       100|     100|0.67336975|  PASSED  
        diehard_runs|   0|    100000|     100|0.40646121|  PASSED  
        diehard_runs|   0|    100000|     100|0.54260137|  PASSED  
       diehard_craps|   0|    200000|     100|0.97709350|  PASSED  
       diehard_craps|   0|    200000|     100|0.47786156|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.73072920|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.66380877|  PASSED  
         sts_monobit|   1|    100000|     100|0.51016024|  PASSED  
            sts_runs|   2|    100000|     100|0.11149491|  PASSED  
          sts_serial|   1|    100000|     100|0.05351949|  PASSED  
          sts_serial|   2|    100000|     100|0.31793365|  PASSED  
          sts_serial|   3|    100000|     100|0.87299385|  PASSED  
          sts_serial|   3|    100000|     100|0.60073108|  PASSED  
          sts_serial|   4|    100000|     100|0.85311346|  PASSED  
          sts_serial|   4|    100000|     100|0.99205350|  PASSED  
          sts_serial|   5|    100000|     100|0.96119034|  PASSED  
          sts_serial|   5|    100000|     100|0.52433436|  PASSED  
          sts_serial|   6|    100000|     100|0.08615247|  PASSED  
          sts_serial|   6|    100000|     100|0.36030545|  PASSED  
          sts_serial|   7|    100000|     100|0.56537461|  PASSED  
          sts_serial|   7|    100000|     100|0.97330540|  PASSED  
          sts_serial|   8|    100000|     100|0.70811668|  PASSED  
          sts_serial|   8|    100000|     100|0.45332738|  PASSED  
          sts_serial|   9|    100000|     100|0.76088506|  PASSED  
          sts_serial|   9|    100000|     100|0.83329701|  PASSED  
          sts_serial|  10|    100000|     100|0.92037637|  PASSED  
          sts_serial|  10|    100000|     100|0.80178898|  PASSED  
          sts_serial|  11|    100000|     100|0.97287350|  PASSED  
          sts_serial|  11|    100000|     100|0.79361001|  PASSED  
          sts_serial|  12|    100000|     100|0.23759561|  PASSED  
          sts_serial|  12|    100000|     100|0.95213448|  PASSED  
          sts_serial|  13|    100000|     100|0.25759434|  PASSED  
          sts_serial|  13|    100000|     100|0.09239776|  PASSED  
          sts_serial|  14|    100000|     100|0.11265219|  PASSED  
          sts_serial|  14|    100000|     100|0.76366025|  PASSED  
          sts_serial|  15|    100000|     100|0.48495949|  PASSED  
          sts_serial|  15|    100000|     100|0.89066592|  PASSED  
          sts_serial|  16|    100000|     100|0.87752161|  PASSED  
          sts_serial|  16|    100000|     100|0.85220391|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.43530126|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.61634037|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.58098407|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.53948069|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.48727461|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.83155380|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.74587139|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.58854725|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.07599480|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.82617993|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.72467464|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.36559355|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.09094089|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.57470024|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.95293521|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.99544044|   WEAK   
    rgb_permutations|   2|    100000|     100|0.83741358|  PASSED  
    rgb_permutations|   3|    100000|     100|0.54369068|  PASSED  
    rgb_permutations|   4|    100000|     100|0.31796364|  PASSED  
    rgb_permutations|   5|    100000|     100|0.17197935|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.53642784|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.97501880|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.64955959|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.58513704|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.27671924|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.68471788|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.98298634|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.20753534|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.74741564|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.46219904|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.99293060|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.73570649|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.37931294|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.98811634|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.65553211|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.99990050|   WEAK   
      rgb_lagged_sum|  16|   1000000|     100|0.06589295|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.99907051|   WEAK   
      rgb_lagged_sum|  18|   1000000|     100|0.37188256|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.90408227|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.32948991|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.14836171|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.98872833|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.40870889|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.48375370|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.10227963|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.12463636|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.99702389|   WEAK   
      rgb_lagged_sum|  28|   1000000|     100|0.87606071|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.48286302|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.67633067|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.40902294|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.85232618|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.69296296|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.19488045|  PASSED  
             dab_dct| 256|     50000|       1|0.50847803|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.45106674|  PASSED  
        dab_filltree|  32|  15000000|       1|0.23655238|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.93449666|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.31034344|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.97859733|  PASSED  

real	36m39.343s
user	38m19.270s
sys	3m59.775s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x91c0e177
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x91c0e177
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x91c0e177
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x91c0e177
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.9  p =1-8.4e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x91c0e177
length= 1 gigabyte (2^30 bytes), time= 21.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x91c0e177
length= 2 gigabytes (2^31 bytes), time= 41.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x91c0e177
length= 4 gigabytes (2^32 bytes), time= 80.6 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x91c0e177
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  no anomalies in 207 test result(s)


real	1m41.321s
user	1m40.571s
sys	0m3.380s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd4904084
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd4904084
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd4904084
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xd4904084
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xd4904084
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xd4904084
length= 2 gigabytes (2^31 bytes), time= 41.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd4904084
length= 4 gigabytes (2^32 bytes), time= 80.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +7.3  p =  4.9e-4   mildly suspicious
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0xd4904084
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.4  p =  5.8e-3   unusual          
  ...and 206 test result(s) without anomalies


real	1m41.379s
user	1m40.848s
sys	0m3.134s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd1872f1b
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd1872f1b
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd1872f1b
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.0  p =1-6.0e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xd1872f1b
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xd1872f1b
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xd1872f1b
length= 2 gigabytes (2^31 bytes), time= 41.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd1872f1b
length= 4 gigabytes (2^32 bytes), time= 80.6 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xd1872f1b
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  no anomalies in 207 test result(s)


real	1m41.211s
user	1m40.566s
sys	0m3.265s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x26ef1c3f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x26ef1c3f
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x26ef1c3f
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +7.0  p =  7.0e-4   mildly suspicious
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x26ef1c3f
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x26ef1c3f
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x26ef1c3f
length= 2 gigabytes (2^31 bytes), time= 42.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x26ef1c3f
length= 4 gigabytes (2^32 bytes), time= 80.6 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x26ef1c3f
length= 8 gigabytes (2^33 bytes), time= 159 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x26ef1c3f
length= 16 gigabytes (2^34 bytes), time= 315 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x26ef1c3f
length= 32 gigabytes (2^35 bytes), time= 619 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x26ef1c3f
length= 64 gigabytes (2^36 bytes), time= 1239 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x26ef1c3f
length= 128 gigabytes (2^37 bytes), time= 2475 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x26ef1c3f
length= 187.500 gigabytes (2^37.551 bytes), time= 3602 seconds
  no anomalies in 263 test result(s)


real	60m3.862s
user	59m41.778s
sys	1m58.748s
*/
