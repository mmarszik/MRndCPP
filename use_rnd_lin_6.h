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

namespace MRnd {

using TMRnd = RndLin6;

}
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

real	0m11.106s
user	0m11.093s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.95e+07  |3842383418|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.99999735|   WEAK   
      diehard_operm5|   0|   1000000|     100|0.84106327|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.30456719|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.52545848|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.95263853|  PASSED  
        diehard_opso|   0|   2097152|     100|0.29040032|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.45122821|  PASSED  
         diehard_dna|   0|   2097152|     100|0.96692219|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.96746405|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.04565834|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.59549008|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.03465571|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.33910476|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.14189868|  PASSED  
        diehard_sums|   0|       100|     100|0.10951937|  PASSED  
        diehard_runs|   0|    100000|     100|0.23523426|  PASSED  
        diehard_runs|   0|    100000|     100|0.89748040|  PASSED  
       diehard_craps|   0|    200000|     100|0.60023718|  PASSED  
       diehard_craps|   0|    200000|     100|0.77678765|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99097553|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.61904966|  PASSED  
         sts_monobit|   1|    100000|     100|0.69903496|  PASSED  
            sts_runs|   2|    100000|     100|0.15094404|  PASSED  
          sts_serial|   1|    100000|     100|0.45403592|  PASSED  
          sts_serial|   2|    100000|     100|0.24092403|  PASSED  
          sts_serial|   3|    100000|     100|0.65777284|  PASSED  
          sts_serial|   3|    100000|     100|0.96431322|  PASSED  
          sts_serial|   4|    100000|     100|0.10516582|  PASSED  
          sts_serial|   4|    100000|     100|0.33988757|  PASSED  
          sts_serial|   5|    100000|     100|0.23542777|  PASSED  
          sts_serial|   5|    100000|     100|0.66954602|  PASSED  
          sts_serial|   6|    100000|     100|0.67376243|  PASSED  
          sts_serial|   6|    100000|     100|0.76612700|  PASSED  
          sts_serial|   7|    100000|     100|0.06329279|  PASSED  
          sts_serial|   7|    100000|     100|0.38976038|  PASSED  
          sts_serial|   8|    100000|     100|0.65311766|  PASSED  
          sts_serial|   8|    100000|     100|0.67800187|  PASSED  
          sts_serial|   9|    100000|     100|0.57092367|  PASSED  
          sts_serial|   9|    100000|     100|0.05596705|  PASSED  
          sts_serial|  10|    100000|     100|0.30404963|  PASSED  
          sts_serial|  10|    100000|     100|0.99453551|  PASSED  
          sts_serial|  11|    100000|     100|0.39777905|  PASSED  
          sts_serial|  11|    100000|     100|0.43478512|  PASSED  
          sts_serial|  12|    100000|     100|0.90933812|  PASSED  
          sts_serial|  12|    100000|     100|0.51422830|  PASSED  
          sts_serial|  13|    100000|     100|0.65096230|  PASSED  
          sts_serial|  13|    100000|     100|0.74720187|  PASSED  
          sts_serial|  14|    100000|     100|0.14471465|  PASSED  
          sts_serial|  14|    100000|     100|0.26663552|  PASSED  
          sts_serial|  15|    100000|     100|0.55079322|  PASSED  
          sts_serial|  15|    100000|     100|0.98285952|  PASSED  
          sts_serial|  16|    100000|     100|0.78728954|  PASSED  
          sts_serial|  16|    100000|     100|0.43961459|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.55036712|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.96035588|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.63295759|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.85997454|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.47540669|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.92449366|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.46799601|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.68606170|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.98250283|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.85921344|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.82723706|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.31211307|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.16003745|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.80475026|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.23469910|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.22431780|  PASSED  
    rgb_permutations|   2|    100000|     100|0.06454067|  PASSED  
    rgb_permutations|   3|    100000|     100|0.12057834|  PASSED  
    rgb_permutations|   4|    100000|     100|0.57989336|  PASSED  
    rgb_permutations|   5|    100000|     100|0.66628404|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.79707211|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.24523736|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.03530925|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.83213437|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.95335459|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.78302993|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.73990391|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.09255502|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.05320795|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.74415740|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.66427669|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.27710092|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.75084308|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.38999071|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.61281900|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.17725170|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.28474399|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.56375276|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.06529937|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.51019719|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.78347677|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.55288780|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.43969051|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.74145220|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.57895729|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.52770561|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.47387271|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.14563943|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.56816198|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.94764165|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.94035596|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.37447895|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.06974567|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.73804314|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.95118778|  PASSED  
             dab_dct| 256|     50000|       1|0.50285763|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.38762397|  PASSED  
        dab_filltree|  32|  15000000|       1|0.19763735|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.52721764|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.25419700|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.12189163|  PASSED  

real	74m2.283s
user	64m57.014s
sys	9m3.634s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x6cb01998
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x6cb01998
length= 32 megabytes (2^25 bytes), time= 2.2 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 64 megabytes (2^26 bytes), time= 4.5 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 128 megabytes (2^27 bytes), time= 7.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 256 megabytes (2^28 bytes), time= 13.1 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.8  p =1-5.0e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x6cb01998
length= 512 megabytes (2^29 bytes), time= 22.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 1 gigabyte (2^30 bytes), time= 40.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 2 gigabytes (2^31 bytes), time= 73.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 4 gigabytes (2^32 bytes), time= 137 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+4,13-1,T)                  R= +10.8  p =  2.8e-5   mildly suspicious
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x6cb01998
length= 8 gigabytes (2^33 bytes), time= 264 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 16 gigabytes (2^34 bytes), time= 516 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  -7.1  p =1-1.3e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x6cb01998
length= 32 gigabytes (2^35 bytes), time= 1008 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 64 gigabytes (2^36 bytes), time= 1953 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 128 gigabytes (2^37 bytes), time= 3876 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 256 gigabytes (2^38 bytes), time= 7729 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 512 gigabytes (2^39 bytes), time= 15636 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 1 terabyte (2^40 bytes), time= 32139 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 2 terabytes (2^41 bytes), time= 60707 seconds
  no anomalies in 299 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 4 terabytes (2^42 bytes), time= 123884 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 8 terabytes (2^43 bytes), time= 244813 seconds
  no anomalies in 322 test result(s)

rng=RNG_stdin, seed=0x6cb01998
length= 11.403 terabytes (2^43.511 bytes), time= 345602 seconds
  no anomalies in 327 test result(s)


real	5760m3.471s
user	5635m26.159s
sys	119m15.004s
*/
