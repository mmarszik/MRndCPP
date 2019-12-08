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
/// @created on 2019-12-08 03:01:00 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token b16b7874-0043-4a8e-82b2-466e9cf64f8d                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <random>

#include "defs.h"

using TRnd = std::mt19937_64;
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_MT19937_64 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
17945193607607270098
13741097643249962112
11301849514948974241
9366053755680083846
1706575204080707832
11158352244489866165
12047051887021333710

real	0m13.028s
user	0m13.023s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_MT19937_64 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.67e+07  |1797552338|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.79222150|  PASSED  

real	0m1.852s
user	0m1.845s
sys	0m0.131s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_MT19937_64 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
17945193607607270098
13741097643249962112
11301849514948974241
9366053755680083846
1706575204080707832
11158352244489866165
12047051887021333710

real	0m11.569s
user	0m11.568s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_MT19937_64 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.68e+07  |3918092808|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.50452151|  PASSED  

real	0m1.515s
user	0m1.578s
sys	0m0.087s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xee5c4dbb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xee5c4dbb
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xee5c4dbb
length= 256 megabytes (2^28 bytes), time= 4.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xee5c4dbb
length= 512 megabytes (2^29 bytes), time= 9.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xee5c4dbb
length= 1 gigabyte (2^30 bytes), time= 17.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xee5c4dbb
length= 2 gigabytes (2^31 bytes), time= 34.2 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -5.5  p =1-6.4e-5   mildly suspicious
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xee5c4dbb
length= 4 gigabytes (2^32 bytes), time= 66.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xee5c4dbb
length= 6.250 gigabytes (2^32.644 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.472s
user	1m42.931s
sys	0m4.253s
*/
