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
/// @created on 2019-12-08 03:01:10 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 1558b1d5-f930-4fcb-99b9-14149fee8f7f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_ranlux48.h"

using TRnd = RndRanlux48;
/* TEST00
time ./MRndCPP 10 
4198816209
4194992856
2088193992
1710084186
3995703066
4262331212
2783766682
2038190755
411394916
2410138185
4699862920179767358

real	2m8.745s
user	2m8.626s
sys	0m0.056s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  7.25e+06  |3728006529|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.75733999|  PASSED  

real	0m23.918s
user	0m42.343s
sys	0m0.350s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xbb33be27
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xbb33be27
length= 64 megabytes (2^26 bytes), time= 3.3 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xbb33be27
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xbb33be27
length= 256 megabytes (2^28 bytes), time= 14.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xbb33be27
length= 512 megabytes (2^29 bytes), time= 28.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xbb33be27
length= 768.000 megabytes (2^29.585 bytes), time= 42.1 seconds
  no anomalies in 178 test result(s)


real	0m42.921s
user	0m45.809s
sys	0m0.631s
*/
/* TEST00
time ./MRndCPP 10 
4198816209
4194992856
2088193992
1710084186
3995703066
4262331212
2783766682
2038190755
411394916
2410138185
4699862920179767358

real	2m9.341s
user	2m9.274s
sys	0m0.044s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  7.18e+06  |3618768035|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.86051981|  PASSED  

real	0m23.945s
user	0m42.386s
sys	0m0.428s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe8cb1156
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe8cb1156
length= 64 megabytes (2^26 bytes), time= 3.3 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 256 megabytes (2^28 bytes), time= 14.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 512 megabytes (2^29 bytes), time= 28.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-3,T)          R=  -7.0  p =1-8.1e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xe8cb1156
length= 1 gigabyte (2^30 bytes), time= 55.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 2 gigabytes (2^31 bytes), time= 109 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 4 gigabytes (2^32 bytes), time= 214 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xe8cb1156
length= 5.750 gigabytes (2^32.524 bytes), time= 307 seconds
  no anomalies in 210 test result(s)


real	5m7.729s
user	5m29.724s
sys	0m4.739s
*/
/* TEST00
time ./MRndCPP 10 
4198816209
4194992856
2088193992
1710084186
3995703066
4262331212
2783766682
2038190755
411394916
2410138185
4699862920179767358

real	2m55.637s
user	2m55.428s
sys	0m0.044s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  5.08e+06  |  15953464|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.96064243|  PASSED  

real	0m48.038s
user	0m47.088s
sys	0m0.880s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xff657fe9
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xff657fe9
length= 32 megabytes (2^25 bytes), time= 2.1 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 64 megabytes (2^26 bytes), time= 5.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 128 megabytes (2^27 bytes), time= 9.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 256 megabytes (2^28 bytes), time= 19.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 512 megabytes (2^29 bytes), time= 36.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 1 gigabyte (2^30 bytes), time= 70.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 2 gigabytes (2^31 bytes), time= 139 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 4 gigabytes (2^32 bytes), time= 275 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 8 gigabytes (2^33 bytes), time= 549 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xff657fe9
length= 14.750 gigabytes (2^33.883 bytes), time= 1011 seconds
  no anomalies in 226 test result(s)


real	16m52.413s
user	16m39.148s
sys	0m12.276s
*/
