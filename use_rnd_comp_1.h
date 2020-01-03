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
/// @created on 2019-12-08 02:55:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5d4c00a3-ad7a-4d61-8d5a-8bdc687545af                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_sim_lin.h"

using TRnd = RndComp<RndSimLin01,RndSimLin03,10>;
/* TEST00
time ./MRndCPP 
1585682339
2494875974
1870629489
3954548876
3038153523
1357523021
4611510219091707674

real	0m12.440s
user	0m12.408s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.90e+07  | 321908978|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.77102433|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.69413436|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.85733818|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.52386749|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.89161234|  PASSED  
        diehard_opso|   0|   2097152|     100|0.10179268|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.02419056|  PASSED  
         diehard_dna|   0|   2097152|     100|0.27039004|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.78612394|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.46374879|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.03536008|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.97268351|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.10291125|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.09224023|  PASSED  
        diehard_sums|   0|       100|     100|0.14057881|  PASSED  
        diehard_runs|   0|    100000|     100|0.96908236|  PASSED  
        diehard_runs|   0|    100000|     100|0.58346902|  PASSED  
       diehard_craps|   0|    200000|     100|0.99000575|  PASSED  
       diehard_craps|   0|    200000|     100|0.14112930|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.25774079|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.71007205|  PASSED  
         sts_monobit|   1|    100000|     100|0.58831583|  PASSED  
            sts_runs|   2|    100000|     100|0.44599846|  PASSED  
          sts_serial|   1|    100000|     100|0.48563683|  PASSED  
          sts_serial|   2|    100000|     100|0.48324865|  PASSED  
          sts_serial|   3|    100000|     100|0.93471434|  PASSED  
          sts_serial|   3|    100000|     100|0.61887098|  PASSED  
          sts_serial|   4|    100000|     100|0.52903271|  PASSED  
          sts_serial|   4|    100000|     100|0.49227687|  PASSED  
          sts_serial|   5|    100000|     100|0.18877259|  PASSED  
          sts_serial|   5|    100000|     100|0.87298290|  PASSED  
          sts_serial|   6|    100000|     100|0.81318176|  PASSED  
          sts_serial|   6|    100000|     100|0.63775410|  PASSED  
          sts_serial|   7|    100000|     100|0.22483132|  PASSED  
          sts_serial|   7|    100000|     100|0.09669004|  PASSED  
          sts_serial|   8|    100000|     100|0.70578992|  PASSED  
          sts_serial|   8|    100000|     100|0.58131767|  PASSED  
          sts_serial|   9|    100000|     100|0.10227024|  PASSED  
          sts_serial|   9|    100000|     100|0.03243945|  PASSED  
          sts_serial|  10|    100000|     100|0.97416264|  PASSED  
          sts_serial|  10|    100000|     100|0.17369705|  PASSED  
          sts_serial|  11|    100000|     100|0.92237250|  PASSED  
          sts_serial|  11|    100000|     100|0.09011402|  PASSED  
          sts_serial|  12|    100000|     100|0.86824351|  PASSED  
          sts_serial|  12|    100000|     100|0.26041345|  PASSED  
          sts_serial|  13|    100000|     100|0.14865130|  PASSED  
          sts_serial|  13|    100000|     100|0.54110622|  PASSED  
          sts_serial|  14|    100000|     100|0.79870625|  PASSED  
          sts_serial|  14|    100000|     100|0.06037115|  PASSED  
          sts_serial|  15|    100000|     100|0.57337438|  PASSED  
          sts_serial|  15|    100000|     100|0.69904615|  PASSED  
          sts_serial|  16|    100000|     100|0.57215859|  PASSED  
          sts_serial|  16|    100000|     100|0.78858247|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.68000033|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.49693279|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.74701961|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.15277762|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.33096226|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.07101268|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.37402162|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.09227097|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.06831951|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.78159365|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.38262746|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.80857533|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.25490060|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.97588267|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.41296842|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.02956020|  PASSED  
    rgb_permutations|   2|    100000|     100|0.32000567|  PASSED  
    rgb_permutations|   3|    100000|     100|0.71070507|  PASSED  
    rgb_permutations|   4|    100000|     100|0.17203506|  PASSED  
    rgb_permutations|   5|    100000|     100|0.61831207|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.44240724|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.96419587|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.35077530|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.29791061|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.45856963|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.22434521|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.91511529|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.68434689|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.91336275|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.39108570|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.99574702|   WEAK   
      rgb_lagged_sum|  11|   1000000|     100|0.78217037|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.20659243|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.36880543|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.55010135|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.14598278|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.07901368|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.89432278|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.96359115|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.09010153|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.64891348|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.97105951|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.40527011|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.92868651|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.72661967|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.86901497|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.46967854|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.59625475|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.94130982|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.48873638|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.99670305|   WEAK   
      rgb_lagged_sum|  31|   1000000|     100|0.18727443|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.04763699|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.63039342|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.73771159|  PASSED  
             dab_dct| 256|     50000|       1|0.62775472|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.90622259|  PASSED  
        dab_filltree|  32|  15000000|       1|0.45518645|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.53665237|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.96725073|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.35943433|  PASSED  

real	51m48.342s
user	48m10.968s
sys	3m30.392s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x39822dc2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x39822dc2
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x39822dc2
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x39822dc2
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +5.1  p =  8.4e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x39822dc2
length= 1 gigabyte (2^30 bytes), time= 20.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x39822dc2
length= 2 gigabytes (2^31 bytes), time= 39.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x39822dc2
length= 4 gigabytes (2^32 bytes), time= 76.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x39822dc2
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +5.0  p =  3.3e-4   unusual          
  [Low1/32]BCFN(2+3,13-3,T)         R=  -7.1  p =1-6.5e-4   unusual          
  ...and 158 test result(s) without anomalies


real	1m43.718s
user	1m40.340s
sys	0m3.212s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf1d59a37
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf1d59a37
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf1d59a37
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf1d59a37
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf1d59a37
length= 1 gigabyte (2^30 bytes), time= 20.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf1d59a37
length= 2 gigabytes (2^31 bytes), time= 39.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf1d59a37
length= 4 gigabytes (2^32 bytes), time= 77.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xf1d59a37
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.877s
user	1m39.424s
sys	0m3.156s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x66c7c16d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x66c7c16d
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x66c7c16d
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x66c7c16d
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x66c7c16d
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x66c7c16d
length= 2 gigabytes (2^31 bytes), time= 39.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.8  p =1-2.4e-3   unusual          
  [Low8/32]DC6-9x1Bytes-1           R=  +5.1  p =  9.2e-3   unusual          
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0x66c7c16d
length= 4 gigabytes (2^32 bytes), time= 78.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.8  p =1-9.8e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x66c7c16d
length= 5.250 gigabytes (2^32.392 bytes), time= 106 seconds
  no anomalies in 160 test result(s)


real	1m46.323s
user	1m42.856s
sys	0m3.188s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5e54c82d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5e54c82d
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5e54c82d
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +4.1  p =  9.8e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5e54c82d
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +5.0  p =  2.2e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5e54c82d
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5e54c82d
length= 2 gigabytes (2^31 bytes), time= 39.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -5.3  p =1-1.1e-3   mildly suspicious
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5e54c82d
length= 4 gigabytes (2^32 bytes), time= 76.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x5e54c82d
length= 8 gigabytes (2^33 bytes), time= 158 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-2,T)         R=  -6.9  p =1-1.4e-3   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5e54c82d
length= 16 gigabytes (2^34 bytes), time= 321 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x5e54c82d
length= 32 gigabytes (2^35 bytes), time= 644 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x5e54c82d
length= 64 gigabytes (2^36 bytes), time= 1303 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x5e54c82d
length= 128 gigabytes (2^37 bytes), time= 2608 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x5e54c82d
length= 177.000 gigabytes (2^37.468 bytes), time= 3603 seconds
  no anomalies in 201 test result(s)


real	60m4.064s
user	58m15.212s
sys	1m40.380s
*/
/* TEST00
time ./MRndCPP 
1585682339
2494875974
1870629489
3954548876
3038153523
1357523021
18445950864565601562

real	1m39.493s
user	1m39.400s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.89e+07  |2717972438|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.82773912|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.08331322|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.48363270|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.90431983|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.30655571|  PASSED  
        diehard_opso|   0|   2097152|     100|0.84884290|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.66043687|  PASSED  
         diehard_dna|   0|   2097152|     100|0.01964919|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.78591898|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.78828704|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.36104913|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.69120430|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.59471964|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.02498587|  PASSED  
        diehard_sums|   0|       100|     100|0.16767293|  PASSED  
        diehard_runs|   0|    100000|     100|0.30459550|  PASSED  
        diehard_runs|   0|    100000|     100|0.98045147|  PASSED  
       diehard_craps|   0|    200000|     100|0.07339526|  PASSED  
       diehard_craps|   0|    200000|     100|0.53363740|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.20474756|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99464395|  PASSED  
         sts_monobit|   1|    100000|     100|0.02403352|  PASSED  
            sts_runs|   2|    100000|     100|0.93107355|  PASSED  
          sts_serial|   1|    100000|     100|0.49233395|  PASSED  
          sts_serial|   2|    100000|     100|0.74235624|  PASSED  
          sts_serial|   3|    100000|     100|0.71426131|  PASSED  
          sts_serial|   3|    100000|     100|0.38833609|  PASSED  
          sts_serial|   4|    100000|     100|0.96911085|  PASSED  
          sts_serial|   4|    100000|     100|0.71290977|  PASSED  
          sts_serial|   5|    100000|     100|0.46273934|  PASSED  
          sts_serial|   5|    100000|     100|0.41279782|  PASSED  
          sts_serial|   6|    100000|     100|0.44446537|  PASSED  
          sts_serial|   6|    100000|     100|0.69988742|  PASSED  
          sts_serial|   7|    100000|     100|0.96001242|  PASSED  
          sts_serial|   7|    100000|     100|0.48161610|  PASSED  
          sts_serial|   8|    100000|     100|0.88664368|  PASSED  
          sts_serial|   8|    100000|     100|0.89272161|  PASSED  
          sts_serial|   9|    100000|     100|0.54249483|  PASSED  
          sts_serial|   9|    100000|     100|0.24582510|  PASSED  
          sts_serial|  10|    100000|     100|0.44792183|  PASSED  
          sts_serial|  10|    100000|     100|0.75157144|  PASSED  
          sts_serial|  11|    100000|     100|0.95874907|  PASSED  
          sts_serial|  11|    100000|     100|0.19346277|  PASSED  
          sts_serial|  12|    100000|     100|0.98285979|  PASSED  
          sts_serial|  12|    100000|     100|0.86321323|  PASSED  
          sts_serial|  13|    100000|     100|0.35327438|  PASSED  
          sts_serial|  13|    100000|     100|0.86231317|  PASSED  
          sts_serial|  14|    100000|     100|0.98517073|  PASSED  
          sts_serial|  14|    100000|     100|0.73950915|  PASSED  
          sts_serial|  15|    100000|     100|0.92900771|  PASSED  
          sts_serial|  15|    100000|     100|0.34171585|  PASSED  
          sts_serial|  16|    100000|     100|0.70724022|  PASSED  
          sts_serial|  16|    100000|     100|0.84479700|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.29255101|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.37367426|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.07387263|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.72454759|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.63745770|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.40978509|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.99992715|   WEAK   
         rgb_bitdist|   8|    100000|     100|0.76769525|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.02087066|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.19726735|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.49129209|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.82233235|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.85618478|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.24678827|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.55337122|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.50119417|  PASSED  
    rgb_permutations|   2|    100000|     100|0.92856273|  PASSED  
    rgb_permutations|   3|    100000|     100|0.81686483|  PASSED  
    rgb_permutations|   4|    100000|     100|0.18187699|  PASSED  
    rgb_permutations|   5|    100000|     100|0.80479951|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.99431731|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.23274976|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.93120264|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.82214491|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.56246042|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.12591531|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.52359719|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.46970202|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.86278009|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.91886894|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.33173467|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.94048191|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.35099325|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.74024298|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.99769778|   WEAK   
      rgb_lagged_sum|  15|   1000000|     100|0.48325214|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.62722009|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.81739385|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.74333250|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.22898974|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.83369349|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.71964370|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.56511862|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.32494190|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.88874233|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.96729134|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.77736605|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.66898334|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.19899638|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.25994097|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.13916059|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.85604596|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.90711391|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.09070089|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.81644371|  PASSED  
             dab_dct| 256|     50000|       1|0.12788619|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.67476194|  PASSED  
        dab_filltree|  32|  15000000|       1|0.23525788|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.91506461|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.02669768|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.78160242|  PASSED  

real	54m15.893s
user	50m35.736s
sys	3m37.196s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6095ee07
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6095ee07
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.8  p =  1.3e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6095ee07
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6095ee07
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6095ee07
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R=  +8.0  p =  1.9e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6095ee07
length= 2 gigabytes (2^31 bytes), time= 39.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6095ee07
length= 4 gigabytes (2^32 bytes), time= 76.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x6095ee07
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.273s
user	1m38.212s
sys	0m2.936s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8001f549
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8001f549
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +5.3  p =  7.6e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8001f549
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8001f549
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8001f549
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x8001f549
length= 2 gigabytes (2^31 bytes), time= 41.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8001f549
length= 4 gigabytes (2^32 bytes), time= 81.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x8001f549
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  no anomalies in 159 test result(s)


real	1m42.694s
user	1m39.772s
sys	0m2.812s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xee333d1a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xee333d1a
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xee333d1a
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xee333d1a
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xee333d1a
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xee333d1a
length= 2 gigabytes (2^31 bytes), time= 39.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xee333d1a
length= 4 gigabytes (2^32 bytes), time= 76.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xee333d1a
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m43.181s
user	1m40.024s
sys	0m3.056s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4062306
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4062306
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4062306
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4062306
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x4062306
length= 1 gigabyte (2^30 bytes), time= 20.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4062306
length= 2 gigabytes (2^31 bytes), time= 39.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x4062306
length= 4 gigabytes (2^32 bytes), time= 81.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+7,13-6,T)         R= +13.7  p =  4.0e-5   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4062306
length= 8 gigabytes (2^33 bytes), time= 164 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x4062306
length= 16 gigabytes (2^34 bytes), time= 329 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x4062306
length= 32 gigabytes (2^35 bytes), time= 653 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x4062306
length= 64 gigabytes (2^36 bytes), time= 1319 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x4062306
length= 128 gigabytes (2^37 bytes), time= 2634 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -3.9  p =1-2.8e-3   unusual          
  ...and 195 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4062306
length= 174.750 gigabytes (2^37.449 bytes), time= 3604 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.2  p =1-5.8e-3   unusual          
  ...and 200 test result(s) without anomalies


real	60m5.635s
user	58m7.276s
sys	1m41.056s
*/
