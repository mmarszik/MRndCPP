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
/// @created on 2019-12-08 02:59:53 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 7d31d573-c8f4-4651-ab8e-a8f0b614d221                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2a;
/* TEST00
time ./MRndCPP 
163381694
113377450
191496327
96799112
171314334
71894806
1868518685799642518

real	3m41.198s
user	3m40.804s
sys	0m0.060s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.42e+07  |  85937450|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.00000000|  FAILED  
      diehard_operm5|   0|   1000000|     100|0.55849060|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.00000000|  FAILED  
    diehard_rank_6x8|   0|    100000|     100|0.43306703|  PASSED  
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
        diehard_runs|   0|    100000|     100|0.89598562|  PASSED  
        diehard_runs|   0|    100000|     100|0.75713313|  PASSED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99487041|  PASSED  
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
    rgb_permutations|   2|    100000|     100|0.00230370|   WEAK   
    rgb_permutations|   3|    100000|     100|0.96012666|  PASSED  
    rgb_permutations|   4|    100000|     100|0.95844306|  PASSED  
    rgb_permutations|   5|    100000|     100|0.54449653|  PASSED  
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
./test.sh: line 7: 13467 Broken pipe             ./MRndCPP
     13468 Segmentation fault      (core dumped) | dieharder -g200 -a -k2 > test.txt

real	163m55.355s
user	160m12.488s
sys	3m23.036s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc9918e22
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc9918e22
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+14329946 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+8139659 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+4016599 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+1951923 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+1217378 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+754738 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+373439 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+229795 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+114286 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+69277  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+41033  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20468  p =  1e-5195    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11745  p =  3e-2640    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5857  p =  4e-1317    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+3467156 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+700315 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+3619794 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+1200216 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+781744 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+390887 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+275881 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+195796 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+97774  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+69197  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+48957  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+32869  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+16302  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+13963  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(11,14-7)             R= +9873  p =  1e-7857    FAIL !!!!!!!!  
  FPF-14+6/16:all                   R=+1336592 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+630772251427 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+18630  p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +1167  p~=  2.8e-621   FAIL !!!!!!!   
  BRank(12):256(4)                  R= +2544  p~=  4e-1354    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +1961  p~=  2.3e-591   FAIL !!!!!!!   
  BRank(12):512(2)                  R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  BRank(12):768(1)                  R= +4028  p~=  1e-1213    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+106.5  p =  1.8e-46    FAIL !!!       
  [Low8/32]BCFN(2+1,13-4,T)         R=+117.9  p =  1.9e-51    FAIL !!!!      
  [Low8/32]BCFN(2+2,13-5,T)         R=+168.2  p =  5.1e-66    FAIL !!!!      
  [Low8/32]BCFN(2+3,13-5,T)         R=+196.3  p =  5.0e-77    FAIL !!!!      
  [Low8/32]BCFN(2+4,13-5,T)         R=+202.0  p =  2.9e-79    FAIL !!!!      
  [Low8/32]BCFN(2+5,13-6,T)         R=+242.9  p =  1.2e-83    FAIL !!!!      
  [Low8/32]BCFN(2+6,13-6,T)         R=+231.1  p =  1.3e-79    FAIL !!!!      
  [Low8/32]BCFN(2+7,13-7,T)         R=+273.4  p =  6.9e-83    FAIL !!!!      
  [Low8/32]BCFN(2+8,13-8,T)         R=+294.9  p =  8.6e-76    FAIL !!!!      
  [Low8/32]BCFN(2+9,13-8,T)         R=+306.0  p =  1.3e-78    FAIL !!!!      
  [Low8/32]BCFN(2+10,13-9,T)        R=+369.8  p =  3.2e-84    FAIL !!!!      
  [Low8/32]BCFN(2+11,13-9,T)        R=+357.9  p =  1.5e-81    FAIL !!!!      
  [Low8/32]DC6-9x1Bytes-1           R= +17.4  p =  6.5e-11    FAIL           
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +17.9  p =  3.9e-16    FAIL           
  [Low8/32]FPF-14+6/16:(1,14-1)     R= +11.8  p =  3.2e-10   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:(2,14-2)     R=  +9.6  p =  3.6e-8   suspicious       
  [Low8/32]FPF-14+6/16:(3,14-2)     R=  +6.6  p =  1.5e-5   unusual          
  [Low8/32]FPF-14+6/16:all          R= +23.2  p =  3.2e-21    FAIL !!        
  [Low8/32]FPF-14+6/16:all2         R=+113.1  p =  1.3e-41    FAIL !!!       
  ...and 55 test result(s) without anomalies


real	0m3.131s
user	0m2.912s
sys	0m0.212s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x79320637
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x79320637
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+14335221 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+8141047 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+4016580 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+1951923 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+1217378 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+754738 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+373439 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+229795 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+114286 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+69277  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+41033  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20468  p =  1e-5195    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11745  p =  3e-2640    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5857  p =  4e-1317    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+3467021 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+700314 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+3619790 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+1200373 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+781669 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+390749 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+275917 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+195683 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+97772  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+69253  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+48903  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+32784  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+16475  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+14102  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(11,14-7)             R=+10003  p =  6e-7961    FAIL !!!!!!!!  
  FPF-14+6/16:all                   R=+1336568 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+630810146357 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+18443  p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +1167  p~=  2.8e-621   FAIL !!!!!!!   
  BRank(12):256(4)                  R= +2544  p~=  4e-1354    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +1961  p~=  2.3e-591   FAIL !!!!!!!   
  BRank(12):512(2)                  R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  BRank(12):768(1)                  R= +4028  p~=  1e-1213    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+108.4  p =  2.5e-47    FAIL !!!!      
  [Low8/32]BCFN(2+1,13-4,T)         R=+139.3  p =  8.6e-61    FAIL !!!!      
  [Low8/32]BCFN(2+2,13-5,T)         R=+160.4  p =  5.9e-63    FAIL !!!!      
  [Low8/32]BCFN(2+3,13-5,T)         R=+168.5  p =  3.7e-66    FAIL !!!!      
  [Low8/32]BCFN(2+4,13-5,T)         R=+172.5  p =  1.0e-67    FAIL !!!!      
  [Low8/32]BCFN(2+5,13-6,T)         R=+214.9  p =  5.0e-74    FAIL !!!!      
  [Low8/32]BCFN(2+6,13-6,T)         R=+213.1  p =  1.9e-73    FAIL !!!!      
  [Low8/32]BCFN(2+7,13-7,T)         R=+238.7  p =  1.9e-72    FAIL !!!!      
  [Low8/32]BCFN(2+8,13-8,T)         R=+323.1  p =  6.0e-83    FAIL !!!!      
  [Low8/32]BCFN(2+9,13-8,T)         R=+333.7  p =  1.2e-85    FAIL !!!!      
  [Low8/32]BCFN(2+10,13-9,T)        R=+346.0  p =  7.1e-79    FAIL !!!!      
  [Low8/32]BCFN(2+11,13-9,T)        R=+345.3  p =  1.0e-78    FAIL !!!!      
  [Low8/32]DC6-9x1Bytes-1           R= +20.1  p =  1.0e-12    FAIL           
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +20.2  p =  3.3e-18    FAIL !         
  [Low8/32]FPF-14+6/16:(1,14-1)     R= +10.4  p =  6.2e-9   very suspicious  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=  +9.1  p =  1.0e-7   suspicious       
  [Low8/32]FPF-14+6/16:(3,14-2)     R=  +8.1  p =  7.5e-7   mildly suspicious
  [Low8/32]FPF-14+6/16:all          R= +24.7  p =  1.1e-22    FAIL !!        
  [Low8/32]FPF-14+6/16:all2         R=+128.7  p =  4.2e-47    FAIL !!!       
  ...and 55 test result(s) without anomalies


real	0m3.025s
user	0m2.900s
sys	0m0.116s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6946f06
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6946f06
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+14337185 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+8141757 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+4016625 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+1951923 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+1217378 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+754738 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+373439 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+229795 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+114286 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+69277  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+41033  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20468  p =  1e-5195    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11745  p =  3e-2640    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5857  p =  4e-1317    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+3467165 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+700311 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+3619779 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+1200241 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+781854 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+390908 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+275870 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+195553 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+97662  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+69332  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+48921  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+32690  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+16448  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+14036  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(11,14-7)             R= +9880  p =  4e-7863    FAIL !!!!!!!!  
  FPF-14+6/16:all                   R=+1336587 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+630812312449 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+18181  p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +1167  p~=  2.8e-621   FAIL !!!!!!!   
  BRank(12):256(4)                  R= +2544  p~=  4e-1354    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +1961  p~=  2.3e-591   FAIL !!!!!!!   
  BRank(12):512(2)                  R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  BRank(12):768(1)                  R= +4028  p~=  1e-1213    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+133.5  p =  2.7e-58    FAIL !!!!      
  [Low8/32]BCFN(2+1,13-4,T)         R=+148.2  p =  1.0e-64    FAIL !!!!      
  [Low8/32]BCFN(2+2,13-5,T)         R=+195.4  p =  1.1e-76    FAIL !!!!      
  [Low8/32]BCFN(2+3,13-5,T)         R=+197.5  p =  1.6e-77    FAIL !!!!      
  [Low8/32]BCFN(2+4,13-5,T)         R=+205.4  p =  1.3e-80    FAIL !!!!      
  [Low8/32]BCFN(2+5,13-6,T)         R=+259.6  p =  2.3e-89    FAIL !!!!!     
  [Low8/32]BCFN(2+6,13-6,T)         R=+244.0  p =  5.3e-84    FAIL !!!!      
  [Low8/32]BCFN(2+7,13-7,T)         R=+338.7  p =  1.6e-102   FAIL !!!!!     
  [Low8/32]BCFN(2+8,13-8,T)         R=+426.2  p =  4.1e-109   FAIL !!!!!     
  [Low8/32]BCFN(2+9,13-8,T)         R=+433.8  p =  4.9e-111   FAIL !!!!!     
  [Low8/32]BCFN(2+10,13-9,T)        R=+430.4  p =  7.9e-98    FAIL !!!!!     
  [Low8/32]BCFN(2+11,13-9,T)        R=+413.5  p =  4.8e-94    FAIL !!!!!     
  [Low8/32]DC6-9x1Bytes-1           R= +19.5  p =  2.4e-12    FAIL           
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +17.9  p =  4.3e-16    FAIL           
  [Low8/32]FPF-14+6/16:(1,14-1)     R= +10.5  p =  4.5e-9   very suspicious  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=  +7.2  p =  4.4e-6   unusual          
  [Low8/32]FPF-14+6/16:(3,14-2)     R=  +8.5  p =  3.2e-7   suspicious       
  [Low8/32]FPF-14+6/16:all          R= +22.8  p =  7.3e-21    FAIL !!        
  [Low8/32]FPF-14+6/16:all2         R=+106.1  p =  3.9e-39    FAIL !!!       
  ...and 55 test result(s) without anomalies


real	0m3.090s
user	0m2.956s
sys	0m0.128s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6c073d45
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6c073d45
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+14333634 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+8140060 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+4016586 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+1951923 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+1217378 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+754738 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+373439 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+229795 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+114286 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+69277  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+41033  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20468  p =  1e-5195    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11745  p =  3e-2640    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5857  p =  4e-1317    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+3466902 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+700312 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+3619785 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+1200258 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+781800 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+390677 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+275949 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+195547 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+98047  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+69262  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+48987  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+32803  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+16510  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+13955  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(11,14-7)             R= +9944  p =  7e-7914    FAIL !!!!!!!!  
  FPF-14+6/16:all                   R=+1336585 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+630781669769 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+18167  p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +1167  p~=  2.8e-621   FAIL !!!!!!!   
  BRank(12):256(4)                  R= +2544  p~=  4e-1354    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +1961  p~=  2.3e-591   FAIL !!!!!!!   
  BRank(12):512(2)                  R= +3748  p~=  3e-1129    FAIL !!!!!!!!  
  BRank(12):768(1)                  R= +4028  p~=  1e-1213    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R= +7644  p~=  3e-2302    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +8161  p~=  1e-2457    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+129.0  p =  2.6e-56    FAIL !!!!      
  [Low8/32]BCFN(2+1,13-4,T)         R=+139.6  p =  5.9e-61    FAIL !!!!      
  [Low8/32]BCFN(2+2,13-5,T)         R=+186.0  p =  5.5e-73    FAIL !!!!      
  [Low8/32]BCFN(2+3,13-5,T)         R=+202.0  p =  3.0e-79    FAIL !!!!      
  [Low8/32]BCFN(2+4,13-5,T)         R=+204.1  p =  4.6e-80    FAIL !!!!      
  [Low8/32]BCFN(2+5,13-6,T)         R=+234.3  p =  1.1e-80    FAIL !!!!      
  [Low8/32]BCFN(2+6,13-6,T)         R=+223.6  p =  5.2e-77    FAIL !!!!      
  [Low8/32]BCFN(2+7,13-7,T)         R=+276.4  p =  8.9e-84    FAIL !!!!      
  [Low8/32]BCFN(2+8,13-8,T)         R=+349.0  p =  1.5e-89    FAIL !!!!!     
  [Low8/32]BCFN(2+9,13-8,T)         R=+372.4  p =  1.9e-95    FAIL !!!!!     
  [Low8/32]BCFN(2+10,13-9,T)        R=+398.9  p =  9.3e-91    FAIL !!!!!     
  [Low8/32]BCFN(2+11,13-9,T)        R=+407.1  p =  1.3e-92    FAIL !!!!!     
  [Low8/32]DC6-9x1Bytes-1           R= +21.4  p =  1.2e-13    FAIL           
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +17.9  p =  4.6e-16    FAIL           
  [Low8/32]FPF-14+6/16:(1,14-1)     R= +15.5  p =  1.9e-13    FAIL           
  [Low8/32]FPF-14+6/16:(2,14-2)     R=  +9.7  p =  2.6e-8   very suspicious  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=  +8.1  p =  7.8e-7   mildly suspicious
  [Low8/32]FPF-14+6/16:all          R= +25.7  p =  1.4e-23    FAIL !!        
  [Low8/32]FPF-14+6/16:all2         R=+137.6  p =  3.1e-50    FAIL !!!!      
  [Low8/32]FPF-14+6/16:cross        R=  +4.3  p =  7.5e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -4.0  p =1-8.5e-3   unusual          
  ...and 53 test result(s) without anomalies


real	0m3.058s
user	0m2.904s
sys	0m0.144s
*/
