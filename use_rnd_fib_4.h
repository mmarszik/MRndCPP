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
/// @created on 2019-12-18 01:27:28 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f8b7c0bd-21d4-4dfb-9c91-41312860a097                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib4;
/* TEST00
time ./MRndCPP 
312614768
261569175
2183094376
3386988905
958481614
619927679
4611662167262713142

real	0m7.851s
user	0m7.756s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.13e+07  | 103475851|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.88389389|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.61691946|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.94447605|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.96838508|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.65825348|  PASSED  
        diehard_opso|   0|   2097152|     100|0.45926007|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.13873521|  PASSED  
         diehard_dna|   0|   2097152|     100|0.26217096|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.83804439|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.64451058|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.57621075|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.52380143|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.35621654|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.73671761|  PASSED  
        diehard_sums|   0|       100|     100|0.00062131|   WEAK   
        diehard_runs|   0|    100000|     100|0.24316367|  PASSED  
        diehard_runs|   0|    100000|     100|0.50997494|  PASSED  
       diehard_craps|   0|    200000|     100|0.08899377|  PASSED  
       diehard_craps|   0|    200000|     100|0.39156093|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.65818495|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.44266177|  PASSED  
         sts_monobit|   1|    100000|     100|0.23543105|  PASSED  
            sts_runs|   2|    100000|     100|0.96394988|  PASSED  
          sts_serial|   1|    100000|     100|0.12376053|  PASSED  
          sts_serial|   2|    100000|     100|0.33529758|  PASSED  
          sts_serial|   3|    100000|     100|0.46563389|  PASSED  
          sts_serial|   3|    100000|     100|0.27100607|  PASSED  
          sts_serial|   4|    100000|     100|0.97076922|  PASSED  
          sts_serial|   4|    100000|     100|0.79165851|  PASSED  
          sts_serial|   5|    100000|     100|0.95363823|  PASSED  
          sts_serial|   5|    100000|     100|0.66469001|  PASSED  
          sts_serial|   6|    100000|     100|0.82338500|  PASSED  
          sts_serial|   6|    100000|     100|0.51098570|  PASSED  
          sts_serial|   7|    100000|     100|0.49855721|  PASSED  
          sts_serial|   7|    100000|     100|0.85810773|  PASSED  
          sts_serial|   8|    100000|     100|0.99004118|  PASSED  
          sts_serial|   8|    100000|     100|0.46804990|  PASSED  
          sts_serial|   9|    100000|     100|0.90266742|  PASSED  
          sts_serial|   9|    100000|     100|0.97684674|  PASSED  
          sts_serial|  10|    100000|     100|0.67954358|  PASSED  
          sts_serial|  10|    100000|     100|0.29020971|  PASSED  
          sts_serial|  11|    100000|     100|0.30022643|  PASSED  
          sts_serial|  11|    100000|     100|0.07458632|  PASSED  
          sts_serial|  12|    100000|     100|0.02520705|  PASSED  
          sts_serial|  12|    100000|     100|0.45841499|  PASSED  
          sts_serial|  13|    100000|     100|0.48864903|  PASSED  
          sts_serial|  13|    100000|     100|0.10441768|  PASSED  
          sts_serial|  14|    100000|     100|0.04282549|  PASSED  
          sts_serial|  14|    100000|     100|0.04022937|  PASSED  
          sts_serial|  15|    100000|     100|0.17581015|  PASSED  
          sts_serial|  15|    100000|     100|0.93963333|  PASSED  
          sts_serial|  16|    100000|     100|0.00626022|  PASSED  
          sts_serial|  16|    100000|     100|0.85282322|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.95372265|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.47957671|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.44647555|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.48235327|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.44359181|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.96563886|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.55496267|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.95559753|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.08686401|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.54310890|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.83359730|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.69411191|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.35751722|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.14210771|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.49506577|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.16583314|  PASSED  
    rgb_permutations|   2|    100000|     100|0.70791649|  PASSED  
    rgb_permutations|   3|    100000|     100|0.04376938|  PASSED  
    rgb_permutations|   4|    100000|     100|0.65457478|  PASSED  
    rgb_permutations|   5|    100000|     100|0.97990800|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.63854521|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.95902976|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.62686582|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.00199592|   WEAK   
      rgb_lagged_sum|   4|   1000000|     100|0.82556879|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.33789130|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.52919485|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.05055392|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.47994105|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.81535570|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.70663926|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.32692097|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.63383469|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.73004404|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.06250401|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.29257822|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.06120011|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.97000739|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.47273418|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.37012784|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.95925728|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.33769197|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.99662009|   WEAK   
      rgb_lagged_sum|  23|   1000000|     100|0.78196945|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.44683859|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.58885634|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.61093691|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.85283920|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.00694602|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.82340142|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.21091975|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.15268086|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.11921269|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.07544306|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.91598763|  PASSED  
             dab_dct| 256|     50000|       1|0.63020487|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.90978340|  PASSED  
        dab_filltree|  32|  15000000|       1|0.64890578|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.45955625|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.74373569|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.92262215|  PASSED  

real	49m4.390s
user	45m20.552s
sys	3m31.788s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xeeee21f4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xeeee21f4
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.3  p =1-4.8e-3   unusual          
  [Low1/32]Gap-16:B                 R=  +4.6  p =  1.1e-3   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0xeeee21f4
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.4  p =1-2.8e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xeeee21f4
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xeeee21f4
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xeeee21f4
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xeeee21f4
length= 4 gigabytes (2^32 bytes), time= 72.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.4  p =  1.6e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xeeee21f4
length= 5.500 gigabytes (2^32.459 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m40.866s
user	1m38.428s
sys	0m2.268s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf98bd013
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf98bd013
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf98bd013
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf98bd013
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf98bd013
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf98bd013
length= 2 gigabytes (2^31 bytes), time= 38.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf98bd013
length= 4 gigabytes (2^32 bytes), time= 77.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xf98bd013
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-2,T)         R=  +8.4  p =  7.1e-4   unusual          
  [Low1/32]BCFN(2+1,13-3,T)         R=  +8.0  p =  1.5e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -5.1  p =1-1.3e-3   unusual          
  ...and 157 test result(s) without anomalies


real	1m43.875s
user	1m41.568s
sys	0m2.092s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf4b011a8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf4b011a8
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf4b011a8
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf4b011a8
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.2  p =  8.1e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf4b011a8
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf4b011a8
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf4b011a8
length= 4 gigabytes (2^32 bytes), time= 74.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xf4b011a8
length= 5.250 gigabytes (2^32.392 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m40.756s
user	1m38.600s
sys	0m1.988s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x24e1caf3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x24e1caf3
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.8  p =  3.5e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x24e1caf3
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x24e1caf3
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x24e1caf3
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  +4.8  p =  5.3e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x24e1caf3
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x24e1caf3
length= 4 gigabytes (2^32 bytes), time= 72.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x24e1caf3
length= 8 gigabytes (2^33 bytes), time= 147 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-2,T)         R= +10.4  p =  6.3e-5   mildly suspicious
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x24e1caf3
length= 16 gigabytes (2^34 bytes), time= 302 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-1,T)         R= +15.9  p =  5.3e-8   very suspicious  
  [Low1/32]BCFN(2+1,13-1,T)         R=  +8.6  p =  4.3e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin32, seed=0x24e1caf3
length= 32 gigabytes (2^35 bytes), time= 609 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-1,T)         R= +23.9  p =  2.5e-12    FAIL           
  [Low1/32]BCFN(2+1,13-1,T)         R= +26.0  p =  1.9e-13    FAIL           
  ...and 178 test result(s) without anomalies


real	10m10.157s
user	9m56.728s
sys	0m12.220s
*/
