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
c++ -std=c++11 -O3 -DUSE_RND_SKIP_LIN_1 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
2410088158
2584699367
3398162018
1879748187
2318546736
4079247759
4295044343103591536

real	0m8.020s
user	0m8.018s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SKIP_LIN_1 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.61e+07  |4130645485|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.41104849|  PASSED  

real	0m1.591s
user	0m1.661s
sys	0m0.062s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_SKIP_LIN_1 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
2410088158
2584699367
3398162018
1879748187
2318546736
4079247759
4295044343103591536

real	0m7.755s
user	0m7.746s
sys	0m0.004s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SKIP_LIN_1 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.65e+07  |   1772288|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.44312648|  PASSED  

real	0m1.517s
user	0m1.573s
sys	0m0.061s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xeaef7090
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xeaef7090
length= 256 megabytes (2^28 bytes), time= 3.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R= +4549  p =  1e-2324    FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+907.0  p =  3.9e-463   FAIL !!!!!!!   
  BCFN(2+2,13-3,T)                  R=+592.2  p =  4.2e-280   FAIL !!!!!!    
  BCFN(2+3,13-3,T)                  R=+644.6  p =  6.6e-305   FAIL !!!!!!    
  BCFN(2+4,13-3,T)                  R= +1029  p =  7.0e-487   FAIL !!!!!!!   
  BCFN(2+5,13-4,T)                  R=+786.1  p =  2.1e-343   FAIL !!!!!!!   
  BCFN(2+6,13-5,T)                  R=+811.2  p =  9.5e-318   FAIL !!!!!!    
  BCFN(2+7,13-5,T)                  R=+953.1  p =  2.7e-373   FAIL !!!!!!!   
  BCFN(2+8,13-6,T)                  R=+129.2  p =  1.1e-44    FAIL !!!       
  BCFN(2+9,13-6,T)                  R=+176.1  p =  9.8e-61    FAIL !!!!      
  BCFN(2+10,13-7,T)                 R= +68.1  p =  4.1e-21    FAIL !!        
  BCFN(2+11,13-8,T)                 R= +52.6  p =  2.7e-14    FAIL           
  DC6-9x1Bytes-1                    R= +6124  p =  1e-3211    FAIL !!!!!!!!  
  Gap-16:A                          R=+984179 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+3598931 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -66.3  p =1-1.2e-60    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= -66.2  p =1-1.5e-60    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= -64.5  p =1-5.2e-59    FAIL !!!!      
  FPF-14+6/16:(3,14-0)              R= -65.1  p =1-1.3e-59    FAIL !!!!      
  FPF-14+6/16:(4,14-1)              R= -46.5  p =1-3.6e-47    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -32.4  p =1-1.2e-31    FAIL !!!       
  FPF-14+6/16:(6,14-2)              R= -31.8  p =1-4.4e-31    FAIL !!!       
  FPF-14+6/16:(7,14-3)              R= -22.5  p =1-1.8e-20    FAIL !         
  FPF-14+6/16:(8,14-4)              R= -16.2  p =1-1.4e-16    FAIL !         
  FPF-14+6/16:(9,14-5)              R= -11.8  p =1-6.3e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(10,14-5)             R= -11.9  p =1-4.0e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(11,14-6)             R=  -7.1  p =1-2.6e-7   mildly suspicious
  FPF-14+6/16:all                   R=-150.3  p =1-1.5e-147   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +5112  p =  6e-1996    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+794.5  p~=  3.4e-240   FAIL !!!!!!    
  BRank(12):768(1)                  R=+734.0  p~=  5.5e-222   FAIL !!!!!!    
  BRank(12):1K(2)                   R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R= +8678  p~=  3e-2613    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+141811 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+167752 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+124451 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+116616 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+101259 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+84305  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+46572  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+32119  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+25855  p =  2e-7777    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+24463  p =  2e-6209    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+12159  p =  8e-3087    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +8780  p =  5e-1974    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+513421 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1355124 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+5439137 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+978378 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-0)     R=+579980 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-1)     R=+410121 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+290017 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-2)     R=+146687 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-3)     R=+103736 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-4)     R=+73370  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+51906  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-5)     R=+37907  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-6)     R=+17445  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-7)    R= +7043  p =  4e-5605    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+1183178 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+477456603017 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +8005  p =  1e-7047    FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +1124  p~=  2.2e-598   FAIL !!!!!!!   
  [Low8/32]BRank(12):256(2)         R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+12150  p~=  1e-3658    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+11713  p~=  5e-3527    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+20539  p~=  6e-6184    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+965115 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+642398 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+407139 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209877 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107204 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+373001 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354164 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690853 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+454252 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-2)     R=+454252 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+674493 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+513934 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 14 test result(s) without anomalies


real	0m4.459s
user	0m4.376s
sys	0m0.219s
*/
