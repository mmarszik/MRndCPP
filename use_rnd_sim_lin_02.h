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
/// @created on 2019-12-08 03:01:54 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 3d0be239-049e-4082-b213-9b26bfc18ea2                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin02;
/* TEST00
time ./MRndCPP 
1889262655
331459241
3829589973
902451912
3434156384
458466171
18446726233165317956

real	0m13.936s
user	0m13.852s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.20e+07  | 985980713|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.15374884|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.89139277|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.24507388|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.92184330|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.72698737|  PASSED  
        diehard_opso|   0|   2097152|     100|0.45488328|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.75558500|  PASSED  
         diehard_dna|   0|   2097152|     100|0.56363035|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.44593347|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.40021659|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.77403241|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.73898689|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.88243052|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.20453312|  PASSED  
        diehard_sums|   0|       100|     100|0.02240955|  PASSED  
        diehard_runs|   0|    100000|     100|0.07054453|  PASSED  
        diehard_runs|   0|    100000|     100|0.74466215|  PASSED  
       diehard_craps|   0|    200000|     100|0.75331182|  PASSED  
       diehard_craps|   0|    200000|     100|0.80171930|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.54788042|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.86585062|  PASSED  
         sts_monobit|   1|    100000|     100|0.58113496|  PASSED  
            sts_runs|   2|    100000|     100|0.40564948|  PASSED  
          sts_serial|   1|    100000|     100|0.29582220|  PASSED  
          sts_serial|   2|    100000|     100|0.89518053|  PASSED  
          sts_serial|   3|    100000|     100|0.71806569|  PASSED  
          sts_serial|   3|    100000|     100|0.54147616|  PASSED  
          sts_serial|   4|    100000|     100|0.26813713|  PASSED  
          sts_serial|   4|    100000|     100|0.11214717|  PASSED  
          sts_serial|   5|    100000|     100|0.87596308|  PASSED  
          sts_serial|   5|    100000|     100|0.97241325|  PASSED  
          sts_serial|   6|    100000|     100|0.59498980|  PASSED  
          sts_serial|   6|    100000|     100|0.99917948|   WEAK   
          sts_serial|   7|    100000|     100|0.23332556|  PASSED  
          sts_serial|   7|    100000|     100|0.27761358|  PASSED  
          sts_serial|   8|    100000|     100|0.56315303|  PASSED  
          sts_serial|   8|    100000|     100|0.56718886|  PASSED  
          sts_serial|   9|    100000|     100|0.67713013|  PASSED  
          sts_serial|   9|    100000|     100|0.00353288|   WEAK   
          sts_serial|  10|    100000|     100|0.93921344|  PASSED  
          sts_serial|  10|    100000|     100|0.95906933|  PASSED  
          sts_serial|  11|    100000|     100|0.89442015|  PASSED  
          sts_serial|  11|    100000|     100|0.95748722|  PASSED  
          sts_serial|  12|    100000|     100|0.59945543|  PASSED  
          sts_serial|  12|    100000|     100|0.51753681|  PASSED  
          sts_serial|  13|    100000|     100|0.48055293|  PASSED  
          sts_serial|  13|    100000|     100|0.39250661|  PASSED  
          sts_serial|  14|    100000|     100|0.04673919|  PASSED  
          sts_serial|  14|    100000|     100|0.21095056|  PASSED  
          sts_serial|  15|    100000|     100|0.11689604|  PASSED  
          sts_serial|  15|    100000|     100|0.68979938|  PASSED  
          sts_serial|  16|    100000|     100|0.19851314|  PASSED  
          sts_serial|  16|    100000|     100|0.98287341|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.60071610|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.64476308|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.83131466|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.47450078|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.56541135|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.87583755|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.98041440|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.85338204|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.48788160|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.99936195|   WEAK   
         rgb_bitdist|  11|    100000|     100|0.93729833|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.46449678|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.07241541|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.44393005|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.68854946|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.32836137|  PASSED  
    rgb_permutations|   2|    100000|     100|0.08258210|  PASSED  
    rgb_permutations|   3|    100000|     100|0.63854646|  PASSED  
    rgb_permutations|   4|    100000|     100|0.75993663|  PASSED  
    rgb_permutations|   5|    100000|     100|0.40748868|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.01324384|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.29552621|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.39708937|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.30796357|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.09120445|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.03228796|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.47916897|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.86549490|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.14839150|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.90070023|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.80466005|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.20715861|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.55399754|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.62718214|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.11072926|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.01285356|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.77681257|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.97963828|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.09645726|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.99315985|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.78812886|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.61631445|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.59888128|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.69419358|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.38556893|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.21295915|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.52595158|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.20277535|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.54553442|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.97416771|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.27295169|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.94869955|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.58729124|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.06116078|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.01354357|  PASSED  
             dab_dct| 256|     50000|       1|0.83236500|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.80503047|  PASSED  
        dab_filltree|  32|  15000000|       1|0.29785128|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.31329724|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.65032179|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.22510926|  PASSED  

real	46m39.630s
user	42m21.592s
sys	4m4.748s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4bc383f0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4bc383f0
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4bc383f0
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4bc383f0
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  +4.5  p =  1.1e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4bc383f0
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +5.1  p =  8.7e-4   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  +8.0  p =  6.0e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:(1,14-1)     R=  +7.9  p =  1.0e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= +12.2  p =  6.9e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +23.8  p =  4.0e-10   VERY SUSPICIOUS 
  ...and 136 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4bc383f0
length= 2 gigabytes (2^31 bytes), time= 36.7 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  +5.1  p =  3.1e-4   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R= +13.0  p =  1.3e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R= +12.4  p =  4.2e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(2,14-1)     R=  +6.9  p =  7.8e-6   unusual          
  [Low1/32]FPF-14+6/16:(4,14-2)     R=  +8.1  p =  7.8e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= +21.6  p =  1.0e-19    FAIL !!        
  [Low1/32]FPF-14+6/16:all2         R= +81.2  p =  4.2e-31    FAIL !!!       
  ...and 141 test result(s) without anomalies


real	0m37.443s
user	0m36.400s
sys	0m0.888s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x45404b9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x45404b9
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x45404b9
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x45404b9
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x45404b9
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R= +15.1  p =  1.4e-13    FAIL           
  [Low1/32]FPF-14+6/16:all          R= +15.6  p =  3.8e-14    FAIL           
  [Low1/32]FPF-14+6/16:all2         R= +51.8  p =  5.2e-20    FAIL !!        
  ...and 138 test result(s) without anomalies


real	0m19.568s
user	0m19.068s
sys	0m0.408s
*/
