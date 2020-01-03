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
2364873330
2617215615
501979524
777779133
3080140476
2216209833
18446314892948460276

real	0m51.572s
user	0m51.512s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.20e+07  |2657900415|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.97969244|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.19339656|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.90590838|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.35487007|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.68198729|  PASSED  
        diehard_opso|   0|   2097152|     100|0.28662735|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.46373257|  PASSED  
         diehard_dna|   0|   2097152|     100|0.51993464|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.66280028|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.98755523|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.97391048|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.51183803|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.94275058|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.54835103|  PASSED  
        diehard_sums|   0|       100|     100|0.00702016|  PASSED  
        diehard_runs|   0|    100000|     100|0.73938898|  PASSED  
        diehard_runs|   0|    100000|     100|0.94414319|  PASSED  
       diehard_craps|   0|    200000|     100|0.92564929|  PASSED  
       diehard_craps|   0|    200000|     100|0.58871007|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.85970376|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.29718042|  PASSED  
         sts_monobit|   1|    100000|     100|0.11525235|  PASSED  
            sts_runs|   2|    100000|     100|0.63043329|  PASSED  
          sts_serial|   1|    100000|     100|0.33217430|  PASSED  
          sts_serial|   2|    100000|     100|0.58600859|  PASSED  
          sts_serial|   3|    100000|     100|0.96604823|  PASSED  
          sts_serial|   3|    100000|     100|0.42487465|  PASSED  
          sts_serial|   4|    100000|     100|0.17340724|  PASSED  
          sts_serial|   4|    100000|     100|0.25866866|  PASSED  
          sts_serial|   5|    100000|     100|0.17344735|  PASSED  
          sts_serial|   5|    100000|     100|0.96311780|  PASSED  
          sts_serial|   6|    100000|     100|0.47885007|  PASSED  
          sts_serial|   6|    100000|     100|0.98848955|  PASSED  
          sts_serial|   7|    100000|     100|0.32179464|  PASSED  
          sts_serial|   7|    100000|     100|0.47950411|  PASSED  
          sts_serial|   8|    100000|     100|0.44055553|  PASSED  
          sts_serial|   8|    100000|     100|0.08367579|  PASSED  
          sts_serial|   9|    100000|     100|0.47244613|  PASSED  
          sts_serial|   9|    100000|     100|0.40460494|  PASSED  
          sts_serial|  10|    100000|     100|0.14167371|  PASSED  
          sts_serial|  10|    100000|     100|0.11930540|  PASSED  
          sts_serial|  11|    100000|     100|0.60743350|  PASSED  
          sts_serial|  11|    100000|     100|0.87556877|  PASSED  
          sts_serial|  12|    100000|     100|0.29903090|  PASSED  
          sts_serial|  12|    100000|     100|0.69359657|  PASSED  
          sts_serial|  13|    100000|     100|0.03941976|  PASSED  
          sts_serial|  13|    100000|     100|0.98493377|  PASSED  
          sts_serial|  14|    100000|     100|0.36623221|  PASSED  
          sts_serial|  14|    100000|     100|0.23494325|  PASSED  
          sts_serial|  15|    100000|     100|0.45116799|  PASSED  
          sts_serial|  15|    100000|     100|0.20277032|  PASSED  
          sts_serial|  16|    100000|     100|0.73346076|  PASSED  
          sts_serial|  16|    100000|     100|0.61557939|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.97785722|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.40872427|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.06402627|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.62820421|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.32592101|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.39337080|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.84715093|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.05833450|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.25853817|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.26624419|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.90284536|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.69975044|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.38538137|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.66354148|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.50344927|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.40841571|  PASSED  
    rgb_permutations|   2|    100000|     100|0.84085898|  PASSED  
    rgb_permutations|   3|    100000|     100|0.19528198|  PASSED  
    rgb_permutations|   4|    100000|     100|0.81351102|  PASSED  
    rgb_permutations|   5|    100000|     100|0.54204049|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.15454458|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.95923347|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.31313388|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.83479168|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.56650582|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.82890536|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.96714352|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.40052653|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.69209733|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.53527990|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.76284165|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.17456895|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.99584942|   WEAK   
      rgb_lagged_sum|  13|   1000000|     100|0.82146789|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.48619485|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.88528078|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.77744719|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.99867182|   WEAK   
      rgb_lagged_sum|  18|   1000000|     100|0.38561238|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.46438830|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.73919638|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.67637728|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.76734490|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.33993190|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.14642671|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.50201319|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.58533777|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.74906921|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.17246096|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.24683253|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.81349376|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.17686677|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.69143015|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.07832827|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.95477255|  PASSED  
             dab_dct| 256|     50000|       1|0.50956623|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.99112328|  PASSED  
        dab_filltree|  32|  15000000|       1|0.26816706|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.92197458|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.30787844|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.89455601|  PASSED  

real	50m49.836s
user	47m15.196s
sys	3m31.548s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa58226fb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa58226fb
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xa58226fb
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa58226fb
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xa58226fb
length= 1 gigabyte (2^30 bytes), time= 19.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xa58226fb
length= 2 gigabytes (2^31 bytes), time= 37.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xa58226fb
length= 4 gigabytes (2^32 bytes), time= 74.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xa58226fb
length= 5.250 gigabytes (2^32.392 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m41.194s
user	1m38.696s
sys	0m2.376s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x17695158
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x17695158
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x17695158
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x17695158
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.7  p = 0.989     unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x17695158
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x17695158
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x17695158
length= 4 gigabytes (2^32 bytes), time= 71.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x17695158
length= 5.750 gigabytes (2^32.524 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m44.169s
user	1m41.648s
sys	0m2.372s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x79cd6a1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x79cd6a1
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x79cd6a1
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.4  p =  2.8e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x79cd6a1
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x79cd6a1
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x79cd6a1
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.2  p =  2.5e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x79cd6a1
length= 4 gigabytes (2^32 bytes), time= 84.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.3  p =  8.5e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x79cd6a1
length= 5.000 gigabytes (2^32.322 bytes), time= 104 seconds
  no anomalies in 159 test result(s)


real	1m44.561s
user	1m37.316s
sys	0m2.424s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xff2864fb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xff2864fb
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xff2864fb
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xff2864fb
length= 512 megabytes (2^29 bytes), time= 11.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xff2864fb
length= 1 gigabyte (2^30 bytes), time= 22.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xff2864fb
length= 2 gigabytes (2^31 bytes), time= 43.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xff2864fb
length= 4 gigabytes (2^32 bytes), time= 85.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xff2864fb
length= 8 gigabytes (2^33 bytes), time= 179 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xff2864fb
length= 16 gigabytes (2^34 bytes), time= 368 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.8  p =1-9.2e-3   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0xff2864fb
length= 32 gigabytes (2^35 bytes), time= 747 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xff2864fb
length= 64 gigabytes (2^36 bytes), time= 1506 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xff2864fb
length= 128 gigabytes (2^37 bytes), time= 3015 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xff2864fb
length= 153.250 gigabytes (2^37.260 bytes), time= 3600 seconds
  no anomalies in 199 test result(s)


real	60m1.409s
user	58m49.140s
sys	1m2.656s
*/
