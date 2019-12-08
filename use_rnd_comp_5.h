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
/// @created on 2019-12-08 02:56:45 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 20611663-ea55-4b72-863b-3cc66e970785                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib2, RndFib3, 9 >;

/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_COMP_5 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
1623909407
3839886961
2841323221
3500042686
1429884035
682825171
4295078105127789029

real	0m8.484s
user	0m8.447s
sys	0m0.024s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_COMP_5 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.44e+07  |1149247849|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.78263630|  PASSED  

real	0m1.564s
user	0m1.656s
sys	0m0.072s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_COMP_5 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
1623909407
3839886961
2841323221
3500042686
1429884035
682825171
4295078105127789029

real	0m8.023s
user	0m8.021s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_COMP_5 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.47e+07  |3313652794|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.24986369|  PASSED  

real	0m1.560s
user	0m1.660s
sys	0m0.071s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7b10d8b7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7b10d8b7
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7b10d8b7
length= 256 megabytes (2^28 bytes), time= 4.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7b10d8b7
length= 512 megabytes (2^29 bytes), time= 9.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7b10d8b7
length= 1 gigabyte (2^30 bytes), time= 18.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7b10d8b7
length= 2 gigabytes (2^31 bytes), time= 35.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x7b10d8b7
length= 4 gigabytes (2^32 bytes), time= 68.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x7b10d8b7
length= 6.000 gigabytes (2^32.585 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.509s
user	1m42.127s
sys	0m4.124s
*/
