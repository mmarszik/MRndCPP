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
/// @created on 2019-12-08 02:58:42 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token c07c75d9-db05-492c-84fb-b06ccecfbe9b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib3;
/* TEST00
time ./MRndCPP 
3237930143
924043937
3976843214
62872134
3455282647
3156509901
4611689610960379978

real	0m6.503s
user	0m6.492s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.24e+07  |3729307474|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.42101127|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.77912474|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.27611652|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.79299992|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.74598222|  PASSED  
        diehard_opso|   0|   2097152|     100|0.74253574|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.81556084|  PASSED  
         diehard_dna|   0|   2097152|     100|0.31111874|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.85787964|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.96726721|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.84439484|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.95887514|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.22507211|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.45420596|  PASSED  
        diehard_sums|   0|       100|     100|0.02045476|  PASSED  
        diehard_runs|   0|    100000|     100|0.06229216|  PASSED  
        diehard_runs|   0|    100000|     100|0.57080870|  PASSED  
       diehard_craps|   0|    200000|     100|0.99435821|  PASSED  
       diehard_craps|   0|    200000|     100|0.69333592|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.81816028|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.34157501|  PASSED  
         sts_monobit|   1|    100000|     100|0.90498920|  PASSED  
            sts_runs|   2|    100000|     100|0.06394723|  PASSED  
          sts_serial|   1|    100000|     100|0.16144596|  PASSED  
          sts_serial|   2|    100000|     100|0.44116007|  PASSED  
          sts_serial|   3|    100000|     100|0.98602483|  PASSED  
          sts_serial|   3|    100000|     100|0.57155789|  PASSED  
          sts_serial|   4|    100000|     100|0.99017503|  PASSED  
          sts_serial|   4|    100000|     100|0.82366065|  PASSED  
          sts_serial|   5|    100000|     100|0.71309012|  PASSED  
          sts_serial|   5|    100000|     100|0.67398465|  PASSED  
          sts_serial|   6|    100000|     100|0.21516100|  PASSED  
          sts_serial|   6|    100000|     100|0.98242000|  PASSED  
          sts_serial|   7|    100000|     100|0.97674737|  PASSED  
          sts_serial|   7|    100000|     100|0.70963859|  PASSED  
          sts_serial|   8|    100000|     100|0.89847636|  PASSED  
          sts_serial|   8|    100000|     100|0.44072530|  PASSED  
          sts_serial|   9|    100000|     100|0.94811386|  PASSED  
          sts_serial|   9|    100000|     100|0.39822103|  PASSED  
          sts_serial|  10|    100000|     100|0.18028875|  PASSED  
          sts_serial|  10|    100000|     100|0.51438717|  PASSED  
          sts_serial|  11|    100000|     100|0.49729757|  PASSED  
          sts_serial|  11|    100000|     100|0.20983166|  PASSED  
          sts_serial|  12|    100000|     100|0.39537460|  PASSED  
          sts_serial|  12|    100000|     100|0.99190557|  PASSED  
          sts_serial|  13|    100000|     100|0.46323057|  PASSED  
          sts_serial|  13|    100000|     100|0.57900687|  PASSED  
          sts_serial|  14|    100000|     100|0.74779117|  PASSED  
          sts_serial|  14|    100000|     100|0.63045874|  PASSED  
          sts_serial|  15|    100000|     100|0.94988292|  PASSED  
          sts_serial|  15|    100000|     100|0.99116915|  PASSED  
          sts_serial|  16|    100000|     100|0.26358515|  PASSED  
          sts_serial|  16|    100000|     100|0.12195629|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.91797647|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.88880325|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.67768493|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.30164353|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.47371110|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.28172785|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.94500747|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.41091430|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.96146165|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.82018850|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.33970153|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.74305331|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.98304371|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.01593865|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.25796623|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.10287211|  PASSED  
    rgb_permutations|   2|    100000|     100|0.58549872|  PASSED  
    rgb_permutations|   3|    100000|     100|0.17420933|  PASSED  
    rgb_permutations|   4|    100000|     100|0.98607855|  PASSED  
    rgb_permutations|   5|    100000|     100|0.55799600|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.89539514|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.38623075|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.16047448|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.45255834|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.13331369|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.33530290|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.14404365|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.99270312|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.48972704|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.52558454|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.32337726|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.98190171|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.55630113|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.33879443|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.97646647|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.96324494|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.82908879|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.98948912|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.98360468|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.16354550|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.24524787|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.54379671|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.74332281|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.94684709|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.12311046|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.81728575|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.47088836|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.48573471|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.98841357|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.27390586|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.63980167|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.53957984|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.82143445|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.72786372|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.73557483|  PASSED  
             dab_dct| 256|     50000|       1|0.98215832|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.26886306|  PASSED  
        dab_filltree|  32|  15000000|       1|0.06819430|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.36672226|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.46672096|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.34765190|  PASSED  

real	50m34.447s
user	46m37.348s
sys	3m40.944s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xfc25e61b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xfc25e61b
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xfc25e61b
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xfc25e61b
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xfc25e61b
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xfc25e61b
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xfc25e61b
length= 4 gigabytes (2^32 bytes), time= 72.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xfc25e61b
length= 5.500 gigabytes (2^32.459 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.314s
user	1m39.888s
sys	0m2.260s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2ae16984
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2ae16984
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2ae16984
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2ae16984
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2ae16984
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2ae16984
length= 2 gigabytes (2^31 bytes), time= 36.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2ae16984
length= 4 gigabytes (2^32 bytes), time= 70.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2ae16984
length= 5.750 gigabytes (2^32.524 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.952s
user	1m40.560s
sys	0m2.184s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xfb7a8d75
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xfb7a8d75
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xfb7a8d75
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xfb7a8d75
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xfb7a8d75
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xfb7a8d75
length= 2 gigabytes (2^31 bytes), time= 36.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xfb7a8d75
length= 4 gigabytes (2^32 bytes), time= 74.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xfb7a8d75
length= 5.250 gigabytes (2^32.392 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m41.154s
user	1m38.940s
sys	0m1.968s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5f99a0be
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5f99a0be
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5f99a0be
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  +3.8  p =  1.1e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5f99a0be
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5f99a0be
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5f99a0be
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5f99a0be
length= 4 gigabytes (2^32 bytes), time= 71.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +5.4  p =  3.4e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5f99a0be
length= 8 gigabytes (2^33 bytes), time= 149 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x5f99a0be
length= 16 gigabytes (2^34 bytes), time= 304 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x5f99a0be
length= 32 gigabytes (2^35 bytes), time= 609 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-1,T)         R= +11.8  p =  8.3e-6   suspicious       
  [Low1/32]BCFN(2+2,13-1,T)         R= +10.3  p =  5.0e-5   mildly suspicious
  ...and 178 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5f99a0be
length= 64 gigabytes (2^36 bytes), time= 1233 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-0,T)         R= +16.4  p =  2.5e-8   very suspicious  
  [Low1/32]BCFN(2+2,13-1,T)         R= +21.6  p =  4.3e-11    FAIL           
  ...and 187 test result(s) without anomalies


real	20m33.449s
user	20m7.952s
sys	0m22.792s
*/
