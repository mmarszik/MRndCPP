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
/* TEST00
time ./MRndCPP 
1620184323
1548104126
3071799005
953977587
3659402419
374740125
12786350484047378101

real	1m34.533s
user	1m34.392s
sys	0m0.036s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.94e+07  |2889852458|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.00000000|  FAILED  
      diehard_operm5|   0|   1000000|     100|0.00000000|  FAILED  
  diehard_rank_32x32|   0|     40000|     100|0.00000000|  FAILED  
    diehard_rank_6x8|   0|    100000|     100|0.00000000|  FAILED  
   diehard_bitstream|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_opso|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_oqso|   0|   2097152|     100|0.00000000|  FAILED  
         diehard_dna|   0|   2097152|     100|0.00000000|  FAILED  
diehard_count_1s_str|   0|    256000|     100|0.00000000|  FAILED  
diehard_count_1s_byt|   0|    256000|     100|0.00000000|  FAILED  
 diehard_parking_lot|   0|     12000|     100|0.00000000|  FAILED  
    diehard_2dsphere|   2|      8000|     100|0.00000000|  FAILED  
    diehard_3dsphere|   3|      4000|     100|0.00000000|  FAILED  
     diehard_squeeze|   0|    100000|     100|0.00000000|  FAILED  
        diehard_sums|   0|       100|     100|0.00000000|  FAILED  
        diehard_runs|   0|    100000|     100|0.00000000|  FAILED  
        diehard_runs|   0|    100000|     100|0.00000000|  FAILED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.00000000|  FAILED  
            sts_runs|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   1|    100000|     100|0.00000000|  FAILED  
          sts_serial|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
          sts_serial|   5|    100000|     100|0.00000000|  FAILED  
          sts_serial|   5|    100000|     100|0.00000000|  FAILED  
          sts_serial|   6|    100000|     100|0.00000000|  FAILED  
          sts_serial|   6|    100000|     100|0.00000000|  FAILED  
          sts_serial|   7|    100000|     100|0.00000000|  FAILED  
          sts_serial|   7|    100000|     100|0.00000000|  FAILED  
          sts_serial|   8|    100000|     100|0.00000000|  FAILED  
          sts_serial|   8|    100000|     100|0.00000000|  FAILED  
          sts_serial|   9|    100000|     100|0.00000000|  FAILED  
          sts_serial|   9|    100000|     100|0.00000000|  FAILED  
          sts_serial|  10|    100000|     100|0.00000000|  FAILED  
          sts_serial|  10|    100000|     100|0.00000000|  FAILED  
          sts_serial|  11|    100000|     100|0.00000000|  FAILED  
          sts_serial|  11|    100000|     100|0.00000000|  FAILED  
          sts_serial|  12|    100000|     100|0.00000000|  FAILED  
          sts_serial|  12|    100000|     100|0.00000000|  FAILED  
          sts_serial|  13|    100000|     100|0.00000000|  FAILED  
          sts_serial|  13|    100000|     100|0.00000000|  FAILED  
          sts_serial|  14|    100000|     100|0.00000000|  FAILED  
          sts_serial|  14|    100000|     100|0.00000000|  FAILED  
          sts_serial|  15|    100000|     100|0.00000000|  FAILED  
          sts_serial|  15|    100000|     100|0.00000000|  FAILED  
          sts_serial|  16|    100000|     100|0.00000000|  FAILED  
          sts_serial|  16|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   1|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   2|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   3|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   4|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   5|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   6|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   7|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   8|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   9|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|  10|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|  11|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|  12|    100000|     100|0.00000000|  FAILED  
rgb_minimum_distance|   2|     10000|    1000|0.00000000|  FAILED  
rgb_minimum_distance|   3|     10000|    1000|0.00000000|  FAILED  
rgb_minimum_distance|   4|     10000|    1000|0.00000000|  FAILED  
rgb_minimum_distance|   5|     10000|    1000|0.00000000|  FAILED  
    rgb_permutations|   2|    100000|     100|0.00000000|  FAILED  
    rgb_permutations|   3|    100000|     100|0.00000000|  FAILED  
    rgb_permutations|   4|    100000|     100|0.00000000|  FAILED  
    rgb_permutations|   5|    100000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   0|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   1|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   2|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   3|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   4|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   5|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   6|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   7|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   8|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   9|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  10|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  11|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  12|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  13|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  14|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  15|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  16|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  17|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  18|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  19|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  20|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  21|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  22|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  23|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  24|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  25|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  26|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  27|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  28|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  29|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  30|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  31|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  32|   1000000|     100|0.00000000|  FAILED  
./test.sh: line 7:  5282 Broken pipe             ./MRndCPP
      5283 Killed                  | dieharder -g200 -a -k2 > test.txt

real	210m51.598s
user	206m55.216s
sys	3m32.648s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x633d8034
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x633d8034
length= 128 megabytes (2^27 bytes), time= 2.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+11786212 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+6273481 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+3276768 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+1689278 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+1098889 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+701892 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+354690 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+221529 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+111348 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+68007  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+40510  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20285  p =  5e-5149    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11671  p =  1e-2623    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5830  p =  3e-1311    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+4634329 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+3582841 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+16044181 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -27.0  p =1-1.5e-24    FAIL !!        
  FPF-14+6/16:(1,14-0)              R= -52.3  p =1-9.9e-48    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R=+9445688 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R= -50.3  p =1-4.4e-51    FAIL !!!!      
  FPF-14+6/16:(4,14-2)              R= -34.6  p =1-8.0e-34    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -46.9  p =1-5.5e-46    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -31.4  p =1-1.2e-28    FAIL !!        
  FPF-14+6/16:(7,14-4)              R= -25.0  p =1-5.2e-26    FAIL !!        
  FPF-14+6/16:(8,14-5)              R= -16.2  p =1-1.1e-16    FAIL !         
  FPF-14+6/16:(9,14-5)              R= -18.9  p =1-1.5e-19    FAIL !         
  FPF-14+6/16:(10,14-6)             R= -13.5  p =1-1.0e-14    FAIL           
  FPF-14+6/16:(11,14-7)             R=  -8.8  p =1-1.3e-9   very suspicious  
  FPF-14+6/16:(12,14-8)             R=  -5.1  p =1-1.2e-5   unusual          
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+5617968 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+24211297293149 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+44098643 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+3753662 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1997948 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+1313072 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+676913 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+345799 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+217628 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+109973 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+67424  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+40257  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+20194  p =  7e-5126    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R=+11634  p =  3e-2615    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +5817  p =  3e-1308    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+1402419 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1070876 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+5233201 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= -98.8  p =1-7.0e-97    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(1,14-1)     R= -65.9  p =1-4.6e-67    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+4360679 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -50.5  p =1-1.4e-49    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(4,14-3)     R= -36.7  p =1-1.7e-33    FAIL !!!       
  [Low8/32]FPF-14+6/16:(5,14-4)     R= -26.2  p =1-3.2e-27    FAIL !!        
  [Low8/32]FPF-14+6/16:(6,14-5)     R= -17.9  p =1-1.5e-18    FAIL !         
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -20.9  p =1-1.0e-21    FAIL !!        
  [Low8/32]FPF-14+6/16:(8,14-6)     R= -14.8  p =1-3.7e-16    FAIL           
  [Low8/32]FPF-14+6/16:(9,14-7)     R=  -9.3  p =1-3.9e-10  very suspicious  
  [Low8/32]FPF-14+6/16:(10,14-8)    R=  -6.2  p =1-4.9e-7   mildly suspicious
  [Low8/32]FPF-14+6/16:all          R=+1804823 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+4977903898400 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+11624374 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+1099128 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+519520 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+249455 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+121164 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+72212  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+42258  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+20899  p =  5e-5305    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11920  p =  1e-2679    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+483591 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223024 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888418 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -56.3  p =1-2.4e-55    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-3)     R= -39.5  p =1-4.5e-36    FAIL !!!       
  [Low1/32]FPF-14+6/16:(2,14-4)     R= -27.2  p =1-2.3e-28    FAIL !!        
  [Low1/32]FPF-14+6/16:(3,14-5)     R= -16.2  p =1-1.1e-16    FAIL !         
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -20.2  p =1-5.0e-21    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-6)     R= -14.3  p =1-1.2e-15    FAIL           
  [Low1/32]FPF-14+6/16:(6,14-7)     R=  -9.3  p =1-3.9e-10  very suspicious  
  [Low1/32]FPF-14+6/16:all          R=-110.4  p =1-1.8e-101   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2101  p =  1.2e-643   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:cross        R=+7960733 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  
  ...and 5 test result(s) without anomalies


real	0m2.666s
user	0m2.508s
sys	0m0.132s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xff69903b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xff69903b
length= 128 megabytes (2^27 bytes), time= 2.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+11786203 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+6273459 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+3276738 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+1689261 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+1098880 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+701876 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+354697 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+221541 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+111347 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+68007  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+40510  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20285  p =  5e-5149    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11671  p =  1e-2623    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5830  p =  3e-1311    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+4634341 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+3582836 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+16044161 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -27.0  p =1-1.5e-24    FAIL !!        
  FPF-14+6/16:(1,14-0)              R= -53.4  p =1-8.2e-49    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R=+9445684 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R= -50.7  p =1-1.8e-51    FAIL !!!!      
  FPF-14+6/16:(4,14-2)              R= -34.3  p =1-1.4e-33    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -46.7  p =1-7.5e-46    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -34.3  p =1-2.6e-31    FAIL !!!       
  FPF-14+6/16:(7,14-4)              R= -22.5  p =1-2.7e-23    FAIL !!        
  FPF-14+6/16:(8,14-5)              R= -16.3  p =1-8.7e-17    FAIL !         
  FPF-14+6/16:(9,14-5)              R= -18.4  p =1-5.0e-19    FAIL !         
  FPF-14+6/16:(10,14-6)             R= -12.8  p =1-6.4e-14    FAIL           
  FPF-14+6/16:(11,14-7)             R=  -8.8  p =1-1.3e-9   very suspicious  
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+5619253 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+24211273319201 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+44098879 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+3753659 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1997946 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+1313068 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+676917 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+345796 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+217628 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+109974 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+67424  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+40257  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+20194  p =  7e-5126    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R=+11634  p =  3e-2615    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +5817  p =  3e-1308    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+1402414 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1070875 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+5233197 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= -98.2  p =1-3.2e-96    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(1,14-1)     R= -66.2  p =1-1.8e-67    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+4360690 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -50.3  p =1-2.0e-49    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(4,14-3)     R= -34.9  p =1-6.9e-32    FAIL !!!       
  [Low8/32]FPF-14+6/16:(5,14-4)     R= -25.5  p =1-1.6e-26    FAIL !!        
  [Low8/32]FPF-14+6/16:(6,14-5)     R= -18.1  p =1-8.9e-19    FAIL !         
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -19.1  p =1-8.0e-20    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-6)     R= -14.8  p =1-3.7e-16    FAIL           
  [Low8/32]FPF-14+6/16:(9,14-7)     R=  -9.8  p =1-9.3e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:(10,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:all          R=+1804050 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+4977929001121 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+11624237 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+1099128 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+519520 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+249460 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+121164 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+72212  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+42258  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+20899  p =  5e-5305    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11920  p =  1e-2679    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+483591 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223024 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888419 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -54.5  p =1-1.3e-53    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-3)     R= -39.6  p =1-3.3e-36    FAIL !!!       
  [Low1/32]FPF-14+6/16:(2,14-4)     R= -27.2  p =1-2.3e-28    FAIL !!        
  [Low1/32]FPF-14+6/16:(3,14-5)     R= -19.1  p =1-8.0e-20    FAIL !         
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -20.6  p =1-2.3e-21    FAIL !!        
  [Low1/32]FPF-14+6/16:(5,14-6)     R= -14.3  p =1-1.2e-15    FAIL           
  [Low1/32]FPF-14+6/16:(6,14-7)     R=  -8.2  p =1-6.9e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=-111.0  p =1-5.3e-102   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2092  p =  7.3e-641   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:cross        R=+7960701 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  
  ...and 4 test result(s) without anomalies


real	0m2.645s
user	0m2.524s
sys	0m0.120s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x46316d00
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x46316d00
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+11786220 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+6273494 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+3276758 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+1689290 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+1098903 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+701903 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+354716 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+221540 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+111348 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+68007  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+40510  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20285  p =  5e-5149    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11671  p =  1e-2623    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5830  p =  3e-1311    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+4634339 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+3582841 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+16044181 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -26.1  p =1-9.9e-24    FAIL !!        
  FPF-14+6/16:(1,14-0)              R= -53.2  p =1-1.2e-48    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R=+9445682 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R= -51.7  p =1-1.6e-52    FAIL !!!!      
  FPF-14+6/16:(4,14-2)              R= -36.1  p =1-2.6e-35    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -46.7  p =1-7.6e-46    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -33.3  p =1-2.0e-30    FAIL !!!       
  FPF-14+6/16:(7,14-4)              R= -25.7  p =1-1.1e-26    FAIL !!        
  FPF-14+6/16:(8,14-5)              R= -16.4  p =1-7.4e-17    FAIL !         
  FPF-14+6/16:(9,14-5)              R= -17.8  p =1-2.1e-18    FAIL !         
  FPF-14+6/16:(10,14-6)             R= -13.9  p =1-3.7e-15    FAIL           
  FPF-14+6/16:(11,14-7)             R=  -9.8  p =1-9.3e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(12,14-8)             R=  -6.2  p =1-4.9e-7   mildly suspicious
  FPF-14+6/16:(13,14-8)             R=  -6.2  p =1-4.9e-7   mildly suspicious
  FPF-14+6/16:all                   R=+5617968 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+24211265989252 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+44098796 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+3753703 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1997983 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+1313091 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+676930 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+345812 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+217637 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+109975 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+67424  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+40257  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+20194  p =  7e-5126    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R=+11634  p =  3e-2615    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +5817  p =  3e-1308    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+1402422 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1070876 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+5233199 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= -98.0  p =1-4.8e-96    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(1,14-1)     R= -65.9  p =1-3.9e-67    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+4360688 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -51.0  p =1-4.0e-50    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(4,14-3)     R= -37.5  p =1-2.9e-34    FAIL !!!       
  [Low8/32]FPF-14+6/16:(5,14-4)     R= -25.0  p =1-5.5e-26    FAIL !!        
  [Low8/32]FPF-14+6/16:(6,14-5)     R= -17.9  p =1-1.5e-18    FAIL !         
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -20.9  p =1-1.0e-21    FAIL !!        
  [Low8/32]FPF-14+6/16:(8,14-6)     R= -13.7  p =1-5.9e-15    FAIL           
  [Low8/32]FPF-14+6/16:(10,14-8)    R=  -5.6  p =1-2.7e-6   unusual          
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:all          R=+1806955 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+4977922982224 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+11624335 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+1099127 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+519520 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+249455 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+121162 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+72212  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+42258  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+20899  p =  5e-5305    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11920  p =  1e-2679    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+483591 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223024 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888419 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -54.1  p =1-3.8e-53    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-3)     R= -38.7  p =1-2.5e-35    FAIL !!!       
  [Low1/32]FPF-14+6/16:(2,14-4)     R= -28.6  p =1-7.6e-30    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-5)     R= -20.2  p =1-5.0e-21    FAIL !         
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -21.2  p =1-4.2e-22    FAIL !!        
  [Low1/32]FPF-14+6/16:(5,14-6)     R= -13.9  p =1-3.7e-15    FAIL           
  [Low1/32]FPF-14+6/16:(6,14-7)     R=  -9.8  p =1-9.3e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(7,14-8)     R=  -5.6  p =1-2.7e-6   unusual          
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=-111.0  p =1-4.9e-102   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2225  p =  4.9e-668   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:cross        R=+7960710 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  
  ...and 2 test result(s) without anomalies


real	0m2.666s
user	0m2.540s
sys	0m0.108s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x42eeb348
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x42eeb348
length= 128 megabytes (2^27 bytes), time= 2.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+11786164 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+6273464 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+3276755 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+1689289 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+1098905 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+701900 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+354698 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+221514 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+111350 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+68007  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+40510  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20285  p =  5e-5149    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11671  p =  1e-2623    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5830  p =  3e-1311    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+4634334 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+3582840 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+16044178 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -27.6  p =1-4.4e-25    FAIL !!        
  FPF-14+6/16:(1,14-0)              R= -52.5  p =1-6.2e-48    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R=+9445671 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R= -51.4  p =1-3.4e-52    FAIL !!!!      
  FPF-14+6/16:(4,14-2)              R= -36.9  p =1-4.3e-36    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -47.9  p =1-4.7e-47    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -31.9  p =1-4.1e-29    FAIL !!        
  FPF-14+6/16:(7,14-4)              R= -22.8  p =1-1.4e-23    FAIL !!        
  FPF-14+6/16:(8,14-5)              R= -15.7  p =1-3.9e-16    FAIL           
  FPF-14+6/16:(9,14-5)              R= -18.4  p =1-5.0e-19    FAIL !         
  FPF-14+6/16:(10,14-6)             R= -13.1  p =1-2.6e-14    FAIL           
  FPF-14+6/16:(11,14-7)             R=  -8.1  p =1-8.5e-9   very suspicious  
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+5620532 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+25125159711644 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+44098976 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+3753693 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1997978 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+1313111 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+676939 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+345807 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+217631 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+109975 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+67424  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+40257  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+20194  p =  7e-5126    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R=+11634  p =  3e-2615    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +5817  p =  3e-1308    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+1402420 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1070875 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+5233194 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= -98.1  p =1-3.4e-96    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(1,14-1)     R= -65.9  p =1-4.3e-67    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+4360679 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -50.9  p =1-5.0e-50    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(4,14-3)     R= -35.9  p =1-9.8e-33    FAIL !!!       
  [Low8/32]FPF-14+6/16:(5,14-4)     R= -27.4  p =1-1.4e-28    FAIL !!        
  [Low8/32]FPF-14+6/16:(6,14-5)     R= -17.0  p =1-1.4e-17    FAIL !         
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -19.4  p =1-4.1e-20    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-6)     R= -15.3  p =1-9.3e-17    FAIL !         
  [Low8/32]FPF-14+6/16:(9,14-7)     R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:(10,14-8)    R=  -5.6  p =1-2.7e-6   unusual          
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:all          R=+1803277 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+4782615398192 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+11624324 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+1099132 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+519523 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+249452 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+121160 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+72212  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+42258  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+20899  p =  5e-5305    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11920  p =  1e-2679    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+483589 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223024 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888419 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -54.3  p =1-2.0e-53    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-3)     R= -39.2  p =1-8.1e-36    FAIL !!!       
  [Low1/32]FPF-14+6/16:(2,14-4)     R= -27.5  p =1-1.1e-28    FAIL !!        
  [Low1/32]FPF-14+6/16:(3,14-5)     R= -19.7  p =1-2.1e-20    FAIL !         
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -20.6  p =1-2.3e-21    FAIL !!        
  [Low1/32]FPF-14+6/16:(5,14-6)     R= -14.8  p =1-3.7e-16    FAIL           
  [Low1/32]FPF-14+6/16:(6,14-7)     R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(7,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=-111.1  p =1-4.7e-102   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2111  p =  1.1e-646   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:cross        R=+7960708 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  
  ...and 4 test result(s) without anomalies


real	0m2.644s
user	0m2.548s
sys	0m0.084s
*/
