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
/// @created on 2019-12-08 02:59:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8e200c1f-f53f-48b8-9d3a-c301e6742617                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin1;
/* TEST00
time ./MRndCPP 10 
3232027252
3217903424
1121769180
2368350810
1204451062
95313796
1556492576
3984424168
2349071394
2602532608
5260524025060744915

real	0m3.232s
user	0m3.232s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.18e+07  |3948360108|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.04652740|  PASSED  

real	0m22.246s
user	0m22.741s
sys	0m0.592s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xfa4fdb87
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xfa4fdb87
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 256 megabytes (2^28 bytes), time= 6.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 1 gigabyte (2^30 bytes), time= 23.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 2 gigabytes (2^31 bytes), time= 44.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 4 gigabytes (2^32 bytes), time= 84.9 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 8 gigabytes (2^33 bytes), time= 167 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 14.750 gigabytes (2^33.883 bytes), time= 301 seconds
  no anomalies in 226 test result(s)


real	5m2.289s
user	5m0.410s
sys	0m9.959s
*/
/* TEST00
time ./MRndCPP 10 
3232027252
3217903424
1121769180
2368350810
1204451062
95313796
1556492576
3984424168
2349071394
2602532608
5260524025060744915

real	0m3.387s
user	0m3.380s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.15e+07  |1343249807|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.89204516|  PASSED  

real	0m25.026s
user	0m24.388s
sys	0m0.608s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x986e279e
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x986e279e
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-3,T)                  R=  -6.6  p =1-1.5e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x986e279e
length= 256 megabytes (2^28 bytes), time= 6.3 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 512 megabytes (2^29 bytes), time= 12.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 1 gigabyte (2^30 bytes), time= 24.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.3  p =1-4.2e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x986e279e
length= 2 gigabytes (2^31 bytes), time= 46.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 4 gigabytes (2^32 bytes), time= 90.1 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 8 gigabytes (2^33 bytes), time= 182 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 16 gigabytes (2^34 bytes), time= 369 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 32 gigabytes (2^35 bytes), time= 736 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 43.000 gigabytes (2^35.426 bytes), time= 1001 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -3.9  p =1-9.0e-3   unusual          
  ...and 241 test result(s) without anomalies


real	16m41.834s
user	16m23.356s
sys	0m17.212s
*/
