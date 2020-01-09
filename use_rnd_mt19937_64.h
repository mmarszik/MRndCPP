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
/// @created on 2019-12-08 03:01:00 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token b16b7874-0043-4a8e-82b2-466e9cf64f8d                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_mt1993764.h"

using TRnd = RndMt19937_64;
/* TEST00
time ./MRndCPP 10 
417133933
298875420
1429991859
1486762918
1627035597
2636890823
3528866156
2129589405
619324217
3309737665
8776077208823918333

real	0m6.231s
user	0m6.212s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.40e+07  |3172990424|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.77249789|  PASSED  

real	0m21.845s
user	0m22.543s
sys	0m0.683s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4cf43685
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4cf43685
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4cf43685
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4cf43685
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.4  p =  8.5e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x4cf43685
length= 1 gigabyte (2^30 bytes), time= 22.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4cf43685
length= 1.500 gigabytes (2^30.585 bytes), time= 32.6 seconds
  no anomalies in 187 test result(s)


real	0m33.375s
user	0m33.078s
sys	0m1.146s
*/
/* TEST00
time ./MRndCPP 10 
417133933
298875420
1429991859
1486762918
1627035597
2636890823
3528866156
2129589405
619324217
3309737665
8776077208823918333

real	0m6.177s
user	0m6.169s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.03e+07  |1747777224|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.79448519|  PASSED  

real	0m22.029s
user	0m22.855s
sys	0m0.597s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe353a384
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe353a384
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe353a384
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +5.6  p =  5.8e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xe353a384
length= 512 megabytes (2^29 bytes), time= 11.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xe353a384
length= 1 gigabyte (2^30 bytes), time= 22.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe353a384
length= 2 gigabytes (2^31 bytes), time= 43.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe353a384
length= 4 gigabytes (2^32 bytes), time= 83.5 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xe353a384
length= 8 gigabytes (2^33 bytes), time= 165 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xe353a384
length= 14.750 gigabytes (2^33.883 bytes), time= 303 seconds
  no anomalies in 226 test result(s)


real	5m3.539s
user	5m1.617s
sys	0m10.802s
*/
/* TEST00
time ./MRndCPP 10 
417133933
298875420
1429991859
1486762918
1627035597
2636890823
3528866156
2129589405
619324217
3309737665
8776077208823918333

real	0m6.619s
user	0m6.612s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.08e+07  |3196915960|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.43251219|  PASSED  

real	0m25.190s
user	0m24.632s
sys	0m0.532s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x41e950d1
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x41e950d1
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x41e950d1
length= 256 megabytes (2^28 bytes), time= 6.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  -6.4  p =1-6.6e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x41e950d1
length= 512 megabytes (2^29 bytes), time= 12.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.1  p =1-5.6e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x41e950d1
length= 1 gigabyte (2^30 bytes), time= 24.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x41e950d1
length= 2 gigabytes (2^31 bytes), time= 46.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x41e950d1
length= 4 gigabytes (2^32 bytes), time= 89.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+0,13-1,T)         R=  +7.3  p =  2.2e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x41e950d1
length= 8 gigabytes (2^33 bytes), time= 184 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x41e950d1
length= 16 gigabytes (2^34 bytes), time= 373 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x41e950d1
length= 32 gigabytes (2^35 bytes), time= 744 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x41e950d1
length= 42.500 gigabytes (2^35.409 bytes), time= 1000 seconds
  no anomalies in 242 test result(s)


real	16m41.286s
user	16m23.476s
sys	0m16.620s
*/
/* TEST00
time ./MRndCPP 12 
417133933
298875420
1429991859
1486762918
1627035597
2636890823
3528866156
2129589405
619324217
3309737665
10584153266568165417

real	0m42.906s
user	0m42.887s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
test.sh: line 26: dieharder: command not found

real	0m0.004s
user	0m0.004s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xfd2399a4
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xfd2399a4
length= 64 megabytes (2^26 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +6.2  p =  9.6e-5   mildly suspicious
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xfd2399a4
length= 128 megabytes (2^27 bytes), time= 5.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.5  p =  7.8e-3   unusual          
  [Low1/32]Gap-16:A                 R=  -3.4  p =1-2.0e-3   unusual          
  ...and 149 test result(s) without anomalies

rng=RNG_stdin, seed=0xfd2399a4
length= 256 megabytes (2^28 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -3.7  p =1-1.0e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xfd2399a4
length= 512 megabytes (2^29 bytes), time= 19.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xfd2399a4
length= 1 gigabyte (2^30 bytes), time= 35.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xfd2399a4
length= 2 gigabytes (2^31 bytes), time= 64.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xfd2399a4
length= 4 gigabytes (2^32 bytes), time= 126 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.1  p =1-5.9e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0xfd2399a4
length= 8 gigabytes (2^33 bytes), time= 245 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xfd2399a4
length= 16 gigabytes (2^34 bytes), time= 488 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xfd2399a4
length= 32 gigabytes (2^35 bytes), time= 951 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xfd2399a4
length= 64 gigabytes (2^36 bytes), time= 1906 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xfd2399a4
length= 120.500 gigabytes (2^36.913 bytes), time= 3603 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +8.4  p =  4.8e-4   unusual          
  ...and 257 test result(s) without anomalies


real	60m4.266s
user	58m40.582s
sys	1m18.236s
*/
