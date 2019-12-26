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
/// @created on 2019-12-08 03:00:04 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 313a58a6-94ed-47d2-9194-ccfa066f2f73                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2b;
/* TEST00
time ./MRndCPP 
4081487542
2598378608
2001728541
3754126217
2651817580
3324873846
4611667890817589768

real	0m40.911s
user	0m40.736s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.11e+07  |3160657606|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.24693197|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.90274614|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.86555547|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.11681451|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.43567972|  PASSED  
        diehard_opso|   0|   2097152|     100|0.30722510|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.92030498|  PASSED  
         diehard_dna|   0|   2097152|     100|0.02069625|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.44340442|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.66892971|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.30644186|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.81117127|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.86342835|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.91543959|  PASSED  
        diehard_sums|   0|       100|     100|0.58602296|  PASSED  
        diehard_runs|   0|    100000|     100|0.76535360|  PASSED  
        diehard_runs|   0|    100000|     100|0.89518159|  PASSED  
       diehard_craps|   0|    200000|     100|0.36965523|  PASSED  
       diehard_craps|   0|    200000|     100|0.99442936|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.49707088|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.91128586|  PASSED  
         sts_monobit|   1|    100000|     100|0.24968235|  PASSED  
            sts_runs|   2|    100000|     100|0.00363317|   WEAK   
          sts_serial|   1|    100000|     100|0.57691241|  PASSED  
          sts_serial|   2|    100000|     100|0.07709016|  PASSED  
          sts_serial|   3|    100000|     100|0.73448225|  PASSED  
          sts_serial|   3|    100000|     100|0.35616128|  PASSED  
          sts_serial|   4|    100000|     100|0.05487195|  PASSED  
          sts_serial|   4|    100000|     100|0.14861037|  PASSED  
          sts_serial|   5|    100000|     100|0.49627555|  PASSED  
          sts_serial|   5|    100000|     100|0.65018136|  PASSED  
          sts_serial|   6|    100000|     100|0.15078580|  PASSED  
          sts_serial|   6|    100000|     100|0.35676988|  PASSED  
          sts_serial|   7|    100000|     100|0.36535921|  PASSED  
          sts_serial|   7|    100000|     100|0.83715445|  PASSED  
          sts_serial|   8|    100000|     100|0.62149293|  PASSED  
          sts_serial|   8|    100000|     100|0.80330405|  PASSED  
          sts_serial|   9|    100000|     100|0.14232147|  PASSED  
          sts_serial|   9|    100000|     100|0.01518516|  PASSED  
          sts_serial|  10|    100000|     100|0.13467457|  PASSED  
          sts_serial|  10|    100000|     100|0.96893015|  PASSED  
          sts_serial|  11|    100000|     100|0.03612185|  PASSED  
          sts_serial|  11|    100000|     100|0.08252705|  PASSED  
          sts_serial|  12|    100000|     100|0.51077347|  PASSED  
          sts_serial|  12|    100000|     100|0.61545869|  PASSED  
          sts_serial|  13|    100000|     100|0.63684569|  PASSED  
          sts_serial|  13|    100000|     100|0.83344823|  PASSED  
          sts_serial|  14|    100000|     100|0.88996093|  PASSED  
          sts_serial|  14|    100000|     100|0.72144053|  PASSED  
          sts_serial|  15|    100000|     100|0.71602794|  PASSED  
          sts_serial|  15|    100000|     100|0.99471891|  PASSED  
          sts_serial|  16|    100000|     100|0.18771252|  PASSED  
          sts_serial|  16|    100000|     100|0.73719380|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.98761266|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.85136302|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.96700013|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.60155698|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.00179328|   WEAK   
         rgb_bitdist|   6|    100000|     100|0.41931697|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.06669830|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.75324412|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.34987504|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.84254107|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.59041765|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.40981182|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.24600568|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.03253751|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.51614476|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.01107981|  PASSED  
    rgb_permutations|   2|    100000|     100|0.87767666|  PASSED  
    rgb_permutations|   3|    100000|     100|0.46329766|  PASSED  
    rgb_permutations|   4|    100000|     100|0.72376592|  PASSED  
    rgb_permutations|   5|    100000|     100|0.35388460|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.99176873|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.95268543|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.07290555|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.11815276|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.82014740|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.97889967|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.57691818|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.28173010|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.76913060|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.13095467|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.07791861|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.90712151|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.77460827|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.65452487|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.80924629|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.55468371|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.40292325|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.82321357|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.73733751|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.71446429|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.93239393|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.60878475|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.68913573|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.06801124|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.54166000|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.85892943|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.64953554|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.91270049|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.87689309|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.89321977|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.99906501|   WEAK   
      rgb_lagged_sum|  31|   1000000|     100|0.82150067|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.19347055|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.09619751|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.24591854|  PASSED  
             dab_dct| 256|     50000|       1|0.73119407|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.95428538|  PASSED  
        dab_filltree|  32|  15000000|       1|0.53079068|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.02835648|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.81223351|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.95952475|  PASSED  

real	64m42.782s
user	61m4.672s
sys	3m26.112s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xfa84abfc
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xfa84abfc
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xfa84abfc
length= 256 megabytes (2^28 bytes), time= 6.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xfa84abfc
length= 512 megabytes (2^29 bytes), time= 12.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xfa84abfc
length= 1 gigabyte (2^30 bytes), time= 24.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xfa84abfc
length= 2 gigabytes (2^31 bytes), time= 46.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xfa84abfc
length= 4 gigabytes (2^32 bytes), time= 91.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.1  p =1-6.5e-3   unusual          
  [Low8/32]Gap-16:B                 R=  +4.7  p =  5.7e-4   unusual          
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfa84abfc
length= 4.500 gigabytes (2^32.170 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.9  p =1-8.5e-3   unusual          
  [Low8/32]Gap-16:B                 R=  +5.3  p =  1.8e-4   mildly suspicious
  ...and 154 test result(s) without anomalies


real	1m43.716s
user	1m40.292s
sys	0m3.092s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x23d91e3c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x23d91e3c
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x23d91e3c
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x23d91e3c
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x23d91e3c
length= 1 gigabyte (2^30 bytes), time= 24.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x23d91e3c
length= 2 gigabytes (2^31 bytes), time= 46.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x23d91e3c
length= 4 gigabytes (2^32 bytes), time= 94.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x23d91e3c
length= 4.250 gigabytes (2^32.087 bytes), time= 101 seconds
  no anomalies in 156 test result(s)


real	1m41.465s
user	1m38.088s
sys	0m2.836s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xeac0acb0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xeac0acb0
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xeac0acb0
length= 256 megabytes (2^28 bytes), time= 6.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xeac0acb0
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xeac0acb0
length= 1 gigabyte (2^30 bytes), time= 23.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xeac0acb0
length= 2 gigabytes (2^31 bytes), time= 46.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xeac0acb0
length= 4 gigabytes (2^32 bytes), time= 90.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xeac0acb0
length= 4.500 gigabytes (2^32.170 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.3  p =1-5.8e-4   unusual          
  ...and 155 test result(s) without anomalies


real	1m43.478s
user	1m39.940s
sys	0m2.892s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x876e8598
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x876e8598
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x876e8598
length= 256 megabytes (2^28 bytes), time= 6.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x876e8598
length= 512 megabytes (2^29 bytes), time= 12.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x876e8598
length= 1 gigabyte (2^30 bytes), time= 24.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x876e8598
length= 2 gigabytes (2^31 bytes), time= 47.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x876e8598
length= 4 gigabytes (2^32 bytes), time= 91.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x876e8598
length= 8 gigabytes (2^33 bytes), time= 186 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x876e8598
length= 16 gigabytes (2^34 bytes), time= 378 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x876e8598
length= 32 gigabytes (2^35 bytes), time= 757 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.7  p =1-2.9e-3   unusual          
  [Low1/32]BCFN(2+0,13-1,T)         R=  -6.7  p =1-2.2e-3   unusual          
  ...and 178 test result(s) without anomalies

rng=RNG_stdin32, seed=0x876e8598
length= 64 gigabytes (2^36 bytes), time= 1528 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x876e8598
length= 128 gigabytes (2^37 bytes), time= 3058 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  +5.4  p =  1.5e-4   mildly suspicious
  ...and 195 test result(s) without anomalies

rng=RNG_stdin32, seed=0x876e8598
length= 151.000 gigabytes (2^37.238 bytes), time= 3600 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +5.1  p =  1.1e-3   unusual          
  [Low8/32]Gap-16:B                 R=  +6.9  p =  8.2e-6   suspicious       
  ...and 197 test result(s) without anomalies


real	60m0.838s
user	58m14.908s
sys	1m34.964s
*/
