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
/// @created on 2019-12-18 20:16:48 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 52cf9d86-135a-4adb-9d2c-2ceef87b8482                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot4a;
/* TEST00
time ./MRndCPP 
3038545995
1648081473
1242958434
1754770975
3508061866
188737560
479119930631250894

real	0m33.501s
user	0m33.456s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.24e+07  |3372906321|
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
./test.sh: line 7:  2676 Broken pipe             ./MRndCPP
      2677 Terminated              | dieharder -g200 -a -k2 > test.txt

real	2193m22.814s
user	2185m46.464s
sys	4m32.120s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xade893af
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xade893af
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+5885358 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+3181668 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+1693617 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+884518 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+556953 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+331396 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+152420 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+77510  p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+28865  p =  5e-9886    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+12419  p =  5e-3736    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +7448  p =  2e-1891    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R= +5084  p =  3e-1291    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +2634  p =  7.1e-593   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R=+767.7  p =  1.2e-173   FAIL !!!!!!    
  DC6-9x1Bytes-1                    R=+1911035 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+1920151 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+8708263 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+838267 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+492420 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+276963 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+210218 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+159882 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+77006  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+50126  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+32041  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+41029  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+43503  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+338.9  p =  2.1e-259   FAIL !!!!!!    
  FPF-14+6/16:(11,14-7)             R=+183.3  p =  1.0e-145   FAIL !!!!!     
  FPF-14+6/16:(12,14-8)             R= +73.0  p =  1.5e-52    FAIL !!!!      
  FPF-14+6/16:(13,14-8)             R= +35.2  p =  2.1e-25    FAIL !!        
  FPF-14+6/16:(14,14-9)             R= +34.6  p =  4.6e-22    FAIL !!        
  FPF-14+6/16:(15,14-10)            R= +22.7  p =  1.2e-12   VERY SUSPICIOUS 
  FPF-14+6/16:all                   R=+925881 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+262403010069 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+26502  p = 0           FAIL !!!!!!!!  
  BRank(12):256(4)                  R= +5340  p~=  5e-2841    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+14873  p~=  3e-4478    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+31195  p~=  1e-9391    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+2116671 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1078752 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+653878 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+316750 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+146196 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+75140  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+28970  p =  1e-9921    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+11850  p =  6e-3565    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R= +5182  p =  3e-1316    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +2844  p =  1.0e-722   FAIL !!!!!!!   
  [Low8/32]BCFN(2+10,13-9,T)        R= +1185  p =  2.4e-267   FAIL !!!!!!    
  [Low8/32]BCFN(2+11,13-9,T)        R=+285.5  p =  2.7e-65    FAIL !!!!      
  [Low8/32]DC6-9x1Bytes-1           R=+938919 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+607091 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+2957620 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+335269 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+232960 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+161025 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+101084 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+79012  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+34122  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+35605  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +9148  p =  3e-7584    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+195.7  p =  8.4e-150   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+150.7  p =  8.7e-120   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +56.9  p =  5.4e-41    FAIL !!!       
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +44.3  p =  6.6e-32    FAIL !!!       
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+122.4  p =  2.4e-77    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+194.4  p =  5.1e-104   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(14,14-11)   R=+361.6  p =  1.9e-158   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(15,14-11)   R=+828.7  p =  5.1e-362   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:all          R=+446371 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+51025227792 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+145184 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +2434  p~=  2e-1295    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+581.2  p~=  5.6e-176   FAIL !!!!!!    
  [Low8/32]BRank(12):768(1)         R= +3576  p~=  2e-1077    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+19872  p~=  5e-5983    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+367311 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+165636 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+71158  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+26604  p =  1e-9111    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +8889  p =  2e-2674    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +1805  p =  5.1e-459   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R=+204.9  p =  6.0e-53    FAIL !!!!      
  [Low1/32]DC6-9x1Bytes-1           R=+292698 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+149565 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+550775 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+160297 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+730.7  p =  3.1e-640   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+510.8  p =  2.6e-417   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+309.1  p =  4.4e-256   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+363.0  p =  7.9e-301   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+312.6  p =  2.9e-239   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(6,14-7)     R=+214.4  p =  1.7e-170   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(7,14-8)     R=+197.3  p =  4.8e-142   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(8,14-8)     R=+244.0  p =  1.2e-175   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(9,14-9)     R=+173.5  p =  1.4e-109   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(10,14-10)   R=+223.5  p =  1.7e-119   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(11,14-11)   R=+381.7  p =  3.4e-167   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(12,14-11)   R=+324.5  p =  2.9e-142   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all          R=+102275 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+6462806091 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+2186195 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2284  p~=  1.1e-688   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +4544  p~=  5e-1369    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +8914  p~=  1e-2684    FAIL !!!!!!!!  
  ...and 11 test result(s) without anomalies


real	0m2.915s
user	0m2.640s
sys	0m0.256s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4d392416
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4d392416
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+5879763 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+3171888 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+1691747 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+881934 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+554561 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+329555 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+150950 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+76327  p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+28372  p =  7e-9717    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+12098  p =  1e-3639    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +7120  p =  8e-1808    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R= +4749  p =  2e-1206    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +2431  p =  2.1e-547   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R=+758.7  p =  1.3e-171   FAIL !!!!!!    
  DC6-9x1Bytes-1                    R=+1914284 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+1921069 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+8715765 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+837252 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+491734 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+276388 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+209786 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+159569 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+76820  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+50001  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+31877  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+40917  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+43424  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+365.3  p =  1.4e-279   FAIL !!!!!!    
  FPF-14+6/16:(11,14-7)             R=+175.0  p =  4.5e-139   FAIL !!!!!     
  FPF-14+6/16:(12,14-8)             R=+107.9  p =  1.1e-77    FAIL !!!!      
  FPF-14+6/16:(13,14-8)             R= +52.5  p =  8.8e-38    FAIL !!!       
  FPF-14+6/16:(14,14-9)             R= +37.6  p =  5.8e-24    FAIL !!        
  FPF-14+6/16:(15,14-10)            R= +32.2  p =  1.0e-17    FAIL !         
  FPF-14+6/16:all                   R=+924458 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+261683055715 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+26482  p = 0           FAIL !!!!!!!!  
  BRank(12):256(4)                  R= +5341  p~=  2e-2841    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+14875  p~=  9e-4479    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+31195  p~=  1e-9391    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+2116518 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1078736 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+654266 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+315796 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+144973 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+74142  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+28675  p =  6e-9821    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+11639  p =  2e-3501    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R= +5111  p =  5e-1298    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +2797  p =  7.3e-711   FAIL !!!!!!!   
  [Low8/32]BCFN(2+10,13-9,T)        R= +1137  p =  1.2e-256   FAIL !!!!!!    
  [Low8/32]BCFN(2+11,13-9,T)        R=+284.7  p =  4.4e-65    FAIL !!!!      
  [Low8/32]DC6-9x1Bytes-1           R=+939865 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+606680 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+2956712 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+335695 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+233178 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+161169 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+101106 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+79156  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+34165  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+35683  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +9134  p =  1e-7572    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+192.9  p =  1.2e-147   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+169.3  p =  1.3e-134   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +50.7  p =  1.6e-36    FAIL !!!       
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +48.8  p =  3.7e-35    FAIL !!!       
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+103.9  p =  1.0e-65    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+189.9  p =  1.3e-101   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(14,14-11)   R=+377.4  p =  2.3e-165   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(15,14-11)   R=+773.1  p =  8.4e-338   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:all          R=+446859 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+51139101183 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+145111 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +2435  p~=  6e-1296    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+581.2  p~=  5.6e-176   FAIL !!!!!!    
  [Low8/32]BRank(12):768(1)         R= +3576  p~=  2e-1077    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+19872  p~=  5e-5983    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+367159 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+163520 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+67901  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+24883  p =  3e-8522    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +8459  p =  3e-2545    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +1921  p =  1.4e-488   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R=+214.8  p =  1.9e-55    FAIL !!!!      
  [Low1/32]DC6-9x1Bytes-1           R=+292734 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+149627 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+551142 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+160298 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+735.9  p =  9.0e-645   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+492.6  p =  1.9e-402   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+302.1  p =  2.6e-250   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+360.5  p =  1.0e-298   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+265.2  p =  5.2e-203   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(6,14-7)     R=+167.2  p =  7.3e-133   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(7,14-8)     R=+131.1  p =  2.2e-94    FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(8,14-8)     R=+287.9  p =  3.3e-207   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(9,14-9)     R=+211.4  p =  2.0e-133   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(10,14-10)   R=+182.6  p =  9.7e-98    FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(11,14-11)   R=+456.4  p =  9.1e-200   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(12,14-11)   R=+270.0  p =  1.6e-118   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all          R=+102246 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+6462848513 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+2186475 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2300  p~=  3.0e-693   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +4544  p~=  5e-1369    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +8914  p~=  1e-2684    FAIL !!!!!!!!  
  ...and 11 test result(s) without anomalies


real	0m2.769s
user	0m2.652s
sys	0m0.096s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x554907a2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x554907a2
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+5889420 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+3176455 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+1692285 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+884345 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+557732 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+332675 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+153029 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+77101  p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+28764  p =  4e-9851    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+12218  p =  1e-3675    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +7310  p =  4e-1856    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R= +4854  p =  7e-1233    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +2453  p =  2.6e-552   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R=+757.6  p =  2.3e-171   FAIL !!!!!!    
  DC6-9x1Bytes-1                    R=+1916021 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+1922897 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+8713748 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+840533 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+493496 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+277403 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+210566 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+160093 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+77105  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+50270  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+32035  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+41049  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+43625  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+360.4  p =  7.4e-276   FAIL !!!!!!    
  FPF-14+6/16:(11,14-7)             R=+170.8  p =  1.0e-135   FAIL !!!!!     
  FPF-14+6/16:(12,14-8)             R= +84.5  p =  7.5e-61    FAIL !!!!      
  FPF-14+6/16:(13,14-8)             R= +45.7  p =  5.9e-33    FAIL !!!       
  FPF-14+6/16:(14,14-9)             R= +14.0  p =  4.4e-9   very suspicious  
  FPF-14+6/16:(15,14-10)            R= +19.2  p =  8.6e-11   VERY SUSPICIOUS 
  FPF-14+6/16:all                   R=+927941 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+263680772348 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+26627  p = 0           FAIL !!!!!!!!  
  BRank(12):256(4)                  R= +5341  p~=  2e-2841    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+14875  p~=  9e-4479    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+31195  p~=  1e-9391    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+2119283 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1080317 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+656746 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+317742 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+147402 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+75745  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+29098  p =  1e-9965    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+11909  p =  8e-3583    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R= +5228  p =  8e-1328    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +2832  p =  1.1e-719   FAIL !!!!!!!   
  [Low8/32]BCFN(2+10,13-9,T)        R= +1111  p =  1.1e-250   FAIL !!!!!!    
  [Low8/32]BCFN(2+11,13-9,T)        R=+281.8  p =  1.9e-64    FAIL !!!!      
  [Low8/32]DC6-9x1Bytes-1           R=+939486 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+606640 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+2957691 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+336014 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+233455 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+161380 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+101258 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+79183  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+34229  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+35768  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +9160  p =  5e-7594    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+204.7  p =  1.0e-156   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+132.3  p =  4.1e-105   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +45.5  p =  8.4e-33    FAIL !!!       
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +37.7  p =  3.7e-27    FAIL !!        
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+117.3  p =  3.6e-74    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+185.0  p =  5.1e-99    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(14,14-11)   R=+376.8  p =  4.3e-165   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(15,14-11)   R=+774.5  p =  2.0e-338   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:all          R=+447348 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+51248677569 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+145429 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +2445  p~=  4e-1301    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+579.4  p~=  1.8e-175   FAIL !!!!!!    
  [Low8/32]BRank(12):768(1)         R= +3597  p~=  7e-1084    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+19872  p~=  5e-5983    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+369736 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+167221 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+70310  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+25936  p =  1e-8882    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +9151  p =  4e-2753    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +2013  p =  6.2e-512   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R=+248.4  p =  5.5e-64    FAIL !!!!      
  [Low1/32]DC6-9x1Bytes-1           R=+292804 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+149545 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+550716 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+160272 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+680.0  p =  8.3e-596   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+503.3  p =  3.7e-411   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+396.3  p =  2.2e-328   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+312.3  p =  9.3e-259   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+251.1  p =  3.3e-192   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(6,14-7)     R=+199.7  p =  8.9e-159   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(7,14-8)     R=+175.7  p =  1.8e-126   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(8,14-8)     R=+281.5  p =  1.4e-202   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(9,14-9)     R=+199.2  p =  1.0e-125   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(10,14-10)   R=+233.7  p =  7.0e-125   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(11,14-11)   R=+436.9  p =  2.8e-191   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(12,14-11)   R=+279.4  p =  1.2e-122   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all          R=+102222 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+6460749707 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+2186105 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2284  p~=  1.1e-688   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +4566  p~=  1e-1375    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +8914  p~=  1e-2684    FAIL !!!!!!!!  
  ...and 11 test result(s) without anomalies


real	0m2.749s
user	0m2.652s
sys	0m0.084s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x45a10c6d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x45a10c6d
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+5887155 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+3183869 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+1700014 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+886140 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+555908 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+330990 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+152687 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+76946  p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+28997  p =  4e-9931    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+12202  p =  7e-3671    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +7385  p =  2e-1875    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R= +4918  p =  5e-1249    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +2535  p =  8.0e-571   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R=+750.2  p =  1.0e-169   FAIL !!!!!!    
  DC6-9x1Bytes-1                    R=+1913255 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+1921795 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+8713202 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+839234 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+492816 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+277070 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+210389 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+159966 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+77053  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+50177  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+32037  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+40954  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+43522  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+349.1  p =  3.3e-267   FAIL !!!!!!    
  FPF-14+6/16:(11,14-7)             R=+175.7  p =  1.2e-139   FAIL !!!!!     
  FPF-14+6/16:(12,14-8)             R= +73.0  p =  1.3e-52    FAIL !!!!      
  FPF-14+6/16:(13,14-8)             R= +37.5  p =  4.9e-27    FAIL !!        
  FPF-14+6/16:(14,14-9)             R= +19.6  p =  1.2e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(15,14-10)            R= +19.5  p =  5.8e-11   VERY SUSPICIOUS 
  FPF-14+6/16:all                   R=+926687 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+262921852653 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+26643  p = 0           FAIL !!!!!!!!  
  BRank(12):256(4)                  R= +5340  p~=  5e-2841    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+14875  p~=  9e-4479    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+31195  p~=  1e-9391    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+2120282 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1080355 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+654601 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+317140 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+146756 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+75415  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+29233  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+11783  p =  9e-3545    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R= +5206  p =  3e-1322    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +2806  p =  3.8e-713   FAIL !!!!!!!   
  [Low8/32]BCFN(2+10,13-9,T)        R= +1152  p =  5.6e-260   FAIL !!!!!!    
  [Low8/32]BCFN(2+11,13-9,T)        R=+273.9  p =  1.1e-62    FAIL !!!!      
  [Low8/32]DC6-9x1Bytes-1           R=+939251 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+606684 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+2957809 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+335592 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+233124 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+161166 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+101278 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+79222  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+34141  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+35723  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +9185  p =  2e-7614    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+225.6  p =  1.1e-172   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+156.3  p =  2.9e-124   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +66.3  p =  9.3e-48    FAIL !!!       
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +48.5  p =  6.2e-35    FAIL !!!       
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+110.0  p =  1.4e-69    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+158.8  p =  4.8e-85    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(14,14-11)   R=+489.3  p =  4.2e-214   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(15,14-11)   R=+666.2  p =  3.3e-291   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:all          R=+446839 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+51126324643 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+145327 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +2434  p~=  2e-1295    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+579.4  p~=  1.8e-175   FAIL !!!!!!    
  [Low8/32]BRank(12):768(1)         R= +3597  p~=  7e-1084    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+19872  p~=  5e-5983    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+368134 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+167027 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+70759  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+26573  p =  9e-9101    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +8901  p =  5e-2678    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +2037  p =  5.7e-518   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R=+261.9  p =  2.1e-67    FAIL !!!!      
  [Low1/32]DC6-9x1Bytes-1           R=+292672 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+149591 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+550847 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+160329 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+757.2  p =  1.8e-663   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+444.9  p =  1.7e-363   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+357.3  p =  4.6e-296   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+322.9  p =  1.3e-267   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+296.5  p =  6.2e-227   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(6,14-7)     R=+196.0  p =  7.7e-156   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(7,14-8)     R=+139.6  p =  1.7e-100   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(8,14-8)     R=+253.6  p =  1.6e-182   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(9,14-9)     R=+260.3  p =  3.4e-164   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(10,14-10)   R=+251.9  p =  1.3e-134   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(11,14-11)   R=+372.6  p =  3.1e-163   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(12,14-11)   R=+279.1  p =  1.6e-122   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all          R=+102284 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+6465368333 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+2186267 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2284  p~=  1.1e-688   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +4566  p~=  1e-1375    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +8914  p~=  1e-2684    FAIL !!!!!!!!  
  ...and 11 test result(s) without anomalies


real	0m2.745s
user	0m2.640s
sys	0m0.092s
*/
