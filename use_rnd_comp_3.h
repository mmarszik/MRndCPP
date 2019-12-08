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
/// @created on 2019-12-08 02:56:18 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 0ff3b5f3-789f-404a-9120-d809aa46f6fd                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib0a, RndFib1a, 7 >;

/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_COMP_3 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
1973536367
3381483824
3556148829
2430275353
1787476771
1747937403
4294807626616871213

real	0m14.484s
user	0m14.451s
sys	0m0.020s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_COMP_3 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.68e+07  |3863204255|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.43411334|  PASSED  

real	0m1.609s
user	0m1.762s
sys	0m0.043s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_COMP_3 -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
1973536367
3381483824
3556148829
2430275353
1787476771
1747937403
4294807626616871213

real	0m11.799s
user	0m11.795s
sys	0m0.000s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_COMP_3 -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.50e+07  | 983363780|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.60714080|  PASSED  

real	0m1.559s
user	0m1.648s
sys	0m0.103s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc4264dee
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc4264dee
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.5e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc4264dee
length= 256 megabytes (2^28 bytes), time= 4.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc4264dee
length= 512 megabytes (2^29 bytes), time= 9.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xc4264dee
length= 1 gigabyte (2^30 bytes), time= 18.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-5,T)         R=  -6.4  p =1-6.3e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc4264dee
length= 2 gigabytes (2^31 bytes), time= 36.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xc4264dee
length= 4 gigabytes (2^32 bytes), time= 69.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.1  p =1-1.5e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc4264dee
length= 5.750 gigabytes (2^32.524 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -3.9  p =1-2.9e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m40.738s
user	1m40.588s
sys	0m4.054s
*/
