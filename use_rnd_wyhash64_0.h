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
/// @created on 2019-12-27 07:48:33 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token a745e2db-c712-4240-98d9-3261ec0aa803                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_wyhash64.h"

using TRnd = RndWyhash64_0;
/* TEST00
time ./MRndCPP 10 
1371554712
1725976859
2059674324
3068496199
1121289917
2763103988
3220689998
3307308312
785231875
2664775828
12126879156003626991

real	0m1.293s
user	0m1.293s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.33e+07  |1414257420|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.10086550|  PASSED  

real	0m21.850s
user	0m22.073s
sys	0m0.614s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xfad58024
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xfad58024
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xfad58024
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xfad58024
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xfad58024
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xfad58024
length= 1.500 gigabytes (2^30.585 bytes), time= 31.4 seconds
  no anomalies in 187 test result(s)


real	0m32.254s
user	0m32.039s
sys	0m0.958s
*/
/* TEST00
time ./MRndCPP 10 
1371554712
1725976859
2059674324
3068496199
1121289917
2763103988
3220689998
3307308312
785231875
2664775828
12126879156003626991

real	0m1.338s
user	0m1.337s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.30e+07  |4025933842|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.53696689|  PASSED  

real	0m22.369s
user	0m22.687s
sys	0m0.730s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7fccc5cf
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7fccc5cf
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7fccc5cf
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7fccc5cf
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7fccc5cf
length= 1 gigabyte (2^30 bytes), time= 21.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:all2         R=  -1.7  p =1-4.7e-5   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x7fccc5cf
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x7fccc5cf
length= 4 gigabytes (2^32 bytes), time= 81.1 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -4.3  p =1-9.5e-4   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x7fccc5cf
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -4.2  p =1-1.0e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x7fccc5cf
length= 15.250 gigabytes (2^33.931 bytes), time= 304 seconds
  no anomalies in 226 test result(s)


real	5m5.012s
user	5m3.189s
sys	0m9.771s
*/
