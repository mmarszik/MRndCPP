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
/// @created on 2019-12-08 03:01:54 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 3d0be239-049e-4082-b213-9b26bfc18ea2                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin02;
/* TEST00
time ./MRndCPP 
3778525310
662918482
3364212650
1804903824
2573345473
916932342
322894346001680

real	0m26.981s
user	0m26.956s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.31e+07  |3857497193|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.79371621|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.39286674|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.99417511|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.69825379|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.11844560|  PASSED  
        diehard_opso|   0|   2097152|     100|0.62991517|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.99866317|   WEAK   
         diehard_dna|   0|   2097152|     100|0.07080375|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.35804003|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.89894860|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.83699181|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.85400759|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.49183283|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.94011334|  PASSED  
        diehard_sums|   0|       100|     100|0.39064963|  PASSED  
        diehard_runs|   0|    100000|     100|0.30303275|  PASSED  
        diehard_runs|   0|    100000|     100|0.88504698|  PASSED  
       diehard_craps|   0|    200000|     100|0.45181427|  PASSED  
       diehard_craps|   0|    200000|     100|0.50870389|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.60794783|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.15940211|  PASSED  
         sts_monobit|   1|    100000|     100|0.50192013|  PASSED  
            sts_runs|   2|    100000|     100|0.53407048|  PASSED  
          sts_serial|   1|    100000|     100|0.15667780|  PASSED  
          sts_serial|   2|    100000|     100|0.95080383|  PASSED  
          sts_serial|   3|    100000|     100|0.50470214|  PASSED  
          sts_serial|   3|    100000|     100|0.43810657|  PASSED  
          sts_serial|   4|    100000|     100|0.56289126|  PASSED  
          sts_serial|   4|    100000|     100|0.95549308|  PASSED  
          sts_serial|   5|    100000|     100|0.51489318|  PASSED  
          sts_serial|   5|    100000|     100|0.86667114|  PASSED  
          sts_serial|   6|    100000|     100|0.74367845|  PASSED  
          sts_serial|   6|    100000|     100|0.95855090|  PASSED  
          sts_serial|   7|    100000|     100|0.53414680|  PASSED  
          sts_serial|   7|    100000|     100|0.83737105|  PASSED  
          sts_serial|   8|    100000|     100|0.39832387|  PASSED  
          sts_serial|   8|    100000|     100|0.07598138|  PASSED  
          sts_serial|   9|    100000|     100|0.86927039|  PASSED  
          sts_serial|   9|    100000|     100|0.59003181|  PASSED  
          sts_serial|  10|    100000|     100|0.96520618|  PASSED  
          sts_serial|  10|    100000|     100|0.93590442|  PASSED  
          sts_serial|  11|    100000|     100|0.86112407|  PASSED  
          sts_serial|  11|    100000|     100|0.72707232|  PASSED  
          sts_serial|  12|    100000|     100|0.37120418|  PASSED  
          sts_serial|  12|    100000|     100|0.47786626|  PASSED  
          sts_serial|  13|    100000|     100|0.80718104|  PASSED  
          sts_serial|  13|    100000|     100|0.15664706|  PASSED  
          sts_serial|  14|    100000|     100|0.78589271|  PASSED  
          sts_serial|  14|    100000|     100|0.78989458|  PASSED  
          sts_serial|  15|    100000|     100|0.00936350|  PASSED  
          sts_serial|  15|    100000|     100|0.00056788|   WEAK   
          sts_serial|  16|    100000|     100|0.47178530|  PASSED  
          sts_serial|  16|    100000|     100|0.13944201|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.34819425|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.45182325|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.95225389|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.90600497|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.23026001|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.94106143|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.76717050|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.49878007|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.71012047|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.89736204|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.24183118|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.10759664|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.31444552|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.27712894|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.61539353|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.99460593|  PASSED  
    rgb_permutations|   2|    100000|     100|0.17759908|  PASSED  
    rgb_permutations|   3|    100000|     100|0.46702077|  PASSED  
    rgb_permutations|   4|    100000|     100|0.56409173|  PASSED  
    rgb_permutations|   5|    100000|     100|0.84294044|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.98249596|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.70869879|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.88796318|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.48641475|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.83574058|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.18696319|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.88918255|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.10982420|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.83748146|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.73329580|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.86422061|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.03245277|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.39388295|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.66473968|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.28928436|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.87474273|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.87453548|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.46561973|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.72236607|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.43068379|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.20464190|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.27842180|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.16869627|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.76636658|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.42962932|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.57486749|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.37213428|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.59663292|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.67157651|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.83600224|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.34149503|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.61138379|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.75110557|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.73671921|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.97487479|  PASSED  
             dab_dct| 256|     50000|       1|0.16638847|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.73614053|  PASSED  
        dab_filltree|  32|  15000000|       1|0.01079979|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.02883564|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.97114540|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.53249041|  PASSED  

real	51m6.422s
user	47m15.440s
sys	3m47.340s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3701720c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3701720c
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3701720c
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  +5.9  p =  5.5e-5   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3701720c
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-1)     R= +12.7  p =  5.2e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-2)     R=  +8.5  p =  3.6e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:(2,14-2)     R=  +9.1  p =  1.0e-7   suspicious       
  [Low1/32]FPF-14+6/16:all          R= +17.9  p =  2.7e-16    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +58.4  p =  8.9e-22    FAIL !!        
  ...and 127 test result(s) without anomalies


real	0m10.402s
user	0m10.052s
sys	0m0.336s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6e695b2b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6e695b2b
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6e695b2b
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6e695b2b
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-1)     R= +11.1  p =  1.4e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(1,14-2)     R=  +7.4  p =  2.8e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:(2,14-2)     R=  +7.5  p =  2.7e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:(3,14-3)     R=  +6.9  p =  7.6e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= +17.2  p =  1.2e-15    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +47.8  p =  3.9e-18    FAIL !         
  ...and 126 test result(s) without anomalies


real	0m10.323s
user	0m10.080s
sys	0m0.232s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7969b99f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7969b99f
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7969b99f
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7969b99f
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-1)     R= +12.2  p =  1.6e-10   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-2)     R=  +8.0  p =  8.6e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:(2,14-2)     R=  +6.7  p =  1.3e-5   unusual          
  [Low1/32]FPF-14+6/16:(3,14-3)     R=  +6.5  p =  1.7e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= +18.1  p =  1.9e-16    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +51.8  p =  1.6e-19    FAIL !         
  ...and 126 test result(s) without anomalies


real	0m10.530s
user	0m10.252s
sys	0m0.256s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf8463939
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf8463939
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-3,T)                  R=  +7.7  p =  1.9e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf8463939
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf8463939
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf8463939
length= 1 gigabyte (2^30 bytes), time= 18.8 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  6.5e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf8463939
length= 2 gigabytes (2^31 bytes), time= 36.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +7.2  p =  5.8e-4   mildly suspicious
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -6.6  p =1-9.3e-6   unusual          
  [Low1/32]FPF-14+6/16:(1,14-0)     R= +16.6  p =  5.8e-15    FAIL           
  [Low1/32]FPF-14+6/16:(2,14-1)     R= +10.8  p =  2.5e-9   very suspicious  
  [Low1/32]FPF-14+6/16:all          R= +13.7  p =  2.4e-12    FAIL           
  [Low1/32]FPF-14+6/16:all2         R= +87.8  p =  1.7e-33    FAIL !!!       
  ...and 142 test result(s) without anomalies


real	0m37.069s
user	0m36.236s
sys	0m0.796s
*/
