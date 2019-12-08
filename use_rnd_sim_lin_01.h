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
/// @created on 2019-12-08 03:01:43 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token fbaedebf-7449-4f02-b0cd-897861d37c93                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin01;
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_01 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
101698089
4251195690
2830903318
1364170308
1447982495
3147756237
4294851922066955999

real	0m9.915s
user	0m9.915s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_01 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.97e+07  |2400341317|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.04206504|  PASSED  

real	0m1.521s
user	0m1.578s
sys	0m0.085s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_01 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
101698089
4251195690
2830903318
1364170308
1447982495
3147756237
4294851922066955999

real	0m9.916s
user	0m9.904s
sys	0m0.004s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_01 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.91e+07  |2592437804|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.66197523|  PASSED  

real	0m1.602s
user	0m1.695s
sys	0m0.051s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_01 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
101698089
4251195690
2830903318
1364170308
1447982495
3147756237
4294851922066955999

real	0m9.824s
user	0m9.821s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_01 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.58e+07  |3998852354|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.51203335|  PASSED  

real	0m1.732s
user	0m1.770s
sys	0m0.099s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3422d27a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3422d27a
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3422d27a
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x3422d27a
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x3422d27a
length= 1 gigabyte (2^30 bytes), time= 18.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x3422d27a
length= 2 gigabytes (2^31 bytes), time= 35.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x3422d27a
length= 4 gigabytes (2^32 bytes), time= 69.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x3422d27a
length= 6.000 gigabytes (2^32.585 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.187s
user	1m43.645s
sys	0m4.199s
*/
