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
/// @created on 2019-12-18 01:28:21 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token d71908cd-73ae-4cb3-bbca-1fcf52e0e66b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib9;
/* TEST00
time ./MRndCPP 
1243868176
1597504981
4198925618
2972715803
3914810814
3285876080
4611706168889617815

real	0m7.994s
user	0m7.976s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.17e+07  |1810045847|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.00000000|  FAILED  
      diehard_operm5|   0|   1000000|     100|0.31307751|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.21826355|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.12857395|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.97763736|  PASSED  
        diehard_opso|   0|   2097152|     100|0.99678535|   WEAK   
        diehard_oqso|   0|   2097152|     100|0.29728980|  PASSED  
         diehard_dna|   0|   2097152|     100|0.28824315|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.57269432|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.83268600|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.98308588|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.52614078|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.96430390|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.61014254|  PASSED  
        diehard_sums|   0|       100|     100|0.44740580|  PASSED  
        diehard_runs|   0|    100000|     100|0.41160460|  PASSED  
        diehard_runs|   0|    100000|     100|0.07999585|  PASSED  
       diehard_craps|   0|    200000|     100|0.42242664|  PASSED  
       diehard_craps|   0|    200000|     100|0.86639054|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.01832653|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.97530905|  PASSED  
         sts_monobit|   1|    100000|     100|0.45801681|  PASSED  
            sts_runs|   2|    100000|     100|0.94122343|  PASSED  
          sts_serial|   1|    100000|     100|0.83203315|  PASSED  
          sts_serial|   2|    100000|     100|0.84212367|  PASSED  
          sts_serial|   3|    100000|     100|0.47599475|  PASSED  
          sts_serial|   3|    100000|     100|0.72930743|  PASSED  
          sts_serial|   4|    100000|     100|0.03586908|  PASSED  
          sts_serial|   4|    100000|     100|0.14913606|  PASSED  
          sts_serial|   5|    100000|     100|0.16251467|  PASSED  
          sts_serial|   5|    100000|     100|0.72208824|  PASSED  
          sts_serial|   6|    100000|     100|0.13162847|  PASSED  
          sts_serial|   6|    100000|     100|0.92162950|  PASSED  
          sts_serial|   7|    100000|     100|0.59327995|  PASSED  
          sts_serial|   7|    100000|     100|0.32179716|  PASSED  
          sts_serial|   8|    100000|     100|0.69428854|  PASSED  
          sts_serial|   8|    100000|     100|0.88273633|  PASSED  
          sts_serial|   9|    100000|     100|0.21190439|  PASSED  
          sts_serial|   9|    100000|     100|0.21260316|  PASSED  
          sts_serial|  10|    100000|     100|0.79929877|  PASSED  
          sts_serial|  10|    100000|     100|0.74357159|  PASSED  
          sts_serial|  11|    100000|     100|0.95157124|  PASSED  
          sts_serial|  11|    100000|     100|0.38810518|  PASSED  
          sts_serial|  12|    100000|     100|0.99600043|   WEAK   
          sts_serial|  12|    100000|     100|0.98544695|  PASSED  
          sts_serial|  13|    100000|     100|0.79784244|  PASSED  
          sts_serial|  13|    100000|     100|0.73303771|  PASSED  
          sts_serial|  14|    100000|     100|0.87942447|  PASSED  
          sts_serial|  14|    100000|     100|0.66551706|  PASSED  
          sts_serial|  15|    100000|     100|0.29469241|  PASSED  
          sts_serial|  15|    100000|     100|0.68262229|  PASSED  
          sts_serial|  16|    100000|     100|0.81436391|  PASSED  
          sts_serial|  16|    100000|     100|0.44495941|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.43032201|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.78603895|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.43685983|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.97246803|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.05942159|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.01629372|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.27109193|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.85542813|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.52045861|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.01621954|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.38262746|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.76457639|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.15317580|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.64564283|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.48242623|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.00371094|   WEAK   
    rgb_permutations|   2|    100000|     100|0.97746027|  PASSED  
    rgb_permutations|   3|    100000|     100|0.93989428|  PASSED  
    rgb_permutations|   4|    100000|     100|0.40569357|  PASSED  
    rgb_permutations|   5|    100000|     100|0.97294153|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.99406983|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.86954315|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.15637922|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.13842024|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.24955489|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.69688228|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.37680847|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.46223280|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.52457591|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.14233250|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.74006646|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.33393525|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.18312974|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.96600630|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.22837132|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.95095823|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.97422974|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.99178912|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.30922818|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.37653830|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.90009453|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.77931781|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.87577271|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.32562557|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.02216501|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.98792482|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.96447042|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.67119416|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.83640982|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.95981929|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.06587860|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.32356018|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.61867927|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.45534633|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.57063657|  PASSED  
             dab_dct| 256|     50000|       1|0.53696556|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.32993554|  PASSED  
        dab_filltree|  32|  15000000|       1|0.73820828|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.36080698|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.07092142|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.55629753|  PASSED  

real	53m32.760s
user	50m1.360s
sys	3m24.996s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xfc10d197
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xfc10d197
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xfc10d197
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xfc10d197
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xfc10d197
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xfc10d197
length= 2 gigabytes (2^31 bytes), time= 37.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xfc10d197
length= 4 gigabytes (2^32 bytes), time= 72.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-1,T)         R=  +7.4  p =  1.9e-3   unusual          
  [Low8/32]BCFN(2+3,13-1,T)         R= +15.8  p =  5.6e-8   very suspicious  
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfc10d197
length= 5.500 gigabytes (2^32.459 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-1,T)         R= +12.2  p =  5.0e-6   suspicious       
  [Low8/32]BCFN(2+3,13-1,T)         R= +21.1  p =  8.4e-11   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+1,13-3,T)         R=  +8.0  p =  1.5e-3   unusual          
  ...and 157 test result(s) without anomalies


real	1m41.231s
user	1m38.560s
sys	0m2.324s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf894df1a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf894df1a
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf894df1a
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf894df1a
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf894df1a
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf894df1a
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-2,T)         R=  +8.8  p =  4.1e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf894df1a
length= 4 gigabytes (2^32 bytes), time= 74.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-1,T)         R=  +9.5  p =  1.4e-4   mildly suspicious
  [Low8/32]BCFN(2+3,13-1,T)         R= +19.0  p =  1.1e-9    VERY SUSPICIOUS 
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf894df1a
length= 5.250 gigabytes (2^32.392 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-1,T)         R= +10.9  p =  2.5e-5   mildly suspicious
  [Low8/32]BCFN(2+3,13-1,T)         R= +26.8  p =  7.2e-14    FAIL           
  ...and 158 test result(s) without anomalies


real	1m40.979s
user	1m38.700s
sys	0m2.056s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7c873e73
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7c873e73
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7c873e73
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7c873e73
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7c873e73
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7c873e73
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x7c873e73
length= 4 gigabytes (2^32 bytes), time= 72.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-1,T)         R= +11.1  p =  2.1e-5   suspicious       
  [Low8/32]BCFN(2+3,13-1,T)         R= +18.6  p =  1.8e-9    VERY SUSPICIOUS 
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7c873e73
length= 5.500 gigabytes (2^32.459 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-1,T)         R= +15.0  p =  1.5e-7   very suspicious  
  [Low8/32]BCFN(2+3,13-1,T)         R= +23.1  p =  6.4e-12    FAIL           
  ...and 158 test result(s) without anomalies


real	1m40.800s
user	1m38.220s
sys	0m2.296s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x69fce5c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x69fce5c
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-4,T)         R=  +7.9  p =  2.3e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x69fce5c
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x69fce5c
length= 512 megabytes (2^29 bytes), time= 11.5 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +4.7  p =  1.7e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x69fce5c
length= 1 gigabyte (2^30 bytes), time= 22.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x69fce5c
length= 2 gigabytes (2^31 bytes), time= 43.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-2,T)         R= +11.9  p =  1.1e-5   mildly suspicious
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x69fce5c
length= 4 gigabytes (2^32 bytes), time= 85.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-1,T)         R= +22.2  p =  2.0e-11    FAIL           
  [Low1/32]BCFN(2+5,13-5,T)         R= +11.8  p =  8.8e-5   unusual          
  ...and 154 test result(s) without anomalies


real	1m26.384s
user	1m24.488s
sys	0m1.724s
*/
