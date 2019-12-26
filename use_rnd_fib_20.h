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
/// @created on 2019-12-18 01:27:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 7004d178-1b28-4aeb-8b0f-c450cfd08238                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib20;
/* TEST00
time ./MRndCPP 
2575141686
2117856496
1521648769
3180561637
2572073806
2184737943
4611665255228114329

real	0m7.803s
user	0m7.788s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  |3644494980|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.70417661|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.70134973|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.64984828|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.73543298|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.16386123|  PASSED  
        diehard_opso|   0|   2097152|     100|0.09712738|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.21389710|  PASSED  
         diehard_dna|   0|   2097152|     100|0.71682780|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.26506687|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.17891884|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.82824986|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.42089060|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.76057855|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.13580715|  PASSED  
        diehard_sums|   0|       100|     100|0.50133407|  PASSED  
        diehard_runs|   0|    100000|     100|0.21120679|  PASSED  
        diehard_runs|   0|    100000|     100|0.66616672|  PASSED  
       diehard_craps|   0|    200000|     100|0.91075665|  PASSED  
       diehard_craps|   0|    200000|     100|0.24074894|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.41675440|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.94218025|  PASSED  
         sts_monobit|   1|    100000|     100|0.82228973|  PASSED  
            sts_runs|   2|    100000|     100|0.29311420|  PASSED  
          sts_serial|   1|    100000|     100|0.86682981|  PASSED  
          sts_serial|   2|    100000|     100|0.75275010|  PASSED  
          sts_serial|   3|    100000|     100|0.63155699|  PASSED  
          sts_serial|   3|    100000|     100|0.98927560|  PASSED  
          sts_serial|   4|    100000|     100|0.74662512|  PASSED  
          sts_serial|   4|    100000|     100|0.78668228|  PASSED  
          sts_serial|   5|    100000|     100|0.85596744|  PASSED  
          sts_serial|   5|    100000|     100|0.91689731|  PASSED  
          sts_serial|   6|    100000|     100|0.28889689|  PASSED  
          sts_serial|   6|    100000|     100|0.14714080|  PASSED  
          sts_serial|   7|    100000|     100|0.97171023|  PASSED  
          sts_serial|   7|    100000|     100|0.17546704|  PASSED  
          sts_serial|   8|    100000|     100|0.23554985|  PASSED  
          sts_serial|   8|    100000|     100|0.41232157|  PASSED  
          sts_serial|   9|    100000|     100|0.31261608|  PASSED  
          sts_serial|   9|    100000|     100|0.78026344|  PASSED  
          sts_serial|  10|    100000|     100|0.49400584|  PASSED  
          sts_serial|  10|    100000|     100|0.71742804|  PASSED  
          sts_serial|  11|    100000|     100|0.39414078|  PASSED  
          sts_serial|  11|    100000|     100|0.51255884|  PASSED  
          sts_serial|  12|    100000|     100|0.06777570|  PASSED  
          sts_serial|  12|    100000|     100|0.10694335|  PASSED  
          sts_serial|  13|    100000|     100|0.38133423|  PASSED  
          sts_serial|  13|    100000|     100|0.22123528|  PASSED  
          sts_serial|  14|    100000|     100|0.88811707|  PASSED  
          sts_serial|  14|    100000|     100|0.41005908|  PASSED  
          sts_serial|  15|    100000|     100|0.96579474|  PASSED  
          sts_serial|  15|    100000|     100|0.80062986|  PASSED  
          sts_serial|  16|    100000|     100|0.60489618|  PASSED  
          sts_serial|  16|    100000|     100|0.72002579|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.58812688|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.97015198|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.20881909|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.70204733|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.96173151|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.84505406|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.70065894|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.88565082|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.68027629|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.88030771|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.77121266|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.11249504|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.72072825|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.91390525|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.38766041|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.01717567|  PASSED  
    rgb_permutations|   2|    100000|     100|0.08258210|  PASSED  
    rgb_permutations|   3|    100000|     100|0.30970229|  PASSED  
    rgb_permutations|   4|    100000|     100|0.73906138|  PASSED  
    rgb_permutations|   5|    100000|     100|0.85311335|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.61176836|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.36024292|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.60760605|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.11538805|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.40486398|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.02555616|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.57498004|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.57510127|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.13680185|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.73948531|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.76864607|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.06140527|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.36618628|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.23004900|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.68881139|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.61259704|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.87713119|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.83696391|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.40020910|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.76594375|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.44976589|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.47459736|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.04436632|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.34230962|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.84526848|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.35080832|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.82438689|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.03485735|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.77421701|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.37683066|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.09226693|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.07057499|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.83302121|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.59722735|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.26900892|  PASSED  
             dab_dct| 256|     50000|       1|0.99323851|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.32201541|  PASSED  
        dab_filltree|  32|  15000000|       1|0.74907090|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.21692658|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.72925386|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.09418163|  PASSED  

real	48m41.594s
user	45m2.948s
sys	3m32.276s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x21ec7d6c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x21ec7d6c
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x21ec7d6c
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x21ec7d6c
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-5,T)         R= +10.2  p =  3.6e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x21ec7d6c
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x21ec7d6c
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R=  -6.9  p =1-1.6e-3   unusual          
  [Low1/32]BCFN(2+0,13-3,T)         R=  +9.5  p =  2.6e-4   mildly suspicious
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0x21ec7d6c
length= 4 gigabytes (2^32 bytes), time= 73.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +20.6  p =  1.5e-9    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+1,13-3,T)         R=  +9.1  p =  4.3e-4   unusual          
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0x21ec7d6c
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-2,T)         R= +32.9  p =  2.0e-16    FAIL !         
  [Low1/32]BCFN(2+1,13-3,T)         R= +17.2  p =  6.0e-8   very suspicious  
  ...and 158 test result(s) without anomalies


real	1m44.508s
user	1m42.116s
sys	0m2.180s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x320219ec
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x320219ec
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x320219ec
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x320219ec
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x320219ec
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  +9.7  p =  1.1e-4   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x320219ec
length= 2 gigabytes (2^31 bytes), time= 37.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-1,T)         R=  +8.3  p =  6.0e-4   unusual          
  [Low1/32]BCFN(2+0,13-3,T)         R= +10.5  p =  9.5e-5   mildly suspicious
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0x320219ec
length= 4 gigabytes (2^32 bytes), time= 73.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +19.3  p =  6.2e-9    VERY SUSPICIOUS 
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x320219ec
length= 5.500 gigabytes (2^32.459 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-2,T)         R= +33.8  p =  6.9e-17    FAIL !         
  [Low1/32]BCFN(2+1,13-3,T)         R= +10.9  p =  5.9e-5   mildly suspicious
  ...and 158 test result(s) without anomalies


real	1m41.613s
user	1m39.120s
sys	0m2.172s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xac3da4a2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xac3da4a2
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xac3da4a2
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xac3da4a2
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R=  +7.8  p =  1.7e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xac3da4a2
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  +4.6  p =  8.2e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xac3da4a2
length= 2 gigabytes (2^31 bytes), time= 37.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +11.3  p =  3.8e-5   mildly suspicious
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xac3da4a2
length= 4 gigabytes (2^32 bytes), time= 76.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +22.8  p =  1.4e-10   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+1,13-3,T)         R= +12.9  p =  6.8e-6   suspicious       
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0xac3da4a2
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-2,T)         R= +33.9  p =  6.7e-17    FAIL !         
  [Low1/32]BCFN(2+1,13-3,T)         R= +19.6  p =  4.7e-9    VERY SUSPICIOUS 
  ...and 158 test result(s) without anomalies


real	1m43.389s
user	1m41.020s
sys	0m2.084s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6a29c605
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6a29c605
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6a29c605
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6a29c605
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6a29c605
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x6a29c605
length= 2 gigabytes (2^31 bytes), time= 38.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +10.8  p =  6.8e-5   mildly suspicious
  [Low1/32]BCFN(2+1,13-3,T)         R=  +9.0  p =  4.6e-4   unusual          
  [Low1/32]Gap-16:B                 R=  +5.4  p =  1.4e-4   mildly suspicious
  ...and 145 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6a29c605
length= 4 gigabytes (2^32 bytes), time= 73.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +25.9  p =  4.7e-12    FAIL           
  [Low1/32]BCFN(2+1,13-3,T)         R=  +9.7  p =  2.3e-4   unusual          
  ...and 154 test result(s) without anomalies


real	1m14.542s
user	1m12.692s
sys	0m1.732s
*/
