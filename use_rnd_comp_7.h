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
/// @created on 2019-12-08 02:57:13 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token dc59c4c5-12be-4f49-bab5-5c77725f3e2a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_lin.h"

using TRnd = RndComp< RndLin2, RndLin2, 7 >;

/* TEST00
time ./MRndCPP 
840932236
52608534
2736526188
1716577654
15303960
3703642652
4611570917512308084

real	0m15.873s
user	0m15.856s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.77e+07  |3264098517|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.48883867|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.15599758|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.99314241|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.32519867|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.24585653|  PASSED  
        diehard_opso|   0|   2097152|     100|0.97485622|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.88934898|  PASSED  
         diehard_dna|   0|   2097152|     100|0.13824821|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.53629898|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.96092055|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.25399711|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.86008599|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.72321026|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.38406233|  PASSED  
        diehard_sums|   0|       100|     100|0.57831361|  PASSED  
        diehard_runs|   0|    100000|     100|0.52838672|  PASSED  
        diehard_runs|   0|    100000|     100|0.20588894|  PASSED  
       diehard_craps|   0|    200000|     100|0.85083583|  PASSED  
       diehard_craps|   0|    200000|     100|0.42124869|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.36659509|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.96182033|  PASSED  
         sts_monobit|   1|    100000|     100|0.67473448|  PASSED  
            sts_runs|   2|    100000|     100|0.84603741|  PASSED  
          sts_serial|   1|    100000|     100|0.74088369|  PASSED  
          sts_serial|   2|    100000|     100|0.85232972|  PASSED  
          sts_serial|   3|    100000|     100|0.84976808|  PASSED  
          sts_serial|   3|    100000|     100|0.91590746|  PASSED  
          sts_serial|   4|    100000|     100|0.06640304|  PASSED  
          sts_serial|   4|    100000|     100|0.23744022|  PASSED  
          sts_serial|   5|    100000|     100|0.36062004|  PASSED  
          sts_serial|   5|    100000|     100|0.42759397|  PASSED  
          sts_serial|   6|    100000|     100|0.13854122|  PASSED  
          sts_serial|   6|    100000|     100|0.86945292|  PASSED  
          sts_serial|   7|    100000|     100|0.18257429|  PASSED  
          sts_serial|   7|    100000|     100|0.88882687|  PASSED  
          sts_serial|   8|    100000|     100|0.18113879|  PASSED  
          sts_serial|   8|    100000|     100|0.55742898|  PASSED  
          sts_serial|   9|    100000|     100|0.45750585|  PASSED  
          sts_serial|   9|    100000|     100|0.95423358|  PASSED  
          sts_serial|  10|    100000|     100|0.42629797|  PASSED  
          sts_serial|  10|    100000|     100|0.76127109|  PASSED  
          sts_serial|  11|    100000|     100|0.62563939|  PASSED  
          sts_serial|  11|    100000|     100|0.53143327|  PASSED  
          sts_serial|  12|    100000|     100|0.43964281|  PASSED  
          sts_serial|  12|    100000|     100|0.80945784|  PASSED  
          sts_serial|  13|    100000|     100|0.63478788|  PASSED  
          sts_serial|  13|    100000|     100|0.97336824|  PASSED  
          sts_serial|  14|    100000|     100|0.56121954|  PASSED  
          sts_serial|  14|    100000|     100|0.97843458|  PASSED  
          sts_serial|  15|    100000|     100|0.23058469|  PASSED  
          sts_serial|  15|    100000|     100|0.74020006|  PASSED  
          sts_serial|  16|    100000|     100|0.59795673|  PASSED  
          sts_serial|  16|    100000|     100|0.16527314|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.60338804|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.67991143|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.73734835|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.35904547|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.23408078|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.54608292|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.74211401|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.82077694|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.41587372|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.04657213|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.07562002|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.00152344|   WEAK   
rgb_minimum_distance|   2|     10000|    1000|0.83840728|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.57424469|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.83423453|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.85568311|  PASSED  
    rgb_permutations|   2|    100000|     100|0.89938874|  PASSED  
    rgb_permutations|   3|    100000|     100|0.90324998|  PASSED  
    rgb_permutations|   4|    100000|     100|0.92786490|  PASSED  
    rgb_permutations|   5|    100000|     100|0.08114366|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.09322552|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.15788928|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.92928811|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.97457713|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.96138626|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.43992141|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.11535619|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.67899570|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.46056489|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.71033668|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.21996016|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.14821351|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.47588143|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.47047584|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.02789360|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.47327273|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.96700200|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.74065327|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.84220656|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.31156656|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.87104443|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.35434257|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.07334339|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.10739319|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.41729546|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.76989128|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.33920595|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.61866345|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.95561532|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.54964524|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.86071235|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.64619756|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.29539557|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.59322930|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.81168310|  PASSED  
             dab_dct| 256|     50000|       1|0.90661438|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.51803910|  PASSED  
        dab_filltree|  32|  15000000|       1|0.31480970|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.06180879|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.43795637|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.99029580|  PASSED  

real	53m58.074s
user	50m12.112s
sys	3m36.696s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x194fbb0f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x194fbb0f
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x194fbb0f
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.1  p = 0.011     unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x194fbb0f
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x194fbb0f
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x194fbb0f
length= 2 gigabytes (2^31 bytes), time= 40.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-1,T)         R=  +7.2  p =  2.6e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x194fbb0f
length= 4 gigabytes (2^32 bytes), time= 80.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x194fbb0f
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 159 test result(s)


real	1m41.796s
user	1m38.048s
sys	0m3.344s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xcabe4840
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xcabe4840
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xcabe4840
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xcabe4840
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xcabe4840
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xcabe4840
length= 2 gigabytes (2^31 bytes), time= 40.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xcabe4840
length= 4 gigabytes (2^32 bytes), time= 78.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xcabe4840
length= 5.250 gigabytes (2^32.392 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.437s
user	1m40.940s
sys	0m3.156s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa8643834
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa8643834
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +5.2  p =  3.6e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa8643834
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa8643834
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xa8643834
length= 1 gigabyte (2^30 bytes), time= 20.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xa8643834
length= 2 gigabytes (2^31 bytes), time= 40.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xa8643834
length= 4 gigabytes (2^32 bytes), time= 80.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xa8643834
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  no anomalies in 159 test result(s)


real	1m42.404s
user	1m38.888s
sys	0m3.220s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xab9d7cd4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xab9d7cd4
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xab9d7cd4
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xab9d7cd4
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xab9d7cd4
length= 1 gigabyte (2^30 bytes), time= 21.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xab9d7cd4
length= 2 gigabytes (2^31 bytes), time= 41.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xab9d7cd4
length= 4 gigabytes (2^32 bytes), time= 79.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R=  +8.9  p =  5.5e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xab9d7cd4
length= 8 gigabytes (2^33 bytes), time= 163 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xab9d7cd4
length= 16 gigabytes (2^34 bytes), time= 330 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xab9d7cd4
length= 32 gigabytes (2^35 bytes), time= 660 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xab9d7cd4
length= 64 gigabytes (2^36 bytes), time= 1333 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +4.5  p =  9.5e-3   unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0xab9d7cd4
length= 128 gigabytes (2^37 bytes), time= 2666 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xab9d7cd4
length= 173.250 gigabytes (2^37.437 bytes), time= 3604 seconds
  no anomalies in 201 test result(s)


real	60m4.412s
user	58m6.644s
sys	1m45.636s
*/
/* TEST00
time ./MRndCPP 
840932236
52608534
2736526188
1716577654
15303960
3703642652
18445748227906003749

real	2m6.831s
user	2m6.684s
sys	0m0.032s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.81e+07  |3829492976|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.75979629|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.97762730|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.61065767|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.94542805|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.05515793|  PASSED  
        diehard_opso|   0|   2097152|     100|0.52293228|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.76059818|  PASSED  
         diehard_dna|   0|   2097152|     100|0.91271732|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.49861911|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.11849878|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.90083553|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.13493787|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.65468048|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.52257091|  PASSED  
        diehard_sums|   0|       100|     100|0.97507274|  PASSED  
        diehard_runs|   0|    100000|     100|0.74835177|  PASSED  
        diehard_runs|   0|    100000|     100|0.56068858|  PASSED  
       diehard_craps|   0|    200000|     100|0.99093404|  PASSED  
       diehard_craps|   0|    200000|     100|0.14564485|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.48944294|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.97966704|  PASSED  
         sts_monobit|   1|    100000|     100|0.30771284|  PASSED  
            sts_runs|   2|    100000|     100|0.65600629|  PASSED  
          sts_serial|   1|    100000|     100|0.60282567|  PASSED  
          sts_serial|   2|    100000|     100|0.73035653|  PASSED  
          sts_serial|   3|    100000|     100|0.30077296|  PASSED  
          sts_serial|   3|    100000|     100|0.05705397|  PASSED  
          sts_serial|   4|    100000|     100|0.37215139|  PASSED  
          sts_serial|   4|    100000|     100|0.77642178|  PASSED  
          sts_serial|   5|    100000|     100|0.26313830|  PASSED  
          sts_serial|   5|    100000|     100|0.03558445|  PASSED  
          sts_serial|   6|    100000|     100|0.12381542|  PASSED  
          sts_serial|   6|    100000|     100|0.81969301|  PASSED  
          sts_serial|   7|    100000|     100|0.72564589|  PASSED  
          sts_serial|   7|    100000|     100|0.61287151|  PASSED  
          sts_serial|   8|    100000|     100|0.29136554|  PASSED  
          sts_serial|   8|    100000|     100|0.96989946|  PASSED  
          sts_serial|   9|    100000|     100|0.05821386|  PASSED  
          sts_serial|   9|    100000|     100|0.19897840|  PASSED  
          sts_serial|  10|    100000|     100|0.16453254|  PASSED  
          sts_serial|  10|    100000|     100|0.36290919|  PASSED  
          sts_serial|  11|    100000|     100|0.53155014|  PASSED  
          sts_serial|  11|    100000|     100|0.97552645|  PASSED  
          sts_serial|  12|    100000|     100|0.94157646|  PASSED  
          sts_serial|  12|    100000|     100|0.89408686|  PASSED  
          sts_serial|  13|    100000|     100|0.66094462|  PASSED  
          sts_serial|  13|    100000|     100|0.88742267|  PASSED  
          sts_serial|  14|    100000|     100|0.82418684|  PASSED  
          sts_serial|  14|    100000|     100|0.95660380|  PASSED  
          sts_serial|  15|    100000|     100|0.29819804|  PASSED  
          sts_serial|  15|    100000|     100|0.25763253|  PASSED  
          sts_serial|  16|    100000|     100|0.46906468|  PASSED  
          sts_serial|  16|    100000|     100|0.82615805|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.03741107|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.38078784|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.61919678|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.63488979|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.00394837|   WEAK   
         rgb_bitdist|   6|    100000|     100|0.14789404|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.10197842|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.72015955|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.40713315|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.27596291|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.00267980|   WEAK   
         rgb_bitdist|  12|    100000|     100|0.56056502|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.35295810|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.16295487|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.51718413|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.08193783|  PASSED  
    rgb_permutations|   2|    100000|     100|0.97561892|  PASSED  
    rgb_permutations|   3|    100000|     100|0.31369016|  PASSED  
    rgb_permutations|   4|    100000|     100|0.32453368|  PASSED  
    rgb_permutations|   5|    100000|     100|0.70924343|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.39559256|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.29957836|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.98780601|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.02426770|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.82141571|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.67556437|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.74873832|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.92439946|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.89362226|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.79271561|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.37954284|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.65507281|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.77906402|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.57102270|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.18361413|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.64093212|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.75156410|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.92546162|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.30767252|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.63764800|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.86726898|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.32348325|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.77230876|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.24924248|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.11975918|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.18821056|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.62519040|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.91761234|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.46945716|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.27429665|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.96150673|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.48867838|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.94607446|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.46215198|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.12737461|  PASSED  
             dab_dct| 256|     50000|       1|0.89236855|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.27320306|  PASSED  
        dab_filltree|  32|  15000000|       1|0.63943933|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.60550656|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.93536691|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.36578691|  PASSED  

real	54m5.333s
user	50m44.252s
sys	3m18.272s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x88328dec
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x88328dec
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x88328dec
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x88328dec
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x88328dec
length= 1 gigabyte (2^30 bytes), time= 20.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x88328dec
length= 2 gigabytes (2^31 bytes), time= 40.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x88328dec
length= 4 gigabytes (2^32 bytes), time= 77.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x88328dec
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.522s
user	1m39.972s
sys	0m3.420s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf4b6da83
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf4b6da83
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf4b6da83
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+6,13-8,T)         R= +14.7  p =  1.1e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf4b6da83
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf4b6da83
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf4b6da83
length= 2 gigabytes (2^31 bytes), time= 40.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf4b6da83
length= 4 gigabytes (2^32 bytes), time= 80.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xf4b6da83
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  no anomalies in 159 test result(s)


real	1m42.507s
user	1m39.504s
sys	0m2.892s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdff9d861
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdff9d861
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xdff9d861
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xdff9d861
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-5,T)         R=  -6.4  p =1-5.6e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdff9d861
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xdff9d861
length= 2 gigabytes (2^31 bytes), time= 40.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xdff9d861
length= 4 gigabytes (2^32 bytes), time= 78.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xdff9d861
length= 5.250 gigabytes (2^32.392 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.534s
user	1m41.136s
sys	0m3.280s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x15b3a6bd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x15b3a6bd
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x15b3a6bd
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x15b3a6bd
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x15b3a6bd
length= 1 gigabyte (2^30 bytes), time= 21.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x15b3a6bd
length= 2 gigabytes (2^31 bytes), time= 40.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  +4.2  p =  6.5e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x15b3a6bd
length= 4 gigabytes (2^32 bytes), time= 79.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x15b3a6bd
length= 8 gigabytes (2^33 bytes), time= 159 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x15b3a6bd
length= 16 gigabytes (2^34 bytes), time= 327 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.6  p =1-3.3e-3   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0x15b3a6bd
length= 32 gigabytes (2^35 bytes), time= 658 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x15b3a6bd
length= 64 gigabytes (2^36 bytes), time= 1335 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x15b3a6bd
length= 128 gigabytes (2^37 bytes), time= 2678 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x15b3a6bd
length= 172.250 gigabytes (2^37.428 bytes), time= 3602 seconds
  no anomalies in 201 test result(s)


real	60m2.550s
user	58m17.376s
sys	1m41.152s
*/
