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
/// @created on 2019-12-18 20:15:59 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 746c5bf3-eb9b-4d31-a8f2-f0632b1ecd9b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot5b;
/* TEST00
time ./MRndCPP 
3897978442
1463704329
1759227938
3411258701
1592783681
333177082
4611623644050191961

real	0m19.122s
user	0m19.104s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.63e+07  |3681535307|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.73609401|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.62578778|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.57137113|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.41835385|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.88847175|  PASSED  
        diehard_opso|   0|   2097152|     100|0.61985983|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.01416498|  PASSED  
         diehard_dna|   0|   2097152|     100|0.38687049|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.44253886|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.22147342|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.66912419|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.99226951|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.99952864|   WEAK   
     diehard_squeeze|   0|    100000|     100|0.66658445|  PASSED  
        diehard_sums|   0|       100|     100|0.19342496|  PASSED  
        diehard_runs|   0|    100000|     100|0.52512942|  PASSED  
        diehard_runs|   0|    100000|     100|0.27446864|  PASSED  
       diehard_craps|   0|    200000|     100|0.49475606|  PASSED  
       diehard_craps|   0|    200000|     100|0.62612415|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.80576506|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.81028609|  PASSED  
         sts_monobit|   1|    100000|     100|0.91764109|  PASSED  
            sts_runs|   2|    100000|     100|0.44368347|  PASSED  
          sts_serial|   1|    100000|     100|0.03623490|  PASSED  
          sts_serial|   2|    100000|     100|0.80066189|  PASSED  
          sts_serial|   3|    100000|     100|0.92768472|  PASSED  
          sts_serial|   3|    100000|     100|0.67156893|  PASSED  
          sts_serial|   4|    100000|     100|0.58129764|  PASSED  
          sts_serial|   4|    100000|     100|0.36668555|  PASSED  
          sts_serial|   5|    100000|     100|0.86649645|  PASSED  
          sts_serial|   5|    100000|     100|0.73140290|  PASSED  
          sts_serial|   6|    100000|     100|0.73482265|  PASSED  
          sts_serial|   6|    100000|     100|0.86258703|  PASSED  
          sts_serial|   7|    100000|     100|0.21331681|  PASSED  
          sts_serial|   7|    100000|     100|0.55110143|  PASSED  
          sts_serial|   8|    100000|     100|0.18511919|  PASSED  
          sts_serial|   8|    100000|     100|0.93783576|  PASSED  
          sts_serial|   9|    100000|     100|0.82291769|  PASSED  
          sts_serial|   9|    100000|     100|0.90591746|  PASSED  
          sts_serial|  10|    100000|     100|0.80274116|  PASSED  
          sts_serial|  10|    100000|     100|0.38086228|  PASSED  
          sts_serial|  11|    100000|     100|0.47865058|  PASSED  
          sts_serial|  11|    100000|     100|0.08494140|  PASSED  
          sts_serial|  12|    100000|     100|0.40602065|  PASSED  
          sts_serial|  12|    100000|     100|0.75488514|  PASSED  
          sts_serial|  13|    100000|     100|0.52543009|  PASSED  
          sts_serial|  13|    100000|     100|0.86830572|  PASSED  
          sts_serial|  14|    100000|     100|0.99445479|  PASSED  
          sts_serial|  14|    100000|     100|0.91311570|  PASSED  
          sts_serial|  15|    100000|     100|0.22308847|  PASSED  
          sts_serial|  15|    100000|     100|0.20172303|  PASSED  
          sts_serial|  16|    100000|     100|0.05816086|  PASSED  
          sts_serial|  16|    100000|     100|0.05326658|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.99425848|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.44345620|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.07598490|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.97148360|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.34762962|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.54014753|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.73599593|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.88556304|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.85691503|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.28060924|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.32949570|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.19033697|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.44379228|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.97389997|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.96718252|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.04568274|  PASSED  
    rgb_permutations|   2|    100000|     100|0.57867993|  PASSED  
    rgb_permutations|   3|    100000|     100|0.41515138|  PASSED  
    rgb_permutations|   4|    100000|     100|0.04009973|  PASSED  
    rgb_permutations|   5|    100000|     100|0.76992831|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.48984826|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.32457286|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.39064607|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.87450640|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.94143299|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.80849356|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.48876550|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.36723849|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.99584372|   WEAK   
      rgb_lagged_sum|   9|   1000000|     100|0.49079504|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.01519056|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.79781522|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.62518050|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.67650800|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.69612377|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.68275354|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.33338283|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.04339478|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.52262080|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.53720717|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.24459406|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.19958144|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.33220353|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.48958567|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.56671499|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.30346908|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.66367422|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.47673965|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.24050205|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.81608235|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.77111302|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.98344474|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.11491202|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.42565557|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.16071513|  PASSED  
             dab_dct| 256|     50000|       1|0.15448012|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.93993718|  PASSED  
        dab_filltree|  32|  15000000|       1|0.56978908|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.82528866|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.41187473|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.87197050|  PASSED  

real	59m32.578s
user	55m53.504s
sys	3m30.504s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd27dd5cd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd27dd5cd
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.1e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd27dd5cd
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd27dd5cd
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xd27dd5cd
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xd27dd5cd
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xd27dd5cd
length= 4 gigabytes (2^32 bytes), time= 83.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd27dd5cd
length= 5.000 gigabytes (2^32.322 bytes), time= 105 seconds
  no anomalies in 159 test result(s)


real	1m45.755s
user	1m42.024s
sys	0m3.256s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x79b113b2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x79b113b2
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.6  p = 0.989     unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x79b113b2
length= 256 megabytes (2^28 bytes), time= 6.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +7.0  p =  2.1e-5   suspicious       
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x79b113b2
length= 512 megabytes (2^29 bytes), time= 12.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.9  p =  1.8e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x79b113b2
length= 1 gigabyte (2^30 bytes), time= 24.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x79b113b2
length= 2 gigabytes (2^31 bytes), time= 47.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x79b113b2
length= 4 gigabytes (2^32 bytes), time= 94.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x79b113b2
length= 4.250 gigabytes (2^32.087 bytes), time= 101 seconds
  no anomalies in 156 test result(s)


real	1m42.068s
user	1m39.096s
sys	0m2.608s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4638e2fc
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4638e2fc
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4638e2fc
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4638e2fc
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x4638e2fc
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +5.2  p =  6.7e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4638e2fc
length= 2 gigabytes (2^31 bytes), time= 41.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x4638e2fc
length= 4 gigabytes (2^32 bytes), time= 80.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x4638e2fc
length= 5.250 gigabytes (2^32.392 bytes), time= 106 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.7  p = 0.988     unusual          
  ...and 159 test result(s) without anomalies


real	1m46.849s
user	1m43.216s
sys	0m3.328s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8221371e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8221371e
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x8221371e
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8221371e
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.8  p =  2.1e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8221371e
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.2  p =  9.0e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8221371e
length= 2 gigabytes (2^31 bytes), time= 41.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8221371e
length= 4 gigabytes (2^32 bytes), time= 83.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x8221371e
length= 8 gigabytes (2^33 bytes), time= 170 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x8221371e
length= 16 gigabytes (2^34 bytes), time= 341 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x8221371e
length= 32 gigabytes (2^35 bytes), time= 677 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x8221371e
length= 64 gigabytes (2^36 bytes), time= 1364 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x8221371e
length= 128 gigabytes (2^37 bytes), time= 2726 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x8221371e
length= 169.500 gigabytes (2^37.405 bytes), time= 3605 seconds
  no anomalies in 201 test result(s)


real	60m5.204s
user	58m9.772s
sys	1m50.508s
*/
