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
/// @created on 2019-12-08 03:00:46 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5992744a-46f6-4728-9046-d424638b4e1a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_mlin.h"

using TRnd = RndMLin;
/* TEST00
time ./MRndCPP 
2458479412
56640046
2419309898
2204864253
607697875
4022608612
4611657336277403400

real	0m7.186s
user	0m7.180s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  | 142492796|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.83055002|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.18784160|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.54888554|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.42538116|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.95994734|  PASSED  
        diehard_opso|   0|   2097152|     100|0.95854199|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.12225528|  PASSED  
         diehard_dna|   0|   2097152|     100|0.96451815|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.42486108|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.97013784|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.72516127|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.17047384|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.77676952|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.87035063|  PASSED  
        diehard_sums|   0|       100|     100|0.08788560|  PASSED  
        diehard_runs|   0|    100000|     100|0.33271019|  PASSED  
        diehard_runs|   0|    100000|     100|0.26858090|  PASSED  
       diehard_craps|   0|    200000|     100|0.14574494|  PASSED  
       diehard_craps|   0|    200000|     100|0.95501308|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.19160441|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.01966624|  PASSED  
         sts_monobit|   1|    100000|     100|0.95012232|  PASSED  
            sts_runs|   2|    100000|     100|0.47196796|  PASSED  
          sts_serial|   1|    100000|     100|0.87790267|  PASSED  
          sts_serial|   2|    100000|     100|0.99457100|  PASSED  
          sts_serial|   3|    100000|     100|0.28163808|  PASSED  
          sts_serial|   3|    100000|     100|0.56800525|  PASSED  
          sts_serial|   4|    100000|     100|0.88819979|  PASSED  
          sts_serial|   4|    100000|     100|0.85790364|  PASSED  
          sts_serial|   5|    100000|     100|0.66071220|  PASSED  
          sts_serial|   5|    100000|     100|0.87172403|  PASSED  
          sts_serial|   6|    100000|     100|0.94673830|  PASSED  
          sts_serial|   6|    100000|     100|0.25987040|  PASSED  
          sts_serial|   7|    100000|     100|0.43986704|  PASSED  
          sts_serial|   7|    100000|     100|0.51252560|  PASSED  
          sts_serial|   8|    100000|     100|0.83025665|  PASSED  
          sts_serial|   8|    100000|     100|0.10917381|  PASSED  
          sts_serial|   9|    100000|     100|0.92422797|  PASSED  
          sts_serial|   9|    100000|     100|0.75136353|  PASSED  
          sts_serial|  10|    100000|     100|0.81850885|  PASSED  
          sts_serial|  10|    100000|     100|0.95346771|  PASSED  
          sts_serial|  11|    100000|     100|0.98568509|  PASSED  
          sts_serial|  11|    100000|     100|0.98938204|  PASSED  
          sts_serial|  12|    100000|     100|0.07575997|  PASSED  
          sts_serial|  12|    100000|     100|0.20397822|  PASSED  
          sts_serial|  13|    100000|     100|0.14698881|  PASSED  
          sts_serial|  13|    100000|     100|0.06229897|  PASSED  
          sts_serial|  14|    100000|     100|0.42727260|  PASSED  
          sts_serial|  14|    100000|     100|0.08596489|  PASSED  
          sts_serial|  15|    100000|     100|0.04113970|  PASSED  
          sts_serial|  15|    100000|     100|0.99577095|   WEAK   
          sts_serial|  16|    100000|     100|0.52949734|  PASSED  
          sts_serial|  16|    100000|     100|0.93894185|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.05730211|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.45653583|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.07824509|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.29907402|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.76508772|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.15826901|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.69005805|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.45645047|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.07615096|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.66124132|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.46636090|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.83064555|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.88019160|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.31465971|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.01997517|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.26666304|  PASSED  
    rgb_permutations|   2|    100000|     100|0.48099984|  PASSED  
    rgb_permutations|   3|    100000|     100|0.50560018|  PASSED  
    rgb_permutations|   4|    100000|     100|0.77806903|  PASSED  
    rgb_permutations|   5|    100000|     100|0.99382007|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.96162067|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.57091598|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.44472154|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.10357092|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.24393929|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.98265901|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.84931489|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.89717196|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.79054292|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.57442221|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.00173612|   WEAK   
      rgb_lagged_sum|  11|   1000000|     100|0.10145774|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.48768657|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.18965209|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.99671399|   WEAK   
      rgb_lagged_sum|  15|   1000000|     100|0.99450222|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.12984588|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.65630382|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.64230693|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.88026754|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.25567213|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.65383625|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.60731671|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.84262077|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.74075939|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.80165713|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.05494079|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.72346612|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.74273947|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.07921567|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.12795510|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.08011272|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.83329769|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.72281417|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.55501069|  PASSED  
             dab_dct| 256|     50000|       1|0.94453997|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.81425471|  PASSED  
        dab_filltree|  32|  15000000|       1|0.74071227|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.32983411|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.27007775|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.01789155|  PASSED  

real	53m43.006s
user	49m55.920s
sys	3m39.116s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf58458a2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf58458a2
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf58458a2
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf58458a2
length= 512 megabytes (2^29 bytes), time= 12.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf58458a2
length= 1 gigabyte (2^30 bytes), time= 24.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf58458a2
length= 2 gigabytes (2^31 bytes), time= 46.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf58458a2
length= 4 gigabytes (2^32 bytes), time= 91.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +7.9  p =  9.0e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +5.6  p =  5.3e-3   unusual          
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf58458a2
length= 4.500 gigabytes (2^32.170 bytes), time= 105 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +7.6  p =  1.3e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +5.6  p =  5.1e-3   unusual          
  ...and 154 test result(s) without anomalies


real	1m45.438s
user	1m43.344s
sys	0m1.804s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x42ce04d5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x42ce04d5
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.2  p =  9.1e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x42ce04d5
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x42ce04d5
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x42ce04d5
length= 1 gigabyte (2^30 bytes), time= 19.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x42ce04d5
length= 2 gigabytes (2^31 bytes), time= 37.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x42ce04d5
length= 4 gigabytes (2^32 bytes), time= 73.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x42ce04d5
length= 5.500 gigabytes (2^32.459 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.537s
user	1m39.068s
sys	0m2.124s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x319c9ea8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x319c9ea8
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.6  p = 0.989     unusual          
  [Low1/32]BCFN(2+7,13-9,T)         R=  -3.7  p =1-1.1e-4   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0x319c9ea8
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x319c9ea8
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x319c9ea8
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.5  p =1-3.5e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x319c9ea8
length= 2 gigabytes (2^31 bytes), time= 39.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x319c9ea8
length= 4 gigabytes (2^32 bytes), time= 77.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x319c9ea8
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.850s
user	1m41.476s
sys	0m2.028s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb28a5066
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb28a5066
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb28a5066
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb28a5066
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb28a5066
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb28a5066
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb28a5066
length= 4 gigabytes (2^32 bytes), time= 72.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xb28a5066
length= 8 gigabytes (2^33 bytes), time= 149 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xb28a5066
length= 16 gigabytes (2^34 bytes), time= 306 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xb28a5066
length= 32 gigabytes (2^35 bytes), time= 614 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xb28a5066
length= 64 gigabytes (2^36 bytes), time= 1241 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xb28a5066
length= 128 gigabytes (2^37 bytes), time= 2487 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+9,13-2,T)         R=  -8.9  p =1-5.3e-5   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +5.9  p =  3.3e-3   unusual          
  ...and 194 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb28a5066
length= 186.000 gigabytes (2^37.539 bytes), time= 3602 seconds
  no anomalies in 201 test result(s)


real	60m2.807s
user	58m41.636s
sys	1m12.240s
*/
/* TEST00
time ./MRndCPP 
2458479412
56640046
2419309898
2204864253
607697875
4022608612
18446604494304795309

real	0m57.869s
user	0m57.768s
sys	0m0.024s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.12e+07  |1047010262|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.20249153|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.39852715|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.08094561|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.61984898|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.50433822|  PASSED  
        diehard_opso|   0|   2097152|     100|0.29684272|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.29564639|  PASSED  
         diehard_dna|   0|   2097152|     100|0.34267408|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.88721897|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.41020226|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.82824986|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.25836788|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.30524109|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.28625604|  PASSED  
        diehard_sums|   0|       100|     100|0.00073015|   WEAK   
        diehard_runs|   0|    100000|     100|0.44747893|  PASSED  
        diehard_runs|   0|    100000|     100|0.50233671|  PASSED  
       diehard_craps|   0|    200000|     100|0.89504216|  PASSED  
       diehard_craps|   0|    200000|     100|0.45833733|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.40140662|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.42971530|  PASSED  
         sts_monobit|   1|    100000|     100|0.59837684|  PASSED  
            sts_runs|   2|    100000|     100|0.88407169|  PASSED  
          sts_serial|   1|    100000|     100|0.91932807|  PASSED  
          sts_serial|   2|    100000|     100|0.22102392|  PASSED  
          sts_serial|   3|    100000|     100|0.02177531|  PASSED  
          sts_serial|   3|    100000|     100|0.06959374|  PASSED  
          sts_serial|   4|    100000|     100|0.35448515|  PASSED  
          sts_serial|   4|    100000|     100|0.60710906|  PASSED  
          sts_serial|   5|    100000|     100|0.55666802|  PASSED  
          sts_serial|   5|    100000|     100|0.96142030|  PASSED  
          sts_serial|   6|    100000|     100|0.09441318|  PASSED  
          sts_serial|   6|    100000|     100|0.08068270|  PASSED  
          sts_serial|   7|    100000|     100|0.10370512|  PASSED  
          sts_serial|   7|    100000|     100|0.44683761|  PASSED  
          sts_serial|   8|    100000|     100|0.11179579|  PASSED  
          sts_serial|   8|    100000|     100|0.38044291|  PASSED  
          sts_serial|   9|    100000|     100|0.65630398|  PASSED  
          sts_serial|   9|    100000|     100|0.24701609|  PASSED  
          sts_serial|  10|    100000|     100|0.86714320|  PASSED  
          sts_serial|  10|    100000|     100|0.78023999|  PASSED  
          sts_serial|  11|    100000|     100|0.96184837|  PASSED  
          sts_serial|  11|    100000|     100|0.93129426|  PASSED  
          sts_serial|  12|    100000|     100|0.63027481|  PASSED  
          sts_serial|  12|    100000|     100|0.89170226|  PASSED  
          sts_serial|  13|    100000|     100|0.84095540|  PASSED  
          sts_serial|  13|    100000|     100|0.53654626|  PASSED  
          sts_serial|  14|    100000|     100|0.32646225|  PASSED  
          sts_serial|  14|    100000|     100|0.33442027|  PASSED  
          sts_serial|  15|    100000|     100|0.28062700|  PASSED  
          sts_serial|  15|    100000|     100|0.28606635|  PASSED  
          sts_serial|  16|    100000|     100|0.10156302|  PASSED  
          sts_serial|  16|    100000|     100|0.54286213|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.83423638|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.64472506|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.59943526|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.16669621|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.67552259|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.35894385|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.21178434|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.20514951|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.92779924|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.23351454|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.50829968|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.84404125|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.13665643|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.02622072|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.79613690|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.68934977|  PASSED  
    rgb_permutations|   2|    100000|     100|0.30568361|  PASSED  
    rgb_permutations|   3|    100000|     100|0.56817576|  PASSED  
    rgb_permutations|   4|    100000|     100|0.92869146|  PASSED  
    rgb_permutations|   5|    100000|     100|0.77734305|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.70471086|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.93464760|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.35489717|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.26482338|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.91713954|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.63419903|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.89201592|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.05671487|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.73333199|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.90609976|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.23281832|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.96311774|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.01944786|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.25269127|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.57305198|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.58245489|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.55481498|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.97959508|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.65204575|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.06331637|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.66134158|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.99399246|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.27748519|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.89475325|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.88845105|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.60671378|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.82951858|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.81697834|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.00633309|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.39703634|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.79430473|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.56975159|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.84289518|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.32833442|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.74500640|  PASSED  
             dab_dct| 256|     50000|       1|0.10176425|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.33144241|  PASSED  
        dab_filltree|  32|  15000000|       1|0.47661643|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.95254115|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.60563388|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.06230462|  PASSED  

real	54m44.209s
user	51m12.444s
sys	3m28.056s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xba2e3aa2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xba2e3aa2
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xba2e3aa2
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xba2e3aa2
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xba2e3aa2
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xba2e3aa2
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xba2e3aa2
length= 4 gigabytes (2^32 bytes), time= 73.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xba2e3aa2
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.455s
user	1m42.092s
sys	0m2.240s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xcce7c308
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xcce7c308
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xcce7c308
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R= +11.1  p =  3.0e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xcce7c308
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xcce7c308
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xcce7c308
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xcce7c308
length= 4 gigabytes (2^32 bytes), time= 72.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xcce7c308
length= 5.500 gigabytes (2^32.459 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.459s
user	1m38.992s
sys	0m2.204s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5b854bdf
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5b854bdf
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5b854bdf
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5b854bdf
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5b854bdf
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5b854bdf
length= 2 gigabytes (2^31 bytes), time= 39.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5b854bdf
length= 4 gigabytes (2^32 bytes), time= 76.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.6  p = 0.988     unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5b854bdf
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.781s
user	1m39.660s
sys	0m1.960s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x214ba2c6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x214ba2c6
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x214ba2c6
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x214ba2c6
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x214ba2c6
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.9  p =1-7.6e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x214ba2c6
length= 2 gigabytes (2^31 bytes), time= 39.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x214ba2c6
length= 4 gigabytes (2^32 bytes), time= 79.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x214ba2c6
length= 8 gigabytes (2^33 bytes), time= 166 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x214ba2c6
length= 16 gigabytes (2^34 bytes), time= 335 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x214ba2c6
length= 32 gigabytes (2^35 bytes), time= 668 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x214ba2c6
length= 64 gigabytes (2^36 bytes), time= 1347 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x214ba2c6
length= 128 gigabytes (2^37 bytes), time= 2693 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x214ba2c6
length= 171.500 gigabytes (2^37.422 bytes), time= 3601 seconds
  no anomalies in 201 test result(s)


real	60m2.271s
user	58m48.236s
sys	1m9.436s
*/
