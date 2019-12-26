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
/// @created on 2019-12-18 01:26:42 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 4b74100b-635b-4c21-b986-a7fc6cccd551                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib16;
/* TEST00
time ./MRndCPP 
3150517068
2361631319
2531246124
2685043701
2844323942
3613644329
4611804855642479506

real	0m7.845s
user	0m7.796s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  |2599221988|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.98249691|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.87003178|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.66312809|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.84949102|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.96516391|  PASSED  
        diehard_opso|   0|   2097152|     100|0.33298505|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.04587719|  PASSED  
         diehard_dna|   0|   2097152|     100|0.08567103|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.53142404|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.60759704|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.20045759|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.07655593|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.44188802|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.21851084|  PASSED  
        diehard_sums|   0|       100|     100|0.03689224|  PASSED  
        diehard_runs|   0|    100000|     100|0.84679999|  PASSED  
        diehard_runs|   0|    100000|     100|0.23848223|  PASSED  
       diehard_craps|   0|    200000|     100|0.90895367|  PASSED  
       diehard_craps|   0|    200000|     100|0.16997684|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.35950335|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.79138058|  PASSED  
         sts_monobit|   1|    100000|     100|0.00580225|  PASSED  
            sts_runs|   2|    100000|     100|0.35952784|  PASSED  
          sts_serial|   1|    100000|     100|0.83875151|  PASSED  
          sts_serial|   2|    100000|     100|0.96079992|  PASSED  
          sts_serial|   3|    100000|     100|0.65785050|  PASSED  
          sts_serial|   3|    100000|     100|0.19829277|  PASSED  
          sts_serial|   4|    100000|     100|0.85839781|  PASSED  
          sts_serial|   4|    100000|     100|0.85778901|  PASSED  
          sts_serial|   5|    100000|     100|0.76233867|  PASSED  
          sts_serial|   5|    100000|     100|0.33065597|  PASSED  
          sts_serial|   6|    100000|     100|0.76839590|  PASSED  
          sts_serial|   6|    100000|     100|0.35331518|  PASSED  
          sts_serial|   7|    100000|     100|0.16694195|  PASSED  
          sts_serial|   7|    100000|     100|0.09158221|  PASSED  
          sts_serial|   8|    100000|     100|0.41086242|  PASSED  
          sts_serial|   8|    100000|     100|0.93871673|  PASSED  
          sts_serial|   9|    100000|     100|0.03434882|  PASSED  
          sts_serial|   9|    100000|     100|0.23636817|  PASSED  
          sts_serial|  10|    100000|     100|0.13205184|  PASSED  
          sts_serial|  10|    100000|     100|0.99142850|  PASSED  
          sts_serial|  11|    100000|     100|0.47736562|  PASSED  
          sts_serial|  11|    100000|     100|0.85766378|  PASSED  
          sts_serial|  12|    100000|     100|0.02980888|  PASSED  
          sts_serial|  12|    100000|     100|0.01614305|  PASSED  
          sts_serial|  13|    100000|     100|0.00343348|   WEAK   
          sts_serial|  13|    100000|     100|0.92217916|  PASSED  
          sts_serial|  14|    100000|     100|0.39195373|  PASSED  
          sts_serial|  14|    100000|     100|0.58605503|  PASSED  
          sts_serial|  15|    100000|     100|0.67953625|  PASSED  
          sts_serial|  15|    100000|     100|0.87865256|  PASSED  
          sts_serial|  16|    100000|     100|0.12181147|  PASSED  
          sts_serial|  16|    100000|     100|0.77423578|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.16897584|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.63029905|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.47824236|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.55693283|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.34014745|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.92172348|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.88990483|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.41079932|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.53480906|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.34139532|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.72090344|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.48430951|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.45408465|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.74786489|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.88575560|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.85105936|  PASSED  
    rgb_permutations|   2|    100000|     100|0.95755327|  PASSED  
    rgb_permutations|   3|    100000|     100|0.67748529|  PASSED  
    rgb_permutations|   4|    100000|     100|0.33457989|  PASSED  
    rgb_permutations|   5|    100000|     100|0.94971647|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.91961041|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.85395125|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.60428839|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.45504289|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.70761679|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.65329112|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.38196612|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.83603150|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.71024767|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.47166341|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.21970615|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.98626970|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.09518038|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.47360488|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.69656690|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.42336380|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.33202905|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.46459910|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.98894059|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.26556542|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.66945462|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.50024048|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.13118159|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.79229131|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.14674164|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.61370826|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.97562922|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.36766427|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.57768342|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.15830449|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.04515227|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.04285415|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.78257492|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.65081974|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.35394099|  PASSED  
             dab_dct| 256|     50000|       1|0.74939723|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.15514298|  PASSED  
        dab_filltree|  32|  15000000|       1|0.32052386|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.82103901|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.88046485|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.47477983|  PASSED  

real	52m5.167s
user	48m27.160s
sys	3m31.256s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf3e8198
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf3e8198
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-5,T)         R= +10.4  p =  2.9e-4   unusual          
  [Low8/32]BCFN(2+3,13-5,T)         R=  +9.3  p =  7.7e-4   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf3e8198
length= 256 megabytes (2^28 bytes), time= 6.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +22.3  p =  1.0e-9    VERY SUSPICIOUS 
  [Low8/32]BCFN(2+3,13-4,T)         R= +10.4  p =  1.6e-4   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf3e8198
length= 512 megabytes (2^29 bytes), time= 11.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +33.7  p =  1.0e-15    FAIL !         
  [Low8/32]BCFN(2+3,13-3,T)         R=  +9.4  p =  2.9e-4   unusual          
  ...and 130 test result(s) without anomalies


real	0m12.555s
user	0m12.204s
sys	0m0.344s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb4d1671f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb4d1671f
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.4  p =  8.9e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -4.2  p =1-6.1e-3   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb4d1671f
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +11.6  p =  5.2e-5   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb4d1671f
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +33.4  p =  1.2e-15    FAIL !         
  [Low1/32]Gap-16:A                 R=  -3.8  p =1-1.1e-3   unusual          
  ...and 130 test result(s) without anomalies


real	0m11.672s
user	0m11.388s
sys	0m0.248s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x39345fd1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x39345fd1
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x39345fd1
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +21.8  p =  1.7e-9    VERY SUSPICIOUS 
  [Low1/32]DC6-9x1Bytes-1           R=  +5.7  p =  6.4e-3   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x39345fd1
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +39.4  p =  1.9e-18    FAIL !         
  [Low8/32]BCFN(2+3,13-3,T)         R= +10.5  p =  9.3e-5   unusual          
  ...and 130 test result(s) without anomalies


real	0m10.738s
user	0m10.448s
sys	0m0.268s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa349963b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa349963b
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-5,T)         R=  +9.6  p =  6.3e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa349963b
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +15.9  p =  6.6e-7   very suspicious  
  [Low8/32]BCFN(2+7,13-6,T)         R= +12.3  p =  1.2e-4   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa349963b
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +29.7  p =  7.3e-14    FAIL           
  [Low8/32]BCFN(2+3,13-3,T)         R= +11.7  p =  2.3e-5   mildly suspicious
  [Low1/32]DC6-9x1Bytes-1           R=  -4.8  p =1-2.1e-3   unusual          
  ...and 129 test result(s) without anomalies


real	0m10.666s
user	0m10.392s
sys	0m0.220s
*/
