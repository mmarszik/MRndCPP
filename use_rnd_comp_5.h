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
/// @created on 2019-12-08 02:56:45 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 20611663-ea55-4b72-863b-3cc66e970785                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib2, RndFib3, 9 >;
/* TEST00
time ./MRndCPP 
1623909407
3839886961
2841323221
3500042686
1429884035
682825171
4611826011427880102

real	0m10.028s
user	0m10.000s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.00e+07  | 141873385|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.96092826|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.99748373|   WEAK   
  diehard_rank_32x32|   0|     40000|     100|0.15118946|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.57937422|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.66005987|  PASSED  
        diehard_opso|   0|   2097152|     100|0.98627743|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.53137774|  PASSED  
         diehard_dna|   0|   2097152|     100|0.83143564|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.47535231|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.81105494|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.37143226|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.42481254|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.77153064|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.43550375|  PASSED  
        diehard_sums|   0|       100|     100|0.08141981|  PASSED  
        diehard_runs|   0|    100000|     100|0.73277523|  PASSED  
        diehard_runs|   0|    100000|     100|0.92124166|  PASSED  
       diehard_craps|   0|    200000|     100|0.77964170|  PASSED  
       diehard_craps|   0|    200000|     100|0.28772148|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.44827441|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.19272998|  PASSED  
         sts_monobit|   1|    100000|     100|0.93910064|  PASSED  
            sts_runs|   2|    100000|     100|0.49243501|  PASSED  
          sts_serial|   1|    100000|     100|0.52704357|  PASSED  
          sts_serial|   2|    100000|     100|0.36805096|  PASSED  
          sts_serial|   3|    100000|     100|0.21248081|  PASSED  
          sts_serial|   3|    100000|     100|0.03331016|  PASSED  
          sts_serial|   4|    100000|     100|0.02095120|  PASSED  
          sts_serial|   4|    100000|     100|0.48144841|  PASSED  
          sts_serial|   5|    100000|     100|0.99170965|  PASSED  
          sts_serial|   5|    100000|     100|0.41337244|  PASSED  
          sts_serial|   6|    100000|     100|0.94984817|  PASSED  
          sts_serial|   6|    100000|     100|0.95567937|  PASSED  
          sts_serial|   7|    100000|     100|0.96063369|  PASSED  
          sts_serial|   7|    100000|     100|0.85515763|  PASSED  
          sts_serial|   8|    100000|     100|0.14542276|  PASSED  
          sts_serial|   8|    100000|     100|0.03595060|  PASSED  
          sts_serial|   9|    100000|     100|0.30420000|  PASSED  
          sts_serial|   9|    100000|     100|0.36979013|  PASSED  
          sts_serial|  10|    100000|     100|0.28068865|  PASSED  
          sts_serial|  10|    100000|     100|0.55259063|  PASSED  
          sts_serial|  11|    100000|     100|0.85504938|  PASSED  
          sts_serial|  11|    100000|     100|0.28388388|  PASSED  
          sts_serial|  12|    100000|     100|0.20488430|  PASSED  
          sts_serial|  12|    100000|     100|0.01481659|  PASSED  
          sts_serial|  13|    100000|     100|0.95280583|  PASSED  
          sts_serial|  13|    100000|     100|0.30603257|  PASSED  
          sts_serial|  14|    100000|     100|0.26015238|  PASSED  
          sts_serial|  14|    100000|     100|0.31381035|  PASSED  
          sts_serial|  15|    100000|     100|0.25704351|  PASSED  
          sts_serial|  15|    100000|     100|0.41351785|  PASSED  
          sts_serial|  16|    100000|     100|0.59449747|  PASSED  
          sts_serial|  16|    100000|     100|0.25591212|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.86767744|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.97623130|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.61657701|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.18623511|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.65140630|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.74972293|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.36571631|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.15857662|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.26103005|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.93693337|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.34200068|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.66708935|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.28348954|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.76105909|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.69899866|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.00942248|  PASSED  
    rgb_permutations|   2|    100000|     100|0.36944957|  PASSED  
    rgb_permutations|   3|    100000|     100|0.98706017|  PASSED  
    rgb_permutations|   4|    100000|     100|0.55755626|  PASSED  
    rgb_permutations|   5|    100000|     100|0.56277593|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.97640845|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.00938721|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.88727821|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.40952944|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.60323827|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.95326710|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.71593440|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.88657656|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.74158026|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.09189876|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.77443782|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.48211523|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.10254359|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.14497179|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.10176900|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.59697778|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.07802774|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.33087068|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.17666266|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.57857600|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.73572394|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.96821607|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.50988498|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.08334748|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.33136356|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.55795048|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.95703895|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.24969611|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.95744822|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.73712695|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.49777618|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.99536003|   WEAK   
      rgb_lagged_sum|  32|   1000000|     100|0.20065434|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.58737303|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.07335703|  PASSED  
             dab_dct| 256|     50000|       1|0.30007366|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.90268989|  PASSED  
        dab_filltree|  32|  15000000|       1|0.62623489|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.10150188|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.29923148|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.59228150|  PASSED  

real	53m23.378s
user	49m41.248s
sys	3m35.428s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf43588f8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf43588f8
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-6,T)         R=  -5.3  p =1-3.1e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf43588f8
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -3.7  p =1-1.8e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf43588f8
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.6  p =  2.9e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf43588f8
length= 1 gigabyte (2^30 bytes), time= 20.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf43588f8
length= 2 gigabytes (2^31 bytes), time= 38.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf43588f8
length= 4 gigabytes (2^32 bytes), time= 74.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xf43588f8
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.979s
user	1m40.628s
sys	0m3.100s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2e37b829
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2e37b829
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2e37b829
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2e37b829
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2e37b829
length= 1 gigabyte (2^30 bytes), time= 20.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2e37b829
length= 2 gigabytes (2^31 bytes), time= 38.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2e37b829
length= 4 gigabytes (2^32 bytes), time= 77.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2e37b829
length= 5.250 gigabytes (2^32.392 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +4.6  p =  3.0e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m44.892s
user	1m41.824s
sys	0m2.780s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa771d1d4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa771d1d4
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.3  p =1-4.9e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa771d1d4
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa771d1d4
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -3.8  p =1-1.1e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa771d1d4
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-2,T)         R=  -9.0  p =1-4.2e-5   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa771d1d4
length= 2 gigabytes (2^31 bytes), time= 41.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xa771d1d4
length= 4 gigabytes (2^32 bytes), time= 79.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  +8.5  p =  4.2e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa771d1d4
length= 5.250 gigabytes (2^32.392 bytes), time= 107 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  +7.4  p =  1.7e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m47.236s
user	1m44.156s
sys	0m2.868s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdaf32f94
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdaf32f94
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xdaf32f94
length= 256 megabytes (2^28 bytes), time= 6.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xdaf32f94
length= 512 megabytes (2^29 bytes), time= 12.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xdaf32f94
length= 1 gigabyte (2^30 bytes), time= 24.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xdaf32f94
length= 2 gigabytes (2^31 bytes), time= 47.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xdaf32f94
length= 4 gigabytes (2^32 bytes), time= 92.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xdaf32f94
length= 8 gigabytes (2^33 bytes), time= 191 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xdaf32f94
length= 16 gigabytes (2^34 bytes), time= 397 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xdaf32f94
length= 32 gigabytes (2^35 bytes), time= 804 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xdaf32f94
length= 64 gigabytes (2^36 bytes), time= 1631 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.3  p =1-4.8e-3   unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdaf32f94
length= 128 gigabytes (2^37 bytes), time= 3271 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -5.1  p =1-1.7e-3   unusual          
  ...and 195 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdaf32f94
length= 141.250 gigabytes (2^37.142 bytes), time= 3604 seconds
  no anomalies in 196 test result(s)


real	60m5.207s
user	58m37.444s
sys	1m18.768s
*/
/* TEST00
time ./MRndCPP 
1183199767
256966740
2894175097
3231914199
2018027639
3028929113
18446658179799036283

real	1m33.915s
user	1m33.804s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.93e+07  |3726528478|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.04553651|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.82263836|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.51868406|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.97916052|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.19341962|  PASSED  
        diehard_opso|   0|   2097152|     100|0.27359497|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.09628512|  PASSED  
         diehard_dna|   0|   2097152|     100|0.32732032|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.92435206|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.43106460|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.50364626|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.63479532|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.00893611|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.37470715|  PASSED  
        diehard_sums|   0|       100|     100|0.01841822|  PASSED  
        diehard_runs|   0|    100000|     100|0.76077332|  PASSED  
        diehard_runs|   0|    100000|     100|0.65001496|  PASSED  
       diehard_craps|   0|    200000|     100|0.24008400|  PASSED  
       diehard_craps|   0|    200000|     100|0.19415245|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.19896069|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.98351468|  PASSED  
         sts_monobit|   1|    100000|     100|0.27402034|  PASSED  
            sts_runs|   2|    100000|     100|0.71084726|  PASSED  
          sts_serial|   1|    100000|     100|0.76320206|  PASSED  
          sts_serial|   2|    100000|     100|0.45685690|  PASSED  
          sts_serial|   3|    100000|     100|0.35279490|  PASSED  
          sts_serial|   3|    100000|     100|0.35209359|  PASSED  
          sts_serial|   4|    100000|     100|0.63991575|  PASSED  
          sts_serial|   4|    100000|     100|0.31220064|  PASSED  
          sts_serial|   5|    100000|     100|0.45954709|  PASSED  
          sts_serial|   5|    100000|     100|0.17400660|  PASSED  
          sts_serial|   6|    100000|     100|0.86474805|  PASSED  
          sts_serial|   6|    100000|     100|0.65437493|  PASSED  
          sts_serial|   7|    100000|     100|0.29078871|  PASSED  
          sts_serial|   7|    100000|     100|0.65395529|  PASSED  
          sts_serial|   8|    100000|     100|0.49424569|  PASSED  
          sts_serial|   8|    100000|     100|0.94874751|  PASSED  
          sts_serial|   9|    100000|     100|0.42743158|  PASSED  
          sts_serial|   9|    100000|     100|0.14683041|  PASSED  
          sts_serial|  10|    100000|     100|0.93186942|  PASSED  
          sts_serial|  10|    100000|     100|0.66206847|  PASSED  
          sts_serial|  11|    100000|     100|0.29499896|  PASSED  
          sts_serial|  11|    100000|     100|0.91886014|  PASSED  
          sts_serial|  12|    100000|     100|0.97093010|  PASSED  
          sts_serial|  12|    100000|     100|0.70116827|  PASSED  
          sts_serial|  13|    100000|     100|0.69656897|  PASSED  
          sts_serial|  13|    100000|     100|0.56184499|  PASSED  
          sts_serial|  14|    100000|     100|0.83071963|  PASSED  
          sts_serial|  14|    100000|     100|0.93453033|  PASSED  
          sts_serial|  15|    100000|     100|0.04780438|  PASSED  
          sts_serial|  15|    100000|     100|0.02282059|  PASSED  
          sts_serial|  16|    100000|     100|0.11204908|  PASSED  
          sts_serial|  16|    100000|     100|0.90687889|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.61821193|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.60392771|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.08271780|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.63394341|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.83862092|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.97685921|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.19405384|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.86376851|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.37095684|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.98050646|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.97411367|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.98544042|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.95387817|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.47609998|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.54757298|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.19946657|  PASSED  
    rgb_permutations|   2|    100000|     100|0.33183581|  PASSED  
    rgb_permutations|   3|    100000|     100|0.53279139|  PASSED  
    rgb_permutations|   4|    100000|     100|0.32830042|  PASSED  
    rgb_permutations|   5|    100000|     100|0.22305840|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.62356654|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.66486730|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.38144252|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.26398823|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.30599455|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.69069222|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.63627333|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.54548068|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.40767556|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.78779247|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.45422849|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.74298942|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.53887058|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.90216908|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.93184228|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.44465683|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.73755250|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.99571932|   WEAK   
      rgb_lagged_sum|  18|   1000000|     100|0.45223769|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.50410668|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.90724465|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.10327467|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.89118865|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.42614557|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.37284358|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.07367706|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.47560367|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.97310862|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.21554678|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.63675056|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.31297292|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.26649686|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.86268592|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.64867213|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.58088975|  PASSED  
             dab_dct| 256|     50000|       1|0.11997903|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.72395426|  PASSED  
        dab_filltree|  32|  15000000|       1|0.29272661|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.63245472|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.60853953|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.58237666|  PASSED  

real	56m15.839s
user	52m35.660s
sys	3m36.776s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdc5ee551
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdc5ee551
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xdc5ee551
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  -5.8  p =1-2.5e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdc5ee551
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xdc5ee551
length= 1 gigabyte (2^30 bytes), time= 20.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xdc5ee551
length= 2 gigabytes (2^31 bytes), time= 39.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xdc5ee551
length= 4 gigabytes (2^32 bytes), time= 77.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xdc5ee551
length= 5.250 gigabytes (2^32.392 bytes), time= 105 seconds
  no anomalies in 160 test result(s)


real	1m45.353s
user	1m41.996s
sys	0m3.248s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa6cbea13
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa6cbea13
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xa6cbea13
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa6cbea13
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xa6cbea13
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xa6cbea13
length= 2 gigabytes (2^31 bytes), time= 39.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xa6cbea13
length= 4 gigabytes (2^32 bytes), time= 76.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xa6cbea13
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.990s
user	1m39.752s
sys	0m3.112s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x65672ff1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x65672ff1
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x65672ff1
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x65672ff1
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R=  +8.4  p =  8.7e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x65672ff1
length= 1 gigabyte (2^30 bytes), time= 20.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R=  +9.5  p =  2.8e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x65672ff1
length= 2 gigabytes (2^31 bytes), time= 39.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x65672ff1
length= 4 gigabytes (2^32 bytes), time= 78.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x65672ff1
length= 5.250 gigabytes (2^32.392 bytes), time= 105 seconds
  no anomalies in 160 test result(s)


real	1m45.973s
user	1m42.628s
sys	0m3.228s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xed148cc6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xed148cc6
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xed148cc6
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xed148cc6
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xed148cc6
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xed148cc6
length= 2 gigabytes (2^31 bytes), time= 40.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xed148cc6
length= 4 gigabytes (2^32 bytes), time= 78.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xed148cc6
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xed148cc6
length= 16 gigabytes (2^34 bytes), time= 323 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xed148cc6
length= 32 gigabytes (2^35 bytes), time= 644 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.0  p =  2.4e-3   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0xed148cc6
length= 64 gigabytes (2^36 bytes), time= 1300 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xed148cc6
length= 128 gigabytes (2^37 bytes), time= 2597 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xed148cc6
length= 178.000 gigabytes (2^37.476 bytes), time= 3604 seconds
  no anomalies in 201 test result(s)


real	60m5.255s
user	58m20.336s
sys	1m41.048s
*/
