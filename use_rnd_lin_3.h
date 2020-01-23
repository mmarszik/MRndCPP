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
/// @created on 2019-12-08 02:59:39 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 729bd7da-da79-4064-8171-841d0860907d                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin3;
/* TEST00
time ./MRndCPP 10 
759489551
2100059763
2805980634
1843960949
2572860381
3517922070
791717751
3767186846
2911853192
2619761019
18004368246707399018

real	0m9.723s
user	0m9.705s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.29e+07  | 386494892|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.55474376|  PASSED  

real	0m22.358s
user	0m23.715s
sys	0m0.574s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xbc77be87
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xbc77be87
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 256 megabytes (2^28 bytes), time= 6.3 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 512 megabytes (2^29 bytes), time= 12.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 1 gigabyte (2^30 bytes), time= 24.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 2 gigabytes (2^31 bytes), time= 47.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 4 gigabytes (2^32 bytes), time= 90.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 8 gigabytes (2^33 bytes), time= 178 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xbc77be87
length= 14.000 gigabytes (2^33.807 bytes), time= 305 seconds
  no anomalies in 219 test result(s)


real	5m5.998s
user	5m6.058s
sys	0m9.806s
*/
/* TEST00
time ./MRndCPP 10 
759489551
2100059763
2805980634
1843960949
2572860381
3517922070
791717751
3767186846
2911853192
2619761019
18004368246707399018

real	0m10.022s
user	0m10.016s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.65e+07  |3728054889|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.81294145|  PASSED  

real	0m26.096s
user	0m25.632s
sys	0m0.440s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x2637504d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x2637504d
length= 128 megabytes (2^27 bytes), time= 3.0 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 256 megabytes (2^28 bytes), time= 6.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:B                  R=  -4.6  p =1-7.1e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x2637504d
length= 512 megabytes (2^29 bytes), time= 13.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 1 gigabyte (2^30 bytes), time= 25.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 2 gigabytes (2^31 bytes), time= 49.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 4 gigabytes (2^32 bytes), time= 94.9 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 8 gigabytes (2^33 bytes), time= 195 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 16 gigabytes (2^34 bytes), time= 396 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.5  p =1-7.1e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x2637504d
length= 32 gigabytes (2^35 bytes), time= 789 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x2637504d
length= 40.750 gigabytes (2^35.349 bytes), time= 1003 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-0,T)          R=  -7.1  p =1-1.4e-3   unusual          
  ...and 238 test result(s) without anomalies


real	16m44.255s
user	16m26.940s
sys	0m15.992s
*/
/* TEST00
time ./MRndCPP 12 
759489551
2100059763
2805980634
1843960949
2572860381
3517922070
791717751
3767186846
2911853192
2619761019
6180995699279844957

real	0m44.222s
user	0m44.166s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.13e+07  |2376155618|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.11896822|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.49632447|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.59945602|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.29082327|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.02598498|  PASSED  
        diehard_opso|   0|   2097152|     100|0.49380028|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.69534457|  PASSED  
         diehard_dna|   0|   2097152|     100|0.14784211|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.71283887|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.57136497|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.14465251|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.90550094|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.46569433|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.38582709|  PASSED  
        diehard_sums|   0|       100|     100|0.05990238|  PASSED  
        diehard_runs|   0|    100000|     100|0.69278108|  PASSED  
        diehard_runs|   0|    100000|     100|0.44064961|  PASSED  
       diehard_craps|   0|    200000|     100|0.26706317|  PASSED  
       diehard_craps|   0|    200000|     100|0.21346283|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.23627525|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.29877141|  PASSED  
         sts_monobit|   1|    100000|     100|0.87406872|  PASSED  
            sts_runs|   2|    100000|     100|0.72667214|  PASSED  
          sts_serial|   1|    100000|     100|0.34335374|  PASSED  
          sts_serial|   2|    100000|     100|0.18273951|  PASSED  
          sts_serial|   3|    100000|     100|0.64016542|  PASSED  
          sts_serial|   3|    100000|     100|0.86419141|  PASSED  
          sts_serial|   4|    100000|     100|0.88199362|  PASSED  
          sts_serial|   4|    100000|     100|0.90700446|  PASSED  
          sts_serial|   5|    100000|     100|0.06306498|  PASSED  
          sts_serial|   5|    100000|     100|0.09613943|  PASSED  
          sts_serial|   6|    100000|     100|0.00635735|  PASSED  
          sts_serial|   6|    100000|     100|0.39157667|  PASSED  
          sts_serial|   7|    100000|     100|0.05406483|  PASSED  
          sts_serial|   7|    100000|     100|0.30045425|  PASSED  
          sts_serial|   8|    100000|     100|0.17993788|  PASSED  
          sts_serial|   8|    100000|     100|0.55637424|  PASSED  
          sts_serial|   9|    100000|     100|0.51122481|  PASSED  
          sts_serial|   9|    100000|     100|0.61341431|  PASSED  
          sts_serial|  10|    100000|     100|0.61212552|  PASSED  
          sts_serial|  10|    100000|     100|0.52921831|  PASSED  
          sts_serial|  11|    100000|     100|0.99567288|   WEAK   
          sts_serial|  11|    100000|     100|0.94869489|  PASSED  
          sts_serial|  12|    100000|     100|0.96155433|  PASSED  
          sts_serial|  12|    100000|     100|0.98734929|  PASSED  
          sts_serial|  13|    100000|     100|0.82218979|  PASSED  
          sts_serial|  13|    100000|     100|0.78000338|  PASSED  
          sts_serial|  14|    100000|     100|0.36293420|  PASSED  
          sts_serial|  14|    100000|     100|0.24932507|  PASSED  
          sts_serial|  15|    100000|     100|0.25296669|  PASSED  
          sts_serial|  15|    100000|     100|0.71537599|  PASSED  
          sts_serial|  16|    100000|     100|0.29998176|  PASSED  
          sts_serial|  16|    100000|     100|0.73904723|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.48040224|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.44397833|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.21170717|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.94061824|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.29891660|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.30506392|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.40567737|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.37699764|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.84548147|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.40017875|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.18737709|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.92222637|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.59684583|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.01309253|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.33142341|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.00836548|  PASSED  
    rgb_permutations|   2|    100000|     100|0.99976061|   WEAK   
    rgb_permutations|   3|    100000|     100|0.97465100|  PASSED  
    rgb_permutations|   4|    100000|     100|0.06053147|  PASSED  
    rgb_permutations|   5|    100000|     100|0.11581133|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.52680911|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.24158030|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.66252792|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.17398303|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.01141335|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.88506024|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.53445987|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.82014191|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.27519545|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.33244281|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.65580944|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.91636473|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.94787876|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.73187521|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.60968958|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.82845575|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.22425970|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.80829216|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.13480213|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.91172412|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.81788853|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.75931501|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.98155772|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.51356391|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.07425656|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.96252322|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.23454449|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.26622512|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.49880701|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.55844305|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.06473819|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.27276522|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.56175075|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.80659233|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.83111019|  PASSED  
             dab_dct| 256|     50000|       1|0.98070402|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.98468779|  PASSED  
        dab_filltree|  32|  15000000|       1|0.07374390|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.97900097|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.92905517|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.74893709|  PASSED  

real	73m44.122s
user	66m2.007s
sys	7m35.412s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x5b9b103f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x5b9b103f
length= 64 megabytes (2^26 bytes), time= 2.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x5b9b103f
length= 128 megabytes (2^27 bytes), time= 5.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x5b9b103f
length= 256 megabytes (2^28 bytes), time= 9.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x5b9b103f
length= 512 megabytes (2^29 bytes), time= 18.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x5b9b103f
length= 1 gigabyte (2^30 bytes), time= 33.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x5b9b103f
length= 2 gigabytes (2^31 bytes), time= 65.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x5b9b103f
length= 4 gigabytes (2^32 bytes), time= 129 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x5b9b103f
length= 8 gigabytes (2^33 bytes), time= 255 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x5b9b103f
length= 16 gigabytes (2^34 bytes), time= 500 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x5b9b103f
length= 32 gigabytes (2^35 bytes), time= 986 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  +5.5  p =  1.2e-4   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x5b9b103f
length= 64 gigabytes (2^36 bytes), time= 1947 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x5b9b103f
length= 120.250 gigabytes (2^36.910 bytes), time= 3603 seconds
  no anomalies in 258 test result(s)


real	60m4.268s
user	58m57.947s
sys	1m43.237s
*/
/* TEST00
time ./MRndCPP 12 
759489551
2100059763
2805980634
1843960949
2572860381
3517922070
791717751
3767186846
2911853192
2619761019
6180995699279844957

real	1m8.329s
user	1m8.263s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.16e+07  |2552009349|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.70753644|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.90074651|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.70664451|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.22761960|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.63995056|  PASSED  
        diehard_opso|   0|   2097152|     100|0.48689508|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.21617619|  PASSED  
         diehard_dna|   0|   2097152|     100|0.30228966|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.65654569|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.93114445|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.85149486|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.69441063|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.91575577|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.95921552|  PASSED  
        diehard_sums|   0|       100|     100|0.44350172|  PASSED  
        diehard_runs|   0|    100000|     100|0.93364963|  PASSED  
        diehard_runs|   0|    100000|     100|0.58525492|  PASSED  
       diehard_craps|   0|    200000|     100|0.81514634|  PASSED  
       diehard_craps|   0|    200000|     100|0.02465218|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.56944905|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.64126750|  PASSED  
         sts_monobit|   1|    100000|     100|0.54616326|  PASSED  
            sts_runs|   2|    100000|     100|0.24590670|  PASSED  
          sts_serial|   1|    100000|     100|0.14024146|  PASSED  
          sts_serial|   2|    100000|     100|0.25155071|  PASSED  
          sts_serial|   3|    100000|     100|0.52495608|  PASSED  
          sts_serial|   3|    100000|     100|0.92822411|  PASSED  
          sts_serial|   4|    100000|     100|0.77480240|  PASSED  
          sts_serial|   4|    100000|     100|0.89595839|  PASSED  
          sts_serial|   5|    100000|     100|0.99721193|   WEAK   
          sts_serial|   5|    100000|     100|0.69582514|  PASSED  
          sts_serial|   6|    100000|     100|0.53718436|  PASSED  
          sts_serial|   6|    100000|     100|0.28451887|  PASSED  
          sts_serial|   7|    100000|     100|0.01373283|  PASSED  
          sts_serial|   7|    100000|     100|0.03982063|  PASSED  
          sts_serial|   8|    100000|     100|0.06569117|  PASSED  
          sts_serial|   8|    100000|     100|0.85321434|  PASSED  
          sts_serial|   9|    100000|     100|0.59353713|  PASSED  
          sts_serial|   9|    100000|     100|0.49706817|  PASSED  
          sts_serial|  10|    100000|     100|0.74439745|  PASSED  
          sts_serial|  10|    100000|     100|0.26282987|  PASSED  
          sts_serial|  11|    100000|     100|0.91263430|  PASSED  
          sts_serial|  11|    100000|     100|0.96924062|  PASSED  
          sts_serial|  12|    100000|     100|0.33924570|  PASSED  
          sts_serial|  12|    100000|     100|0.78711654|  PASSED  
          sts_serial|  13|    100000|     100|0.34538056|  PASSED  
          sts_serial|  13|    100000|     100|0.89978050|  PASSED  
          sts_serial|  14|    100000|     100|0.91957330|  PASSED  
          sts_serial|  14|    100000|     100|0.69438486|  PASSED  
          sts_serial|  15|    100000|     100|0.79166412|  PASSED  
          sts_serial|  15|    100000|     100|0.21830803|  PASSED  
          sts_serial|  16|    100000|     100|0.81206597|  PASSED  
          sts_serial|  16|    100000|     100|0.92474310|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.55640849|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.56098727|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.88052351|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.25715981|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.21027677|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.70992592|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.53662733|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.18507663|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.96414961|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.61094555|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.13651479|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.52744769|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.67125034|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.47321693|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.45477568|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.23123023|  PASSED  
    rgb_permutations|   2|    100000|     100|0.84317572|  PASSED  
    rgb_permutations|   3|    100000|     100|0.99961459|   WEAK   
    rgb_permutations|   4|    100000|     100|0.13414453|  PASSED  
    rgb_permutations|   5|    100000|     100|0.65676761|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.49170093|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.58328125|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.76810650|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.09753974|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.35225847|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.94381531|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.44997064|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.95311457|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.66431132|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.77523650|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.34857286|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.87670618|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.46060422|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.34562845|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.02075586|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.28312328|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.26286950|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.62043231|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.48042727|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.88141929|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.73218349|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.13493024|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.57360486|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.83933147|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.99174193|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.12512245|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.99996536|   WEAK   
      rgb_lagged_sum|  27|   1000000|     100|0.63906901|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.96277572|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.84232315|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.82727948|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.38997750|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.13889801|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.14266018|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.33636511|  PASSED  
             dab_dct| 256|     50000|       1|0.60605756|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.57775307|  PASSED  
        dab_filltree|  32|  15000000|       1|0.68316582|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.65289894|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.41484900|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.26023329|  PASSED  

real	112m1.489s
user	101m2.990s
sys	10m56.024s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x747c188d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x747c188d
length= 32 megabytes (2^25 bytes), time= 2.5 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 64 megabytes (2^26 bytes), time= 5.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 128 megabytes (2^27 bytes), time= 10.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 256 megabytes (2^28 bytes), time= 18.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 512 megabytes (2^29 bytes), time= 33.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  +7.3  p =  2.3e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x747c188d
length= 1 gigabyte (2^30 bytes), time= 60.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 2 gigabytes (2^31 bytes), time= 112 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 4 gigabytes (2^32 bytes), time= 202 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 8 gigabytes (2^33 bytes), time= 391 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +5.0  p =  3.7e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x747c188d
length= 16 gigabytes (2^34 bytes), time= 768 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 32 gigabytes (2^35 bytes), time= 1520 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 64 gigabytes (2^36 bytes), time= 3029 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 128 gigabytes (2^37 bytes), time= 6270 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 256 gigabytes (2^38 bytes), time= 12570 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 512 gigabytes (2^39 bytes), time= 25336 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 1 terabyte (2^40 bytes), time= 49177 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 2 terabytes (2^41 bytes), time= 96945 seconds
  no anomalies in 299 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 4 terabytes (2^42 bytes), time= 175548 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 8 terabytes (2^43 bytes), time= 320157 seconds
  no anomalies in 322 test result(s)

rng=RNG_stdin, seed=0x747c188d
length= 8.760 terabytes (2^43.131 bytes), time= 345606 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -5.4  p =1-8.0e-5   mildly suspicious
  ...and 321 test result(s) without anomalies


real	5760m7.808s
user	5675m28.955s
sys	222m46.667s
*/
