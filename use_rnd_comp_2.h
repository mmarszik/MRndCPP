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
/// @created on 2019-12-08 02:56:07 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 0b0fbb96-789c-4fd8-802d-50b3d0f3757f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib0, RndFib1, 7 >;

/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_COMP_2 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
2991690402
7978384
2837370390
3531070337
1249900283
1051446622
4294899586533496677

real	0m12.673s
user	0m12.658s
sys	0m0.012s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_COMP_2 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.35e+07  |2114400455|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.96890243|  PASSED  

real	0m1.616s
user	0m1.696s
sys	0m0.078s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_COMP_2 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
2991690402
7978384
2837370390
3531070337
1249900283
1051446622
4294899586533496677

real	0m12.667s
user	0m12.666s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_COMP_2 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.65e+07  |2114942890|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.85395333|  PASSED  

real	0m1.538s
user	0m1.636s
sys	0m0.072s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x65d2b2c4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x65d2b2c4
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x65d2b2c4
length= 256 megabytes (2^28 bytes), time= 4.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x65d2b2c4
length= 512 megabytes (2^29 bytes), time= 9.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.3  p =1-4.5e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x65d2b2c4
length= 1 gigabyte (2^30 bytes), time= 18.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x65d2b2c4
length= 2 gigabytes (2^31 bytes), time= 35.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x65d2b2c4
length= 4 gigabytes (2^32 bytes), time= 68.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x65d2b2c4
length= 6.000 gigabytes (2^32.585 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.946s
user	1m42.302s
sys	0m4.466s
*/
