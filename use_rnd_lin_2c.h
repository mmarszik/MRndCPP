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
/// @created on 2019-12-08 03:00:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token fcc8a5df-c948-4aa9-85f8-4774fcd52024                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2c;
/* TEST00
time ./MRndCPP 
842299235
443731814
3731438431
2717125802
1624458502
4017950209
23527818825113

real	3m36.628s
user	3m35.852s
sys	0m0.116s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.92e+07  |1241269278|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.21641887|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.73305608|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.51203755|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.23514107|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.86107736|  PASSED  
        diehard_opso|   0|   2097152|     100|0.56213577|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.24621766|  PASSED  
         diehard_dna|   0|   2097152|     100|0.17856479|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.24630952|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.44096145|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.47786440|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.36593334|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.07929523|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.50008350|  PASSED  
        diehard_sums|   0|       100|     100|0.15987209|  PASSED  
        diehard_runs|   0|    100000|     100|0.53779709|  PASSED  
        diehard_runs|   0|    100000|     100|0.24243771|  PASSED  
       diehard_craps|   0|    200000|     100|0.61581401|  PASSED  
       diehard_craps|   0|    200000|     100|0.31991419|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.74496665|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99004677|  PASSED  
         sts_monobit|   1|    100000|     100|0.08631224|  PASSED  
            sts_runs|   2|    100000|     100|0.01950584|  PASSED  
          sts_serial|   1|    100000|     100|0.41229825|  PASSED  
          sts_serial|   2|    100000|     100|0.17813956|  PASSED  
          sts_serial|   3|    100000|     100|0.10637065|  PASSED  
          sts_serial|   3|    100000|     100|0.37158836|  PASSED  
          sts_serial|   4|    100000|     100|0.67669092|  PASSED  
          sts_serial|   4|    100000|     100|0.76685226|  PASSED  
          sts_serial|   5|    100000|     100|0.71557038|  PASSED  
          sts_serial|   5|    100000|     100|0.91648643|  PASSED  
          sts_serial|   6|    100000|     100|0.00748500|  PASSED  
          sts_serial|   6|    100000|     100|0.12242845|  PASSED  
          sts_serial|   7|    100000|     100|0.02639015|  PASSED  
          sts_serial|   7|    100000|     100|0.60212917|  PASSED  
          sts_serial|   8|    100000|     100|0.21745540|  PASSED  
          sts_serial|   8|    100000|     100|0.85821807|  PASSED  
          sts_serial|   9|    100000|     100|0.35432208|  PASSED  
          sts_serial|   9|    100000|     100|0.73384722|  PASSED  
          sts_serial|  10|    100000|     100|0.69162960|  PASSED  
          sts_serial|  10|    100000|     100|0.62730880|  PASSED  
          sts_serial|  11|    100000|     100|0.17049665|  PASSED  
          sts_serial|  11|    100000|     100|0.37424214|  PASSED  
          sts_serial|  12|    100000|     100|0.19664575|  PASSED  
          sts_serial|  12|    100000|     100|0.56419321|  PASSED  
          sts_serial|  13|    100000|     100|0.36550137|  PASSED  
          sts_serial|  13|    100000|     100|0.95900631|  PASSED  
          sts_serial|  14|    100000|     100|0.94841209|  PASSED  
          sts_serial|  14|    100000|     100|0.74105446|  PASSED  
          sts_serial|  15|    100000|     100|0.42106214|  PASSED  
          sts_serial|  15|    100000|     100|0.96398893|  PASSED  
          sts_serial|  16|    100000|     100|0.75374624|  PASSED  
          sts_serial|  16|    100000|     100|0.93169147|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.05411804|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.85135891|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.50054653|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.90972435|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.22499691|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.22253107|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.86114051|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.99314940|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.90393010|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.70037222|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.40584150|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.62509820|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.99981203|   WEAK   
rgb_minimum_distance|   3|     10000|    1000|0.73942776|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.88218052|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.31601336|  PASSED  
    rgb_permutations|   2|    100000|     100|0.10926448|  PASSED  
    rgb_permutations|   3|    100000|     100|0.99413581|  PASSED  
    rgb_permutations|   4|    100000|     100|0.62180181|  PASSED  
    rgb_permutations|   5|    100000|     100|0.97886336|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.20069491|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.78237238|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.14926450|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.70554739|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.66815965|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.62727569|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.51671688|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.91497454|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.22459640|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.12961382|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.81485971|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.26544991|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.30732651|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.28588628|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.80385163|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.41910765|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.15552297|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.88529107|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.85070199|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.64405480|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.97152786|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.76980707|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.99315446|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.86342610|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.31828514|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.15327323|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.81358319|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.96209249|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.52785077|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.81415580|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.18453081|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.32394519|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.73854934|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.86583794|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.75913254|  PASSED  
             dab_dct| 256|     50000|       1|0.41143003|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.57919404|  PASSED  
        dab_filltree|  32|  15000000|       1|0.67359648|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.24691758|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.72060685|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.66012547|  PASSED  

real	71m20.761s
user	68m8.592s
sys	2m59.168s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf7841929
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf7841929
length= 128 megabytes (2^27 bytes), time= 3.1 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf7841929
length= 256 megabytes (2^28 bytes), time= 6.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf7841929
length= 512 megabytes (2^29 bytes), time= 13.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf7841929
length= 1 gigabyte (2^30 bytes), time= 25.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf7841929
length= 2 gigabytes (2^31 bytes), time= 50.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf7841929
length= 4 gigabytes (2^32 bytes), time= 101 seconds
  no anomalies in 156 test result(s)


real	1m41.738s
user	1m38.176s
sys	0m3.196s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x473ed3d8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x473ed3d8
length= 128 megabytes (2^27 bytes), time= 3.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x473ed3d8
length= 256 megabytes (2^28 bytes), time= 7.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x473ed3d8
length= 512 megabytes (2^29 bytes), time= 14.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.2  p =1-1.6e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x473ed3d8
length= 1 gigabyte (2^30 bytes), time= 27.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x473ed3d8
length= 2 gigabytes (2^31 bytes), time= 53.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x473ed3d8
length= 4 gigabytes (2^32 bytes), time= 105 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x473ed3d8
length= 8 gigabytes (2^33 bytes), time= 220 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.7  p =1-6.4e-4   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x473ed3d8
length= 16 gigabytes (2^34 bytes), time= 446 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.1  p =1-1.7e-3   unusual          
  Gap-16:B                          R=  -4.5  p =1-8.9e-4   unusual          
  FPF-14+6/16:all2                  R=  -1.8  p =1-4.1e-4   unusual          
  [Low8/32]Gap-16:B                 R=  -4.7  p =1-6.3e-4   unusual          
  ...and 168 test result(s) without anomalies

rng=RNG_stdin32, seed=0x473ed3d8
length= 32 gigabytes (2^35 bytes), time= 895 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.5  p =1-9.6e-4   unusual          
  Gap-16:B                          R=  -5.1  p =1-2.8e-4   mildly suspicious
  ...and 178 test result(s) without anomalies

rng=RNG_stdin32, seed=0x473ed3d8
length= 35.750 gigabytes (2^35.160 bytes), time= 1000 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -5.2  p =1-3.0e-4   unusual          
  Gap-16:B                          R=  -5.8  p =1-6.9e-5   mildly suspicious
  [Low8/32]Gap-16:B                 R=  -4.7  p =1-6.6e-4   unusual          
  ...and 177 test result(s) without anomalies


real	16m40.758s
user	16m13.752s
sys	0m23.576s
*/
