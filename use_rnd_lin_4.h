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

using TRnd = RndLin4;
/* TEST00
time ./MRndCPP 10 
4224035437
1877448252
3194539910
2768115908
831174961
2425604188
4272881177
2266054290
195033450
3480155772
10648871365191019624

real	0m9.658s
user	0m9.654s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.60e+07  |1066773079|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.46046015|  PASSED  

real	0m21.928s
user	0m23.186s
sys	0m0.596s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xdaca7aeb
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xdaca7aeb
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-3,T)         R=  -6.9  p =1-9.7e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xdaca7aeb
length= 1 gigabyte (2^30 bytes), time= 23.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 2 gigabytes (2^31 bytes), time= 45.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 4 gigabytes (2^32 bytes), time= 88.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 8 gigabytes (2^33 bytes), time= 175 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 14.000 gigabytes (2^33.807 bytes), time= 301 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -4.0  p =1-7.5e-4   unusual          
  ...and 218 test result(s) without anomalies


real	5m2.272s
user	5m2.184s
sys	0m9.479s
*/
