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
/// @created on 2019-12-08 02:57:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8f4635a2-d7ca-4771-81ec-c2e4a2e59fab                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib1;
/* TEST00
time ./MRndCPP 10 
1220954891
1906405657
4025907378
1480416779
3910681319
1864078567
3311039578
2412509864
3575263857
1987687355
6823153464398581791

real	0m1.770s
user	0m1.766s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.42e+07  |1486167501|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.99978428|   WEAK   

real	0m21.848s
user	0m22.267s
sys	0m0.499s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x1bcc3dc1
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x1bcc3dc1
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x1bcc3dc1
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x1bcc3dc1
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x1bcc3dc1
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x1bcc3dc1
length= 1.500 gigabytes (2^30.585 bytes), time= 31.4 seconds
  no anomalies in 187 test result(s)


real	0m32.232s
user	0m31.963s
sys	0m1.034s
*/
/* TEST00
time ./MRndCPP 10 
1220954891
1906405657
4025907378
1480416779
3910681319
1864078567
3311039578
2412509864
3575263857
1987687355
6823153464398581791

real	0m1.775s
user	0m1.775s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.96e+07  |1543414454|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.79752284|  PASSED  

real	0m22.176s
user	0m22.481s
sys	0m0.720s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xacd7a9c6
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xacd7a9c6
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xacd7a9c6
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xacd7a9c6
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xacd7a9c6
length= 1 gigabyte (2^30 bytes), time= 22.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xacd7a9c6
length= 2 gigabytes (2^31 bytes), time= 42.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +6.0  p =  3.6e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0xacd7a9c6
length= 4 gigabytes (2^32 bytes), time= 82.7 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xacd7a9c6
length= 8 gigabytes (2^33 bytes), time= 163 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -5.7  p =1-6.4e-4   mildly suspicious
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0xacd7a9c6
length= 15.000 gigabytes (2^33.907 bytes), time= 301 seconds
  no anomalies in 226 test result(s)


real	5m1.457s
user	4m59.100s
sys	0m10.410s
*/
/* TEST00
time ./MRndCPP 12 
1220954891
1906405657
4025907378
1480416779
3910681319
1864078567
3311039578
2412509864
3575263857
1987687355
8338288266685307397

real	0m7.178s
user	0m7.177s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.95e+07  |2861042180|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.79796720|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.13871239|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.98771457|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.92791247|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.67914766|  PASSED  
        diehard_opso|   0|   2097152|     100|0.29640918|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.46763215|  PASSED  
         diehard_dna|   0|   2097152|     100|0.20862058|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.21173852|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.56543961|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.87420580|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.83122963|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.98025419|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.71293049|  PASSED  
        diehard_sums|   0|       100|     100|0.34086095|  PASSED  
        diehard_runs|   0|    100000|     100|0.64156042|  PASSED  
        diehard_runs|   0|    100000|     100|0.58321664|  PASSED  
       diehard_craps|   0|    200000|     100|0.23711868|  PASSED  
       diehard_craps|   0|    200000|     100|0.18471196|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.87209447|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.11235054|  PASSED  
         sts_monobit|   1|    100000|     100|0.07012591|  PASSED  
            sts_runs|   2|    100000|     100|0.88104385|  PASSED  
          sts_serial|   1|    100000|     100|0.78560176|  PASSED  
          sts_serial|   2|    100000|     100|0.88528846|  PASSED  
          sts_serial|   3|    100000|     100|0.55969584|  PASSED  
          sts_serial|   3|    100000|     100|0.92645009|  PASSED  
          sts_serial|   4|    100000|     100|0.86991762|  PASSED  
          sts_serial|   4|    100000|     100|0.81469756|  PASSED  
          sts_serial|   5|    100000|     100|0.28954249|  PASSED  
          sts_serial|   5|    100000|     100|0.33473204|  PASSED  
          sts_serial|   6|    100000|     100|0.58912478|  PASSED  
          sts_serial|   6|    100000|     100|0.92532021|  PASSED  
          sts_serial|   7|    100000|     100|0.21881898|  PASSED  
          sts_serial|   7|    100000|     100|0.56556967|  PASSED  
          sts_serial|   8|    100000|     100|0.86274071|  PASSED  
          sts_serial|   8|    100000|     100|0.95503656|  PASSED  
          sts_serial|   9|    100000|     100|0.59553745|  PASSED  
          sts_serial|   9|    100000|     100|0.17876107|  PASSED  
          sts_serial|  10|    100000|     100|0.16606348|  PASSED  
          sts_serial|  10|    100000|     100|0.46053828|  PASSED  
          sts_serial|  11|    100000|     100|0.13217702|  PASSED  
          sts_serial|  11|    100000|     100|0.77641047|  PASSED  
          sts_serial|  12|    100000|     100|0.91050478|  PASSED  
          sts_serial|  12|    100000|     100|0.33263721|  PASSED  
          sts_serial|  13|    100000|     100|0.14654871|  PASSED  
          sts_serial|  13|    100000|     100|0.06695634|  PASSED  
          sts_serial|  14|    100000|     100|0.83667985|  PASSED  
          sts_serial|  14|    100000|     100|0.10835990|  PASSED  
          sts_serial|  15|    100000|     100|0.88636173|  PASSED  
          sts_serial|  15|    100000|     100|0.93344905|  PASSED  
          sts_serial|  16|    100000|     100|0.90409326|  PASSED  
          sts_serial|  16|    100000|     100|0.69900112|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.98857433|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.04592851|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.10404583|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.32214017|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.87716034|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.81309722|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.24415639|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.31710503|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.98890284|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.67492648|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.97186493|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.26897979|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.99738211|   WEAK   
rgb_minimum_distance|   3|     10000|    1000|0.41008131|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.69829879|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.17789707|  PASSED  
    rgb_permutations|   2|    100000|     100|0.29575663|  PASSED  
    rgb_permutations|   3|    100000|     100|0.82384067|  PASSED  
    rgb_permutations|   4|    100000|     100|0.65216609|  PASSED  
    rgb_permutations|   5|    100000|     100|0.69203762|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.50714837|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.88735145|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.94003225|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.69940056|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.98722549|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.58834340|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.58273666|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.13077930|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.61901162|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.02425835|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.72715581|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.16844748|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.35333579|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.62675245|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.72230289|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.04224939|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.82049314|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.25069573|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.88365176|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.65828866|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.99978843|   WEAK   
      rgb_lagged_sum|  21|   1000000|     100|0.84125944|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.87904207|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.72294232|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.90826413|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.13029670|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.63283548|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.00372010|   WEAK   
      rgb_lagged_sum|  28|   1000000|     100|0.92562816|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.64845774|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.82709411|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.98965049|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.00711338|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.79939662|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.85805115|  PASSED  
             dab_dct| 256|     50000|       1|0.08410151|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.48402266|  PASSED  
        dab_filltree|  32|  15000000|       1|0.41916136|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.36632626|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.51745505|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.55898176|  PASSED  

real	36m43.355s
user	38m23.033s
sys	4m0.182s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xbd785378
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xbd785378
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.6  p =1-2.7e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xbd785378
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xbd785378
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -5.3  p =1-9.9e-5   mildly suspicious
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xbd785378
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xbd785378
length= 2 gigabytes (2^31 bytes), time= 41.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xbd785378
length= 4 gigabytes (2^32 bytes), time= 80.8 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xbd785378
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 207 test result(s)


real	1m41.462s
user	1m40.639s
sys	0m3.441s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa81b78ad
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa81b78ad
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xa81b78ad
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xa81b78ad
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa81b78ad
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xa81b78ad
length= 2 gigabytes (2^31 bytes), time= 42.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xa81b78ad
length= 4 gigabytes (2^32 bytes), time= 80.9 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xa81b78ad
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 207 test result(s)


real	1m41.497s
user	1m40.668s
sys	0m3.435s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa2093439
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa2093439
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -5.0  p =1-1.9e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xa2093439
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xa2093439
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa2093439
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xa2093439
length= 2 gigabytes (2^31 bytes), time= 42.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xa2093439
length= 4 gigabytes (2^32 bytes), time= 81.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +5.2  p =  9.6e-5   mildly suspicious
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0xa2093439
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +4.5  p =  3.8e-4   unusual          
  ...and 206 test result(s) without anomalies


real	1m42.186s
user	1m41.676s
sys	0m3.108s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x401be4ab
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x401be4ab
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:B                  R=  -4.8  p =1-4.2e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x401be4ab
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x401be4ab
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x401be4ab
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x401be4ab
length= 2 gigabytes (2^31 bytes), time= 42.1 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x401be4ab
length= 4 gigabytes (2^32 bytes), time= 80.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.8  p =  3.0e-5   mildly suspicious
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x401be4ab
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x401be4ab
length= 16 gigabytes (2^34 bytes), time= 316 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x401be4ab
length= 32 gigabytes (2^35 bytes), time= 621 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x401be4ab
length= 64 gigabytes (2^36 bytes), time= 1244 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x401be4ab
length= 128 gigabytes (2^37 bytes), time= 2482 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x401be4ab
length= 187.000 gigabytes (2^37.547 bytes), time= 3602 seconds
  no anomalies in 263 test result(s)


real	60m2.242s
user	59m38.815s
sys	2m0.014s
*/
/* TEST00
time ./MRndCPP 10 
1220954891
1906405657
4025907378
1480416779
3910681319
1864078567
3311039578
2412509864
3575263857
1987687355
6823153464398581791

real	0m2.448s
user	0m2.444s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.21e+07  | 925448324|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.37799496|  PASSED  

real	0m24.923s
user	0m24.260s
sys	0m0.640s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xaf3b211b
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xaf3b211b
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xaf3b211b
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xaf3b211b
length= 512 megabytes (2^29 bytes), time= 12.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+5,13-5,T)         R= +11.9  p =  7.9e-5   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xaf3b211b
length= 1 gigabyte (2^30 bytes), time= 23.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xaf3b211b
length= 2 gigabytes (2^31 bytes), time= 45.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xaf3b211b
length= 4 gigabytes (2^32 bytes), time= 87.5 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xaf3b211b
length= 8 gigabytes (2^33 bytes), time= 180 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xaf3b211b
length= 16 gigabytes (2^34 bytes), time= 365 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xaf3b211b
length= 32 gigabytes (2^35 bytes), time= 726 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xaf3b211b
length= 43.500 gigabytes (2^35.443 bytes), time= 1000 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.6  p =1-3.5e-3   unusual          
  ...and 241 test result(s) without anomalies


real	16m41.422s
user	16m22.376s
sys	0m18.116s
*/
/* TEST00
time ./MRndCPP 12 
230941413
837161215
2957623384
2717235599
949539868
1309911738
3869449246
3208593199
3259253705
810184990
15234144397831866590

real	0m10.172s
user	0m10.156s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 12 
2413933360
494847510
2965254629
254124301
1847324792
3243494436
2774373730
1400241783
2791290344
1233162629
4280828353963719313

real	0m9.910s
user	0m9.892s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.01e+07  |3339434085|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.29974253|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.95056670|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.92017455|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.01216912|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.96697388|  PASSED  
        diehard_opso|   0|   2097152|     100|0.99960423|   WEAK   
        diehard_oqso|   0|   2097152|     100|0.75643141|  PASSED  
         diehard_dna|   0|   2097152|     100|0.60170484|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.64096881|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.38638565|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.20513585|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.17691679|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.54359420|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.90360887|  PASSED  
        diehard_sums|   0|       100|     100|0.00030123|   WEAK   
        diehard_runs|   0|    100000|     100|0.22420208|  PASSED  
        diehard_runs|   0|    100000|     100|0.56736999|  PASSED  
       diehard_craps|   0|    200000|     100|0.05721228|  PASSED  
       diehard_craps|   0|    200000|     100|0.21783451|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.48502754|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.02574729|  PASSED  
         sts_monobit|   1|    100000|     100|0.24274182|  PASSED  
            sts_runs|   2|    100000|     100|0.03630213|  PASSED  
          sts_serial|   1|    100000|     100|0.43649566|  PASSED  
          sts_serial|   2|    100000|     100|0.52278138|  PASSED  
          sts_serial|   3|    100000|     100|0.72144874|  PASSED  
          sts_serial|   3|    100000|     100|0.79270220|  PASSED  
          sts_serial|   4|    100000|     100|0.03489413|  PASSED  
          sts_serial|   4|    100000|     100|0.38853550|  PASSED  
          sts_serial|   5|    100000|     100|0.12156911|  PASSED  
          sts_serial|   5|    100000|     100|0.65869233|  PASSED  
          sts_serial|   6|    100000|     100|0.29345005|  PASSED  
          sts_serial|   6|    100000|     100|0.76294226|  PASSED  
          sts_serial|   7|    100000|     100|0.31090251|  PASSED  
          sts_serial|   7|    100000|     100|0.28156993|  PASSED  
          sts_serial|   8|    100000|     100|0.90663929|  PASSED  
          sts_serial|   8|    100000|     100|0.45462799|  PASSED  
          sts_serial|   9|    100000|     100|0.89619283|  PASSED  
          sts_serial|   9|    100000|     100|0.84409331|  PASSED  
          sts_serial|  10|    100000|     100|0.82050088|  PASSED  
          sts_serial|  10|    100000|     100|0.09281153|  PASSED  
          sts_serial|  11|    100000|     100|0.12900149|  PASSED  
          sts_serial|  11|    100000|     100|0.23569917|  PASSED  
          sts_serial|  12|    100000|     100|0.25656560|  PASSED  
          sts_serial|  12|    100000|     100|0.97952750|  PASSED  
          sts_serial|  13|    100000|     100|0.56384924|  PASSED  
          sts_serial|  13|    100000|     100|0.97875778|  PASSED  
          sts_serial|  14|    100000|     100|0.49959335|  PASSED  
          sts_serial|  14|    100000|     100|0.59495481|  PASSED  
          sts_serial|  15|    100000|     100|0.25157407|  PASSED  
          sts_serial|  15|    100000|     100|0.88685765|  PASSED  
          sts_serial|  16|    100000|     100|0.22800205|  PASSED  
          sts_serial|  16|    100000|     100|0.09398198|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.82006120|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.20442858|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.76118035|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.07732268|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.23934328|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.66681709|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.83778848|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.60678071|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.54238727|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.26240713|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.14778097|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.26443593|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.91707936|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.02371758|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.76143476|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.45630652|  PASSED  
    rgb_permutations|   2|    100000|     100|0.89572578|  PASSED  
    rgb_permutations|   3|    100000|     100|0.84173679|  PASSED  
    rgb_permutations|   4|    100000|     100|0.72593659|  PASSED  
    rgb_permutations|   5|    100000|     100|0.92682488|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.47510672|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.15875512|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.58230451|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.49589292|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.60665053|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.85754993|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.72499192|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.90515499|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.92069746|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.66532979|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.94338257|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.91657959|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.86258398|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.31998799|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.63516664|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.71294324|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.40105563|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.14512485|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.89198819|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.78554278|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.09124877|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.64766841|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.19999681|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.07617853|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.98136427|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.55271383|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.81828860|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.88173962|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.34172273|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.00901531|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.77817129|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.20299186|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.68071904|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.03469231|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.72987667|  PASSED  
             dab_dct| 256|     50000|       1|0.80376660|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.98537072|  PASSED  
        dab_filltree|  32|  15000000|       1|0.87259583|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.56532779|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.00381589|   WEAK   
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.72675943|  PASSED  

real	67m48.160s
user	59m39.484s
sys	8m4.948s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x20f530e0
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x20f530e0
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x20f530e0
length= 128 megabytes (2^27 bytes), time= 6.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+1,13-5,T)          R=  -6.7  p =1-3.0e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x20f530e0
length= 256 megabytes (2^28 bytes), time= 12.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x20f530e0
length= 512 megabytes (2^29 bytes), time= 20.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x20f530e0
length= 1 gigabyte (2^30 bytes), time= 36.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x20f530e0
length= 2 gigabytes (2^31 bytes), time= 67.1 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x20f530e0
length= 4 gigabytes (2^32 bytes), time= 124 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x20f530e0
length= 8 gigabytes (2^33 bytes), time= 246 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x20f530e0
length= 16 gigabytes (2^34 bytes), time= 482 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x20f530e0
length= 32 gigabytes (2^35 bytes), time= 956 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x20f530e0
length= 64 gigabytes (2^36 bytes), time= 1904 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x20f530e0
length= 121.750 gigabytes (2^36.928 bytes), time= 3600 seconds
  no anomalies in 258 test result(s)


real	60m1.914s
user	58m37.166s
sys	1m19.555s
*/
/* TEST00
time ./MRndCPP 12 
2413933360
494847510
2965254629
254124301
1847324792
3243494436
2774373730
1400241783
2791290344
1233162629
4280828353963719313

real	0m10.081s
user	0m10.075s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.62e+07  | 156845774|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.02269091|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.26159851|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.82300078|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.33734761|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.54369141|  PASSED  
        diehard_opso|   0|   2097152|     100|0.45919624|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.01311364|  PASSED  
         diehard_dna|   0|   2097152|     100|0.11005574|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.11305219|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.60957837|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.13734140|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.67526101|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.14517746|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.17550435|  PASSED  
        diehard_sums|   0|       100|     100|0.11363799|  PASSED  
        diehard_runs|   0|    100000|     100|0.41996610|  PASSED  
        diehard_runs|   0|    100000|     100|0.41295368|  PASSED  
       diehard_craps|   0|    200000|     100|0.93254780|  PASSED  
       diehard_craps|   0|    200000|     100|0.77722688|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.92180106|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.97756388|  PASSED  
         sts_monobit|   1|    100000|     100|0.75359681|  PASSED  
            sts_runs|   2|    100000|     100|0.80292792|  PASSED  
          sts_serial|   1|    100000|     100|0.63153362|  PASSED  
          sts_serial|   2|    100000|     100|0.53465933|  PASSED  
          sts_serial|   3|    100000|     100|0.87170746|  PASSED  
          sts_serial|   3|    100000|     100|0.78868603|  PASSED  
          sts_serial|   4|    100000|     100|0.84366012|  PASSED  
          sts_serial|   4|    100000|     100|0.99498213|  PASSED  
          sts_serial|   5|    100000|     100|0.95567843|  PASSED  
          sts_serial|   5|    100000|     100|0.98468879|  PASSED  
          sts_serial|   6|    100000|     100|0.99998733|   WEAK   
          sts_serial|   6|    100000|     100|0.89439545|  PASSED  
          sts_serial|   7|    100000|     100|0.90042238|  PASSED  
          sts_serial|   7|    100000|     100|0.61971449|  PASSED  
          sts_serial|   8|    100000|     100|0.67580785|  PASSED  
          sts_serial|   8|    100000|     100|0.99030497|  PASSED  
          sts_serial|   9|    100000|     100|0.49630991|  PASSED  
          sts_serial|   9|    100000|     100|0.17968388|  PASSED  
          sts_serial|  10|    100000|     100|0.31963079|  PASSED  
          sts_serial|  10|    100000|     100|0.82873642|  PASSED  
          sts_serial|  11|    100000|     100|0.44877166|  PASSED  
          sts_serial|  11|    100000|     100|0.75176513|  PASSED  
          sts_serial|  12|    100000|     100|0.90027231|  PASSED  
          sts_serial|  12|    100000|     100|0.92646517|  PASSED  
          sts_serial|  13|    100000|     100|0.92258155|  PASSED  
          sts_serial|  13|    100000|     100|0.48924186|  PASSED  
          sts_serial|  14|    100000|     100|0.40534391|  PASSED  
          sts_serial|  14|    100000|     100|0.13361019|  PASSED  
          sts_serial|  15|    100000|     100|0.60240424|  PASSED  
          sts_serial|  15|    100000|     100|0.77011071|  PASSED  
          sts_serial|  16|    100000|     100|0.37825076|  PASSED  
          sts_serial|  16|    100000|     100|0.06915259|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.67914305|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.43370954|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.49344903|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.98670534|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.93970423|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.42569643|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.00739814|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.07833746|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.94610492|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.29978009|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.99996081|   WEAK   
         rgb_bitdist|  12|    100000|     100|0.24124730|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.41235765|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.99241292|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.55090450|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.41968842|  PASSED  
    rgb_permutations|   2|    100000|     100|0.01710118|  PASSED  
    rgb_permutations|   3|    100000|     100|0.73363768|  PASSED  
    rgb_permutations|   4|    100000|     100|0.71935068|  PASSED  
    rgb_permutations|   5|    100000|     100|0.60080245|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.20108406|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.98330651|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.63390984|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.50839796|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.10787491|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.88989645|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.35658345|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.66849280|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.10213515|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.05594336|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.75686487|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.91640169|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.13758309|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.22969365|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.30468707|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.63494299|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.00979534|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.71045485|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.21874243|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.83498503|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.79009066|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.59097871|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.60105705|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.23465561|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.00435307|   WEAK   
      rgb_lagged_sum|  25|   1000000|     100|0.61614588|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.27020200|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.16330696|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.41574639|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.47915708|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.99599264|   WEAK   
      rgb_lagged_sum|  31|   1000000|     100|0.30606629|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.08292966|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.62151390|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.87760543|  PASSED  
             dab_dct| 256|     50000|       1|0.59394670|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.33547330|  PASSED  
        dab_filltree|  32|  15000000|       1|0.49661671|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.74867482|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.36339560|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.42990531|  PASSED  

real	65m35.806s
user	57m37.992s
sys	7m55.157s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x9d5ab2b2
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 64 megabytes (2^26 bytes), time= 2.1 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 128 megabytes (2^27 bytes), time= 5.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 256 megabytes (2^28 bytes), time= 10.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 512 megabytes (2^29 bytes), time= 18.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 1 gigabyte (2^30 bytes), time= 34.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 2 gigabytes (2^31 bytes), time= 61.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 4 gigabytes (2^32 bytes), time= 121 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 8 gigabytes (2^33 bytes), time= 234 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 16 gigabytes (2^34 bytes), time= 455 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 32 gigabytes (2^35 bytes), time= 889 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 64 gigabytes (2^36 bytes), time= 1788 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+14,13-6,T)        R= +17.3  p =  2.2e-6   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0x9d5ab2b2
length= 128 gigabytes (2^37 bytes), time= 3571 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 256 gigabytes (2^38 bytes), time= 7151 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 512 gigabytes (2^39 bytes), time= 15574 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 1 terabyte (2^40 bytes), time= 32918 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 2 terabytes (2^41 bytes), time= 63572 seconds
  no anomalies in 299 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 4 terabytes (2^42 bytes), time= 128406 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 8 terabytes (2^43 bytes), time= 250472 seconds
  no anomalies in 322 test result(s)

rng=RNG_stdin, seed=0x9d5ab2b2
length= 11.193 terabytes (2^43.484 bytes), time= 345605 seconds
  no anomalies in 327 test result(s)


real	5760m7.195s
user	5634m24.473s
sys	120m50.971s
*/
