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
/// @created on 2019-12-18 01:27:56 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 34ad2af5-13d2-41ad-91c6-3a57fb71c743                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib6;
/* TEST00
time ./MRndCPP 
2698529174
3491689096
369112880
1154449786
3591933117
2220612881
4611780521136466481

real	0m7.815s
user	0m7.800s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.12e+07  |4197049073|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.99736453|   WEAK   
      diehard_operm5|   0|   1000000|     100|0.78492241|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.17201460|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.56844034|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.58235001|  PASSED  
        diehard_opso|   0|   2097152|     100|0.97697049|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.57247557|  PASSED  
         diehard_dna|   0|   2097152|     100|0.60030842|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.92124898|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.59156671|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.37180234|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.70159492|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.75590032|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.95524960|  PASSED  
        diehard_sums|   0|       100|     100|0.49450721|  PASSED  
        diehard_runs|   0|    100000|     100|0.69016595|  PASSED  
        diehard_runs|   0|    100000|     100|0.63607539|  PASSED  
       diehard_craps|   0|    200000|     100|0.55585713|  PASSED  
       diehard_craps|   0|    200000|     100|0.70516695|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.33359777|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.49533280|  PASSED  
         sts_monobit|   1|    100000|     100|0.55708176|  PASSED  
            sts_runs|   2|    100000|     100|0.94844622|  PASSED  
          sts_serial|   1|    100000|     100|0.57892427|  PASSED  
          sts_serial|   2|    100000|     100|0.77902068|  PASSED  
          sts_serial|   3|    100000|     100|0.24288186|  PASSED  
          sts_serial|   3|    100000|     100|0.15258567|  PASSED  
          sts_serial|   4|    100000|     100|0.61057756|  PASSED  
          sts_serial|   4|    100000|     100|0.28452397|  PASSED  
          sts_serial|   5|    100000|     100|0.31391645|  PASSED  
          sts_serial|   5|    100000|     100|0.54636861|  PASSED  
          sts_serial|   6|    100000|     100|0.09509568|  PASSED  
          sts_serial|   6|    100000|     100|0.02107623|  PASSED  
          sts_serial|   7|    100000|     100|0.82396050|  PASSED  
          sts_serial|   7|    100000|     100|0.05895778|  PASSED  
          sts_serial|   8|    100000|     100|0.79814773|  PASSED  
          sts_serial|   8|    100000|     100|0.82573871|  PASSED  
          sts_serial|   9|    100000|     100|0.88925552|  PASSED  
          sts_serial|   9|    100000|     100|0.83578574|  PASSED  
          sts_serial|  10|    100000|     100|0.90495970|  PASSED  
          sts_serial|  10|    100000|     100|0.90736558|  PASSED  
          sts_serial|  11|    100000|     100|0.70264691|  PASSED  
          sts_serial|  11|    100000|     100|0.36525174|  PASSED  
          sts_serial|  12|    100000|     100|0.36983272|  PASSED  
          sts_serial|  12|    100000|     100|0.53573276|  PASSED  
          sts_serial|  13|    100000|     100|0.09897238|  PASSED  
          sts_serial|  13|    100000|     100|0.60229248|  PASSED  
          sts_serial|  14|    100000|     100|0.10272373|  PASSED  
          sts_serial|  14|    100000|     100|0.95364639|  PASSED  
          sts_serial|  15|    100000|     100|0.03591263|  PASSED  
          sts_serial|  15|    100000|     100|0.49027207|  PASSED  
          sts_serial|  16|    100000|     100|0.43212760|  PASSED  
          sts_serial|  16|    100000|     100|0.35049321|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.48032861|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.31367358|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.91194249|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.78052065|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.07371207|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.13479444|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.79405252|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.11884759|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.35288673|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.67008330|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.23106791|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.99179529|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.98900457|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.02163902|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.05694558|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.12607375|  PASSED  
    rgb_permutations|   2|    100000|     100|0.88368532|  PASSED  
    rgb_permutations|   3|    100000|     100|0.84776831|  PASSED  
    rgb_permutations|   4|    100000|     100|0.60647514|  PASSED  
    rgb_permutations|   5|    100000|     100|0.77610118|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.81969927|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.99262932|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.61807300|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.44421676|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.04658621|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.87480671|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.98389252|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.03229274|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.59025957|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.93993425|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.38574448|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.24309503|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.28776654|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.93010734|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.86576768|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.32738931|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.61109113|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.66491317|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.97715963|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.74599333|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.52553008|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.03503960|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.09036202|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.05273809|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.47571646|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.49979545|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.99916049|   WEAK   
      rgb_lagged_sum|  27|   1000000|     100|0.90392203|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.06584141|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.84171742|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.13924517|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.57386752|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.70935671|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.98557341|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.86821125|  PASSED  
             dab_dct| 256|     50000|       1|0.45795524|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.40249451|  PASSED  
        dab_filltree|  32|  15000000|       1|0.63736049|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.63984912|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.14347528|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.95059048|  PASSED  

real	54m50.814s
user	51m5.288s
sys	3m39.276s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x376ee561
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x376ee561
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x376ee561
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x376ee561
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.6  p =  1.6e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x376ee561
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +20.8  p =  5.2e-9    VERY SUSPICIOUS 
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x376ee561
length= 2 gigabytes (2^31 bytes), time= 37.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +35.5  p =  1.3e-16    FAIL !         
  ...and 147 test result(s) without anomalies


real	0m38.452s
user	0m37.368s
sys	0m0.992s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x63f4e160
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x63f4e160
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x63f4e160
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x63f4e160
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +14.9  p =  5.0e-6   suspicious       
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x63f4e160
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +23.7  p =  2.6e-10   VERY SUSPICIOUS 
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x63f4e160
length= 2 gigabytes (2^31 bytes), time= 37.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +47.7  p =  2.2e-22    FAIL !!        
  ...and 147 test result(s) without anomalies


real	0m38.608s
user	0m37.592s
sys	0m0.880s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4a532365
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4a532365
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4a532365
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4a532365
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +18.4  p =  2.2e-7   very suspicious  
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4a532365
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +24.1  p =  1.7e-10   VERY SUSPICIOUS 
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4a532365
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +42.9  p =  4.2e-20    FAIL !!        
  ...and 147 test result(s) without anomalies


real	0m38.012s
user	0m37.004s
sys	0m0.880s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x431ab6f1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x431ab6f1
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.4  p =1-1.1e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x431ab6f1
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x431ab6f1
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +13.8  p =  1.3e-5   suspicious       
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x431ab6f1
length= 1 gigabyte (2^30 bytes), time= 21.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +26.8  p =  1.2e-11    FAIL           
  ...and 140 test result(s) without anomalies


real	0m21.763s
user	0m21.204s
sys	0m0.508s
*/
