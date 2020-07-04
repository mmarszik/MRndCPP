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
/// @created on 2019-12-08 03:01:10 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 1558b1d5-f930-4fcb-99b9-14149fee8f7f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_ranlux48.h"

namespace MRnd {

using TRnd = RndRanlux48;

}
/* TEST00
time ./MRndCPP 10 
4198816209
4194992856
2088193992
1710084186
3995703066
4262331212
2783766682
2038190755
411394916
2410138185
4699862920179767358

real	2m8.745s
user	2m8.626s
sys	0m0.056s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  7.25e+06  |3728006529|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.75733999|  PASSED  

real	0m23.918s
user	0m42.343s
sys	0m0.350s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xbb33be27
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xbb33be27
length= 64 megabytes (2^26 bytes), time= 3.3 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xbb33be27
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xbb33be27
length= 256 megabytes (2^28 bytes), time= 14.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xbb33be27
length= 512 megabytes (2^29 bytes), time= 28.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xbb33be27
length= 768.000 megabytes (2^29.585 bytes), time= 42.1 seconds
  no anomalies in 178 test result(s)


real	0m42.921s
user	0m45.809s
sys	0m0.631s
*/
/* TEST00
time ./MRndCPP 10 
4198816209
4194992856
2088193992
1710084186
3995703066
4262331212
2783766682
2038190755
411394916
2410138185
4699862920179767358

real	2m9.341s
user	2m9.274s
sys	0m0.044s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  7.18e+06  |3618768035|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.86051981|  PASSED  

real	0m23.945s
user	0m42.386s
sys	0m0.428s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe8cb1156
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe8cb1156
length= 64 megabytes (2^26 bytes), time= 3.3 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 256 megabytes (2^28 bytes), time= 14.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 512 megabytes (2^29 bytes), time= 28.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-3,T)          R=  -7.0  p =1-8.1e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xe8cb1156
length= 1 gigabyte (2^30 bytes), time= 55.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 2 gigabytes (2^31 bytes), time= 109 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 4 gigabytes (2^32 bytes), time= 214 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 5.750 gigabytes (2^32.524 bytes), time= 307 seconds
  no anomalies in 210 test result(s)


real	5m7.729s
user	5m29.724s
sys	0m4.739s
*/
/* TEST00
time ./MRndCPP 10 
4198816209
4194992856
2088193992
1710084186
3995703066
4262331212
2783766682
2038190755
411394916
2410138185
4699862920179767358

real	2m55.637s
user	2m55.428s
sys	0m0.044s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  5.08e+06  |  15953464|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.96064243|  PASSED  

real	0m48.038s
user	0m47.088s
sys	0m0.880s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xff657fe9
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xff657fe9
length= 32 megabytes (2^25 bytes), time= 2.1 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 64 megabytes (2^26 bytes), time= 5.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 128 megabytes (2^27 bytes), time= 9.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 256 megabytes (2^28 bytes), time= 19.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 512 megabytes (2^29 bytes), time= 36.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 1 gigabyte (2^30 bytes), time= 70.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 2 gigabytes (2^31 bytes), time= 139 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 4 gigabytes (2^32 bytes), time= 275 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 8 gigabytes (2^33 bytes), time= 549 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 14.750 gigabytes (2^33.883 bytes), time= 1011 seconds
  no anomalies in 226 test result(s)


real	16m52.413s
user	16m39.148s
sys	0m12.276s
*/
/* TEST00
time ./MRndCPP 12 
4198816209
4194992856
2088193992
1710084186
3995703066
4262331212
2783766682
2038190755
411394916
2410138185
6953287285214150890

real	20m31.129s
user	20m31.075s
sys	0m0.009s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.27e+06  |1910895462|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.11469780|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.91180991|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.52804012|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.08231835|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.86901019|  PASSED  
        diehard_opso|   0|   2097152|     100|0.75518067|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.72171914|  PASSED  
         diehard_dna|   0|   2097152|     100|0.52610942|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.53137676|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.69577310|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.86786374|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.98075961|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.13605025|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.85017621|  PASSED  
        diehard_sums|   0|       100|     100|0.28700300|  PASSED  
        diehard_runs|   0|    100000|     100|0.85564577|  PASSED  
        diehard_runs|   0|    100000|     100|0.82161271|  PASSED  
       diehard_craps|   0|    200000|     100|0.55207071|  PASSED  
       diehard_craps|   0|    200000|     100|0.90515462|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.76538660|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.63206304|  PASSED  
         sts_monobit|   1|    100000|     100|0.16118489|  PASSED  
            sts_runs|   2|    100000|     100|0.50754373|  PASSED  
          sts_serial|   1|    100000|     100|0.47594024|  PASSED  
          sts_serial|   2|    100000|     100|0.72926067|  PASSED  
          sts_serial|   3|    100000|     100|0.91736847|  PASSED  
          sts_serial|   3|    100000|     100|0.46176042|  PASSED  
          sts_serial|   4|    100000|     100|0.34724611|  PASSED  
          sts_serial|   4|    100000|     100|0.76117129|  PASSED  
          sts_serial|   5|    100000|     100|0.52732209|  PASSED  
          sts_serial|   5|    100000|     100|0.45457071|  PASSED  
          sts_serial|   6|    100000|     100|0.07905975|  PASSED  
          sts_serial|   6|    100000|     100|0.35258308|  PASSED  
          sts_serial|   7|    100000|     100|0.91628577|  PASSED  
          sts_serial|   7|    100000|     100|0.32529386|  PASSED  
          sts_serial|   8|    100000|     100|0.73761058|  PASSED  
          sts_serial|   8|    100000|     100|0.76742849|  PASSED  
          sts_serial|   9|    100000|     100|0.65295241|  PASSED  
          sts_serial|   9|    100000|     100|0.76113674|  PASSED  
          sts_serial|  10|    100000|     100|0.30870472|  PASSED  
          sts_serial|  10|    100000|     100|0.39216853|  PASSED  
          sts_serial|  11|    100000|     100|0.94953228|  PASSED  
          sts_serial|  11|    100000|     100|0.70608312|  PASSED  
          sts_serial|  12|    100000|     100|0.66464938|  PASSED  
          sts_serial|  12|    100000|     100|0.73639142|  PASSED  
          sts_serial|  13|    100000|     100|0.65866691|  PASSED  
          sts_serial|  13|    100000|     100|0.36417105|  PASSED  
          sts_serial|  14|    100000|     100|0.64337289|  PASSED  
          sts_serial|  14|    100000|     100|0.74171605|  PASSED  
          sts_serial|  15|    100000|     100|0.29646325|  PASSED  
          sts_serial|  15|    100000|     100|0.26801573|  PASSED  
          sts_serial|  16|    100000|     100|0.66267571|  PASSED  
          sts_serial|  16|    100000|     100|0.95240530|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.68333872|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.40411199|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.75526708|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.38253672|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.71301492|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.45962515|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.39513450|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.87097486|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.88602989|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.07278060|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.31977031|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.67853242|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.98385804|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.40862176|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.21965891|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.57215046|  PASSED  
    rgb_permutations|   2|    100000|     100|0.54025079|  PASSED  
    rgb_permutations|   3|    100000|     100|0.84241444|  PASSED  
    rgb_permutations|   4|    100000|     100|0.74819661|  PASSED  
    rgb_permutations|   5|    100000|     100|0.02243085|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.00135480|   WEAK   
      rgb_lagged_sum|   1|   1000000|     100|0.28518460|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.78309439|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.77691637|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.87949125|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.46635416|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.48113260|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.98596830|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.71071079|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.98352952|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.21439950|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.98384658|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.16944472|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.65318897|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.83177042|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.08337522|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.99995236|   WEAK   
      rgb_lagged_sum|  17|   1000000|     100|0.94613215|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.87240833|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.79204641|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.80254449|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.84379123|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.25852230|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.21831940|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.88579914|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.41711438|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.55744016|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.89777283|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.31782952|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.92087880|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.03805571|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.67260435|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.22513738|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.80842900|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.20204226|  PASSED  
             dab_dct| 256|     50000|       1|0.61756015|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.63049507|  PASSED  
        dab_filltree|  32|  15000000|       1|0.83315298|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.83429198|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.24696761|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.93217160|  PASSED  

real	313m54.234s
user	364m13.937s
sys	10m55.284s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4ce27636
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4ce27636
length= 16 megabytes (2^24 bytes), time= 2.2 seconds
  no anomalies in 119 test result(s)

rng=RNG_stdin, seed=0x4ce27636
length= 32 megabytes (2^25 bytes), time= 5.1 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x4ce27636
length= 64 megabytes (2^26 bytes), time= 9.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x4ce27636
length= 128 megabytes (2^27 bytes), time= 16.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4ce27636
length= 256 megabytes (2^28 bytes), time= 29.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4ce27636
length= 512 megabytes (2^29 bytes), time= 56.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x4ce27636
length= 1 gigabyte (2^30 bytes), time= 107 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4ce27636
length= 2 gigabytes (2^31 bytes), time= 209 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x4ce27636
length= 4 gigabytes (2^32 bytes), time= 408 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x4ce27636
length= 8 gigabytes (2^33 bytes), time= 810 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  -2.2  p =1-9.7e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x4ce27636
length= 16 gigabytes (2^34 bytes), time= 1621 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.2  p =1-4.8e-3   unusual          
  [Low1/32]Gap-16:B                 R=  -4.3  p =1-1.2e-3   unusual          
  ...and 224 test result(s) without anomalies

rng=RNG_stdin, seed=0x4ce27636
length= 32 gigabytes (2^35 bytes), time= 3255 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -5.7  p =1-6.6e-4   mildly suspicious
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x4ce27636
length= 35.500 gigabytes (2^35.150 bytes), time= 3612 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.4  p =1-1.0e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -4.0  p =1-7.0e-3   unusual          
  ...and 233 test result(s) without anomalies


real	60m13.209s
user	63m16.525s
sys	1m46.287s
*/
/* TEST00
time ./MRndCPP 12 
4198816209
4194992856
2088193992
1710084186
3995703066
4262331212
2783766682
2038190755
411394916
2410138185
6953287285214150890

real	21m14.361s
user	21m11.903s
sys	0m2.203s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.84e+06  |3941296044|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.73256953|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.01347754|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.66506392|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.58838137|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.58161763|  PASSED  
        diehard_opso|   0|   2097152|     100|0.01055281|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.52596006|  PASSED  
         diehard_dna|   0|   2097152|     100|0.48190839|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.31310885|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.34542215|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.11892087|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.15652542|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.29219159|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.28111427|  PASSED  
        diehard_sums|   0|       100|     100|0.01915003|  PASSED  
        diehard_runs|   0|    100000|     100|0.15014101|  PASSED  
        diehard_runs|   0|    100000|     100|0.23896172|  PASSED  
       diehard_craps|   0|    200000|     100|0.96373934|  PASSED  
       diehard_craps|   0|    200000|     100|0.15290924|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.40126684|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.13049033|  PASSED  
         sts_monobit|   1|    100000|     100|0.99032233|  PASSED  
            sts_runs|   2|    100000|     100|0.13544238|  PASSED  
          sts_serial|   1|    100000|     100|0.90815452|  PASSED  
          sts_serial|   2|    100000|     100|0.81105897|  PASSED  
          sts_serial|   3|    100000|     100|0.91085252|  PASSED  
          sts_serial|   3|    100000|     100|0.73592717|  PASSED  
          sts_serial|   4|    100000|     100|0.62452985|  PASSED  
          sts_serial|   4|    100000|     100|0.11715084|  PASSED  
          sts_serial|   5|    100000|     100|0.66409588|  PASSED  
          sts_serial|   5|    100000|     100|0.72869115|  PASSED  
          sts_serial|   6|    100000|     100|0.56361693|  PASSED  
          sts_serial|   6|    100000|     100|0.36377856|  PASSED  
          sts_serial|   7|    100000|     100|0.79653764|  PASSED  
          sts_serial|   7|    100000|     100|0.66028794|  PASSED  
          sts_serial|   8|    100000|     100|0.43744964|  PASSED  
          sts_serial|   8|    100000|     100|0.91662408|  PASSED  
          sts_serial|   9|    100000|     100|0.48746164|  PASSED  
          sts_serial|   9|    100000|     100|0.65160262|  PASSED  
          sts_serial|  10|    100000|     100|0.87900374|  PASSED  
          sts_serial|  10|    100000|     100|0.31828726|  PASSED  
          sts_serial|  11|    100000|     100|0.09582490|  PASSED  
          sts_serial|  11|    100000|     100|0.45593618|  PASSED  
          sts_serial|  12|    100000|     100|0.17872086|  PASSED  
          sts_serial|  12|    100000|     100|0.86477336|  PASSED  
          sts_serial|  13|    100000|     100|0.51006336|  PASSED  
          sts_serial|  13|    100000|     100|0.82814387|  PASSED  
          sts_serial|  14|    100000|     100|0.12597749|  PASSED  
          sts_serial|  14|    100000|     100|0.00583797|  PASSED  
          sts_serial|  15|    100000|     100|0.16125558|  PASSED  
          sts_serial|  15|    100000|     100|0.85303728|  PASSED  
          sts_serial|  16|    100000|     100|0.10824388|  PASSED  
          sts_serial|  16|    100000|     100|0.96977490|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.89913853|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.71294866|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.23352173|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.08309184|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.55164531|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.42330442|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.18036211|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.51421989|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.62851070|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.97369822|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.58473683|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.31456271|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.54271648|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.13858236|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.13273424|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.46334210|  PASSED  
    rgb_permutations|   2|    100000|     100|0.98816721|  PASSED  
    rgb_permutations|   3|    100000|     100|0.04459889|  PASSED  
    rgb_permutations|   4|    100000|     100|0.21221424|  PASSED  
    rgb_permutations|   5|    100000|     100|0.85795887|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.67183215|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.91192598|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.09916048|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.88075254|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.38256716|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.38123555|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.88562440|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.28021161|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.80431266|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.17323330|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.50414097|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.65558333|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.01799562|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.46255502|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.51994160|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.68177440|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.92739273|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.99967345|   WEAK   
      rgb_lagged_sum|  18|   1000000|     100|0.07019461|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.97882255|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.88308590|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.42004989|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.02991127|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.50862950|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.92636855|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.41418685|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.58835257|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.94295696|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.18382087|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.95433837|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.49433708|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.32789379|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.13804194|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.18830741|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.03167148|  PASSED  
             dab_dct| 256|     50000|       1|0.29793354|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.14892213|  PASSED  
        dab_filltree|  32|  15000000|       1|0.64517976|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.02712515|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.60183633|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.15382479|  PASSED  

real	377m19.374s
user	368m47.677s
sys	8m26.970s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x58cd4b74
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x58cd4b74
length= 32 megabytes (2^25 bytes), time= 4.1 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 64 megabytes (2^26 bytes), time= 9.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 128 megabytes (2^27 bytes), time= 16.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +6.4  p =  2.0e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x58cd4b74
length= 256 megabytes (2^28 bytes), time= 31.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 512 megabytes (2^29 bytes), time= 61.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +6.5  p =  1.5e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x58cd4b74
length= 1 gigabyte (2^30 bytes), time= 117 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 2 gigabytes (2^31 bytes), time= 228 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.4  p =  8.1e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x58cd4b74
length= 4 gigabytes (2^32 bytes), time= 439 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 8 gigabytes (2^33 bytes), time= 888 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 16 gigabytes (2^34 bytes), time= 1765 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 32 gigabytes (2^35 bytes), time= 3501 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 64 gigabytes (2^36 bytes), time= 6979 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 128 gigabytes (2^37 bytes), time= 13857 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 256 gigabytes (2^38 bytes), time= 28358 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 512 gigabytes (2^39 bytes), time= 63777 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 1 terabyte (2^40 bytes), time= 142519 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 2 terabytes (2^41 bytes), time= 316486 seconds
  no anomalies in 299 test result(s)

rng=RNG_stdin, seed=0x58cd4b74
length= 2.160 terabytes (2^41.111 bytes), time= 345607 seconds
  no anomalies in 299 test result(s)


real	5760m9.272s
user	5647m45.673s
sys	108m28.477s
*/
