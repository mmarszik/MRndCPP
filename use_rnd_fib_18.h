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
/// @created on 2019-12-18 01:26:58 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 84ef2396-be15-4452-a4c7-31ba78a17d1e                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib18;
/* TEST00
time ./MRndCPP 
3657014555
578188925
641385625
538135504
1946347144
224069562
4611729381813813462

real	0m7.825s
user	0m7.800s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.13e+07  |3792392154|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.93853696|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.12045881|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.76209329|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.32967809|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.26259755|  PASSED  
        diehard_opso|   0|   2097152|     100|0.76421565|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.71484099|  PASSED  
         diehard_dna|   0|   2097152|     100|0.84694745|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.16375876|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.20682408|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.03513030|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.80819192|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.49857361|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.55560917|  PASSED  
        diehard_sums|   0|       100|     100|0.15808231|  PASSED  
        diehard_runs|   0|    100000|     100|0.99396229|  PASSED  
        diehard_runs|   0|    100000|     100|0.19999880|  PASSED  
       diehard_craps|   0|    200000|     100|0.71565636|  PASSED  
       diehard_craps|   0|    200000|     100|0.89319503|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.28711190|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.76885597|  PASSED  
         sts_monobit|   1|    100000|     100|0.37787963|  PASSED  
            sts_runs|   2|    100000|     100|0.23538928|  PASSED  
          sts_serial|   1|    100000|     100|0.30915097|  PASSED  
          sts_serial|   2|    100000|     100|0.89234532|  PASSED  
          sts_serial|   3|    100000|     100|0.44337956|  PASSED  
          sts_serial|   3|    100000|     100|0.60326638|  PASSED  
          sts_serial|   4|    100000|     100|0.39584853|  PASSED  
          sts_serial|   4|    100000|     100|0.75641551|  PASSED  
          sts_serial|   5|    100000|     100|0.51758040|  PASSED  
          sts_serial|   5|    100000|     100|0.51777344|  PASSED  
          sts_serial|   6|    100000|     100|0.80436077|  PASSED  
          sts_serial|   6|    100000|     100|0.99709561|   WEAK   
          sts_serial|   7|    100000|     100|0.86961110|  PASSED  
          sts_serial|   7|    100000|     100|0.77379246|  PASSED  
          sts_serial|   8|    100000|     100|0.74024599|  PASSED  
          sts_serial|   8|    100000|     100|0.09802199|  PASSED  
          sts_serial|   9|    100000|     100|0.89359286|  PASSED  
          sts_serial|   9|    100000|     100|0.97986530|  PASSED  
          sts_serial|  10|    100000|     100|0.06986503|  PASSED  
          sts_serial|  10|    100000|     100|0.04886889|  PASSED  
          sts_serial|  11|    100000|     100|0.13265158|  PASSED  
          sts_serial|  11|    100000|     100|0.11625355|  PASSED  
          sts_serial|  12|    100000|     100|0.38976683|  PASSED  
          sts_serial|  12|    100000|     100|0.72158313|  PASSED  
          sts_serial|  13|    100000|     100|0.21694804|  PASSED  
          sts_serial|  13|    100000|     100|0.74780790|  PASSED  
          sts_serial|  14|    100000|     100|0.07449958|  PASSED  
          sts_serial|  14|    100000|     100|0.61500388|  PASSED  
          sts_serial|  15|    100000|     100|0.22522798|  PASSED  
          sts_serial|  15|    100000|     100|0.92907613|  PASSED  
          sts_serial|  16|    100000|     100|0.40341794|  PASSED  
          sts_serial|  16|    100000|     100|0.97278691|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.45210269|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.94722912|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.69968814|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.95615566|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.44083168|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.97353509|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.64710307|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.75218860|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.55831383|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.75721148|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.71707919|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.97523095|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.93914175|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.45019454|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.00227530|   WEAK   
rgb_minimum_distance|   5|     10000|    1000|0.69230137|  PASSED  
    rgb_permutations|   2|    100000|     100|0.63440911|  PASSED  
    rgb_permutations|   3|    100000|     100|0.99461191|  PASSED  
    rgb_permutations|   4|    100000|     100|0.29019046|  PASSED  
    rgb_permutations|   5|    100000|     100|0.66822914|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.76906079|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.17863793|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.69937619|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.28940699|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.73744220|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.03521602|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.66152676|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.40125634|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.06868215|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.88906321|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.24970699|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.57903246|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.38408138|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.75903979|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.72450185|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.88221231|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.50620886|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.38496721|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.79401910|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.77477520|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.44484489|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.22143704|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.41202898|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.39586623|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.67291814|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.62774855|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.82618131|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.16507080|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.83539056|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.64323004|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.20645143|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.39499304|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.25817634|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.59969904|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.22070463|  PASSED  
             dab_dct| 256|     50000|       1|0.77045359|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.83722368|  PASSED  
        dab_filltree|  32|  15000000|       1|0.13521675|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.09476263|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.15057229|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.32562823|  PASSED  

real	49m4.488s
user	45m8.096s
sys	3m40.492s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x257e8c1d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x257e8c1d
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x257e8c1d
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x257e8c1d
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +18.3  p =  2.4e-7   very suspicious  
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x257e8c1d
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +37.8  p =  1.8e-16    FAIL !         
  ...and 140 test result(s) without anomalies


real	0m20.079s
user	0m19.540s
sys	0m0.512s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x705fc497
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x705fc497
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x705fc497
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +10.8  p =  2.1e-4   mildly suspicious
  [Low1/32]BCFN(2+1,13-5,T)         R=  +9.3  p =  7.9e-4   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x705fc497
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +23.0  p =  3.6e-9    VERY SUSPICIOUS 
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x705fc497
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +44.3  p =  2.8e-19    FAIL !!        
  ...and 140 test result(s) without anomalies


real	0m20.002s
user	0m19.476s
sys	0m0.492s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x69ca1df3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x69ca1df3
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x69ca1df3
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +11.1  p =  1.6e-4   mildly suspicious
  [Low1/32]BCFN(2+1,13-5,T)         R=  +8.2  p =  2.1e-3   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x69ca1df3
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +20.4  p =  3.7e-8   very suspicious  
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x69ca1df3
length= 1 gigabyte (2^30 bytes), time= 19.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +41.0  p =  7.6e-18    FAIL !         
  ...and 140 test result(s) without anomalies


real	0m20.401s
user	0m19.936s
sys	0m0.440s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb2e864a9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb2e864a9
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.1  p =1-4.9e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb2e864a9
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +11.5  p =  1.1e-4   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb2e864a9
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +17.8  p =  3.8e-7   very suspicious  
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb2e864a9
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +39.9  p =  2.3e-17    FAIL !         
  ...and 140 test result(s) without anomalies


real	0m20.210s
user	0m19.700s
sys	0m0.480s
*/
