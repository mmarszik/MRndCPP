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
/// @created on 2019-12-08 03:02:06 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e8930fec-02e5-4925-88da-85500faa1cd4                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin04;
/* TEST00
time ./MRndCPP 
3497841202
67965748
527131255
182892387
247477018
3100051826
4611529154070239422

real	0m14.083s
user	0m14.052s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.88e+07  |2924230457|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.85861548|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.75757139|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.88349806|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.03004406|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.20815456|  PASSED  
        diehard_opso|   0|   2097152|     100|0.76378136|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.45051760|  PASSED  
         diehard_dna|   0|   2097152|     100|0.49455255|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.62939566|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.86086761|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.30014525|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.55423811|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.32844931|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.94583710|  PASSED  
        diehard_sums|   0|       100|     100|0.04693252|  PASSED  
        diehard_runs|   0|    100000|     100|0.87540436|  PASSED  
        diehard_runs|   0|    100000|     100|0.32884401|  PASSED  
       diehard_craps|   0|    200000|     100|0.39754744|  PASSED  
       diehard_craps|   0|    200000|     100|0.40081699|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.34256353|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.59646233|  PASSED  
         sts_monobit|   1|    100000|     100|0.76924250|  PASSED  
            sts_runs|   2|    100000|     100|0.74555344|  PASSED  
          sts_serial|   1|    100000|     100|0.60022799|  PASSED  
          sts_serial|   2|    100000|     100|0.14045384|  PASSED  
          sts_serial|   3|    100000|     100|0.33922830|  PASSED  
          sts_serial|   3|    100000|     100|0.39840393|  PASSED  
          sts_serial|   4|    100000|     100|0.32564812|  PASSED  
          sts_serial|   4|    100000|     100|0.34273906|  PASSED  
          sts_serial|   5|    100000|     100|0.51041561|  PASSED  
          sts_serial|   5|    100000|     100|0.33106312|  PASSED  
          sts_serial|   6|    100000|     100|0.80295763|  PASSED  
          sts_serial|   6|    100000|     100|0.95425802|  PASSED  
          sts_serial|   7|    100000|     100|0.97770334|  PASSED  
          sts_serial|   7|    100000|     100|0.52857558|  PASSED  
          sts_serial|   8|    100000|     100|0.29487447|  PASSED  
          sts_serial|   8|    100000|     100|0.10861726|  PASSED  
          sts_serial|   9|    100000|     100|0.82533076|  PASSED  
          sts_serial|   9|    100000|     100|0.62766036|  PASSED  
          sts_serial|  10|    100000|     100|0.52920168|  PASSED  
          sts_serial|  10|    100000|     100|0.80402919|  PASSED  
          sts_serial|  11|    100000|     100|0.36288751|  PASSED  
          sts_serial|  11|    100000|     100|0.30900167|  PASSED  
          sts_serial|  12|    100000|     100|0.29916389|  PASSED  
          sts_serial|  12|    100000|     100|0.66007283|  PASSED  
          sts_serial|  13|    100000|     100|0.70051154|  PASSED  
          sts_serial|  13|    100000|     100|0.91728488|  PASSED  
          sts_serial|  14|    100000|     100|0.47972020|  PASSED  
          sts_serial|  14|    100000|     100|0.27157585|  PASSED  
          sts_serial|  15|    100000|     100|0.98013228|  PASSED  
          sts_serial|  15|    100000|     100|0.48255028|  PASSED  
          sts_serial|  16|    100000|     100|0.99838842|   WEAK   
          sts_serial|  16|    100000|     100|0.61991699|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.59964143|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.02845943|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.52486767|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.42394712|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.87919505|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.29333042|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.68838111|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.24770091|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.82063861|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.26763120|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.83745361|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.23160536|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.83290610|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.56711725|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.35653651|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.46533646|  PASSED  
    rgb_permutations|   2|    100000|     100|0.18728993|  PASSED  
    rgb_permutations|   3|    100000|     100|0.98826720|  PASSED  
    rgb_permutations|   4|    100000|     100|0.24384285|  PASSED  
    rgb_permutations|   5|    100000|     100|0.19635489|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.71841302|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.93895186|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.88867129|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.42585494|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.97148300|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.45042518|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.82605878|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.56371380|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.03225605|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.17010122|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.49492382|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.78166284|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.97545087|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.23610042|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.23662939|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.65144676|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.89245108|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.64994874|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.73118923|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.68477500|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.32035412|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.07746675|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.75389060|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.61691213|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.44292193|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.31122349|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.00164095|   WEAK   
      rgb_lagged_sum|  27|   1000000|     100|0.42097362|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.70360475|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.92322543|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.64423840|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.93723632|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.33785140|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.07933108|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.01032442|  PASSED  
             dab_dct| 256|     50000|       1|0.41422281|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.97997432|  PASSED  
        dab_filltree|  32|  15000000|       1|0.16192730|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.74936850|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.31962082|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.75678332|  PASSED  

real	56m43.562s
user	52m59.508s
sys	3m34.900s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x188c1ca
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x188c1ca
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x188c1ca
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x188c1ca
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x188c1ca
length= 1 gigabyte (2^30 bytes), time= 20.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x188c1ca
length= 2 gigabytes (2^31 bytes), time= 39.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x188c1ca
length= 4 gigabytes (2^32 bytes), time= 77.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x188c1ca
length= 5.250 gigabytes (2^32.392 bytes), time= 105 seconds
  no anomalies in 160 test result(s)


real	1m45.347s
user	1m41.760s
sys	0m3.164s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x59b001b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x59b001b
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x59b001b
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x59b001b
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x59b001b
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x59b001b
length= 2 gigabytes (2^31 bytes), time= 39.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x59b001b
length= 4 gigabytes (2^32 bytes), time= 76.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x59b001b
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m42.112s
user	1m38.688s
sys	0m3.104s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xab55a9dd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xab55a9dd
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xab55a9dd
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xab55a9dd
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xab55a9dd
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xab55a9dd
length= 2 gigabytes (2^31 bytes), time= 39.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-4,T)         R=  +7.9  p =  2.0e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xab55a9dd
length= 4 gigabytes (2^32 bytes), time= 79.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xab55a9dd
length= 5.250 gigabytes (2^32.392 bytes), time= 106 seconds
  no anomalies in 160 test result(s)


real	1m46.898s
user	1m43.536s
sys	0m3.164s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa6b0e86c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa6b0e86c
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xa6b0e86c
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa6b0e86c
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  -2.3  p =1-5.5e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa6b0e86c
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xa6b0e86c
length= 2 gigabytes (2^31 bytes), time= 39.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xa6b0e86c
length= 4 gigabytes (2^32 bytes), time= 76.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xa6b0e86c
length= 8 gigabytes (2^33 bytes), time= 159 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xa6b0e86c
length= 16 gigabytes (2^34 bytes), time= 324 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xa6b0e86c
length= 32 gigabytes (2^35 bytes), time= 649 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xa6b0e86c
length= 64 gigabytes (2^36 bytes), time= 1315 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xa6b0e86c
length= 128 gigabytes (2^37 bytes), time= 2627 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xa6b0e86c
length= 176.000 gigabytes (2^37.459 bytes), time= 3604 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+24,13-9,T)                 R= +28.0  p =  1.5e-7   unusual          
  ...and 200 test result(s) without anomalies


real	60m4.802s
user	58m9.244s
sys	1m45.276s
*/
/* TEST00
time ./MRndCPP 
3497841202
67965748
527131255
182892387
247477018
3100051826
18445573391751321066

real	1m52.529s
user	1m52.380s
sys	0m0.036s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.82e+07  |3359817108|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.77452144|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.99306864|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.48145939|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.99997739|   WEAK   
   diehard_bitstream|   0|   2097152|     100|0.92374607|  PASSED  
        diehard_opso|   0|   2097152|     100|0.13920174|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.84701794|  PASSED  
         diehard_dna|   0|   2097152|     100|0.61817549|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.37110372|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.30412047|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.83992275|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.93223921|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.88675205|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.64391043|  PASSED  
        diehard_sums|   0|       100|     100|0.42847357|  PASSED  
        diehard_runs|   0|    100000|     100|0.56315704|  PASSED  
        diehard_runs|   0|    100000|     100|0.91774152|  PASSED  
       diehard_craps|   0|    200000|     100|0.52330474|  PASSED  
       diehard_craps|   0|    200000|     100|0.50130233|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.98678544|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.61258887|  PASSED  
         sts_monobit|   1|    100000|     100|0.51439514|  PASSED  
            sts_runs|   2|    100000|     100|0.57147788|  PASSED  
          sts_serial|   1|    100000|     100|0.63747054|  PASSED  
          sts_serial|   2|    100000|     100|0.73213954|  PASSED  
          sts_serial|   3|    100000|     100|0.99832288|   WEAK   
          sts_serial|   3|    100000|     100|0.97151769|  PASSED  
          sts_serial|   4|    100000|     100|0.15483180|  PASSED  
          sts_serial|   4|    100000|     100|0.11924716|  PASSED  
          sts_serial|   5|    100000|     100|0.08327738|  PASSED  
          sts_serial|   5|    100000|     100|0.12030337|  PASSED  
          sts_serial|   6|    100000|     100|0.19851642|  PASSED  
          sts_serial|   6|    100000|     100|0.52232324|  PASSED  
          sts_serial|   7|    100000|     100|0.63296242|  PASSED  
          sts_serial|   7|    100000|     100|0.88658310|  PASSED  
          sts_serial|   8|    100000|     100|0.00459940|   WEAK   
          sts_serial|   8|    100000|     100|0.00448751|   WEAK   
          sts_serial|   9|    100000|     100|0.04502220|  PASSED  
          sts_serial|   9|    100000|     100|0.79050533|  PASSED  
          sts_serial|  10|    100000|     100|0.08399585|  PASSED  
          sts_serial|  10|    100000|     100|0.21219609|  PASSED  
          sts_serial|  11|    100000|     100|0.53390320|  PASSED  
          sts_serial|  11|    100000|     100|0.60363314|  PASSED  
          sts_serial|  12|    100000|     100|0.55687306|  PASSED  
          sts_serial|  12|    100000|     100|0.87950611|  PASSED  
          sts_serial|  13|    100000|     100|0.53333909|  PASSED  
          sts_serial|  13|    100000|     100|0.85807136|  PASSED  
          sts_serial|  14|    100000|     100|0.99368806|  PASSED  
          sts_serial|  14|    100000|     100|0.86513600|  PASSED  
          sts_serial|  15|    100000|     100|0.60848836|  PASSED  
          sts_serial|  15|    100000|     100|0.45502211|  PASSED  
          sts_serial|  16|    100000|     100|0.48911743|  PASSED  
          sts_serial|  16|    100000|     100|0.44833329|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.11120853|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.97866321|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.34681166|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.85567539|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.49814579|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.18117780|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.74880900|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.52229270|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.64671802|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.13018458|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.81498433|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.75518830|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.20506017|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.57697755|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.91437858|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.72888784|  PASSED  
    rgb_permutations|   2|    100000|     100|0.99010460|  PASSED  
    rgb_permutations|   3|    100000|     100|0.00866991|  PASSED  
    rgb_permutations|   4|    100000|     100|0.43163705|  PASSED  
    rgb_permutations|   5|    100000|     100|0.25390647|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.35265735|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.40563555|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.64970930|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.51797821|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.39907196|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.05932911|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.24683871|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.53831229|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.73989880|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.97326774|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.30021802|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.50397266|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.04744987|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.33204395|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.14014639|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.78565389|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.66581328|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.00361805|   WEAK   
      rgb_lagged_sum|  18|   1000000|     100|0.44035624|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.78931883|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.32730225|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.07423005|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.88863874|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.67366215|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.08756004|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.21593761|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.53005079|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.15365909|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.94062181|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.14009982|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.98251379|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.96607568|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.60545366|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.23047883|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.96870397|  PASSED  
             dab_dct| 256|     50000|       1|0.27726016|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.89757885|  PASSED  
        dab_filltree|  32|  15000000|       1|0.57712383|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.04048767|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.65001724|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.40796261|  PASSED  

real	52m2.484s
user	48m20.540s
sys	3m38.720s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x99fdc1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x99fdc1
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x99fdc1
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x99fdc1
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x99fdc1
length= 1 gigabyte (2^30 bytes), time= 20.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x99fdc1
length= 2 gigabytes (2^31 bytes), time= 39.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-2,T)         R= +12.6  p =  4.9e-6   suspicious       
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x99fdc1
length= 4 gigabytes (2^32 bytes), time= 76.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x99fdc1
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.449s
user	1m39.128s
sys	0m3.188s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xab61b58b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xab61b58b
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xab61b58b
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xab61b58b
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xab61b58b
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R=  +7.6  p =  1.8e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xab61b58b
length= 2 gigabytes (2^31 bytes), time= 39.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xab61b58b
length= 4 gigabytes (2^32 bytes), time= 76.5 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all2                  R=  -1.8  p =1-4.5e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xab61b58b
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.902s
user	1m38.660s
sys	0m3.152s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x953b7e02
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x953b7e02
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x953b7e02
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x953b7e02
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x953b7e02
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x953b7e02
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -5.6  p =1-9.9e-5   mildly suspicious
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x953b7e02
length= 4 gigabytes (2^32 bytes), time= 82.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.5  p =1-8.8e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x953b7e02
length= 5.000 gigabytes (2^32.322 bytes), time= 104 seconds
  no anomalies in 159 test result(s)


real	1m44.311s
user	1m41.252s
sys	0m2.940s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x68af85b2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x68af85b2
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x68af85b2
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+6,13-8,T)         R= +16.3  p =  4.5e-5   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x68af85b2
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x68af85b2
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x68af85b2
length= 2 gigabytes (2^31 bytes), time= 39.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x68af85b2
length= 4 gigabytes (2^32 bytes), time= 76.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x68af85b2
length= 8 gigabytes (2^33 bytes), time= 159 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x68af85b2
length= 16 gigabytes (2^34 bytes), time= 323 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x68af85b2
length= 32 gigabytes (2^35 bytes), time= 646 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-0,T)         R=  +7.5  p =  1.5e-3   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0x68af85b2
length= 64 gigabytes (2^36 bytes), time= 1306 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.2  p =1-1.3e-3   unusual          
  [Low1/32]BCFN(2+2,13-1,T)         R=  -7.7  p =1-4.7e-4   unusual          
  ...and 187 test result(s) without anomalies

rng=RNG_stdin32, seed=0x68af85b2
length= 128 gigabytes (2^37 bytes), time= 2615 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x68af85b2
length= 176.500 gigabytes (2^37.464 bytes), time= 3600 seconds
  no anomalies in 201 test result(s)


real	60m0.119s
user	58m12.244s
sys	1m43.824s
*/
