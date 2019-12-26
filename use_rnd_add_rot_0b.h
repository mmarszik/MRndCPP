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
/// @created on 2019-12-18 20:18:29 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 237777ff-3974-4e05-8315-702ab941d746                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot0b;
/* TEST00
time ./MRndCPP 
2694043880
2833786223
2010760351
426669355
178073963
3864392419
4611770386721092509

real	0m15.796s
user	0m15.788s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.71e+07  |3907837310|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.03140214|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.27135683|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.84728247|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.86183083|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.53023362|  PASSED  
        diehard_opso|   0|   2097152|     100|0.11522827|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.31792262|  PASSED  
         diehard_dna|   0|   2097152|     100|0.40875219|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.73542603|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.32775534|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.59664629|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.98371986|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.12947759|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.77953082|  PASSED  
        diehard_sums|   0|       100|     100|0.02080085|  PASSED  
        diehard_runs|   0|    100000|     100|0.90698894|  PASSED  
        diehard_runs|   0|    100000|     100|0.29469035|  PASSED  
       diehard_craps|   0|    200000|     100|0.09766445|  PASSED  
       diehard_craps|   0|    200000|     100|0.43221755|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.91612626|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.98148882|  PASSED  
         sts_monobit|   1|    100000|     100|0.87600831|  PASSED  
            sts_runs|   2|    100000|     100|0.46298539|  PASSED  
          sts_serial|   1|    100000|     100|0.28596688|  PASSED  
          sts_serial|   2|    100000|     100|0.74750181|  PASSED  
          sts_serial|   3|    100000|     100|0.83186805|  PASSED  
          sts_serial|   3|    100000|     100|0.48487964|  PASSED  
          sts_serial|   4|    100000|     100|0.80953964|  PASSED  
          sts_serial|   4|    100000|     100|0.86450521|  PASSED  
          sts_serial|   5|    100000|     100|0.78801326|  PASSED  
          sts_serial|   5|    100000|     100|0.79314683|  PASSED  
          sts_serial|   6|    100000|     100|0.66422479|  PASSED  
          sts_serial|   6|    100000|     100|0.24883030|  PASSED  
          sts_serial|   7|    100000|     100|0.70050405|  PASSED  
          sts_serial|   7|    100000|     100|0.22536296|  PASSED  
          sts_serial|   8|    100000|     100|0.42794374|  PASSED  
          sts_serial|   8|    100000|     100|0.29962490|  PASSED  
          sts_serial|   9|    100000|     100|0.60934370|  PASSED  
          sts_serial|   9|    100000|     100|0.67938052|  PASSED  
          sts_serial|  10|    100000|     100|0.59632674|  PASSED  
          sts_serial|  10|    100000|     100|0.88236570|  PASSED  
          sts_serial|  11|    100000|     100|0.30506781|  PASSED  
          sts_serial|  11|    100000|     100|0.45354576|  PASSED  
          sts_serial|  12|    100000|     100|0.93128897|  PASSED  
          sts_serial|  12|    100000|     100|0.97162629|  PASSED  
          sts_serial|  13|    100000|     100|0.35197678|  PASSED  
          sts_serial|  13|    100000|     100|0.78439242|  PASSED  
          sts_serial|  14|    100000|     100|0.98296839|  PASSED  
          sts_serial|  14|    100000|     100|0.52817385|  PASSED  
          sts_serial|  15|    100000|     100|0.78940655|  PASSED  
          sts_serial|  15|    100000|     100|0.70142674|  PASSED  
          sts_serial|  16|    100000|     100|0.87739612|  PASSED  
          sts_serial|  16|    100000|     100|0.55290688|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.27628144|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.64023706|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.70349745|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.28606555|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.96273319|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.97187514|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.66230226|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.92471824|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.40184467|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.47212416|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.21879450|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.66242543|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.49333439|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.52029866|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.86578693|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.97667327|  PASSED  
    rgb_permutations|   2|    100000|     100|0.79896170|  PASSED  
    rgb_permutations|   3|    100000|     100|0.92376702|  PASSED  
    rgb_permutations|   4|    100000|     100|0.95345275|  PASSED  
    rgb_permutations|   5|    100000|     100|0.98536584|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.02996202|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.66720823|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.36245235|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.52708787|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.16440780|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.55879866|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.48308031|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.62628443|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.28985540|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.11619617|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.39106593|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.10226490|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.05551852|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.98614577|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.95306005|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.08549806|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.59472714|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.78136509|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.03940507|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.88729762|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.93134929|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.24625105|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.64153839|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.24075827|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.27285082|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.19109157|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.49780761|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.39697474|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.87670623|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.54637592|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.73470454|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.22929920|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.63605042|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.46544520|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.60794723|  PASSED  
             dab_dct| 256|     50000|       1|0.16563963|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.96352817|  PASSED  
        dab_filltree|  32|  15000000|       1|0.29748384|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.89422496|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.74261803|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.34863500|  PASSED  

real	53m54.295s
user	50m6.072s
sys	3m40.256s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb266b60d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb266b60d
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb266b60d
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb266b60d
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb266b60d
length= 1 gigabyte (2^30 bytes), time= 21.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb266b60d
length= 2 gigabytes (2^31 bytes), time= 41.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-4,T)         R=  +8.1  p =  1.7e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb266b60d
length= 4 gigabytes (2^32 bytes), time= 79.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.8  p =  1.9e-4   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb266b60d
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.8  p =  1.3e-5   suspicious       
  ...and 158 test result(s) without anomalies


real	1m41.592s
user	1m38.012s
sys	0m3.456s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4fbd930a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4fbd930a
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4fbd930a
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4fbd930a
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x4fbd930a
length= 1 gigabyte (2^30 bytes), time= 21.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4fbd930a
length= 2 gigabytes (2^31 bytes), time= 41.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.0  p =  9.9e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4fbd930a
length= 4 gigabytes (2^32 bytes), time= 79.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x4fbd930a
length= 5.250 gigabytes (2^32.392 bytes), time= 105 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.1  p =  5.6e-5   mildly suspicious
  ...and 159 test result(s) without anomalies


real	1m45.938s
user	1m42.576s
sys	0m3.196s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc4c1f502
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc4c1f502
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc4c1f502
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc4c1f502
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xc4c1f502
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc4c1f502
length= 2 gigabytes (2^31 bytes), time= 40.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xc4c1f502
length= 4 gigabytes (2^32 bytes), time= 81.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xc4c1f502
length= 5.000 gigabytes (2^32.322 bytes), time= 103 seconds
  no anomalies in 159 test result(s)


real	1m43.336s
user	1m39.972s
sys	0m3.268s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xfa14381d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xfa14381d
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+3,13-6,T)         R=  -6.2  p =1-2.8e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfa14381d
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xfa14381d
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xfa14381d
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xfa14381d
length= 2 gigabytes (2^31 bytes), time= 40.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.4  p =  7.9e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfa14381d
length= 4 gigabytes (2^32 bytes), time= 78.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xfa14381d
length= 8 gigabytes (2^33 bytes), time= 163 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  -4.1  p =1-1.4e-3   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfa14381d
length= 16 gigabytes (2^34 bytes), time= 331 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xfa14381d
length= 32 gigabytes (2^35 bytes), time= 664 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xfa14381d
length= 64 gigabytes (2^36 bytes), time= 1341 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xfa14381d
length= 128 gigabytes (2^37 bytes), time= 2684 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xfa14381d
length= 172.000 gigabytes (2^37.426 bytes), time= 3603 seconds
  no anomalies in 201 test result(s)


real	60m4.436s
user	58m27.012s
sys	1m33.816s
*/
