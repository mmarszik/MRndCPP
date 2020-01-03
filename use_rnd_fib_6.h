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
/// @created on 2019-12-18 01:27:56 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 34ad2af5-13d2-41ad-91c6-3a57fb71c743                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib6;
/* TEST00
time ./MRndCPP 10 
2081380970
2217102834
767025141
666141267
3082540733
2684899364
463511456
700845793
75980505
789290638
12552766132903402612

real	0m2.292s
user	0m2.288s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.21e+07  |1132273132|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.73460657|  PASSED  

real	0m22.136s
user	0m22.607s
sys	0m0.526s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xeac7bec3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xeac7bec3
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xeac7bec3
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xeac7bec3
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-2,T)                  R=  -8.6  p =1-8.9e-5   mildly suspicious
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xeac7bec3
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xeac7bec3
length= 1.500 gigabytes (2^30.585 bytes), time= 32.4 seconds
  no anomalies in 187 test result(s)


real	0m33.223s
user	0m32.863s
sys	0m1.174s
*/
/* TEST00
time ./MRndCPP 10 
2081380970
2217102834
767025141
666141267
3082540733
2684899364
463511456
700845793
75980505
789290638
12552766132903402612

real	0m2.286s
user	0m2.286s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.22e+07  |3537014576|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.24518588|  PASSED  

real	0m21.975s
user	0m22.350s
sys	0m0.689s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x550c1e32
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x550c1e32
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  7.8e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x550c1e32
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +6.1  p =  3.2e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x550c1e32
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x550c1e32
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x550c1e32
length= 2 gigabytes (2^31 bytes), time= 42.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x550c1e32
length= 4 gigabytes (2^32 bytes), time= 81.8 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x550c1e32
length= 8 gigabytes (2^33 bytes), time= 162 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x550c1e32
length= 15.000 gigabytes (2^33.907 bytes), time= 300 seconds
  no anomalies in 226 test result(s)


real	5m1.267s
user	4m59.047s
sys	0m10.329s
*/
