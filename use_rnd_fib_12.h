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
/// @created on 2019-12-18 01:26:04 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 1da52c45-d183-4c0e-a911-9b0a9d322675                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib12;
/* TEST00
time ./MRndCPP 
1060711682
822818705
3910901913
3034541348
1547968095
2879554838
121437286555207

real	0m51.672s
user	0m51.580s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.19e+07  |3117739046|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.82470128|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.58272723|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.14489219|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.77431932|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.98127146|  PASSED  
        diehard_opso|   0|   2097152|     100|0.58139095|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.20484572|  PASSED  
         diehard_dna|   0|   2097152|     100|0.33126713|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.24630258|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.32140531|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.20513585|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.97715881|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.28790407|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.07335038|  PASSED  
        diehard_sums|   0|       100|     100|0.12287887|  PASSED  
        diehard_runs|   0|    100000|     100|0.11084871|  PASSED  
        diehard_runs|   0|    100000|     100|0.83635542|  PASSED  
       diehard_craps|   0|    200000|     100|0.24266951|  PASSED  
       diehard_craps|   0|    200000|     100|0.51200407|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.37930093|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.41362184|  PASSED  
         sts_monobit|   1|    100000|     100|0.55884052|  PASSED  
            sts_runs|   2|    100000|     100|0.69908954|  PASSED  
          sts_serial|   1|    100000|     100|0.17396333|  PASSED  
          sts_serial|   2|    100000|     100|0.07609576|  PASSED  
          sts_serial|   3|    100000|     100|0.39815579|  PASSED  
          sts_serial|   3|    100000|     100|0.78645740|  PASSED  
          sts_serial|   4|    100000|     100|0.09322692|  PASSED  
          sts_serial|   4|    100000|     100|0.51269664|  PASSED  
          sts_serial|   5|    100000|     100|0.37326089|  PASSED  
          sts_serial|   5|    100000|     100|0.14213359|  PASSED  
          sts_serial|   6|    100000|     100|0.54730416|  PASSED  
          sts_serial|   6|    100000|     100|0.12927400|  PASSED  
          sts_serial|   7|    100000|     100|0.29340252|  PASSED  
          sts_serial|   7|    100000|     100|0.94253199|  PASSED  
          sts_serial|   8|    100000|     100|0.50099625|  PASSED  
          sts_serial|   8|    100000|     100|0.79691497|  PASSED  
          sts_serial|   9|    100000|     100|0.74450324|  PASSED  
          sts_serial|   9|    100000|     100|0.93102558|  PASSED  
          sts_serial|  10|    100000|     100|0.98428045|  PASSED  
          sts_serial|  10|    100000|     100|0.83835186|  PASSED  
          sts_serial|  11|    100000|     100|0.47604873|  PASSED  
          sts_serial|  11|    100000|     100|0.37210077|  PASSED  
          sts_serial|  12|    100000|     100|0.45154624|  PASSED  
          sts_serial|  12|    100000|     100|0.33208135|  PASSED  
          sts_serial|  13|    100000|     100|0.65407344|  PASSED  
          sts_serial|  13|    100000|     100|0.98364206|  PASSED  
          sts_serial|  14|    100000|     100|0.49435334|  PASSED  
          sts_serial|  14|    100000|     100|0.34671194|  PASSED  
          sts_serial|  15|    100000|     100|0.90179919|  PASSED  
          sts_serial|  15|    100000|     100|0.83247767|  PASSED  
          sts_serial|  16|    100000|     100|0.97733452|  PASSED  
          sts_serial|  16|    100000|     100|0.61785152|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.30457136|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.24881957|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.83396156|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.71144086|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.33034639|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.47381654|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.99260207|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.50409277|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.02081024|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.82147677|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.37261228|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.97721579|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.20301346|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.53723675|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.11568135|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.98455532|  PASSED  
    rgb_permutations|   2|    100000|     100|0.97590906|  PASSED  
    rgb_permutations|   3|    100000|     100|0.07542603|  PASSED  
    rgb_permutations|   4|    100000|     100|0.97141703|  PASSED  
    rgb_permutations|   5|    100000|     100|0.21085960|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.91987330|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.88094922|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.41303746|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.87137495|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.12763032|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.26661101|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.53625657|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.50819881|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.78501089|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.70641227|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.86417661|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.17993803|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.71226630|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.29742720|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.49296190|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.55251852|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.71213943|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.88309032|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.65920465|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.53416545|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.04158849|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.81936233|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.10556472|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.97257849|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.76098494|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.53376372|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.29554707|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.53187046|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.85740428|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.66044645|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.36117027|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.11468077|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.13936914|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.53061555|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.33715530|  PASSED  
             dab_dct| 256|     50000|       1|0.75863950|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.44505840|  PASSED  
        dab_filltree|  32|  15000000|       1|0.71054326|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.01207294|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.46590817|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.47214403|  PASSED  

real	52m58.713s
user	49m11.596s
sys	3m43.768s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xaa090d87
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xaa090d87
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xaa090d87
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xaa090d87
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.6  p =  4.8e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xaa090d87
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xaa090d87
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xaa090d87
length= 4 gigabytes (2^32 bytes), time= 72.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xaa090d87
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.547s
user	1m41.708s
sys	0m2.464s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7e99f9e8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7e99f9e8
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7e99f9e8
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7e99f9e8
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7e99f9e8
length= 1 gigabyte (2^30 bytes), time= 19.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7e99f9e8
length= 2 gigabytes (2^31 bytes), time= 38.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x7e99f9e8
length= 4 gigabytes (2^32 bytes), time= 76.1 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +6.2  p =  2.2e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7e99f9e8
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.4  p =  5.9e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m43.349s
user	1m40.884s
sys	0m2.312s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x653cb625
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x653cb625
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x653cb625
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x653cb625
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x653cb625
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x653cb625
length= 2 gigabytes (2^31 bytes), time= 37.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x653cb625
length= 4 gigabytes (2^32 bytes), time= 73.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x653cb625
length= 5.500 gigabytes (2^32.459 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R=  +7.4  p =  1.9e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m42.367s
user	1m39.952s
sys	0m2.240s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5cd084f1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5cd084f1
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5cd084f1
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5cd084f1
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5cd084f1
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5cd084f1
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5cd084f1
length= 4 gigabytes (2^32 bytes), time= 71.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.5  p =  6.5e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5cd084f1
length= 8 gigabytes (2^33 bytes), time= 144 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x5cd084f1
length= 16 gigabytes (2^34 bytes), time= 299 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x5cd084f1
length= 32 gigabytes (2^35 bytes), time= 604 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x5cd084f1
length= 64 gigabytes (2^36 bytes), time= 1227 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x5cd084f1
length= 128 gigabytes (2^37 bytes), time= 2460 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x5cd084f1
length= 187.750 gigabytes (2^37.553 bytes), time= 3601 seconds
  no anomalies in 201 test result(s)


real	60m1.639s
user	58m45.288s
sys	1m11.868s
*/
