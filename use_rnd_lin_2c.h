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

using TRnd = RndLin2c;
/* TEST00
time ./MRndCPP 
842299235
443731814
3731438431
2717125802
1624458502
4017950209
4611684688584389438

real	0m54.108s
user	0m53.892s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.93e+07  |3765439949|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.96875182|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.77129857|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.27478999|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.94414300|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.95257920|  PASSED  
        diehard_opso|   0|   2097152|     100|0.70427092|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.69062705|  PASSED  
         diehard_dna|   0|   2097152|     100|0.33144053|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.17641071|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.92115117|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.87630056|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.53648460|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.90148893|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.57338825|  PASSED  
        diehard_sums|   0|       100|     100|0.07723616|  PASSED  
        diehard_runs|   0|    100000|     100|0.57871677|  PASSED  
        diehard_runs|   0|    100000|     100|0.30199448|  PASSED  
       diehard_craps|   0|    200000|     100|0.12702897|  PASSED  
       diehard_craps|   0|    200000|     100|0.95776946|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.95061857|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.07415429|  PASSED  
         sts_monobit|   1|    100000|     100|0.88174295|  PASSED  
            sts_runs|   2|    100000|     100|0.61411368|  PASSED  
          sts_serial|   1|    100000|     100|0.92204070|  PASSED  
          sts_serial|   2|    100000|     100|0.49254054|  PASSED  
          sts_serial|   3|    100000|     100|0.43192875|  PASSED  
          sts_serial|   3|    100000|     100|0.35004129|  PASSED  
          sts_serial|   4|    100000|     100|0.40237765|  PASSED  
          sts_serial|   4|    100000|     100|0.41134559|  PASSED  
          sts_serial|   5|    100000|     100|0.81077759|  PASSED  
          sts_serial|   5|    100000|     100|0.30646792|  PASSED  
          sts_serial|   6|    100000|     100|0.80906779|  PASSED  
          sts_serial|   6|    100000|     100|0.72231383|  PASSED  
          sts_serial|   7|    100000|     100|0.76745581|  PASSED  
          sts_serial|   7|    100000|     100|0.93983854|  PASSED  
          sts_serial|   8|    100000|     100|0.41904507|  PASSED  
          sts_serial|   8|    100000|     100|0.08550762|  PASSED  
          sts_serial|   9|    100000|     100|0.88915708|  PASSED  
          sts_serial|   9|    100000|     100|0.84319881|  PASSED  
          sts_serial|  10|    100000|     100|0.53999765|  PASSED  
          sts_serial|  10|    100000|     100|0.21102051|  PASSED  
          sts_serial|  11|    100000|     100|0.41413397|  PASSED  
          sts_serial|  11|    100000|     100|0.62029708|  PASSED  
          sts_serial|  12|    100000|     100|0.97681027|  PASSED  
          sts_serial|  12|    100000|     100|0.82008826|  PASSED  
          sts_serial|  13|    100000|     100|0.81147977|  PASSED  
          sts_serial|  13|    100000|     100|0.73885370|  PASSED  
          sts_serial|  14|    100000|     100|0.82007250|  PASSED  
          sts_serial|  14|    100000|     100|0.59813026|  PASSED  
          sts_serial|  15|    100000|     100|0.74838964|  PASSED  
          sts_serial|  15|    100000|     100|0.36053164|  PASSED  
          sts_serial|  16|    100000|     100|0.24641658|  PASSED  
          sts_serial|  16|    100000|     100|0.17619679|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.59378537|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.89202945|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.46663630|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.27961646|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.14854658|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.52954551|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.77273494|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.97075101|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.81398227|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.69816756|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.71648820|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.08145448|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.01355442|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.49706824|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.77327376|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.62826962|  PASSED  
    rgb_permutations|   2|    100000|     100|0.47156335|  PASSED  
    rgb_permutations|   3|    100000|     100|0.32539318|  PASSED  
    rgb_permutations|   4|    100000|     100|0.85685970|  PASSED  
    rgb_permutations|   5|    100000|     100|0.96946826|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.81250900|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.81688464|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.78962545|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.22116478|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.01554146|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.34356096|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.10766403|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.69527935|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.33756843|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.14159372|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.04363850|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.85120069|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.96512969|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.78017001|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.38500359|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.12037034|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.16629976|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.10285336|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.54807200|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.48559443|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.14643109|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.53425065|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.42467199|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.92403981|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.93136301|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.12482021|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.18567392|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.77365149|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.65798046|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.75801031|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.26989707|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.96687128|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.56003073|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.97143372|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.96497086|  PASSED  
             dab_dct| 256|     50000|       1|0.10005023|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.83721692|  PASSED  
        dab_filltree|  32|  15000000|       1|0.54602606|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.17416661|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.00306294|   WEAK   
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.56128044|  PASSED  

real	70m5.031s
user	67m6.320s
sys	2m47.464s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb436309a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb436309a
length= 128 megabytes (2^27 bytes), time= 3.1 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb436309a
length= 256 megabytes (2^28 bytes), time= 6.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb436309a
length= 512 megabytes (2^29 bytes), time= 13.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb436309a
length= 1 gigabyte (2^30 bytes), time= 25.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb436309a
length= 2 gigabytes (2^31 bytes), time= 49.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb436309a
length= 4 gigabytes (2^32 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.0  p =  9.2e-3   unusual          
  ...and 155 test result(s) without anomalies


real	1m41.661s
user	1m38.720s
sys	0m2.568s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xeebbac3a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xeebbac3a
length= 128 megabytes (2^27 bytes), time= 3.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.3  p =  9.1e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xeebbac3a
length= 256 megabytes (2^28 bytes), time= 6.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xeebbac3a
length= 512 megabytes (2^29 bytes), time= 13.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xeebbac3a
length= 1 gigabyte (2^30 bytes), time= 26.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +4.5  p =  4.9e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xeebbac3a
length= 2 gigabytes (2^31 bytes), time= 51.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +3.7  p =  1.5e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xeebbac3a
length= 4 gigabytes (2^32 bytes), time= 100 seconds
  no anomalies in 156 test result(s)


real	1m40.921s
user	1m38.348s
sys	0m2.300s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x63d70248
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x63d70248
length= 128 megabytes (2^27 bytes), time= 3.0 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x63d70248
length= 256 megabytes (2^28 bytes), time= 6.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x63d70248
length= 512 megabytes (2^29 bytes), time= 13.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x63d70248
length= 1 gigabyte (2^30 bytes), time= 25.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x63d70248
length= 2 gigabytes (2^31 bytes), time= 49.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x63d70248
length= 4 gigabytes (2^32 bytes), time= 97.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x63d70248
length= 4.250 gigabytes (2^32.087 bytes), time= 104 seconds
  no anomalies in 156 test result(s)


real	1m44.502s
user	1m41.532s
sys	0m2.588s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa4519714
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa4519714
length= 128 megabytes (2^27 bytes), time= 3.0 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.4  p =1-3.5e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa4519714
length= 256 megabytes (2^28 bytes), time= 6.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa4519714
length= 512 megabytes (2^29 bytes), time= 13.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xa4519714
length= 1 gigabyte (2^30 bytes), time= 25.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xa4519714
length= 2 gigabytes (2^31 bytes), time= 49.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xa4519714
length= 4 gigabytes (2^32 bytes), time= 101 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xa4519714
length= 8 gigabytes (2^33 bytes), time= 204 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xa4519714
length= 16 gigabytes (2^34 bytes), time= 410 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xa4519714
length= 32 gigabytes (2^35 bytes), time= 816 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.6  p =1-7.6e-4   unusual          
  Gap-16:B                          R=  -6.0  p =1-5.3e-5   mildly suspicious
  [Low8/32]Gap-16:B                 R=  -5.0  p =1-3.4e-4   unusual          
  ...and 177 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa4519714
length= 64 gigabytes (2^36 bytes), time= 1642 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.6  p =1-7.8e-4   unusual          
  Gap-16:B                          R=  -4.2  p =1-1.5e-3   unusual          
  ...and 187 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa4519714
length= 128 gigabytes (2^37 bytes), time= 3280 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.7  p =1-6.2e-4   unusual          
  Gap-16:B                          R=  -5.6  p =1-1.0e-4   mildly suspicious
  [Low8/32]DC6-9x1Bytes-1           R=  +5.8  p =  7.1e-4   mildly suspicious
  [Low8/32]Gap-16:B                 R=  -8.3  p =1-5.6e-7   very suspicious  
  ...and 192 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa4519714
length= 140.750 gigabytes (2^37.137 bytes), time= 3602 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -5.5  p =1-1.6e-4   mildly suspicious
  Gap-16:B                          R=  -6.9  p =1-8.8e-6   suspicious       
  [Low8/32]DC6-9x1Bytes-1           R=  +5.0  p =  2.5e-3   unusual          
  [Low8/32]Gap-16:B                 R=  -6.9  p =1-8.2e-6   suspicious       
  ...and 192 test result(s) without anomalies


real	60m2.457s
user	58m21.484s
sys	1m31.272s
*/
