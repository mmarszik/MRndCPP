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
/// @created on 2019-12-08 03:02:44 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 57c91b2b-729f-4973-847f-f893792db016                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_skip_lin.h"

using TRnd = RndSkipLin2b;
/* TEST00
time ./MRndCPP 
878713968
123488888
3326016157
2631003783
2609393688
3629582358
18446686704283218461

real	7m23.865s
user	7m22.508s
sys	0m0.132s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.28e+07  |2719430774|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.71991851|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.94737353|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.24740069|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.83059779|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.71332724|  PASSED  
        diehard_opso|   0|   2097152|     100|0.97098686|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.82856519|  PASSED  
         diehard_dna|   0|   2097152|     100|0.11429575|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.91025724|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.38004257|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.37605494|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.70064516|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.03026463|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.32694348|  PASSED  
        diehard_sums|   0|       100|     100|0.02093013|  PASSED  
        diehard_runs|   0|    100000|     100|0.86361875|  PASSED  
        diehard_runs|   0|    100000|     100|0.07983765|  PASSED  
       diehard_craps|   0|    200000|     100|0.04061721|  PASSED  
       diehard_craps|   0|    200000|     100|0.94092090|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.78196978|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.18903594|  PASSED  
         sts_monobit|   1|    100000|     100|0.48914556|  PASSED  
            sts_runs|   2|    100000|     100|0.73909494|  PASSED  
          sts_serial|   1|    100000|     100|0.42831254|  PASSED  
          sts_serial|   2|    100000|     100|0.99338900|  PASSED  
          sts_serial|   3|    100000|     100|0.70286942|  PASSED  
          sts_serial|   3|    100000|     100|0.90932583|  PASSED  
          sts_serial|   4|    100000|     100|0.43404444|  PASSED  
          sts_serial|   4|    100000|     100|0.09823528|  PASSED  
          sts_serial|   5|    100000|     100|0.35042252|  PASSED  
          sts_serial|   5|    100000|     100|0.83731665|  PASSED  
          sts_serial|   6|    100000|     100|0.48830842|  PASSED  
          sts_serial|   6|    100000|     100|0.78737819|  PASSED  
          sts_serial|   7|    100000|     100|0.65264966|  PASSED  
          sts_serial|   7|    100000|     100|0.89811486|  PASSED  
          sts_serial|   8|    100000|     100|0.59743673|  PASSED  
          sts_serial|   8|    100000|     100|0.36956295|  PASSED  
          sts_serial|   9|    100000|     100|0.42490670|  PASSED  
          sts_serial|   9|    100000|     100|0.94213438|  PASSED  
          sts_serial|  10|    100000|     100|0.97919920|  PASSED  
          sts_serial|  10|    100000|     100|0.89444681|  PASSED  
          sts_serial|  11|    100000|     100|0.58800458|  PASSED  
          sts_serial|  11|    100000|     100|0.87886241|  PASSED  
          sts_serial|  12|    100000|     100|0.44437575|  PASSED  
          sts_serial|  12|    100000|     100|0.67281247|  PASSED  
          sts_serial|  13|    100000|     100|0.99801762|   WEAK   
          sts_serial|  13|    100000|     100|0.69477753|  PASSED  
          sts_serial|  14|    100000|     100|0.97860710|  PASSED  
          sts_serial|  14|    100000|     100|0.75240442|  PASSED  
          sts_serial|  15|    100000|     100|0.51891036|  PASSED  
          sts_serial|  15|    100000|     100|0.22068218|  PASSED  
          sts_serial|  16|    100000|     100|0.56856663|  PASSED  
          sts_serial|  16|    100000|     100|0.63912723|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.99885962|   WEAK   
         rgb_bitdist|   2|    100000|     100|0.91498104|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.44309349|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.48583794|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.36067971|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.44203943|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.80240044|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.12152905|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.39317421|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.96619473|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.51096134|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.35826527|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.79399452|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.09922691|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.15086844|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.72753236|  PASSED  
    rgb_permutations|   2|    100000|     100|0.08037178|  PASSED  
    rgb_permutations|   3|    100000|     100|0.20406716|  PASSED  
    rgb_permutations|   4|    100000|     100|0.53510336|  PASSED  
    rgb_permutations|   5|    100000|     100|0.97578614|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.89031164|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.91024151|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.23384562|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.17414389|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.90569025|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.11661143|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.36651858|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.89371448|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.17585890|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.60824232|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.71823699|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.31809066|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.87508706|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.09032082|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.58087836|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.22649742|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.54259597|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.99798570|   WEAK   
      rgb_lagged_sum|  18|   1000000|     100|0.32650180|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.74562220|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.92740902|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.74556580|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.85616212|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.17548783|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.98113456|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.91641503|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.48151630|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.45379296|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.84252320|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.17933445|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.34169025|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.17794375|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.72485413|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.19654935|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.20393782|  PASSED  
             dab_dct| 256|     50000|       1|0.05142211|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.67818047|  PASSED  
        dab_filltree|  32|  15000000|       1|0.05323854|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.40854090|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.97970534|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.09590668|  PASSED  

real	97m3.725s
user	93m57.472s
sys	2m52.020s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6a50fb01
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6a50fb01
length= 128 megabytes (2^27 bytes), time= 3.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6a50fb01
length= 256 megabytes (2^28 bytes), time= 8.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  +4.5  p =  3.2e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6a50fb01
length= 512 megabytes (2^29 bytes), time= 16.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6a50fb01
length= 1 gigabyte (2^30 bytes), time= 32.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x6a50fb01
length= 2 gigabytes (2^31 bytes), time= 63.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6a50fb01
length= 3.250 gigabytes (2^31.700 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+5,13-3,T)         R=  -7.5  p =1-3.6e-4   unusual          
  ...and 152 test result(s) without anomalies


real	1m42.962s
user	1m40.400s
sys	0m2.388s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9491b798
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9491b798
length= 128 megabytes (2^27 bytes), time= 3.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-6,T)         R=  -5.4  p =1-2.0e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9491b798
length= 256 megabytes (2^28 bytes), time= 8.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9491b798
length= 512 megabytes (2^29 bytes), time= 16.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x9491b798
length= 1 gigabyte (2^30 bytes), time= 32.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9491b798
length= 2 gigabytes (2^31 bytes), time= 63.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x9491b798
length= 4 gigabytes (2^32 bytes), time= 125 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x9491b798
length= 8 gigabytes (2^33 bytes), time= 256 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x9491b798
length= 16 gigabytes (2^34 bytes), time= 517 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x9491b798
length= 31.000 gigabytes (2^34.954 bytes), time= 1002 seconds
  no anomalies in 180 test result(s)


real	16m42.746s
user	16m19.888s
sys	0m20.276s
*/
