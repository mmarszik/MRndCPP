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
/// @created on 2019-12-18 01:26:58 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 84ef2396-be15-4452-a4c7-31ba78a17d1e                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib18;
/* TEST00
time ./MRndCPP 
2711589298
1332414743
2177144965
2534909663
1217137145
2852682228
1893787423426407131

real	0m51.838s
user	0m51.784s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.17e+07  |2317965762|
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
./test.sh: line 7: 30586 Broken pipe             ./MRndCPP
     30587 Killed                  | dieharder -g200 -a -k2 > test.txt

real	224m39.319s
user	220m52.892s
sys	3m31.180s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xaa7c5d0c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xaa7c5d0c
length= 256 megabytes (2^28 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18333588 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9758767 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6554845 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379325 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726388 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115922 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709610 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357475 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222783 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111810 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68219  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+16690467 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6681078 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26197104 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18887489 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R= -34.9  p =1-8.9e-32    FAIL !!!       
  FPF-14+6/16:(3,14-0)              R= -64.4  p =1-7.3e-59    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -45.3  p =1-5.8e-46    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -32.0  p =1-3.1e-31    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -43.4  p =1-1.4e-42    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -30.7  p =1-5.8e-28    FAIL !!        
  FPF-14+6/16:(8,14-4)              R= -20.6  p =1-2.9e-21    FAIL !         
  FPF-14+6/16:(9,14-5)              R= -16.5  p =1-4.6e-17    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -18.6  p =1-2.7e-19    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -13.1  p =1-2.6e-14    FAIL           
  FPF-14+6/16:(12,14-7)             R=  -8.8  p =1-1.3e-9   very suspicious  
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:(14,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+8850027 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+93522846873233 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28666177 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +3836  p~=  5e-2041    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5895143 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3137820 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087033 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1075911 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691585 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351051 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219952 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110802 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67785  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502175 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943237 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8551588 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5086251 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R= -79.4  p =1-1.0e-72    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -57.2  p =1-3.5e-58    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -40.6  p =1-9.7e-40    FAIL !!!       
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -49.7  p =1-7.6e-49    FAIL !!!       
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -35.6  p =1-1.5e-32    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -24.3  p =1-3.0e-25    FAIL !!        
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -18.4  p =1-5.0e-19    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -18.6  p =1-2.7e-19    FAIL !         
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -13.9  p =1-3.7e-15    FAIL           
  [Low8/32]FPF-14+6/16:(10,14-7)    R=  -9.8  p =1-9.3e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -6.2  p =1-4.9e-7   mildly suspicious
  [Low8/32]FPF-14+6/16:all          R=+3009922 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+7582628002969 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7538271 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1180774 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628482 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+406986 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209813 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107184 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+867950 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354114 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690629 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090078 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -48.9  p =1-5.3e-48    FAIL !!!       
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -36.0  p =1-7.5e-33    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -24.4  p =1-2.3e-25    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -17.2  p =1-1.0e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -20.2  p =1-5.0e-21    FAIL !         
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -13.5  p =1-1.0e-14    FAIL           
  [Low1/32]FPF-14+6/16:(7,14-7)     R=  -9.8  p =1-9.3e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=+669551 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+359187873276 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1026852 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 1 test result(s) without anomalies


real	0m4.318s
user	0m4.096s
sys	0m0.192s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x279fc
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x279fc
length= 256 megabytes (2^28 bytes), time= 3.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18333695 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9758828 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6554849 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379306 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726369 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115929 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709597 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357475 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222783 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111807 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68216  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+16690472 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6681079 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26197120 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18887480 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R= -34.1  p =1-4.5e-31    FAIL !!!       
  FPF-14+6/16:(3,14-0)              R= -64.6  p =1-4.7e-59    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -45.9  p =1-1.6e-46    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -32.5  p =1-1.0e-31    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -43.5  p =1-1.0e-42    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -31.3  p =1-1.5e-28    FAIL !!        
  FPF-14+6/16:(8,14-4)              R= -22.5  p =1-2.7e-23    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -14.5  p =1-7.1e-15    FAIL           
  FPF-14+6/16:(10,14-5)             R= -17.9  p =1-1.5e-18    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -12.8  p =1-6.4e-14    FAIL           
  FPF-14+6/16:(12,14-7)             R=  -8.8  p =1-1.3e-9   very suspicious  
  FPF-14+6/16:all                   R=+8853296 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+96805251824579 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28666082 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +3836  p~=  5e-2041    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5895148 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3137826 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087026 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1075903 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691586 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351049 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219958 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110804 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502179 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943238 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8551599 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5086247 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R= -79.4  p =1-1.0e-72    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -58.2  p =1-3.7e-59    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -40.2  p =1-2.1e-39    FAIL !!!       
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -50.8  p =1-7.4e-50    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -34.8  p =1-9.8e-32    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -25.0  p =1-5.2e-26    FAIL !!        
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -15.9  p =1-2.1e-16    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -18.6  p =1-2.7e-19    FAIL !         
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -13.7  p =1-5.9e-15    FAIL           
  [Low8/32]FPF-14+6/16:(10,14-7)    R=  -9.3  p =1-3.9e-10  very suspicious  
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -6.2  p =1-4.9e-7   mildly suspicious
  [Low8/32]FPF-14+6/16:all          R=+3009472 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+7285141992506 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7538297 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1180769 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628483 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+407000 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209811 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107198 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+867949 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354114 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690629 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090080 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -48.9  p =1-4.9e-48    FAIL !!!       
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -34.7  p =1-1.0e-31    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -25.1  p =1-4.4e-26    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -16.5  p =1-4.6e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -20.2  p =1-5.0e-21    FAIL !         
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -13.9  p =1-3.7e-15    FAIL           
  [Low1/32]FPF-14+6/16:(7,14-7)     R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=+669551 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+359189198887 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1026832 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 3 test result(s) without anomalies


real	0m4.246s
user	0m4.128s
sys	0m0.112s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x225ce2ef
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x225ce2ef
length= 256 megabytes (2^28 bytes), time= 3.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18333611 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9758876 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6554824 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379349 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726376 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115935 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709606 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357477 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222784 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111807 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68219  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+16690476 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6681076 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26197106 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18887477 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R= -34.8  p =1-1.1e-31    FAIL !!!       
  FPF-14+6/16:(3,14-0)              R= -62.8  p =1-1.9e-57    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -46.3  p =1-6.4e-47    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -32.5  p =1-9.1e-32    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -43.6  p =1-8.9e-43    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -31.0  p =1-3.0e-28    FAIL !!        
  FPF-14+6/16:(8,14-4)              R= -22.2  p =1-6.3e-23    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -14.4  p =1-9.6e-15    FAIL           
  FPF-14+6/16:(10,14-5)             R= -17.9  p =1-1.5e-18    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -12.2  p =1-3.3e-13    FAIL           
  FPF-14+6/16:(12,14-7)             R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  FPF-14+6/16:all                   R=+8855762 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+96805220710367 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28666476 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +3836  p~=  5e-2041    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5895100 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3137834 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087023 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1075913 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691585 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351053 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219960 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110809 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67785  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502176 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943237 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8551584 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5086256 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R= -80.2  p =1-1.8e-73    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -56.3  p =1-2.8e-57    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -39.5  p =1-1.0e-38    FAIL !!!       
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -49.1  p =1-3.5e-48    FAIL !!!       
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -35.1  p =1-5.5e-32    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -25.8  p =1-9.2e-27    FAIL !!        
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -18.4  p =1-5.0e-19    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -19.7  p =1-2.1e-20    FAIL !         
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -14.3  p =1-1.2e-15    FAIL           
  [Low8/32]FPF-14+6/16:(10,14-7)    R=  -8.8  p =1-1.3e-9   very suspicious  
  [Low8/32]FPF-14+6/16:(12,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:all          R=+3009924 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+7582641227455 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7538233 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1180766 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628480 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+406995 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209813 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107180 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66215  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+867950 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354114 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690629 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090079 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -50.7  p =1-8.9e-50    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -32.9  p =1-5.5e-30    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -24.8  p =1-9.9e-26    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -18.4  p =1-5.0e-19    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -18.6  p =1-2.7e-19    FAIL !         
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -13.9  p =1-3.7e-15    FAIL           
  [Low1/32]FPF-14+6/16:(7,14-7)     R=  -8.8  p =1-1.3e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:(9,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=+667874 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+340756067349 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1026836 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 2 test result(s) without anomalies


real	0m4.234s
user	0m4.104s
sys	0m0.120s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf0a4f412
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf0a4f412
length= 256 megabytes (2^28 bytes), time= 3.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18333630 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9758826 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6554858 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3379385 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1726406 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1115936 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709604 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357479 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222786 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111814 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68222  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+16690479 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6681076 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26197111 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18887487 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=  -6.7  p =1-7.4e-6   unusual          
  FPF-14+6/16:(2,14-0)              R= -33.8  p =1-9.1e-31    FAIL !!!       
  FPF-14+6/16:(3,14-0)              R= -65.0  p =1-1.8e-59    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -47.2  p =1-7.5e-48    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -29.1  p =1-2.0e-28    FAIL !!        
  FPF-14+6/16:(6,14-2)              R= -44.3  p =1-1.8e-43    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -30.8  p =1-4.0e-28    FAIL !!        
  FPF-14+6/16:(8,14-4)              R= -21.2  p =1-6.3e-22    FAIL !!        
  FPF-14+6/16:(9,14-5)              R= -16.1  p =1-1.3e-16    FAIL !         
  FPF-14+6/16:(10,14-5)             R= -18.0  p =1-1.2e-18    FAIL !         
  FPF-14+6/16:(11,14-6)             R= -12.5  p =1-1.5e-13    FAIL           
  FPF-14+6/16:(12,14-7)             R=  -8.8  p =1-1.3e-9   very suspicious  
  FPF-14+6/16:(13,14-8)             R=  -6.9  p =1-5.8e-8   suspicious       
  FPF-14+6/16:all                   R=+8851667 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+93522829796216 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28666380 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +3836  p~=  5e-2041    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5895161 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3137839 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2086993 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1075914 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691587 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351051 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+219962 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110820 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2502177 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943237 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8551596 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5086246 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R= -80.4  p =1-1.2e-73    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(2,14-1)     R= -57.4  p =1-2.3e-58    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(3,14-2)     R= -39.5  p =1-1.1e-38    FAIL !!!       
  [Low8/32]FPF-14+6/16:(4,14-2)     R= -50.7  p =1-8.9e-50    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(5,14-3)     R= -34.1  p =1-4.0e-31    FAIL !!!       
  [Low8/32]FPF-14+6/16:(6,14-4)     R= -24.3  p =1-3.0e-25    FAIL !!        
  [Low8/32]FPF-14+6/16:(7,14-5)     R= -18.1  p =1-8.9e-19    FAIL !         
  [Low8/32]FPF-14+6/16:(8,14-5)     R= -18.9  p =1-1.5e-19    FAIL !         
  [Low8/32]FPF-14+6/16:(9,14-6)     R= -15.3  p =1-9.3e-17    FAIL !         
  [Low8/32]FPF-14+6/16:(10,14-7)    R=  -8.6  p =1-2.7e-9   very suspicious  
  [Low8/32]FPF-14+6/16:(11,14-8)    R=  -6.2  p =1-4.9e-7   mildly suspicious
  [Low8/32]FPF-14+6/16:(12,14-8)    R=  -6.9  p =1-5.8e-8   suspicious       
  [Low8/32]FPF-14+6/16:all          R=+3008127 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+7285137482109 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7538307 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1180763 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628476 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+406987 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209810 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107180 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+867948 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354114 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690630 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090082 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-2)     R= -48.0  p =1-4.0e-47    FAIL !!!       
  [Low1/32]FPF-14+6/16:(2,14-3)     R= -35.7  p =1-1.5e-32    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= -24.1  p =1-5.8e-25    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= -16.5  p =1-5.5e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= -19.7  p =1-2.1e-20    FAIL !         
  [Low1/32]FPF-14+6/16:(6,14-6)     R= -13.9  p =1-3.7e-15    FAIL           
  [Low1/32]FPF-14+6/16:(7,14-7)     R= -10.4  p =1-1.7e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(9,14-8)     R=  -6.9  p =1-5.8e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R=+669551 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+359190769252 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1026785 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 1 test result(s) without anomalies


real	0m4.240s
user	0m4.108s
sys	0m0.124s
*/
