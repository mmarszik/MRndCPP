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
/// @created on 2019-12-08 03:00:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token fcc8a5df-c948-4aa9-85f8-4774fcd52024                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin6;
/* TEST00
time ./MRndCPP 10 
2746169428
2224423598
606132397
4050087301
1037474402
100677599
388087734
363123235
2805653570
3441914168
17270905218059461377

real	0m2.579s
user	0m2.579s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.53e+07  |3362191376|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.32491317|  PASSED  

real	0m22.086s
user	0m22.354s
sys	0m0.629s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x92ccb72f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x92ccb72f
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R=  +9.3  p =  1.3e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x92ccb72f
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x92ccb72f
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  -6.9  p =1-1.7e-3   unusual          
  [Low1/32]BCFN(2+3,13-5,T)         R= +11.5  p =  1.0e-4   unusual          
  ...and 169 test result(s) without anomalies

rng=RNG_stdin, seed=0x92ccb72f
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x92ccb72f
length= 2 gigabytes (2^31 bytes), time= 41.9 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.3  p =1-1.5e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x92ccb72f
length= 4 gigabytes (2^32 bytes), time= 80.7 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x92ccb72f
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x92ccb72f
length= 15.250 gigabytes (2^33.931 bytes), time= 303 seconds
  no anomalies in 226 test result(s)


real	5m3.409s
user	5m1.782s
sys	0m9.598s
*/
/* TEST00
time ./MRndCPP 10 
2746169428
2224423598
606132397
4050087301
1037474402
100677599
388087734
363123235
2805653570
3441914168
17270905218059461377

real	0m3.096s
user	0m3.092s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.24e+07  |2196602875|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.43801949|  PASSED  

real	0m24.885s
user	0m24.388s
sys	0m0.464s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x5590b8e3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x5590b8e3
length= 128 megabytes (2^27 bytes), time= 3.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -3.9  p =1-7.9e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x5590b8e3
length= 256 megabytes (2^28 bytes), time= 6.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.5  p =1-2.8e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x5590b8e3
length= 512 megabytes (2^29 bytes), time= 12.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 1 gigabyte (2^30 bytes), time= 24.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 2 gigabytes (2^31 bytes), time= 46.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 4 gigabytes (2^32 bytes), time= 89.7 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 8 gigabytes (2^33 bytes), time= 184 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 16 gigabytes (2^34 bytes), time= 370 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x5590b8e3
length= 32 gigabytes (2^35 bytes), time= 733 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.7e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x5590b8e3
length= 43.250 gigabytes (2^35.435 bytes), time= 1002 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +5.3  p =  6.6e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -4.5  p =1-3.5e-3   unusual          
  ...and 240 test result(s) without anomalies


real	16m43.442s
user	16m25.640s
sys	0m16.832s
*/
