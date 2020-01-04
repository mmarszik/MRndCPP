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
/// @created on 2019-12-08 02:59:39 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 729bd7da-da79-4064-8171-841d0860907d                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin3;
/* TEST00
time ./MRndCPP 10 
759489551
2100059763
2805980634
1843960949
2572860381
3517922070
791717751
3767186846
2911853192
2619761019
18004368246707399018

real	0m9.723s
user	0m9.705s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.29e+07  | 386494892|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.55474376|  PASSED  

real	0m22.358s
user	0m23.715s
sys	0m0.574s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xbc77be87
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xbc77be87
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 256 megabytes (2^28 bytes), time= 6.3 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 512 megabytes (2^29 bytes), time= 12.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 1 gigabyte (2^30 bytes), time= 24.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 2 gigabytes (2^31 bytes), time= 47.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 4 gigabytes (2^32 bytes), time= 90.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 8 gigabytes (2^33 bytes), time= 178 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 14.000 gigabytes (2^33.807 bytes), time= 305 seconds
  no anomalies in 219 test result(s)


real	5m5.998s
user	5m6.058s
sys	0m9.806s
*/
/* TEST00
time ./MRndCPP 10 
759489551
2100059763
2805980634
1843960949
2572860381
3517922070
791717751
3767186846
2911853192
2619761019
18004368246707399018

real	0m10.022s
user	0m10.016s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.65e+07  |3728054889|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.81294145|  PASSED  

real	0m26.096s
user	0m25.632s
sys	0m0.440s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x2637504d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x2637504d
length= 128 megabytes (2^27 bytes), time= 3.0 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 256 megabytes (2^28 bytes), time= 6.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:B                  R=  -4.6  p =1-7.1e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x2637504d
length= 512 megabytes (2^29 bytes), time= 13.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 1 gigabyte (2^30 bytes), time= 25.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 2 gigabytes (2^31 bytes), time= 49.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 4 gigabytes (2^32 bytes), time= 94.9 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 8 gigabytes (2^33 bytes), time= 195 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 16 gigabytes (2^34 bytes), time= 396 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.5  p =1-7.1e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x2637504d
length= 32 gigabytes (2^35 bytes), time= 789 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 40.750 gigabytes (2^35.349 bytes), time= 1003 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-0,T)          R=  -7.1  p =1-1.4e-3   unusual          
  ...and 238 test result(s) without anomalies


real	16m44.255s
user	16m26.940s
sys	0m15.992s
*/
