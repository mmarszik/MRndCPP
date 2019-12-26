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
/// @created on 2019-12-08 03:11:45 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 9367a3f6-6dbc-4085-ada6-9e68e543e3a7                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sfib.h"

using TRnd = RndSFib0;
/* TEST00
time ./MRndCPP 
1709448209
2412023039
3605789886
2820342608
3057952285
1386997744
4611654761539156391

real	0m6.895s
user	0m6.872s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.16e+07  |4234609304|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.28355967|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.80979805|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.67392142|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.60361400|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.37183418|  PASSED  
        diehard_opso|   0|   2097152|     100|0.15276843|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.47248670|  PASSED  
         diehard_dna|   0|   2097152|     100|0.17500197|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.55987434|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.26836479|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.02042411|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.80710877|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.23337868|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.62593661|  PASSED  
        diehard_sums|   0|       100|     100|0.02949997|  PASSED  
        diehard_runs|   0|    100000|     100|0.53382102|  PASSED  
        diehard_runs|   0|    100000|     100|0.97530466|  PASSED  
       diehard_craps|   0|    200000|     100|0.54792102|  PASSED  
       diehard_craps|   0|    200000|     100|0.28245651|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.51197396|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.18493074|  PASSED  
         sts_monobit|   1|    100000|     100|0.38584136|  PASSED  
            sts_runs|   2|    100000|     100|0.91178026|  PASSED  
          sts_serial|   1|    100000|     100|0.93964199|  PASSED  
          sts_serial|   2|    100000|     100|0.36947293|  PASSED  
          sts_serial|   3|    100000|     100|0.41257382|  PASSED  
          sts_serial|   3|    100000|     100|0.92215253|  PASSED  
          sts_serial|   4|    100000|     100|0.47756161|  PASSED  
          sts_serial|   4|    100000|     100|0.37585514|  PASSED  
          sts_serial|   5|    100000|     100|0.82426934|  PASSED  
          sts_serial|   5|    100000|     100|0.97553346|  PASSED  
          sts_serial|   6|    100000|     100|0.33854408|  PASSED  
          sts_serial|   6|    100000|     100|0.10249328|  PASSED  
          sts_serial|   7|    100000|     100|0.98938301|  PASSED  
          sts_serial|   7|    100000|     100|0.62987641|  PASSED  
          sts_serial|   8|    100000|     100|0.62639301|  PASSED  
          sts_serial|   8|    100000|     100|0.21416306|  PASSED  
          sts_serial|   9|    100000|     100|0.16764444|  PASSED  
          sts_serial|   9|    100000|     100|0.08401812|  PASSED  
          sts_serial|  10|    100000|     100|0.87078242|  PASSED  
          sts_serial|  10|    100000|     100|0.59623667|  PASSED  
          sts_serial|  11|    100000|     100|0.93038302|  PASSED  
          sts_serial|  11|    100000|     100|0.26198185|  PASSED  
          sts_serial|  12|    100000|     100|0.56783038|  PASSED  
          sts_serial|  12|    100000|     100|0.15110534|  PASSED  
          sts_serial|  13|    100000|     100|0.71408388|  PASSED  
          sts_serial|  13|    100000|     100|0.26745483|  PASSED  
          sts_serial|  14|    100000|     100|0.21719095|  PASSED  
          sts_serial|  14|    100000|     100|0.07958678|  PASSED  
          sts_serial|  15|    100000|     100|0.19676233|  PASSED  
          sts_serial|  15|    100000|     100|0.79069437|  PASSED  
          sts_serial|  16|    100000|     100|0.31905104|  PASSED  
          sts_serial|  16|    100000|     100|0.21682460|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.64566335|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.48050726|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.17865902|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.22157394|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.99495012|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.92525785|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.79682308|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.02330499|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.56258194|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.34135758|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.08472289|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.31843898|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.46894405|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.36639327|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.60301447|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.49101950|  PASSED  
    rgb_permutations|   2|    100000|     100|0.63677589|  PASSED  
    rgb_permutations|   3|    100000|     100|0.10880228|  PASSED  
    rgb_permutations|   4|    100000|     100|0.33036716|  PASSED  
    rgb_permutations|   5|    100000|     100|0.62151152|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.18531429|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.85420961|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.63006620|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.54915005|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.29202969|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.97684118|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.35012599|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.44679938|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.67445996|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.29440408|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.99810378|   WEAK   
      rgb_lagged_sum|  11|   1000000|     100|0.44977883|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.50147422|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.28623239|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.87901968|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.58755818|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.78331916|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.90404108|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.65807181|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.88827735|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.01877702|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.66443054|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.65930555|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.90695201|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.69595285|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.31678008|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.75871850|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.07761902|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.91058930|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.23295383|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.51370544|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.27124007|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.48099210|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.16738320|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.06119161|  PASSED  
             dab_dct| 256|     50000|       1|0.97353623|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.53843317|  PASSED  
        dab_filltree|  32|  15000000|       1|0.87983442|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.16033578|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.45149212|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.36962437|  PASSED  

real	47m45.933s
user	43m48.240s
sys	3m51.580s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb028866d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb028866d
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb028866d
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.3  p =  1.5e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb028866d
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb028866d
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.1  p =1-1.9e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb028866d
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb028866d
length= 4 gigabytes (2^32 bytes), time= 73.4 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +7.4  p =  1.8e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb028866d
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.275s
user	1m41.596s
sys	0m2.360s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1d267e8e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1d267e8e
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x1d267e8e
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x1d267e8e
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x1d267e8e
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x1d267e8e
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x1d267e8e
length= 4 gigabytes (2^32 bytes), time= 71.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x1d267e8e
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +4.5  p = 0.012     unusual          
  ...and 159 test result(s) without anomalies


real	1m44.892s
user	1m42.288s
sys	0m2.432s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xcf7c47fc
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xcf7c47fc
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xcf7c47fc
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xcf7c47fc
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xcf7c47fc
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xcf7c47fc
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xcf7c47fc
length= 4 gigabytes (2^32 bytes), time= 75.5 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  -6.8  p =1-1.9e-3   unusual          
  DC6-9x1Bytes-1                    R=  +5.6  p =  4.4e-3   unusual          
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0xcf7c47fc
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m42.074s
user	1m39.556s
sys	0m2.228s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf35dc393
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf35dc393
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf35dc393
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf35dc393
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf35dc393
length= 1 gigabyte (2^30 bytes), time= 20.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf35dc393
length= 2 gigabytes (2^31 bytes), time= 38.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf35dc393
length= 4 gigabytes (2^32 bytes), time= 74.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xf35dc393
length= 8 gigabytes (2^33 bytes), time= 153 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xf35dc393
length= 16 gigabytes (2^34 bytes), time= 308 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xf35dc393
length= 32 gigabytes (2^35 bytes), time= 611 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-1,T)         R=  -6.8  p =1-1.8e-3   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf35dc393
length= 64 gigabytes (2^36 bytes), time= 1233 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xf35dc393
length= 128 gigabytes (2^37 bytes), time= 2464 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xf35dc393
length= 187.750 gigabytes (2^37.553 bytes), time= 3602 seconds
  no anomalies in 201 test result(s)


real	60m2.802s
user	58m34.396s
sys	1m19.732s
*/
