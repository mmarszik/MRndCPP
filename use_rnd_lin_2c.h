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
/// @created on 2019-12-08 03:00:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token fcc8a5df-c948-4aa9-85f8-4774fcd52024                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2c;
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_LIN_2c -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
842299235
443731814
3731438431
2717125802
1624458502
4017950209
4294985143840708432

real	0m48.958s
user	0m48.950s
sys	0m0.004s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_LIN_2c -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.20e+07  |3387853501|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.98945383|  PASSED  

real	0m1.619s
user	0m1.987s
sys	0m0.031s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_LIN_2c -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
842299235
443731814
3731438431
2717125802
1624458502
4017950209
4294985143840708432

real	0m48.307s
user	0m48.283s
sys	0m0.004s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_LIN_2c -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.30e+07  | 916251598|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.62360808|  PASSED  

real	0m1.579s
user	0m1.909s
sys	0m0.067s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x53903788
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x53903788
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x53903788
length= 256 megabytes (2^28 bytes), time= 6.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x53903788
length= 512 megabytes (2^29 bytes), time= 11.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -4.1  p =1-1.5e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x53903788
length= 1 gigabyte (2^30 bytes), time= 23.1 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.1  p =  8.0e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x53903788
length= 2 gigabytes (2^31 bytes), time= 44.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x53903788
length= 4 gigabytes (2^32 bytes), time= 87.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x53903788
length= 4.750 gigabytes (2^32.248 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.9  p =1-1.0e-3   unusual          
  ...and 158 test result(s) without anomalies


real	1m44.408s
user	1m46.052s
sys	0m3.270s
*/
