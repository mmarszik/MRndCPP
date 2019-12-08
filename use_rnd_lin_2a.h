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
/// @created on 2019-12-08 02:59:53 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 7d31d573-c8f4-4651-ab8e-a8f0b614d221                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2a;
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_LIN_2a -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
3526497076
1652012899
857344370
3687836006
3554605929
3543896927
4294942179596550710

real	0m24.819s
user	0m24.802s
sys	0m0.008s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_LIN_2a -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.71e+07  |3698161112|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.71881843|  PASSED  

real	0m1.633s
user	0m1.791s
sys	0m0.079s
*/
/* TEST00
c++ -std=c++11 -O3 -DUSE_RND_LIN_2a -DTEST00_PROGRAM *.cpp -o mknapsack 
time ./mknapsack 
3526497076
1652012899
857344370
3687836006
3554605929
3543896927
4294942179596550710

real	0m24.276s
user	0m24.261s
sys	0m0.004s
*/
/* TEST01
c++ -std=c++11 -O3 -DUSE_RND_LIN_2a -DTEST01_PROGRAM *.cpp -o mknapsack
time ./mknapsack | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.42e+07  |2442235651|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.78932608|  PASSED  

real	0m1.549s
user	0m1.710s
sys	0m0.068s
*/
/* TEST01
time ./mknapsack | PractRand/RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9e49f69e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9e49f69e
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.8  p =  4.7e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9e49f69e
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9e49f69e
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x9e49f69e
length= 1 gigabyte (2^30 bytes), time= 20.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9e49f69e
length= 2 gigabytes (2^31 bytes), time= 39.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x9e49f69e
length= 4 gigabytes (2^32 bytes), time= 75.5 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -5.7  p =1-1.8e-4   mildly suspicious
  Gap-16:B                          R=  -8.4  p =1-4.4e-7   very suspicious  
  [Low1/32]Gap-16:A                 R=  -3.4  p =1-3.0e-3   unusual          
  ...and 153 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9e49f69e
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -7.2  p =1-5.0e-6   suspicious       
  [Low1/32]BCFN(2+5,13-5,T)         R= +11.0  p =  1.6e-4   unusual          
  ...and 158 test result(s) without anomalies


real	1m44.308s
user	1m44.496s
sys	0m3.907s
*/
