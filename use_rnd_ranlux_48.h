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
/// @created on 2019-12-08 03:01:10 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 1558b1d5-f930-4fcb-99b9-14149fee8f7f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <random>

using TRnd = std::ranlux48;
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_RANLUX_48 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
21483893246620
238899489166337
203958363389037
103768142174670
136654051415491
222121208920115
15767956139539552824

real	4m18.581s
user	4m18.185s
sys	0m0.212s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_RANLUX_48 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  6.51e+06  |1740918798|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.73588992|  PASSED  

real	0m3.031s
user	0m3.974s
sys	0m0.062s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_RANLUX_48 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
21483893246620
238899489166337
203958363389037
103768142174670
136654051415491
222121208920115
15767956139539552824

real	3m59.700s
user	3m59.589s
sys	0m0.036s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_RANLUX_48 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  6.99e+06  |2511702485|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.31492473|  PASSED  

real	0m2.757s
user	0m3.635s
sys	0m0.049s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5264e1b8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5264e1b8
length= 64 megabytes (2^26 bytes), time= 3.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.5  p =  1.7e-3   unusual          
  ...and 107 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5264e1b8
length= 128 megabytes (2^27 bytes), time= 6.8 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5264e1b8
length= 256 megabytes (2^28 bytes), time= 13.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5264e1b8
length= 512 megabytes (2^29 bytes), time= 26.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5264e1b8
length= 1 gigabyte (2^30 bytes), time= 51.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5264e1b8
length= 2 gigabytes (2^31 bytes), time= 102 seconds
  no anomalies in 148 test result(s)


real	1m42.617s
user	1m45.343s
sys	0m1.673s
*/
