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
/// @created on 2019-12-18 01:27:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 7004d178-1b28-4aeb-8b0f-c450cfd08238                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib20;
/* TEST00
time ./MRndCPP 
882943558
928722906
1512116950
1362361018
1782404974
3803347790
10534875552858288248

real	0m51.636s
user	0m51.548s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.20e+07  |1960132292|
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
./test.sh: line 7:   544 Broken pipe             ./MRndCPP
       545 Killed                  | dieharder -g200 -a -k2 > test.txt

real	210m21.033s
user	206m30.176s
sys	3m36.544s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb747ea87
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb747ea87
length= 256 megabytes (2^28 bytes), time= 3.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18330512 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9757368 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6554210 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379274 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726487 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116092 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709745 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357524 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222811 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111803 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68203  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40574  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+9089139 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6681763 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26200074 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=  -9.0  p =1-5.5e-8   suspicious       
  FPF-14+6/16:(1,14-0)              R=+10172425 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+10170735 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-0)              R= -80.0  p =1-3.1e-73    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -55.1  p =1-5.0e-56    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -39.6  p =1-8.0e-39    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -48.1  p =1-3.1e-47    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -33.8  p =1-7.6e-31    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -23.4  p =1-3.2e-24    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -16.6  p =1-3.8e-17    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -21.2  p =1-4.2e-22    FAIL !!        
  FPF-14+6/16:(11,14-6)             R= -13.3  p =1-1.6e-14    FAIL           
  FPF-14+6/16:(12,14-7)             R=  -9.8  p =1-9.3e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:(14,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+9800005 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+54247046684501 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+43034930 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4525  p~=  2e-2407    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897134 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138837 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087682 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076245 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691815 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351162 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502939 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943487 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552746 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R=+5087155 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+5813995 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+15091882 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1773252 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+838148 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498977 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242351 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118686 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71158  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868131 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354161 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690856 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+16445984 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m4.454s
user	0m4.252s
sys	0m0.156s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdacaaf1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdacaaf1
length= 256 megabytes (2^28 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18330470 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9757502 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6554342 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379280 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726494 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116082 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709719 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357522 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222804 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111810 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68200  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40574  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+9089156 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6681760 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26200060 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -10.6  p =1-1.9e-9   very suspicious  
  FPF-14+6/16:(1,14-0)              R=+10172430 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+10170730 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-0)              R= -79.5  p =1-9.6e-73    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -55.1  p =1-5.0e-56    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -39.6  p =1-9.5e-39    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -47.8  p =1-6.2e-47    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -35.7  p =1-1.3e-32    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -23.5  p =1-2.1e-24    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -17.4  p =1-6.2e-18    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -19.1  p =1-8.0e-20    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -14.3  p =1-1.2e-15    FAIL           
  FPF-14+6/16:(12,14-7)             R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:(14,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+9798197 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+52524470304965 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+43035154 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4525  p~=  2e-2407    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897103 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138818 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087704 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076246 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691815 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351162 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502940 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943487 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552738 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R=+5087154 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+5813994 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+15091882 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1773252 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+838148 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498977 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242351 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118686 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71158  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868131 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354161 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690856 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+16445984 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  
  ...and 1 test result(s) without anomalies


real	0m4.278s
user	0m4.136s
sys	0m0.128s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4cc9a4a8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4cc9a4a8
length= 256 megabytes (2^28 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18330454 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9757347 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6554224 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379220 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726450 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116029 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709684 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357529 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222804 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111803 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68200  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40574  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+9089137 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6681771 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26200118 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -10.6  p =1-1.7e-9   very suspicious  
  FPF-14+6/16:(1,14-0)              R=+10172408 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+10170725 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-0)              R= -79.1  p =1-1.9e-72    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -56.3  p =1-2.9e-57    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -39.0  p =1-3.4e-38    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -49.4  p =1-1.5e-48    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -35.0  p =1-6.6e-32    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -25.3  p =1-3.1e-26    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -16.6  p =1-3.8e-17    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -20.4  p =1-3.1e-21    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -14.3  p =1-1.2e-15    FAIL           
  FPF-14+6/16:(12,14-7)             R=  -9.5  p =1-1.8e-10   VERY SUSPICIOUS 
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:(14,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+9799990 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+54246894173987 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+43034858 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4525  p~=  2e-2407    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897040 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138806 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087690 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076245 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691811 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351160 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502940 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943487 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552743 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R=+5087152 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+5813992 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+15091882 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1773252 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+838148 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498977 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242351 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118686 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71158  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868131 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354161 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690856 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+16445984 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m4.269s
user	0m4.112s
sys	0m0.152s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1c624d57
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1c624d57
length= 256 megabytes (2^28 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18330642 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9757457 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6554392 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379268 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726447 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116072 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709720 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357523 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222802 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111803 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68200  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40574  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+9089163 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6681769 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26200097 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=  -9.3  p =1-2.9e-8   very suspicious  
  FPF-14+6/16:(1,14-0)              R=+10172417 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+10170731 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-0)              R= -78.5  p =1-6.9e-72    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -57.0  p =1-6.0e-58    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -42.3  p =1-1.6e-41    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -48.8  p =1-5.8e-48    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -34.3  p =1-2.6e-31    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -24.6  p =1-1.6e-25    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -19.8  p =1-1.4e-20    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -20.2  p =1-5.0e-21    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -15.3  p =1-9.3e-17    FAIL !         
  FPF-14+6/16:(12,14-7)             R=  -8.6  p =1-2.7e-9   very suspicious  
  FPF-14+6/16:(13,14-8)             R=  -6.2  p =1-4.9e-7   mildly suspicious
  FPF-14+6/16:all                   R=+9803625 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+56150954540584 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+43034964 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4525  p~=  2e-2407    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897101 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138837 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087706 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076246 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691817 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351162 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502939 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943488 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552747 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R=+5087155 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+5813995 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+15091882 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1773252 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+838148 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498977 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242351 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118686 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71158  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868131 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354161 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690856 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+16445984 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m4.262s
user	0m4.116s
sys	0m0.132s
*/
