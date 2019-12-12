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
/// @created on 2019-12-08 03:01:43 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token fbaedebf-7449-4f02-b0cd-897861d37c93                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin01;
/* TEST00
time ./MRndCPP 
101698089
4251195690
2830903318
1364170308
1447982495
3147756237
18446428653187959746

real	0m46.847s
user	0m46.668s
sys	0m0.028s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.98e+07  |3486465807|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.81840437|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.86768473|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.11717240|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.71012263|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.19850125|  PASSED  
        diehard_opso|   0|   2097152|     100|0.89939279|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.58899563|  PASSED  
         diehard_dna|   0|   2097152|     100|0.53052554|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.85208283|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.91211248|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.30014525|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.85804634|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.98823605|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.03691797|  PASSED  
        diehard_sums|   0|       100|     100|0.00745218|  PASSED  
        diehard_runs|   0|    100000|     100|0.50471989|  PASSED  
        diehard_runs|   0|    100000|     100|0.85538990|  PASSED  
       diehard_craps|   0|    200000|     100|0.96217077|  PASSED  
       diehard_craps|   0|    200000|     100|0.92720530|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.27087291|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.40734595|  PASSED  
         sts_monobit|   1|    100000|     100|0.86462105|  PASSED  
            sts_runs|   2|    100000|     100|0.22001911|  PASSED  
          sts_serial|   1|    100000|     100|0.01837907|  PASSED  
          sts_serial|   2|    100000|     100|0.87507700|  PASSED  
          sts_serial|   3|    100000|     100|0.73121437|  PASSED  
          sts_serial|   3|    100000|     100|0.05781318|  PASSED  
          sts_serial|   4|    100000|     100|0.41644534|  PASSED  
          sts_serial|   4|    100000|     100|0.89617533|  PASSED  
          sts_serial|   5|    100000|     100|0.01368304|  PASSED  
          sts_serial|   5|    100000|     100|0.06321975|  PASSED  
          sts_serial|   6|    100000|     100|0.15185281|  PASSED  
          sts_serial|   6|    100000|     100|0.74766742|  PASSED  
          sts_serial|   7|    100000|     100|0.91240016|  PASSED  
          sts_serial|   7|    100000|     100|0.24841641|  PASSED  
          sts_serial|   8|    100000|     100|0.12580108|  PASSED  
          sts_serial|   8|    100000|     100|0.70302667|  PASSED  
          sts_serial|   9|    100000|     100|0.57244765|  PASSED  
          sts_serial|   9|    100000|     100|0.58270749|  PASSED  
          sts_serial|  10|    100000|     100|0.69532365|  PASSED  
          sts_serial|  10|    100000|     100|0.71852240|  PASSED  
          sts_serial|  11|    100000|     100|0.84092759|  PASSED  
          sts_serial|  11|    100000|     100|0.19368870|  PASSED  
          sts_serial|  12|    100000|     100|0.26592397|  PASSED  
          sts_serial|  12|    100000|     100|0.46040995|  PASSED  
          sts_serial|  13|    100000|     100|0.26170195|  PASSED  
          sts_serial|  13|    100000|     100|0.58674529|  PASSED  
          sts_serial|  14|    100000|     100|0.75910853|  PASSED  
          sts_serial|  14|    100000|     100|0.89067637|  PASSED  
          sts_serial|  15|    100000|     100|0.75232665|  PASSED  
          sts_serial|  15|    100000|     100|0.67169866|  PASSED  
          sts_serial|  16|    100000|     100|0.62366596|  PASSED  
          sts_serial|  16|    100000|     100|0.96065052|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.91132555|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.68829779|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.81312012|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.42104581|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.27763751|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.13830190|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.53317767|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.67725089|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.28897734|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.41032543|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.04330082|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.45431392|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.56380098|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.41611596|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.00599774|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.43890295|  PASSED  
    rgb_permutations|   2|    100000|     100|0.66949668|  PASSED  
    rgb_permutations|   3|    100000|     100|0.97369059|  PASSED  
    rgb_permutations|   4|    100000|     100|0.97049676|  PASSED  
    rgb_permutations|   5|    100000|     100|0.38485447|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.61472147|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.69734418|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.82945461|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.04067546|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.55271033|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.62012905|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.44901360|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.95820700|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.94073603|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.57521959|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.98535828|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.25562094|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.35461918|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.90275412|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.18358946|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.62501341|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.92659124|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.89807128|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.61476056|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.35000611|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.97972910|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.79937465|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.30663469|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.86492385|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.03731331|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.96438710|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.98031385|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.21771275|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.42017889|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.70187718|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.73770890|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.93259272|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.54144998|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.73121610|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.81790476|  PASSED  
             dab_dct| 256|     50000|       1|0.73753292|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.49284392|  PASSED  
        dab_filltree|  32|  15000000|       1|0.36240624|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.34340592|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.94663662|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.82541290|  PASSED  

real	52m8.083s
user	47m4.164s
sys	4m54.824s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe87c126e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe87c126e
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xe87c126e
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xe87c126e
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xe87c126e
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xe87c126e
length= 2 gigabytes (2^31 bytes), time= 39.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xe87c126e
length= 4 gigabytes (2^32 bytes), time= 75.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xe87c126e
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.952s
user	1m40.604s
sys	0m3.984s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x981e5527
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x981e5527
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x981e5527
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x981e5527
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x981e5527
length= 1 gigabyte (2^30 bytes), time= 20.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x981e5527
length= 2 gigabytes (2^31 bytes), time= 39.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x981e5527
length= 4 gigabytes (2^32 bytes), time= 77.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x981e5527
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.0  p =1-2.5e-3   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x981e5527
length= 16 gigabytes (2^34 bytes), time= 322 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x981e5527
length= 32 gigabytes (2^35 bytes), time= 642 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x981e5527
length= 49.500 gigabytes (2^35.629 bytes), time= 1000 seconds
  no anomalies in 184 test result(s)


real	16m41.423s
user	16m8.684s
sys	0m29.768s
*/
