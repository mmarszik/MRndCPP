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
/// @created on 2019-12-18 01:27:09 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 064aad46-fd63-4863-9909-60fcb6f1464f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib19;
/* TEST00
time ./MRndCPP 
1638838663
1019226286
3703212452
284279000
961320808
3115168964
192671271538922

real	0m51.542s
user	0m51.472s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.21e+07  |1805473643|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.30010519|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.89618276|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.09807755|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.55731748|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.50361248|  PASSED  
        diehard_opso|   0|   2097152|     100|0.80364967|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.99227416|  PASSED  
         diehard_dna|   0|   2097152|     100|0.83574472|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.68728485|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.20521433|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.59549008|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.94457356|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.36975461|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.60467787|  PASSED  
        diehard_sums|   0|       100|     100|0.00642855|  PASSED  
        diehard_runs|   0|    100000|     100|0.92550484|  PASSED  
        diehard_runs|   0|    100000|     100|0.38465240|  PASSED  
       diehard_craps|   0|    200000|     100|0.81902456|  PASSED  
       diehard_craps|   0|    200000|     100|0.75001225|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.82253168|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.78567820|  PASSED  
         sts_monobit|   1|    100000|     100|0.18379666|  PASSED  
            sts_runs|   2|    100000|     100|0.54104809|  PASSED  
          sts_serial|   1|    100000|     100|0.43813666|  PASSED  
          sts_serial|   2|    100000|     100|0.60430740|  PASSED  
          sts_serial|   3|    100000|     100|0.57042971|  PASSED  
          sts_serial|   3|    100000|     100|0.65424138|  PASSED  
          sts_serial|   4|    100000|     100|0.97136463|  PASSED  
          sts_serial|   4|    100000|     100|0.65211980|  PASSED  
          sts_serial|   5|    100000|     100|0.97366874|  PASSED  
          sts_serial|   5|    100000|     100|0.64731779|  PASSED  
          sts_serial|   6|    100000|     100|0.57748191|  PASSED  
          sts_serial|   6|    100000|     100|0.84765758|  PASSED  
          sts_serial|   7|    100000|     100|0.68964889|  PASSED  
          sts_serial|   7|    100000|     100|0.74308029|  PASSED  
          sts_serial|   8|    100000|     100|0.99888210|   WEAK   
          sts_serial|   8|    100000|     100|0.94537557|  PASSED  
          sts_serial|   9|    100000|     100|0.82401103|  PASSED  
          sts_serial|   9|    100000|     100|0.39204593|  PASSED  
          sts_serial|  10|    100000|     100|0.95989980|  PASSED  
          sts_serial|  10|    100000|     100|0.48152570|  PASSED  
          sts_serial|  11|    100000|     100|0.97491998|  PASSED  
          sts_serial|  11|    100000|     100|0.96762432|  PASSED  
          sts_serial|  12|    100000|     100|0.14549295|  PASSED  
          sts_serial|  12|    100000|     100|0.13813593|  PASSED  
          sts_serial|  13|    100000|     100|0.81468140|  PASSED  
          sts_serial|  13|    100000|     100|0.63159028|  PASSED  
          sts_serial|  14|    100000|     100|0.90755456|  PASSED  
          sts_serial|  14|    100000|     100|0.76707349|  PASSED  
          sts_serial|  15|    100000|     100|0.65676645|  PASSED  
          sts_serial|  15|    100000|     100|0.83514703|  PASSED  
          sts_serial|  16|    100000|     100|0.82668862|  PASSED  
          sts_serial|  16|    100000|     100|0.89724516|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.41582790|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.12850206|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.23874211|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.91858853|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.92796359|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.05635057|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.92383818|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.15153895|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.24555972|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.60399745|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.92383813|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.96385506|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.03678664|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.46740859|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.55807652|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.53266800|  PASSED  
    rgb_permutations|   2|    100000|     100|0.72875864|  PASSED  
    rgb_permutations|   3|    100000|     100|0.98381830|  PASSED  
    rgb_permutations|   4|    100000|     100|0.72544727|  PASSED  
    rgb_permutations|   5|    100000|     100|0.41943349|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.69355004|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.91881405|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.50088785|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.83452428|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.86993679|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.46568591|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.72611164|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.86501427|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.91597578|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.79817745|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.24085755|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.87805475|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.54898514|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.64315166|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.57636879|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.20218842|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.66756343|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.78525699|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.94635879|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.29757817|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.08394594|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.66428203|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.61092211|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.90103690|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.80233655|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.08138189|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.38570733|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.60673529|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.55407849|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.15795791|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.71824737|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.95305903|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.38380750|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.48058425|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.04565719|  PASSED  
             dab_dct| 256|     50000|       1|0.13486840|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.29866123|  PASSED  
        dab_filltree|  32|  15000000|       1|0.77886066|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.20276185|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.85303919|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.37838662|  PASSED  

real	48m23.301s
user	44m53.640s
sys	3m26.408s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x42d4bd79
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x42d4bd79
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x42d4bd79
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x42d4bd79
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x42d4bd79
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.4  p =1-7.1e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x42d4bd79
length= 2 gigabytes (2^31 bytes), time= 37.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x42d4bd79
length= 4 gigabytes (2^32 bytes), time= 72.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x42d4bd79
length= 5.500 gigabytes (2^32.459 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m40.965s
user	1m38.376s
sys	0m2.372s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc5cf5a8e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc5cf5a8e
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc5cf5a8e
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc5cf5a8e
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.1  p =  2.5e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc5cf5a8e
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc5cf5a8e
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xc5cf5a8e
length= 4 gigabytes (2^32 bytes), time= 73.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xc5cf5a8e
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-2,T)         R=  -7.3  p =1-6.6e-4   unusual          
  ...and 159 test result(s) without anomalies


real	1m43.859s
user	1m41.528s
sys	0m2.216s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7734ce2c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7734ce2c
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7734ce2c
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+5,13-4,T)                  R=  -7.3  p =1-2.7e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7734ce2c
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7734ce2c
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7734ce2c
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.6  p = 0.988     unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7734ce2c
length= 4 gigabytes (2^32 bytes), time= 71.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.9  p =1-8.2e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7734ce2c
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.6  p = 0.988     unusual          
  ...and 159 test result(s) without anomalies


real	1m44.486s
user	1m41.944s
sys	0m2.428s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc6915c8b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc6915c8b
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc6915c8b
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.2  p = 0.011     unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc6915c8b
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  +3.9  p =  1.1e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc6915c8b
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc6915c8b
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xc6915c8b
length= 4 gigabytes (2^32 bytes), time= 71.8 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -3.9  p =1-2.8e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc6915c8b
length= 8 gigabytes (2^33 bytes), time= 143 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xc6915c8b
length= 16 gigabytes (2^34 bytes), time= 298 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xc6915c8b
length= 32 gigabytes (2^35 bytes), time= 602 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xc6915c8b
length= 64 gigabytes (2^36 bytes), time= 1223 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xc6915c8b
length= 128 gigabytes (2^37 bytes), time= 2454 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xc6915c8b
length= 188.250 gigabytes (2^37.557 bytes), time= 3600 seconds
  no anomalies in 201 test result(s)


real	60m0.165s
user	58m41.600s
sys	1m13.972s
*/
