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
/// @created on 2019-12-27 07:48:33 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token a745e2db-c712-4240-98d9-3261ec0aa803                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_wyhash64.h"

namespace MRnd {

using TMRnd = RndWyhash64_0;

}
/* TEST00
time ./MRndCPP 10 
1371554712
1725976859
2059674324
3068496199
1121289917
2763103988
3220689998
3307308312
785231875
2664775828
12126879156003626991

real	0m1.293s
user	0m1.293s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.33e+07  |1414257420|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.10086550|  PASSED  

real	0m21.850s
user	0m22.073s
sys	0m0.614s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xfad58024
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xfad58024
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xfad58024
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xfad58024
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xfad58024
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xfad58024
length= 1.500 gigabytes (2^30.585 bytes), time= 31.4 seconds
  no anomalies in 187 test result(s)


real	0m32.254s
user	0m32.039s
sys	0m0.958s
*/
/* TEST00
time ./MRndCPP 10 
1371554712
1725976859
2059674324
3068496199
1121289917
2763103988
3220689998
3307308312
785231875
2664775828
12126879156003626991

real	0m1.338s
user	0m1.337s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.30e+07  |4025933842|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.53696689|  PASSED  

real	0m22.369s
user	0m22.687s
sys	0m0.730s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7fccc5cf
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7fccc5cf
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7fccc5cf
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7fccc5cf
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7fccc5cf
length= 1 gigabyte (2^30 bytes), time= 21.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:all2         R=  -1.7  p =1-4.7e-5   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x7fccc5cf
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x7fccc5cf
length= 4 gigabytes (2^32 bytes), time= 81.1 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -4.3  p =1-9.5e-4   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x7fccc5cf
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -4.2  p =1-1.0e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x7fccc5cf
length= 15.250 gigabytes (2^33.931 bytes), time= 304 seconds
  no anomalies in 226 test result(s)


real	5m5.012s
user	5m3.189s
sys	0m9.771s
*/
/* TEST00
time ./MRndCPP 10 
1371554712
1725976859
2059674324
3068496199
1121289917
2763103988
3220689998
3307308312
785231875
2664775828
12126879156003626991

real	0m1.311s
user	0m1.311s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.36e+07  |1769316190|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.94725163|  PASSED  

real	0m21.989s
user	0m22.276s
sys	0m0.639s
*/
/* TEST00
time ./MRndCPP 12 
1371554712
1725976859
2059674324
3068496199
1121289917
2763103988
3220689998
3307308312
785231875
2664775828
13652461054919381533

real	0m5.203s
user	0m5.199s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.51e+07  | 203383800|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.27616873|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.83739898|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.20795897|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.84196432|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.89666354|  PASSED  
        diehard_opso|   0|   2097152|     100|0.74808178|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.83253494|  PASSED  
         diehard_dna|   0|   2097152|     100|0.68317129|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.17035055|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.72163828|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.91507220|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.44027415|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.07071205|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.38013908|  PASSED  
        diehard_sums|   0|       100|     100|0.74396845|  PASSED  
        diehard_runs|   0|    100000|     100|0.18263574|  PASSED  
        diehard_runs|   0|    100000|     100|0.70488537|  PASSED  
       diehard_craps|   0|    200000|     100|0.94806368|  PASSED  
       diehard_craps|   0|    200000|     100|0.45712445|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.36998168|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.02392190|  PASSED  
         sts_monobit|   1|    100000|     100|0.93909404|  PASSED  
            sts_runs|   2|    100000|     100|0.07654370|  PASSED  
          sts_serial|   1|    100000|     100|0.95731171|  PASSED  
          sts_serial|   2|    100000|     100|0.60422789|  PASSED  
          sts_serial|   3|    100000|     100|0.85936077|  PASSED  
          sts_serial|   3|    100000|     100|0.75038430|  PASSED  
          sts_serial|   4|    100000|     100|0.73720943|  PASSED  
          sts_serial|   4|    100000|     100|0.99806828|   WEAK   
          sts_serial|   5|    100000|     100|0.97173751|  PASSED  
          sts_serial|   5|    100000|     100|0.86563336|  PASSED  
          sts_serial|   6|    100000|     100|0.65106627|  PASSED  
          sts_serial|   6|    100000|     100|0.50916881|  PASSED  
          sts_serial|   7|    100000|     100|0.30072982|  PASSED  
          sts_serial|   7|    100000|     100|0.37133157|  PASSED  
          sts_serial|   8|    100000|     100|0.49474786|  PASSED  
          sts_serial|   8|    100000|     100|0.38909021|  PASSED  
          sts_serial|   9|    100000|     100|0.99666742|   WEAK   
          sts_serial|   9|    100000|     100|0.94124055|  PASSED  
          sts_serial|  10|    100000|     100|0.24739205|  PASSED  
          sts_serial|  10|    100000|     100|0.19806315|  PASSED  
          sts_serial|  11|    100000|     100|0.39054228|  PASSED  
          sts_serial|  11|    100000|     100|0.46667418|  PASSED  
          sts_serial|  12|    100000|     100|0.25944608|  PASSED  
          sts_serial|  12|    100000|     100|0.98814782|  PASSED  
          sts_serial|  13|    100000|     100|0.29425285|  PASSED  
          sts_serial|  13|    100000|     100|0.37411848|  PASSED  
          sts_serial|  14|    100000|     100|0.74022844|  PASSED  
          sts_serial|  14|    100000|     100|0.98498125|  PASSED  
          sts_serial|  15|    100000|     100|0.65921990|  PASSED  
          sts_serial|  15|    100000|     100|0.55993573|  PASSED  
          sts_serial|  16|    100000|     100|0.95737181|  PASSED  
          sts_serial|  16|    100000|     100|0.98193526|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.24585359|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.98677752|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.09065451|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.93037226|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.74849913|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.32117912|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.37308932|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.91834988|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.43513147|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.07624703|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.65146974|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.43225921|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.18522651|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.93486198|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.33060280|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.11367479|  PASSED  
    rgb_permutations|   2|    100000|     100|0.91583897|  PASSED  
    rgb_permutations|   3|    100000|     100|0.97012505|  PASSED  
    rgb_permutations|   4|    100000|     100|0.49729356|  PASSED  
    rgb_permutations|   5|    100000|     100|0.76406170|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.25036787|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.07302441|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.80045320|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.01194445|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.90068724|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.11021445|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.10417122|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.74671289|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.53842476|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.19019709|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.62548757|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.26237846|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.47471385|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.88965167|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.91968727|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.19518986|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.92340832|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.78591622|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.10397461|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.17857617|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.51888810|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.17927315|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.99123201|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.32007768|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.24873369|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.59099622|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.98169523|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.48616285|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.80717705|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.06571090|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.54509426|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.13561189|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.71598190|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.18019935|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.28243716|  PASSED  
             dab_dct| 256|     50000|       1|0.37247578|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.32246482|  PASSED  
        dab_filltree|  32|  15000000|       1|0.66969477|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.74630850|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.44717188|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.06530216|  PASSED  

real	36m50.378s
user	38m4.906s
sys	4m6.866s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7a388fea
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7a388fea
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7a388fea
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7a388fea
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7a388fea
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x7a388fea
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +6.0  p =  2.4e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x7a388fea
length= 4 gigabytes (2^32 bytes), time= 80.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -3.8  p =1-8.8e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x7a388fea
length= 5.250 gigabytes (2^32.392 bytes), time= 106 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.1  p =  8.1e-3   unusual          
  ...and 207 test result(s) without anomalies


real	1m46.400s
user	1m45.958s
sys	0m3.151s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xfead9022
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xfead9022
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xfead9022
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.3  p =  1.9e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xfead9022
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xfead9022
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+3,13-3,T)         R=  +9.6  p =  2.4e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xfead9022
length= 2 gigabytes (2^31 bytes), time= 41.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xfead9022
length= 4 gigabytes (2^32 bytes), time= 80.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xfead9022
length= 5.250 gigabytes (2^32.392 bytes), time= 106 seconds
  no anomalies in 208 test result(s)


real	1m46.653s
user	1m45.874s
sys	0m3.499s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xaf518078
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xaf518078
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -3.8  p =1-1.2e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xaf518078
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xaf518078
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xaf518078
length= 1 gigabyte (2^30 bytes), time= 21.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xaf518078
length= 2 gigabytes (2^31 bytes), time= 41.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  +4.5  p =  1.0e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0xaf518078
length= 4 gigabytes (2^32 bytes), time= 80.1 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xaf518078
length= 5.250 gigabytes (2^32.392 bytes), time= 106 seconds
  no anomalies in 208 test result(s)


real	1m46.393s
user	1m45.732s
sys	0m3.310s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe08e9285
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe08e9285
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe08e9285
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xe08e9285
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xe08e9285
length= 1 gigabyte (2^30 bytes), time= 21.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe08e9285
length= 2 gigabytes (2^31 bytes), time= 41.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe08e9285
length= 4 gigabytes (2^32 bytes), time= 80.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.3  p =1-5.3e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0xe08e9285
length= 8 gigabytes (2^33 bytes), time= 159 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xe08e9285
length= 16 gigabytes (2^34 bytes), time= 315 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xe08e9285
length= 32 gigabytes (2^35 bytes), time= 618 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xe08e9285
length= 64 gigabytes (2^36 bytes), time= 1237 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xe08e9285
length= 128 gigabytes (2^37 bytes), time= 2470 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0xe08e9285
length= 188.000 gigabytes (2^37.555 bytes), time= 3602 seconds
  no anomalies in 263 test result(s)


real	60m3.855s
user	59m40.865s
sys	1m57.819s
*/
/* TEST00
time ./MRndCPP 10 
1371554712
1725976859
2059674324
3068496199
1121289917
2763103988
3220689998
3307308312
785231875
2664775828
12126879156003626991

real	0m1.467s
user	0m1.460s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.34e+07  |3650492722|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.76626981|  PASSED  

real	0m25.031s
user	0m24.124s
sys	0m0.768s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x69fc9e88
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x69fc9e88
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x69fc9e88
length= 256 megabytes (2^28 bytes), time= 6.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x69fc9e88
length= 512 megabytes (2^29 bytes), time= 12.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x69fc9e88
length= 1 gigabyte (2^30 bytes), time= 23.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  +4.8  p =  1.5e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x69fc9e88
length= 2 gigabytes (2^31 bytes), time= 45.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x69fc9e88
length= 4 gigabytes (2^32 bytes), time= 86.9 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x69fc9e88
length= 8 gigabytes (2^33 bytes), time= 178 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x69fc9e88
length= 16 gigabytes (2^34 bytes), time= 362 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x69fc9e88
length= 32 gigabytes (2^35 bytes), time= 720 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +4.6  p =  4.7e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x69fc9e88
length= 44.000 gigabytes (2^35.459 bytes), time= 1003 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.0  p =  2.3e-3   unusual          
  ...and 241 test result(s) without anomalies


real	16m43.723s
user	16m25.140s
sys	0m17.388s
*/
/* TEST00
time ./MRndCPP 12 
1371554712
1725976859
2059674324
3068496199
1121289917
2763103988
3220689998
3307308312
785231875
2664775828
13652461054919381533

real	0m5.845s
user	0m5.828s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.32e+07  |2835272347|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.83698121|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.78525286|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.74109610|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.94711966|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.04442712|  PASSED  
        diehard_opso|   0|   2097152|     100|0.34020917|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.86994160|  PASSED  
         diehard_dna|   0|   2097152|     100|0.53746969|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.23873576|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.98600474|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.45362429|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.43823814|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.90278636|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.83321084|  PASSED  
        diehard_sums|   0|       100|     100|0.03445029|  PASSED  
        diehard_runs|   0|    100000|     100|0.26835637|  PASSED  
        diehard_runs|   0|    100000|     100|0.20518881|  PASSED  
       diehard_craps|   0|    200000|     100|0.74717447|  PASSED  
       diehard_craps|   0|    200000|     100|0.34207917|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.68941881|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.25645924|  PASSED  
         sts_monobit|   1|    100000|     100|0.00280153|   WEAK   
            sts_runs|   2|    100000|     100|0.92798206|  PASSED  
          sts_serial|   1|    100000|     100|0.47125389|  PASSED  
          sts_serial|   2|    100000|     100|0.46372722|  PASSED  
          sts_serial|   3|    100000|     100|0.79219228|  PASSED  
          sts_serial|   3|    100000|     100|0.20960407|  PASSED  
          sts_serial|   4|    100000|     100|0.41655741|  PASSED  
          sts_serial|   4|    100000|     100|0.51906191|  PASSED  
          sts_serial|   5|    100000|     100|0.25015570|  PASSED  
          sts_serial|   5|    100000|     100|0.92575649|  PASSED  
          sts_serial|   6|    100000|     100|0.71634170|  PASSED  
          sts_serial|   6|    100000|     100|0.40176982|  PASSED  
          sts_serial|   7|    100000|     100|0.78741829|  PASSED  
          sts_serial|   7|    100000|     100|0.97259925|  PASSED  
          sts_serial|   8|    100000|     100|0.02466415|  PASSED  
          sts_serial|   8|    100000|     100|0.04073114|  PASSED  
          sts_serial|   9|    100000|     100|0.77012444|  PASSED  
          sts_serial|   9|    100000|     100|0.71251875|  PASSED  
          sts_serial|  10|    100000|     100|0.64241835|  PASSED  
          sts_serial|  10|    100000|     100|0.32793737|  PASSED  
          sts_serial|  11|    100000|     100|0.24172854|  PASSED  
          sts_serial|  11|    100000|     100|0.66170870|  PASSED  
          sts_serial|  12|    100000|     100|0.22374656|  PASSED  
          sts_serial|  12|    100000|     100|0.58491666|  PASSED  
          sts_serial|  13|    100000|     100|0.69803753|  PASSED  
          sts_serial|  13|    100000|     100|0.86677491|  PASSED  
          sts_serial|  14|    100000|     100|0.71318957|  PASSED  
          sts_serial|  14|    100000|     100|0.26929621|  PASSED  
          sts_serial|  15|    100000|     100|0.80895194|  PASSED  
          sts_serial|  15|    100000|     100|0.85481503|  PASSED  
          sts_serial|  16|    100000|     100|0.83859429|  PASSED  
          sts_serial|  16|    100000|     100|0.68992885|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.92965842|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.07848405|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.66749213|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.40235920|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.26028484|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.30672589|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.07518560|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.33774520|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.64619770|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.29744981|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.67245215|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.93271325|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.82446734|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.57495591|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.83741019|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.47936379|  PASSED  
    rgb_permutations|   2|    100000|     100|0.17125916|  PASSED  
    rgb_permutations|   3|    100000|     100|0.76156266|  PASSED  
    rgb_permutations|   4|    100000|     100|0.15172148|  PASSED  
    rgb_permutations|   5|    100000|     100|0.44563934|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.98234437|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.49954166|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.40210313|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.89028074|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.69031558|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.27723207|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.19410536|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.94723291|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.03323755|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.34450227|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.65212218|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.13108117|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.82632137|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.22408466|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.16295146|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.59016927|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.25376326|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.21423845|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.55005021|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.99326414|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.63932932|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.92344869|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.63821937|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.10846005|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.37927256|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.81666612|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.03146878|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.83283513|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.11688354|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.86360662|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.80412932|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.46031862|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.12580864|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.22660461|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.51444329|  PASSED  
             dab_dct| 256|     50000|       1|0.79573792|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.37670860|  PASSED  
        dab_filltree|  32|  15000000|       1|0.80594927|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.92378205|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.27754976|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.20636759|  PASSED  

real	52m1.339s
user	48m10.276s
sys	3m47.848s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 18000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd400adf5
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd400adf5
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd400adf5
length= 256 megabytes (2^28 bytes), time= 6.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.9  p =1-7.8e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xd400adf5
length= 512 megabytes (2^29 bytes), time= 12.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xd400adf5
length= 1 gigabyte (2^30 bytes), time= 23.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.2  p =1-5.1e-3   unusual          
  [Low4/32]BCFN(2+2,13-3,T)         R=  +9.3  p =  3.2e-4   unusual          
  ...and 181 test result(s) without anomalies

rng=RNG_stdin, seed=0xd400adf5
length= 2 gigabytes (2^31 bytes), time= 45.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd400adf5
length= 4 gigabytes (2^32 bytes), time= 87.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xd400adf5
length= 8 gigabytes (2^33 bytes), time= 180 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xd400adf5
length= 16 gigabytes (2^34 bytes), time= 364 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xd400adf5
length= 32 gigabytes (2^35 bytes), time= 723 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.5  p =1-4.2e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xd400adf5
length= 64 gigabytes (2^36 bytes), time= 1459 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xd400adf5
length= 128 gigabytes (2^37 bytes), time= 2923 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.3  p =1-1.3e-3   unusual          
  ...and 257 test result(s) without anomalies

rng=RNG_stdin, seed=0xd400adf5
length= 256 gigabytes (2^38 bytes), time= 5791 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0xd400adf5
length= 512 gigabytes (2^39 bytes), time= 11656 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0xd400adf5
length= 795.250 gigabytes (2^39.635 bytes), time= 18004 seconds
  no anomalies in 283 test result(s)


real	300m5.224s
user	294m32.356s
sys	5m4.472s
*/
/* TEST00
time ./MRndCPP 12 
1371554712
1725976859
2059674324
3068496199
1121289917
2763103988
3220689998
3307308312
785231875
2664775828
13652461054919381533

real	0m7.156s
user	0m7.137s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
test.sh: line 23: dieharder: command not found

real	0m0.002s
user	0m0.001s
sys	0m0.002s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x69b45e3a
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x69b45e3a
length= 64 megabytes (2^26 bytes), time= 2.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x69b45e3a
length= 128 megabytes (2^27 bytes), time= 5.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x69b45e3a
length= 256 megabytes (2^28 bytes), time= 9.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x69b45e3a
length= 512 megabytes (2^29 bytes), time= 17.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x69b45e3a
length= 1 gigabyte (2^30 bytes), time= 32.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x69b45e3a
length= 2 gigabytes (2^31 bytes), time= 63.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x69b45e3a
length= 3.500 gigabytes (2^31.807 bytes), time= 107 seconds
  no anomalies in 199 test result(s)


real	1m47.823s
user	1m46.083s
sys	0m5.155s
*/
/* TEST00
time ./MRndCPP 12 
1371554712
1725976859
2059674324
3068496199
1121289917
2763103988
3220689998
3307308312
785231875
2664775828
13652461054919381533

real	0m8.171s
user	0m8.167s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
test.sh: line 26: dieharder: command not found

real	0m0.002s
user	0m0.003s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd0c47690
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd0c47690
length= 128 megabytes (2^27 bytes), time= 3.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd0c47690
length= 256 megabytes (2^28 bytes), time= 7.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xd0c47690
length= 512 megabytes (2^29 bytes), time= 15.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xd0c47690
length= 1 gigabyte (2^30 bytes), time= 32.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xd0c47690
length= 2 gigabytes (2^31 bytes), time= 64.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd0c47690
length= 4 gigabytes (2^32 bytes), time= 125 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xd0c47690
length= 8 gigabytes (2^33 bytes), time= 242 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -3.9  p =1-8.5e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0xd0c47690
length= 16 gigabytes (2^34 bytes), time= 485 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xd0c47690
length= 32 gigabytes (2^35 bytes), time= 955 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.2  p =1-6.1e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xd0c47690
length= 64 gigabytes (2^36 bytes), time= 1892 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xd0c47690
length= 122.500 gigabytes (2^36.937 bytes), time= 3605 seconds
  no anomalies in 258 test result(s)


real	60m6.760s
user	58m42.464s
sys	1m16.963s
*/
/* TEST00
time ./MRndCPP 12 
1371554712
1725976859
2059674324
3068496199
1121289917
2763103988
3220689998
3307308312
785231875
2664775828
13652461054919381533

real	0m8.301s
user	0m8.301s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.07e+07  |  84931243|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.99931749|   WEAK   
      diehard_operm5|   0|   1000000|     100|0.16056011|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.27829612|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.53562488|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.82121079|  PASSED  
        diehard_opso|   0|   2097152|     100|0.95724491|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.13702968|  PASSED  
         diehard_dna|   0|   2097152|     100|0.63542844|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.65851978|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.96327640|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.51474850|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.13229125|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.21825640|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.82486534|  PASSED  
        diehard_sums|   0|       100|     100|0.09507796|  PASSED  
        diehard_runs|   0|    100000|     100|0.76878561|  PASSED  
        diehard_runs|   0|    100000|     100|0.54244634|  PASSED  
       diehard_craps|   0|    200000|     100|0.63592245|  PASSED  
       diehard_craps|   0|    200000|     100|0.48233788|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.22072380|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.35159484|  PASSED  
         sts_monobit|   1|    100000|     100|0.79508412|  PASSED  
            sts_runs|   2|    100000|     100|0.09051576|  PASSED  
          sts_serial|   1|    100000|     100|0.79000403|  PASSED  
          sts_serial|   2|    100000|     100|0.28732498|  PASSED  
          sts_serial|   3|    100000|     100|0.42467013|  PASSED  
          sts_serial|   3|    100000|     100|0.99925825|   WEAK   
          sts_serial|   4|    100000|     100|0.62031064|  PASSED  
          sts_serial|   4|    100000|     100|0.88299356|  PASSED  
          sts_serial|   5|    100000|     100|0.56949737|  PASSED  
          sts_serial|   5|    100000|     100|0.56515387|  PASSED  
          sts_serial|   6|    100000|     100|0.49745173|  PASSED  
          sts_serial|   6|    100000|     100|0.99960677|   WEAK   
          sts_serial|   7|    100000|     100|0.94439990|  PASSED  
          sts_serial|   7|    100000|     100|0.90484788|  PASSED  
          sts_serial|   8|    100000|     100|0.76711896|  PASSED  
          sts_serial|   8|    100000|     100|0.99624776|   WEAK   
          sts_serial|   9|    100000|     100|0.40243420|  PASSED  
          sts_serial|   9|    100000|     100|0.94937361|  PASSED  
          sts_serial|  10|    100000|     100|0.98221827|  PASSED  
          sts_serial|  10|    100000|     100|0.85517857|  PASSED  
          sts_serial|  11|    100000|     100|0.95121832|  PASSED  
          sts_serial|  11|    100000|     100|0.54791492|  PASSED  
          sts_serial|  12|    100000|     100|0.95109714|  PASSED  
          sts_serial|  12|    100000|     100|0.97933842|  PASSED  
          sts_serial|  13|    100000|     100|0.36414001|  PASSED  
          sts_serial|  13|    100000|     100|0.50338205|  PASSED  
          sts_serial|  14|    100000|     100|0.64152042|  PASSED  
          sts_serial|  14|    100000|     100|0.70188143|  PASSED  
          sts_serial|  15|    100000|     100|0.74872555|  PASSED  
          sts_serial|  15|    100000|     100|0.85774614|  PASSED  
          sts_serial|  16|    100000|     100|0.97342777|  PASSED  
          sts_serial|  16|    100000|     100|0.63031136|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.10842139|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.20448330|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.44862370|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.53402823|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.99849235|   WEAK   
         rgb_bitdist|   6|    100000|     100|0.88197301|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.94003392|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.77014097|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.14378312|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.52948342|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.41092671|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.00925020|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.99268055|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.46330792|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.15973331|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.72373728|  PASSED  
    rgb_permutations|   2|    100000|     100|0.56047484|  PASSED  
    rgb_permutations|   3|    100000|     100|0.37818864|  PASSED  
    rgb_permutations|   4|    100000|     100|0.34235418|  PASSED  
    rgb_permutations|   5|    100000|     100|0.76991320|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.98173750|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.52933260|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.99797867|   WEAK   
      rgb_lagged_sum|   3|   1000000|     100|0.12380285|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.76510737|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.45189520|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.98760395|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.24990571|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.86689569|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.35570656|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.93558536|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.77300341|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.47359924|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.22481877|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.26326655|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.98432888|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.63598685|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.31886594|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.25056627|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.65380697|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.87803927|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.66039735|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.84243825|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.25840272|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.53403311|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.94154720|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.19053753|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.62018963|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.32753218|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.17409711|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.57999986|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.94314295|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.13152583|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.39167105|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.38214448|  PASSED  
             dab_dct| 256|     50000|       1|0.15305974|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.21980706|  PASSED  
        dab_filltree|  32|  15000000|       1|0.16416208|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.25249506|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.97742348|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.53597465|  PASSED  

real	68m4.248s
user	59m52.221s
sys	8m4.964s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4175954b
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4175954b
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.6  p =  7.5e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x4175954b
length= 128 megabytes (2^27 bytes), time= 5.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 256 megabytes (2^28 bytes), time= 10.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 512 megabytes (2^29 bytes), time= 18.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 1 gigabyte (2^30 bytes), time= 33.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 2 gigabytes (2^31 bytes), time= 63.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 4 gigabytes (2^32 bytes), time= 120 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 8 gigabytes (2^33 bytes), time= 249 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.5  p =1-3.6e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x4175954b
length= 16 gigabytes (2^34 bytes), time= 486 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 32 gigabytes (2^35 bytes), time= 970 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 64 gigabytes (2^36 bytes), time= 1906 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 128 gigabytes (2^37 bytes), time= 3792 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 256 gigabytes (2^38 bytes), time= 7486 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 512 gigabytes (2^39 bytes), time= 15353 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 1 terabyte (2^40 bytes), time= 31675 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +4.5  p =  4.9e-3   unusual          
  ...and 289 test result(s) without anomalies

rng=RNG_stdin, seed=0x4175954b
length= 2 terabytes (2^41 bytes), time= 62313 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -5.0  p =1-5.0e-3   unusual          
  [Low1/8]BCFN(2+0,13-0,T)          R=  -7.3  p =1-1.0e-3   unusual          
  [Low4/32]DC6-9x1Bytes-1           R=  -5.3  p =1-3.4e-3   unusual          
  ...and 296 test result(s) without anomalies

rng=RNG_stdin, seed=0x4175954b
length= 4 terabytes (2^42 bytes), time= 127208 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -5.0  p =1-5.0e-3   unusual          
  ...and 310 test result(s) without anomalies

rng=RNG_stdin, seed=0x4175954b
length= 8 terabytes (2^43 bytes), time= 248448 seconds
  no anomalies in 322 test result(s)

rng=RNG_stdin, seed=0x4175954b
length= 11.544 terabytes (2^43.529 bytes), time= 345602 seconds
  no anomalies in 327 test result(s)


real	5760m3.249s
user	5636m4.175s
sys	121m47.242s
*/
