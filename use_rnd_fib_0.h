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
/// @created on 2019-12-08 02:57:29 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 4f1a1ab5-c27a-40d1-a81b-84e2338f829b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib0;
/* TEST00
time ./MRndCPP 
1126397969
799877916
4177994716
1113678843
743923761
2732053447
12786350615040042957

real	0m51.547s
user	0m51.492s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.20e+07  | 115122915|
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
./test.sh: line 7:  9484 Broken pipe             ./MRndCPP
      9485 Killed                  | dieharder -g200 -a -k2 > test.txt

real	206m9.647s
user	202m20.672s
sys	3m35.080s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x80b7816e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x80b7816e
length= 256 megabytes (2^28 bytes), time= 3.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18337667 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9760512 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6555766 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379666 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726493 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115991 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709625 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357477 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222778 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111804 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68216  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+8508163 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683068 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26205000 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -28.2  p =1-1.3e-25    FAIL !!        
  FPF-14+6/16:(1,14-0)              R= -53.6  p =1-6.0e-49    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R=+18894518 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-0)              R= -92.4  p =1-1.1e-84    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -65.2  p =1-2.1e-66    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -46.6  p =1-9.8e-46    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -54.5  p =1-1.3e-53    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -37.5  p =1-3.3e-34    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -26.2  p =1-3.2e-27    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -19.9  p =1-1.0e-20    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -20.6  p =1-2.3e-21    FAIL !!        
  FPF-14+6/16:(11,14-6)             R= -15.3  p =1-9.3e-17    FAIL !         
  FPF-14+6/16:(12,14-7)             R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+10122164 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+96877412793367 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+86100478 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5896611 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138542 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087474 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076127 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691731 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351118 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219996 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110822 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502931 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943533 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552842 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=-100.3  p =1-6.5e-92    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(1,14-0)     R=-106.5  p =1-1.3e-97    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(2,14-1)     R=+6680968 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -50.4  p =1-1.8e-49    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -56.9  p =1-5.9e-56    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -40.1  p =1-1.3e-36    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -28.6  p =1-7.6e-30    FAIL !!!       
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -19.7  p =1-2.1e-20    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -21.2  p =1-4.2e-22    FAIL !!        
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -5.6  p =1-2.7e-6   unusual          
  [Low8/32]FPF-14+6/16:all          R=+3222888 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+13144312061398 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+22633132 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1773147 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+838114 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498975 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242351 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118686 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71158  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868085 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354149 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690799 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -56.0  p =1-4.3e-55    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -58.5  p =1-1.3e-57    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -41.5  p =1-6.8e-38    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -29.6  p =1-8.1e-31    FAIL !!!       
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -20.2  p =1-5.0e-21    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -19.9  p =1-1.0e-20    FAIL !         
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -14.8  p =1-3.7e-16    FAIL           
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=-126.6  p =1-4.7e-115   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +3952  p =  5e-1077    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+16444885 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m4.532s
user	0m4.304s
sys	0m0.192s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4a2b98a9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4a2b98a9
length= 256 megabytes (2^28 bytes), time= 3.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18337650 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9760519 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6555770 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379680 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726512 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115989 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709624 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357474 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222782 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111804 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68216  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+8508158 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683068 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26204996 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -27.6  p =1-4.2e-25    FAIL !!        
  FPF-14+6/16:(1,14-0)              R= -52.6  p =1-4.8e-48    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R=+18894508 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-0)              R= -92.9  p =1-4.6e-85    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -65.2  p =1-1.9e-66    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -46.5  p =1-1.3e-45    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -52.6  p =1-9.8e-52    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -38.8  p =1-1.8e-35    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -25.4  p =1-2.4e-26    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -17.1  p =1-1.2e-17    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -21.2  p =1-4.2e-22    FAIL !!        
  FPF-14+6/16:(11,14-6)             R= -14.8  p =1-3.7e-16    FAIL           
  FPF-14+6/16:(12,14-7)             R=  -9.3  p =1-3.9e-10  very suspicious  
  FPF-14+6/16:all                   R=+10125905 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+100534341183810 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+86100307 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5896623 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138548 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087478 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076128 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691726 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351118 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219995 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110822 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502932 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943532 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552842 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= -98.0  p =1-8.6e-90    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(1,14-0)     R=-108.8  p =1-9.5e-100   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(2,14-1)     R=+6680971 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -50.5  p =1-1.2e-49    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -54.7  p =1-9.7e-54    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -40.1  p =1-1.3e-36    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -28.8  p =1-5.5e-30    FAIL !!!       
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -20.6  p =1-2.3e-21    FAIL !!        
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -21.2  p =1-4.2e-22    FAIL !!        
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -14.3  p =1-1.2e-15    FAIL           
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:(12,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:all          R=+3213256 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+11999068792249 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+22633030 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1773117 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+838095 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498951 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242346 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118686 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71158  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868086 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354149 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690799 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -54.9  p =1-5.7e-54    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -59.0  p =1-5.1e-58    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -41.8  p =1-3.3e-38    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -29.3  p =1-1.4e-30    FAIL !!!       
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -20.6  p =1-2.3e-21    FAIL !!        
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -21.2  p =1-4.2e-22    FAIL !!        
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -15.3  p =1-9.3e-17    FAIL !         
  [Low1/32]FPF-14+6/16:all          R=-126.6  p =1-5.0e-115   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +4215  p =  1e-1089    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+16444884 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m4.433s
user	0m4.248s
sys	0m0.176s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6ccb3c94
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6ccb3c94
length= 256 megabytes (2^28 bytes), time= 3.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18337662 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9760512 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6555753 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379650 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726518 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115976 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709621 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357475 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222783 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111804 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68216  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+8508162 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683069 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26205020 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -27.7  p =1-3.5e-25    FAIL !!        
  FPF-14+6/16:(1,14-0)              R= -53.6  p =1-6.1e-49    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R=+18894516 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-0)              R= -93.3  p =1-1.8e-85    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -66.4  p =1-1.1e-67    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -46.3  p =1-2.1e-45    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -52.9  p =1-5.4e-52    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -37.4  p =1-3.8e-34    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -27.5  p =1-1.1e-28    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -18.1  p =1-8.9e-19    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -20.2  p =1-5.0e-21    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -15.3  p =1-9.3e-17    FAIL !         
  FPF-14+6/16:(12,14-7)             R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  FPF-14+6/16:all                   R=+10125904 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+100534417614319 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+86100161 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5896628 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138550 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087478 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076127 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691726 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351116 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219995 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110822 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502932 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943533 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552846 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= -98.0  p =1-8.4e-90    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(1,14-0)     R=-107.6  p =1-1.2e-98    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(2,14-1)     R=+6680973 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -50.6  p =1-9.8e-50    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -56.2  p =1-3.0e-55    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -39.5  p =1-4.5e-36    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -29.1  p =1-2.5e-30    FAIL !!!       
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -19.4  p =1-4.1e-20    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -22.1  p =1-5.7e-23    FAIL !!        
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -14.3  p =1-1.2e-15    FAIL           
  [Low8/32]FPF-14+6/16:(10,14-7)    R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:all          R=+3213256 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+12532626978596 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+22632969 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1773122 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+838092 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498948 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242346 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118686 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71158  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868086 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354149 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690799 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -54.8  p =1-7.8e-54    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -59.0  p =1-4.6e-58    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -41.5  p =1-6.8e-38    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -28.9  p =1-4.4e-30    FAIL !!!       
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -21.2  p =1-4.2e-22    FAIL !!        
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -15.3  p =1-9.3e-17    FAIL !         
  [Low1/32]FPF-14+6/16:all          R=-124.6  p =1-3.0e-113   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +4323  p =  4e-1060    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+16444884 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  


real	0m4.386s
user	0m4.260s
sys	0m0.120s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5baf6980
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5baf6980
length= 256 megabytes (2^28 bytes), time= 3.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18337670 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9760541 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6555765 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379666 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726511 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115987 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709630 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357477 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222781 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111804 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68216  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+8508162 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683064 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26204993 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -27.7  p =1-3.8e-25    FAIL !!        
  FPF-14+6/16:(1,14-0)              R= -52.2  p =1-1.1e-47    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R=+18894513 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-0)              R= -91.2  p =1-1.4e-83    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -64.1  p =1-2.9e-65    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -46.5  p =1-1.2e-45    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -54.2  p =1-3.1e-53    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -38.5  p =1-3.8e-35    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -26.7  p =1-8.9e-28    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -19.0  p =1-1.0e-19    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -20.9  p =1-1.0e-21    FAIL !!        
  FPF-14+6/16:(11,14-6)             R= -13.9  p =1-3.7e-15    FAIL           
  FPF-14+6/16:(12,14-7)             R=  -8.1  p =1-8.5e-9   very suspicious  
  FPF-14+6/16:all                   R=+10124962 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+96877357510463 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+86099926 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5896622 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138549 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087473 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076125 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691727 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351117 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219996 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110822 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502935 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943534 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552847 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= -97.8  p =1-1.3e-89    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(1,14-0)     R=-107.9  p =1-7.7e-99    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(2,14-1)     R=+6680967 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -49.5  p =1-1.1e-48    FAIL !!!       
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -57.2  p =1-2.8e-56    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -40.8  p =1-2.6e-37    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -28.9  p =1-4.4e-30    FAIL !!!       
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -21.6  p =1-1.6e-22    FAIL !!        
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -21.2  p =1-4.2e-22    FAIL !!        
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -13.9  p =1-3.7e-15    FAIL           
  [Low8/32]FPF-14+6/16:(10,14-7)    R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:all          R=+3212295 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+11999056829148 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+22632985 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1773118 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+838092 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+498949 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+242351 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+118686 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+71158  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+41820  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20745  p =  7e-5266    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11858  p =  1e-2665    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5896  p =  5e-1326    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868086 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354149 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690799 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= -54.2  p =1-3.1e-53    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -59.0  p =1-4.6e-58    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -42.5  p =1-7.6e-39    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -29.8  p =1-4.4e-31    FAIL !!!       
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -20.9  p =1-1.0e-21    FAIL !!        
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -21.6  p =1-1.6e-22    FAIL !!        
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -15.3  p =1-9.3e-17    FAIL !         
  [Low1/32]FPF-14+6/16:all          R=-126.7  p =1-3.8e-115   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +4232  p =  4e-1094    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+16444884 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10916  p~=  3e-3287    FAIL !!!!!!!!  
  ...and 2 test result(s) without anomalies


real	0m4.431s
user	0m4.248s
sys	0m0.152s
*/
