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
/// @created on 2019-12-08 03:00:04 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 313a58a6-94ed-47d2-9194-ccfa066f2f73                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin5;
/* TEST00
time ./MRndCPP 10 
1429888350
1930996510
2751695229
3357925846
1627701116
123001771
3961838821
4157523336
1308695079
20649485
842287435395954407

real	0m12.874s
user	0m12.869s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.43e+07  |3369213727|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.84538763|  PASSED  

real	0m22.647s
user	0m24.362s
sys	0m0.585s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xefd4e771
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xefd4e771
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.0  p =1-8.2e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xefd4e771
length= 256 megabytes (2^28 bytes), time= 6.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 512 megabytes (2^29 bytes), time= 12.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 1 gigabyte (2^30 bytes), time= 25.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 2 gigabytes (2^31 bytes), time= 48.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 4 gigabytes (2^32 bytes), time= 94.0 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 8 gigabytes (2^33 bytes), time= 186 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 13.250 gigabytes (2^33.728 bytes), time= 303 seconds
  no anomalies in 219 test result(s)


real	5m4.302s
user	5m5.130s
sys	0m9.671s
*/
