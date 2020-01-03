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
/// @created on 2019-12-18 01:27:28 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f8b7c0bd-21d4-4dfb-9c91-41312860a097                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib4;
/* TEST00
time ./MRndCPP 
1693894064
3710634526
3832168964
4100270210
336300570
3037484652
458265897513980712

real	0m51.636s
user	0m51.576s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.18e+07  |2591577099|
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
./test.sh: line 7: 17386 Broken pipe             ./MRndCPP
     17387 Segmentation fault      (core dumped) | dieharder -g200 -a -k2 > test.txt

real	187m20.862s
user	183m23.844s
sys	3m43.312s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9d116aed
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9d116aed
length= 256 megabytes (2^28 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+27513161 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+13004527 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+8029582 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3900200 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1910255 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1198510 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+746195 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+370328 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+228352 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+113751 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+69028  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40936  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20441  p =  1e-5188    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11734  p =  8e-2638    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5853  p =  3e-1316    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+10010761 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6680569 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26195088 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+10167594 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+10170353 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R= -25.3  p =1-5.4e-23    FAIL !!        
  FPF-14+6/16:(3,14-0)              R= -56.9  p =1-5.6e-52    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -41.4  p =1-6.2e-42    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -28.5  p =1-8.5e-28    FAIL !!        
  FPF-14+6/16:(6,14-2)              R= -40.8  p =1-6.2e-40    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -28.3  p =1-9.2e-26    FAIL !!        
  FPF-14+6/16:(8,14-4)              R= -21.2  p =1-7.3e-22    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -15.2  p =1-1.4e-15    FAIL           
  FPF-14+6/16:(10,14-5)             R= -17.6  p =1-3.6e-18    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -12.0  p =1-5.3e-13    FAIL           
  FPF-14+6/16:(12,14-7)             R=  -8.8  p =1-1.3e-9   very suspicious  
  FPF-14+6/16:(13,14-8)             R=  -6.2  p =1-4.9e-7   mildly suspicious
  FPF-14+6/16:all                   R=+9167044 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+54219244554062 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+14330840 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +3535  p~=  1e-1880    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5894401 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3137445 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2086748 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1075756 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691473 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+350986 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219905 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110787 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67779  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502078 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943190 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8551400 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= -52.0  p =1-1.6e-47    FAIL !!!       
  [Low8/32]FPF-14+6/16:(1,14-0)     R=+5086223 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -52.1  p =1-6.4e-53    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -36.4  p =1-1.3e-35    FAIL !!!       
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -47.6  p =1-9.5e-47    FAIL !!!       
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -34.3  p =1-2.6e-31    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -22.1  p =1-7.0e-23    FAIL !!        
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -16.5  p =1-4.6e-17    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -20.2  p =1-5.0e-21    FAIL !         
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -13.1  p =1-2.6e-14    FAIL           
  [Low8/32]FPF-14+6/16:(10,14-7)    R=  -9.3  p =1-3.9e-10  very suspicious  
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -6.2  p =1-4.9e-7   mildly suspicious
  [Low8/32]FPF-14+6/16:all          R=+3210029 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+7285073133665 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+15078150 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1772666 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+837876 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498809 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242279 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118658 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71152  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+867938 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354111 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690617 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -39.1  p =1-2.5e-38    FAIL !!!       
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -48.0  p =1-3.8e-47    FAIL !!!       
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -35.1  p =1-5.5e-32    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -24.4  p =1-2.8e-25    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -17.7  p =1-2.7e-18    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -19.7  p =1-2.1e-20    FAIL !         
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -14.3  p =1-1.2e-15    FAIL           
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:(9,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=-174.0  p =1-3.1e-158   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2388  p =  1.9e-686   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:cross        R=+16441614 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  
  ...and 2 test result(s) without anomalies


real	0m4.339s
user	0m4.140s
sys	0m0.192s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa958d3a7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa958d3a7
length= 256 megabytes (2^28 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+27513135 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+13004518 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+8029628 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3900222 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1910286 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1198524 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+746193 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+370339 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+228365 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+113753 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+69028  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40936  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20441  p =  1e-5188    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11734  p =  8e-2638    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5853  p =  3e-1316    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+10010757 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6680572 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26195105 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+10167564 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+10170339 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R= -25.9  p =1-1.5e-23    FAIL !!        
  FPF-14+6/16:(3,14-0)              R= -55.9  p =1-4.1e-51    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -42.0  p =1-1.6e-42    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -30.9  p =1-3.3e-30    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -40.9  p =1-4.3e-40    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -29.1  p =1-1.5e-26    FAIL !!        
  FPF-14+6/16:(8,14-4)              R= -20.9  p =1-1.5e-21    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -15.1  p =1-1.5e-15    FAIL           
  FPF-14+6/16:(10,14-5)             R= -17.5  p =1-4.6e-18    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -11.6  p =1-1.4e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(12,14-7)             R=  -9.5  p =1-1.8e-10   VERY SUSPICIOUS 
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+9166179 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+52497331707511 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+14330957 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +3535  p~=  1e-1880    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5894436 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3137482 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2086768 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1075768 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691471 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+350990 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219908 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110786 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67779  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502074 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943191 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8551416 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= -51.3  p =1-7.9e-47    FAIL !!!       
  [Low8/32]FPF-14+6/16:(1,14-0)     R=+5086222 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -52.1  p =1-6.7e-53    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -37.1  p =1-2.6e-36    FAIL !!!       
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -47.7  p =1-7.9e-47    FAIL !!!       
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -34.8  p =1-9.4e-32    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -23.6  p =1-1.8e-24    FAIL !!        
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -16.4  p =1-7.4e-17    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -18.9  p =1-1.5e-19    FAIL !         
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -12.0  p =1-5.3e-13    FAIL           
  [Low8/32]FPF-14+6/16:(10,14-7)    R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -5.1  p =1-1.2e-5   unusual          
  [Low8/32]FPF-14+6/16:all          R=+3210505 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+7582540758234 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+15078083 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1772666 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+837869 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498803 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242277 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118658 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71152  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+867939 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354111 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690615 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -37.8  p =1-4.7e-37    FAIL !!!       
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -49.2  p =1-2.7e-48    FAIL !!!       
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -34.4  p =1-2.1e-31    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -24.2  p =1-4.3e-25    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -19.7  p =1-2.1e-20    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -20.2  p =1-5.0e-21    FAIL !         
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -13.9  p =1-3.7e-15    FAIL           
  [Low1/32]FPF-14+6/16:(7,14-7)     R=  -9.3  p =1-3.9e-10  very suspicious  
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=-174.1  p =1-2.9e-158   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2307  p =  1.7e-692   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:cross        R=+16441615 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  
  ...and 3 test result(s) without anomalies


real	0m4.428s
user	0m4.300s
sys	0m0.120s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x563374b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x563374b
length= 256 megabytes (2^28 bytes), time= 3.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+27513146 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+13004500 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+8029589 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3900173 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1910279 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1198521 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+746202 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+370335 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+228364 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+113748 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+69029  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40936  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20441  p =  1e-5188    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11734  p =  8e-2638    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5853  p =  3e-1316    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+10010770 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6680576 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26195118 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+10167589 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+10170357 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R= -26.2  p =1-8.1e-24    FAIL !!        
  FPF-14+6/16:(3,14-0)              R= -57.1  p =1-3.3e-52    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -41.5  p =1-5.3e-42    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -28.2  p =1-1.6e-27    FAIL !!        
  FPF-14+6/16:(6,14-2)              R= -41.9  p =1-4.5e-41    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -28.2  p =1-1.0e-25    FAIL !!        
  FPF-14+6/16:(8,14-4)              R= -19.5  p =1-4.6e-20    FAIL !         
  FPF-14+6/16:(9,14-5)              R= -14.2  p =1-1.5e-14    FAIL           
  FPF-14+6/16:(10,14-5)             R= -19.1  p =1-8.0e-20    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -13.1  p =1-2.6e-14    FAIL           
  FPF-14+6/16:(12,14-7)             R=  -8.8  p =1-1.3e-9   very suspicious  
  FPF-14+6/16:(13,14-8)             R=  -5.6  p =1-2.7e-6   unusual          
  FPF-14+6/16:all                   R=+9168745 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+56122245321376 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+14331098 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +3535  p~=  1e-1880    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5894402 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3137447 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2086741 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1075766 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691475 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+350987 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219920 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110786 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67779  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502075 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943185 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8551380 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= -52.9  p =1-2.7e-48    FAIL !!!       
  [Low8/32]FPF-14+6/16:(1,14-0)     R=+5086226 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -52.2  p =1-5.5e-53    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -35.0  p =1-3.4e-34    FAIL !!!       
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -48.2  p =1-2.3e-47    FAIL !!!       
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -34.2  p =1-3.5e-31    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -23.2  p =1-5.5e-24    FAIL !!        
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -16.7  p =1-3.4e-17    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -19.4  p =1-4.1e-20    FAIL !         
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -12.6  p =1-1.0e-13    FAIL           
  [Low8/32]FPF-14+6/16:(10,14-7)    R=  -7.7  p =1-3.2e-8   suspicious       
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -6.2  p =1-4.9e-7   mildly suspicious
  [Low8/32]FPF-14+6/16:(12,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:all          R=+3208122 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+7020080016206 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+15078280 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1772665 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+837874 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498805 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242280 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118658 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71152  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+867936 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354111 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690615 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -37.4  p =1-1.3e-36    FAIL !!!       
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -50.1  p =1-3.5e-49    FAIL !!!       
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -35.3  p =1-3.4e-32    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -25.0  p =1-5.2e-26    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -16.9  p =1-1.7e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -18.1  p =1-8.9e-19    FAIL !         
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -13.9  p =1-3.7e-15    FAIL           
  [Low1/32]FPF-14+6/16:(7,14-7)     R=  -9.3  p =1-3.9e-10  very suspicious  
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=-173.9  p =1-3.7e-158   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2407  p =  5.1e-692   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:cross        R=+16441614 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  
  ...and 1 test result(s) without anomalies


real	0m4.424s
user	0m4.248s
sys	0m0.160s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x14ed93b3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x14ed93b3
length= 256 megabytes (2^28 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+27513107 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+13004535 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+8029583 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3900192 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1910255 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1198504 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+746197 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+370334 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+228362 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+113748 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+69028  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40936  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20441  p =  1e-5188    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11734  p =  8e-2638    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5853  p =  3e-1316    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+10010774 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6680585 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26195125 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+10167574 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+10170369 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R= -26.0  p =1-1.2e-23    FAIL !!        
  FPF-14+6/16:(3,14-0)              R= -55.2  p =1-1.7e-50    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -43.1  p =1-1.0e-43    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -29.2  p =1-1.8e-28    FAIL !!        
  FPF-14+6/16:(6,14-2)              R= -41.4  p =1-1.5e-40    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -29.0  p =1-1.8e-26    FAIL !!        
  FPF-14+6/16:(8,14-4)              R= -21.1  p =1-9.0e-22    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -14.4  p =1-1.0e-14    FAIL           
  FPF-14+6/16:(10,14-5)             R= -18.0  p =1-1.2e-18    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -11.5  p =1-2.3e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(12,14-7)             R=  -8.4  p =1-4.3e-9   very suspicious  
  FPF-14+6/16:all                   R=+9170434 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+56122230588850 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+14330807 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +3535  p~=  1e-1880    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5894344 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3137385 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2086744 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1075764 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691480 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+350988 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219904 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110795 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67779  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502077 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943188 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8551394 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= -52.0  p =1-1.5e-47    FAIL !!!       
  [Low8/32]FPF-14+6/16:(1,14-0)     R=+5086241 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -50.9  p =1-1.2e-51    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -36.1  p =1-2.7e-35    FAIL !!!       
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -48.6  p =1-9.7e-48    FAIL !!!       
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -33.3  p =1-2.0e-30    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -23.3  p =1-3.9e-24    FAIL !!        
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -16.7  p =1-3.4e-17    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -18.9  p =1-1.5e-19    FAIL !         
  [Low8/32]FPF-14+6/16:(10,14-7)    R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:all          R=+3217954 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+7582595526485 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+15078007 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1772667 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+837875 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498807 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242276 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118660 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71155  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+867939 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354111 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690615 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -37.9  p =1-4.1e-37    FAIL !!!       
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -49.1  p =1-3.0e-48    FAIL !!!       
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -34.9  p =1-7.3e-32    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -25.4  p =1-2.4e-26    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -17.9  p =1-1.5e-18    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -18.0  p =1-1.2e-18    FAIL !         
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -15.3  p =1-9.3e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(7,14-7)     R=  -9.8  p =1-9.3e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(9,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=-174.0  p =1-3.0e-158   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2421  p =  5.4e-696   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:cross        R=+16441615 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  
  ...and 2 test result(s) without anomalies


real	0m4.323s
user	0m4.180s
sys	0m0.136s
*/
