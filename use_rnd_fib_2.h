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
/// @created on 2019-12-08 02:58:20 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e2ae05fa-041c-4033-ba46-dfc905ce47d2                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib2;
/* TEST00
time ./MRndCPP 10 
1062339175
1857199017
2295839526
2809988542
22956491
3565999184
4216451073
4209978137
3776636362
2242267147
6633772557753845308

real	0m1.777s
user	0m1.776s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.10e+07  |2524935704|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.97445397|  PASSED  

real	0m22.005s
user	0m22.300s
sys	0m0.618s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xdd37ff98
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xdd37ff98
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.1  p =1-5.7e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xdd37ff98
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xdd37ff98
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xdd37ff98
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xdd37ff98
length= 1.500 gigabytes (2^30.585 bytes), time= 31.8 seconds
  no anomalies in 187 test result(s)


real	0m32.648s
user	0m32.417s
sys	0m0.988s
*/
/* TEST00
time ./MRndCPP 10 
1062339175
1857199017
2295839526
2809988542
22956491
3565999184
4216451073
4209978137
3776636362
2242267147
6633772557753845308

real	0m1.821s
user	0m1.817s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.53e+07  |3234997848|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.56502594|  PASSED  

real	0m21.933s
user	0m22.222s
sys	0m0.677s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x97aefeff
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x97aefeff
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.6  p =1-3.2e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x97aefeff
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.9  p =1-1.7e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x97aefeff
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x97aefeff
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x97aefeff
length= 2 gigabytes (2^31 bytes), time= 42.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x97aefeff
length= 4 gigabytes (2^32 bytes), time= 81.2 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x97aefeff
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x97aefeff
length= 15.250 gigabytes (2^33.931 bytes), time= 302 seconds
  no anomalies in 226 test result(s)


real	5m2.914s
user	5m1.201s
sys	0m9.596s
*/
