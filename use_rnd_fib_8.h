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
/// @created on 2019-12-18 01:28:13 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token c46418c3-89f6-4e5c-bd9f-8b3315193078                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib8;
/* TEST00
time ./MRndCPP 
4084984177
3373406024
1261227820
4285154031
3995438120
3452088970
4611792884284303666

real	0m7.743s
user	0m7.720s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.13e+07  | 958019942|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.61099964|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.97128170|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.74465016|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.18466020|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.12272994|  PASSED  
        diehard_opso|   0|   2097152|     100|0.94343297|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.53152531|  PASSED  
         diehard_dna|   0|   2097152|     100|0.21736705|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.43071844|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.86576296|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.40756286|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.55776990|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.14615040|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.92551790|  PASSED  
        diehard_sums|   0|       100|     100|0.00324795|   WEAK   
        diehard_runs|   0|    100000|     100|0.70828286|  PASSED  
        diehard_runs|   0|    100000|     100|0.55782629|  PASSED  
       diehard_craps|   0|    200000|     100|0.72885933|  PASSED  
       diehard_craps|   0|    200000|     100|0.46393956|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.48801893|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.98648922|  PASSED  
         sts_monobit|   1|    100000|     100|0.93320457|  PASSED  
            sts_runs|   2|    100000|     100|0.25647552|  PASSED  
          sts_serial|   1|    100000|     100|0.97304655|  PASSED  
          sts_serial|   2|    100000|     100|0.86079763|  PASSED  
          sts_serial|   3|    100000|     100|0.85846135|  PASSED  
          sts_serial|   3|    100000|     100|0.73855493|  PASSED  
          sts_serial|   4|    100000|     100|0.69162981|  PASSED  
          sts_serial|   4|    100000|     100|0.58862677|  PASSED  
          sts_serial|   5|    100000|     100|0.51971623|  PASSED  
          sts_serial|   5|    100000|     100|0.09389592|  PASSED  
          sts_serial|   6|    100000|     100|0.16493437|  PASSED  
          sts_serial|   6|    100000|     100|0.88541411|  PASSED  
          sts_serial|   7|    100000|     100|0.68160716|  PASSED  
          sts_serial|   7|    100000|     100|0.97969544|  PASSED  
          sts_serial|   8|    100000|     100|0.37351982|  PASSED  
          sts_serial|   8|    100000|     100|0.95843794|  PASSED  
          sts_serial|   9|    100000|     100|0.23228060|  PASSED  
          sts_serial|   9|    100000|     100|0.34020624|  PASSED  
          sts_serial|  10|    100000|     100|0.42642090|  PASSED  
          sts_serial|  10|    100000|     100|0.39645067|  PASSED  
          sts_serial|  11|    100000|     100|0.80121298|  PASSED  
          sts_serial|  11|    100000|     100|0.58348743|  PASSED  
          sts_serial|  12|    100000|     100|0.66395096|  PASSED  
          sts_serial|  12|    100000|     100|0.24025177|  PASSED  
          sts_serial|  13|    100000|     100|0.41633621|  PASSED  
          sts_serial|  13|    100000|     100|0.09863148|  PASSED  
          sts_serial|  14|    100000|     100|0.90085412|  PASSED  
          sts_serial|  14|    100000|     100|0.56199075|  PASSED  
          sts_serial|  15|    100000|     100|0.70430101|  PASSED  
          sts_serial|  15|    100000|     100|0.64007339|  PASSED  
          sts_serial|  16|    100000|     100|0.15710384|  PASSED  
          sts_serial|  16|    100000|     100|0.97566653|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.39489690|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.25055647|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.71605134|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.94362254|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.45675016|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.26601294|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.28820278|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.78107690|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.54652968|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.31098441|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.78822381|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.97963828|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.98486690|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.95308865|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.63468981|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.32123334|  PASSED  
    rgb_permutations|   2|    100000|     100|0.11915535|  PASSED  
    rgb_permutations|   3|    100000|     100|0.48307815|  PASSED  
    rgb_permutations|   4|    100000|     100|0.26542823|  PASSED  
    rgb_permutations|   5|    100000|     100|0.41016675|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.90125197|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.32806672|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.55945838|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.02838785|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.92446538|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.94854847|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.09192208|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.57995691|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.44567330|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.84410148|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.99826415|   WEAK   
      rgb_lagged_sum|  11|   1000000|     100|0.51585129|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.49155673|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.84512787|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.72433752|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.81255160|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.09744213|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.29336126|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.14835857|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.85604775|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.74135413|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.97206420|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.82249981|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.64703870|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.72944399|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.01154690|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.81576524|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.80668824|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.92004970|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.22856221|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.75639951|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.55866789|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.18949660|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.68317883|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.50766083|  PASSED  
             dab_dct| 256|     50000|       1|0.06728641|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.01042844|  PASSED  
        dab_filltree|  32|  15000000|       1|0.16641912|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.51565778|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.81253686|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.01105120|  PASSED  

real	53m58.318s
user	50m3.812s
sys	3m48.484s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc806db68
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc806db68
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc806db68
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc806db68
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  +8.1  p =  8.4e-4   unusual          
  [Low8/32]DC6-9x1Bytes-1           R=  +5.0  p = 0.012     unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc806db68
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+4,13-3,T)         R=  +9.8  p =  1.9e-4   unusual          
  [Low8/32]DC6-9x1Bytes-1           R=  +5.7  p =  5.3e-3   unusual          
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc806db68
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-2,T)         R= +11.7  p =  1.3e-5   mildly suspicious
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc806db68
length= 4 gigabytes (2^32 bytes), time= 72.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-1,T)         R= +13.1  p =  1.7e-6   suspicious       
  [Low8/32]BCFN(2+4,13-2,T)         R=  +9.0  p =  3.4e-4   unusual          
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc806db68
length= 5.500 gigabytes (2^32.459 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-1,T)         R= +17.5  p =  7.0e-9    VERY SUSPICIOUS 
  ...and 159 test result(s) without anomalies


real	1m40.841s
user	1m38.352s
sys	0m2.340s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa49ee784
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa49ee784
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xa49ee784
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa49ee784
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xa49ee784
length= 1 gigabyte (2^30 bytes), time= 19.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xa49ee784
length= 2 gigabytes (2^31 bytes), time= 37.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xa49ee784
length= 4 gigabytes (2^32 bytes), time= 76.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xa49ee784
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-1,T)         R= +11.9  p =  7.3e-6   suspicious       
  [Low1/32]BCFN(2+0,13-2,T)         R=  +7.9  p =  1.3e-3   unusual          
  ...and 158 test result(s) without anomalies


real	1m43.525s
user	1m41.192s
sys	0m2.012s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2e397f8c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2e397f8c
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2e397f8c
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2e397f8c
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2e397f8c
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2e397f8c
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-2,T)         R=  +8.4  p =  6.9e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2e397f8c
length= 4 gigabytes (2^32 bytes), time= 72.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-1,T)         R=  +9.7  p =  1.1e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2e397f8c
length= 5.500 gigabytes (2^32.459 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-1,T)         R= +15.2  p =  1.2e-7   very suspicious  
  ...and 159 test result(s) without anomalies


real	1m42.517s
user	1m40.168s
sys	0m2.112s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x107ac66f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x107ac66f
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x107ac66f
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x107ac66f
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x107ac66f
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x107ac66f
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-2,T)         R= +11.0  p =  3.1e-5   mildly suspicious
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x107ac66f
length= 4 gigabytes (2^32 bytes), time= 72.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-1,T)         R= +14.6  p =  2.6e-7   very suspicious  
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x107ac66f
length= 8 gigabytes (2^33 bytes), time= 145 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-1,T)         R=  +7.8  p =  1.3e-3   unusual          
  [Low8/32]BCFN(2+3,13-1,T)         R= +28.4  p =  9.1e-15    FAIL           
  ...and 163 test result(s) without anomalies


real	2m26.232s
user	2m22.944s
sys	0m2.972s
*/
