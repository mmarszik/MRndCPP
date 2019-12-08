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
/// @created on 2019-12-08 02:55:44 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f3d861a8-a940-418e-93ba-af4c51f21089                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_sim_lin.h"

using TRnd = RndComp<RndSimLin00,RndSimLin02,10>;

/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_COMP_0 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
844443584
2504572837
278761187
3746838637
2321442934
2618716438
4294909042388508095

real	0m3.715s
user	0m3.709s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_COMP_0 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.40e+07  |3004457633|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.90768960|  PASSED  

real	0m1.691s
user	0m1.727s
sys	0m0.075s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_COMP_0 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
844443584
2504572837
278761187
3746838637
2321442934
2618716438
4294909042388508095

real	0m3.425s
user	0m3.421s
sys	0m0.004s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_COMP_0 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.58e+07  |1867468092|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.02524661|  PASSED  

real	0m1.520s
user	0m1.539s
sys	0m0.076s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7b72324c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7b72324c
length= 128 megabytes (2^27 bytes), time= 2.0 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7b72324c
length= 256 megabytes (2^28 bytes), time= 4.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.6  p = 0.988     unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7b72324c
length= 512 megabytes (2^29 bytes), time= 9.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7b72324c
length= 1 gigabyte (2^30 bytes), time= 17.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.5  p =1-5.4e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7b72324c
length= 2 gigabytes (2^31 bytes), time= 33.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x7b72324c
length= 4 gigabytes (2^32 bytes), time= 65.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x7b72324c
length= 6.250 gigabytes (2^32.644 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.882s
user	1m41.634s
sys	0m4.796s
*/
