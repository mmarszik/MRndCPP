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

using TRnd = RndLin6;
/* TEST00
time ./MRndCPP 10 
2746169428
2224423598
606132397
4050087301
1037474402
100677599
388087734
363123235
2805653570
3441914168
17270905218059461377

real	0m2.579s
user	0m2.579s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.53e+07  |3362191376|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.32491317|  PASSED  

real	0m22.086s
user	0m22.354s
sys	0m0.629s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x92ccb72f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x92ccb72f
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R=  +9.3  p =  1.3e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x92ccb72f
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x92ccb72f
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  -6.9  p =1-1.7e-3   unusual          
  [Low1/32]BCFN(2+3,13-5,T)         R= +11.5  p =  1.0e-4   unusual          
  ...and 169 test result(s) without anomalies

rng=RNG_stdin, seed=0x92ccb72f
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x92ccb72f
length= 2 gigabytes (2^31 bytes), time= 41.9 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.3  p =1-1.5e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x92ccb72f
length= 4 gigabytes (2^32 bytes), time= 80.7 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x92ccb72f
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x92ccb72f
length= 15.250 gigabytes (2^33.931 bytes), time= 303 seconds
  no anomalies in 226 test result(s)


real	5m3.409s
user	5m1.782s
sys	0m9.598s
*/
/* TEST00
time ./MRndCPP 10 
2746169428
2224423598
606132397
4050087301
1037474402
100677599
388087734
363123235
2805653570
3441914168
17270905218059461377

real	0m3.096s
user	0m3.092s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.24e+07  |2196602875|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.43801949|  PASSED  

real	0m24.885s
user	0m24.388s
sys	0m0.464s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x5590b8e3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x5590b8e3
length= 128 megabytes (2^27 bytes), time= 3.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -3.9  p =1-7.9e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x5590b8e3
length= 256 megabytes (2^28 bytes), time= 6.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.5  p =1-2.8e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x5590b8e3
length= 512 megabytes (2^29 bytes), time= 12.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 1 gigabyte (2^30 bytes), time= 24.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 2 gigabytes (2^31 bytes), time= 46.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 4 gigabytes (2^32 bytes), time= 89.7 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 8 gigabytes (2^33 bytes), time= 184 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 16 gigabytes (2^34 bytes), time= 370 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 32 gigabytes (2^35 bytes), time= 733 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.7e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x5590b8e3
length= 43.250 gigabytes (2^35.435 bytes), time= 1002 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +5.3  p =  6.6e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -4.5  p =1-3.5e-3   unusual          
  ...and 240 test result(s) without anomalies


real	16m43.442s
user	16m25.640s
sys	0m16.832s
*/
/* TEST00
time ./MRndCPP 12 
2746169428
2224423598
606132397
4050087301
1037474402
100677599
388087734
363123235
2805653570
3441914168
17226403609958136126

real	0m9.957s
user	0m9.952s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.17e+07  |3894597440|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.26340106|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.08635476|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.39061911|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.99684707|   WEAK   
   diehard_bitstream|   0|   2097152|     100|0.92199290|  PASSED  
        diehard_opso|   0|   2097152|     100|0.68694762|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.08119622|  PASSED  
         diehard_dna|   0|   2097152|     100|0.05160748|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.98772458|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.80301488|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.54496665|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.51597257|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.71278831|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.87145388|  PASSED  
        diehard_sums|   0|       100|     100|0.07310065|  PASSED  
        diehard_runs|   0|    100000|     100|0.94026078|  PASSED  
        diehard_runs|   0|    100000|     100|0.25307589|  PASSED  
       diehard_craps|   0|    200000|     100|0.01181878|  PASSED  
       diehard_craps|   0|    200000|     100|0.42556611|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.14328323|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.12192405|  PASSED  
         sts_monobit|   1|    100000|     100|0.19308775|  PASSED  
            sts_runs|   2|    100000|     100|0.69087810|  PASSED  
          sts_serial|   1|    100000|     100|0.99645679|   WEAK   
          sts_serial|   2|    100000|     100|0.97473146|  PASSED  
          sts_serial|   3|    100000|     100|0.93155997|  PASSED  
          sts_serial|   3|    100000|     100|0.92613831|  PASSED  
          sts_serial|   4|    100000|     100|0.99943648|   WEAK   
          sts_serial|   4|    100000|     100|0.84870892|  PASSED  
          sts_serial|   5|    100000|     100|0.84879371|  PASSED  
          sts_serial|   5|    100000|     100|0.88309135|  PASSED  
          sts_serial|   6|    100000|     100|0.75980479|  PASSED  
          sts_serial|   6|    100000|     100|0.86087795|  PASSED  
          sts_serial|   7|    100000|     100|0.56701470|  PASSED  
          sts_serial|   7|    100000|     100|0.00683731|  PASSED  
          sts_serial|   8|    100000|     100|0.02694198|  PASSED  
          sts_serial|   8|    100000|     100|0.03730378|  PASSED  
          sts_serial|   9|    100000|     100|0.37882715|  PASSED  
          sts_serial|   9|    100000|     100|0.57839387|  PASSED  
          sts_serial|  10|    100000|     100|0.25446563|  PASSED  
          sts_serial|  10|    100000|     100|0.76549357|  PASSED  
          sts_serial|  11|    100000|     100|0.17818397|  PASSED  
          sts_serial|  11|    100000|     100|0.25439801|  PASSED  
          sts_serial|  12|    100000|     100|0.31883499|  PASSED  
          sts_serial|  12|    100000|     100|0.98965238|  PASSED  
          sts_serial|  13|    100000|     100|0.25177263|  PASSED  
          sts_serial|  13|    100000|     100|0.34830444|  PASSED  
          sts_serial|  14|    100000|     100|0.26527595|  PASSED  
          sts_serial|  14|    100000|     100|0.99972436|   WEAK   
          sts_serial|  15|    100000|     100|0.84153112|  PASSED  
          sts_serial|  15|    100000|     100|0.63730464|  PASSED  
          sts_serial|  16|    100000|     100|0.35670292|  PASSED  
          sts_serial|  16|    100000|     100|0.80192670|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.10262051|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.30916555|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.93419361|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.31849900|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.52256692|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.02930327|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.76209839|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.85651097|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.15201094|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.00290970|   WEAK   
         rgb_bitdist|  11|    100000|     100|0.56281710|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.47725387|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.71994516|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.93230656|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.00647145|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.29011854|  PASSED  
    rgb_permutations|   2|    100000|     100|0.46565667|  PASSED  
    rgb_permutations|   3|    100000|     100|0.99987595|   WEAK   
    rgb_permutations|   4|    100000|     100|0.43050040|  PASSED  
    rgb_permutations|   5|    100000|     100|0.74909283|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.08480279|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.61390151|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.96044409|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.74377608|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.61050311|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.00933667|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.86548549|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.21424454|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.66645789|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.41822961|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.80170256|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.99996621|   WEAK   
      rgb_lagged_sum|  12|   1000000|     100|0.19437275|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.16040197|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.13526414|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.12430976|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.99729876|   WEAK   
      rgb_lagged_sum|  17|   1000000|     100|0.74485128|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.70338937|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.48931351|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.24593704|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.53913268|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.47407211|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.78710767|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.48829235|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.88037991|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.52191054|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.45733948|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.71236077|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.66439281|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.80052541|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.99895866|   WEAK   
      rgb_lagged_sum|  32|   1000000|     100|0.91026182|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.76767538|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.05122885|  PASSED  
             dab_dct| 256|     50000|       1|0.38502774|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.31538081|  PASSED  
        dab_filltree|  32|  15000000|       1|0.24262791|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.88514005|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.29324082|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.36427368|  PASSED  

real	64m34.537s
user	56m46.916s
sys	7m42.831s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x1c722c34
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x1c722c34
length= 128 megabytes (2^27 bytes), time= 3.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x1c722c34
length= 256 megabytes (2^28 bytes), time= 8.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x1c722c34
length= 512 megabytes (2^29 bytes), time= 16.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x1c722c34
length= 1 gigabyte (2^30 bytes), time= 32.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x1c722c34
length= 2 gigabytes (2^31 bytes), time= 61.1 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x1c722c34
length= 4 gigabytes (2^32 bytes), time= 116 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x1c722c34
length= 8 gigabytes (2^33 bytes), time= 230 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x1c722c34
length= 16 gigabytes (2^34 bytes), time= 463 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x1c722c34
length= 32 gigabytes (2^35 bytes), time= 900 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x1c722c34
length= 64 gigabytes (2^36 bytes), time= 1782 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x1c722c34
length= 128 gigabytes (2^37 bytes), time= 3528 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x1c722c34
length= 130.750 gigabytes (2^37.031 bytes), time= 3600 seconds
  no anomalies in 258 test result(s)


real	60m1.854s
user	58m56.978s
sys	1m48.763s
*/
