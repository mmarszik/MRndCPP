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
/// @created on 2019-12-08 02:58:30 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8158fed7-fa4c-4402-8961-e570927f3bc8                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib2a;
/* TEST00
time ./MRndCPP 
3655671857
3112833665
594534808
1954924846
3080878651
1703364130
51312158736848

real	0m31.478s
user	0m31.432s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.15e+07  | 229209992|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.97873169|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.79562047|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.25336977|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.50824700|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.26471565|  PASSED  
        diehard_opso|   0|   2097152|     100|0.69296747|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.83119106|  PASSED  
         diehard_dna|   0|   2097152|     100|0.16712737|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.58461432|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.11779092|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.77403241|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.71979754|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.27879292|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.21153315|  PASSED  
        diehard_sums|   0|       100|     100|0.00047639|   WEAK   
        diehard_runs|   0|    100000|     100|0.00546361|  PASSED  
        diehard_runs|   0|    100000|     100|0.83560448|  PASSED  
       diehard_craps|   0|    200000|     100|0.99858234|   WEAK   
       diehard_craps|   0|    200000|     100|0.55498196|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.48726398|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.03025947|  PASSED  
         sts_monobit|   1|    100000|     100|0.93512070|  PASSED  
            sts_runs|   2|    100000|     100|0.28644568|  PASSED  
          sts_serial|   1|    100000|     100|0.74845104|  PASSED  
          sts_serial|   2|    100000|     100|0.16007645|  PASSED  
          sts_serial|   3|    100000|     100|0.36230673|  PASSED  
          sts_serial|   3|    100000|     100|0.18143304|  PASSED  
          sts_serial|   4|    100000|     100|0.43214600|  PASSED  
          sts_serial|   4|    100000|     100|0.82308800|  PASSED  
          sts_serial|   5|    100000|     100|0.93163184|  PASSED  
          sts_serial|   5|    100000|     100|0.76108129|  PASSED  
          sts_serial|   6|    100000|     100|0.97367244|  PASSED  
          sts_serial|   6|    100000|     100|0.49187745|  PASSED  
          sts_serial|   7|    100000|     100|0.60410573|  PASSED  
          sts_serial|   7|    100000|     100|0.13392109|  PASSED  
          sts_serial|   8|    100000|     100|0.48035927|  PASSED  
          sts_serial|   8|    100000|     100|0.99016220|  PASSED  
          sts_serial|   9|    100000|     100|0.09954539|  PASSED  
          sts_serial|   9|    100000|     100|0.38998310|  PASSED  
          sts_serial|  10|    100000|     100|0.54915061|  PASSED  
          sts_serial|  10|    100000|     100|0.85393840|  PASSED  
          sts_serial|  11|    100000|     100|0.42125517|  PASSED  
          sts_serial|  11|    100000|     100|0.80195765|  PASSED  
          sts_serial|  12|    100000|     100|0.24790404|  PASSED  
          sts_serial|  12|    100000|     100|0.45932013|  PASSED  
          sts_serial|  13|    100000|     100|0.94967544|  PASSED  
          sts_serial|  13|    100000|     100|0.83676014|  PASSED  
          sts_serial|  14|    100000|     100|0.96898205|  PASSED  
          sts_serial|  14|    100000|     100|0.96565560|  PASSED  
          sts_serial|  15|    100000|     100|0.24171222|  PASSED  
          sts_serial|  15|    100000|     100|0.07334174|  PASSED  
          sts_serial|  16|    100000|     100|0.22734765|  PASSED  
          sts_serial|  16|    100000|     100|0.05033744|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.94899670|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.18110475|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.79062311|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.13192253|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.97727034|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.98676308|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.58105139|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.53390301|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.91340059|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.43729186|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.62541741|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.80163931|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.16004238|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.41411494|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.12022609|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.62210474|  PASSED  
    rgb_permutations|   2|    100000|     100|0.29968911|  PASSED  
    rgb_permutations|   3|    100000|     100|0.29692660|  PASSED  
    rgb_permutations|   4|    100000|     100|0.49120494|  PASSED  
    rgb_permutations|   5|    100000|     100|0.54860506|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.28775650|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.64910270|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.99902531|   WEAK   
      rgb_lagged_sum|   3|   1000000|     100|0.12428649|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.42204787|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.83028035|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.74128890|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.94603850|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.76528796|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.09268577|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.08200475|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.39016405|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.99299203|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.00750935|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.40432508|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.56312517|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.50506849|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.77013754|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.62790828|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.31411718|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.86324255|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.56994524|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.07597628|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.84040055|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.99746543|   WEAK   
      rgb_lagged_sum|  25|   1000000|     100|0.42090998|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.70905926|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.60736621|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.01960629|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.87961826|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.70192363|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.13206110|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.73057770|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.57307573|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.45162585|  PASSED  
             dab_dct| 256|     50000|       1|0.38060032|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.09361640|  PASSED  
        dab_filltree|  32|  15000000|       1|0.79636206|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.27672665|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.92812260|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.36875108|  PASSED  

real	50m54.728s
user	46m59.812s
sys	3m46.808s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe2f2432f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe2f2432f
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-4,T)         R=  -6.2  p =1-1.9e-3   unusual          
  [Low1/32]BCFN(2+1,13-6,T)         R=  -5.6  p =1-1.5e-3   unusual          
  [Low1/32]BCFN(2+2,13-6,T)         R= +10.2  p =  6.5e-4   unusual          
  ...and 114 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe2f2432f
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R= +23.6  p =  1.6e-8    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+3,13-6,T)         R= +12.6  p =  9.4e-5   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe2f2432f
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-5,T)         R= +40.2  p =  6.3e-16    FAIL !         
  [Low1/32]BCFN(2+3,13-5,T)         R= +18.7  p =  1.6e-7   very suspicious  
  ...and 130 test result(s) without anomalies


real	0m12.834s
user	0m12.484s
sys	0m0.312s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb55e83f6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb55e83f6
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R= +18.5  p =  9.0e-7   very suspicious  
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb55e83f6
length= 256 megabytes (2^28 bytes), time= 6.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R= +27.7  p =  6.2e-10   VERY SUSPICIOUS 
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb55e83f6
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-5,T)         R= +44.6  p =  1.2e-17    FAIL !         
  [Low1/32]BCFN(2+3,13-5,T)         R= +16.4  p =  1.3e-6   suspicious       
  ...and 130 test result(s) without anomalies


real	0m12.834s
user	0m12.504s
sys	0m0.220s
*/
