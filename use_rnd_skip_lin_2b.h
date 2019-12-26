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
/// @created on 2019-12-08 03:02:44 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 57c91b2b-729f-4973-847f-f893792db016                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_skip_lin.h"

using TRnd = RndSkipLin2b;
/* TEST00
time ./MRndCPP 
878713968
123488888
3326016157
2631003783
2609393688
3629582358
4611673432721638014

real	1m50.836s
user	1m50.684s
sys	0m0.048s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.27e+07  |  29668011|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.41523370|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.85637324|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.66841756|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.45130648|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.51557200|  PASSED  
        diehard_opso|   0|   2097152|     100|0.39992958|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.75800880|  PASSED  
         diehard_dna|   0|   2097152|     100|0.05575097|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.58578510|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.58832972|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.96263190|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.95170726|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.05880052|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.67695866|  PASSED  
        diehard_sums|   0|       100|     100|0.00011314|   WEAK   
        diehard_runs|   0|    100000|     100|0.79109577|  PASSED  
        diehard_runs|   0|    100000|     100|0.62756589|  PASSED  
       diehard_craps|   0|    200000|     100|0.18849649|  PASSED  
       diehard_craps|   0|    200000|     100|0.88316529|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.12490691|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.98348811|  PASSED  
         sts_monobit|   1|    100000|     100|0.08762119|  PASSED  
            sts_runs|   2|    100000|     100|0.19411723|  PASSED  
          sts_serial|   1|    100000|     100|0.77329350|  PASSED  
          sts_serial|   2|    100000|     100|0.72730674|  PASSED  
          sts_serial|   3|    100000|     100|0.40256828|  PASSED  
          sts_serial|   3|    100000|     100|0.01436018|  PASSED  
          sts_serial|   4|    100000|     100|0.50676624|  PASSED  
          sts_serial|   4|    100000|     100|0.78736189|  PASSED  
          sts_serial|   5|    100000|     100|0.59329114|  PASSED  
          sts_serial|   5|    100000|     100|0.04743952|  PASSED  
          sts_serial|   6|    100000|     100|0.25135571|  PASSED  
          sts_serial|   6|    100000|     100|0.62840919|  PASSED  
          sts_serial|   7|    100000|     100|0.57287302|  PASSED  
          sts_serial|   7|    100000|     100|0.60040057|  PASSED  
          sts_serial|   8|    100000|     100|0.37841711|  PASSED  
          sts_serial|   8|    100000|     100|0.30536845|  PASSED  
          sts_serial|   9|    100000|     100|0.75414362|  PASSED  
          sts_serial|   9|    100000|     100|0.14673609|  PASSED  
          sts_serial|  10|    100000|     100|0.95464807|  PASSED  
          sts_serial|  10|    100000|     100|0.99745989|   WEAK   
          sts_serial|  11|    100000|     100|0.69231748|  PASSED  
          sts_serial|  11|    100000|     100|0.90654328|  PASSED  
          sts_serial|  12|    100000|     100|0.14076594|  PASSED  
          sts_serial|  12|    100000|     100|0.34503291|  PASSED  
          sts_serial|  13|    100000|     100|0.59355791|  PASSED  
          sts_serial|  13|    100000|     100|0.92388941|  PASSED  
          sts_serial|  14|    100000|     100|0.38352417|  PASSED  
          sts_serial|  14|    100000|     100|0.49889556|  PASSED  
          sts_serial|  15|    100000|     100|0.62370723|  PASSED  
          sts_serial|  15|    100000|     100|0.24804576|  PASSED  
          sts_serial|  16|    100000|     100|0.16107583|  PASSED  
          sts_serial|  16|    100000|     100|0.81708324|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.97366269|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.76808774|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.59150169|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.47163785|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.38403411|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.98314687|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.89441936|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.43543857|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.44130854|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.79896402|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.31137866|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.59608687|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.79531867|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.41015950|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.64811465|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.64224971|  PASSED  
    rgb_permutations|   2|    100000|     100|0.99790392|   WEAK   
    rgb_permutations|   3|    100000|     100|0.93093418|  PASSED  
    rgb_permutations|   4|    100000|     100|0.96711990|  PASSED  
    rgb_permutations|   5|    100000|     100|0.47061217|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.93445432|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.95648208|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.15143822|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.38667553|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.15719386|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.48020052|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.73367816|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.36567784|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.27915504|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.95212845|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.95178144|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.91289142|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.77619291|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.23910725|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.43981575|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.61481623|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.47687340|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.97716136|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.61315232|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.74509803|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.90093996|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.54270253|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.44762088|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.14200183|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.61079506|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.48359160|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.11653588|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.82793892|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.81822242|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.01232759|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.75343554|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.75959290|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.97208842|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.57005838|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.39260618|  PASSED  
             dab_dct| 256|     50000|       1|0.17522190|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.33940330|  PASSED  
        dab_filltree|  32|  15000000|       1|0.25108676|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.81625227|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.35254561|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.43093581|  PASSED  

real	97m50.680s
user	95m5.540s
sys	2m38.360s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x499deb22
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x499deb22
length= 64 megabytes (2^26 bytes), time= 2.1 seconds
  no anomalies in 108 test result(s)

rng=RNG_stdin32, seed=0x499deb22
length= 128 megabytes (2^27 bytes), time= 4.8 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x499deb22
length= 256 megabytes (2^28 bytes), time= 9.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.6  p =1-2.4e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x499deb22
length= 512 megabytes (2^29 bytes), time= 18.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.7  p = 0.990     unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x499deb22
length= 1 gigabyte (2^30 bytes), time= 35.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x499deb22
length= 2 gigabytes (2^31 bytes), time= 69.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x499deb22
length= 3.000 gigabytes (2^31.585 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.1  p =  2.6e-3   unusual          
  ...and 152 test result(s) without anomalies


real	1m45.223s
user	1m42.896s
sys	0m2.192s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xcadcc052
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xcadcc052
length= 128 megabytes (2^27 bytes), time= 3.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xcadcc052
length= 256 megabytes (2^28 bytes), time= 8.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xcadcc052
length= 512 megabytes (2^29 bytes), time= 16.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xcadcc052
length= 1 gigabyte (2^30 bytes), time= 32.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xcadcc052
length= 2 gigabytes (2^31 bytes), time= 63.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xcadcc052
length= 3.250 gigabytes (2^31.700 bytes), time= 103 seconds
  no anomalies in 153 test result(s)


real	1m43.282s
user	1m40.984s
sys	0m2.208s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9593fc6d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9593fc6d
length= 64 megabytes (2^26 bytes), time= 2.1 seconds
  no anomalies in 108 test result(s)

rng=RNG_stdin32, seed=0x9593fc6d
length= 128 megabytes (2^27 bytes), time= 4.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +3.8  p =  1.5e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9593fc6d
length= 256 megabytes (2^28 bytes), time= 9.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -5.6  p =1-6.9e-4   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9593fc6d
length= 512 megabytes (2^29 bytes), time= 18.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  +4.6  p =  8.2e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -4.0  p =1-6.8e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9593fc6d
length= 1 gigabyte (2^30 bytes), time= 35.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9593fc6d
length= 2 gigabytes (2^31 bytes), time= 71.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x9593fc6d
length= 3.000 gigabytes (2^31.585 bytes), time= 107 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.3  p =  8.3e-3   unusual          
  ...and 152 test result(s) without anomalies


real	1m48.172s
user	1m46.020s
sys	0m2.052s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4d908b8f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4d908b8f
length= 128 megabytes (2^27 bytes), time= 3.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4d908b8f
length= 256 megabytes (2^28 bytes), time= 8.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4d908b8f
length= 512 megabytes (2^29 bytes), time= 16.5 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -4.7  p =1-3.8e-4   unusual          
  [Low1/32]BCFN(2+0,13-5,T)         R=  +9.4  p =  7.2e-4   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4d908b8f
length= 1 gigabyte (2^30 bytes), time= 32.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4d908b8f
length= 2 gigabytes (2^31 bytes), time= 64.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x4d908b8f
length= 4 gigabytes (2^32 bytes), time= 128 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x4d908b8f
length= 8 gigabytes (2^33 bytes), time= 260 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x4d908b8f
length= 16 gigabytes (2^34 bytes), time= 521 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x4d908b8f
length= 32 gigabytes (2^35 bytes), time= 1041 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x4d908b8f
length= 64 gigabytes (2^36 bytes), time= 2089 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x4d908b8f
length= 110.750 gigabytes (2^36.791 bytes), time= 3602 seconds
  no anomalies in 192 test result(s)


real	60m3.232s
user	58m43.764s
sys	1m15.860s
*/
