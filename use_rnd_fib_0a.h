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
801654680
1774008888
3635096536
3460318424
3572117208
375826168
7153116478471601472

real	0m48.671s
user	0m48.620s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.22e+07  |2755049526|
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
./test.sh: line 7: 10910 Broken pipe             ./MRndCPP
     10911 Segmentation fault      (core dumped) | dieharder -g200 -a -k2 > test.txt

real	186m59.545s
user	182m41.820s
sys	3m55.368s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1e13259f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1e13259f
length= 256 megabytes (2^28 bytes), time= 3.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18329546 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9756682 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6553413 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3378678 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726114 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115747 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709491 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357406 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222716 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111771 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68176  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40574  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+7872978 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6682030 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26201165 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+10170615 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -49.9  p =1-1.3e-45    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R= -74.1  p =1-8.3e-68    FAIL !!!!      
  FPF-14+6/16:(3,14-0)              R=+10173016 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-1)              R= -66.4  p =1-1.1e-67    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -47.7  p =1-8.5e-47    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -53.8  p =1-6.2e-53    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -39.2  p =1-8.1e-36    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -28.0  p =1-3.5e-29    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -18.0  p =1-1.2e-18    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -22.1  p =1-5.7e-23    FAIL !!        
  FPF-14+6/16:(11,14-6)             R= -13.5  p =1-1.0e-14    FAIL           
  FPF-14+6/16:(12,14-7)             R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(14,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+9804183 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+56153625078846 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+43051694 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4697  p~=  5e-2499    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897151 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138801 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087651 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076214 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691793 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351150 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2503134 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943572 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8553133 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+8722296 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+11629920 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+30183767 p = 0           FAIL !!!!!!!!  
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


real	0m4.387s
user	0m4.184s
sys	0m0.196s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1d8b96a1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1d8b96a1
length= 256 megabytes (2^28 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18329569 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9756694 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6553410 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3378668 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726110 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115766 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709500 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357401 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222732 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111762 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68176  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40574  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+7872936 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6682022 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26201163 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+10170619 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -50.0  p =1-1.1e-45    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R= -74.6  p =1-2.6e-68    FAIL !!!!      
  FPF-14+6/16:(3,14-0)              R=+10173017 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-1)              R= -67.2  p =1-1.7e-68    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -47.6  p =1-9.5e-47    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -53.8  p =1-7.1e-53    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -38.3  p =1-5.8e-35    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -26.2  p =1-3.2e-27    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -19.1  p =1-8.0e-20    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -21.2  p =1-4.2e-22    FAIL !!        
  FPF-14+6/16:(11,14-6)             R= -15.3  p =1-9.3e-17    FAIL !         
  FPF-14+6/16:all                   R=+9813270 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+58273401078347 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+43051714 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4697  p~=  5e-2499    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897144 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138814 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087657 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076214 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691788 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351148 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2503132 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943573 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8553124 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+8722286 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+11629911 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+30183767 p = 0           FAIL !!!!!!!!  
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


real	0m4.270s
user	0m4.096s
sys	0m0.168s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8232d09d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8232d09d
length= 256 megabytes (2^28 bytes), time= 3.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18329591 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9756672 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6553362 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3378699 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726075 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115764 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709477 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357403 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222716 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111766 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68176  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40574  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+7872957 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6682030 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26201171 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+10170600 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -50.7  p =1-2.6e-46    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R= -73.8  p =1-1.4e-67    FAIL !!!!      
  FPF-14+6/16:(3,14-0)              R=+10173013 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-1)              R= -67.9  p =1-3.7e-69    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -49.1  p =1-3.5e-48    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -54.3  p =1-2.4e-53    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -38.9  p =1-1.6e-35    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -25.8  p =1-7.5e-27    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -19.8  p =1-1.4e-20    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -19.2  p =1-5.9e-20    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -14.8  p =1-3.7e-16    FAIL           
  FPF-14+6/16:(12,14-7)             R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  FPF-14+6/16:all                   R=+9805993 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+56153523466575 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+43051873 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4697  p~=  5e-2499    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897141 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138807 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087650 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076213 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691788 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351155 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2503136 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943572 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8553130 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+8722290 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+11629915 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+30183767 p = 0           FAIL !!!!!!!!  
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


real	0m4.245s
user	0m4.120s
sys	0m0.112s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x631ad2a8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x631ad2a8
length= 256 megabytes (2^28 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18329562 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9756620 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6553394 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3378647 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726066 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115762 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709461 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357398 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222717 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111766 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68176  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40574  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+7872954 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6682025 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26201149 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+10170615 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -49.1  p =1-7.6e-45    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R= -75.6  p =1-3.1e-69    FAIL !!!!      
  FPF-14+6/16:(3,14-0)              R=+10173016 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-1)              R= -65.4  p =1-1.4e-66    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -47.6  p =1-8.9e-47    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -53.8  p =1-7.6e-53    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -38.0  p =1-1.0e-34    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -28.0  p =1-3.5e-29    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -18.7  p =1-2.0e-19    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -21.2  p =1-4.2e-22    FAIL !!        
  FPF-14+6/16:(11,14-6)             R= -14.1  p =1-1.9e-15    FAIL           
  FPF-14+6/16:(12,14-7)             R=  -9.3  p =1-3.9e-10  very suspicious  
  FPF-14+6/16:(13,14-8)             R=  -5.3  p =1-8.0e-6   unusual          
  FPF-14+6/16:all                   R=+9804180 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+56153626192811 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+43051542 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +4697  p~=  5e-2499    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897153 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138810 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087654 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076213 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691790 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351153 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2503132 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943572 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8553136 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+8722296 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+11629920 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+30183767 p = 0           FAIL !!!!!!!!  
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


real	0m4.259s
user	0m4.084s
sys	0m0.168s
*/
