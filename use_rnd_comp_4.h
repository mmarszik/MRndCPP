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
/// @created on 2019-12-08 02:56:29 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e4876b20-c1b1-40b9-a269-339f7584338e                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_lin.h"

using TRnd = RndComp< RndLin1, RndLin1, 10 >;
/* TEST00
time ./MRndCPP 
224127203
847543721
493531796
2832884987
2901895808
3043108681
18446670453526398825

real	0m30.929s
user	0m30.880s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.34e+07  |3944268642|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.85871301|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.99315626|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.54738484|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.75641556|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.22388038|  PASSED  
        diehard_opso|   0|   2097152|     100|0.21116080|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.34314255|  PASSED  
         diehard_dna|   0|   2097152|     100|0.58263319|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.71351606|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.13059390|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.74215483|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.97645888|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.47979579|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.89326312|  PASSED  
        diehard_sums|   0|       100|     100|0.38268187|  PASSED  
        diehard_runs|   0|    100000|     100|0.84995640|  PASSED  
        diehard_runs|   0|    100000|     100|0.99626879|   WEAK   
       diehard_craps|   0|    200000|     100|0.03390007|  PASSED  
       diehard_craps|   0|    200000|     100|0.12637721|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.44863348|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.54696317|  PASSED  
         sts_monobit|   1|    100000|     100|0.85351418|  PASSED  
            sts_runs|   2|    100000|     100|0.33444884|  PASSED  
          sts_serial|   1|    100000|     100|0.30102742|  PASSED  
          sts_serial|   2|    100000|     100|0.66646849|  PASSED  
          sts_serial|   3|    100000|     100|0.27912338|  PASSED  
          sts_serial|   3|    100000|     100|0.79301244|  PASSED  
          sts_serial|   4|    100000|     100|0.83601167|  PASSED  
          sts_serial|   4|    100000|     100|0.28923364|  PASSED  
          sts_serial|   5|    100000|     100|0.85509811|  PASSED  
          sts_serial|   5|    100000|     100|0.92129662|  PASSED  
          sts_serial|   6|    100000|     100|0.75777512|  PASSED  
          sts_serial|   6|    100000|     100|0.65277362|  PASSED  
          sts_serial|   7|    100000|     100|0.32462162|  PASSED  
          sts_serial|   7|    100000|     100|0.58278152|  PASSED  
          sts_serial|   8|    100000|     100|0.83736417|  PASSED  
          sts_serial|   8|    100000|     100|0.98499521|  PASSED  
          sts_serial|   9|    100000|     100|0.70601229|  PASSED  
          sts_serial|   9|    100000|     100|0.87057966|  PASSED  
          sts_serial|  10|    100000|     100|0.59172990|  PASSED  
          sts_serial|  10|    100000|     100|0.90498654|  PASSED  
          sts_serial|  11|    100000|     100|0.85170042|  PASSED  
          sts_serial|  11|    100000|     100|0.77745390|  PASSED  
          sts_serial|  12|    100000|     100|0.64593554|  PASSED  
          sts_serial|  12|    100000|     100|0.35144009|  PASSED  
          sts_serial|  13|    100000|     100|0.51954142|  PASSED  
          sts_serial|  13|    100000|     100|0.73760460|  PASSED  
          sts_serial|  14|    100000|     100|0.30466896|  PASSED  
          sts_serial|  14|    100000|     100|0.48269292|  PASSED  
          sts_serial|  15|    100000|     100|0.71927491|  PASSED  
          sts_serial|  15|    100000|     100|0.69747236|  PASSED  
          sts_serial|  16|    100000|     100|0.31063127|  PASSED  
          sts_serial|  16|    100000|     100|0.87721199|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.54738192|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.22486124|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.44938874|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.79835644|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.68307156|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.79796527|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.52927757|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.26319551|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.50015619|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.30223328|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.91211501|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.38155761|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.88300876|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.04529568|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.87043528|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.62019218|  PASSED  
    rgb_permutations|   2|    100000|     100|0.65651671|  PASSED  
    rgb_permutations|   3|    100000|     100|0.75302142|  PASSED  
    rgb_permutations|   4|    100000|     100|0.83975291|  PASSED  
    rgb_permutations|   5|    100000|     100|0.84565026|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.96646581|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.52534711|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.51672149|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.26453289|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.98094988|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.74427830|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.09828772|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.20879419|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.77378452|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.28374943|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.24631104|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.56660625|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.38912157|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.12266487|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.72261320|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.25039665|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.88230142|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.08622909|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.09367425|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.16407482|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.43583742|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.94280608|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.98203311|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.42618161|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.60220425|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.85244785|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.11541048|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.44513294|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.15537868|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.41394251|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.11015892|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.54992981|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.49978824|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.00957860|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.29436542|  PASSED  
             dab_dct| 256|     50000|       1|0.35510440|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.51680975|  PASSED  
        dab_filltree|  32|  15000000|       1|0.21464065|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.58640700|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.20569627|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.99696269|   WEAK   

real	46m19.780s
user	42m47.644s
sys	3m29.456s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc626df99
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc626df99
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.9  p =  3.5e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc626df99
length= 256 megabytes (2^28 bytes), time= 6.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc626df99
length= 512 megabytes (2^29 bytes), time= 11.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.1  p = 0.011     unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc626df99
length= 1 gigabyte (2^30 bytes), time= 22.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc626df99
length= 2 gigabytes (2^31 bytes), time= 44.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xc626df99
length= 4 gigabytes (2^32 bytes), time= 85.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xc626df99
length= 4.750 gigabytes (2^32.248 bytes), time= 102 seconds
  no anomalies in 159 test result(s)


real	1m42.608s
user	1m40.476s
sys	0m1.992s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6c210ed8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6c210ed8
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6c210ed8
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6c210ed8
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6c210ed8
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x6c210ed8
length= 2 gigabytes (2^31 bytes), time= 36.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6c210ed8
length= 4 gigabytes (2^32 bytes), time= 73.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x6c210ed8
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.450s
user	1m42.140s
sys	0m2.224s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4b1768ed
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4b1768ed
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-4,T)         R=  +9.0  p =  7.4e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4b1768ed
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-2,T)                  R=  -6.8  p =1-1.6e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4b1768ed
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x4b1768ed
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4b1768ed
length= 2 gigabytes (2^31 bytes), time= 36.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x4b1768ed
length= 4 gigabytes (2^32 bytes), time= 70.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x4b1768ed
length= 5.750 gigabytes (2^32.524 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.984s
user	1m41.580s
sys	0m2.156s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x449e29e1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x449e29e1
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x449e29e1
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-2,T)                  R=  -7.2  p =1-8.4e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x449e29e1
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x449e29e1
length= 1 gigabyte (2^30 bytes), time= 18.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x449e29e1
length= 2 gigabytes (2^31 bytes), time= 36.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x449e29e1
length= 4 gigabytes (2^32 bytes), time= 70.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x449e29e1
length= 8 gigabytes (2^33 bytes), time= 141 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x449e29e1
length= 16 gigabytes (2^34 bytes), time= 293 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x449e29e1
length= 32 gigabytes (2^35 bytes), time= 593 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x449e29e1
length= 64 gigabytes (2^36 bytes), time= 1205 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+8,13-4,T)         R= +14.4  p =  3.1e-6   mildly suspicious
  [Low1/32]BCFN(2+9,13-5,T)         R= +15.7  p =  2.5e-6   mildly suspicious
  [Low1/32]BCFN(2+10,13-5,T)        R= +16.9  p =  8.3e-7   mildly suspicious
  [Low1/32]BCFN(2+11,13-6,T)        R= +22.5  p =  3.8e-8   very suspicious  
  [Low1/32]BCFN(2+13,13-7,T)        R= +31.7  p =  3.5e-10  very suspicious  
  ...and 184 test result(s) without anomalies

rng=RNG_stdin32, seed=0x449e29e1
length= 128 gigabytes (2^37 bytes), time= 2419 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+7,13-3,T)         R= +10.7  p =  7.6e-5   unusual          
  [Low1/32]BCFN(2+8,13-3,T)         R= +41.6  p =  1.7e-19    FAIL !         
  [Low1/32]BCFN(2+9,13-4,T)         R= +43.9  p =  4.2e-19    FAIL !         
  [Low1/32]BCFN(2+10,13-5,T)        R= +40.2  p =  6.7e-16    FAIL           
  [Low1/32]BCFN(2+11,13-5,T)        R= +69.4  p =  2.4e-27    FAIL !!        
  [Low1/32]BCFN(2+12,13-6,T)        R= +31.1  p =  4.2e-11   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+13,13-6,T)        R= +90.9  p =  1.4e-31    FAIL !!!       
  [Low1/32]BCFN(2+14,13-7,T)        R= +26.6  p =  1.2e-8   suspicious       
  [Low1/32]BCFN(2+15,13-8,T)        R= +20.5  p =  3.8e-6   unusual          
  ...and 187 test result(s) without anomalies


real	40m19.965s
user	39m26.244s
sys	0m50.920s
*/
