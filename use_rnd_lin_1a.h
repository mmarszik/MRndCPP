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
/// @created on 2019-12-08 02:59:27 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token fc39ac9b-61c1-4572-a7a0-b05628f15f6e                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin1a;
/* TEST00
time ./MRndCPP 
2285045470
3732216744
1642583650
4144565644
2925228966
3831314224
4611756385024081920

real	0m14.106s
user	0m7.040s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.16e+07  | 266965462|
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
        diehard_sums|   0|       100|     100|0.15840807|  PASSED  
        diehard_runs|   0|    100000|     100|0.00000000|  FAILED  
        diehard_runs|   0|    100000|     100|0.00000002|  FAILED  
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
     rgb_kstest_test|   0|     10000|    1000|0.00000000|  FAILED  
     dab_bytedistrib|   0|  51200000|       1|0.00000000|  FAILED  
             dab_dct| 256|     50000|       1|0.00000000|  FAILED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.00000000|  FAILED  
        dab_filltree|  32|  15000000|       1|0.00000000|  FAILED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.00000000|  FAILED  
       dab_filltree2|   1|   5000000|       1|0.00000000|  FAILED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|1.00000000|  FAILED  

real	164m58.501s
user	161m3.252s
sys	3m33.196s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8bf2bbd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8bf2bbd
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+410377 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+84593  p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+74589  p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+82628  p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+37303  p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+36164  p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+28094  p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+10496  p =  6e-3595    FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+19830  p =  1e-6791    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+10672  p =  1e-3210    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +8952  p =  7e-2273    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+10993  p =  1e-2790    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +3656  p =  1.2e-822   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R= +2920  p =  3.4e-657   FAIL !!!!!!!   
  DC6-9x1Bytes-1                    R=+426250 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+3925076 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+15346641 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=-128.0  p =1-2.4e-117   FAIL !!!!!     
  FPF-14+6/16:(1,14-0)              R=-128.0  p =1-2.4e-117   FAIL !!!!!     
  FPF-14+6/16:(2,14-0)              R=+90727  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+64156  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+45368  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+45368  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+32084  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+22692  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+16054  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+12035  p =  4e-9977    FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R= +8518  p =  1e-6518    FAIL !!!!!!!!  
  FPF-14+6/16:(11,14-7)             R= +6035  p =  4e-4803    FAIL !!!!!!!!  
  FPF-14+6/16:(12,14-8)             R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  FPF-14+6/16:(13,14-8)             R= +2854  p =  1e-2053    FAIL !!!!!!!!  
  FPF-14+6/16:(14,14-9)             R= +2034  p =  4e-1281    FAIL !!!!!!!!  
  FPF-14+6/16:(15,14-10)            R= +1462  p =  1.7e-778   FAIL !!!!!!!   
  FPF-14+6/16:(16,14-11)            R= +1607  p =  2.9e-701   FAIL !!!!!!!   
  FPF-14+6/16:all                   R=+99219  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+4291210653 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+221.3  p =  1.5e-186   FAIL !!!!!!    
  BRank(12):128(4)                  R= +1855  p~=  1.1e-987   FAIL !!!!!!!   
  BRank(12):256(4)                  R= +5386  p~=  2e-2865    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +3834  p~=  3e-1155    FAIL !!!!!!!!  
  BRank(12):512(2)                  R= +9593  p~=  9e-2889    FAIL !!!!!!!!  
  BRank(12):768(1)                  R= +9862  p~=  1e-2969    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+23262  p~=  1e-7003    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+23983  p~=  9e-7221    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+3247411 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1469086 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+1026606 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+781907 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+382945 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+233930 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+115740 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+69900  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+41294  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+20560  p =  6e-5219    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R=+11783  p =  1e-2648    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +5870  p =  4e-1320    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+1156877 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1071106 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+5234255 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+1272022 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+726842 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+514018 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+363554 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+257197 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+144664 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+225720 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+1989424 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+907441551185 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7873851 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5085  p~=  4e-2705    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7553  p~=  1e-2274    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8053  p~=  2e-2425    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15377  p~=  5e-4630    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16363  p~=  1e-4926    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+1099294 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+519590 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+249477 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+121164 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+72212  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+42258  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+20899  p =  5e-5305    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11920  p =  1e-2679    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+483643 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223041 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888483 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+7961869 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m2.738s
user	0m2.580s
sys	0m0.136s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x66702102
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x66702102
length= 128 megabytes (2^27 bytes), time= 2.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+410377 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+124871 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+64590  p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+46278  p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+34300  p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+36734  p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+34278  p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+18639  p =  1e-6383    FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+16605  p =  5e-5687    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R= +8925  p =  4e-2685    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +5779  p =  1e-1467    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R= +4082  p =  5e-1037    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +4398  p =  2.7e-989   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R= +4382  p =  1.1e-985   FAIL !!!!!!!   
  DC6-9x1Bytes-1                    R=+426250 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+3925076 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+15346641 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=-128.0  p =1-2.4e-117   FAIL !!!!!     
  FPF-14+6/16:(1,14-0)              R=-128.0  p =1-2.4e-117   FAIL !!!!!     
  FPF-14+6/16:(2,14-0)              R=+90727  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+64156  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+45368  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+45368  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+32084  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+22692  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+16054  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+12035  p =  4e-9977    FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R= +8518  p =  1e-6518    FAIL !!!!!!!!  
  FPF-14+6/16:(11,14-7)             R= +6035  p =  4e-4803    FAIL !!!!!!!!  
  FPF-14+6/16:(12,14-8)             R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  FPF-14+6/16:(13,14-8)             R= +2854  p =  1e-2053    FAIL !!!!!!!!  
  FPF-14+6/16:(14,14-9)             R= +2034  p =  4e-1281    FAIL !!!!!!!!  
  FPF-14+6/16:(15,14-10)            R= +1462  p =  1.7e-778   FAIL !!!!!!!   
  FPF-14+6/16:(16,14-11)            R= +1607  p =  2.9e-701   FAIL !!!!!!!   
  FPF-14+6/16:all                   R=+99219  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+4291210665 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+221.3  p =  1.5e-186   FAIL !!!!!!    
  BRank(12):128(4)                  R= +1899  p~=  1e-1010    FAIL !!!!!!!!  
  BRank(12):256(4)                  R= +5300  p~=  1e-2819    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +3834  p~=  3e-1155    FAIL !!!!!!!!  
  BRank(12):512(2)                  R= +9623  p~=  6e-2898    FAIL !!!!!!!!  
  BRank(12):768(1)                  R= +9862  p~=  1e-2969    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+23262  p~=  1e-7003    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+23983  p~=  9e-7221    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+3261524 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1909843 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+1609820 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+781907 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+382945 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+233930 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+115740 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+69900  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+41294  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+20560  p =  6e-5219    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R=+11783  p =  1e-2648    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +5870  p =  4e-1320    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+1156877 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1071106 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+5234255 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+1798800 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+2312769 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7752715 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5085  p~=  4e-2705    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7553  p~=  1e-2274    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8053  p~=  2e-2425    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15377  p~=  5e-4630    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16363  p~=  1e-4926    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+1099294 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+519590 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+249477 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+121164 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+72212  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+42258  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+20899  p =  5e-5305    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11920  p =  1e-2679    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+483643 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223041 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888483 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+7961869 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m2.626s
user	0m2.556s
sys	0m0.064s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5a8d6216
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5a8d6216
length= 128 megabytes (2^27 bytes), time= 2.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+410377 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+124871 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+64590  p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+69921  p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+36024  p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+36066  p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+25041  p =  9e-9803    FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R= +9719  p =  6e-3329    FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+18921  p =  2e-6480    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R= +9223  p =  8e-2775    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +5108  p =  2e-1297    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R= +6800  p =  1e-1726    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +4397  p =  3.3e-989   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R= +2920  p =  3.4e-657   FAIL !!!!!!!   
  DC6-9x1Bytes-1                    R=+426250 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+3925076 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+15346641 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=-128.0  p =1-2.4e-117   FAIL !!!!!     
  FPF-14+6/16:(1,14-0)              R=-128.0  p =1-2.4e-117   FAIL !!!!!     
  FPF-14+6/16:(2,14-0)              R=+90727  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+64156  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+45368  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+45368  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+32084  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+22692  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+16054  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+12035  p =  4e-9977    FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R= +8518  p =  1e-6518    FAIL !!!!!!!!  
  FPF-14+6/16:(11,14-7)             R= +6035  p =  4e-4803    FAIL !!!!!!!!  
  FPF-14+6/16:(12,14-8)             R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  FPF-14+6/16:(13,14-8)             R= +2854  p =  1e-2053    FAIL !!!!!!!!  
  FPF-14+6/16:(14,14-9)             R= +2034  p =  4e-1281    FAIL !!!!!!!!  
  FPF-14+6/16:(15,14-10)            R= +1462  p =  1.7e-778   FAIL !!!!!!!   
  FPF-14+6/16:(16,14-11)            R= +1607  p =  2.9e-701   FAIL !!!!!!!   
  FPF-14+6/16:all                   R=+99219  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+4291210653 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+221.3  p =  1.5e-186   FAIL !!!!!!    
  BRank(12):128(4)                  R= +1899  p~=  1e-1010    FAIL !!!!!!!!  
  BRank(12):256(4)                  R= +5386  p~=  2e-2865    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +3834  p~=  3e-1155    FAIL !!!!!!!!  
  BRank(12):512(2)                  R= +9593  p~=  9e-2889    FAIL !!!!!!!!  
  BRank(12):768(1)                  R= +9862  p~=  1e-2969    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+23262  p~=  1e-7003    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+23983  p~=  9e-7221    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+3261524 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1909844 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+1609820 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+781907 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+382945 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+233930 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+115740 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+69900  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+41294  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+20560  p =  6e-5219    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R=+11783  p =  1e-2648    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +5870  p =  4e-1320    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+1156877 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1071106 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+5234255 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+1798800 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+2312769 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7752715 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5085  p~=  4e-2705    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7553  p~=  1e-2274    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8053  p~=  2e-2425    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15377  p~=  5e-4630    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16363  p~=  1e-4926    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+1099294 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+519590 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+249477 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+121164 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+72212  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+42258  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+20899  p =  5e-5305    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11920  p =  1e-2679    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+483643 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223041 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888483 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+7961869 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m2.630s
user	0m2.544s
sys	0m0.080s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf4440de0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf4440de0
length= 128 megabytes (2^27 bytes), time= 2.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+129668 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+132023 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+51218  p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+56720  p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+41441  p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+28883  p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+19750  p =  2e-7731    FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+21498  p =  6e-7363    FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+17272  p =  1e-5915    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+12700  p =  9e-3821    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +6529  p =  5e-1658    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R= +4071  p =  4e-1034    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +3656  p =  1.2e-822   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R= +4382  p =  1.1e-985   FAIL !!!!!!!   
  DC6-9x1Bytes-1                    R=+412502 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+3925076 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+15346641 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=-128.0  p =1-2.4e-117   FAIL !!!!!     
  FPF-14+6/16:(1,14-0)              R=-128.0  p =1-2.4e-117   FAIL !!!!!     
  FPF-14+6/16:(2,14-0)              R=+90727  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+64156  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+45368  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+45368  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+32084  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+22692  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+16054  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+12035  p =  4e-9977    FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R= +8518  p =  1e-6518    FAIL !!!!!!!!  
  FPF-14+6/16:(11,14-7)             R= +6035  p =  4e-4803    FAIL !!!!!!!!  
  FPF-14+6/16:(12,14-8)             R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  FPF-14+6/16:(13,14-8)             R= +2854  p =  1e-2053    FAIL !!!!!!!!  
  FPF-14+6/16:(14,14-9)             R= +2034  p =  4e-1281    FAIL !!!!!!!!  
  FPF-14+6/16:(15,14-10)            R= +1462  p =  1.7e-778   FAIL !!!!!!!   
  FPF-14+6/16:(16,14-11)            R= +1607  p =  2.9e-701   FAIL !!!!!!!   
  FPF-14+6/16:all                   R=+99219  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+4291210653 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+221.3  p =  1.5e-186   FAIL !!!!!!    
  BRank(12):128(4)                  R= +1942  p~=  1e-1033    FAIL !!!!!!!!  
  BRank(12):256(4)                  R= +5386  p~=  2e-2865    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +3834  p~=  3e-1155    FAIL !!!!!!!!  
  BRank(12):512(2)                  R= +9562  p~=  1e-2879    FAIL !!!!!!!!  
  BRank(12):768(1)                  R= +9862  p~=  1e-2969    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+23232  p~=  1e-6994    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+23983  p~=  9e-7221    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+2117442 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1998619 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+1313533 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+677138 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+345901 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+217691 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+109999 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+67430  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+40257  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+20194  p =  7e-5126    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R=+11634  p =  3e-2615    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +5817  p =  3e-1308    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+1135016 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1071106 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+5234255 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+1453551 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+1635261 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+3876356 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5085  p~=  4e-2705    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7553  p~=  1e-2274    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8053  p~=  2e-2425    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15377  p~=  5e-4630    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16363  p~=  1e-4926    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+732279 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+389751 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+203559 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+104928 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+65226  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+39325  p =  4e-9981    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+19863  p =  7e-5042    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11499  p =  7e-2585    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5769  p =  1e-1297    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+483643 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223041 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888483 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+545115 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+590546 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+530789 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  


real	0m2.648s
user	0m2.556s
sys	0m0.088s
*/
