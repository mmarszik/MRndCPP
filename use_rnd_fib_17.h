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
/// @created on 2019-12-18 01:26:49 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 46fbd289-4503-4e5a-b558-1bfc72632058                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib17;
/* TEST00
time ./MRndCPP 
2363634842
203688937
4182445252
3256255605
1326282354
1494346985
18446551174018348050

real	0m51.682s
user	0m51.628s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.19e+07  |4173652634|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.57303666|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.90629042|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.98502529|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.46838361|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.83575908|  PASSED  
        diehard_opso|   0|   2097152|     100|0.64317944|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.77603976|  PASSED  
         diehard_dna|   0|   2097152|     100|0.72747834|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.87855925|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.02617130|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.13186651|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.37157624|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.80317958|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.15889370|  PASSED  
        diehard_sums|   0|       100|     100|0.48180724|  PASSED  
        diehard_runs|   0|    100000|     100|0.72333366|  PASSED  
        diehard_runs|   0|    100000|     100|0.92885469|  PASSED  
       diehard_craps|   0|    200000|     100|0.13590583|  PASSED  
       diehard_craps|   0|    200000|     100|0.88545132|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.31552131|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.93938429|  PASSED  
         sts_monobit|   1|    100000|     100|0.34236045|  PASSED  
            sts_runs|   2|    100000|     100|0.99838581|   WEAK   
          sts_serial|   1|    100000|     100|0.06235482|  PASSED  
          sts_serial|   2|    100000|     100|0.14147584|  PASSED  
          sts_serial|   3|    100000|     100|0.63755253|  PASSED  
          sts_serial|   3|    100000|     100|0.50216213|  PASSED  
          sts_serial|   4|    100000|     100|0.74389374|  PASSED  
          sts_serial|   4|    100000|     100|0.91147838|  PASSED  
          sts_serial|   5|    100000|     100|0.51608504|  PASSED  
          sts_serial|   5|    100000|     100|0.96782014|  PASSED  
          sts_serial|   6|    100000|     100|0.92344413|  PASSED  
          sts_serial|   6|    100000|     100|0.59092478|  PASSED  
          sts_serial|   7|    100000|     100|0.18785707|  PASSED  
          sts_serial|   7|    100000|     100|0.05244659|  PASSED  
          sts_serial|   8|    100000|     100|0.46297863|  PASSED  
          sts_serial|   8|    100000|     100|0.92824859|  PASSED  
          sts_serial|   9|    100000|     100|0.09451947|  PASSED  
          sts_serial|   9|    100000|     100|0.98910606|  PASSED  
          sts_serial|  10|    100000|     100|0.45572509|  PASSED  
          sts_serial|  10|    100000|     100|0.57225261|  PASSED  
          sts_serial|  11|    100000|     100|0.49728053|  PASSED  
          sts_serial|  11|    100000|     100|0.59163774|  PASSED  
          sts_serial|  12|    100000|     100|0.89161347|  PASSED  
          sts_serial|  12|    100000|     100|0.31881493|  PASSED  
          sts_serial|  13|    100000|     100|0.93381312|  PASSED  
          sts_serial|  13|    100000|     100|0.98662093|  PASSED  
          sts_serial|  14|    100000|     100|0.49216972|  PASSED  
          sts_serial|  14|    100000|     100|0.99515684|   WEAK   
          sts_serial|  15|    100000|     100|0.99165648|  PASSED  
          sts_serial|  15|    100000|     100|0.82447252|  PASSED  
          sts_serial|  16|    100000|     100|0.02698765|  PASSED  
          sts_serial|  16|    100000|     100|0.05006649|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.80521420|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.76007691|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.78516096|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.10946726|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.43149644|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.57321424|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.11395832|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.98241787|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.43882692|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.46541519|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.04824383|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.80163033|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.37771713|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.94008806|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.27371567|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.16389745|  PASSED  
    rgb_permutations|   2|    100000|     100|0.95923559|  PASSED  
    rgb_permutations|   3|    100000|     100|0.96218298|  PASSED  
    rgb_permutations|   4|    100000|     100|0.48378894|  PASSED  
    rgb_permutations|   5|    100000|     100|0.21419646|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.36267541|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.24707335|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.40454550|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.26974996|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.75485198|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.65893299|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.46822446|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.75862481|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.42323717|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.84681610|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.53621360|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.79532647|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.06128866|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.15376932|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.80539701|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.26715331|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.90337098|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.80405672|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.93911318|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.81616820|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.53269561|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.32963529|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.52743757|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.97856112|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.38223721|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.76186322|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.49307897|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.19803754|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.54211327|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.97760573|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.42700064|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.40222698|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.95213629|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.62099752|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.69542475|  PASSED  
             dab_dct| 256|     50000|       1|0.03354381|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.14461927|  PASSED  
        dab_filltree|  32|  15000000|       1|0.87944402|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.15451042|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.99660764|   WEAK   
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.12032013|  PASSED  

real	49m20.472s
user	45m49.084s
sys	3m28.600s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8d7c05a5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8d7c05a5
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x8d7c05a5
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8d7c05a5
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8d7c05a5
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.1  p =  8.5e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8d7c05a5
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8d7c05a5
length= 4 gigabytes (2^32 bytes), time= 72.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x8d7c05a5
length= 5.750 gigabytes (2^32.524 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m44.225s
user	1m41.780s
sys	0m2.256s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x82a74fdb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x82a74fdb
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.7  p =1-2.3e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x82a74fdb
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x82a74fdb
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x82a74fdb
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x82a74fdb
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -4.3  p =1-1.0e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x82a74fdb
length= 4 gigabytes (2^32 bytes), time= 73.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  +8.7  p =  3.5e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x82a74fdb
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.713s
user	1m42.408s
sys	0m2.196s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x994471b6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x994471b6
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x994471b6
length= 256 megabytes (2^28 bytes), time= 6.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x994471b6
length= 512 megabytes (2^29 bytes), time= 11.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x994471b6
length= 1 gigabyte (2^30 bytes), time= 23.0 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -3.8  p =1-1.5e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x994471b6
length= 2 gigabytes (2^31 bytes), time= 44.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x994471b6
length= 4 gigabytes (2^32 bytes), time= 87.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x994471b6
length= 4.750 gigabytes (2^32.248 bytes), time= 105 seconds
  no anomalies in 159 test result(s)


real	1m45.634s
user	1m43.404s
sys	0m2.112s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6a4d82ea
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6a4d82ea
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6a4d82ea
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6a4d82ea
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6a4d82ea
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x6a4d82ea
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6a4d82ea
length= 4 gigabytes (2^32 bytes), time= 71.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R=  +7.6  p =  2.4e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6a4d82ea
length= 8 gigabytes (2^33 bytes), time= 145 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x6a4d82ea
length= 16 gigabytes (2^34 bytes), time= 299 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-0,T)         R=  +7.8  p =  1.1e-3   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6a4d82ea
length= 32 gigabytes (2^35 bytes), time= 605 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x6a4d82ea
length= 64 gigabytes (2^36 bytes), time= 1226 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x6a4d82ea
length= 128 gigabytes (2^37 bytes), time= 2455 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x6a4d82ea
length= 188.250 gigabytes (2^37.557 bytes), time= 3601 seconds
  no anomalies in 201 test result(s)


real	60m2.128s
user	58m45.516s
sys	1m12.544s
*/
