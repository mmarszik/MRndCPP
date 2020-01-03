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
/// @created on 2019-12-08 02:56:59 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 05797b04-8611-4fbb-b369-4396d8dd65c0                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib2a, RndFib3a, 9 >;
/* TEST00
time ./MRndCPP 
4140496747
2671306966
1051170859
2883691289
2371557279
540824909
154506411595334

real	1m34.339s
user	1m34.208s
sys	0m0.036s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.93e+07  |1791062743|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.98533363|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.20740548|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.81550824|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.95735576|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.82008173|  PASSED  
        diehard_opso|   0|   2097152|     100|0.46340170|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.02148113|  PASSED  
         diehard_dna|   0|   2097152|     100|0.64810394|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.40602927|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.32423122|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.89904007|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.63347572|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.92382857|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.80692987|  PASSED  
        diehard_sums|   0|       100|     100|0.24796200|  PASSED  
        diehard_runs|   0|    100000|     100|0.56745274|  PASSED  
        diehard_runs|   0|    100000|     100|0.52038623|  PASSED  
       diehard_craps|   0|    200000|     100|0.56634878|  PASSED  
       diehard_craps|   0|    200000|     100|0.79125736|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.92870549|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.54848564|  PASSED  
         sts_monobit|   1|    100000|     100|0.99379407|  PASSED  
            sts_runs|   2|    100000|     100|0.39802518|  PASSED  
          sts_serial|   1|    100000|     100|0.84477967|  PASSED  
          sts_serial|   2|    100000|     100|0.85611238|  PASSED  
          sts_serial|   3|    100000|     100|0.98525140|  PASSED  
          sts_serial|   3|    100000|     100|0.87354272|  PASSED  
          sts_serial|   4|    100000|     100|0.99545769|   WEAK   
          sts_serial|   4|    100000|     100|0.50289173|  PASSED  
          sts_serial|   5|    100000|     100|0.53153291|  PASSED  
          sts_serial|   5|    100000|     100|0.28532079|  PASSED  
          sts_serial|   6|    100000|     100|0.40761888|  PASSED  
          sts_serial|   6|    100000|     100|0.52712410|  PASSED  
          sts_serial|   7|    100000|     100|0.68033844|  PASSED  
          sts_serial|   7|    100000|     100|0.38529911|  PASSED  
          sts_serial|   8|    100000|     100|0.60989655|  PASSED  
          sts_serial|   8|    100000|     100|0.85653989|  PASSED  
          sts_serial|   9|    100000|     100|0.60700732|  PASSED  
          sts_serial|   9|    100000|     100|0.97979329|  PASSED  
          sts_serial|  10|    100000|     100|0.13227961|  PASSED  
          sts_serial|  10|    100000|     100|0.62603761|  PASSED  
          sts_serial|  11|    100000|     100|0.11476858|  PASSED  
          sts_serial|  11|    100000|     100|0.11352857|  PASSED  
          sts_serial|  12|    100000|     100|0.01839705|  PASSED  
          sts_serial|  12|    100000|     100|0.23473658|  PASSED  
          sts_serial|  13|    100000|     100|0.06915242|  PASSED  
          sts_serial|  13|    100000|     100|0.47634872|  PASSED  
          sts_serial|  14|    100000|     100|0.45257998|  PASSED  
          sts_serial|  14|    100000|     100|0.31512270|  PASSED  
          sts_serial|  15|    100000|     100|0.13662885|  PASSED  
          sts_serial|  15|    100000|     100|0.15600074|  PASSED  
          sts_serial|  16|    100000|     100|0.08637701|  PASSED  
          sts_serial|  16|    100000|     100|0.60894929|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.61872211|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.19645771|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.49618986|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.39057544|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.80209367|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.29655623|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.09300363|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.05910289|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.52934507|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.67816623|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.95456947|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.71145317|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.75745756|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.56602277|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.79851268|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.74254111|  PASSED  
    rgb_permutations|   2|    100000|     100|0.62302732|  PASSED  
    rgb_permutations|   3|    100000|     100|0.29425129|  PASSED  
    rgb_permutations|   4|    100000|     100|0.66379906|  PASSED  
    rgb_permutations|   5|    100000|     100|0.27646298|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.69116180|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.82915907|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.32475702|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.20622470|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.99395756|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.99813332|   WEAK   
      rgb_lagged_sum|   6|   1000000|     100|0.77344094|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.76301114|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.01052248|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.13863734|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.68198141|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.58661395|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.17545999|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.93818590|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.64891119|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.91703242|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.80084493|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.68978928|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.66840317|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.46718116|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.74129400|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.87407365|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.39725458|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.70985994|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.95551091|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.40954934|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.37715281|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.28921572|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.53874683|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.89629591|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.59691678|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.32669781|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.54107864|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.78175641|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.88315332|  PASSED  
             dab_dct| 256|     50000|       1|0.33097938|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.40091401|  PASSED  
        dab_filltree|  32|  15000000|       1|0.40748370|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.71948924|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.40142607|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.54110785|  PASSED  

real	50m39.324s
user	47m11.776s
sys	3m24.544s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd8533b8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd8533b8
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd8533b8
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd8533b8
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  -6.7  p =1-3.3e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd8533b8
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xd8533b8
length= 2 gigabytes (2^31 bytes), time= 39.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xd8533b8
length= 4 gigabytes (2^32 bytes), time= 76.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd8533b8
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.933s
user	1m38.588s
sys	0m3.224s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x95c25a68
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x95c25a68
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x95c25a68
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x95c25a68
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x95c25a68
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x95c25a68
length= 2 gigabytes (2^31 bytes), time= 39.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x95c25a68
length= 4 gigabytes (2^32 bytes), time= 80.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x95c25a68
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  no anomalies in 159 test result(s)


real	1m41.207s
user	1m37.892s
sys	0m3.200s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf64036f5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf64036f5
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf64036f5
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf64036f5
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf64036f5
length= 1 gigabyte (2^30 bytes), time= 20.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf64036f5
length= 2 gigabytes (2^31 bytes), time= 39.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf64036f5
length= 4 gigabytes (2^32 bytes), time= 75.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xf64036f5
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  +4.4  p =  1.3e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m41.945s
user	1m38.840s
sys	0m3.004s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9a5a6976
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9a5a6976
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9a5a6976
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9a5a6976
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x9a5a6976
length= 1 gigabyte (2^30 bytes), time= 20.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-2,T)         R=  +9.0  p =  3.4e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9a5a6976
length= 2 gigabytes (2^31 bytes), time= 39.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-1,T)         R=  +7.4  p =  2.0e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9a5a6976
length= 4 gigabytes (2^32 bytes), time= 75.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x9a5a6976
length= 8 gigabytes (2^33 bytes), time= 153 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x9a5a6976
length= 16 gigabytes (2^34 bytes), time= 317 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x9a5a6976
length= 32 gigabytes (2^35 bytes), time= 640 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x9a5a6976
length= 64 gigabytes (2^36 bytes), time= 1299 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x9a5a6976
length= 128 gigabytes (2^37 bytes), time= 2605 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x9a5a6976
length= 177.250 gigabytes (2^37.470 bytes), time= 3603 seconds
  no anomalies in 201 test result(s)


real	60m4.478s
user	58m15.628s
sys	1m45.064s
*/
