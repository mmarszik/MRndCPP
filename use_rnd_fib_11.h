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
/// @created on 2019-12-18 01:25:54 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5b34f065-7a71-408b-8ae8-978990a405e6                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib11;
/* TEST00
time ./MRndCPP 
2420956456
234096460
564783247
426462383
1445233622
160161046
4611680920452394509

real	0m7.835s
user	0m7.804s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  |1016747592|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.93565504|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.42010896|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.87114217|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.37467701|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.99991127|   WEAK   
        diehard_opso|   0|   2097152|     100|0.25833441|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.03578585|  PASSED  
         diehard_dna|   0|   2097152|     100|0.42106059|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.66997686|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.22542705|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.15982204|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.24947722|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.67012143|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.36795619|  PASSED  
        diehard_sums|   0|       100|     100|0.00114017|   WEAK   
        diehard_runs|   0|    100000|     100|0.34177001|  PASSED  
        diehard_runs|   0|    100000|     100|0.79010401|  PASSED  
       diehard_craps|   0|    200000|     100|0.36340441|  PASSED  
       diehard_craps|   0|    200000|     100|0.09301648|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.80500988|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99947302|   WEAK   
         sts_monobit|   1|    100000|     100|0.28469555|  PASSED  
            sts_runs|   2|    100000|     100|0.42591022|  PASSED  
          sts_serial|   1|    100000|     100|0.01376447|  PASSED  
          sts_serial|   2|    100000|     100|0.19251979|  PASSED  
          sts_serial|   3|    100000|     100|0.26600363|  PASSED  
          sts_serial|   3|    100000|     100|0.69092675|  PASSED  
          sts_serial|   4|    100000|     100|0.77186566|  PASSED  
          sts_serial|   4|    100000|     100|0.29897328|  PASSED  
          sts_serial|   5|    100000|     100|0.42721726|  PASSED  
          sts_serial|   5|    100000|     100|0.52414946|  PASSED  
          sts_serial|   6|    100000|     100|0.93010138|  PASSED  
          sts_serial|   6|    100000|     100|0.64968962|  PASSED  
          sts_serial|   7|    100000|     100|0.83818006|  PASSED  
          sts_serial|   7|    100000|     100|0.98931123|  PASSED  
          sts_serial|   8|    100000|     100|0.93058067|  PASSED  
          sts_serial|   8|    100000|     100|0.91006578|  PASSED  
          sts_serial|   9|    100000|     100|0.38379965|  PASSED  
          sts_serial|   9|    100000|     100|0.64879987|  PASSED  
          sts_serial|  10|    100000|     100|0.53193100|  PASSED  
          sts_serial|  10|    100000|     100|0.53245112|  PASSED  
          sts_serial|  11|    100000|     100|0.70284413|  PASSED  
          sts_serial|  11|    100000|     100|0.38088400|  PASSED  
          sts_serial|  12|    100000|     100|0.15840117|  PASSED  
          sts_serial|  12|    100000|     100|0.94614056|  PASSED  
          sts_serial|  13|    100000|     100|0.94055675|  PASSED  
          sts_serial|  13|    100000|     100|0.38383387|  PASSED  
          sts_serial|  14|    100000|     100|0.62505243|  PASSED  
          sts_serial|  14|    100000|     100|0.94614766|  PASSED  
          sts_serial|  15|    100000|     100|0.26211150|  PASSED  
          sts_serial|  15|    100000|     100|0.16755803|  PASSED  
          sts_serial|  16|    100000|     100|0.44108034|  PASSED  
          sts_serial|  16|    100000|     100|0.95531161|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.91987223|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.55627648|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.70204854|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.82939799|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.15366339|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.07885488|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.00186147|   WEAK   
         rgb_bitdist|   8|    100000|     100|0.04894479|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.10040385|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.57470516|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.51650559|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.87505532|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.81101690|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.69027262|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.13031345|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.28321613|  PASSED  
    rgb_permutations|   2|    100000|     100|0.97223880|  PASSED  
    rgb_permutations|   3|    100000|     100|0.61201598|  PASSED  
    rgb_permutations|   4|    100000|     100|0.80566042|  PASSED  
    rgb_permutations|   5|    100000|     100|0.88749369|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.37684752|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.99169229|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.96836010|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.91494727|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.60974674|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.62591020|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.10688822|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.35116946|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.99125890|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.35021017|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.29254138|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.76308672|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.67469445|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.88363583|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.08264695|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.77809246|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.85422155|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.44134825|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.56780322|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.86020506|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.99730695|   WEAK   
      rgb_lagged_sum|  21|   1000000|     100|0.59240836|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.76183011|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.95508228|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.13243060|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.49820129|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.55378066|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.10987676|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.72451085|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.44967635|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.88062475|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.12360731|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.57267181|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.33922734|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.10304123|  PASSED  
             dab_dct| 256|     50000|       1|0.16671011|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.49390062|  PASSED  
        dab_filltree|  32|  15000000|       1|0.90276098|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.48272723|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.30252784|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.51562183|  PASSED  

real	49m44.680s
user	46m5.596s
sys	3m30.888s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x711361cd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x711361cd
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x711361cd
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x711361cd
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x711361cd
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x711361cd
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +24.5  p =  2.2e-11    FAIL           
  ...and 147 test result(s) without anomalies


real	0m38.205s
user	0m37.228s
sys	0m0.836s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xad33aaaf
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xad33aaaf
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xad33aaaf
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xad33aaaf
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xad33aaaf
length= 1 gigabyte (2^30 bytes), time= 19.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +15.1  p =  1.4e-6   very suspicious  
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xad33aaaf
length= 2 gigabytes (2^31 bytes), time= 37.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +29.6  p =  8.0e-14    FAIL           
  ...and 147 test result(s) without anomalies


real	0m38.651s
user	0m37.588s
sys	0m0.972s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbdf35b24
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbdf35b24
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xbdf35b24
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -3.7  p =1-1.8e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbdf35b24
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xbdf35b24
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +10.4  p =  1.7e-4   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbdf35b24
length= 2 gigabytes (2^31 bytes), time= 37.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +30.1  p =  4.7e-14    FAIL           
  ...and 147 test result(s) without anomalies


real	0m38.388s
user	0m37.360s
sys	0m0.868s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x95cfcf8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x95cfcf8
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x95cfcf8
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x95cfcf8
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x95cfcf8
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +10.1  p =  9.5e-5   mildly suspicious
  [Low1/32]BCFN(2+0,13-4,T)         R= +10.4  p =  1.7e-4   mildly suspicious
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x95cfcf8
length= 2 gigabytes (2^31 bytes), time= 37.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +27.8  p =  5.7e-13    FAIL           
  ...and 147 test result(s) without anomalies


real	0m38.569s
user	0m37.632s
sys	0m0.844s
*/
