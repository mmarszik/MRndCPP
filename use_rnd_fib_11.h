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
/// @created on 2019-12-18 01:25:54 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5b34f065-7a71-408b-8ae8-978990a405e6                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib11;
/* TEST00
time ./MRndCPP 
2630081059
3827609936
2233524310
1581687925
4233694015
4122322660
12116633425861812597

real	0m51.561s
user	0m51.508s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.18e+07  |3241098948|
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
./test.sh: line 7: 24806 Broken pipe             ./MRndCPP
     24807 Killed                  | dieharder -g200 -a -k2 > test.txt

real	207m29.963s
user	203m33.056s
sys	3m33.476s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2678400b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2678400b
length= 256 megabytes (2^28 bytes), time= 3.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18338517 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9761114 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6556299 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379934 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726650 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116129 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709719 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357520 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222807 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111810 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68212  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+7876008 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683099 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26205089 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18894213 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -53.8  p =1-4.0e-49    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R= -79.0  p =1-2.5e-72    FAIL !!!!      
  FPF-14+6/16:(3,14-0)              R= -97.6  p =1-2.0e-89    FAIL !!!!!     
  FPF-14+6/16:(4,14-1)              R= -68.3  p =1-1.4e-69    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -47.8  p =1-6.1e-47    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -54.9  p =1-6.3e-54    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -38.6  p =1-2.9e-35    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -27.2  p =1-2.3e-28    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -19.8  p =1-1.4e-20    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -20.6  p =1-2.3e-21    FAIL !!        
  FPF-14+6/16:(11,14-6)             R= -14.8  p =1-3.7e-16    FAIL           
  FPF-14+6/16:(13,14-8)             R=  -6.2  p =1-4.9e-7   mildly suspicious
  FPF-14+6/16:all                   R=+8862522 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+96874289632503 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28694324 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5896571 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138539 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087471 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076128 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691732 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351124 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220009 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502907 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943521 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552755 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5087250 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R=-105.0  p =1-3.5e-96    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -74.5  p =1-5.7e-76    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -52.9  p =1-4.9e-52    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -57.6  p =1-1.0e-56    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -40.2  p =1-9.7e-37    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -27.8  p =1-5.7e-29    FAIL !!        
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -21.6  p =1-1.6e-22    FAIL !!        
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -21.2  p =1-4.2e-22    FAIL !!        
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -15.3  p =1-9.3e-17    FAIL !         
  [Low8/32]FPF-14+6/16:all          R=+3015969 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+8309614878991 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7543012 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1181064 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628633 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+407100 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209866 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107204 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868068 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354145 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690778 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090219 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -58.1  p =1-3.8e-57    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -41.0  p =1-1.9e-37    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -27.2  p =1-2.9e-28    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -19.9  p =1-1.0e-20    FAIL !         
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -15.3  p =1-9.3e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(7,14-7)     R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all          R=+685337 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+407386412421 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1027500 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 1 test result(s) without anomalies


real	0m4.461s
user	0m4.308s
sys	0m0.124s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x16a09f4a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x16a09f4a
length= 256 megabytes (2^28 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18338539 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9761072 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6556267 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379927 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726654 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116091 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709708 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357520 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222807 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111810 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68212  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+7875996 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683100 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26205096 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18894213 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -54.5  p =1-8.5e-50    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= -79.3  p =1-1.3e-72    FAIL !!!!      
  FPF-14+6/16:(3,14-0)              R= -96.1  p =1-4.5e-88    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -70.1  p =1-2.1e-71    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -50.0  p =1-4.0e-49    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -54.7  p =1-8.8e-54    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -37.6  p =1-2.2e-34    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -28.0  p =1-3.5e-29    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -19.9  p =1-1.0e-20    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -22.1  p =1-5.7e-23    FAIL !!        
  FPF-14+6/16:(11,14-6)             R= -15.3  p =1-9.3e-17    FAIL !         
  FPF-14+6/16:(12,14-7)             R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  FPF-14+6/16:all                   R=+8859241 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+96874283467973 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28694464 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5896558 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138514 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087472 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076127 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691731 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351120 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220002 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502904 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943521 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552752 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5087256 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R=-104.6  p =1-7.3e-96    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -73.4  p =1-8.4e-75    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -51.6  p =1-1.1e-50    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -57.0  p =1-5.1e-56    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -41.8  p =1-3.3e-38    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -28.9  p =1-4.4e-30    FAIL !!!       
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -19.9  p =1-1.0e-20    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -20.6  p =1-2.3e-21    FAIL !!        
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:(12,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:all          R=+3019584 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+7922926658397 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7542868 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1181068 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628640 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+407101 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209868 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107204 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868067 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354145 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690778 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090221 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -56.9  p =1-5.9e-56    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -40.8  p =1-2.6e-37    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -29.6  p =1-8.1e-31    FAIL !!!       
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -19.7  p =1-2.1e-20    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -20.9  p =1-1.0e-21    FAIL !!        
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -15.3  p =1-9.3e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=+673046 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+381076195318 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1027476 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 1 test result(s) without anomalies


real	0m4.350s
user	0m4.208s
sys	0m0.120s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7230ab8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7230ab8
length= 256 megabytes (2^28 bytes), time= 3.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18338583 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9761102 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6556258 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379939 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726664 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116093 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709704 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357517 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222808 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111810 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68212  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+7876007 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683094 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26205067 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18894217 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -53.4  p =1-8.3e-49    FAIL !!!       
  FPF-14+6/16:(2,14-0)              R= -80.3  p =1-1.6e-73    FAIL !!!!      
  FPF-14+6/16:(3,14-0)              R= -98.2  p =1-5.6e-90    FAIL !!!!!     
  FPF-14+6/16:(4,14-1)              R= -68.3  p =1-1.3e-69    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -49.0  p =1-3.9e-48    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -55.2  p =1-2.6e-54    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -38.4  p =1-4.4e-35    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -26.1  p =1-4.0e-27    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -19.4  p =1-4.1e-20    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -19.7  p =1-2.1e-20    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -15.3  p =1-9.3e-17    FAIL !         
  FPF-14+6/16:all                   R=+8864991 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+100531237729920 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28694514 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5896563 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138511 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087461 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076126 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691730 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351121 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220000 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110825 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502907 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943521 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552753 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5087253 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R=-105.4  p =1-1.3e-96    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -73.4  p =1-8.4e-75    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -53.5  p =1-1.3e-52    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -56.8  p =1-7.5e-56    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -40.1  p =1-1.3e-36    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -30.1  p =1-2.3e-31    FAIL !!!       
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -20.9  p =1-1.0e-21    FAIL !!        
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -20.1  p =1-6.8e-21    FAIL !         
  [Low8/32]FPF-14+6/16:(10,14-7)    R=  -9.8  p =1-9.3e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:all          R=+3019585 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+8309623693982 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7542992 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1181069 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628632 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+407098 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209863 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107204 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868069 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354145 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690778 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090222 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -58.4  p =1-1.7e-57    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -39.6  p =1-3.3e-36    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -27.6  p =1-9.3e-29    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -18.9  p =1-1.5e-19    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -20.6  p =1-2.3e-21    FAIL !!        
  [Low1/32]FPF-14+6/16:(9,14-8)     R=  -6.2  p =1-4.9e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R=+679988 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+407388885561 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1027452 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 1 test result(s) without anomalies


real	0m4.248s
user	0m4.124s
sys	0m0.116s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x673e77b5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x673e77b5
length= 256 megabytes (2^28 bytes), time= 3.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18338544 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9761095 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6556271 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379948 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726664 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116103 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709700 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357522 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222814 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111812 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68212  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+7876010 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683096 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26205077 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18894220 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R= -54.0  p =1-2.5e-49    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= -78.9  p =1-3.0e-72    FAIL !!!!      
  FPF-14+6/16:(3,14-0)              R= -96.7  p =1-1.2e-88    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -68.9  p =1-3.5e-70    FAIL !!!!      
  FPF-14+6/16:(5,14-2)              R= -47.8  p =1-6.7e-47    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -54.4  p =1-1.8e-53    FAIL !!!!      
  FPF-14+6/16:(7,14-3)              R= -38.9  p =1-1.6e-35    FAIL !!!       
  FPF-14+6/16:(8,14-4)              R= -29.1  p =1-2.5e-30    FAIL !!!       
  FPF-14+6/16:(9,14-5)              R= -18.9  p =1-1.5e-19    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -21.6  p =1-1.6e-22    FAIL !!        
  FPF-14+6/16:(11,14-6)             R= -14.8  p =1-3.7e-16    FAIL           
  FPF-14+6/16:(12,14-7)             R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  FPF-14+6/16:all                   R=+8860063 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+100531270301030 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28694358 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5896573 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138538 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087480 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076129 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691733 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351122 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220000 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110825 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502904 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943520 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8552751 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5087249 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R=-105.7  p =1-7.3e-97    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -75.2  p =1-1.0e-76    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -51.5  p =1-1.3e-50    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -57.4  p =1-1.7e-56    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -40.5  p =1-5.1e-37    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -30.1  p =1-2.3e-31    FAIL !!!       
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -21.2  p =1-4.2e-22    FAIL !!        
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -22.1  p =1-5.7e-23    FAIL !!        
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -15.3  p =1-9.3e-17    FAIL !         
  [Low8/32]FPF-14+6/16:all          R=+3015970 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+8309610622859 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7543096 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1181071 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628656 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+407105 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209866 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107204 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868069 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354145 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690778 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090219 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -58.2  p =1-3.3e-57    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -39.6  p =1-3.3e-36    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -28.6  p =1-7.6e-30    FAIL !!!       
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -20.6  p =1-2.3e-21    FAIL !!        
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -22.1  p =1-5.7e-23    FAIL !!        
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -15.3  p =1-9.3e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:(9,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=+671344 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+359281237062 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1027495 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  


real	0m4.249s
user	0m4.144s
sys	0m0.096s
*/
