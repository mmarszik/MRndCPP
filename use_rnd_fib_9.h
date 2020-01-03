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
/// @created on 2019-12-18 01:28:21 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token d71908cd-73ae-4cb3-bbca-1fcf52e0e66b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib9;
/* TEST00
time ./MRndCPP 
1132665267
732615266
2828022615
2261780528
3720165083
1981029973
18446556220114496448

real	0m51.649s
user	0m51.548s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.23e+07  |1507000422|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.89135490|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.44394364|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.07083472|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.44230887|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.18996250|  PASSED  
        diehard_opso|   0|   2097152|     100|0.00739497|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.39762492|  PASSED  
         diehard_dna|   0|   2097152|     100|0.56701604|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.05173847|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.88952156|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.71038532|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.29299355|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.50211231|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.57134246|  PASSED  
        diehard_sums|   0|       100|     100|0.39928496|  PASSED  
        diehard_runs|   0|    100000|     100|0.92103502|  PASSED  
        diehard_runs|   0|    100000|     100|0.88013886|  PASSED  
       diehard_craps|   0|    200000|     100|0.71246306|  PASSED  
       diehard_craps|   0|    200000|     100|0.47359488|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.98913895|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.19320673|  PASSED  
         sts_monobit|   1|    100000|     100|0.24049584|  PASSED  
            sts_runs|   2|    100000|     100|0.48878730|  PASSED  
          sts_serial|   1|    100000|     100|0.57096271|  PASSED  
          sts_serial|   2|    100000|     100|0.99390089|  PASSED  
          sts_serial|   3|    100000|     100|0.17264624|  PASSED  
          sts_serial|   3|    100000|     100|0.01163314|  PASSED  
          sts_serial|   4|    100000|     100|0.02003546|  PASSED  
          sts_serial|   4|    100000|     100|0.03476186|  PASSED  
          sts_serial|   5|    100000|     100|0.40138936|  PASSED  
          sts_serial|   5|    100000|     100|0.52112102|  PASSED  
          sts_serial|   6|    100000|     100|0.78842004|  PASSED  
          sts_serial|   6|    100000|     100|0.79193182|  PASSED  
          sts_serial|   7|    100000|     100|0.52776214|  PASSED  
          sts_serial|   7|    100000|     100|0.39998614|  PASSED  
          sts_serial|   8|    100000|     100|0.97220674|  PASSED  
          sts_serial|   8|    100000|     100|0.59338856|  PASSED  
          sts_serial|   9|    100000|     100|0.73632876|  PASSED  
          sts_serial|   9|    100000|     100|0.40428139|  PASSED  
          sts_serial|  10|    100000|     100|0.93221893|  PASSED  
          sts_serial|  10|    100000|     100|0.93551199|  PASSED  
          sts_serial|  11|    100000|     100|0.84503866|  PASSED  
          sts_serial|  11|    100000|     100|0.71844543|  PASSED  
          sts_serial|  12|    100000|     100|0.87245622|  PASSED  
          sts_serial|  12|    100000|     100|0.57755681|  PASSED  
          sts_serial|  13|    100000|     100|0.76469136|  PASSED  
          sts_serial|  13|    100000|     100|0.89043446|  PASSED  
          sts_serial|  14|    100000|     100|0.78849121|  PASSED  
          sts_serial|  14|    100000|     100|0.79958461|  PASSED  
          sts_serial|  15|    100000|     100|0.96025542|  PASSED  
          sts_serial|  15|    100000|     100|0.50147016|  PASSED  
          sts_serial|  16|    100000|     100|0.69123195|  PASSED  
          sts_serial|  16|    100000|     100|0.71119725|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.49959829|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.77804622|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.93263174|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.63216013|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.31561881|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.75228298|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.89069039|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.12030509|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.13239799|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.88968838|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.92913375|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.23595674|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.75109007|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.44069795|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.25744212|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.18720421|  PASSED  
    rgb_permutations|   2|    100000|     100|0.83087274|  PASSED  
    rgb_permutations|   3|    100000|     100|0.34067280|  PASSED  
    rgb_permutations|   4|    100000|     100|0.23148816|  PASSED  
    rgb_permutations|   5|    100000|     100|0.90595202|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.95400177|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.15795046|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.19579204|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.23002230|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.45176870|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.69399595|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.56621817|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.87872591|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.26391283|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.60468002|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.80605134|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.65081532|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.84291758|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.93104434|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.95223914|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.31130536|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.19687768|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.80886794|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.24540752|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.28703045|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.98214898|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.06131366|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.97594516|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.00230790|   WEAK   
      rgb_lagged_sum|  24|   1000000|     100|0.05208558|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.78283850|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.12057299|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.20790024|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.79691537|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.87107382|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.75684161|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.99762953|   WEAK   
      rgb_lagged_sum|  32|   1000000|     100|0.11313417|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.99699197|   WEAK   
     dab_bytedistrib|   0|  51200000|       1|0.57580975|  PASSED  
             dab_dct| 256|     50000|       1|0.86056385|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.37279893|  PASSED  
        dab_filltree|  32|  15000000|       1|0.13712328|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.29785149|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.05827971|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.63107274|  PASSED  

real	50m47.127s
user	47m15.776s
sys	3m28.280s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x14507de4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x14507de4
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-5,T)         R=  +8.6  p =  1.5e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x14507de4
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R= +11.2  p =  2.8e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x14507de4
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x14507de4
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+5,13-4,T)         R= +11.1  p =  8.6e-5   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x14507de4
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.1  p =  9.7e-3   unusual          
  [Low1/32]BCFN(2+0,13-3,T)         R=  -6.8  p =1-1.1e-3   unusual          
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0x14507de4
length= 4 gigabytes (2^32 bytes), time= 72.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.2  p =  8.8e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x14507de4
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  4.7e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m44.879s
user	1m42.248s
sys	0m2.472s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa5a9895c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa5a9895c
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xa5a9895c
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa5a9895c
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-3,T)         R=  -9.1  p =1-2.2e-5   suspicious       
  [Low8/32]Gap-16:A                 R=  -4.3  p =1-5.0e-4   unusual          
  [Low8/32]Gap-16:B                 R=  -4.8  p =1-4.6e-4   unusual          
  ...and 129 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa5a9895c
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-2,T)         R=  -6.6  p =1-2.1e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa5a9895c
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xa5a9895c
length= 4 gigabytes (2^32 bytes), time= 74.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R=  +8.2  p =  6.9e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa5a9895c
length= 5.250 gigabytes (2^32.392 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m41.058s
user	1m38.700s
sys	0m2.256s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x61153ab1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x61153ab1
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x61153ab1
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x61153ab1
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x61153ab1
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x61153ab1
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x61153ab1
length= 4 gigabytes (2^32 bytes), time= 71.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x61153ab1
length= 5.750 gigabytes (2^32.524 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m44.144s
user	1m41.884s
sys	0m2.100s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb2acf22
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb2acf22
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb2acf22
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb2acf22
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb2acf22
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb2acf22
length= 2 gigabytes (2^31 bytes), time= 36.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb2acf22
length= 4 gigabytes (2^32 bytes), time= 71.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xb2acf22
length= 8 gigabytes (2^33 bytes), time= 142 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xb2acf22
length= 16 gigabytes (2^34 bytes), time= 297 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xb2acf22
length= 32 gigabytes (2^35 bytes), time= 601 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xb2acf22
length= 64 gigabytes (2^36 bytes), time= 1226 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xb2acf22
length= 128 gigabytes (2^37 bytes), time= 2461 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xb2acf22
length= 187.750 gigabytes (2^37.553 bytes), time= 3602 seconds
  no anomalies in 201 test result(s)


real	60m2.452s
user	58m46.008s
sys	1m12.488s
*/
