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
/// @created on 2019-12-08 02:59:39 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 729bd7da-da79-4064-8171-841d0860907d                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2;
/* TEST00
time ./MRndCPP 
3497841202
67965748
527131255
182892387
247477018
3100051826
4611529154070239422

real	0m14.075s
user	0m14.048s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.89e+07  |1159161417|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.39514930|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.29098967|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.70699983|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.44739453|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.82112041|  PASSED  
        diehard_opso|   0|   2097152|     100|0.50592718|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.80519421|  PASSED  
         diehard_dna|   0|   2097152|     100|0.58959488|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.99923524|   WEAK   
diehard_count_1s_byt|   0|    256000|     100|0.91415137|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.08126248|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.83338778|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.96283464|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.63519970|  PASSED  
        diehard_sums|   0|       100|     100|0.12555135|  PASSED  
        diehard_runs|   0|    100000|     100|0.02865292|  PASSED  
        diehard_runs|   0|    100000|     100|0.40071668|  PASSED  
       diehard_craps|   0|    200000|     100|0.40056823|  PASSED  
       diehard_craps|   0|    200000|     100|0.05147431|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.61183085|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.72720315|  PASSED  
         sts_monobit|   1|    100000|     100|0.97369904|  PASSED  
            sts_runs|   2|    100000|     100|0.29732658|  PASSED  
          sts_serial|   1|    100000|     100|0.86163330|  PASSED  
          sts_serial|   2|    100000|     100|0.14478606|  PASSED  
          sts_serial|   3|    100000|     100|0.70749470|  PASSED  
          sts_serial|   3|    100000|     100|0.86930722|  PASSED  
          sts_serial|   4|    100000|     100|0.45592053|  PASSED  
          sts_serial|   4|    100000|     100|0.12653768|  PASSED  
          sts_serial|   5|    100000|     100|0.71799953|  PASSED  
          sts_serial|   5|    100000|     100|0.94954319|  PASSED  
          sts_serial|   6|    100000|     100|0.54675710|  PASSED  
          sts_serial|   6|    100000|     100|0.28270220|  PASSED  
          sts_serial|   7|    100000|     100|0.96613254|  PASSED  
          sts_serial|   7|    100000|     100|0.98193000|  PASSED  
          sts_serial|   8|    100000|     100|0.82410586|  PASSED  
          sts_serial|   8|    100000|     100|0.72659653|  PASSED  
          sts_serial|   9|    100000|     100|0.90709207|  PASSED  
          sts_serial|   9|    100000|     100|0.48117420|  PASSED  
          sts_serial|  10|    100000|     100|0.99082254|  PASSED  
          sts_serial|  10|    100000|     100|0.90940679|  PASSED  
          sts_serial|  11|    100000|     100|0.49413924|  PASSED  
          sts_serial|  11|    100000|     100|0.81010700|  PASSED  
          sts_serial|  12|    100000|     100|0.42770334|  PASSED  
          sts_serial|  12|    100000|     100|0.85142668|  PASSED  
          sts_serial|  13|    100000|     100|0.71152347|  PASSED  
          sts_serial|  13|    100000|     100|0.93222399|  PASSED  
          sts_serial|  14|    100000|     100|0.48309092|  PASSED  
          sts_serial|  14|    100000|     100|0.78357456|  PASSED  
          sts_serial|  15|    100000|     100|0.13508894|  PASSED  
          sts_serial|  15|    100000|     100|0.45000254|  PASSED  
          sts_serial|  16|    100000|     100|0.33020528|  PASSED  
          sts_serial|  16|    100000|     100|0.56799806|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.33634519|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.82189243|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.44671813|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.69391780|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.11305257|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.29683620|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.33682403|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.16148597|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.03892052|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.43601518|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.99276669|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.70601679|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.51718431|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.65909515|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.19196911|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.86704689|  PASSED  
    rgb_permutations|   2|    100000|     100|0.78607850|  PASSED  
    rgb_permutations|   3|    100000|     100|0.55662685|  PASSED  
    rgb_permutations|   4|    100000|     100|0.55285233|  PASSED  
    rgb_permutations|   5|    100000|     100|0.74114675|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.76290718|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.08625140|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.14689098|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.64017134|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.75914862|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.58012348|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.85544363|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.58496305|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.87827805|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.79095648|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.87258960|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.33223103|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.56390544|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.65427201|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.67692149|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.08389313|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.97452003|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.74836096|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.04695899|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.86274611|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.99474424|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.04230870|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.05257622|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.99810814|   WEAK   
      rgb_lagged_sum|  24|   1000000|     100|0.42497756|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.29685212|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.59715754|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.32134226|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.95687487|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.37044804|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.98616972|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.97135699|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.00886928|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.47096913|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.38916805|  PASSED  
             dab_dct| 256|     50000|       1|0.95197242|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.67734273|  PASSED  
        dab_filltree|  32|  15000000|       1|0.53454004|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.35722140|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.89186978|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.60136100|  PASSED  

real	51m48.244s
user	48m19.216s
sys	3m22.220s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3a35039b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3a35039b
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3a35039b
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  -2.1  p =1-1.0e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3a35039b
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+9,13-7,T)         R=  -5.9  p =1-4.7e-5   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3a35039b
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x3a35039b
length= 2 gigabytes (2^31 bytes), time= 39.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x3a35039b
length= 4 gigabytes (2^32 bytes), time= 76.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x3a35039b
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.340s
user	1m38.860s
sys	0m3.156s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdf1868dd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdf1868dd
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xdf1868dd
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xdf1868dd
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xdf1868dd
length= 1 gigabyte (2^30 bytes), time= 20.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xdf1868dd
length= 2 gigabytes (2^31 bytes), time= 39.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xdf1868dd
length= 4 gigabytes (2^32 bytes), time= 78.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xdf1868dd
length= 5.250 gigabytes (2^32.392 bytes), time= 106 seconds
  no anomalies in 160 test result(s)


real	1m46.552s
user	1m43.244s
sys	0m3.116s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9b8374b4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9b8374b4
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9b8374b4
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9b8374b4
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x9b8374b4
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9b8374b4
length= 2 gigabytes (2^31 bytes), time= 39.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.4  p =  1.0e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9b8374b4
length= 4 gigabytes (2^32 bytes), time= 76.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x9b8374b4
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.376s
user	1m38.996s
sys	0m3.208s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf9eecaf2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf9eecaf2
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf9eecaf2
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf9eecaf2
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf9eecaf2
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf9eecaf2
length= 2 gigabytes (2^31 bytes), time= 40.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R=  -7.1  p =1-1.2e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf9eecaf2
length= 4 gigabytes (2^32 bytes), time= 78.3 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.2  p =1-1.5e-3   unusual          
  [Low8/32]BCFN(2+1,13-1,T)         R=  -7.7  p =1-4.5e-4   unusual          
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf9eecaf2
length= 8 gigabytes (2^33 bytes), time= 156 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xf9eecaf2
length= 16 gigabytes (2^34 bytes), time= 321 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xf9eecaf2
length= 32 gigabytes (2^35 bytes), time= 646 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xf9eecaf2
length= 64 gigabytes (2^36 bytes), time= 1308 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xf9eecaf2
length= 128 gigabytes (2^37 bytes), time= 2622 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.9  p =1-2.5e-3   unusual          
  [Low8/32]Gap-16:B                 R=  -4.8  p =1-5.2e-4   unusual          
  ...and 194 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf9eecaf2
length= 176.000 gigabytes (2^37.459 bytes), time= 3604 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+11,13-2,T)                 R= +12.2  p =  8.2e-6   unusual          
  BCFN(2+20,13-8,T)                 R= +24.7  p =  3.3e-7   unusual          
  BCFN(2+22,13-9,T)                 R= +32.5  p =  1.9e-8   mildly suspicious
  BCFN(2+23,13-9,T)                 R= +34.2  p =  8.2e-9   mildly suspicious
  [Low8/32]Gap-16:A                 R=  -4.5  p =1-8.7e-4   unusual          
  [Low8/32]Gap-16:B                 R=  -4.3  p =1-1.2e-3   unusual          
  ...and 195 test result(s) without anomalies


real	60m4.805s
user	58m11.764s
sys	1m43.872s
*/
/* TEST00
time ./MRndCPP 
3497841202
67965748
527131255
182892387
247477018
3100051826
18445573391751321066

real	1m52.721s
user	1m52.500s
sys	0m0.028s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.90e+07  |2930650454|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.48312210|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.19847109|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.96523379|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.98673608|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.52582002|  PASSED  
        diehard_opso|   0|   2097152|     100|0.94272298|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.89801843|  PASSED  
         diehard_dna|   0|   2097152|     100|0.37339004|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.74465792|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.35461844|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.66443175|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.23492445|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.93733936|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.48869411|  PASSED  
        diehard_sums|   0|       100|     100|0.13601941|  PASSED  
        diehard_runs|   0|    100000|     100|0.95695150|  PASSED  
        diehard_runs|   0|    100000|     100|0.66643188|  PASSED  
       diehard_craps|   0|    200000|     100|0.86380596|  PASSED  
       diehard_craps|   0|    200000|     100|0.64541751|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.28805835|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.26664617|  PASSED  
         sts_monobit|   1|    100000|     100|0.46216870|  PASSED  
            sts_runs|   2|    100000|     100|0.58430868|  PASSED  
          sts_serial|   1|    100000|     100|0.36654015|  PASSED  
          sts_serial|   2|    100000|     100|0.99797909|   WEAK   
          sts_serial|   3|    100000|     100|0.43562065|  PASSED  
          sts_serial|   3|    100000|     100|0.49462157|  PASSED  
          sts_serial|   4|    100000|     100|0.38409484|  PASSED  
          sts_serial|   4|    100000|     100|0.89432270|  PASSED  
          sts_serial|   5|    100000|     100|0.86368587|  PASSED  
          sts_serial|   5|    100000|     100|0.80031619|  PASSED  
          sts_serial|   6|    100000|     100|0.05857299|  PASSED  
          sts_serial|   6|    100000|     100|0.60531736|  PASSED  
          sts_serial|   7|    100000|     100|0.68428631|  PASSED  
          sts_serial|   7|    100000|     100|0.91521766|  PASSED  
          sts_serial|   8|    100000|     100|0.52970336|  PASSED  
          sts_serial|   8|    100000|     100|0.88289837|  PASSED  
          sts_serial|   9|    100000|     100|0.40113935|  PASSED  
          sts_serial|   9|    100000|     100|0.60002331|  PASSED  
          sts_serial|  10|    100000|     100|0.05727444|  PASSED  
          sts_serial|  10|    100000|     100|0.53183681|  PASSED  
          sts_serial|  11|    100000|     100|0.80726646|  PASSED  
          sts_serial|  11|    100000|     100|0.77828936|  PASSED  
          sts_serial|  12|    100000|     100|0.90395759|  PASSED  
          sts_serial|  12|    100000|     100|0.98916526|  PASSED  
          sts_serial|  13|    100000|     100|0.14319647|  PASSED  
          sts_serial|  13|    100000|     100|0.94211416|  PASSED  
          sts_serial|  14|    100000|     100|0.22528034|  PASSED  
          sts_serial|  14|    100000|     100|0.04064618|  PASSED  
          sts_serial|  15|    100000|     100|0.58274907|  PASSED  
          sts_serial|  15|    100000|     100|0.80305223|  PASSED  
          sts_serial|  16|    100000|     100|0.85058393|  PASSED  
          sts_serial|  16|    100000|     100|0.58760898|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.18258709|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.66007738|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.08847256|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.84527182|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.99534631|   WEAK   
         rgb_bitdist|   6|    100000|     100|0.08393217|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.35655500|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.73023629|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.96136556|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.82047115|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.71637208|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.89007350|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.21337180|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.83791112|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.04950997|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.00303853|   WEAK   
    rgb_permutations|   2|    100000|     100|0.92325654|  PASSED  
    rgb_permutations|   3|    100000|     100|0.63341214|  PASSED  
    rgb_permutations|   4|    100000|     100|0.34185069|  PASSED  
    rgb_permutations|   5|    100000|     100|0.51632092|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.89599849|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.30460888|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.37903712|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.10120603|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.42003051|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.44321411|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.83877448|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.47203015|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.66534232|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.22907853|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.03267441|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.15105403|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.94799008|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.55796125|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.85231142|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.56429866|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.20257548|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.75296811|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.92495494|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.74559632|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.80886850|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.92833784|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.96970327|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.65173842|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.43694299|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.02882862|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.35532444|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.94159720|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.61880923|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.40631389|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.53407266|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.87351952|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.21689281|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.06066648|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.46520928|  PASSED  
             dab_dct| 256|     50000|       1|0.01505615|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.42320790|  PASSED  
        dab_filltree|  32|  15000000|       1|0.87841223|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.32450629|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.41579208|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.60389620|  PASSED  

real	51m49.183s
user	48m23.500s
sys	3m22.496s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x269ede6e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x269ede6e
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x269ede6e
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x269ede6e
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x269ede6e
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x269ede6e
length= 2 gigabytes (2^31 bytes), time= 40.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x269ede6e
length= 4 gigabytes (2^32 bytes), time= 78.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x269ede6e
length= 5.250 gigabytes (2^32.392 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.325s
user	1m40.896s
sys	0m3.256s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xfd70517a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xfd70517a
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xfd70517a
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xfd70517a
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xfd70517a
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xfd70517a
length= 2 gigabytes (2^31 bytes), time= 40.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.5  p =  6.8e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfd70517a
length= 4 gigabytes (2^32 bytes), time= 78.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xfd70517a
length= 5.250 gigabytes (2^32.392 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.365s
user	1m41.132s
sys	0m3.096s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x96de2e32
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x96de2e32
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x96de2e32
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.0  p =1-6.6e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x96de2e32
length= 512 megabytes (2^29 bytes), time= 12.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x96de2e32
length= 1 gigabyte (2^30 bytes), time= 24.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x96de2e32
length= 2 gigabytes (2^31 bytes), time= 47.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x96de2e32
length= 4 gigabytes (2^32 bytes), time= 97.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x96de2e32
length= 4.250 gigabytes (2^32.087 bytes), time= 104 seconds
  no anomalies in 156 test result(s)


real	1m44.628s
user	1m42.088s
sys	0m2.408s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x85aa5e74
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x85aa5e74
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x85aa5e74
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.5  p = 0.988     unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x85aa5e74
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x85aa5e74
length= 1 gigabyte (2^30 bytes), time= 20.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x85aa5e74
length= 2 gigabytes (2^31 bytes), time= 39.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x85aa5e74
length= 4 gigabytes (2^32 bytes), time= 76.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x85aa5e74
length= 8 gigabytes (2^33 bytes), time= 158 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x85aa5e74
length= 16 gigabytes (2^34 bytes), time= 322 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x85aa5e74
length= 32 gigabytes (2^35 bytes), time= 645 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x85aa5e74
length= 64 gigabytes (2^36 bytes), time= 1305 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.3  p =1-1.4e-3   unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0x85aa5e74
length= 128 gigabytes (2^37 bytes), time= 2611 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.9  p =1-3.9e-4   unusual          
  ...and 195 test result(s) without anomalies

rng=RNG_stdin32, seed=0x85aa5e74
length= 176.750 gigabytes (2^37.466 bytes), time= 3600 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -5.5  p =1-1.3e-4   mildly suspicious
  ...and 200 test result(s) without anomalies


real	60m1.174s
user	58m14.160s
sys	1m42.884s
*/
