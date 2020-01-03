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
/// @created on 2019-12-08 02:57:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8f4635a2-d7ca-4771-81ec-c2e4a2e59fab                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib1;
/* TEST00
time ./MRndCPP 10 
1220954891
1906405657
4025907378
1480416779
3910681319
1864078567
3311039578
2412509864
3575263857
1987687355
6823153464398581791

real	0m1.770s
user	0m1.766s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.42e+07  |1486167501|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.99978428|   WEAK   

real	0m21.848s
user	0m22.267s
sys	0m0.499s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x1bcc3dc1
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x1bcc3dc1
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x1bcc3dc1
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x1bcc3dc1
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x1bcc3dc1
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x1bcc3dc1
length= 1.500 gigabytes (2^30.585 bytes), time= 31.4 seconds
  no anomalies in 187 test result(s)


real	0m32.232s
user	0m31.963s
sys	0m1.034s
*/
/* TEST00
time ./MRndCPP 10 
1220954891
1906405657
4025907378
1480416779
3910681319
1864078567
3311039578
2412509864
3575263857
1987687355
6823153464398581791

real	0m1.775s
user	0m1.775s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.96e+07  |1543414454|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.79752284|  PASSED  

real	0m22.176s
user	0m22.481s
sys	0m0.720s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xacd7a9c6
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xacd7a9c6
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xacd7a9c6
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xacd7a9c6
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xacd7a9c6
length= 1 gigabyte (2^30 bytes), time= 22.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xacd7a9c6
length= 2 gigabytes (2^31 bytes), time= 42.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +6.0  p =  3.6e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0xacd7a9c6
length= 4 gigabytes (2^32 bytes), time= 82.7 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xacd7a9c6
length= 8 gigabytes (2^33 bytes), time= 163 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -5.7  p =1-6.4e-4   mildly suspicious
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0xacd7a9c6
length= 15.000 gigabytes (2^33.907 bytes), time= 301 seconds
  no anomalies in 226 test result(s)


real	5m1.457s
user	4m59.100s
sys	0m10.410s
*/
