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
/// @created on 2019-12-08 03:02:32 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 787c4945-7336-49a5-b536-8364bf0b4a8f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_skip_lin.h"

using TRnd = RndSkipLin1;
/* TEST00
time ./MRndCPP 
2410088158
2584699367
3398162018
1879748187
2318546736
4079247759
220760647925760

real	0m34.616s
user	0m34.504s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.08e+07  |4136193936|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.28315140|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.83996145|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.50124759|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.00000000|  FAILED  
   diehard_bitstream|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_opso|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_oqso|   0|   2097152|     100|0.00000000|  FAILED  
         diehard_dna|   0|   2097152|     100|0.00000000|  FAILED  
diehard_count_1s_str|   0|    256000|     100|0.00000000|  FAILED  
diehard_count_1s_byt|   0|    256000|     100|0.00000000|  FAILED  
 diehard_parking_lot|   0|     12000|     100|0.63022075|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.82643589|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.99500871|   WEAK   
     diehard_squeeze|   0|    100000|     100|0.41314280|  PASSED  
        diehard_sums|   0|       100|     100|0.00509730|  PASSED  
        diehard_runs|   0|    100000|     100|0.98732944|  PASSED  
        diehard_runs|   0|    100000|     100|0.93015644|  PASSED  
       diehard_craps|   0|    200000|     100|0.33245760|  PASSED  
       diehard_craps|   0|    200000|     100|0.33652514|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.28143780|  PASSED  
            sts_runs|   2|    100000|     100|0.19792486|  PASSED  
          sts_serial|   1|    100000|     100|0.07679391|  PASSED  
          sts_serial|   2|    100000|     100|0.00000074|  FAILED  
          sts_serial|   3|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.00008744|   WEAK   
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.00028922|   WEAK   
          sts_serial|   5|    100000|     100|0.00000000|  FAILED  
          sts_serial|   5|    100000|     100|0.00000026|  FAILED  
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
         rgb_bitdist|   7|    100000|     100|0.11439114|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   9|    100000|     100|0.87993406|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.00017395|   WEAK   
         rgb_bitdist|  11|    100000|     100|0.67809822|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.55723917|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.55091658|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.38521083|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.76075343|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.49122394|  PASSED  
    rgb_permutations|   2|    100000|     100|0.71591339|  PASSED  
    rgb_permutations|   3|    100000|     100|0.45973910|  PASSED  
    rgb_permutations|   4|    100000|     100|0.94587945|  PASSED  
    rgb_permutations|   5|    100000|     100|0.91805003|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.53242317|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.52331579|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.99249953|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.99972642|   WEAK   
      rgb_lagged_sum|   4|   1000000|     100|0.42263684|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.50471861|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.57340799|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.75337579|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.25609334|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.38753360|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.95311869|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.05973250|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.03225885|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.95364486|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.26667733|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.79538352|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.33400060|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.96913065|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.78313324|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.01540576|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.78312615|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.47758498|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.91180364|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.49950172|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.25638421|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.77939800|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.59949533|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.12251790|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.64870956|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.67269465|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.88904308|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.91908948|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.36905149|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.89879381|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|1.00000000|  FAILED  
             dab_dct| 256|     50000|       1|0.00000000|  FAILED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.54637802|  PASSED  
        dab_filltree|  32|  15000000|       1|0.51374278|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.00000000|  FAILED  
       dab_filltree2|   1|   5000000|       1|0.00000000|  FAILED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|1.00000000|  FAILED  

real	53m29.831s
user	49m47.912s
sys	3m33.708s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd73bd0c6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd73bd0c6
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +2797  p =  1e-1323    FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+503.2  p =  5.9e-238   FAIL !!!!!!    
  BCFN(2+2,13-3,T)                  R=+312.7  p =  8.5e-148   FAIL !!!!!     
  BCFN(2+3,13-3,T)                  R=+335.9  p =  8.8e-159   FAIL !!!!!     
  BCFN(2+4,13-4,T)                  R=+539.1  p =  1.8e-235   FAIL !!!!!!    
  BCFN(2+5,13-5,T)                  R=+411.6  p =  2.6e-161   FAIL !!!!!     
  BCFN(2+6,13-5,T)                  R=+400.9  p =  4.1e-157   FAIL !!!!!     
  BCFN(2+7,13-6,T)                  R=+533.8  p =  3.0e-183   FAIL !!!!!!    
  BCFN(2+8,13-6,T)                  R=+398.5  p =  6.5e-137   FAIL !!!!!     
  BCFN(2+9,13-7,T)                  R= +29.0  p =  2.2e-9   very suspicious  
  BCFN(2+11,13-8,T)                 R= +23.3  p =  7.3e-7   mildly suspicious
  DC6-9x1Bytes-1                    R= +3285  p =  1e-2017    FAIL !!!!!!!!  
  Gap-16:A                          R=+527117 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+1978349 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -64.8  p =1-2.7e-59    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= -64.3  p =1-7.9e-59    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= -64.9  p =1-2.4e-59    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= -44.9  p =1-1.6e-45    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= -32.2  p =1-2.1e-31    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -32.1  p =1-2.5e-31    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -22.9  p =1-8.8e-21    FAIL !         
  FPF-14+6/16:(7,14-4)              R= -15.4  p =1-9.5e-16    FAIL           
  FPF-14+6/16:(8,14-5)              R= -10.7  p =1-8.2e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(9,14-5)              R= -10.9  p =1-5.6e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(10,14-6)             R=  -6.6  p =1-1.0e-6   mildly suspicious
  FPF-14+6/16:all                   R=-133.3  p =1-8.4e-131   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +4138  p =  1e-1546    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+794.5  p~=  3.4e-240   FAIL !!!!!!    
  BRank(12):768(1)                  R=+734.0  p~=  5.5e-222   FAIL !!!!!!    
  BRank(12):1K(2)                   R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+46826  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+57952  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+42739  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+42561  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+50622  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+33413  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+33065  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+12797  p =  6e-3850    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R= +8217  p =  2e-2086    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +8194  p =  2e-2080    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R= +5852  p =  4e-1316    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +4382  p =  1.1e-985   FAIL !!!!!!!   
  [Low8/32]DC6-9x1Bytes-1           R=+282008 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+746595 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+3027731 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+489125 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+345874 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+244585 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+144976 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+102526 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+72515  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+51301  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+25942  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+25574  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+10596  p =  6e-8433    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+663327 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+133375935138 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +4111  p =  2e-3233    FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +1124  p~=  2.2e-598   FAIL !!!!!!!   
  [Low8/32]BRank(12):256(2)         R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+12150  p~=  1e-3658    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+11713  p~=  5e-3527    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+20539  p~=  6e-6184    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+566057 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+390178 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+203559 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+104928 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+65226  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+39325  p =  4e-9981    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+19863  p =  7e-5042    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11499  p =  7e-2585    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5769  p =  1e-1297    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+224119 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223042 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888480 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+227094 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+289115 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+370854 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+265393 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 14 test result(s) without anomalies


real	0m2.888s
user	0m2.708s
sys	0m0.160s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x22083cd9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x22083cd9
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +2819  p =  3e-1334    FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+508.8  p =  1.2e-240   FAIL !!!!!!    
  BCFN(2+2,13-3,T)                  R=+291.0  p =  1.6e-137   FAIL !!!!!     
  BCFN(2+3,13-3,T)                  R=+321.6  p =  5.3e-152   FAIL !!!!!     
  BCFN(2+4,13-4,T)                  R=+490.9  p =  2.0e-214   FAIL !!!!!!    
  BCFN(2+5,13-5,T)                  R=+390.1  p =  6.6e-153   FAIL !!!!!     
  BCFN(2+6,13-5,T)                  R=+392.9  p =  5.5e-154   FAIL !!!!!     
  BCFN(2+7,13-6,T)                  R=+492.0  p =  6.4e-169   FAIL !!!!!!    
  BCFN(2+8,13-6,T)                  R= +1859  p =  3.8e-637   FAIL !!!!!!!   
  BCFN(2+9,13-7,T)                  R= +26.5  p =  1.3e-8   very suspicious  
  BCFN(2+10,13-8,T)                 R= +18.4  p =  1.2e-5   unusual          
  BCFN(2+11,13-8,T)                 R= +34.1  p =  1.3e-9   very suspicious  
  BCFN(2+12,13-9,T)                 R= +34.8  p =  6.2e-9   very suspicious  
  DC6-9x1Bytes-1                    R= +3292  p =  7e-2022    FAIL !!!!!!!!  
  Gap-16:A                          R=+527207 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+1978579 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -65.8  p =1-3.1e-60    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= -63.7  p =1-3.0e-58    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= -63.9  p =1-2.0e-58    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= -46.3  p =1-5.2e-47    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= -32.2  p =1-1.8e-31    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -33.3  p =1-1.5e-32    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -22.5  p =1-1.8e-20    FAIL !         
  FPF-14+6/16:(7,14-4)              R= -15.6  p =1-6.8e-16    FAIL           
  FPF-14+6/16:(8,14-5)              R= -13.1  p =1-2.4e-13    FAIL           
  FPF-14+6/16:(9,14-5)              R= -10.7  p =1-7.9e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(10,14-6)             R=  -8.7  p =1-3.5e-9   very suspicious  
  FPF-14+6/16:(12,14-8)             R=  -5.0  p =1-1.6e-5   unusual          
  FPF-14+6/16:all                   R=-134.0  p =1-1.6e-131   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +4207  p =  4e-1572    FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=  -2.7  p =1-6.2e-5   mildly suspicious
  BRank(12):512(2)                  R=+794.5  p~=  3.4e-240   FAIL !!!!!!    
  BRank(12):768(1)                  R=+734.0  p~=  5.5e-222   FAIL !!!!!!    
  BRank(12):1K(2)                   R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+46826  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+57953  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+42740  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+42561  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+50620  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+39452  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+67523  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+14943  p =  3e-4495    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+11146  p =  9e-2830    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +8102  p =  3e-2057    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R= +8780  p =  5e-1974    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +4382  p =  1.1e-985   FAIL !!!!!!!   
  [Low8/32]DC6-9x1Bytes-1           R=+282008 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+746595 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+3027731 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+489125 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+345874 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+244585 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+144976 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+102526 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+72515  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+51301  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+25942  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+25574  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+10596  p =  6e-8433    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+663327 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+133375932089 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +4111  p =  2e-3233    FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +1124  p~=  2.2e-598   FAIL !!!!!!!   
  [Low8/32]BRank(12):256(2)         R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+12150  p~=  1e-3658    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+11713  p~=  5e-3527    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+20539  p~=  6e-6184    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+566057 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+390178 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+203559 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+104928 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+65226  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+39325  p =  4e-9981    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+19863  p =  7e-5042    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11499  p =  7e-2585    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5769  p =  1e-1297    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+224119 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223042 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888480 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+227094 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+289115 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+370854 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+265393 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 10 test result(s) without anomalies


real	0m2.789s
user	0m2.716s
sys	0m0.068s
*/
/* TEST00
time ./MRndCPP 
2410088158
2584699367
3398162018
1879748187
2318546736
4079247759
220760647925760

real	0m35.142s
user	0m34.984s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.08e+07  |1477195113|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.80509948|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.25021208|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.06798412|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.00000000|  FAILED  
   diehard_bitstream|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_opso|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_oqso|   0|   2097152|     100|0.00000000|  FAILED  
         diehard_dna|   0|   2097152|     100|0.00000000|  FAILED  
diehard_count_1s_str|   0|    256000|     100|0.00000000|  FAILED  
diehard_count_1s_byt|   0|    256000|     100|0.00000000|  FAILED  
 diehard_parking_lot|   0|     12000|     100|0.22336727|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.59453433|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.87912197|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.21586966|  PASSED  
        diehard_sums|   0|       100|     100|0.10632681|  PASSED  
        diehard_runs|   0|    100000|     100|0.19197718|  PASSED  
        diehard_runs|   0|    100000|     100|0.64191645|  PASSED  
       diehard_craps|   0|    200000|     100|0.61610889|  PASSED  
       diehard_craps|   0|    200000|     100|0.99331396|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.05800319|  PASSED  
            sts_runs|   2|    100000|     100|0.36327461|  PASSED  
          sts_serial|   1|    100000|     100|0.27733181|  PASSED  
          sts_serial|   2|    100000|     100|0.00002735|   WEAK   
          sts_serial|   3|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.00003764|   WEAK   
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.00015586|   WEAK   
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
         rgb_bitdist|   6|    100000|     100|0.00002556|   WEAK   
         rgb_bitdist|   7|    100000|     100|0.00863869|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   9|    100000|     100|0.59225148|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.09798954|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.13043387|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.79162245|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.07777434|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.33779877|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.31422232|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.78601172|  PASSED  
    rgb_permutations|   2|    100000|     100|0.60073812|  PASSED  
    rgb_permutations|   3|    100000|     100|0.93744355|  PASSED  
    rgb_permutations|   4|    100000|     100|0.31299801|  PASSED  
    rgb_permutations|   5|    100000|     100|0.54342516|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.60165274|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.03420518|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.75502260|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.18667368|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.75754526|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.81221488|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.44683261|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.17157177|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.84041026|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.74130993|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.00018246|   WEAK   
      rgb_lagged_sum|  11|   1000000|     100|0.52470112|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.92975798|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.03431472|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.97712148|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.79848034|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.25500783|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.18233068|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.74542117|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.66800674|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.04932709|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.05846875|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.85296822|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.04745660|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.84361205|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.93151103|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.50503413|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.42652743|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.52000233|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.24480410|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.99775466|   WEAK   
      rgb_lagged_sum|  31|   1000000|     100|0.55817980|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.73283868|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.01736529|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|1.00000000|  FAILED  
             dab_dct| 256|     50000|       1|0.00000000|  FAILED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.86907574|  PASSED  
        dab_filltree|  32|  15000000|       1|0.22104071|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.00000000|  FAILED  
       dab_filltree2|   1|   5000000|       1|0.00000000|  FAILED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|1.00000000|  FAILED  

real	49m10.489s
user	45m30.032s
sys	3m33.760s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb2868dd9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb2868dd9
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +2748  p =  2e-1300    FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+506.9  p =  1.0e-239   FAIL !!!!!!    
  BCFN(2+2,13-3,T)                  R=+303.1  p =  3.0e-143   FAIL !!!!!     
  BCFN(2+3,13-3,T)                  R=+321.6  p =  5.0e-152   FAIL !!!!!     
  BCFN(2+4,13-4,T)                  R=+491.7  p =  8.9e-215   FAIL !!!!!!    
  BCFN(2+5,13-5,T)                  R=+387.8  p =  5.6e-152   FAIL !!!!!     
  BCFN(2+6,13-5,T)                  R=+377.8  p =  4.6e-148   FAIL !!!!!     
  BCFN(2+7,13-6,T)                  R=+541.8  p =  5.4e-186   FAIL !!!!!!    
  BCFN(2+8,13-6,T)                  R=+406.0  p =  1.7e-139   FAIL !!!!!     
  BCFN(2+9,13-7,T)                  R= +22.6  p =  2.0e-7   suspicious       
  BCFN(2+10,13-8,T)                 R= +18.1  p =  1.5e-5   unusual          
  BCFN(2+11,13-8,T)                 R= +32.5  p =  3.4e-9   very suspicious  
  BCFN(2+12,13-9,T)                 R=+104.9  p =  1.1e-24    FAIL !!        
  DC6-9x1Bytes-1                    R= +3276  p =  2e-2012    FAIL !!!!!!!!  
  Gap-16:A                          R=+527196 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+1978533 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -65.2  p =1-1.1e-59    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= -65.0  p =1-1.7e-59    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= -64.2  p =1-1.1e-58    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= -45.5  p =1-3.8e-46    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= -30.7  p =1-5.9e-30    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -32.4  p =1-1.1e-31    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -23.2  p =1-4.1e-21    FAIL !         
  FPF-14+6/16:(7,14-4)              R= -15.2  p =1-1.5e-15    FAIL           
  FPF-14+6/16:(8,14-5)              R= -10.9  p =1-4.7e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(9,14-5)              R= -11.2  p =1-2.6e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(10,14-6)             R=  -8.2  p =1-1.3e-8   very suspicious  
  FPF-14+6/16:(11,14-7)             R=  -5.5  p =1-1.1e-5   unusual          
  FPF-14+6/16:all                   R=-133.5  p =1-5.4e-131   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +4164  p =  2e-1556    FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=  -2.5  p =1-1.6e-4   unusual          
  BRank(12):512(2)                  R=+794.5  p~=  3.4e-240   FAIL !!!!!!    
  BRank(12):768(1)                  R=+734.0  p~=  5.5e-222   FAIL !!!!!!    
  BRank(12):1K(2)                   R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+46826  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+57953  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+42739  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+42561  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+50621  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+33412  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+33063  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+12798  p =  6e-3850    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+14269  p =  2e-3622    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+12224  p =  2e-3103    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R= +8780  p =  5e-1974    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +4382  p =  1.1e-985   FAIL !!!!!!!   
  [Low8/32]DC6-9x1Bytes-1           R=+282008 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+746595 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+3027731 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+489125 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+345874 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+244585 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+144976 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+102526 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+72515  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+51301  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+25942  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+25574  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+10596  p =  6e-8433    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+663327 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+133375935138 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +4111  p =  2e-3233    FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +1124  p~=  2.2e-598   FAIL !!!!!!!   
  [Low8/32]BRank(12):256(2)         R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+12150  p~=  1e-3658    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+11713  p~=  5e-3527    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+20539  p~=  6e-6184    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+566057 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+390178 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+203559 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+104928 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+65226  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+39325  p =  4e-9981    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+19863  p =  7e-5042    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11499  p =  7e-2585    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5769  p =  1e-1297    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+224119 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223042 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888480 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+227094 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+289115 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+370854 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+265393 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 10 test result(s) without anomalies


real	0m3.383s
user	0m3.204s
sys	0m0.164s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa3eee7c6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa3eee7c6
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +2827  p =  1e-1337    FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+527.7  p =  1.5e-249   FAIL !!!!!!    
  BCFN(2+2,13-3,T)                  R=+302.1  p =  8.6e-143   FAIL !!!!!     
  BCFN(2+3,13-3,T)                  R=+315.5  p =  3.9e-149   FAIL !!!!!     
  BCFN(2+4,13-4,T)                  R=+525.7  p =  1.2e-229   FAIL !!!!!!    
  BCFN(2+5,13-5,T)                  R=+347.3  p =  3.9e-136   FAIL !!!!!     
  BCFN(2+6,13-5,T)                  R=+372.5  p =  5.1e-146   FAIL !!!!!     
  BCFN(2+7,13-6,T)                  R=+533.1  p =  5.3e-183   FAIL !!!!!!    
  BCFN(2+8,13-6,T)                  R= +1940  p =  9.5e-665   FAIL !!!!!!!   
  BCFN(2+9,13-7,T)                  R= +32.2  p =  2.4e-10   VERY SUSPICIOUS 
  BCFN(2+11,13-8,T)                 R= +43.3  p =  6.4e-12   VERY SUSPICIOUS 
  BCFN(2+12,13-9,T)                 R= +42.3  p =  1.2e-10   VERY SUSPICIOUS 
  DC6-9x1Bytes-1                    R= +3292  p =  5e-2022    FAIL !!!!!!!!  
  Gap-16:A                          R=+527214 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+1978576 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -65.2  p =1-1.2e-59    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= -64.4  p =1-6.2e-59    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= -64.8  p =1-2.9e-59    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= -45.7  p =1-2.3e-46    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= -32.5  p =1-9.8e-32    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -31.9  p =1-3.7e-31    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -22.9  p =1-7.6e-21    FAIL !         
  FPF-14+6/16:(7,14-4)              R= -15.8  p =1-4.0e-16    FAIL           
  FPF-14+6/16:(8,14-5)              R= -11.9  p =1-4.2e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(9,14-5)              R= -11.9  p =1-4.2e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(10,14-6)             R=  -8.1  p =1-1.5e-8   very suspicious  
  FPF-14+6/16:(11,14-7)             R=  -6.6  p =1-6.7e-7   mildly suspicious
  FPF-14+6/16:all                   R=-134.2  p =1-1.1e-131   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +4205  p =  1e-1571    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+794.5  p~=  3.4e-240   FAIL !!!!!!    
  BRank(12):768(1)                  R=+734.0  p~=  5.5e-222   FAIL !!!!!!    
  BRank(12):1K(2)                   R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+46826  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+57953  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+42740  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+42561  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+50620  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+39452  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+67523  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+14943  p =  3e-4495    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+11146  p =  9e-2830    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +8102  p =  3e-2057    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R= +8780  p =  5e-1974    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +4382  p =  1.1e-985   FAIL !!!!!!!   
  [Low8/32]DC6-9x1Bytes-1           R=+282008 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+746595 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+3027731 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+489125 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+345874 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+244585 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+144976 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+102526 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+72515  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+51301  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+25942  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+25574  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+10596  p =  6e-8433    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+663327 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+133375932089 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +4111  p =  2e-3233    FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +1124  p~=  2.2e-598   FAIL !!!!!!!   
  [Low8/32]BRank(12):256(2)         R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+12150  p~=  1e-3658    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+11713  p~=  5e-3527    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+20539  p~=  6e-6184    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+566057 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+390178 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+203559 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+104928 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+65226  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+39325  p =  4e-9981    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+19863  p =  7e-5042    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11499  p =  7e-2585    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5769  p =  1e-1297    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+224119 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223042 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888480 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+227094 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+289115 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+370854 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+265393 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 12 test result(s) without anomalies


real	0m2.844s
user	0m2.736s
sys	0m0.104s
*/
