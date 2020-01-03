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
/// @created on 2019-12-08 02:58:30 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8158fed7-fa4c-4402-8961-e570927f3bc8                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib2a;
/* TEST00
time ./MRndCPP 
604124644
980448777
809854627
3960820717
415646248
1931295176
208050015348163

real	0m49.775s
user	0m49.712s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.16e+07  |4022446529|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.55252730|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.75274170|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.91381174|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.91079917|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.15476560|  PASSED  
        diehard_opso|   0|   2097152|     100|0.52487872|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.75764472|  PASSED  
         diehard_dna|   0|   2097152|     100|0.49846574|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.58178998|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.10349148|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.50512183|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.25823188|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.92040200|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.50797040|  PASSED  
        diehard_sums|   0|       100|     100|0.25974965|  PASSED  
        diehard_runs|   0|    100000|     100|0.26881393|  PASSED  
        diehard_runs|   0|    100000|     100|0.07883672|  PASSED  
       diehard_craps|   0|    200000|     100|0.10365185|  PASSED  
       diehard_craps|   0|    200000|     100|0.29913033|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.28867029|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.48810269|  PASSED  
         sts_monobit|   1|    100000|     100|0.51683891|  PASSED  
            sts_runs|   2|    100000|     100|0.09663648|  PASSED  
          sts_serial|   1|    100000|     100|0.96854104|  PASSED  
          sts_serial|   2|    100000|     100|0.31046204|  PASSED  
          sts_serial|   3|    100000|     100|0.02434580|  PASSED  
          sts_serial|   3|    100000|     100|0.01494572|  PASSED  
          sts_serial|   4|    100000|     100|0.30940473|  PASSED  
          sts_serial|   4|    100000|     100|0.41390953|  PASSED  
          sts_serial|   5|    100000|     100|0.03694177|  PASSED  
          sts_serial|   5|    100000|     100|0.25225216|  PASSED  
          sts_serial|   6|    100000|     100|0.11826086|  PASSED  
          sts_serial|   6|    100000|     100|0.81337328|  PASSED  
          sts_serial|   7|    100000|     100|0.06491698|  PASSED  
          sts_serial|   7|    100000|     100|0.40899051|  PASSED  
          sts_serial|   8|    100000|     100|0.08758600|  PASSED  
          sts_serial|   8|    100000|     100|0.46756099|  PASSED  
          sts_serial|   9|    100000|     100|0.30422299|  PASSED  
          sts_serial|   9|    100000|     100|0.46164715|  PASSED  
          sts_serial|  10|    100000|     100|0.26763150|  PASSED  
          sts_serial|  10|    100000|     100|0.47603852|  PASSED  
          sts_serial|  11|    100000|     100|0.01006386|  PASSED  
          sts_serial|  11|    100000|     100|0.63978915|  PASSED  
          sts_serial|  12|    100000|     100|0.15296297|  PASSED  
          sts_serial|  12|    100000|     100|0.44642950|  PASSED  
          sts_serial|  13|    100000|     100|0.99258211|  PASSED  
          sts_serial|  13|    100000|     100|0.17093667|  PASSED  
          sts_serial|  14|    100000|     100|0.23804540|  PASSED  
          sts_serial|  14|    100000|     100|0.21835632|  PASSED  
          sts_serial|  15|    100000|     100|0.69551506|  PASSED  
          sts_serial|  15|    100000|     100|0.51326059|  PASSED  
          sts_serial|  16|    100000|     100|0.17280402|  PASSED  
          sts_serial|  16|    100000|     100|0.41575476|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.61012335|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.57710896|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.82882590|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.67470362|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.30435783|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.26750866|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.06605738|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.99633195|   WEAK   
         rgb_bitdist|   9|    100000|     100|0.94775620|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.01404736|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.79633471|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.52511061|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.31385009|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.29349624|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.70994209|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.03004313|  PASSED  
    rgb_permutations|   2|    100000|     100|0.57633762|  PASSED  
    rgb_permutations|   3|    100000|     100|0.75246801|  PASSED  
    rgb_permutations|   4|    100000|     100|0.34200938|  PASSED  
    rgb_permutations|   5|    100000|     100|0.09896974|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.81402074|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.00346783|   WEAK   
      rgb_lagged_sum|   2|   1000000|     100|0.78707507|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.45656447|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.94634534|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.96263836|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.70014038|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.63044117|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.82957892|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.53669124|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.98109326|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.16034931|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.99938759|   WEAK   
      rgb_lagged_sum|  13|   1000000|     100|0.00364456|   WEAK   
      rgb_lagged_sum|  14|   1000000|     100|0.97652257|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.53215549|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.96618551|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.08440534|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.51079742|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.55779335|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.95402187|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.28086907|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.81342969|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.86460407|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.47019458|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.90421620|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.00075497|   WEAK   
      rgb_lagged_sum|  27|   1000000|     100|0.33009788|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.84906636|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.70778306|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.29913156|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.18993824|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.50920660|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.72873866|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.10793844|  PASSED  
             dab_dct| 256|     50000|       1|0.57151592|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.07142538|  PASSED  
        dab_filltree|  32|  15000000|       1|0.67094990|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.66027272|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.06724176|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.11344213|  PASSED  

real	47m55.894s
user	44m19.488s
sys	3m32.604s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x25e69591
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x25e69591
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x25e69591
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x25e69591
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x25e69591
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x25e69591
length= 2 gigabytes (2^31 bytes), time= 39.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x25e69591
length= 4 gigabytes (2^32 bytes), time= 75.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x25e69591
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m45.144s
user	1m42.648s
sys	0m2.348s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc0c4959a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc0c4959a
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc0c4959a
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.5  p = 0.989     unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc0c4959a
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xc0c4959a
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc0c4959a
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +4.8  p = 0.011     unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc0c4959a
length= 4 gigabytes (2^32 bytes), time= 73.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R= +10.0  p =  7.3e-5   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc0c4959a
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +9.8  p =  8.7e-5   mildly suspicious
  ...and 159 test result(s) without anomalies


real	1m43.989s
user	1m41.676s
sys	0m2.188s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6efc260
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6efc260
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6efc260
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.9  p =1-8.2e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6efc260
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6efc260
length= 1 gigabyte (2^30 bytes), time= 20.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x6efc260
length= 2 gigabytes (2^31 bytes), time= 39.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6efc260
length= 4 gigabytes (2^32 bytes), time= 75.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x6efc260
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.941s
user	1m42.480s
sys	0m2.200s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x745d3e68
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x745d3e68
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x745d3e68
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.8  p =1-4.2e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x745d3e68
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x745d3e68
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x745d3e68
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x745d3e68
length= 4 gigabytes (2^32 bytes), time= 72.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x745d3e68
length= 8 gigabytes (2^33 bytes), time= 144 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x745d3e68
length= 16 gigabytes (2^34 bytes), time= 298 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x745d3e68
length= 32 gigabytes (2^35 bytes), time= 603 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x745d3e68
length= 64 gigabytes (2^36 bytes), time= 1226 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.2  p = 0.988     unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0x745d3e68
length= 128 gigabytes (2^37 bytes), time= 2458 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x745d3e68
length= 188.000 gigabytes (2^37.555 bytes), time= 3604 seconds
  no anomalies in 201 test result(s)


real	60m4.220s
user	58m45.348s
sys	1m15.252s
*/
