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
/// @created on 2019-12-18 01:27:46 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token a2dd08a7-9dc2-4201-9715-62da74a61002                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib5;
/* TEST00
time ./MRndCPP 
1524691665
4292685570
2735262351
1672322098
1419180174
3322022642
530255530948678

real	0m51.569s
user	0m51.508s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.18e+07  | 703740423|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.82007001|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.55113668|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.83195735|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.15148220|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.44814418|  PASSED  
        diehard_opso|   0|   2097152|     100|0.25680231|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.52609514|  PASSED  
         diehard_dna|   0|   2097152|     100|0.07217304|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.46373260|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.14340651|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.66719833|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.89699647|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.15631600|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.84035030|  PASSED  
        diehard_sums|   0|       100|     100|0.39522238|  PASSED  
        diehard_runs|   0|    100000|     100|0.91393143|  PASSED  
        diehard_runs|   0|    100000|     100|0.67316817|  PASSED  
       diehard_craps|   0|    200000|     100|0.48153527|  PASSED  
       diehard_craps|   0|    200000|     100|0.58255430|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.24878289|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.16099888|  PASSED  
         sts_monobit|   1|    100000|     100|0.79111764|  PASSED  
            sts_runs|   2|    100000|     100|0.88459119|  PASSED  
          sts_serial|   1|    100000|     100|0.83260787|  PASSED  
          sts_serial|   2|    100000|     100|0.46702675|  PASSED  
          sts_serial|   3|    100000|     100|0.47720121|  PASSED  
          sts_serial|   3|    100000|     100|0.64107357|  PASSED  
          sts_serial|   4|    100000|     100|0.58503849|  PASSED  
          sts_serial|   4|    100000|     100|0.73370617|  PASSED  
          sts_serial|   5|    100000|     100|0.53016526|  PASSED  
          sts_serial|   5|    100000|     100|0.35686912|  PASSED  
          sts_serial|   6|    100000|     100|0.97958261|  PASSED  
          sts_serial|   6|    100000|     100|0.99433427|  PASSED  
          sts_serial|   7|    100000|     100|0.45867169|  PASSED  
          sts_serial|   7|    100000|     100|0.47960436|  PASSED  
          sts_serial|   8|    100000|     100|0.66765603|  PASSED  
          sts_serial|   8|    100000|     100|0.99999969|  FAILED  
          sts_serial|   9|    100000|     100|0.80333449|  PASSED  
          sts_serial|   9|    100000|     100|0.43842382|  PASSED  
          sts_serial|  10|    100000|     100|0.44561279|  PASSED  
          sts_serial|  10|    100000|     100|0.70003968|  PASSED  
          sts_serial|  11|    100000|     100|0.83881831|  PASSED  
          sts_serial|  11|    100000|     100|0.86114092|  PASSED  
          sts_serial|  12|    100000|     100|0.52275741|  PASSED  
          sts_serial|  12|    100000|     100|0.78083896|  PASSED  
          sts_serial|  13|    100000|     100|0.47536798|  PASSED  
          sts_serial|  13|    100000|     100|0.90291657|  PASSED  
          sts_serial|  14|    100000|     100|0.67211177|  PASSED  
          sts_serial|  14|    100000|     100|0.64884152|  PASSED  
          sts_serial|  15|    100000|     100|0.59261823|  PASSED  
          sts_serial|  15|    100000|     100|0.91391514|  PASSED  
          sts_serial|  16|    100000|     100|0.79362493|  PASSED  
          sts_serial|  16|    100000|     100|0.79647429|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.36121492|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.39602150|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.98212721|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.66088644|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.62192995|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.75779298|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.79799717|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.93300586|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.00565226|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.36520241|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.73020666|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.26025568|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.32636200|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.90738944|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.37027846|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.69289869|  PASSED  
    rgb_permutations|   2|    100000|     100|0.97939290|  PASSED  
    rgb_permutations|   3|    100000|     100|0.30321222|  PASSED  
    rgb_permutations|   4|    100000|     100|0.50906755|  PASSED  
    rgb_permutations|   5|    100000|     100|0.65078288|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.89170736|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.90967213|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.22706483|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.30317787|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.95407434|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.29891500|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.21312211|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.30025710|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.87949670|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.84939999|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.26230227|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.84019823|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.85486021|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.81884563|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.72618489|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.15798684|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.89649863|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.48608368|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.59713117|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.92873129|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.65908674|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.15637601|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.26773143|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.11060719|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.35417858|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.23414201|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.62543746|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.45732187|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.07060763|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.95613317|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.63228633|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.97915455|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.43798209|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.94425543|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.48358567|  PASSED  
             dab_dct| 256|     50000|       1|0.45992553|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.56224054|  PASSED  
        dab_filltree|  32|  15000000|       1|0.41190894|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.93952062|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.08517202|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.79281892|  PASSED  

real	50m20.805s
user	46m44.840s
sys	3m33.228s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc5e54a74
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc5e54a74
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc5e54a74
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc5e54a74
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xc5e54a74
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc5e54a74
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.1e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc5e54a74
length= 4 gigabytes (2^32 bytes), time= 72.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xc5e54a74
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.821s
user	1m42.428s
sys	0m2.224s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xea3a7037
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xea3a7037
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xea3a7037
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xea3a7037
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xea3a7037
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xea3a7037
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xea3a7037
length= 4 gigabytes (2^32 bytes), time= 72.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xea3a7037
length= 5.500 gigabytes (2^32.459 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m41.182s
user	1m38.856s
sys	0m2.200s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb4203e12
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb4203e12
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb4203e12
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb4203e12
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb4203e12
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb4203e12
length= 2 gigabytes (2^31 bytes), time= 36.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb4203e12
length= 4 gigabytes (2^32 bytes), time= 73.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xb4203e12
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m44.164s
user	1m41.820s
sys	0m2.120s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7f731823
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7f731823
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7f731823
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7f731823
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7f731823
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7f731823
length= 2 gigabytes (2^31 bytes), time= 36.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x7f731823
length= 4 gigabytes (2^32 bytes), time= 71.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x7f731823
length= 8 gigabytes (2^33 bytes), time= 148 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x7f731823
length= 16 gigabytes (2^34 bytes), time= 302 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x7f731823
length= 32 gigabytes (2^35 bytes), time= 607 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x7f731823
length= 64 gigabytes (2^36 bytes), time= 1232 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x7f731823
length= 128 gigabytes (2^37 bytes), time= 2468 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x7f731823
length= 187.250 gigabytes (2^37.549 bytes), time= 3600 seconds
  no anomalies in 201 test result(s)


real	60m0.253s
user	58m46.472s
sys	1m9.996s
*/
