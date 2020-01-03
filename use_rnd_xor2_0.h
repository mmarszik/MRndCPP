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
/// @created on 2019-12-08 03:02:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 9b7aaf86-1d29-4847-bcea-031ec630c093                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_xor2.h"
#include "rnd_mlin.h"

using TRnd = RndXor2<RndMLin,1181,1429>;
/* TEST00
time ./MRndCPP 
4249602770
389648141
3224131891
414076210
3947925800
110822653
18446520816831139261

real	0m21.951s
user	0m21.928s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.34e+07  |2429941506|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.60056077|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.07126386|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.54854691|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.92126875|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.18003288|  PASSED  
        diehard_opso|   0|   2097152|     100|0.99992869|   WEAK   
        diehard_oqso|   0|   2097152|     100|0.68763195|  PASSED  
         diehard_dna|   0|   2097152|     100|0.04783664|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.28794814|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.13905444|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.13090839|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.50482120|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.87952299|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.72451662|  PASSED  
        diehard_sums|   0|       100|     100|0.11141861|  PASSED  
        diehard_runs|   0|    100000|     100|0.51694393|  PASSED  
        diehard_runs|   0|    100000|     100|0.97855956|  PASSED  
       diehard_craps|   0|    200000|     100|0.66412946|  PASSED  
       diehard_craps|   0|    200000|     100|0.58695788|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.06213148|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.22267120|  PASSED  
         sts_monobit|   1|    100000|     100|0.98361296|  PASSED  
            sts_runs|   2|    100000|     100|0.75304016|  PASSED  
          sts_serial|   1|    100000|     100|0.76257429|  PASSED  
          sts_serial|   2|    100000|     100|0.63665069|  PASSED  
          sts_serial|   3|    100000|     100|0.85490463|  PASSED  
          sts_serial|   3|    100000|     100|0.04210031|  PASSED  
          sts_serial|   4|    100000|     100|0.36468479|  PASSED  
          sts_serial|   4|    100000|     100|0.95813781|  PASSED  
          sts_serial|   5|    100000|     100|0.73489477|  PASSED  
          sts_serial|   5|    100000|     100|0.47485116|  PASSED  
          sts_serial|   6|    100000|     100|0.76654081|  PASSED  
          sts_serial|   6|    100000|     100|0.03843063|  PASSED  
          sts_serial|   7|    100000|     100|0.93640986|  PASSED  
          sts_serial|   7|    100000|     100|0.57153854|  PASSED  
          sts_serial|   8|    100000|     100|0.93414178|  PASSED  
          sts_serial|   8|    100000|     100|0.96962259|  PASSED  
          sts_serial|   9|    100000|     100|0.97127271|  PASSED  
          sts_serial|   9|    100000|     100|0.90901410|  PASSED  
          sts_serial|  10|    100000|     100|0.89174933|  PASSED  
          sts_serial|  10|    100000|     100|0.94666301|  PASSED  
          sts_serial|  11|    100000|     100|0.71702793|  PASSED  
          sts_serial|  11|    100000|     100|0.26589053|  PASSED  
          sts_serial|  12|    100000|     100|0.84918275|  PASSED  
          sts_serial|  12|    100000|     100|0.70751893|  PASSED  
          sts_serial|  13|    100000|     100|0.98116090|  PASSED  
          sts_serial|  13|    100000|     100|0.79482228|  PASSED  
          sts_serial|  14|    100000|     100|0.41259688|  PASSED  
          sts_serial|  14|    100000|     100|0.71178384|  PASSED  
          sts_serial|  15|    100000|     100|0.92401424|  PASSED  
          sts_serial|  15|    100000|     100|0.98795670|  PASSED  
          sts_serial|  16|    100000|     100|0.72165609|  PASSED  
          sts_serial|  16|    100000|     100|0.97192215|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.46292000|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.74483230|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.96394589|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.14104221|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.38788031|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.75862501|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.44185114|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.99326636|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.56576831|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.40021429|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.08092072|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.54172264|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.99776497|   WEAK   
rgb_minimum_distance|   3|     10000|    1000|0.06660308|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.82350269|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.94046319|  PASSED  
    rgb_permutations|   2|    100000|     100|0.65681192|  PASSED  
    rgb_permutations|   3|    100000|     100|0.28772445|  PASSED  
    rgb_permutations|   4|    100000|     100|0.44654009|  PASSED  
    rgb_permutations|   5|    100000|     100|0.50271818|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.59720418|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.02253497|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.69657840|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.42040216|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.97032642|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.81082972|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.65427130|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.50029513|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.63235258|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.51460122|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.93821341|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.56689098|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.19306816|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.30164166|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.85262075|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.13329248|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.26418848|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.85177187|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.30754093|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.63477719|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.75925785|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.59850419|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.30387371|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.51517766|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.79794885|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.20666710|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.94724752|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.06360428|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.04503927|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.91642370|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.00522648|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.21871298|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.03657981|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.15400141|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.99649173|   WEAK   
             dab_dct| 256|     50000|       1|0.07134221|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.87077966|  PASSED  
        dab_filltree|  32|  15000000|       1|0.07459010|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.35792496|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.04588018|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.97148224|  PASSED  

real	46m32.696s
user	42m51.092s
sys	3m38.828s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8aaf7193
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8aaf7193
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R= +77.7  p =  1.0e-65    FAIL !!!!      
  Gap-16:B                          R= +38.6  p =  6.4e-31    FAIL !!!       
  [Low8/32]Gap-16:A                 R= +65.8  p =  1.6e-53    FAIL !!!!      
  [Low8/32]Gap-16:B                 R= +22.8  p =  8.5e-19    FAIL !         
  [Low1/32]Gap-16:A                 R= +11.3  p =  1.1e-8    VERY SUSPICIOUS 
  ...and 112 test result(s) without anomalies


real	0m2.886s
user	0m2.700s
sys	0m0.180s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5d2b64b3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5d2b64b3
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R= +59.8  p =  1.8e-50    FAIL !!!!      
  Gap-16:B                          R= +27.8  p =  2.7e-22    FAIL !!        
  [Low8/32]Gap-16:A                 R= +62.4  p =  1.1e-50    FAIL !!!!      
  [Low8/32]Gap-16:B                 R= +19.2  p =  8.2e-16    FAIL !         
  [Low1/32]Gap-16:A                 R=  +6.0  p =  2.1e-4   mildly suspicious
  ...and 112 test result(s) without anomalies


real	0m2.793s
user	0m2.692s
sys	0m0.096s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x10ebb55e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x10ebb55e
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R= +60.7  p =  3.1e-51    FAIL !!!!      
  Gap-16:B                          R= +23.1  p =  1.4e-18    FAIL !         
  [Low8/32]Gap-16:A                 R= +69.6  p =  1.3e-56    FAIL !!!!      
  [Low8/32]Gap-16:B                 R= +17.0  p =  5.1e-14    FAIL           
  [Low1/32]Gap-16:A                 R=  +5.7  p =  3.4e-4   unusual          
  ...and 112 test result(s) without anomalies


real	0m2.821s
user	0m2.740s
sys	0m0.072s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x67b861bd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x67b861bd
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R= +65.7  p =  1.8e-55    FAIL !!!!      
  Gap-16:B                          R= +27.7  p =  3.6e-22    FAIL !!        
  [Low8/32]Gap-16:A                 R= +57.3  p =  1.6e-46    FAIL !!!       
  [Low8/32]Gap-16:B                 R= +16.7  p =  9.7e-14    FAIL           
  [Low1/32]DC6-9x1Bytes-1           R=  +5.3  p =  9.2e-3   unusual          
  [Low1/32]Gap-16:A                 R= +11.7  p =  5.8e-9    VERY SUSPICIOUS 
  ...and 111 test result(s) without anomalies


real	0m2.802s
user	0m2.708s
sys	0m0.088s
*/
