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
/// @created on 2019-12-08 02:58:42 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token c07c75d9-db05-492c-84fb-b06ccecfbe9b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib3;
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_FIB_3 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
3237930143
924043937
3976843214
62872134
3455282647
3156509901
4294960267345604469

real	0m5.651s
user	0m5.638s
sys	0m0.004s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_FIB_3 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.54e+07  |2645543873|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.97123992|  PASSED  

real	0m1.619s
user	0m1.660s
sys	0m0.072s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_FIB_3 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
3237930143
924043937
3976843214
62872134
3455282647
3156509901
4294960267345604469

real	0m5.231s
user	0m5.229s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_FIB_3 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.54e+07  |2588780310|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.15653878|  PASSED  

real	0m1.525s
user	0m1.570s
sys	0m0.063s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1ea5cdfa
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1ea5cdfa
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x1ea5cdfa
length= 256 megabytes (2^28 bytes), time= 4.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x1ea5cdfa
length= 512 megabytes (2^29 bytes), time= 9.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x1ea5cdfa
length= 1 gigabyte (2^30 bytes), time= 17.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x1ea5cdfa
length= 2 gigabytes (2^31 bytes), time= 34.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x1ea5cdfa
length= 4 gigabytes (2^32 bytes), time= 66.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x1ea5cdfa
length= 6.250 gigabytes (2^32.644 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.826s
user	1m42.902s
sys	0m4.480s
*/
