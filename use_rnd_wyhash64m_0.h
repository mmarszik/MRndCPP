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
/// @created on 2020-01-01 18:35:02 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e2451ddb-da73-44a5-a148-6c01dba38de6                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_wyhash64m.h"

using TRnd = RndWyhash64m_0;
/* TEST00
time ./MRndCPP 10 
4024201812
2477793677
477949105
4158765349
2938368548
3026072107
2213534633
788899272
4277323452
567142895
9523540150327040907

real	0m3.393s
user	0m3.393s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.22e+07  | 372411678|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.92910077|  PASSED  

real	0m22.045s
user	0m22.537s
sys	0m0.677s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x9d4fa437
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x9d4fa437
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x9d4fa437
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x9d4fa437
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x9d4fa437
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x9d4fa437
length= 1.500 gigabytes (2^30.585 bytes), time= 32.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.8e-3   unusual          
  ...and 186 test result(s) without anomalies


real	0m33.113s
user	0m32.897s
sys	0m1.090s
*/
/* TEST00
time ./MRndCPP 10 
4024201812
2477793677
477949105
4158765349
2938368548
3026072107
2213534633
788899272
4277323452
567142895
9523540150327040907

real	0m3.481s
user	0m3.471s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.00e+07  | 593721463|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.06512448|  PASSED  

real	0m22.194s
user	0m22.868s
sys	0m0.648s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x1d80a1b9
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x1d80a1b9
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 512 megabytes (2^29 bytes), time= 11.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 1 gigabyte (2^30 bytes), time= 22.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 2 gigabytes (2^31 bytes), time= 43.7 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 4 gigabytes (2^32 bytes), time= 84.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 8 gigabytes (2^33 bytes), time= 167 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 14.750 gigabytes (2^33.883 bytes), time= 306 seconds
  no anomalies in 226 test result(s)


real	5m6.425s
user	5m4.482s
sys	0m10.890s
*/
