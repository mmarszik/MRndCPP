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
/// @created on 2019-12-18 01:27:46 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token a2dd08a7-9dc2-4201-9715-62da74a61002                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib5;
/* TEST00
time ./MRndCPP 10 
1351727642
2871725058
1378769685
540271206
1044876935
933927816
3532849240
2515431399
2492945960
2077743540
9787216154887690234

real	0m2.326s
user	0m2.323s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.07e+07  | 702788210|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.97752643|  PASSED  

real	0m22.106s
user	0m22.519s
sys	0m0.593s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x79024106
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x79024106
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x79024106
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x79024106
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x79024106
length= 1 gigabyte (2^30 bytes), time= 22.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x79024106
length= 1.500 gigabytes (2^30.585 bytes), time= 32.5 seconds
  no anomalies in 187 test result(s)


real	0m33.368s
user	0m33.000s
sys	0m1.181s
*/
/* TEST00
time ./MRndCPP 10 
1351727642
2871725058
1378769685
540271206
1044876935
933927816
3532849240
2515431399
2492945960
2077743540
9787216154887690234

real	0m2.317s
user	0m2.316s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.99e+07  | 146443646|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.78595915|  PASSED  

real	0m21.944s
user	0m22.376s
sys	0m0.643s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x3d610997
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x3d610997
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x3d610997
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +7.4  p =  8.3e-4   mildly suspicious
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x3d610997
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.3  p =  2.3e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x3d610997
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x3d610997
length= 2 gigabytes (2^31 bytes), time= 42.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x3d610997
length= 4 gigabytes (2^32 bytes), time= 82.0 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x3d610997
length= 8 gigabytes (2^33 bytes), time= 162 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.2  p =1-1.1e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x3d610997
length= 15.000 gigabytes (2^33.907 bytes), time= 301 seconds
  no anomalies in 226 test result(s)


real	5m2.181s
user	5m0.055s
sys	0m10.228s
*/
