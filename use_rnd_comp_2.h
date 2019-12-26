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
/// @created on 2019-12-08 02:56:07 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 0b0fbb96-789c-4fd8-802d-50b3d0f3757f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib0, RndFib1, 7 >;
/* TEST00
time ./MRndCPP 
2991690402
7978384
2837370390
3531070337
1249900283
1051446622
4611618836106649843

real	0m9.984s
user	0m9.960s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.00e+07  |4146481836|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.38800450|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.08513364|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.55347051|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.68055155|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.18116836|  PASSED  
        diehard_opso|   0|   2097152|     100|0.68740703|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.08608877|  PASSED  
         diehard_dna|   0|   2097152|     100|0.02397987|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.88037768|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.91335574|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.57621075|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.90870995|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.41693975|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.77981507|  PASSED  
        diehard_sums|   0|       100|     100|0.02168511|  PASSED  
        diehard_runs|   0|    100000|     100|0.80502626|  PASSED  
        diehard_runs|   0|    100000|     100|0.19521927|  PASSED  
       diehard_craps|   0|    200000|     100|0.61910448|  PASSED  
       diehard_craps|   0|    200000|     100|0.91668503|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.39593844|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00972471|  PASSED  
         sts_monobit|   1|    100000|     100|0.47440825|  PASSED  
            sts_runs|   2|    100000|     100|0.20843342|  PASSED  
          sts_serial|   1|    100000|     100|0.98845181|  PASSED  
          sts_serial|   2|    100000|     100|0.88292359|  PASSED  
          sts_serial|   3|    100000|     100|0.99954660|   WEAK   
          sts_serial|   3|    100000|     100|0.11464649|  PASSED  
          sts_serial|   4|    100000|     100|0.99542945|   WEAK   
          sts_serial|   4|    100000|     100|0.99656696|   WEAK   
          sts_serial|   5|    100000|     100|0.90880082|  PASSED  
          sts_serial|   5|    100000|     100|0.63084035|  PASSED  
          sts_serial|   6|    100000|     100|0.60504965|  PASSED  
          sts_serial|   6|    100000|     100|0.31347042|  PASSED  
          sts_serial|   7|    100000|     100|0.25457607|  PASSED  
          sts_serial|   7|    100000|     100|0.65236661|  PASSED  
          sts_serial|   8|    100000|     100|0.04595070|  PASSED  
          sts_serial|   8|    100000|     100|0.08757304|  PASSED  
          sts_serial|   9|    100000|     100|0.02763450|  PASSED  
          sts_serial|   9|    100000|     100|0.14428301|  PASSED  
          sts_serial|  10|    100000|     100|0.03145850|  PASSED  
          sts_serial|  10|    100000|     100|0.12834139|  PASSED  
          sts_serial|  11|    100000|     100|0.04365351|  PASSED  
          sts_serial|  11|    100000|     100|0.56042623|  PASSED  
          sts_serial|  12|    100000|     100|0.24970193|  PASSED  
          sts_serial|  12|    100000|     100|0.86543076|  PASSED  
          sts_serial|  13|    100000|     100|0.40956556|  PASSED  
          sts_serial|  13|    100000|     100|0.77452048|  PASSED  
          sts_serial|  14|    100000|     100|0.64928823|  PASSED  
          sts_serial|  14|    100000|     100|0.95729688|  PASSED  
          sts_serial|  15|    100000|     100|0.24123874|  PASSED  
          sts_serial|  15|    100000|     100|0.14132007|  PASSED  
          sts_serial|  16|    100000|     100|0.30668583|  PASSED  
          sts_serial|  16|    100000|     100|0.71473367|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.96627297|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.14478238|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.95001576|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.29317060|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.94983458|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.17802542|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.86790521|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.64849400|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.11755086|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.86473657|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.34068067|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.00654635|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.13080109|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.87058802|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.31444184|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.31605823|  PASSED  
    rgb_permutations|   2|    100000|     100|0.89407281|  PASSED  
    rgb_permutations|   3|    100000|     100|0.46640569|  PASSED  
    rgb_permutations|   4|    100000|     100|0.34028728|  PASSED  
    rgb_permutations|   5|    100000|     100|0.34834143|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.59043592|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.40261359|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.34705702|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.29136387|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.90756961|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.65996723|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.48024105|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.02931737|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.94483422|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.03699126|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.67986372|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.99047417|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.87546183|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.01542387|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.73445491|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.24059824|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.79271629|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.43004318|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.45764720|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.74651815|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.80309885|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.26447629|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.33042371|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.03090070|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.65153730|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.51735045|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.99741601|   WEAK   
      rgb_lagged_sum|  27|   1000000|     100|0.96339752|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.82725190|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.41100689|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.90755569|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.24798423|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.98187707|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.76081276|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.12494150|  PASSED  
             dab_dct| 256|     50000|       1|0.34687260|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.52067924|  PASSED  
        dab_filltree|  32|  15000000|       1|0.36021142|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.05600060|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.97077061|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.99035641|  PASSED  

real	54m55.894s
user	51m8.944s
sys	3m39.392s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6f9531a0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6f9531a0
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6f9531a0
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6f9531a0
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6f9531a0
length= 1 gigabyte (2^30 bytes), time= 19.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x6f9531a0
length= 2 gigabytes (2^31 bytes), time= 38.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6f9531a0
length= 4 gigabytes (2^32 bytes), time= 74.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x6f9531a0
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +4.7  p = 0.012     unusual          
  ...and 159 test result(s) without anomalies


real	1m43.655s
user	1m40.344s
sys	0m3.136s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x49e52cef
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x49e52cef
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.7  p =1-9.4e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x49e52cef
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  +3.9  p =  2.8e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x49e52cef
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R=  -6.4  p =1-2.0e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x49e52cef
length= 1 gigabyte (2^30 bytes), time= 19.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x49e52cef
length= 2 gigabytes (2^31 bytes), time= 38.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x49e52cef
length= 4 gigabytes (2^32 bytes), time= 76.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x49e52cef
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m44.137s
user	1m40.948s
sys	0m2.956s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xae821434
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xae821434
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xae821434
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all2         R=  -1.5  p =1-5.7e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xae821434
length= 512 megabytes (2^29 bytes), time= 11.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xae821434
length= 1 gigabyte (2^30 bytes), time= 22.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xae821434
length= 2 gigabytes (2^31 bytes), time= 43.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xae821434
length= 4 gigabytes (2^32 bytes), time= 85.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xae821434
length= 4.750 gigabytes (2^32.248 bytes), time= 102 seconds
  no anomalies in 159 test result(s)


real	1m43.053s
user	1m40.264s
sys	0m2.536s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7de4258d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7de4258d
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7de4258d
length= 256 megabytes (2^28 bytes), time= 6.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7de4258d
length= 512 megabytes (2^29 bytes), time= 12.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7de4258d
length= 1 gigabyte (2^30 bytes), time= 24.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7de4258d
length= 2 gigabytes (2^31 bytes), time= 46.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x7de4258d
length= 4 gigabytes (2^32 bytes), time= 91.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.1  p =  8.4e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7de4258d
length= 8 gigabytes (2^33 bytes), time= 187 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.5  p =  4.6e-3   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7de4258d
length= 16 gigabytes (2^34 bytes), time= 389 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x7de4258d
length= 32 gigabytes (2^35 bytes), time= 789 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-0,T)         R=  +7.7  p =  1.2e-3   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7de4258d
length= 64 gigabytes (2^36 bytes), time= 1600 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-0,T)         R=  +7.5  p =  1.6e-3   unusual          
  [Low1/32]BCFN(2+1,13-0,T)         R= +11.1  p =  1.9e-5   suspicious       
  [Low1/32]BCFN(2+2,13-1,T)         R= +11.7  p =  9.6e-6   suspicious       
  ...and 186 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7de4258d
length= 128 gigabytes (2^37 bytes), time= 3208 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-0,T)         R= +13.6  p =  8.3e-7   very suspicious  
  [Low1/32]BCFN(2+1,13-0,T)         R= +13.1  p =  1.6e-6   very suspicious  
  [Low1/32]BCFN(2+2,13-0,T)         R= +13.8  p =  6.6e-7   very suspicious  
  ...and 193 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7de4258d
length= 144.000 gigabytes (2^37.170 bytes), time= 3604 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-0,T)         R= +15.9  p =  4.8e-8   very suspicious  
  [Low1/32]BCFN(2+1,13-0,T)         R= +14.0  p =  5.2e-7   very suspicious  
  [Low1/32]BCFN(2+2,13-0,T)         R= +14.1  p =  4.3e-7   very suspicious  
  [Low1/32]BCFN(2+4,13-1,T)         R=  +9.1  p =  2.3e-4   unusual          
  ...and 192 test result(s) without anomalies


real	60m5.315s
user	58m39.620s
sys	1m17.124s
*/
