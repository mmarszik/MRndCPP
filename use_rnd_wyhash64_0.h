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

using TRnd = RndWyhash64_0;
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
