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
/// @created on 2019-12-18 01:26:33 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f8850336-d054-4f18-9d9d-af75565e230a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib15;
/* TEST00
time ./MRndCPP 
3554121773
1873483808
3750106390
1923839098
1902503333
3676173857
4611690707901127555

real	0m7.806s
user	0m7.792s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  |1043904783|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.00000000|  FAILED  
      diehard_operm5|   0|   1000000|     100|0.23364558|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.81359871|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.97476003|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.86824196|  PASSED  
        diehard_opso|   0|   2097152|     100|0.33427774|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.95917241|  PASSED  
         diehard_dna|   0|   2097152|     100|0.71763751|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.41303828|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.52591529|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.78081639|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.20256396|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.35842927|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.56491833|  PASSED  
        diehard_sums|   0|       100|     100|0.00551213|  PASSED  
        diehard_runs|   0|    100000|     100|0.93349904|  PASSED  
        diehard_runs|   0|    100000|     100|0.77321276|  PASSED  
       diehard_craps|   0|    200000|     100|0.04194784|  PASSED  
       diehard_craps|   0|    200000|     100|0.97936745|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.05110240|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.10517146|  PASSED  
         sts_monobit|   1|    100000|     100|0.47015548|  PASSED  
            sts_runs|   2|    100000|     100|0.79106222|  PASSED  
          sts_serial|   1|    100000|     100|0.89382447|  PASSED  
          sts_serial|   2|    100000|     100|0.96511485|  PASSED  
          sts_serial|   3|    100000|     100|0.97428247|  PASSED  
          sts_serial|   3|    100000|     100|0.82759514|  PASSED  
          sts_serial|   4|    100000|     100|0.70778022|  PASSED  
          sts_serial|   4|    100000|     100|0.98149216|  PASSED  
          sts_serial|   5|    100000|     100|0.26030591|  PASSED  
          sts_serial|   5|    100000|     100|0.07802074|  PASSED  
          sts_serial|   6|    100000|     100|0.58877393|  PASSED  
          sts_serial|   6|    100000|     100|0.49553146|  PASSED  
          sts_serial|   7|    100000|     100|0.46775991|  PASSED  
          sts_serial|   7|    100000|     100|0.78132936|  PASSED  
          sts_serial|   8|    100000|     100|0.54277807|  PASSED  
          sts_serial|   8|    100000|     100|0.88743466|  PASSED  
          sts_serial|   9|    100000|     100|0.85588141|  PASSED  
          sts_serial|   9|    100000|     100|0.49667353|  PASSED  
          sts_serial|  10|    100000|     100|0.26639604|  PASSED  
          sts_serial|  10|    100000|     100|0.86744581|  PASSED  
          sts_serial|  11|    100000|     100|0.88968983|  PASSED  
          sts_serial|  11|    100000|     100|0.65146441|  PASSED  
          sts_serial|  12|    100000|     100|0.76603696|  PASSED  
          sts_serial|  12|    100000|     100|0.96873277|  PASSED  
          sts_serial|  13|    100000|     100|0.75911960|  PASSED  
          sts_serial|  13|    100000|     100|0.72407174|  PASSED  
          sts_serial|  14|    100000|     100|0.66509442|  PASSED  
          sts_serial|  14|    100000|     100|0.96344707|  PASSED  
          sts_serial|  15|    100000|     100|0.30739460|  PASSED  
          sts_serial|  15|    100000|     100|0.70979305|  PASSED  
          sts_serial|  16|    100000|     100|0.43127184|  PASSED  
          sts_serial|  16|    100000|     100|0.94770991|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.62521706|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.11763621|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.81690820|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.89576729|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.30264265|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.82034471|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.90478971|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.86425179|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.99248580|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.29501504|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.50672044|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.48377941|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.29180166|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.66571657|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.99299572|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.31103260|  PASSED  
    rgb_permutations|   2|    100000|     100|0.57576469|  PASSED  
    rgb_permutations|   3|    100000|     100|0.46672033|  PASSED  
    rgb_permutations|   4|    100000|     100|0.22524646|  PASSED  
    rgb_permutations|   5|    100000|     100|0.56395145|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.83588873|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.61659876|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.35729372|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.92340030|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.41021874|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.56877758|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.79382093|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.72899529|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.93673474|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.46370679|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.98140413|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.37568880|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.32435188|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.85874788|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.42387005|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.81244320|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.05773318|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.96038059|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.61396465|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.98948646|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.14978912|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.82150546|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.60130745|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.60044481|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.32817630|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.17073740|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.86098664|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.11587003|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.29309580|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.17320201|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.98130758|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.80403454|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.93237558|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.30453431|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.07782672|  PASSED  
             dab_dct| 256|     50000|       1|0.01896379|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.22922666|  PASSED  
        dab_filltree|  32|  15000000|       1|0.54819463|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.57031829|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.55328516|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.88878502|  PASSED  

real	54m1.573s
user	50m8.392s
sys	3m46.788s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1610487f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1610487f
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-5,T)         R=  +8.5  p =  1.7e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1610487f
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +15.2  p =  1.3e-6   very suspicious  
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1610487f
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +34.6  p =  3.5e-16    FAIL !         
  ...and 131 test result(s) without anomalies


real	0m10.650s
user	0m10.320s
sys	0m0.320s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb60453f9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb60453f9
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb60453f9
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +12.8  p =  1.5e-5   suspicious       
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb60453f9
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +22.2  p =  2.6e-10   VERY SUSPICIOUS 
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb60453f9
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +42.6  p =  5.8e-20    FAIL !!        
  ...and 140 test result(s) without anomalies


real	0m20.164s
user	0m19.708s
sys	0m0.404s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe0c9fe96
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe0c9fe96
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xe0c9fe96
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +10.3  p =  1.8e-4   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe0c9fe96
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +23.8  p =  4.8e-11    FAIL           
  ...and 131 test result(s) without anomalies


real	0m10.599s
user	0m10.324s
sys	0m0.264s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5ebfe168
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5ebfe168
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5ebfe168
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R=  +8.1  p =  1.8e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5ebfe168
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +22.5  p =  1.9e-10   VERY SUSPICIOUS 
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5ebfe168
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +53.7  p =  3.3e-25    FAIL !!        
  [Low8/32]BCFN(2+3,13-3,T)         R= +17.1  p =  6.8e-8   very suspicious  
  ...and 139 test result(s) without anomalies


real	0m21.051s
user	0m20.536s
sys	0m0.492s
*/
