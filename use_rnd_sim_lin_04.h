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
/// @created on 2019-12-08 03:02:06 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e8930fec-02e5-4925-88da-85500faa1cd4                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin04;
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_04 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
3497841202
67965748
527131255
182892387
247477018
3100051826
4294841257269238130

real	0m12.462s
user	0m12.450s
sys	0m0.004s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_04 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.26e+07  | 549532629|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.12669136|  PASSED  

real	0m1.549s
user	0m1.646s
sys	0m0.055s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_04 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
3497841202
67965748
527131255
182892387
247477018
3100051826
4294841257269238130

real	0m12.177s
user	0m12.176s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_SIM_LIN_04 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.66e+07  |1787514656|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.41946891|  PASSED  

real	0m1.522s
user	0m1.624s
sys	0m0.041s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2506deb1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2506deb1
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2506deb1
length= 256 megabytes (2^28 bytes), time= 4.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2506deb1
length= 512 megabytes (2^29 bytes), time= 9.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2506deb1
length= 1 gigabyte (2^30 bytes), time= 18.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2506deb1
length= 2 gigabytes (2^31 bytes), time= 36.1 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.7  p =  3.4e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2506deb1
length= 4 gigabytes (2^32 bytes), time= 69.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2506deb1
length= 5.750 gigabytes (2^32.524 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m41.003s
user	1m40.650s
sys	0m4.070s
*/
