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
/// @created on 2019-12-08 02:59:03 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 6658abc9-f6c4-43c8-b0dc-58d9db250f70                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_knuthb.h"

namespace MRnd {

using TRnd = RndKnuthB;

}

/* TEST00
time ./MRndCPP 
414632433
529571054
23691585
633705974
277539866
1155212522
2305843000550403604

real	0m45.156s
user	0m45.080s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.01e+07  |3861661116|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.95169995|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.25122694|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.00000000|  FAILED  
    diehard_rank_6x8|   0|    100000|     100|0.72945367|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_opso|   0|   2097152|     100|0.77734734|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.08532959|  PASSED  
         diehard_dna|   0|   2097152|     100|0.00000000|  FAILED  
diehard_count_1s_str|   0|    256000|     100|0.00000000|  FAILED  
diehard_count_1s_byt|   0|    256000|     100|0.00000000|  FAILED  
 diehard_parking_lot|   0|     12000|     100|0.00000000|  FAILED  
    diehard_2dsphere|   2|      8000|     100|0.00000000|  FAILED  
    diehard_3dsphere|   3|      4000|     100|0.00000000|  FAILED  
     diehard_squeeze|   0|    100000|     100|0.00000000|  FAILED  
        diehard_sums|   0|       100|     100|0.00000000|  FAILED  
        diehard_runs|   0|    100000|     100|0.73016613|  PASSED  
        diehard_runs|   0|    100000|     100|0.47817633|  PASSED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.33743367|  PASSED  
         sts_monobit|   1|    100000|     100|0.00000000|  FAILED  
            sts_runs|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   1|    100000|     100|0.00000000|  FAILED  
          sts_serial|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.09822936|  PASSED  
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.91030140|  PASSED  
          sts_serial|   5|    100000|     100|0.00000000|  FAILED  
          sts_serial|   5|    100000|     100|0.04022258|  PASSED  
          sts_serial|   6|    100000|     100|0.00000000|  FAILED  
          sts_serial|   6|    100000|     100|0.22086484|  PASSED  
          sts_serial|   7|    100000|     100|0.00000000|  FAILED  
          sts_serial|   7|    100000|     100|0.34592576|  PASSED  
          sts_serial|   8|    100000|     100|0.00000000|  FAILED  
          sts_serial|   8|    100000|     100|0.96864735|  PASSED  
          sts_serial|   9|    100000|     100|0.00000000|  FAILED  
          sts_serial|   9|    100000|     100|0.33316304|  PASSED  
          sts_serial|  10|    100000|     100|0.00000000|  FAILED  
          sts_serial|  10|    100000|     100|0.38881666|  PASSED  
          sts_serial|  11|    100000|     100|0.00000000|  FAILED  
          sts_serial|  11|    100000|     100|0.65860115|  PASSED  
          sts_serial|  12|    100000|     100|0.00000000|  FAILED  
          sts_serial|  12|    100000|     100|0.43704021|  PASSED  
          sts_serial|  13|    100000|     100|0.00000000|  FAILED  
          sts_serial|  13|    100000|     100|0.28283893|  PASSED  
          sts_serial|  14|    100000|     100|0.00000000|  FAILED  
          sts_serial|  14|    100000|     100|0.13042733|  PASSED  
          sts_serial|  15|    100000|     100|0.00000000|  FAILED  
          sts_serial|  15|    100000|     100|0.46640182|  PASSED  
          sts_serial|  16|    100000|     100|0.00000000|  FAILED  
          sts_serial|  16|    100000|     100|0.99345029|  PASSED  
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
    rgb_permutations|   2|    100000|     100|0.07160883|  PASSED  
    rgb_permutations|   3|    100000|     100|0.67855381|  PASSED  
    rgb_permutations|   4|    100000|     100|0.55707726|  PASSED  
    rgb_permutations|   5|    100000|     100|0.88366089|  PASSED  
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
./test.sh: line 9:  8376 Broken pipe             ./MRndCPP
      8377 Segmentation fault      (core dumped) | dieharder -g200 -a -k2 > test.txt

real	115m11.276s
user	111m13.920s
sys	3m43.752s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbf9f6735
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbf9f6735
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+207788 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+210575 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+210009 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+205619 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+247877 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+279281 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+226498 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+195126 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+111872 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+69277  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+41033  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20468  p =  1e-5195    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11745  p =  3e-2640    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5857  p =  4e-1317    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+21726  p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R= +9781  p =  3e-8340    FAIL !!!!!!!!  
  Gap-16:B                          R=+48436  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+34256  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+17199  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+12144  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R= +8576  p =  1e-7500    FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R= +4293  p =  5e-3754    FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R= +3041  p =  1e-2665    FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R= +2150  p =  5e-1757    FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R= +1521  p =  1e-1260    FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+758.3  p =  1.7e-628   FAIL !!!!!!!   
  FPF-14+6/16:(10,14-6)             R=+546.7  p =  1.8e-418   FAIL !!!!!!!   
  FPF-14+6/16:(11,14-7)             R=+372.8  p =  1.4e-296   FAIL !!!!!!    
  FPF-14+6/16:(12,14-8)             R=+244.2  p =  9.7e-176   FAIL !!!!!!    
  FPF-14+6/16:(13,14-8)             R=+134.4  p =  9.5e-97    FAIL !!!!!     
  FPF-14+6/16:(14,14-9)             R= +97.4  p =  1.2e-61    FAIL !!!!      
  FPF-14+6/16:all                   R=+33145  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+407083698 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R= +84.0  p =  5.2e-71    FAIL !!!!      
  BRank(12):128(4)                  R= +29.5  p~=  1.8e-16    FAIL !         
  BRank(12):256(4)                  R=+137.8  p~=  4.0e-74    FAIL !!!!      
  BRank(12):384(1)                  R=+152.8  p~=  5.1e-47    FAIL !!!       
  BRank(12):512(2)                  R=+337.8  p~=  1.0e-102   FAIL !!!!!     
  BRank(12):768(1)                  R=+411.1  p~=  8.8e-125   FAIL !!!!!     
  BRank(12):1K(2)                   R=+824.9  p~=  2.3e-249   FAIL !!!!!!    
  BRank(12):1536(1)                 R=+927.7  p~=  2.6e-280   FAIL !!!!!!    
  ...and 76 test result(s) without anomalies


real	0m3.545s
user	0m3.424s
sys	0m0.104s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9ea74ff3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9ea74ff3
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+207248 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+211440 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+210559 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+205340 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+247670 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+279813 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+227113 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+195779 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+111786 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+69242  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+41033  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20468  p =  1e-5195    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11745  p =  3e-2640    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5857  p =  4e-1317    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+21782  p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R= +9769  p =  3e-8330    FAIL !!!!!!!!  
  Gap-16:B                          R=+48353  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+34307  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+17149  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+12136  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R= +8571  p =  3e-7496    FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R= +4304  p =  1e-3763    FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R= +3011  p =  2e-2639    FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R= +2133  p =  4e-1743    FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R= +1510  p =  7e-1252    FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+769.6  p =  6.7e-638   FAIL !!!!!!!   
  FPF-14+6/16:(10,14-6)             R=+529.5  p =  2.9e-405   FAIL !!!!!!!   
  FPF-14+6/16:(11,14-7)             R=+376.8  p =  1.1e-299   FAIL !!!!!!    
  FPF-14+6/16:(12,14-8)             R=+258.6  p =  3.7e-186   FAIL !!!!!!    
  FPF-14+6/16:(13,14-8)             R=+138.8  p =  6.0e-100   FAIL !!!!!     
  FPF-14+6/16:(14,14-9)             R= +92.9  p =  8.2e-59    FAIL !!!!      
  FPF-14+6/16:all                   R=+33138  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+407416867 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R= +71.4  p =  1.8e-60    FAIL !!!!      
  BRank(12):128(4)                  R= +29.5  p~=  1.8e-16    FAIL !         
  BRank(12):256(4)                  R=+137.8  p~=  4.0e-74    FAIL !!!!      
  BRank(12):384(1)                  R=+152.8  p~=  5.1e-47    FAIL !!!       
  BRank(12):512(2)                  R=+337.8  p~=  1.0e-102   FAIL !!!!!     
  BRank(12):768(1)                  R=+411.1  p~=  8.8e-125   FAIL !!!!!     
  BRank(12):1K(2)                   R=+824.9  p~=  2.3e-249   FAIL !!!!!!    
  BRank(12):1536(1)                 R=+927.7  p~=  2.6e-280   FAIL !!!!!!    
  ...and 76 test result(s) without anomalies


real	0m3.515s
user	0m3.400s
sys	0m0.104s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3616bd86
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3616bd86
length= 128 megabytes (2^27 bytes), time= 3.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+207668 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+210972 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+210190 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+205858 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+247053 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+279896 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+227447 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+195065 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+111972 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+69242  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+41033  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20468  p =  1e-5195    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11745  p =  3e-2640    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5857  p =  4e-1317    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+21717  p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R= +9765  p =  1e-8326    FAIL !!!!!!!!  
  Gap-16:B                          R=+48358  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+34306  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+17112  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+12137  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R= +8584  p =  2e-7507    FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R= +4297  p =  1e-3757    FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R= +3048  p =  1e-2671    FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R= +2153  p =  1e-1759    FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R= +1541  p =  1e-1277    FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+749.6  p =  2.4e-621   FAIL !!!!!!!   
  FPF-14+6/16:(10,14-6)             R=+531.8  p =  5.1e-407   FAIL !!!!!!!   
  FPF-14+6/16:(11,14-7)             R=+381.3  p =  2.9e-303   FAIL !!!!!!    
  FPF-14+6/16:(12,14-8)             R=+271.6  p =  1.6e-195   FAIL !!!!!!    
  FPF-14+6/16:(13,14-8)             R=+144.2  p =  8.6e-104   FAIL !!!!!     
  FPF-14+6/16:(14,14-9)             R= +96.0  p =  1.0e-60    FAIL !!!!      
  FPF-14+6/16:all                   R=+33132  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+407214618 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R= +94.6  p =  5.5e-80    FAIL !!!!      
  BRank(12):128(4)                  R= +34.5  p~=  3.7e-19    FAIL !         
  BRank(12):256(4)                  R=+137.8  p~=  4.0e-74    FAIL !!!!      
  BRank(12):384(1)                  R=+152.8  p~=  5.1e-47    FAIL !!!       
  BRank(12):512(2)                  R=+337.8  p~=  1.0e-102   FAIL !!!!!     
  BRank(12):768(1)                  R=+411.1  p~=  8.8e-125   FAIL !!!!!     
  BRank(12):1K(2)                   R=+824.9  p~=  2.3e-249   FAIL !!!!!!    
  BRank(12):1536(1)                 R=+927.7  p~=  2.6e-280   FAIL !!!!!!    
  ...and 76 test result(s) without anomalies


real	0m3.644s
user	0m3.492s
sys	0m0.128s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xab1d78d0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xab1d78d0
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+207266 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+212209 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+211233 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+206187 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+248999 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+279872 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+227682 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+195552 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+112019 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+69227  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+41033  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20468  p =  1e-5195    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11745  p =  3e-2640    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5857  p =  4e-1317    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+21814  p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R= +9785  p =  2e-8344    FAIL !!!!!!!!  
  Gap-16:B                          R=+48454  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+34317  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+17169  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+12144  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R= +8576  p =  1e-7500    FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R= +4310  p =  2e-3769    FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R= +3003  p =  3e-2632    FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R= +2148  p =  3e-1755    FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R= +1502  p =  1e-1245    FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+748.5  p =  2.0e-620   FAIL !!!!!!!   
  FPF-14+6/16:(10,14-6)             R=+545.9  p =  8.6e-418   FAIL !!!!!!!   
  FPF-14+6/16:(11,14-7)             R=+368.4  p =  4.7e-293   FAIL !!!!!!    
  FPF-14+6/16:(12,14-8)             R=+253.3  p =  2.6e-182   FAIL !!!!!!    
  FPF-14+6/16:(13,14-8)             R=+139.3  p =  2.6e-100   FAIL !!!!!     
  FPF-14+6/16:(14,14-9)             R= +99.9  p =  3.4e-63    FAIL !!!!      
  FPF-14+6/16:all                   R=+33157  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+407811724 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R= +72.4  p =  2.8e-61    FAIL !!!!      
  BRank(12):128(4)                  R= +29.5  p~=  1.8e-16    FAIL !         
  BRank(12):256(4)                  R=+137.8  p~=  4.0e-74    FAIL !!!!      
  BRank(12):384(1)                  R=+152.8  p~=  5.1e-47    FAIL !!!       
  BRank(12):512(2)                  R=+337.8  p~=  1.0e-102   FAIL !!!!!     
  BRank(12):768(1)                  R=+411.1  p~=  8.8e-125   FAIL !!!!!     
  BRank(12):1K(2)                   R=+824.9  p~=  2.3e-249   FAIL !!!!!!    
  BRank(12):1536(1)                 R=+927.7  p~=  2.6e-280   FAIL !!!!!!    
  ...and 76 test result(s) without anomalies


real	0m3.513s
user	0m3.396s
sys	0m0.108s
*/
