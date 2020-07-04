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

namespace MRnd {

using TMRnd = RndMt19937_64;

}
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

real	0m42.117s
user	0m42.035s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.10e+07  | 854531810|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.60084894|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.24203425|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.37277555|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.29710462|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.16457991|  PASSED  
        diehard_opso|   0|   2097152|     100|0.91354190|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.27364718|  PASSED  
         diehard_dna|   0|   2097152|     100|0.27349721|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.79227244|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.60959469|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.39609831|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.57350171|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.96896883|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.78209756|  PASSED  
        diehard_sums|   0|       100|     100|0.63136056|  PASSED  
        diehard_runs|   0|    100000|     100|0.37735130|  PASSED  
        diehard_runs|   0|    100000|     100|0.38176424|  PASSED  
       diehard_craps|   0|    200000|     100|0.32427728|  PASSED  
       diehard_craps|   0|    200000|     100|0.77306694|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.29828347|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.39977983|  PASSED  
         sts_monobit|   1|    100000|     100|0.45074864|  PASSED  
            sts_runs|   2|    100000|     100|0.54597374|  PASSED  
          sts_serial|   1|    100000|     100|0.63718185|  PASSED  
          sts_serial|   2|    100000|     100|0.77365489|  PASSED  
          sts_serial|   3|    100000|     100|0.77027332|  PASSED  
          sts_serial|   3|    100000|     100|0.70049771|  PASSED  
          sts_serial|   4|    100000|     100|0.98208736|  PASSED  
          sts_serial|   4|    100000|     100|0.47444331|  PASSED  
          sts_serial|   5|    100000|     100|0.74769322|  PASSED  
          sts_serial|   5|    100000|     100|0.30384170|  PASSED  
          sts_serial|   6|    100000|     100|0.18426857|  PASSED  
          sts_serial|   6|    100000|     100|0.93163011|  PASSED  
          sts_serial|   7|    100000|     100|0.99256943|  PASSED  
          sts_serial|   7|    100000|     100|0.85058495|  PASSED  
          sts_serial|   8|    100000|     100|0.40552151|  PASSED  
          sts_serial|   8|    100000|     100|0.90455299|  PASSED  
          sts_serial|   9|    100000|     100|0.27478253|  PASSED  
          sts_serial|   9|    100000|     100|0.25470812|  PASSED  
          sts_serial|  10|    100000|     100|0.00670618|  PASSED  
          sts_serial|  10|    100000|     100|0.27312798|  PASSED  
          sts_serial|  11|    100000|     100|0.02017875|  PASSED  
          sts_serial|  11|    100000|     100|0.87649845|  PASSED  
          sts_serial|  12|    100000|     100|0.66371243|  PASSED  
          sts_serial|  12|    100000|     100|0.28264810|  PASSED  
          sts_serial|  13|    100000|     100|0.73609338|  PASSED  
          sts_serial|  13|    100000|     100|0.96010733|  PASSED  
          sts_serial|  14|    100000|     100|0.90459795|  PASSED  
          sts_serial|  14|    100000|     100|0.72129585|  PASSED  
          sts_serial|  15|    100000|     100|0.43253132|  PASSED  
          sts_serial|  15|    100000|     100|0.99996748|   WEAK   
          sts_serial|  16|    100000|     100|0.99210912|  PASSED  
          sts_serial|  16|    100000|     100|0.45967262|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.39791859|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.78843638|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.41963924|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.42201652|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.20328480|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.97493521|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.62866660|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.86761891|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.58422027|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.70198479|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.80311293|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.17721323|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.53901677|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.12063894|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.26232188|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.95886530|  PASSED  
    rgb_permutations|   2|    100000|     100|0.62107417|  PASSED  
    rgb_permutations|   3|    100000|     100|0.79634378|  PASSED  
    rgb_permutations|   4|    100000|     100|0.81457420|  PASSED  
    rgb_permutations|   5|    100000|     100|0.15061490|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.98969650|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.84372338|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.24725140|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.17363329|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.00931878|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.39506468|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.94485316|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.97096418|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.31392516|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.21814937|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.19958450|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.77503108|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.55921320|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.80448869|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.85554309|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.66666002|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.71804017|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.88966949|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.41546187|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.54963646|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.42540064|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.47383680|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.81945500|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.66622884|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.73144643|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.74285350|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.12242481|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.24661500|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.02292386|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.15050355|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.80634070|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.66830495|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.73730161|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.33452184|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.34604815|  PASSED  
             dab_dct| 256|     50000|       1|0.94266728|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.16837238|  PASSED  
        dab_filltree|  32|  15000000|       1|0.58167236|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.74506280|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.29747052|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.01831661|  PASSED  

real	69m54.795s
user	61m48.357s
sys	7m57.531s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x3d58102f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x3d58102f
length= 64 megabytes (2^26 bytes), time= 2.5 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 128 megabytes (2^27 bytes), time= 6.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 256 megabytes (2^28 bytes), time= 11.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 512 megabytes (2^29 bytes), time= 19.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 1 gigabyte (2^30 bytes), time= 37.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 2 gigabytes (2^31 bytes), time= 67.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 4 gigabytes (2^32 bytes), time= 126 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.3  p =  1.8e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x3d58102f
length= 8 gigabytes (2^33 bytes), time= 249 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 16 gigabytes (2^34 bytes), time= 494 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 32 gigabytes (2^35 bytes), time= 965 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 64 gigabytes (2^36 bytes), time= 1921 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 128 gigabytes (2^37 bytes), time= 3840 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 256 gigabytes (2^38 bytes), time= 7615 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x3d58102f
length= 512 gigabytes (2^39 bytes), time= 15631 seconds
  Test Name                         Raw       Processed     Evaluation
  BRank(12):24K(1)                  R=+99759  p~= 0           FAIL !!!!!!!!  
  ...and 278 test result(s) without anomalies


real	260m32.821s
user	254m38.677s
sys	5m38.863s
*/
