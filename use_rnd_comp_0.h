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
/// @created on 2019-12-08 02:55:44 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f3d861a8-a940-418e-93ba-af4c51f21089                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_sim_lin.h"

using TRnd = RndComp<RndSimLin00,RndSimLin02,10>;
/* TEST00
time ./MRndCPP 
844443584
2504572837
278761187
3746838637
2321442934
2618716438
4611644926252640164

real	0m3.880s
user	0m3.868s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.35e+07  |2696321099|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.26826511|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.15751680|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.07322307|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.38940819|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.97194858|  PASSED  
        diehard_opso|   0|   2097152|     100|0.11674974|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.15804823|  PASSED  
         diehard_dna|   0|   2097152|     100|0.59653845|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.67620729|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.29840197|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.97877193|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.79449573|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.37768298|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.98378574|  PASSED  
        diehard_sums|   0|       100|     100|0.37394537|  PASSED  
        diehard_runs|   0|    100000|     100|0.64651368|  PASSED  
        diehard_runs|   0|    100000|     100|0.64538495|  PASSED  
       diehard_craps|   0|    200000|     100|0.67563737|  PASSED  
       diehard_craps|   0|    200000|     100|0.89314768|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.45920590|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.70179864|  PASSED  
         sts_monobit|   1|    100000|     100|0.91844859|  PASSED  
            sts_runs|   2|    100000|     100|0.40195538|  PASSED  
          sts_serial|   1|    100000|     100|0.61327832|  PASSED  
          sts_serial|   2|    100000|     100|0.22874195|  PASSED  
          sts_serial|   3|    100000|     100|0.87920171|  PASSED  
          sts_serial|   3|    100000|     100|0.65897762|  PASSED  
          sts_serial|   4|    100000|     100|0.76689950|  PASSED  
          sts_serial|   4|    100000|     100|0.77145613|  PASSED  
          sts_serial|   5|    100000|     100|0.67094094|  PASSED  
          sts_serial|   5|    100000|     100|0.88118791|  PASSED  
          sts_serial|   6|    100000|     100|0.56925450|  PASSED  
          sts_serial|   6|    100000|     100|0.94043182|  PASSED  
          sts_serial|   7|    100000|     100|0.96757315|  PASSED  
          sts_serial|   7|    100000|     100|0.99906003|   WEAK   
          sts_serial|   8|    100000|     100|0.99112516|  PASSED  
          sts_serial|   8|    100000|     100|0.78771283|  PASSED  
          sts_serial|   9|    100000|     100|0.50392386|  PASSED  
          sts_serial|   9|    100000|     100|0.03192057|  PASSED  
          sts_serial|  10|    100000|     100|0.94724528|  PASSED  
          sts_serial|  10|    100000|     100|0.22728064|  PASSED  
          sts_serial|  11|    100000|     100|0.99678853|   WEAK   
          sts_serial|  11|    100000|     100|0.88930716|  PASSED  
          sts_serial|  12|    100000|     100|0.94189617|  PASSED  
          sts_serial|  12|    100000|     100|0.98345025|  PASSED  
          sts_serial|  13|    100000|     100|0.14205846|  PASSED  
          sts_serial|  13|    100000|     100|0.41176170|  PASSED  
          sts_serial|  14|    100000|     100|0.18459123|  PASSED  
          sts_serial|  14|    100000|     100|0.69374378|  PASSED  
          sts_serial|  15|    100000|     100|0.42895269|  PASSED  
          sts_serial|  15|    100000|     100|0.15120212|  PASSED  
          sts_serial|  16|    100000|     100|0.11867672|  PASSED  
          sts_serial|  16|    100000|     100|0.27379059|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.73843443|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.99686665|   WEAK   
         rgb_bitdist|   3|    100000|     100|0.25662282|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.36863170|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.56793856|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.90814368|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.95006224|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.99920871|   WEAK   
         rgb_bitdist|   9|    100000|     100|0.92210139|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.49887678|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.03566551|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.84531543|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.85615646|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.33193110|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.58527732|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.27510517|  PASSED  
    rgb_permutations|   2|    100000|     100|0.98541670|  PASSED  
    rgb_permutations|   3|    100000|     100|0.92875133|  PASSED  
    rgb_permutations|   4|    100000|     100|0.93499631|  PASSED  
    rgb_permutations|   5|    100000|     100|0.21653634|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.11810946|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.47099672|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.46111946|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.71969317|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.68395209|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.66583911|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.98505639|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.97756375|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.33529783|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.34275986|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.17369899|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.52290192|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.08057103|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.88169634|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.79569839|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.38378329|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.65669005|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.71170455|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.57059001|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.85225039|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.88944770|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.49431141|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.75244655|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.32143581|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.42340890|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.99789954|   WEAK   
      rgb_lagged_sum|  26|   1000000|     100|0.62278790|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.07461114|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.83678634|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.86518969|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.98628106|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.11041550|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.46725218|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.32989608|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.36564579|  PASSED  
             dab_dct| 256|     50000|       1|0.04936340|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.87417524|  PASSED  
        dab_filltree|  32|  15000000|       1|0.42820011|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.47013929|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.63707463|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.32753613|  PASSED  

real	48m13.089s
user	44m21.320s
sys	3m45.444s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x467b6db7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x467b6db7
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+5,13-8,T)         R= +13.5  p =  2.5e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -4.0  p =1-7.5e-3   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0x467b6db7
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x467b6db7
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.7  p = 0.990     unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x467b6db7
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x467b6db7
length= 2 gigabytes (2^31 bytes), time= 36.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x467b6db7
length= 4 gigabytes (2^32 bytes), time= 70.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x467b6db7
length= 5.750 gigabytes (2^32.524 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.554s
user	1m39.972s
sys	0m2.288s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7e1a8e83
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7e1a8e83
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7e1a8e83
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7e1a8e83
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7e1a8e83
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7e1a8e83
length= 2 gigabytes (2^31 bytes), time= 36.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  -7.1  p =1-1.4e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7e1a8e83
length= 4 gigabytes (2^32 bytes), time= 72.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x7e1a8e83
length= 5.500 gigabytes (2^32.459 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m43.139s
user	1m40.740s
sys	0m2.156s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5f390f24
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5f390f24
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5f390f24
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5f390f24
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5f390f24
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5f390f24
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5f390f24
length= 4 gigabytes (2^32 bytes), time= 72.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x5f390f24
length= 5.500 gigabytes (2^32.459 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m41.100s
user	1m38.512s
sys	0m2.216s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd5e98e1a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd5e98e1a
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd5e98e1a
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd5e98e1a
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +6.7  p =  1.0e-3   mildly suspicious
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd5e98e1a
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.6  p =  2.5e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd5e98e1a
length= 2 gigabytes (2^31 bytes), time= 36.4 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-1,T)                  R=  -7.0  p =1-1.3e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd5e98e1a
length= 4 gigabytes (2^32 bytes), time= 70.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd5e98e1a
length= 8 gigabytes (2^33 bytes), time= 140 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xd5e98e1a
length= 16 gigabytes (2^34 bytes), time= 293 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xd5e98e1a
length= 32 gigabytes (2^35 bytes), time= 591 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xd5e98e1a
length= 64 gigabytes (2^36 bytes), time= 1203 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xd5e98e1a
length= 128 gigabytes (2^37 bytes), time= 2417 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+7,13-3,T)         R= +11.7  p =  2.5e-5   unusual          
  [Low1/32]BCFN(2+9,13-4,T)         R= +23.1  p =  5.1e-10   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+10,13-5,T)        R= +18.2  p =  2.6e-7   suspicious       
  [Low1/32]BCFN(2+11,13-5,T)        R= +31.8  p =  1.2e-12    FAIL           
  [Low1/32]BCFN(2+12,13-6,T)        R= +16.6  p =  4.0e-6   unusual          
  [Low1/32]BCFN(2+13,13-6,T)        R= +36.7  p =  5.3e-13    FAIL           
  [Low1/32]BCFN(2+14,13-7,T)        R= +16.9  p =  9.9e-6   unusual          
  ...and 189 test result(s) without anomalies


real	40m17.639s
user	39m22.536s
sys	0m49.120s
*/
