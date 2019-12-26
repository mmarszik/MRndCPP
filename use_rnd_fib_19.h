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
1041772795
2689990369
1103677332
3187322732
355424147
3458351543
4611703016508791478

real	0m7.793s
user	0m7.788s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.12e+07  |3410513287|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.22974870|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.59868203|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.59679820|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.05593935|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.88573940|  PASSED  
        diehard_opso|   0|   2097152|     100|0.74253574|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.94678611|  PASSED  
         diehard_dna|   0|   2097152|     100|0.81738655|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.48047007|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.89209715|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.69592283|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.55604748|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.09674337|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.53586124|  PASSED  
        diehard_sums|   0|       100|     100|0.00843736|  PASSED  
        diehard_runs|   0|    100000|     100|0.90076300|  PASSED  
        diehard_runs|   0|    100000|     100|0.87826099|  PASSED  
       diehard_craps|   0|    200000|     100|0.44604899|  PASSED  
       diehard_craps|   0|    200000|     100|0.90133973|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.91622035|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.59288415|  PASSED  
         sts_monobit|   1|    100000|     100|0.88170349|  PASSED  
            sts_runs|   2|    100000|     100|0.76434675|  PASSED  
          sts_serial|   1|    100000|     100|0.54260155|  PASSED  
          sts_serial|   2|    100000|     100|0.73311273|  PASSED  
          sts_serial|   3|    100000|     100|0.87906825|  PASSED  
          sts_serial|   3|    100000|     100|0.70793101|  PASSED  
          sts_serial|   4|    100000|     100|0.71183858|  PASSED  
          sts_serial|   4|    100000|     100|0.72144069|  PASSED  
          sts_serial|   5|    100000|     100|0.90682578|  PASSED  
          sts_serial|   5|    100000|     100|0.80925744|  PASSED  
          sts_serial|   6|    100000|     100|0.60230990|  PASSED  
          sts_serial|   6|    100000|     100|0.32597879|  PASSED  
          sts_serial|   7|    100000|     100|0.99952577|   WEAK   
          sts_serial|   7|    100000|     100|0.85537578|  PASSED  
          sts_serial|   8|    100000|     100|0.68246422|  PASSED  
          sts_serial|   8|    100000|     100|0.93862840|  PASSED  
          sts_serial|   9|    100000|     100|0.41276001|  PASSED  
          sts_serial|   9|    100000|     100|0.03586482|  PASSED  
          sts_serial|  10|    100000|     100|0.95023249|  PASSED  
          sts_serial|  10|    100000|     100|0.68411183|  PASSED  
          sts_serial|  11|    100000|     100|0.74235561|  PASSED  
          sts_serial|  11|    100000|     100|0.99599133|   WEAK   
          sts_serial|  12|    100000|     100|0.12075848|  PASSED  
          sts_serial|  12|    100000|     100|0.00958054|  PASSED  
          sts_serial|  13|    100000|     100|0.06147288|  PASSED  
          sts_serial|  13|    100000|     100|0.35106020|  PASSED  
          sts_serial|  14|    100000|     100|0.48947044|  PASSED  
          sts_serial|  14|    100000|     100|0.23313173|  PASSED  
          sts_serial|  15|    100000|     100|0.82150744|  PASSED  
          sts_serial|  15|    100000|     100|0.51277490|  PASSED  
          sts_serial|  16|    100000|     100|0.94604663|  PASSED  
          sts_serial|  16|    100000|     100|0.99380916|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.51799636|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.89687557|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.73042888|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.20902950|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.80035784|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.19448999|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.76128310|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.54477256|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.85780147|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.21337502|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.68215728|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.13965657|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.04845746|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.89631344|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.43790932|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.02698989|  PASSED  
    rgb_permutations|   2|    100000|     100|0.52172330|  PASSED  
    rgb_permutations|   3|    100000|     100|0.26307346|  PASSED  
    rgb_permutations|   4|    100000|     100|0.10191849|  PASSED  
    rgb_permutations|   5|    100000|     100|0.14265715|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.90526495|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.99201764|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.53631711|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.38016588|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.36667948|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.64011587|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.69020711|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.99934179|   WEAK   
      rgb_lagged_sum|   8|   1000000|     100|0.81396604|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.91933129|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.95132180|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.74441151|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.75191425|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.19374232|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.67923578|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.96066256|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.69944262|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.98550339|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.74809940|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.28100945|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.65148137|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.08038654|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.21342466|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.61194259|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.07780894|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.56744344|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.56728983|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.99987531|   WEAK   
      rgb_lagged_sum|  28|   1000000|     100|0.68498181|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.93740184|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.43191492|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.95752018|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.59451541|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.93603316|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.74266335|  PASSED  
             dab_dct| 256|     50000|       1|0.03870285|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.12333859|  PASSED  
        dab_filltree|  32|  15000000|       1|0.84601542|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.06511200|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.51817409|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.51840521|  PASSED  

real	48m46.669s
user	45m11.428s
sys	3m27.560s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x599b9383
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x599b9383
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-4,T)         R= +10.6  p =  1.3e-4   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x599b9383
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x599b9383
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +13.6  p =  1.7e-5   suspicious       
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x599b9383
length= 1 gigabyte (2^30 bytes), time= 20.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +29.6  p =  6.8e-13    FAIL           
  ...and 140 test result(s) without anomalies


real	0m21.467s
user	0m20.888s
sys	0m0.516s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x29146803
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x29146803
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x29146803
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x29146803
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +10.1  p =  3.7e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x29146803
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +16.9  p =  2.5e-7   very suspicious  
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x29146803
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-2,T)         R=  +7.5  p =  2.0e-3   unusual          
  [Low1/32]BCFN(2+0,13-3,T)         R= +33.6  p =  1.1e-15    FAIL !         
  [Low1/32]BCFN(2+2,13-4,T)         R=  +8.0  p =  1.9e-3   unusual          
  ...and 145 test result(s) without anomalies


real	0m38.183s
user	0m37.112s
sys	0m0.896s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xaf81bd81
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xaf81bd81
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xaf81bd81
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xaf81bd81
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +9.9  p =  4.6e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xaf81bd81
length= 1 gigabyte (2^30 bytes), time= 19.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +22.0  p =  1.4e-9    VERY SUSPICIOUS 
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xaf81bd81
length= 2 gigabytes (2^31 bytes), time= 38.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+4,13-3,T)         R= +12.5  p =  1.0e-5   mildly suspicious
  [Low1/32]BCFN(2+0,13-3,T)         R= +35.7  p =  1.1e-16    FAIL !         
  ...and 146 test result(s) without anomalies


real	0m38.853s
user	0m37.732s
sys	0m0.976s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x753b4787
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x753b4787
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x753b4787
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +13.7  p =  1.5e-5   suspicious       
  [Low1/32]DC6-9x1Bytes-1           R=  -3.8  p =1-9.4e-3   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x753b4787
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.5  p =1-3.1e-3   unusual          
  [Low1/32]BCFN(2+0,13-5,T)         R= +19.6  p =  7.6e-8   very suspicious  
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x753b4787
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +24.2  p =  1.6e-10   VERY SUSPICIOUS 
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x753b4787
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +38.7  p =  4.1e-18    FAIL !         
  ...and 147 test result(s) without anomalies


real	0m38.130s
user	0m37.196s
sys	0m0.888s
*/
