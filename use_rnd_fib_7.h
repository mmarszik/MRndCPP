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
/// @created on 2019-12-18 01:28:04 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f90f9f09-ef81-475b-b1cc-cb9ec212bf0e                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib7;
/* TEST00
time ./MRndCPP 
1416651896
4037567296
2502127023
3164126904
1225991846
4293278210
4611660931824321601

real	0m7.843s
user	0m7.788s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.13e+07  | 745681307|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.94561895|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.17426281|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.69254469|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.36809531|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.87596200|  PASSED  
        diehard_opso|   0|   2097152|     100|0.27501735|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.02989144|  PASSED  
         diehard_dna|   0|   2097152|     100|0.28968733|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.55011537|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.93782738|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.93422463|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.32765717|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.99936718|   WEAK   
     diehard_squeeze|   0|    100000|     100|0.75273012|  PASSED  
        diehard_sums|   0|       100|     100|0.06030530|  PASSED  
        diehard_runs|   0|    100000|     100|0.11780757|  PASSED  
        diehard_runs|   0|    100000|     100|0.56336341|  PASSED  
       diehard_craps|   0|    200000|     100|0.48856973|  PASSED  
       diehard_craps|   0|    200000|     100|0.60304087|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.93553349|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.77939603|  PASSED  
         sts_monobit|   1|    100000|     100|0.64701708|  PASSED  
            sts_runs|   2|    100000|     100|0.49294155|  PASSED  
          sts_serial|   1|    100000|     100|0.50924475|  PASSED  
          sts_serial|   2|    100000|     100|0.78059118|  PASSED  
          sts_serial|   3|    100000|     100|0.62305301|  PASSED  
          sts_serial|   3|    100000|     100|0.74182223|  PASSED  
          sts_serial|   4|    100000|     100|0.37136957|  PASSED  
          sts_serial|   4|    100000|     100|0.66966874|  PASSED  
          sts_serial|   5|    100000|     100|0.33556204|  PASSED  
          sts_serial|   5|    100000|     100|0.02599858|  PASSED  
          sts_serial|   6|    100000|     100|0.27826854|  PASSED  
          sts_serial|   6|    100000|     100|0.96145918|  PASSED  
          sts_serial|   7|    100000|     100|0.30631454|  PASSED  
          sts_serial|   7|    100000|     100|0.26303552|  PASSED  
          sts_serial|   8|    100000|     100|0.67112859|  PASSED  
          sts_serial|   8|    100000|     100|0.80658095|  PASSED  
          sts_serial|   9|    100000|     100|0.62324740|  PASSED  
          sts_serial|   9|    100000|     100|0.61137333|  PASSED  
          sts_serial|  10|    100000|     100|0.62213533|  PASSED  
          sts_serial|  10|    100000|     100|0.08915587|  PASSED  
          sts_serial|  11|    100000|     100|0.06019633|  PASSED  
          sts_serial|  11|    100000|     100|0.13477358|  PASSED  
          sts_serial|  12|    100000|     100|0.09398521|  PASSED  
          sts_serial|  12|    100000|     100|0.74804106|  PASSED  
          sts_serial|  13|    100000|     100|0.89640298|  PASSED  
          sts_serial|  13|    100000|     100|0.88562721|  PASSED  
          sts_serial|  14|    100000|     100|0.64819322|  PASSED  
          sts_serial|  14|    100000|     100|0.94965766|  PASSED  
          sts_serial|  15|    100000|     100|0.89570969|  PASSED  
          sts_serial|  15|    100000|     100|0.95501809|  PASSED  
          sts_serial|  16|    100000|     100|0.85670860|  PASSED  
          sts_serial|  16|    100000|     100|0.74996141|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.94636511|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.61590570|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.39235244|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.66329018|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.58485366|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.48979718|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.52504403|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.30607949|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.99592181|   WEAK   
         rgb_bitdist|  10|    100000|     100|0.96927697|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.50664206|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.90746883|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.72940501|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.09836674|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.29322244|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.27654688|  PASSED  
    rgb_permutations|   2|    100000|     100|0.19401946|  PASSED  
    rgb_permutations|   3|    100000|     100|0.08781862|  PASSED  
    rgb_permutations|   4|    100000|     100|0.28127485|  PASSED  
    rgb_permutations|   5|    100000|     100|0.81026915|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.54014458|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.16451492|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.42461913|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.71976911|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.83823714|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.66639681|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.71428525|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.60113122|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.68416315|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.46148885|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.77321684|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.23294558|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.28791664|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.42946064|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.83895815|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.91420285|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.24130739|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.87527629|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.63581968|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.81359559|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.72860795|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.40230831|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.93673911|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.99410995|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.07439905|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.42386535|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.75849894|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.62572546|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.24284212|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.68024767|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.54935572|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.30450055|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.98347698|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.64273929|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.58191184|  PASSED  
             dab_dct| 256|     50000|       1|0.07168406|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.86090501|  PASSED  
        dab_filltree|  32|  15000000|       1|0.95235762|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.54884833|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.52869180|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.36197727|  PASSED  

real	54m25.431s
user	50m53.624s
sys	3m24.764s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbdb87c12
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbdb87c12
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-6,T)         R=+317.9  p =  2.7e-109   FAIL !!!!!     
  [Low1/32]BCFN(2+1,13-6,T)         R=+152.3  p =  1.3e-52    FAIL !!!!      
  [Low1/32]BCFN(2+3,13-6,T)         R= +22.6  p =  3.7e-8   very suspicious  
  [Low1/32]BCFN(2+5,13-8,T)         R= +15.6  p =  6.6e-5   unusual          
  ...and 113 test result(s) without anomalies


real	0m2.933s
user	0m2.756s
sys	0m0.156s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe1bc6e0b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe1bc6e0b
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-6,T)         R=+330.0  p =  1.8e-113   FAIL !!!!!     
  [Low1/32]BCFN(2+1,13-6,T)         R=+199.7  p =  8.1e-69    FAIL !!!!      
  ...and 115 test result(s) without anomalies


real	0m3.009s
user	0m2.940s
sys	0m0.060s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8697be74
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8697be74
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-6,T)         R=+316.3  p =  9.2e-109   FAIL !!!!!     
  [Low1/32]BCFN(2+1,13-6,T)         R=+173.5  p =  7.3e-60    FAIL !!!!      
  [Low1/32]BCFN(2+3,13-6,T)         R= +28.4  p =  3.6e-10   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+4,13-7,T)         R= +25.3  p =  3.0e-8   very suspicious  
  [Low1/32]BCFN(2+5,13-8,T)         R= +13.4  p =  2.6e-4   unusual          
  ...and 112 test result(s) without anomalies


real	0m2.867s
user	0m2.784s
sys	0m0.080s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4503eb55
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4503eb55
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-6,T)         R=+290.9  p =  4.5e-100   FAIL !!!!!     
  [Low1/32]BCFN(2+1,13-6,T)         R=+155.3  p =  1.3e-53    FAIL !!!!      
  [Low1/32]BCFN(2+3,13-6,T)         R= +10.0  p =  7.1e-4   unusual          
  ...and 114 test result(s) without anomalies


real	0m2.887s
user	0m2.768s
sys	0m0.084s
*/
