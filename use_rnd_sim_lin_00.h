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
/// @created on 2019-12-08 03:01:18 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 15ea84c7-9601-4790-a433-ebd1f3508e8f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin00;
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_00 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
831796958
1444530311
1060550711
1963460622
3039897336
2908147360
4294932564533402517

real	0m3.011s
user	0m3.011s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_00 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.91e+07  |2592859147|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.61078740|  PASSED  

real	0m1.608s
user	0m1.507s
sys	0m0.099s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_00 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
831796958
1444530311
1060550711
1963460622
3039897336
2908147360
4294932564533402517

real	0m3.022s
user	0m3.018s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_00 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.64e+07  |2992977183|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.88536887|  PASSED  

real	0m1.500s
user	0m1.499s
sys	0m0.083s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 

real	1m4.803s
user	1m4.136s
sys	0m2.734s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_00 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
831796958
1444530311
1060550711
1963460622
3039897336
2908147360
4294932564533402517

real	0m3.107s
user	0m3.101s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_00 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.63e+07  |3791830893|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.43564483|  PASSED  

real	0m1.564s
user	0m1.572s
sys	0m0.080s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd87b683a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd87b683a
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+6,13-5,T)                  R= +11.9  p =  7.5e-5   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd87b683a
length= 256 megabytes (2^28 bytes), time= 4.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd87b683a
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xd87b683a
length= 1 gigabyte (2^30 bytes), time= 19.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -6.1  p =1-1.4e-5   suspicious       
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd87b683a
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -6.6  p =1-5.6e-6   suspicious       
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd87b683a
length= 4 gigabytes (2^32 bytes), time= 71.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.1  p =  7.5e-3   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -10.0  p =1-6.4e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -8.0  p =1-4.6e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:(3,14-1)     R=  -7.3  p =1-6.6e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= -16.0  p =1-3.0e-15    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +43.9  p =  4.6e-18    FAIL !         
  ...and 150 test result(s) without anomalies


real	1m12.110s
user	1m11.052s
sys	0m3.162s
*/
