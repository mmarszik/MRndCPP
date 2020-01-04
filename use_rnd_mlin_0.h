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
/// @created on 2019-12-08 03:00:46 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5992744a-46f6-4728-9046-d424638b4e1a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_mlin.h"

using TRnd = RndMLin;
/* TEST00
time ./MRndCPP 10 
3965470238
3250315852
198932180
1260725522
1837933855
2678640912
3171553997
955456313
3981407081
1669755761
4344978182468260226

real	0m2.925s
user	0m2.918s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.32e+07  |3762334873|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.62299884|  PASSED  

real	0m22.151s
user	0m22.757s
sys	0m0.552s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7cd6c5bd
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7cd6c5bd
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7cd6c5bd
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7cd6c5bd
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7cd6c5bd
length= 1 gigabyte (2^30 bytes), time= 22.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x7cd6c5bd
length= 1.500 gigabytes (2^30.585 bytes), time= 32.8 seconds
  no anomalies in 187 test result(s)


real	0m33.626s
user	0m33.252s
sys	0m1.242s
*/
/* TEST00
time ./MRndCPP 10 
3965470238
3250315852
198932180
1260725522
1837933855
2678640912
3171553997
955456313
3981407081
1669755761
4344978182468260226

real	0m3.006s
user	0m3.001s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.43e+07  |2318861130|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.43301098|  PASSED  

real	0m22.096s
user	0m22.542s
sys	0m0.749s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x8fb57d9
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x8fb57d9
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.0  p =  9.9e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x8fb57d9
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 1 gigabyte (2^30 bytes), time= 22.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 2 gigabytes (2^31 bytes), time= 42.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 4 gigabytes (2^32 bytes), time= 82.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 8 gigabytes (2^33 bytes), time= 163 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 15.000 gigabytes (2^33.907 bytes), time= 303 seconds
  no anomalies in 226 test result(s)


real	5m3.879s
user	5m2.225s
sys	0m10.076s
*/
/* TEST00
time ./MRndCPP 12 
3965470238
3250315852
198932180
1260725522
1837933855
2678640912
3171553997
955456313
3981407081
1669755761
3404092749393829452

real	0m11.871s
user	0m11.853s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 10 
3965470238
3250315852
198932180
1260725522
1837933855
2678640912
3171553997
955456313
3981407081
1669755761
4344978182468260226

real	0m3.596s
user	0m3.592s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  |1630937496|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.82497866|  PASSED  

real	0m25.009s
user	0m24.504s
sys	0m0.476s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x3fe181a1
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x3fe181a1
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 1 gigabyte (2^30 bytes), time= 23.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:cross        R=  -2.3  p =1-5.6e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x3fe181a1
length= 2 gigabytes (2^31 bytes), time= 46.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 4 gigabytes (2^32 bytes), time= 88.3 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 8 gigabytes (2^33 bytes), time= 180 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.5  p =  3.8e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x3fe181a1
length= 16 gigabytes (2^34 bytes), time= 368 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 32 gigabytes (2^35 bytes), time= 735 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-0,T)         R=  +7.9  p =  9.8e-4   unusual          
  [Low1/32]BCFN(2+0,13-1,T)         R=  +8.0  p =  9.5e-4   unusual          
  ...and 233 test result(s) without anomalies

rng=RNG_stdin, seed=0x3fe181a1
length= 43.000 gigabytes (2^35.426 bytes), time= 1001 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-0,T)         R=  +8.9  p =  2.5e-4   unusual          
  ...and 241 test result(s) without anomalies


real	16m42.260s
user	16m23.384s
sys	0m17.708s
*/
