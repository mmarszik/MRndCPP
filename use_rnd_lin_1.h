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
/// @created on 2019-12-08 02:59:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8e200c1f-f53f-48b8-9d3a-c301e6742617                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin1;
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_LIN_1 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
2883782798
713566596
2633069086
1884896272
1650841066
4093672931
4294871465982536524

real	0m3.179s
user	0m3.174s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_LIN_1 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.71e+07  |2812186193|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.37264554|  PASSED  

real	0m1.598s
user	0m1.599s
sys	0m0.087s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_LIN_1 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
2883782798
713566596
2633069086
1884896272
1650841066
4093672931
4294871465982536524

real	0m3.032s
user	0m3.029s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_LIN_1 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.70e+07  |4128579855|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.59967812|  PASSED  

real	0m1.519s
user	0m1.540s
sys	0m0.065s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x33793c93
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x33793c93
length= 128 megabytes (2^27 bytes), time= 2.0 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x33793c93
length= 256 megabytes (2^28 bytes), time= 4.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x33793c93
length= 512 megabytes (2^29 bytes), time= 8.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +13.8  p =  2.5e-6   suspicious       
  [Low1/32]FPF-14+6/16:all          R=  -5.4  p =1-7.2e-5   mildly suspicious
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x33793c93
length= 1 gigabyte (2^30 bytes), time= 17.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.4  p =  5.9e-3   unusual          
  [Low1/32]FPF-14+6/16:all          R=  -8.0  p =1-2.3e-7   very suspicious  
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x33793c93
length= 2 gigabytes (2^31 bytes), time= 33.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -7.6  p =1-1.0e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= -11.4  p =1-9.9e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +15.7  p =  2.2e-7   very suspicious  
  ...and 145 test result(s) without anomalies

rng=RNG_stdin32, seed=0x33793c93
length= 4 gigabytes (2^32 bytes), time= 64.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -12.3  p =1-4.7e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R= -12.1  p =1-8.5e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -9.5  p =1-2.0e-8   very suspicious  
  [Low1/32]FPF-14+6/16:(3,14-1)     R=  -7.9  p =1-1.7e-7   suspicious       
  [Low1/32]FPF-14+6/16:all          R= -22.2  p =1-2.1e-21    FAIL !!        
  [Low1/32]FPF-14+6/16:all2         R= +89.4  p =  5.1e-35    FAIL !!!       
  ...and 150 test result(s) without anomalies


real	1m5.135s
user	1m4.371s
sys	0m2.783s
*/
