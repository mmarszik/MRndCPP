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
/// @created on 2019-12-08 02:58:07 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 38931ffa-bf5e-4829-bb95-e5060ccd5ca1                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib1a;
/* TEST00
time ./MRndCPP 
4217143007
2263514851
3622271318
4017173772
731841040
1586642232
4611676349732403760

real	0m7.785s
user	0m7.756s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.17e+07  |1044523144|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.97859978|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.77509764|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.79579237|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.47408661|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.53822148|  PASSED  
        diehard_opso|   0|   2097152|     100|0.67438359|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.19382956|  PASSED  
         diehard_dna|   0|   2097152|     100|0.50334757|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.27629701|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.68901381|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.54683180|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.83172002|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.73760178|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.82634005|  PASSED  
        diehard_sums|   0|       100|     100|0.01442996|  PASSED  
        diehard_runs|   0|    100000|     100|0.52623053|  PASSED  
        diehard_runs|   0|    100000|     100|0.80169822|  PASSED  
       diehard_craps|   0|    200000|     100|0.82196045|  PASSED  
       diehard_craps|   0|    200000|     100|0.06431914|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.83359767|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.20440593|  PASSED  
         sts_monobit|   1|    100000|     100|0.95562381|  PASSED  
            sts_runs|   2|    100000|     100|0.85097116|  PASSED  
          sts_serial|   1|    100000|     100|0.96441461|  PASSED  
          sts_serial|   2|    100000|     100|0.73212879|  PASSED  
          sts_serial|   3|    100000|     100|0.81070289|  PASSED  
          sts_serial|   3|    100000|     100|0.81835528|  PASSED  
          sts_serial|   4|    100000|     100|0.56264920|  PASSED  
          sts_serial|   4|    100000|     100|0.83324479|  PASSED  
          sts_serial|   5|    100000|     100|0.41159385|  PASSED  
          sts_serial|   5|    100000|     100|0.90788533|  PASSED  
          sts_serial|   6|    100000|     100|0.03833343|  PASSED  
          sts_serial|   6|    100000|     100|0.11870123|  PASSED  
          sts_serial|   7|    100000|     100|0.85059155|  PASSED  
          sts_serial|   7|    100000|     100|0.22183393|  PASSED  
          sts_serial|   8|    100000|     100|0.16955144|  PASSED  
          sts_serial|   8|    100000|     100|0.59000508|  PASSED  
          sts_serial|   9|    100000|     100|0.59304521|  PASSED  
          sts_serial|   9|    100000|     100|0.42344727|  PASSED  
          sts_serial|  10|    100000|     100|0.13692490|  PASSED  
          sts_serial|  10|    100000|     100|0.03448878|  PASSED  
          sts_serial|  11|    100000|     100|0.96139665|  PASSED  
          sts_serial|  11|    100000|     100|0.31563252|  PASSED  
          sts_serial|  12|    100000|     100|0.71993521|  PASSED  
          sts_serial|  12|    100000|     100|0.30212081|  PASSED  
          sts_serial|  13|    100000|     100|0.34749500|  PASSED  
          sts_serial|  13|    100000|     100|0.66186805|  PASSED  
          sts_serial|  14|    100000|     100|0.12154835|  PASSED  
          sts_serial|  14|    100000|     100|0.09713415|  PASSED  
          sts_serial|  15|    100000|     100|0.02015204|  PASSED  
          sts_serial|  15|    100000|     100|0.42216176|  PASSED  
          sts_serial|  16|    100000|     100|0.36952535|  PASSED  
          sts_serial|  16|    100000|     100|0.56901590|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.29353446|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.54154726|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.41138372|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.99230858|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.71805421|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.04554294|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.58397448|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.30562729|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.97720958|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.85140196|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.71364219|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.10851760|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.83409304|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.13939460|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.45194694|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.79297661|  PASSED  
    rgb_permutations|   2|    100000|     100|0.22825798|  PASSED  
    rgb_permutations|   3|    100000|     100|0.06626818|  PASSED  
    rgb_permutations|   4|    100000|     100|0.96273913|  PASSED  
    rgb_permutations|   5|    100000|     100|0.92275182|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.99404329|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.04568329|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.58858448|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.68276868|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.50496973|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.19571857|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.18146006|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.93497819|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.24996587|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.66300893|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.77101592|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.62130774|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.67662867|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.55406420|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.10220376|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.26386889|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.41067503|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.98141228|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.34705857|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.27375747|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.83845893|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.99763160|   WEAK   
      rgb_lagged_sum|  22|   1000000|     100|0.04431643|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.13131025|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.81936873|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.24171391|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.98451447|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.53002064|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.75609776|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.98571011|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.17039929|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.43693411|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.40214108|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.88393631|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.83285970|  PASSED  
             dab_dct| 256|     50000|       1|0.74577438|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.17784895|  PASSED  
        dab_filltree|  32|  15000000|       1|0.67357381|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.01508889|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.86490813|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.76044840|  PASSED  

real	49m10.858s
user	45m32.820s
sys	3m31.880s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd0ded886
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd0ded886
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd0ded886
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd0ded886
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.2  p =  2.2e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd0ded886
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R=  +8.2  p =  1.6e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd0ded886
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +18.2  p =  2.1e-8    VERY SUSPICIOUS 
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd0ded886
length= 4 gigabytes (2^32 bytes), time= 74.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +28.7  p =  2.1e-13    FAIL           
  [Low1/32]BCFN(2+2,13-3,T)         R= +14.9  p =  7.8e-7   very suspicious  
  [Low1/32]BCFN(2+3,13-3,T)         R=  +9.7  p =  2.1e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +6.2  p =  2.2e-3   unusual          
  ...and 152 test result(s) without anomalies


real	1m15.070s
user	1m13.152s
sys	0m1.692s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x43f551f6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x43f551f6
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x43f551f6
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.3  p =  2.9e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x43f551f6
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.5  p =  1.6e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x43f551f6
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +17.1  p =  2.1e-7   very suspicious  
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x43f551f6
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +21.2  p =  7.8e-10   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+1,13-3,T)         R=  -6.4  p =1-2.1e-3   unusual          
  [Low1/32]BCFN(2+2,13-4,T)         R= +12.2  p =  2.7e-5   mildly suspicious
  [Low1/32]DC6-9x1Bytes-1           R=  +5.3  p =  9.8e-3   unusual          
  ...and 144 test result(s) without anomalies

rng=RNG_stdin32, seed=0x43f551f6
length= 4 gigabytes (2^32 bytes), time= 71.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +36.4  p =  4.8e-17    FAIL !         
  [Low1/32]BCFN(2+2,13-3,T)         R= +14.7  p =  9.2e-7   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R=  +6.2  p =  2.1e-3   unusual          
  ...and 153 test result(s) without anomalies


real	1m12.681s
user	1m10.952s
sys	0m1.544s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x94e0b5c3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x94e0b5c3
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.3  p =  9.8e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x94e0b5c3
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x94e0b5c3
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x94e0b5c3
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +12.7  p =  1.6e-5   suspicious       
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x94e0b5c3
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +15.0  p =  7.0e-7   very suspicious  
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x94e0b5c3
length= 4 gigabytes (2^32 bytes), time= 73.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +30.0  p =  5.5e-14    FAIL           
  [Low1/32]BCFN(2+2,13-3,T)         R=  +7.9  p =  1.7e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +6.2  p =  2.2e-3   unusual          
  ...and 153 test result(s) without anomalies


real	1m14.229s
user	1m12.360s
sys	0m1.664s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xcaa7bfb5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xcaa7bfb5
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xcaa7bfb5
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xcaa7bfb5
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -3.4  p =1-2.5e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xcaa7bfb5
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-5,T)         R= +11.0  p =  1.7e-4   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xcaa7bfb5
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +11.1  p =  4.7e-5   mildly suspicious
  [Low1/32]BCFN(2+2,13-4,T)         R= +13.0  p =  1.2e-5   suspicious       
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0xcaa7bfb5
length= 4 gigabytes (2^32 bytes), time= 72.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +30.3  p =  4.0e-14    FAIL           
  [Low1/32]BCFN(2+2,13-3,T)         R= +20.1  p =  2.5e-9    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+3,13-3,T)         R=  +8.8  p =  6.0e-4   unusual          
  ...and 153 test result(s) without anomalies


real	1m12.701s
user	1m10.956s
sys	0m1.584s
*/
