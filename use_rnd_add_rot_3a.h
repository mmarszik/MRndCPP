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
/// @created on 2019-12-18 20:17:13 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token ef9cfd2c-f9ed-4b71-8f32-47633ff244bd                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot3a;
/* TEST00
time ./MRndCPP 
944261710
54681960
3676538697
1283841675
1260984242
4060673466
4611640387620343390

real	0m20.796s
user	0m20.776s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.60e+07  |1868552682|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.93880635|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.42251019|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.87580902|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.08802870|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.71806426|  PASSED  
        diehard_opso|   0|   2097152|     100|0.52705769|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.64763015|  PASSED  
         diehard_dna|   0|   2097152|     100|0.48469494|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.82035193|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.49806362|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.60849546|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.46528579|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.92636319|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.14894795|  PASSED  
        diehard_sums|   0|       100|     100|0.04817362|  PASSED  
        diehard_runs|   0|    100000|     100|0.98318450|  PASSED  
        diehard_runs|   0|    100000|     100|0.42902670|  PASSED  
       diehard_craps|   0|    200000|     100|0.65221751|  PASSED  
       diehard_craps|   0|    200000|     100|0.97504090|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.59436340|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.66171086|  PASSED  
         sts_monobit|   1|    100000|     100|0.71180158|  PASSED  
            sts_runs|   2|    100000|     100|0.15415418|  PASSED  
          sts_serial|   1|    100000|     100|0.60282567|  PASSED  
          sts_serial|   2|    100000|     100|0.40659088|  PASSED  
          sts_serial|   3|    100000|     100|0.63113836|  PASSED  
          sts_serial|   3|    100000|     100|0.64960451|  PASSED  
          sts_serial|   4|    100000|     100|0.66304674|  PASSED  
          sts_serial|   4|    100000|     100|0.81572491|  PASSED  
          sts_serial|   5|    100000|     100|0.92869590|  PASSED  
          sts_serial|   5|    100000|     100|0.42179055|  PASSED  
          sts_serial|   6|    100000|     100|0.25438135|  PASSED  
          sts_serial|   6|    100000|     100|0.86523471|  PASSED  
          sts_serial|   7|    100000|     100|0.54019875|  PASSED  
          sts_serial|   7|    100000|     100|0.71107443|  PASSED  
          sts_serial|   8|    100000|     100|0.83212807|  PASSED  
          sts_serial|   8|    100000|     100|0.72967005|  PASSED  
          sts_serial|   9|    100000|     100|0.67308179|  PASSED  
          sts_serial|   9|    100000|     100|0.51784830|  PASSED  
          sts_serial|  10|    100000|     100|0.60996297|  PASSED  
          sts_serial|  10|    100000|     100|0.38240634|  PASSED  
          sts_serial|  11|    100000|     100|0.79061848|  PASSED  
          sts_serial|  11|    100000|     100|0.45395708|  PASSED  
          sts_serial|  12|    100000|     100|0.60798236|  PASSED  
          sts_serial|  12|    100000|     100|0.58488563|  PASSED  
          sts_serial|  13|    100000|     100|0.04284055|  PASSED  
          sts_serial|  13|    100000|     100|0.21675288|  PASSED  
          sts_serial|  14|    100000|     100|0.61944653|  PASSED  
          sts_serial|  14|    100000|     100|0.91985761|  PASSED  
          sts_serial|  15|    100000|     100|0.93546186|  PASSED  
          sts_serial|  15|    100000|     100|0.57550285|  PASSED  
          sts_serial|  16|    100000|     100|0.39363190|  PASSED  
          sts_serial|  16|    100000|     100|0.64502665|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.90109169|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.79864638|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.63202313|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.66735560|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.21734957|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.54900820|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.39802470|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.27403511|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.96789744|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.44752710|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.73550505|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.78583833|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.94365491|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.21366970|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.38896662|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.06714756|  PASSED  
    rgb_permutations|   2|    100000|     100|0.95131107|  PASSED  
    rgb_permutations|   3|    100000|     100|0.66100369|  PASSED  
    rgb_permutations|   4|    100000|     100|0.73315102|  PASSED  
    rgb_permutations|   5|    100000|     100|0.91357310|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.55323860|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.99986923|   WEAK   
      rgb_lagged_sum|   2|   1000000|     100|0.97977470|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.85115662|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.45875132|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.46117573|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.92368928|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.85045552|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.47920468|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.24486746|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.37084527|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.80420458|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.91093660|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.97606075|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.68217226|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.78091923|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.04004342|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.92552521|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.93753664|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.27411114|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.94660169|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.56763462|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.35877192|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.74267691|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.36738376|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.39043786|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.14880184|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.27105900|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.39478985|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.45016419|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.94256350|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.86502155|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.80203509|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.29793667|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.94725699|  PASSED  
             dab_dct| 256|     50000|       1|0.57997213|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.35394263|  PASSED  
        dab_filltree|  32|  15000000|       1|0.36391097|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.81164197|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.80981204|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.63926914|  PASSED  

real	55m21.341s
user	51m51.372s
sys	3m25.640s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb418fe4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb418fe4
length= 128 megabytes (2^27 bytes), time= 3.1 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb418fe4
length= 256 megabytes (2^28 bytes), time= 6.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb418fe4
length= 512 megabytes (2^29 bytes), time= 13.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb418fe4
length= 1 gigabyte (2^30 bytes), time= 25.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+8,13-6,T)         R= +12.9  p =  7.2e-5   unusual          
  [Low8/32]DC6-9x1Bytes-1           R=  +5.3  p =  8.5e-3   unusual          
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb418fe4
length= 2 gigabytes (2^31 bytes), time= 50.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.0  p =  9.9e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb418fe4
length= 4 gigabytes (2^32 bytes), time= 97.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xb418fe4
length= 4.250 gigabytes (2^32.087 bytes), time= 104 seconds
  no anomalies in 156 test result(s)


real	1m44.613s
user	1m41.728s
sys	0m2.792s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdf4d3585
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdf4d3585
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +4.6  p =  2.1e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdf4d3585
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xdf4d3585
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  -4.5  p =1-6.0e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdf4d3585
length= 1 gigabyte (2^30 bytes), time= 22.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xdf4d3585
length= 2 gigabytes (2^31 bytes), time= 43.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xdf4d3585
length= 4 gigabytes (2^32 bytes), time= 87.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xdf4d3585
length= 4.750 gigabytes (2^32.248 bytes), time= 105 seconds
  no anomalies in 159 test result(s)


real	1m45.563s
user	1m42.308s
sys	0m3.100s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x48737171
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x48737171
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x48737171
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x48737171
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x48737171
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x48737171
length= 2 gigabytes (2^31 bytes), time= 41.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x48737171
length= 4 gigabytes (2^32 bytes), time= 80.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.9  p =  1.6e-4   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x48737171
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.0  p =  6.9e-4   unusual          
  ...and 158 test result(s) without anomalies


real	1m42.199s
user	1m38.748s
sys	0m3.304s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa745f66d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa745f66d
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.5e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa745f66d
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa745f66d
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.8e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa745f66d
length= 1 gigabyte (2^30 bytes), time= 21.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.8  p =  1.9e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa745f66d
length= 2 gigabytes (2^31 bytes), time= 42.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.2  p =  6.8e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa745f66d
length= 4 gigabytes (2^32 bytes), time= 85.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xa745f66d
length= 8 gigabytes (2^33 bytes), time= 173 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xa745f66d
length= 16 gigabytes (2^34 bytes), time= 347 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xa745f66d
length= 32 gigabytes (2^35 bytes), time= 688 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xa745f66d
length= 64 gigabytes (2^36 bytes), time= 1386 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +5.0  p =  3.3e-4   unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa745f66d
length= 128 gigabytes (2^37 bytes), time= 2774 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xa745f66d
length= 166.500 gigabytes (2^37.379 bytes), time= 3602 seconds
  no anomalies in 200 test result(s)


real	60m2.606s
user	58m14.648s
sys	1m44.216s
*/
