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
/// @created on 2019-12-08 02:59:53 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 7d31d573-c8f4-4651-ab8e-a8f0b614d221                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2a;
/* TEST00
time ./MRndCPP 
3526497076
1652012899
857344370
3687836006
3554605929
3543896927
18446567115092599829

real	1m50.881s
user	1m50.556s
sys	0m0.060s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.42e+07  | 536051990|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.00478277|   WEAK   
      diehard_operm5|   0|   1000000|     100|0.75516259|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.80892455|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.76945311|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.85806525|  PASSED  
        diehard_opso|   0|   2097152|     100|0.79553837|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.34288242|  PASSED  
         diehard_dna|   0|   2097152|     100|0.36274614|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.48708376|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.89824900|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.71078053|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.46741116|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.05313221|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.83031339|  PASSED  
        diehard_sums|   0|       100|     100|0.57580696|  PASSED  
        diehard_runs|   0|    100000|     100|0.29706958|  PASSED  
        diehard_runs|   0|    100000|     100|0.16797892|  PASSED  
       diehard_craps|   0|    200000|     100|0.15906491|  PASSED  
       diehard_craps|   0|    200000|     100|0.28010184|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.09195577|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.35085235|  PASSED  
         sts_monobit|   1|    100000|     100|0.99521680|   WEAK   
            sts_runs|   2|    100000|     100|0.17343463|  PASSED  
          sts_serial|   1|    100000|     100|0.82942956|  PASSED  
          sts_serial|   2|    100000|     100|0.98206802|  PASSED  
          sts_serial|   3|    100000|     100|0.32982512|  PASSED  
          sts_serial|   3|    100000|     100|0.12481250|  PASSED  
          sts_serial|   4|    100000|     100|0.53900307|  PASSED  
          sts_serial|   4|    100000|     100|0.80688467|  PASSED  
          sts_serial|   5|    100000|     100|0.71274918|  PASSED  
          sts_serial|   5|    100000|     100|0.65752752|  PASSED  
          sts_serial|   6|    100000|     100|0.33593749|  PASSED  
          sts_serial|   6|    100000|     100|0.84240680|  PASSED  
          sts_serial|   7|    100000|     100|0.87037187|  PASSED  
          sts_serial|   7|    100000|     100|0.53230851|  PASSED  
          sts_serial|   8|    100000|     100|0.00196076|   WEAK   
          sts_serial|   8|    100000|     100|0.04813539|  PASSED  
          sts_serial|   9|    100000|     100|0.17274974|  PASSED  
          sts_serial|   9|    100000|     100|0.86062925|  PASSED  
          sts_serial|  10|    100000|     100|0.62790988|  PASSED  
          sts_serial|  10|    100000|     100|0.31619585|  PASSED  
          sts_serial|  11|    100000|     100|0.28187553|  PASSED  
          sts_serial|  11|    100000|     100|0.07311702|  PASSED  
          sts_serial|  12|    100000|     100|0.71052444|  PASSED  
          sts_serial|  12|    100000|     100|0.83714465|  PASSED  
          sts_serial|  13|    100000|     100|0.25575458|  PASSED  
          sts_serial|  13|    100000|     100|0.69169100|  PASSED  
          sts_serial|  14|    100000|     100|0.36643859|  PASSED  
          sts_serial|  14|    100000|     100|0.11985865|  PASSED  
          sts_serial|  15|    100000|     100|0.19474265|  PASSED  
          sts_serial|  15|    100000|     100|0.66590796|  PASSED  
          sts_serial|  16|    100000|     100|0.37697918|  PASSED  
          sts_serial|  16|    100000|     100|0.57779954|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.48137695|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.86452842|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.77751139|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.79296859|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.79582428|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.97353502|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.71592246|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.98412786|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.84382634|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.37744804|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.30424855|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.20080922|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.42059775|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.40555606|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.12716841|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.99697636|   WEAK   
    rgb_permutations|   2|    100000|     100|0.55323173|  PASSED  
    rgb_permutations|   3|    100000|     100|0.52538147|  PASSED  
    rgb_permutations|   4|    100000|     100|0.51413763|  PASSED  
    rgb_permutations|   5|    100000|     100|0.15149373|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.64577777|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.60450399|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.04056431|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.92420367|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.56322441|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.37250703|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.64393662|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.43973240|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.49696408|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.48246664|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.69691760|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.77838758|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.41586619|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.64499367|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.79023805|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.34219908|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.98140382|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.16569876|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.71449552|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.92735165|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.21842555|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.22314577|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.16599566|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.98478199|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.11274308|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.97723925|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.93752977|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.22547314|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.99672989|   WEAK   
      rgb_lagged_sum|  29|   1000000|     100|0.95771890|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.94058071|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.92152849|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.88618253|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.96344915|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.85039462|  PASSED  
             dab_dct| 256|     50000|       1|0.88618007|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.07951548|  PASSED  
        dab_filltree|  32|  15000000|       1|0.39799726|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.30048885|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.29873193|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.15298171|  PASSED  

real	59m7.377s
user	55m7.836s
sys	3m37.116s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x499285cd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x499285cd
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x499285cd
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x499285cd
length= 512 megabytes (2^29 bytes), time= 11.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.1  p = 0.012     unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x499285cd
length= 1 gigabyte (2^30 bytes), time= 22.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x499285cd
length= 2 gigabytes (2^31 bytes), time= 43.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x499285cd
length= 4 gigabytes (2^32 bytes), time= 84.2 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -5.6  p =1-1.1e-4   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x499285cd
length= 4.750 gigabytes (2^32.248 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -6.2  p =1-3.2e-5   mildly suspicious
  ...and 158 test result(s) without anomalies


real	1m41.023s
user	1m37.684s
sys	0m3.060s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd0c1aafb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd0c1aafb
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd0c1aafb
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd0c1aafb
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xd0c1aafb
length= 1 gigabyte (2^30 bytes), time= 22.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xd0c1aafb
length= 2 gigabytes (2^31 bytes), time= 43.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xd0c1aafb
length= 4 gigabytes (2^32 bytes), time= 83.4 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.4  p =1-1.1e-3   unusual          
  Gap-16:B                          R=  -6.1  p =1-4.4e-5   mildly suspicious
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd0c1aafb
length= 8 gigabytes (2^33 bytes), time= 169 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xd0c1aafb
length= 16 gigabytes (2^34 bytes), time= 348 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xd0c1aafb
length= 32 gigabytes (2^35 bytes), time= 702 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +6.7  p =  9.8e-5   mildly suspicious
  Gap-16:B                          R= +11.5  p =  9.4e-10   VERY SUSPICIOUS 
  ...and 178 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd0c1aafb
length= 45.250 gigabytes (2^35.500 bytes), time= 1002 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +9.9  p =  7.4e-7   very suspicious  
  Gap-16:B                          R= +17.4  p =  8.8e-15    FAIL !         
  ...and 182 test result(s) without anomalies


real	16m42.491s
user	16m10.840s
sys	0m28.920s
*/
