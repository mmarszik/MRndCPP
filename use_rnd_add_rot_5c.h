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
/// @created on 2019-12-18 20:15:49 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 41cac7ec-d1bb-4140-8cb4-164299ec0a4e                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot5c;
/* TEST00
time ./MRndCPP 
1640825163
1806117283
3778351275
4218654954
219278999
2329717036
4611654185011561609

real	0m19.169s
user	0m19.120s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.57e+07  |2429861424|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.38964691|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.33803358|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.75202151|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.02459925|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.58161763|  PASSED  
        diehard_opso|   0|   2097152|     100|0.93951320|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.13892581|  PASSED  
         diehard_dna|   0|   2097152|     100|0.91459106|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.94911312|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.14280921|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.99591001|   WEAK   
    diehard_2dsphere|   2|      8000|     100|0.21415644|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.81478258|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.95855398|  PASSED  
        diehard_sums|   0|       100|     100|0.29687028|  PASSED  
        diehard_runs|   0|    100000|     100|0.27353003|  PASSED  
        diehard_runs|   0|    100000|     100|0.97317385|  PASSED  
       diehard_craps|   0|    200000|     100|0.28466439|  PASSED  
       diehard_craps|   0|    200000|     100|0.90619182|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.60282441|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.34925786|  PASSED  
         sts_monobit|   1|    100000|     100|0.13029760|  PASSED  
            sts_runs|   2|    100000|     100|0.66626930|  PASSED  
          sts_serial|   1|    100000|     100|0.54200836|  PASSED  
          sts_serial|   2|    100000|     100|0.90237225|  PASSED  
          sts_serial|   3|    100000|     100|0.87238781|  PASSED  
          sts_serial|   3|    100000|     100|0.68576792|  PASSED  
          sts_serial|   4|    100000|     100|0.75282091|  PASSED  
          sts_serial|   4|    100000|     100|0.61977566|  PASSED  
          sts_serial|   5|    100000|     100|0.14014812|  PASSED  
          sts_serial|   5|    100000|     100|0.82445644|  PASSED  
          sts_serial|   6|    100000|     100|0.21465168|  PASSED  
          sts_serial|   6|    100000|     100|0.40416290|  PASSED  
          sts_serial|   7|    100000|     100|0.08353034|  PASSED  
          sts_serial|   7|    100000|     100|0.18894791|  PASSED  
          sts_serial|   8|    100000|     100|0.12298393|  PASSED  
          sts_serial|   8|    100000|     100|0.68254540|  PASSED  
          sts_serial|   9|    100000|     100|0.98328177|  PASSED  
          sts_serial|   9|    100000|     100|0.21791115|  PASSED  
          sts_serial|  10|    100000|     100|0.96594918|  PASSED  
          sts_serial|  10|    100000|     100|0.16478375|  PASSED  
          sts_serial|  11|    100000|     100|0.37811067|  PASSED  
          sts_serial|  11|    100000|     100|0.02310703|  PASSED  
          sts_serial|  12|    100000|     100|0.47612866|  PASSED  
          sts_serial|  12|    100000|     100|0.14842147|  PASSED  
          sts_serial|  13|    100000|     100|0.50054069|  PASSED  
          sts_serial|  13|    100000|     100|0.80466745|  PASSED  
          sts_serial|  14|    100000|     100|0.79955761|  PASSED  
          sts_serial|  14|    100000|     100|0.39967886|  PASSED  
          sts_serial|  15|    100000|     100|0.68404201|  PASSED  
          sts_serial|  15|    100000|     100|0.81879619|  PASSED  
          sts_serial|  16|    100000|     100|0.65542594|  PASSED  
          sts_serial|  16|    100000|     100|0.21735005|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.98274064|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.37394374|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.80733518|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.56469213|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.88983548|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.97476783|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.26695128|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.21035565|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.69154204|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.80971594|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.96878544|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.91284024|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.60110318|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.24822476|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.41395348|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.14358180|  PASSED  
    rgb_permutations|   2|    100000|     100|0.37356801|  PASSED  
    rgb_permutations|   3|    100000|     100|0.87865053|  PASSED  
    rgb_permutations|   4|    100000|     100|0.73852039|  PASSED  
    rgb_permutations|   5|    100000|     100|0.55050531|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.17580379|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.86648474|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.44443537|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.71732636|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.54268551|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.94733398|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.99294144|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.77682130|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.99523171|   WEAK   
      rgb_lagged_sum|   9|   1000000|     100|0.84845211|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.59854299|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.88181364|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.71339417|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.34794978|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.18545364|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.82927587|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.03764468|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.63132267|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.09714803|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.85090542|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.36656520|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.60650176|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.88459559|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.93144334|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.28747541|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.92990727|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.15868532|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.79721276|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.99643984|   WEAK   
      rgb_lagged_sum|  29|   1000000|     100|0.72214335|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.64304363|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.15457009|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.76418652|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.97070191|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.54544051|  PASSED  
             dab_dct| 256|     50000|       1|0.61879415|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.41674578|  PASSED  
        dab_filltree|  32|  15000000|       1|0.88112356|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.11362148|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.20000162|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.97128812|  PASSED  

real	55m38.538s
user	52m3.356s
sys	3m30.556s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x317b8021
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x317b8021
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x317b8021
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  +4.4  p =  1.4e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x317b8021
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  +4.6  p =  8.3e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x317b8021
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x317b8021
length= 2 gigabytes (2^31 bytes), time= 41.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x317b8021
length= 4 gigabytes (2^32 bytes), time= 83.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x317b8021
length= 5.000 gigabytes (2^32.322 bytes), time= 105 seconds
  no anomalies in 159 test result(s)


real	1m45.301s
user	1m42.112s
sys	0m3.024s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4d135316
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4d135316
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4d135316
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4d135316
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-5,T)         R=  -5.9  p =1-1.9e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4d135316
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4d135316
length= 2 gigabytes (2^31 bytes), time= 41.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x4d135316
length= 4 gigabytes (2^32 bytes), time= 80.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+4,13-4,T)         R=  -7.8  p =1-1.1e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4d135316
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 159 test result(s)


real	1m41.788s
user	1m38.752s
sys	0m2.912s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb3e7988
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb3e7988
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+3,13-6,T)         R=  -6.5  p =1-1.3e-4   unusual          
  [Low1/32]Gap-16:A                 R=  +5.8  p =  3.1e-4   mildly suspicious
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb3e7988
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.6  p =  2.5e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb3e7988
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.5  p =  6.6e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb3e7988
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb3e7988
length= 2 gigabytes (2^31 bytes), time= 41.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb3e7988
length= 4 gigabytes (2^32 bytes), time= 80.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-3,T)         R=  -7.6  p =1-2.6e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb3e7988
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-3,T)         R=  -7.8  p =1-1.9e-4   mildly suspicious
  ...and 158 test result(s) without anomalies


real	1m40.870s
user	1m37.648s
sys	0m3.060s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6a35417b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6a35417b
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6a35417b
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.1  p =  1.0e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6a35417b
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.6  p =  5.1e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6a35417b
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.8  p =  2.8e-4   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6a35417b
length= 2 gigabytes (2^31 bytes), time= 41.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6a35417b
length= 4 gigabytes (2^32 bytes), time= 82.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x6a35417b
length= 8 gigabytes (2^33 bytes), time= 170 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x6a35417b
length= 16 gigabytes (2^34 bytes), time= 341 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.9  p =  3.2e-3   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6a35417b
length= 32 gigabytes (2^35 bytes), time= 679 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.1  p =  1.9e-3   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6a35417b
length= 64 gigabytes (2^36 bytes), time= 1367 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x6a35417b
length= 128 gigabytes (2^37 bytes), time= 2731 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x6a35417b
length= 169.000 gigabytes (2^37.401 bytes), time= 3601 seconds
  no anomalies in 201 test result(s)


real	60m2.213s
user	58m15.740s
sys	1m41.960s
*/
