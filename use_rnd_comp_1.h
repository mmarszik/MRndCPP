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
/// @created on 2019-12-08 02:55:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5d4c00a3-ad7a-4d61-8d5a-8bdc687545af                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_sim_lin.h"

using TRnd = RndComp<RndSimLin01,RndSimLin03,10>;

/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_COMP_1 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
1585682339
2494875974
1870629489
3954548876
3038153523
1357523021
4294804113599460716

real	0m10.562s
user	0m10.548s
sys	0m0.004s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_COMP_1 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.29e+07  | 479135559|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.10683065|  PASSED  

real	0m1.559s
user	0m1.623s
sys	0m0.092s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_COMP_1 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
1585682339
2494875974
1870629489
3954548876
3038153523
1357523021
4294804113599460716

real	0m9.979s
user	0m9.971s
sys	0m0.004s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_COMP_1 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.82e+07  |2198056711|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.70288651|  PASSED  

real	0m1.517s
user	0m1.575s
sys	0m0.095s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb48378a3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb48378a3
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb48378a3
length= 256 megabytes (2^28 bytes), time= 4.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +5.1  p =  7.5e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb48378a3
length= 512 megabytes (2^29 bytes), time= 9.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb48378a3
length= 1 gigabyte (2^30 bytes), time= 18.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb48378a3
length= 2 gigabytes (2^31 bytes), time= 35.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb48378a3
length= 4 gigabytes (2^32 bytes), time= 69.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xb48378a3
length= 6.000 gigabytes (2^32.585 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.356s
user	1m43.628s
sys	0m4.534s
*/
