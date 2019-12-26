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
/// @created on 2019-12-08 02:58:52 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 156bd0fa-090b-4c81-9dfc-137f3b4482a9                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib3a;
/* TEST00
time ./MRndCPP 
4066514869
1812893915
3534851474
3109044887
4264217481
3757052325
4611724441257633984

real	0m7.827s
user	0m7.816s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.88e+07  |4245712159|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.81231816|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.27653435|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.74406775|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.84858721|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.21823598|  PASSED  
        diehard_opso|   0|   2097152|     100|0.92788788|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.65732278|  PASSED  
         diehard_dna|   0|   2097152|     100|0.94007908|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.08378141|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.31113850|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.28167383|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.96897085|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.77137652|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.40248327|  PASSED  
        diehard_sums|   0|       100|     100|0.55221634|  PASSED  
        diehard_runs|   0|    100000|     100|0.38356062|  PASSED  
        diehard_runs|   0|    100000|     100|0.13175416|  PASSED  
       diehard_craps|   0|    200000|     100|0.32521521|  PASSED  
       diehard_craps|   0|    200000|     100|0.43550430|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.66735575|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.97079611|  PASSED  
         sts_monobit|   1|    100000|     100|0.63718185|  PASSED  
            sts_runs|   2|    100000|     100|0.03748202|  PASSED  
          sts_serial|   1|    100000|     100|0.48434747|  PASSED  
          sts_serial|   2|    100000|     100|0.05716855|  PASSED  
          sts_serial|   3|    100000|     100|0.12083241|  PASSED  
          sts_serial|   3|    100000|     100|0.85674484|  PASSED  
          sts_serial|   4|    100000|     100|0.66761057|  PASSED  
          sts_serial|   4|    100000|     100|0.85374917|  PASSED  
          sts_serial|   5|    100000|     100|0.86365151|  PASSED  
          sts_serial|   5|    100000|     100|0.89585027|  PASSED  
          sts_serial|   6|    100000|     100|0.35112119|  PASSED  
          sts_serial|   6|    100000|     100|0.10865465|  PASSED  
          sts_serial|   7|    100000|     100|0.45008319|  PASSED  
          sts_serial|   7|    100000|     100|0.77550644|  PASSED  
          sts_serial|   8|    100000|     100|0.59331208|  PASSED  
          sts_serial|   8|    100000|     100|0.20095149|  PASSED  
          sts_serial|   9|    100000|     100|0.07885325|  PASSED  
          sts_serial|   9|    100000|     100|0.48608031|  PASSED  
          sts_serial|  10|    100000|     100|0.21342687|  PASSED  
          sts_serial|  10|    100000|     100|0.58385068|  PASSED  
          sts_serial|  11|    100000|     100|0.99900046|   WEAK   
          sts_serial|  11|    100000|     100|0.19267182|  PASSED  
          sts_serial|  12|    100000|     100|0.71387492|  PASSED  
          sts_serial|  12|    100000|     100|0.94110246|  PASSED  
          sts_serial|  13|    100000|     100|0.98347352|  PASSED  
          sts_serial|  13|    100000|     100|0.71307120|  PASSED  
          sts_serial|  14|    100000|     100|0.95965473|  PASSED  
          sts_serial|  14|    100000|     100|0.98351676|  PASSED  
          sts_serial|  15|    100000|     100|0.37283935|  PASSED  
          sts_serial|  15|    100000|     100|0.27397443|  PASSED  
          sts_serial|  16|    100000|     100|0.78898561|  PASSED  
          sts_serial|  16|    100000|     100|0.84002893|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.21371001|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.81186479|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.99406176|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.70554284|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.32418241|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.78954761|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.91694065|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.20068620|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.61395322|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.01778210|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.04764397|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.56604152|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.89477698|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.67562480|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.29109019|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.63649326|  PASSED  
    rgb_permutations|   2|    100000|     100|0.07604881|  PASSED  
    rgb_permutations|   3|    100000|     100|0.58929217|  PASSED  
    rgb_permutations|   4|    100000|     100|0.92779569|  PASSED  
    rgb_permutations|   5|    100000|     100|0.39238462|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.28110383|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.27525395|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.69766453|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.72410042|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.98318598|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.80860931|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.99741053|   WEAK   
      rgb_lagged_sum|   7|   1000000|     100|0.92819492|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.68920056|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.48938965|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.46907023|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.68037856|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.06689889|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.11817005|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.23178485|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.22661454|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.20122844|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.65959986|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.46415635|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.91861067|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.36674620|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.02275728|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.95487333|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.99421607|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.12664050|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.83327079|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.44576716|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.50017187|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.93238973|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.65118586|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.50385862|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.56187431|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.08686043|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.54816250|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.25900323|  PASSED  
             dab_dct| 256|     50000|       1|0.94728849|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.54791234|  PASSED  
        dab_filltree|  32|  15000000|       1|0.15091398|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.51051676|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.77926264|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.46534105|  PASSED  

real	48m54.070s
user	45m22.548s
sys	3m25.864s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbc7ed1d7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbc7ed1d7
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -3.9  p =1-2.8e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbc7ed1d7
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xbc7ed1d7
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xbc7ed1d7
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xbc7ed1d7
length= 2 gigabytes (2^31 bytes), time= 37.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xbc7ed1d7
length= 4 gigabytes (2^32 bytes), time= 72.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xbc7ed1d7
length= 5.500 gigabytes (2^32.459 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m41.149s
user	1m38.304s
sys	0m2.520s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x89160a2a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x89160a2a
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x89160a2a
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x89160a2a
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x89160a2a
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x89160a2a
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x89160a2a
length= 4 gigabytes (2^32 bytes), time= 74.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x89160a2a
length= 5.250 gigabytes (2^32.392 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m40.956s
user	1m38.376s
sys	0m2.380s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x30b456a1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x30b456a1
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x30b456a1
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x30b456a1
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x30b456a1
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x30b456a1
length= 2 gigabytes (2^31 bytes), time= 37.7 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -4.5  p =1-6.3e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x30b456a1
length= 4 gigabytes (2^32 bytes), time= 73.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x30b456a1
length= 5.500 gigabytes (2^32.459 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.240s
user	1m39.828s
sys	0m2.204s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x76c1971d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x76c1971d
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x76c1971d
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x76c1971d
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x76c1971d
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x76c1971d
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x76c1971d
length= 4 gigabytes (2^32 bytes), time= 74.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x76c1971d
length= 8 gigabytes (2^33 bytes), time= 154 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x76c1971d
length= 16 gigabytes (2^34 bytes), time= 309 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +6.1  p =  1.5e-3   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0x76c1971d
length= 32 gigabytes (2^35 bytes), time= 615 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x76c1971d
length= 64 gigabytes (2^36 bytes), time= 1241 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x76c1971d
length= 128 gigabytes (2^37 bytes), time= 2479 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x76c1971d
length= 186.750 gigabytes (2^37.545 bytes), time= 3603 seconds
  no anomalies in 201 test result(s)


real	60m3.727s
user	58m43.304s
sys	1m12.116s
*/
