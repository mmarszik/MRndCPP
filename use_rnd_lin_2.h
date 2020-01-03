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
/// @created on 2019-12-08 02:59:27 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token fc39ac9b-61c1-4572-a7a0-b05628f15f6e                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2;
/* TEST00
time ./MRndCPP 10 
3031446162
318891177
2522508198
3234795101
887273959
4106570558
3280274796
396131901
3586669307
4038731636
16324785193472887027

real	0m6.456s
user	0m6.448s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.19e+07  |3312934271|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.49810811|  PASSED  

real	0m22.031s
user	0m22.865s
sys	0m0.624s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe5b46801
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe5b46801
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe5b46801
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  -4.1  p =1-5.7e-4   unusual          
  [Low1/8]FPF-14+6/16:cross         R=  +4.2  p =  9.0e-4   unusual          
  ...and 160 test result(s) without anomalies

rng=RNG_stdin, seed=0xe5b46801
length= 512 megabytes (2^29 bytes), time= 11.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xe5b46801
length= 1 gigabyte (2^30 bytes), time= 22.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe5b46801
length= 2 gigabytes (2^31 bytes), time= 43.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe5b46801
length= 4 gigabytes (2^32 bytes), time= 84.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+4,13-1,T)                  R=  +9.3  p =  1.7e-4   unusual          
  [Low1/32]BCFN(2+5,13-5,T)         R=  -7.2  p =1-1.0e-4   unusual          
  ...and 201 test result(s) without anomalies

rng=RNG_stdin, seed=0xe5b46801
length= 8 gigabytes (2^33 bytes), time= 168 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xe5b46801
length= 14.500 gigabytes (2^33.858 bytes), time= 302 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -3.9  p =1-8.1e-3   unusual          
  ...and 219 test result(s) without anomalies


real	5m3.281s
user	5m2.456s
sys	0m9.800s
*/
