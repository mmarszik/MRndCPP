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
/// @created on 2019-12-18 01:26:14 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 0dfedf11-77a7-4040-b2bf-4c350b7fab63                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib13;
/* TEST00
time ./MRndCPP 
2808225076
3923747748
894141284
1154568935
3799998645
1316746112
4611666221459314445

real	0m7.816s
user	0m7.796s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.15e+07  |2030635885|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.00000000|  FAILED  
      diehard_operm5|   0|   1000000|     100|0.73329367|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.06039709|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.58438826|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.12665015|  PASSED  
        diehard_opso|   0|   2097152|     100|0.58449864|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.96758199|  PASSED  
         diehard_dna|   0|   2097152|     100|0.04473671|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.60369291|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.64283397|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.04055164|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.84861639|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.96522423|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.87651433|  PASSED  
        diehard_sums|   0|       100|     100|0.35071397|  PASSED  
        diehard_runs|   0|    100000|     100|0.15012169|  PASSED  
        diehard_runs|   0|    100000|     100|0.47517807|  PASSED  
       diehard_craps|   0|    200000|     100|0.62634660|  PASSED  
       diehard_craps|   0|    200000|     100|0.48690222|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.91240261|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.96742750|  PASSED  
         sts_monobit|   1|    100000|     100|0.92580865|  PASSED  
            sts_runs|   2|    100000|     100|0.91295976|  PASSED  
          sts_serial|   1|    100000|     100|0.65882759|  PASSED  
          sts_serial|   2|    100000|     100|0.31330171|  PASSED  
          sts_serial|   3|    100000|     100|0.31237484|  PASSED  
          sts_serial|   3|    100000|     100|0.90781820|  PASSED  
          sts_serial|   4|    100000|     100|0.41493917|  PASSED  
          sts_serial|   4|    100000|     100|0.66835439|  PASSED  
          sts_serial|   5|    100000|     100|0.14788739|  PASSED  
          sts_serial|   5|    100000|     100|0.68600233|  PASSED  
          sts_serial|   6|    100000|     100|0.20557550|  PASSED  
          sts_serial|   6|    100000|     100|0.99062554|  PASSED  
          sts_serial|   7|    100000|     100|0.90403220|  PASSED  
          sts_serial|   7|    100000|     100|0.22276755|  PASSED  
          sts_serial|   8|    100000|     100|0.32252104|  PASSED  
          sts_serial|   8|    100000|     100|0.47644195|  PASSED  
          sts_serial|   9|    100000|     100|0.38441075|  PASSED  
          sts_serial|   9|    100000|     100|0.26494295|  PASSED  
          sts_serial|  10|    100000|     100|0.17245122|  PASSED  
          sts_serial|  10|    100000|     100|0.98452198|  PASSED  
          sts_serial|  11|    100000|     100|0.48652120|  PASSED  
          sts_serial|  11|    100000|     100|0.85338707|  PASSED  
          sts_serial|  12|    100000|     100|0.78768567|  PASSED  
          sts_serial|  12|    100000|     100|0.92127138|  PASSED  
          sts_serial|  13|    100000|     100|0.58750218|  PASSED  
          sts_serial|  13|    100000|     100|0.28986662|  PASSED  
          sts_serial|  14|    100000|     100|0.96845667|  PASSED  
          sts_serial|  14|    100000|     100|0.67280114|  PASSED  
          sts_serial|  15|    100000|     100|0.19730178|  PASSED  
          sts_serial|  15|    100000|     100|0.45229627|  PASSED  
          sts_serial|  16|    100000|     100|0.65471465|  PASSED  
          sts_serial|  16|    100000|     100|0.35765128|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.00674118|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.04368325|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.13907125|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.42883670|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.79747531|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.91280248|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.96680178|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.97881901|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.76726049|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.35299394|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.09992951|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.45033713|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.33590361|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.24773978|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.87778919|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.83865810|  PASSED  
    rgb_permutations|   2|    100000|     100|0.29575663|  PASSED  
    rgb_permutations|   3|    100000|     100|0.69282238|  PASSED  
    rgb_permutations|   4|    100000|     100|0.49420576|  PASSED  
    rgb_permutations|   5|    100000|     100|0.26450872|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.25845205|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.99714582|   WEAK   
      rgb_lagged_sum|   2|   1000000|     100|0.38871430|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.53631306|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.09976897|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.31834922|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.65964639|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.68567481|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.34474442|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.76452295|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.35418789|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.52901194|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.27064336|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.02088072|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.18068819|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.73032114|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.77607587|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.71745980|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.18875370|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.49867094|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.22637417|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.16509134|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.88630205|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.25539180|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.77775421|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.29610082|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.10702239|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.14440374|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.10556971|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.33465609|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.57777025|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.36974813|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.27603662|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.56005625|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.91198519|  PASSED  
             dab_dct| 256|     50000|       1|0.32937626|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.91277153|  PASSED  
        dab_filltree|  32|  15000000|       1|0.54073357|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.05391060|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.12704395|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.96475417|  PASSED  

real	54m44.012s
user	50m57.956s
sys	3m39.052s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x39412d42
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x39412d42
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x39412d42
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.8  p =1-8.2e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x39412d42
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x39412d42
length= 1 gigabyte (2^30 bytes), time= 20.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x39412d42
length= 2 gigabytes (2^31 bytes), time= 38.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.3  p =1-4.2e-3   unusual          
  [Low1/32]BCFN(2+0,13-3,T)         R= +13.7  p =  2.7e-6   very suspicious  
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0x39412d42
length= 4 gigabytes (2^32 bytes), time= 75.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +28.9  p =  1.8e-13    FAIL           
  ...and 155 test result(s) without anomalies


real	1m16.204s
user	1m14.224s
sys	0m1.756s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4eb0e592
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4eb0e592
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.2  p =1-4.5e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4eb0e592
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4eb0e592
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x4eb0e592
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4eb0e592
length= 2 gigabytes (2^31 bytes), time= 38.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +16.1  p =  2.1e-7   very suspicious  
  [Low1/32]Gap-16:A                 R=  -3.4  p =1-2.5e-3   unusual          
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4eb0e592
length= 4 gigabytes (2^32 bytes), time= 73.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +32.1  p =  5.2e-15    FAIL !         
  ...and 155 test result(s) without anomalies


real	1m14.432s
user	1m12.560s
sys	0m1.668s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8946e1c9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8946e1c9
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x8946e1c9
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8946e1c9
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8946e1c9
length= 1 gigabyte (2^30 bytes), time= 19.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x8946e1c9
length= 2 gigabytes (2^31 bytes), time= 38.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R=  +7.6  p =  2.1e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8946e1c9
length= 4 gigabytes (2^32 bytes), time= 75.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +22.8  p =  1.3e-10   VERY SUSPICIOUS 
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8946e1c9
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-2,T)         R= +30.4  p =  4.0e-15    FAIL !         
  ...and 159 test result(s) without anomalies


real	1m42.059s
user	1m39.776s
sys	0m2.012s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x82593b85
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x82593b85
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x82593b85
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x82593b85
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x82593b85
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+4,13-2,T)                  R=  +9.0  p =  3.3e-4   unusual          
  [Low1/32]BCFN(2+0,13-4,T)         R= +16.5  p =  3.7e-7   very suspicious  
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x82593b85
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +18.3  p =  1.8e-8    VERY SUSPICIOUS 
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x82593b85
length= 4 gigabytes (2^32 bytes), time= 72.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +28.4  p =  2.9e-13    FAIL           
  ...and 155 test result(s) without anomalies


real	1m13.321s
user	1m11.492s
sys	0m1.736s
*/
