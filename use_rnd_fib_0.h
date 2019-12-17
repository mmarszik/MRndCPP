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
/// @created on 2019-12-08 02:57:29 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 4f1a1ab5-c27a-40d1-a81b-84e2338f829b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib0;
/* TEST00
time ./MRndCPP 
753734251
3857031821
745688813
662591381
2862306613
3243338222
18446716533185756661

real	0m26.115s
user	0m26.048s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.23e+07  |2534298436|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.45986325|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.77479367|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.10090700|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.06583708|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.60030868|  PASSED  
        diehard_opso|   0|   2097152|     100|0.80895647|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.97137807|  PASSED  
         diehard_dna|   0|   2097152|     100|0.38211892|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.88516302|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.51684404|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.02419162|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.12492724|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.05651911|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.58127688|  PASSED  
        diehard_sums|   0|       100|     100|0.62321841|  PASSED  
        diehard_runs|   0|    100000|     100|0.95910225|  PASSED  
        diehard_runs|   0|    100000|     100|0.99516774|   WEAK   
       diehard_craps|   0|    200000|     100|0.33884997|  PASSED  
       diehard_craps|   0|    200000|     100|0.67948294|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.57135609|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00262344|   WEAK   
         sts_monobit|   1|    100000|     100|0.75656096|  PASSED  
            sts_runs|   2|    100000|     100|0.78346600|  PASSED  
          sts_serial|   1|    100000|     100|0.39779720|  PASSED  
          sts_serial|   2|    100000|     100|0.52841180|  PASSED  
          sts_serial|   3|    100000|     100|0.14726132|  PASSED  
          sts_serial|   3|    100000|     100|0.02954591|  PASSED  
          sts_serial|   4|    100000|     100|0.20207770|  PASSED  
          sts_serial|   4|    100000|     100|0.05885518|  PASSED  
          sts_serial|   5|    100000|     100|0.07918044|  PASSED  
          sts_serial|   5|    100000|     100|0.44570082|  PASSED  
          sts_serial|   6|    100000|     100|0.00009118|   WEAK   
          sts_serial|   6|    100000|     100|0.00179091|   WEAK   
          sts_serial|   7|    100000|     100|0.01913346|  PASSED  
          sts_serial|   7|    100000|     100|0.51275028|  PASSED  
          sts_serial|   8|    100000|     100|0.13155084|  PASSED  
          sts_serial|   8|    100000|     100|0.55338927|  PASSED  
          sts_serial|   9|    100000|     100|0.40821071|  PASSED  
          sts_serial|   9|    100000|     100|0.73823386|  PASSED  
          sts_serial|  10|    100000|     100|0.21810963|  PASSED  
          sts_serial|  10|    100000|     100|0.77060553|  PASSED  
          sts_serial|  11|    100000|     100|0.29911535|  PASSED  
          sts_serial|  11|    100000|     100|0.70833729|  PASSED  
          sts_serial|  12|    100000|     100|0.05378079|  PASSED  
          sts_serial|  12|    100000|     100|0.59604664|  PASSED  
          sts_serial|  13|    100000|     100|0.21629133|  PASSED  
          sts_serial|  13|    100000|     100|0.25635466|  PASSED  
          sts_serial|  14|    100000|     100|0.33862350|  PASSED  
          sts_serial|  14|    100000|     100|0.94304569|  PASSED  
          sts_serial|  15|    100000|     100|0.86839277|  PASSED  
          sts_serial|  15|    100000|     100|0.27890171|  PASSED  
          sts_serial|  16|    100000|     100|0.67391166|  PASSED  
          sts_serial|  16|    100000|     100|0.90003393|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.36322410|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.99434298|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.44698602|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.66442145|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.34479588|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.91562437|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.49025014|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.68843878|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.93717846|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.60157589|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.09032281|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.26566780|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.46496129|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.74685831|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.41124934|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.14609875|  PASSED  
    rgb_permutations|   2|    100000|     100|0.02114715|  PASSED  
    rgb_permutations|   3|    100000|     100|0.62284913|  PASSED  
    rgb_permutations|   4|    100000|     100|0.93374520|  PASSED  
    rgb_permutations|   5|    100000|     100|0.64313173|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.95037189|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.40860251|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.94905528|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.80354188|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.39839960|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.07167799|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.80298360|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.48518669|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.37401811|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.08993449|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.96414753|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.92500818|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.53915306|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.74388328|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.87300399|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.53535386|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.34122286|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.98142251|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.74414813|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.58333772|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.58582363|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.38143177|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.35913711|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.98745579|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.18607223|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.84246808|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.94209561|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.67918535|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.91817710|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.10921154|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.17709417|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.51425678|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.86253919|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.38993139|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.43132602|  PASSED  
             dab_dct| 256|     50000|       1|0.00000356|   WEAK   
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.12797098|  PASSED  
        dab_filltree|  32|  15000000|       1|0.65265761|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.10357413|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.05348871|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.48255600|  PASSED  

real	48m59.157s
user	45m20.712s
sys	3m30.804s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x79653685
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x79653685
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +7.3  p =  7.0e-4   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x79653685
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x79653685
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.0  p =  2.8e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +6.5  p =  1.9e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x79653685
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +17.9  p =  9.3e-8   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R= +11.6  p =  5.3e-7   very suspicious  
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x79653685
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R= +19.2  p =  9.1e-10   VERY SUSPICIOUS 
  [Low8/32]BCFN(2+2,13-2,T)         R=  +9.3  p =  2.4e-4   unusual          
  [Low1/32]BCFN(2+0,13-3,T)         R= +31.6  p =  9.6e-15    FAIL !         
  [Low1/32]DC6-9x1Bytes-1           R= +21.9  p =  2.3e-13    FAIL           
  ...and 144 test result(s) without anomalies


real	0m37.889s
user	0m36.872s
sys	0m0.928s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9da354b8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9da354b8
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9da354b8
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9da354b8
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x9da354b8
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R=  +9.7  p =  1.4e-4   mildly suspicious
  [Low1/32]BCFN(2+0,13-4,T)         R= +16.3  p =  4.4e-7   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R=  +7.7  p =  2.2e-4   mildly suspicious
  ...and 138 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9da354b8
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R= +18.9  p =  1.2e-9    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+0,13-3,T)         R= +23.7  p =  5.3e-11    FAIL           
  [Low1/32]DC6-9x1Bytes-1           R= +17.9  p =  8.8e-11    FAIL           
  ...and 145 test result(s) without anomalies


real	0m37.656s
user	0m36.728s
sys	0m0.804s
*/
/* TEST00
time ./MRndCPP 
753734251
3857031821
745688813
662591381
2862306613
3243338222
18446716533185756661

real	0m26.153s
user	0m26.100s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  |2293429717|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.80809635|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.98000526|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.98964887|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.64268628|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.10848131|  PASSED  
        diehard_opso|   0|   2097152|     100|0.92941230|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.82856519|  PASSED  
         diehard_dna|   0|   2097152|     100|0.06054588|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.33791190|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.23757080|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.09026823|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.57974261|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.98149117|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.62576225|  PASSED  
        diehard_sums|   0|       100|     100|0.37653528|  PASSED  
        diehard_runs|   0|    100000|     100|0.73757579|  PASSED  
        diehard_runs|   0|    100000|     100|0.29363568|  PASSED  
       diehard_craps|   0|    200000|     100|0.56674813|  PASSED  
       diehard_craps|   0|    200000|     100|0.78269931|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.93232951|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.49727515|  PASSED  
         sts_monobit|   1|    100000|     100|0.97466667|  PASSED  
            sts_runs|   2|    100000|     100|0.29913878|  PASSED  
          sts_serial|   1|    100000|     100|0.25761938|  PASSED  
          sts_serial|   2|    100000|     100|0.02878495|  PASSED  
          sts_serial|   3|    100000|     100|0.27655509|  PASSED  
          sts_serial|   3|    100000|     100|0.39637780|  PASSED  
          sts_serial|   4|    100000|     100|0.27584913|  PASSED  
          sts_serial|   4|    100000|     100|0.15543117|  PASSED  
          sts_serial|   5|    100000|     100|0.62120048|  PASSED  
          sts_serial|   5|    100000|     100|0.81732504|  PASSED  
          sts_serial|   6|    100000|     100|0.60873883|  PASSED  
          sts_serial|   6|    100000|     100|0.14259928|  PASSED  
          sts_serial|   7|    100000|     100|0.62849904|  PASSED  
          sts_serial|   7|    100000|     100|0.43519367|  PASSED  
          sts_serial|   8|    100000|     100|0.74041348|  PASSED  
          sts_serial|   8|    100000|     100|0.22118660|  PASSED  
          sts_serial|   9|    100000|     100|0.64318880|  PASSED  
          sts_serial|   9|    100000|     100|0.81572978|  PASSED  
          sts_serial|  10|    100000|     100|0.89006520|  PASSED  
          sts_serial|  10|    100000|     100|0.72789509|  PASSED  
          sts_serial|  11|    100000|     100|0.75985609|  PASSED  
          sts_serial|  11|    100000|     100|0.60763403|  PASSED  
          sts_serial|  12|    100000|     100|0.35209051|  PASSED  
          sts_serial|  12|    100000|     100|0.02852020|  PASSED  
          sts_serial|  13|    100000|     100|0.29049408|  PASSED  
          sts_serial|  13|    100000|     100|0.25381670|  PASSED  
          sts_serial|  14|    100000|     100|0.51010681|  PASSED  
          sts_serial|  14|    100000|     100|0.51890428|  PASSED  
          sts_serial|  15|    100000|     100|0.11728768|  PASSED  
          sts_serial|  15|    100000|     100|0.61252911|  PASSED  
          sts_serial|  16|    100000|     100|0.10822212|  PASSED  
          sts_serial|  16|    100000|     100|0.17651744|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.99698413|   WEAK   
         rgb_bitdist|   2|    100000|     100|0.81888143|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.26824070|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.67749206|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.93639107|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.34767469|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.76453837|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.99287930|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.28302088|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.08778546|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.75336098|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.13649123|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.95898820|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.12836853|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.79751402|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.83057694|  PASSED  
    rgb_permutations|   2|    100000|     100|0.49355536|  PASSED  
    rgb_permutations|   3|    100000|     100|0.68961213|  PASSED  
    rgb_permutations|   4|    100000|     100|0.68284016|  PASSED  
    rgb_permutations|   5|    100000|     100|0.41709421|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.61207379|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.93284432|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.69881897|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.21127960|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.10954698|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.74538151|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.32167528|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.91581180|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.99618507|   WEAK   
      rgb_lagged_sum|   9|   1000000|     100|0.61684785|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.71202829|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.38282405|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.94031320|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.23819965|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.88655248|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.25680704|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.03446961|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.35145771|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.89535235|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.32214894|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.51276352|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.11845801|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.29389016|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.50674929|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.21904227|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.80993752|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.81343884|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.14156376|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.93467384|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.74375236|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.60456379|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.44556691|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.97656305|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.13381644|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.29732566|  PASSED  
             dab_dct| 256|     50000|       1|0.00229480|   WEAK   
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.54361863|  PASSED  
        dab_filltree|  32|  15000000|       1|0.29489318|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.40028749|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.15819235|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.04026034|  PASSED  

real	48m46.124s
user	45m2.120s
sys	3m36.920s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3381348f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3381348f
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3381348f
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R=  +7.9  p =  1.5e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +5.3  p = 0.010     unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3381348f
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +16.6  p =  1.0e-6   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R=  +9.4  p =  3.9e-5   suspicious       
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3381348f
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +10.3  p =  7.6e-5   mildly suspicious
  [Low1/32]BCFN(2+0,13-4,T)         R= +18.8  p =  3.8e-8   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R= +10.1  p =  5.3e-6   very suspicious  
  ...and 138 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3381348f
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R= +18.5  p =  2.1e-9    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+0,13-3,T)         R= +31.3  p =  1.3e-14    FAIL !         
  [Low1/32]DC6-9x1Bytes-1           R= +19.1  p =  1.4e-11    FAIL           
  ...and 145 test result(s) without anomalies


real	0m37.814s
user	0m36.776s
sys	0m0.960s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4819fe0d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4819fe0d
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4819fe0d
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.0  p =  2.7e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4819fe0d
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +12.2  p =  6.0e-5   mildly suspicious
  [Low1/32]DC6-9x1Bytes-1           R=  +6.0  p =  3.8e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4819fe0d
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +12.6  p =  9.5e-6   suspicious       
  [Low1/32]BCFN(2+0,13-4,T)         R= +17.8  p =  9.9e-8   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R= +11.7  p =  4.4e-7   very suspicious  
  ...and 138 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4819fe0d
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R= +17.3  p =  8.7e-9    VERY SUSPICIOUS 
  [Low8/32]BCFN(2+2,13-2,T)         R= +11.6  p =  1.5e-5   suspicious       
  [Low1/32]BCFN(2+0,13-3,T)         R= +32.5  p =  3.6e-15    FAIL !         
  [Low1/32]DC6-9x1Bytes-1           R= +17.7  p =  1.2e-10    FAIL           
  ...and 144 test result(s) without anomalies


real	0m37.791s
user	0m36.864s
sys	0m0.804s
*/
