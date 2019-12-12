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
/// @created on 2019-12-08 02:57:46 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token da5caad5-47b0-45bf-8100-04d7fbb20b94                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib0a;
/* TEST00
time ./MRndCPP 
3233202625
2328409647
3361551064
2495864169
3328962110
888761389
79786154906634

real	0m31.539s
user	0m31.472s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.16e+07  |4107449229|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.32397911|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.67325849|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.98046193|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.93446009|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.90602457|  PASSED  
        diehard_opso|   0|   2097152|     100|0.36728553|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.32142548|  PASSED  
         diehard_dna|   0|   2097152|     100|0.16560159|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.34718828|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.51393442|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.51803658|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.68215587|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.60321736|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.72419556|  PASSED  
        diehard_sums|   0|       100|     100|0.00289856|   WEAK   
        diehard_runs|   0|    100000|     100|0.29909915|  PASSED  
        diehard_runs|   0|    100000|     100|0.95712031|  PASSED  
       diehard_craps|   0|    200000|     100|0.94041658|  PASSED  
       diehard_craps|   0|    200000|     100|0.98869815|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.34644216|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.57081214|  PASSED  
         sts_monobit|   1|    100000|     100|0.46035166|  PASSED  
            sts_runs|   2|    100000|     100|0.08901213|  PASSED  
          sts_serial|   1|    100000|     100|0.68030544|  PASSED  
          sts_serial|   2|    100000|     100|0.96332458|  PASSED  
          sts_serial|   3|    100000|     100|0.91479802|  PASSED  
          sts_serial|   3|    100000|     100|0.56649928|  PASSED  
          sts_serial|   4|    100000|     100|0.53358091|  PASSED  
          sts_serial|   4|    100000|     100|0.87468029|  PASSED  
          sts_serial|   5|    100000|     100|0.93535168|  PASSED  
          sts_serial|   5|    100000|     100|0.59127172|  PASSED  
          sts_serial|   6|    100000|     100|0.93690982|  PASSED  
          sts_serial|   6|    100000|     100|0.49876299|  PASSED  
          sts_serial|   7|    100000|     100|0.69473312|  PASSED  
          sts_serial|   7|    100000|     100|0.34886958|  PASSED  
          sts_serial|   8|    100000|     100|0.16819786|  PASSED  
          sts_serial|   8|    100000|     100|0.93314111|  PASSED  
          sts_serial|   9|    100000|     100|0.49420194|  PASSED  
          sts_serial|   9|    100000|     100|0.64961191|  PASSED  
          sts_serial|  10|    100000|     100|0.85384721|  PASSED  
          sts_serial|  10|    100000|     100|0.99312619|  PASSED  
          sts_serial|  11|    100000|     100|0.15901232|  PASSED  
          sts_serial|  11|    100000|     100|0.77145844|  PASSED  
          sts_serial|  12|    100000|     100|0.99324117|  PASSED  
          sts_serial|  12|    100000|     100|0.99313952|  PASSED  
          sts_serial|  13|    100000|     100|0.83324595|  PASSED  
          sts_serial|  13|    100000|     100|0.07126144|  PASSED  
          sts_serial|  14|    100000|     100|0.21242947|  PASSED  
          sts_serial|  14|    100000|     100|0.46894879|  PASSED  
          sts_serial|  15|    100000|     100|0.43427156|  PASSED  
          sts_serial|  15|    100000|     100|0.19143581|  PASSED  
          sts_serial|  16|    100000|     100|0.39477693|  PASSED  
          sts_serial|  16|    100000|     100|0.35269353|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.40844093|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.18375053|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.19715568|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.79339489|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.45132536|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.80454243|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.02110216|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.63678225|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.65943752|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.49818362|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.78987021|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.99460018|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.58931137|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.99792254|   WEAK   
rgb_minimum_distance|   4|     10000|    1000|0.87541598|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.60466267|  PASSED  
    rgb_permutations|   2|    100000|     100|0.77034418|  PASSED  
    rgb_permutations|   3|    100000|     100|0.42022132|  PASSED  
    rgb_permutations|   4|    100000|     100|0.34596353|  PASSED  
    rgb_permutations|   5|    100000|     100|0.90937613|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.37988500|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.63098600|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.38531093|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.54846512|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.09869531|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.99939307|   WEAK   
      rgb_lagged_sum|   6|   1000000|     100|0.59646887|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.31191112|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.06890732|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.76152576|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.28493960|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.38737146|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.10879101|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.43712781|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.35427148|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.34199605|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.85573317|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.17482280|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.67226335|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.31150145|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.22515366|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.58691839|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.20909231|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.61574270|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.00963068|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.38613617|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.79961111|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.18542191|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.42674685|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.29225898|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.55481704|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.11444912|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.40104553|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.40679881|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.78705761|  PASSED  
             dab_dct| 256|     50000|       1|0.15174903|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.57434788|  PASSED  
        dab_filltree|  32|  15000000|       1|0.51471093|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.78095856|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.77107447|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.13797521|  PASSED  

real	54m6.860s
user	50m19.120s
sys	3m39.216s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x50f154b9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x50f154b9
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x50f154b9
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x50f154b9
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x50f154b9
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x50f154b9
length= 2 gigabytes (2^31 bytes), time= 40.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x50f154b9
length= 4 gigabytes (2^32 bytes), time= 78.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x50f154b9
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +7.4  p =  3.8e-4   mildly suspicious
  ...and 159 test result(s) without anomalies


real	1m44.131s
user	1m41.528s
sys	0m2.240s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x134297a7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x134297a7
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x134297a7
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x134297a7
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x134297a7
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x134297a7
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x134297a7
length= 4 gigabytes (2^32 bytes), time= 74.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x134297a7
length= 8 gigabytes (2^33 bytes), time= 153 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +7.3  p =  7.5e-4   mildly suspicious
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x134297a7
length= 16 gigabytes (2^34 bytes), time= 309 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-1,T)         R= +10.3  p =  5.2e-5   mildly suspicious
  [Low1/32]DC6-9x1Bytes-1           R= +16.9  p =  1.0e-9    VERY SUSPICIOUS 
  ...and 170 test result(s) without anomalies

rng=RNG_stdin32, seed=0x134297a7
length= 32 gigabytes (2^35 bytes), time= 615 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-0,T)         R=  +8.6  p =  3.8e-4   unusual          
  [Low1/32]BCFN(2+0,13-1,T)         R= +20.9  p =  1.0e-10   VERY SUSPICIOUS 
  [Low1/32]DC6-9x1Bytes-1           R= +32.9  p =  3.6e-17    FAIL !         
  [Low1/32]FPF-14+6/16:cross        R=  -2.2  p =1-1.3e-3   unusual          
  ...and 176 test result(s) without anomalies


real	10m16.192s
user	10m1.592s
sys	0m12.824s
*/
