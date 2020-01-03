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
/// @created on 2019-12-18 01:28:04 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f90f9f09-ef81-475b-b1cc-cb9ec212bf0e                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib7;
/* TEST00
time ./MRndCPP 
3848412489
1065998354
1778693187
4265328213
1602625696
375962991
198766738368159

real	0m51.563s
user	0m51.512s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.22e+07  | 287079932|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.72239200|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.95388029|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.08616462|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.10116164|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.92052899|  PASSED  
        diehard_opso|   0|   2097152|     100|0.23514913|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.76312611|  PASSED  
         diehard_dna|   0|   2097152|     100|0.01705890|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.79354091|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.59855587|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.13090839|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.99985661|   WEAK   
    diehard_3dsphere|   3|      4000|     100|0.11081845|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.05727444|  PASSED  
        diehard_sums|   0|       100|     100|0.85504859|  PASSED  
        diehard_runs|   0|    100000|     100|0.98739842|  PASSED  
        diehard_runs|   0|    100000|     100|0.73508042|  PASSED  
       diehard_craps|   0|    200000|     100|0.87854919|  PASSED  
       diehard_craps|   0|    200000|     100|0.68471306|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.14682196|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00847272|  PASSED  
         sts_monobit|   1|    100000|     100|0.22864266|  PASSED  
            sts_runs|   2|    100000|     100|0.77109194|  PASSED  
          sts_serial|   1|    100000|     100|0.36266101|  PASSED  
          sts_serial|   2|    100000|     100|0.00062150|   WEAK   
          sts_serial|   3|    100000|     100|0.01930600|  PASSED  
          sts_serial|   3|    100000|     100|0.55901971|  PASSED  
          sts_serial|   4|    100000|     100|0.01795856|  PASSED  
          sts_serial|   4|    100000|     100|0.59234149|  PASSED  
          sts_serial|   5|    100000|     100|0.33928383|  PASSED  
          sts_serial|   5|    100000|     100|0.77399560|  PASSED  
          sts_serial|   6|    100000|     100|0.35106322|  PASSED  
          sts_serial|   6|    100000|     100|0.68597381|  PASSED  
          sts_serial|   7|    100000|     100|0.77511347|  PASSED  
          sts_serial|   7|    100000|     100|0.28858284|  PASSED  
          sts_serial|   8|    100000|     100|0.29213615|  PASSED  
          sts_serial|   8|    100000|     100|0.87086314|  PASSED  
          sts_serial|   9|    100000|     100|0.81999807|  PASSED  
          sts_serial|   9|    100000|     100|0.44095686|  PASSED  
          sts_serial|  10|    100000|     100|0.61828063|  PASSED  
          sts_serial|  10|    100000|     100|0.86652177|  PASSED  
          sts_serial|  11|    100000|     100|0.72677359|  PASSED  
          sts_serial|  11|    100000|     100|0.86790790|  PASSED  
          sts_serial|  12|    100000|     100|0.34923415|  PASSED  
          sts_serial|  12|    100000|     100|0.32677627|  PASSED  
          sts_serial|  13|    100000|     100|0.43258447|  PASSED  
          sts_serial|  13|    100000|     100|0.08602087|  PASSED  
          sts_serial|  14|    100000|     100|0.76175060|  PASSED  
          sts_serial|  14|    100000|     100|0.46270325|  PASSED  
          sts_serial|  15|    100000|     100|0.92992958|  PASSED  
          sts_serial|  15|    100000|     100|0.84571195|  PASSED  
          sts_serial|  16|    100000|     100|0.58990291|  PASSED  
          sts_serial|  16|    100000|     100|0.46262592|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.46594970|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.19705933|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.14754977|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.43410134|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.06271275|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.07458137|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.93831014|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.54766543|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.66218725|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.88347084|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.49292642|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.29616419|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.65720391|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.54503475|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.51762375|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.64360476|  PASSED  
    rgb_permutations|   2|    100000|     100|0.07803081|  PASSED  
    rgb_permutations|   3|    100000|     100|0.82472183|  PASSED  
    rgb_permutations|   4|    100000|     100|0.14598932|  PASSED  
    rgb_permutations|   5|    100000|     100|0.73544894|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.98718689|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.81101505|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.68405283|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.20615570|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.73222549|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.02450083|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.43226621|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.21386327|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.65823319|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.97323885|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.66117591|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.92886887|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.65711647|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.73602303|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.73270305|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.31050056|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.29692341|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.70338502|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.95103219|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.28773822|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.82900897|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.46066100|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.59525685|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.42534882|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.69951157|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.44449656|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.33679678|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.86340768|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.67022621|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.48975410|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.95590106|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.33878478|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.29987251|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.70874565|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.88234126|  PASSED  
             dab_dct| 256|     50000|       1|0.62407160|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.01820949|  PASSED  
        dab_filltree|  32|  15000000|       1|0.21433475|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.82923143|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.51197647|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.45216360|  PASSED  

real	49m13.756s
user	45m25.672s
sys	3m45.060s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x13496c2b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x13496c2b
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x13496c2b
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x13496c2b
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.6  p =  6.8e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x13496c2b
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.8  p =  9.8e-4   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x13496c2b
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x13496c2b
length= 4 gigabytes (2^32 bytes), time= 73.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x13496c2b
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.317s
user	1m41.864s
sys	0m2.296s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3c69fe74
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3c69fe74
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3c69fe74
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x3c69fe74
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x3c69fe74
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x3c69fe74
length= 2 gigabytes (2^31 bytes), time= 39.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x3c69fe74
length= 4 gigabytes (2^32 bytes), time= 76.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x3c69fe74
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m42.186s
user	1m39.684s
sys	0m2.336s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3a4085f4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3a4085f4
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3a4085f4
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x3a4085f4
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x3a4085f4
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x3a4085f4
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x3a4085f4
length= 4 gigabytes (2^32 bytes), time= 74.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x3a4085f4
length= 5.250 gigabytes (2^32.392 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m40.897s
user	1m38.440s
sys	0m2.320s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa7fde58e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa7fde58e
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  +3.9  p =  1.3e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa7fde58e
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa7fde58e
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xa7fde58e
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xa7fde58e
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xa7fde58e
length= 4 gigabytes (2^32 bytes), time= 72.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xa7fde58e
length= 8 gigabytes (2^33 bytes), time= 148 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xa7fde58e
length= 16 gigabytes (2^34 bytes), time= 303 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xa7fde58e
length= 32 gigabytes (2^35 bytes), time= 606 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +4.6  p = 0.011     unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa7fde58e
length= 64 gigabytes (2^36 bytes), time= 1227 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xa7fde58e
length= 128 gigabytes (2^37 bytes), time= 2453 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xa7fde58e
length= 188.500 gigabytes (2^37.558 bytes), time= 3602 seconds
  no anomalies in 201 test result(s)


real	60m2.637s
user	58m44.104s
sys	1m14.412s
*/
