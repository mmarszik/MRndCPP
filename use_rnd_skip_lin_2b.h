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
/// @created on 2019-12-08 03:02:44 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 57c91b2b-729f-4973-847f-f893792db016                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_skip_lin.h"

using TRnd = RndSkipLin2b;
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_SKIP_LIN_2b -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
878713968
123488888
3326016157
2631003783
2609393688
3629582358
4294963195293194679

real	1m38.938s
user	1m38.841s
sys	0m0.024s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SKIP_LIN_2b -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.91e+07  |  93162057|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.47807386|  PASSED  

real	0m1.863s
user	0m2.327s
sys	0m0.058s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_SKIP_LIN_2b -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
878713968
123488888
3326016157
2631003783
2609393688
3629582358
4294963195293194679

real	1m37.961s
user	1m37.873s
sys	0m0.052s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SKIP_LIN_2b -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.92e+07  | 250201195|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.54283662|  PASSED  

real	0m1.796s
user	0m2.261s
sys	0m0.045s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x64f78f19
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x64f78f19
length= 128 megabytes (2^27 bytes), time= 3.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x64f78f19
length= 256 megabytes (2^28 bytes), time= 7.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x64f78f19
length= 512 megabytes (2^29 bytes), time= 15.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x64f78f19
length= 1 gigabyte (2^30 bytes), time= 29.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x64f78f19
length= 2 gigabytes (2^31 bytes), time= 57.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x64f78f19
length= 3.500 gigabytes (2^31.807 bytes), time= 102 seconds
  no anomalies in 153 test result(s)


real	1m42.824s
user	1m45.660s
sys	0m3.027s
*/
