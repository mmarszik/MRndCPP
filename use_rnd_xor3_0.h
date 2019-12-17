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
/// @created on 2019-12-08 03:03:05 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token d438ac46-cbde-477f-8846-5865c74a1cfd                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_xor3.h"
#include "rnd_mlin.h"

using TRnd = RndXor3<RndMLin, 3607, 3613, 3617>;
/* TEST00
time ./MRndCPP 
1600542879
2563198783
2258462826
2680277355
3488658062
3432880974
18446658757054241997

real	0m21.303s
user	0m21.228s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.09e+07  |3542742897|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.35105446|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.54034536|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.21768623|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.07243143|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.77743129|  PASSED  
        diehard_opso|   0|   2097152|     100|0.40584632|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.69504968|  PASSED  
         diehard_dna|   0|   2097152|     100|0.41958618|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.95909002|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.36164062|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.39609831|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.09679031|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.25532790|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.65934041|  PASSED  
        diehard_sums|   0|       100|     100|0.00380993|   WEAK   
        diehard_runs|   0|    100000|     100|0.00006112|   WEAK   
        diehard_runs|   0|    100000|     100|0.24664524|  PASSED  
       diehard_craps|   0|    200000|     100|0.87825535|  PASSED  
       diehard_craps|   0|    200000|     100|0.49891226|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.86675853|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.71973389|  PASSED  
         sts_monobit|   1|    100000|     100|0.70212557|  PASSED  
            sts_runs|   2|    100000|     100|0.62640360|  PASSED  
          sts_serial|   1|    100000|     100|0.37600668|  PASSED  
          sts_serial|   2|    100000|     100|0.97456899|  PASSED  
          sts_serial|   3|    100000|     100|0.72457416|  PASSED  
          sts_serial|   3|    100000|     100|0.97749241|  PASSED  
          sts_serial|   4|    100000|     100|0.97761704|  PASSED  
          sts_serial|   4|    100000|     100|0.81626044|  PASSED  
          sts_serial|   5|    100000|     100|0.80040411|  PASSED  
          sts_serial|   5|    100000|     100|0.44991865|  PASSED  
          sts_serial|   6|    100000|     100|0.14812885|  PASSED  
          sts_serial|   6|    100000|     100|0.48388463|  PASSED  
          sts_serial|   7|    100000|     100|0.59812673|  PASSED  
          sts_serial|   7|    100000|     100|0.81527238|  PASSED  
          sts_serial|   8|    100000|     100|0.24041400|  PASSED  
          sts_serial|   8|    100000|     100|0.11113123|  PASSED  
          sts_serial|   9|    100000|     100|0.50072867|  PASSED  
          sts_serial|   9|    100000|     100|0.39309917|  PASSED  
          sts_serial|  10|    100000|     100|0.85518819|  PASSED  
          sts_serial|  10|    100000|     100|0.44772625|  PASSED  
          sts_serial|  11|    100000|     100|0.96970517|  PASSED  
          sts_serial|  11|    100000|     100|0.93432747|  PASSED  
          sts_serial|  12|    100000|     100|0.98579652|  PASSED  
          sts_serial|  12|    100000|     100|0.83449602|  PASSED  
          sts_serial|  13|    100000|     100|0.73412809|  PASSED  
          sts_serial|  13|    100000|     100|0.49153892|  PASSED  
          sts_serial|  14|    100000|     100|0.93778110|  PASSED  
          sts_serial|  14|    100000|     100|0.90405540|  PASSED  
          sts_serial|  15|    100000|     100|0.74107827|  PASSED  
          sts_serial|  15|    100000|     100|0.82668514|  PASSED  
          sts_serial|  16|    100000|     100|0.60223630|  PASSED  
          sts_serial|  16|    100000|     100|0.42851427|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.27090566|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.72500056|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.66829646|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.02494248|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.38635326|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.17271679|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.48599639|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.23436486|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.88017665|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.84829488|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.60091090|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.09237769|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.41148772|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.13625286|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.13410324|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.03561156|  PASSED  
    rgb_permutations|   2|    100000|     100|0.63051710|  PASSED  
    rgb_permutations|   3|    100000|     100|0.84731802|  PASSED  
    rgb_permutations|   4|    100000|     100|0.21030639|  PASSED  
    rgb_permutations|   5|    100000|     100|0.56326829|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.92137413|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.57881496|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.51367695|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.96097031|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.68737737|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.90119795|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.61382115|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.34262431|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.42566821|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.72104828|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.98585440|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.11589021|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.60429931|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.54394724|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.52658567|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.97512010|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.84216834|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.01194614|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.04837356|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.84008766|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.63589577|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.94546889|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.08959430|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.52289259|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.63917207|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.89911707|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.01605733|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.56315827|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.61547501|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.05014237|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.18989352|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.49010210|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.92605609|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.74337988|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.34131950|  PASSED  
             dab_dct| 256|     50000|       1|0.15807123|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.32192355|  PASSED  
        dab_filltree|  32|  15000000|       1|0.63875705|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.38323975|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.09539381|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.02410074|  PASSED  

real	48m32.718s
user	44m40.644s
sys	3m44.788s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe9c48da9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe9c48da9
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -4.6  p =1-7.0e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe9c48da9
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xe9c48da9
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xe9c48da9
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xe9c48da9
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xe9c48da9
length= 4 gigabytes (2^32 bytes), time= 73.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xe9c48da9
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  +5.2  p =  2.2e-4   mildly suspicious
  ...and 159 test result(s) without anomalies


real	1m44.201s
user	1m41.540s
sys	0m2.412s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xfb12f7a7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xfb12f7a7
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xfb12f7a7
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xfb12f7a7
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-1,T)                  R=  +7.4  p =  1.9e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfb12f7a7
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xfb12f7a7
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xfb12f7a7
length= 4 gigabytes (2^32 bytes), time= 72.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xfb12f7a7
length= 8 gigabytes (2^33 bytes), time= 148 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +5.3  p =  8.5e-4   unusual          
  Gap-16:B                          R=  +6.5  p =  1.6e-5   suspicious       
  [Low8/32]Gap-16:A                 R=  +6.3  p =  1.7e-4   mildly suspicious
  [Low8/32]Gap-16:B                 R=  +5.3  p =  2.0e-4   mildly suspicious
  ...and 161 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfb12f7a7
length= 16 gigabytes (2^34 bytes), time= 304 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +7.4  p =  3.2e-5   mildly suspicious
  Gap-16:B                          R=  +7.4  p =  3.1e-6   suspicious       
  [Low8/32]Gap-16:A                 R=  +9.8  p =  1.1e-6   very suspicious  
  [Low8/32]Gap-16:B                 R= +10.6  p =  5.6e-9    VERY SUSPICIOUS 
  [Low1/32]Gap-16:A                 R=  +6.2  p =  9.2e-5   mildly suspicious
  [Low1/32]Gap-16:B                 R=  +4.4  p =  1.1e-3   unusual          
  ...and 166 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfb12f7a7
length= 32 gigabytes (2^35 bytes), time= 612 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.6  p =1-3.1e-3   unusual          
  Gap-16:A                          R= +11.5  p =  6.2e-8   very suspicious  
  Gap-16:B                          R= +19.3  p =  2.0e-16    FAIL !         
  [Low8/32]Gap-16:A                 R= +18.9  p =  8.7e-13    FAIL           
  [Low8/32]Gap-16:B                 R= +27.7  p =  1.4e-23    FAIL !!        
  [Low1/32]Gap-16:A                 R=  +7.7  p =  3.6e-6   suspicious       
  [Low1/32]Gap-16:B                 R=  +6.8  p =  1.0e-5   suspicious       
  ...and 173 test result(s) without anomalies


real	10m12.733s
user	9m57.872s
sys	0m13.208s
*/
/* TEST00
time ./MRndCPP 
1600542879
2563198783
2258462826
2680277355
3488658062
3432880974
18446658757054241997

real	0m21.370s
user	0m21.292s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.10e+07  |1045062067|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.73794315|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.61239706|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.75609007|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.57183469|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.89263149|  PASSED  
        diehard_opso|   0|   2097152|     100|0.86343355|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.31391953|  PASSED  
         diehard_dna|   0|   2097152|     100|0.16493173|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.77800968|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.22832273|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.93804057|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.07807899|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.53151162|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.68095832|  PASSED  
        diehard_sums|   0|       100|     100|0.10868636|  PASSED  
        diehard_runs|   0|    100000|     100|0.91451225|  PASSED  
        diehard_runs|   0|    100000|     100|0.71899017|  PASSED  
       diehard_craps|   0|    200000|     100|0.17337211|  PASSED  
       diehard_craps|   0|    200000|     100|0.17011645|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.92505406|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.65063703|  PASSED  
         sts_monobit|   1|    100000|     100|0.05641294|  PASSED  
            sts_runs|   2|    100000|     100|0.01340244|  PASSED  
          sts_serial|   1|    100000|     100|0.75285364|  PASSED  
          sts_serial|   2|    100000|     100|0.30057351|  PASSED  
          sts_serial|   3|    100000|     100|0.45737534|  PASSED  
          sts_serial|   3|    100000|     100|0.29934388|  PASSED  
          sts_serial|   4|    100000|     100|0.61519799|  PASSED  
          sts_serial|   4|    100000|     100|0.83464532|  PASSED  
          sts_serial|   5|    100000|     100|0.54845119|  PASSED  
          sts_serial|   5|    100000|     100|0.45852198|  PASSED  
          sts_serial|   6|    100000|     100|0.71535660|  PASSED  
          sts_serial|   6|    100000|     100|0.82811565|  PASSED  
          sts_serial|   7|    100000|     100|0.34793092|  PASSED  
          sts_serial|   7|    100000|     100|0.63503042|  PASSED  
          sts_serial|   8|    100000|     100|0.43624171|  PASSED  
          sts_serial|   8|    100000|     100|0.71511744|  PASSED  
          sts_serial|   9|    100000|     100|0.89551363|  PASSED  
          sts_serial|   9|    100000|     100|0.15914836|  PASSED  
          sts_serial|  10|    100000|     100|0.21426705|  PASSED  
          sts_serial|  10|    100000|     100|0.24463450|  PASSED  
          sts_serial|  11|    100000|     100|0.03319493|  PASSED  
          sts_serial|  11|    100000|     100|0.30998338|  PASSED  
          sts_serial|  12|    100000|     100|0.30059730|  PASSED  
          sts_serial|  12|    100000|     100|0.40310999|  PASSED  
          sts_serial|  13|    100000|     100|0.49010933|  PASSED  
          sts_serial|  13|    100000|     100|0.94181801|  PASSED  
          sts_serial|  14|    100000|     100|0.86493024|  PASSED  
          sts_serial|  14|    100000|     100|0.98744073|  PASSED  
          sts_serial|  15|    100000|     100|0.23269308|  PASSED  
          sts_serial|  15|    100000|     100|0.54169190|  PASSED  
          sts_serial|  16|    100000|     100|0.98565270|  PASSED  
          sts_serial|  16|    100000|     100|0.32202936|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.65739757|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.27353883|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.29193898|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.95905216|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.08709280|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.71621280|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.82175556|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.34797664|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.49380947|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.55481033|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.91122598|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.68936171|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.90364071|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.34094078|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.53096301|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.42802109|  PASSED  
    rgb_permutations|   2|    100000|     100|0.63677589|  PASSED  
    rgb_permutations|   3|    100000|     100|0.60985206|  PASSED  
    rgb_permutations|   4|    100000|     100|0.84451220|  PASSED  
    rgb_permutations|   5|    100000|     100|0.52586913|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.29253911|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.50613439|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.99024830|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.37520108|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.87953230|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.24452700|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.17724639|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.79873727|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.75888434|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.35245508|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.71927630|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.34642674|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.51389145|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.47395162|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.97845825|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.51865662|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.58308075|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.57919116|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.12738018|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.46605315|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.41130055|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.87366060|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.80255631|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.94205151|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.12630159|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.19773358|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.82795363|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.91559157|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.13206497|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.54205959|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.84320252|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.67278189|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.93831114|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.18202306|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.80873576|  PASSED  
             dab_dct| 256|     50000|       1|0.39617417|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.79355009|  PASSED  
        dab_filltree|  32|  15000000|       1|0.63814555|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.10654836|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.61972875|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.46456586|  PASSED  

real	48m50.870s
user	45m7.880s
sys	3m36.264s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb1ff9905
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb1ff9905
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb1ff9905
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb1ff9905
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb1ff9905
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb1ff9905
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb1ff9905
length= 4 gigabytes (2^32 bytes), time= 72.1 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.9  p =  4.1e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb1ff9905
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +5.7  p =  9.0e-5   mildly suspicious
  ...and 159 test result(s) without anomalies


real	1m44.361s
user	1m41.564s
sys	0m2.552s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6ff332d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6ff332d
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6ff332d
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6ff332d
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6ff332d
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x6ff332d
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6ff332d
length= 4 gigabytes (2^32 bytes), time= 74.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x6ff332d
length= 8 gigabytes (2^33 bytes), time= 153 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  +4.3  p =  1.4e-3   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6ff332d
length= 16 gigabytes (2^34 bytes), time= 308 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +5.2  p =  9.8e-4   unusual          
  Gap-16:B                          R=  +8.1  p =  7.8e-7   very suspicious  
  [Low8/32]Gap-16:A                 R=  +7.7  p =  2.7e-5   suspicious       
  [Low8/32]Gap-16:B                 R= +12.0  p =  3.9e-10   VERY SUSPICIOUS 
  [Low1/32]Gap-16:A                 R=  +5.8  p =  1.8e-4   mildly suspicious
  ...and 167 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6ff332d
length= 32 gigabytes (2^35 bytes), time= 616 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R= +13.0  p =  7.1e-9    VERY SUSPICIOUS 
  Gap-16:B                          R= +19.9  p =  6.4e-17    FAIL !         
  [Low8/32]Gap-16:A                 R= +17.4  p =  8.0e-12    FAIL           
  [Low8/32]Gap-16:B                 R= +28.8  p =  1.4e-24    FAIL !!        
  [Low1/32]Gap-16:A                 R=  +6.9  p =  1.8e-5   suspicious       
  ...and 175 test result(s) without anomalies


real	10m16.591s
user	10m1.924s
sys	0m13.100s
*/
