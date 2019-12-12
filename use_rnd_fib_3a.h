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
/// @created on 2019-12-08 02:58:52 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 156bd0fa-090b-4c81-9dfc-137f3b4482a9                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib3a;
/* TEST00
time ./MRndCPP 
4066514869
1812893915
3534851474
3109044887
4264217481
3757052325
18446711647343221530

real	0m31.091s
user	0m31.032s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.15e+07  |3105546162|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.76051778|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.68334076|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.35488960|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.69275070|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.76347569|  PASSED  
        diehard_opso|   0|   2097152|     100|0.07159841|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.26749665|  PASSED  
         diehard_dna|   0|   2097152|     100|0.48215064|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.34234830|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.45170222|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.21450471|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.95440750|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.52048139|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.53860663|  PASSED  
        diehard_sums|   0|       100|     100|0.02758388|  PASSED  
        diehard_runs|   0|    100000|     100|0.99289494|  PASSED  
        diehard_runs|   0|    100000|     100|0.59443741|  PASSED  
       diehard_craps|   0|    200000|     100|0.93185108|  PASSED  
       diehard_craps|   0|    200000|     100|0.00217551|   WEAK   
 marsaglia_tsang_gcd|   0|  10000000|     100|0.68660449|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.94867127|  PASSED  
         sts_monobit|   1|    100000|     100|0.35615216|  PASSED  
            sts_runs|   2|    100000|     100|0.81219856|  PASSED  
          sts_serial|   1|    100000|     100|0.23629469|  PASSED  
          sts_serial|   2|    100000|     100|0.99331113|  PASSED  
          sts_serial|   3|    100000|     100|0.91178787|  PASSED  
          sts_serial|   3|    100000|     100|0.43324517|  PASSED  
          sts_serial|   4|    100000|     100|0.69176220|  PASSED  
          sts_serial|   4|    100000|     100|0.59955237|  PASSED  
          sts_serial|   5|    100000|     100|0.33079940|  PASSED  
          sts_serial|   5|    100000|     100|0.17500024|  PASSED  
          sts_serial|   6|    100000|     100|0.92504637|  PASSED  
          sts_serial|   6|    100000|     100|0.29238148|  PASSED  
          sts_serial|   7|    100000|     100|0.70997666|  PASSED  
          sts_serial|   7|    100000|     100|0.05025179|  PASSED  
          sts_serial|   8|    100000|     100|0.52145412|  PASSED  
          sts_serial|   8|    100000|     100|0.95816274|  PASSED  
          sts_serial|   9|    100000|     100|0.78044488|  PASSED  
          sts_serial|   9|    100000|     100|0.17039332|  PASSED  
          sts_serial|  10|    100000|     100|0.85325222|  PASSED  
          sts_serial|  10|    100000|     100|0.36498379|  PASSED  
          sts_serial|  11|    100000|     100|0.53347109|  PASSED  
          sts_serial|  11|    100000|     100|0.13477087|  PASSED  
          sts_serial|  12|    100000|     100|0.88076817|  PASSED  
          sts_serial|  12|    100000|     100|0.93914897|  PASSED  
          sts_serial|  13|    100000|     100|0.48239087|  PASSED  
          sts_serial|  13|    100000|     100|0.54104414|  PASSED  
          sts_serial|  14|    100000|     100|0.38836233|  PASSED  
          sts_serial|  14|    100000|     100|0.58917988|  PASSED  
          sts_serial|  15|    100000|     100|0.85625652|  PASSED  
          sts_serial|  15|    100000|     100|0.08562143|  PASSED  
          sts_serial|  16|    100000|     100|0.45356425|  PASSED  
          sts_serial|  16|    100000|     100|0.26520807|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.93998947|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.51381407|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.67066491|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.46015288|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.92832228|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.35451078|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.61876188|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.75369637|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.69699151|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.52467348|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.88070338|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.93112790|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.20847398|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.88221783|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.25369364|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.06009095|  PASSED  
    rgb_permutations|   2|    100000|     100|0.80658788|  PASSED  
    rgb_permutations|   3|    100000|     100|0.46935887|  PASSED  
    rgb_permutations|   4|    100000|     100|0.66762181|  PASSED  
    rgb_permutations|   5|    100000|     100|0.29472901|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.37870993|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.59699971|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.99303278|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.94048617|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.99898781|   WEAK   
      rgb_lagged_sum|   5|   1000000|     100|0.05605529|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.30696471|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.57953524|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.71813172|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.09355885|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.23570889|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.86768360|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.61861796|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.01144406|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.76505423|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.97607145|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.86973165|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.76531169|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.95713935|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.98564042|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.81462993|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.66385165|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.89952579|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.35245096|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.00459874|   WEAK   
      rgb_lagged_sum|  25|   1000000|     100|0.82265874|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.74129625|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.60604618|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.24545517|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.67969490|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.64267076|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.52637254|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.82869550|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.31587839|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.60100961|  PASSED  
             dab_dct| 256|     50000|       1|0.70484839|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.85783841|  PASSED  
        dab_filltree|  32|  15000000|       1|0.22825489|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.40157604|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.80631373|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.02008352|  PASSED  

real	49m53.910s
user	46m3.888s
sys	3m41.628s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1a0825f2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1a0825f2
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x1a0825f2
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x1a0825f2
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-5,T)         R=  +8.3  p =  2.0e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1a0825f2
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x1a0825f2
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x1a0825f2
length= 4 gigabytes (2^32 bytes), time= 73.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.0  p =1-2.4e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1a0825f2
length= 5.500 gigabytes (2^32.459 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.356s
user	1m38.716s
sys	0m2.224s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb0ec5038
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb0ec5038
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BRank(12):768(1)                  R= +14.7  p~=  1.8e-5   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb0ec5038
length= 256 megabytes (2^28 bytes), time= 6.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BRank(12):768(1)                  R= +14.7  p~=  1.8e-5   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb0ec5038
length= 512 megabytes (2^29 bytes), time= 11.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BRank(12):768(1)                  R= +14.7  p~=  1.8e-5   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb0ec5038
length= 1 gigabyte (2^30 bytes), time= 23.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BRank(12):768(1)                  R= +14.7  p~=  1.8e-5   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb0ec5038
length= 2 gigabytes (2^31 bytes), time= 45.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BRank(12):768(1)                  R= +14.7  p~=  1.8e-5   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb0ec5038
length= 4 gigabytes (2^32 bytes), time= 92.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BRank(12):768(1)                  R= +14.7  p~=  1.8e-5   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb0ec5038
length= 8 gigabytes (2^33 bytes), time= 191 seconds
  Test Name                         Raw       Processed     Evaluation
  BRank(12):768(1)                  R= +14.7  p~=  1.8e-5   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb0ec5038
length= 16 gigabytes (2^34 bytes), time= 385 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xb0ec5038
length= 32 gigabytes (2^35 bytes), time= 767 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +4.9  p = 0.011     unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb0ec5038
length= 41.500 gigabytes (2^35.375 bytes), time= 1004 seconds
  no anomalies in 184 test result(s)


real	16m44.592s
user	16m26.312s
sys	0m15.756s
*/
