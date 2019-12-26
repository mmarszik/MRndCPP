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
4611545688205328229

real	0m11.684s
user	0m11.676s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.98e+07  |3339041594|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.55071187|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.27996289|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.04720121|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.63201537|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.01226004|  PASSED  
        diehard_opso|   0|   2097152|     100|0.09144758|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.16931388|  PASSED  
         diehard_dna|   0|   2097152|     100|0.94142664|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.83838605|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.72690911|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.71078053|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.88705191|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.63888177|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.90831551|  PASSED  
        diehard_sums|   0|       100|     100|0.22922230|  PASSED  
        diehard_runs|   0|    100000|     100|0.50725814|  PASSED  
        diehard_runs|   0|    100000|     100|0.83189137|  PASSED  
       diehard_craps|   0|    200000|     100|0.28492358|  PASSED  
       diehard_craps|   0|    200000|     100|0.39628131|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.66867872|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.92164930|  PASSED  
         sts_monobit|   1|    100000|     100|0.48563683|  PASSED  
            sts_runs|   2|    100000|     100|0.48048587|  PASSED  
          sts_serial|   1|    100000|     100|0.92126172|  PASSED  
          sts_serial|   2|    100000|     100|0.25872076|  PASSED  
          sts_serial|   3|    100000|     100|0.49620197|  PASSED  
          sts_serial|   3|    100000|     100|0.40603248|  PASSED  
          sts_serial|   4|    100000|     100|0.74416655|  PASSED  
          sts_serial|   4|    100000|     100|0.50387659|  PASSED  
          sts_serial|   5|    100000|     100|0.26792611|  PASSED  
          sts_serial|   5|    100000|     100|0.72782291|  PASSED  
          sts_serial|   6|    100000|     100|0.21230669|  PASSED  
          sts_serial|   6|    100000|     100|0.58652909|  PASSED  
          sts_serial|   7|    100000|     100|0.46354092|  PASSED  
          sts_serial|   7|    100000|     100|0.66443334|  PASSED  
          sts_serial|   8|    100000|     100|0.56925256|  PASSED  
          sts_serial|   8|    100000|     100|0.60219145|  PASSED  
          sts_serial|   9|    100000|     100|0.80665777|  PASSED  
          sts_serial|   9|    100000|     100|0.80158455|  PASSED  
          sts_serial|  10|    100000|     100|0.83502348|  PASSED  
          sts_serial|  10|    100000|     100|0.37317425|  PASSED  
          sts_serial|  11|    100000|     100|0.69816987|  PASSED  
          sts_serial|  11|    100000|     100|0.80176880|  PASSED  
          sts_serial|  12|    100000|     100|0.76032787|  PASSED  
          sts_serial|  12|    100000|     100|0.80467923|  PASSED  
          sts_serial|  13|    100000|     100|0.99302597|  PASSED  
          sts_serial|  13|    100000|     100|0.99949380|   WEAK   
          sts_serial|  14|    100000|     100|0.82860793|  PASSED  
          sts_serial|  14|    100000|     100|0.86213060|  PASSED  
          sts_serial|  15|    100000|     100|0.63112477|  PASSED  
          sts_serial|  15|    100000|     100|0.81101742|  PASSED  
          sts_serial|  16|    100000|     100|0.37363781|  PASSED  
          sts_serial|  16|    100000|     100|0.78861944|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.91090862|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.34110074|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.99806213|   WEAK   
         rgb_bitdist|   4|    100000|     100|0.14307539|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.55747155|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.09199452|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.00334480|   WEAK   
         rgb_bitdist|   8|    100000|     100|0.27451008|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.97252322|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.38337761|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.36837951|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.22048408|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.09422390|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.10098639|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.29504247|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.71885062|  PASSED  
    rgb_permutations|   2|    100000|     100|0.60727703|  PASSED  
    rgb_permutations|   3|    100000|     100|0.44821794|  PASSED  
    rgb_permutations|   4|    100000|     100|0.24077525|  PASSED  
    rgb_permutations|   5|    100000|     100|0.23596034|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.15486510|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.24672797|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.82564150|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.88447479|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.96490752|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.34187440|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.26361094|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.16907264|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.73119005|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.60481258|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.85527798|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.12408204|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.49231253|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.88517084|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.77781377|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.97190706|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.93244839|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.65054324|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.24356768|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.04394935|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.02921584|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.64330884|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.97209900|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.98786636|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.97302178|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.85160669|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.85499089|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.90943864|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.45336770|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.51764405|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.15410032|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.78070861|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.59115906|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.82702741|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.14613408|  PASSED  
             dab_dct| 256|     50000|       1|0.01883347|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.97300512|  PASSED  
        dab_filltree|  32|  15000000|       1|0.66222787|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.19458304|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.49796217|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.75266711|  PASSED  

real	53m26.285s
user	49m37.216s
sys	3m41.884s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7011e212
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7011e212
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.5  p = 0.988     unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7011e212
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7011e212
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.0  p =  9.9e-3   unusual          
  Gap-16:A                          R=  -3.5  p =1-2.8e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7011e212
length= 1 gigabyte (2^30 bytes), time= 23.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7011e212
length= 2 gigabytes (2^31 bytes), time= 46.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x7011e212
length= 4 gigabytes (2^32 bytes), time= 91.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x7011e212
length= 4.500 gigabytes (2^32.170 bytes), time= 105 seconds
  no anomalies in 156 test result(s)


real	1m45.382s
user	1m42.616s
sys	0m2.604s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2e6bab22
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2e6bab22
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.5  p =1-3.0e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2e6bab22
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.4  p =  7.9e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2e6bab22
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2e6bab22
length= 1 gigabyte (2^30 bytes), time= 20.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.8  p =1-8.2e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2e6bab22
length= 2 gigabytes (2^31 bytes), time= 39.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2e6bab22
length= 4 gigabytes (2^32 bytes), time= 75.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2e6bab22
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m45.118s
user	1m41.972s
sys	0m2.848s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9ae4f798
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9ae4f798
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.8  p =1-2.1e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9ae4f798
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9ae4f798
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x9ae4f798
length= 1 gigabyte (2^30 bytes), time= 20.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9ae4f798
length= 2 gigabytes (2^31 bytes), time= 39.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x9ae4f798
length= 4 gigabytes (2^32 bytes), time= 78.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x9ae4f798
length= 5.250 gigabytes (2^32.392 bytes), time= 106 seconds
  no anomalies in 160 test result(s)


real	1m46.475s
user	1m43.244s
sys	0m2.948s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbba7ed2a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbba7ed2a
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xbba7ed2a
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xbba7ed2a
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xbba7ed2a
length= 1 gigabyte (2^30 bytes), time= 20.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xbba7ed2a
length= 2 gigabytes (2^31 bytes), time= 38.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xbba7ed2a
length= 4 gigabytes (2^32 bytes), time= 75.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xbba7ed2a
length= 8 gigabytes (2^33 bytes), time= 156 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xbba7ed2a
length= 16 gigabytes (2^34 bytes), time= 317 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  +4.0  p =  2.5e-3   unusual          
  [Low1/32]Gap-16:A                 R=  -4.3  p =1-5.2e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbba7ed2a
length= 32 gigabytes (2^35 bytes), time= 634 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xbba7ed2a
length= 64 gigabytes (2^36 bytes), time= 1283 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xbba7ed2a
length= 128 gigabytes (2^37 bytes), time= 2571 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xbba7ed2a
length= 179.500 gigabytes (2^37.488 bytes), time= 3604 seconds
  no anomalies in 201 test result(s)


real	60m4.312s
user	58m15.492s
sys	1m39.752s
*/
