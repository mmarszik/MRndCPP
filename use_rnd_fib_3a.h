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
/* TEST00
time ./MRndCPP 
4066514869
1812893915
3534851474
3109044887
4264217481
3757052325
18446538411293774993

real	0m51.665s
user	0m51.604s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.20e+07  |1394785364|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.65972013|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.20141279|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.23450888|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.43458093|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.25887992|  PASSED  
        diehard_opso|   0|   2097152|     100|0.28230723|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.31833519|  PASSED  
         diehard_dna|   0|   2097152|     100|0.99540512|   WEAK   
diehard_count_1s_str|   0|    256000|     100|0.33829264|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.33946766|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.22547510|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.67633602|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.49451896|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.88644499|  PASSED  
        diehard_sums|   0|       100|     100|0.15995437|  PASSED  
        diehard_runs|   0|    100000|     100|0.49391574|  PASSED  
        diehard_runs|   0|    100000|     100|0.88423467|  PASSED  
       diehard_craps|   0|    200000|     100|0.88073477|  PASSED  
       diehard_craps|   0|    200000|     100|0.99056621|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.03798221|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.70480651|  PASSED  
         sts_monobit|   1|    100000|     100|0.61772507|  PASSED  
            sts_runs|   2|    100000|     100|0.87746606|  PASSED  
          sts_serial|   1|    100000|     100|0.95315446|  PASSED  
          sts_serial|   2|    100000|     100|0.81015838|  PASSED  
          sts_serial|   3|    100000|     100|0.99969249|   WEAK   
          sts_serial|   3|    100000|     100|0.84501472|  PASSED  
          sts_serial|   4|    100000|     100|0.49747614|  PASSED  
          sts_serial|   4|    100000|     100|0.60087448|  PASSED  
          sts_serial|   5|    100000|     100|0.90754642|  PASSED  
          sts_serial|   5|    100000|     100|0.86755172|  PASSED  
          sts_serial|   6|    100000|     100|0.96693651|  PASSED  
          sts_serial|   6|    100000|     100|0.54381357|  PASSED  
          sts_serial|   7|    100000|     100|0.67201223|  PASSED  
          sts_serial|   7|    100000|     100|0.55794164|  PASSED  
          sts_serial|   8|    100000|     100|0.97158135|  PASSED  
          sts_serial|   8|    100000|     100|0.86746995|  PASSED  
          sts_serial|   9|    100000|     100|0.82544301|  PASSED  
          sts_serial|   9|    100000|     100|0.50798998|  PASSED  
          sts_serial|  10|    100000|     100|0.86916760|  PASSED  
          sts_serial|  10|    100000|     100|0.54003259|  PASSED  
          sts_serial|  11|    100000|     100|0.54170721|  PASSED  
          sts_serial|  11|    100000|     100|0.13050492|  PASSED  
          sts_serial|  12|    100000|     100|0.32965203|  PASSED  
          sts_serial|  12|    100000|     100|0.04485597|  PASSED  
          sts_serial|  13|    100000|     100|0.46950607|  PASSED  
          sts_serial|  13|    100000|     100|0.93182391|  PASSED  
          sts_serial|  14|    100000|     100|0.02704357|  PASSED  
          sts_serial|  14|    100000|     100|0.80426235|  PASSED  
          sts_serial|  15|    100000|     100|0.15317832|  PASSED  
          sts_serial|  15|    100000|     100|0.63685893|  PASSED  
          sts_serial|  16|    100000|     100|0.60885242|  PASSED  
          sts_serial|  16|    100000|     100|0.28915593|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.26627593|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.65251208|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.89739844|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.95446523|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.33808989|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.26200410|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.91361751|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.53369186|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.33681868|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.96583830|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.48763162|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.60251848|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.61690210|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.06547805|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.78872155|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.75286563|  PASSED  
    rgb_permutations|   2|    100000|     100|0.46559264|  PASSED  
    rgb_permutations|   3|    100000|     100|0.27046471|  PASSED  
    rgb_permutations|   4|    100000|     100|0.59059962|  PASSED  
    rgb_permutations|   5|    100000|     100|0.64876276|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.76645952|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.89798937|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.00374026|   WEAK   
      rgb_lagged_sum|   3|   1000000|     100|0.38565418|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.01363636|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.36999439|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.33996913|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.19780852|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.58391814|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.89097461|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.73180302|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.88421134|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.63379984|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.16239156|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.72002101|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.81101170|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.68870651|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.55582176|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.53869499|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.02722715|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.96238372|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.29137653|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.61225656|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.59733025|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.31076665|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.16416179|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.44833887|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.98606660|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.99989138|   WEAK   
      rgb_lagged_sum|  29|   1000000|     100|0.36689685|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.23881203|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.41284294|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.78922558|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.00035908|   WEAK   
     dab_bytedistrib|   0|  51200000|       1|0.27143650|  PASSED  
             dab_dct| 256|     50000|       1|0.89191484|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.70502354|  PASSED  
        dab_filltree|  32|  15000000|       1|0.53998832|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.47221506|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.34219401|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.63551862|  PASSED  

real	48m20.402s
user	44m47.792s
sys	3m29.920s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd80dd3a9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd80dd3a9
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd80dd3a9
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd80dd3a9
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xd80dd3a9
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xd80dd3a9
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xd80dd3a9
length= 4 gigabytes (2^32 bytes), time= 74.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd80dd3a9
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.944s
user	1m42.324s
sys	0m2.452s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2f7048ef
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2f7048ef
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2f7048ef
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  -4.1  p =1-1.3e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2f7048ef
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2f7048ef
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2f7048ef
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-2,T)         R=  +7.9  p =  1.3e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2f7048ef
length= 4 gigabytes (2^32 bytes), time= 72.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2f7048ef
length= 5.500 gigabytes (2^32.459 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.868s
user	1m39.372s
sys	0m2.372s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5d84abf2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5d84abf2
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5d84abf2
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5d84abf2
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5d84abf2
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5d84abf2
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5d84abf2
length= 4 gigabytes (2^32 bytes), time= 72.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x5d84abf2
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.414s
user	1m41.800s
sys	0m2.476s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd949c57f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd949c57f
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd949c57f
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.3  p =  1.4e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -5.0  p =1-1.7e-3   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd949c57f
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xd949c57f
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xd949c57f
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xd949c57f
length= 4 gigabytes (2^32 bytes), time= 73.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd949c57f
length= 8 gigabytes (2^33 bytes), time= 152 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xd949c57f
length= 16 gigabytes (2^34 bytes), time= 307 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xd949c57f
length= 32 gigabytes (2^35 bytes), time= 612 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xd949c57f
length= 64 gigabytes (2^36 bytes), time= 1232 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.1  p =  7.8e-3   unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd949c57f
length= 128 gigabytes (2^37 bytes), time= 2463 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xd949c57f
length= 187.750 gigabytes (2^37.553 bytes), time= 3602 seconds
  no anomalies in 201 test result(s)


real	60m2.731s
user	58m44.960s
sys	1m12.944s
*/
