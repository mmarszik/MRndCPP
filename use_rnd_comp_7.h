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
18446128617549973143

real	1m3.595s
user	1m3.440s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.80e+07  |3510896399|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.99952745|   WEAK   
      diehard_operm5|   0|   1000000|     100|0.06647487|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.73406968|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.85597030|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.94914687|  PASSED  
        diehard_opso|   0|   2097152|     100|0.23038204|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.50954304|  PASSED  
         diehard_dna|   0|   2097152|     100|0.61874301|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.11086726|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.63416858|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.61013501|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.67167606|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.51687096|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.92034459|  PASSED  
        diehard_sums|   0|       100|     100|0.02735466|  PASSED  
        diehard_runs|   0|    100000|     100|0.93482722|  PASSED  
        diehard_runs|   0|    100000|     100|0.12191516|  PASSED  
       diehard_craps|   0|    200000|     100|0.97875135|  PASSED  
       diehard_craps|   0|    200000|     100|0.93448359|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.64471141|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.05191174|  PASSED  
         sts_monobit|   1|    100000|     100|0.99023947|  PASSED  
            sts_runs|   2|    100000|     100|0.86062998|  PASSED  
          sts_serial|   1|    100000|     100|0.92106808|  PASSED  
          sts_serial|   2|    100000|     100|0.86147418|  PASSED  
          sts_serial|   3|    100000|     100|0.83023723|  PASSED  
          sts_serial|   3|    100000|     100|0.23690779|  PASSED  
          sts_serial|   4|    100000|     100|0.96785720|  PASSED  
          sts_serial|   4|    100000|     100|0.29007994|  PASSED  
          sts_serial|   5|    100000|     100|0.69962221|  PASSED  
          sts_serial|   5|    100000|     100|0.59849324|  PASSED  
          sts_serial|   6|    100000|     100|0.73043275|  PASSED  
          sts_serial|   6|    100000|     100|0.10395607|  PASSED  
          sts_serial|   7|    100000|     100|0.36571532|  PASSED  
          sts_serial|   7|    100000|     100|0.03054060|  PASSED  
          sts_serial|   8|    100000|     100|0.62474411|  PASSED  
          sts_serial|   8|    100000|     100|0.99347646|  PASSED  
          sts_serial|   9|    100000|     100|0.24975317|  PASSED  
          sts_serial|   9|    100000|     100|0.95494129|  PASSED  
          sts_serial|  10|    100000|     100|0.94269938|  PASSED  
          sts_serial|  10|    100000|     100|0.73221082|  PASSED  
          sts_serial|  11|    100000|     100|0.96044756|  PASSED  
          sts_serial|  11|    100000|     100|0.98932157|  PASSED  
          sts_serial|  12|    100000|     100|0.90996279|  PASSED  
          sts_serial|  12|    100000|     100|0.21452791|  PASSED  
          sts_serial|  13|    100000|     100|0.43576655|  PASSED  
          sts_serial|  13|    100000|     100|0.04075603|  PASSED  
          sts_serial|  14|    100000|     100|0.12392425|  PASSED  
          sts_serial|  14|    100000|     100|0.89369867|  PASSED  
          sts_serial|  15|    100000|     100|0.86810847|  PASSED  
          sts_serial|  15|    100000|     100|0.97368731|  PASSED  
          sts_serial|  16|    100000|     100|0.84145179|  PASSED  
          sts_serial|  16|    100000|     100|0.89257353|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.97976842|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.97062672|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.58743393|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.13500326|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.29456091|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.62161776|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.58344141|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.29746966|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.36180095|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.88758463|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.65722641|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.69801405|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.54985240|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.01879790|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.09523466|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.23708928|  PASSED  
    rgb_permutations|   2|    100000|     100|0.85164136|  PASSED  
    rgb_permutations|   3|    100000|     100|0.71845341|  PASSED  
    rgb_permutations|   4|    100000|     100|0.45878620|  PASSED  
    rgb_permutations|   5|    100000|     100|0.65839563|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.88893324|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.22344647|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.09840758|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.83239578|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.19021292|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.46134211|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.26822857|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.77138241|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.99285895|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.44738907|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.75948818|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.96371009|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.76923310|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.59300717|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.11371180|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.95291777|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.28878242|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.49058678|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.23284779|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.90425837|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.78338332|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.99996264|   WEAK   
      rgb_lagged_sum|  22|   1000000|     100|0.53148850|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.41549141|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.95004175|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.63843979|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.98274762|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.89141864|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.89620653|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.53371035|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.07205660|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.62411743|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.84726097|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.31552858|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.10110213|  PASSED  
             dab_dct| 256|     50000|       1|0.56682830|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.74409944|  PASSED  
        dab_filltree|  32|  15000000|       1|0.56634926|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.26136195|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.86379196|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.19742067|  PASSED  

real	58m22.564s
user	54m41.260s
sys	3m29.692s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x43cf6b40
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x43cf6b40
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x43cf6b40
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x43cf6b40
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x43cf6b40
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x43cf6b40
length= 2 gigabytes (2^31 bytes), time= 40.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x43cf6b40
length= 4 gigabytes (2^32 bytes), time= 78.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x43cf6b40
length= 5.250 gigabytes (2^32.392 bytes), time= 105 seconds
  no anomalies in 160 test result(s)


real	1m45.519s
user	1m41.584s
sys	0m3.588s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5427819f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5427819f
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5427819f
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5427819f
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5427819f
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5427819f
length= 2 gigabytes (2^31 bytes), time= 40.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5427819f
length= 4 gigabytes (2^32 bytes), time= 79.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x5427819f
length= 8 gigabytes (2^33 bytes), time= 159 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x5427819f
length= 16 gigabytes (2^34 bytes), time= 328 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x5427819f
length= 32 gigabytes (2^35 bytes), time= 661 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x5427819f
length= 48.000 gigabytes (2^35.585 bytes), time= 1003 seconds
  no anomalies in 184 test result(s)


real	16m44.072s
user	16m12.208s
sys	0m28.524s
*/
/* TEST00
time ./MRndCPP 
840932236
52608534
2736526188
1716577654
15303960
3703642652
18446128617549973143

real	1m4.889s
user	1m4.756s
sys	0m0.036s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.77e+07  | 324937139|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.42941152|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.65614050|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.21148210|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.65971296|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.02513869|  PASSED  
        diehard_opso|   0|   2097152|     100|0.12417768|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.25436404|  PASSED  
         diehard_dna|   0|   2097152|     100|0.51691078|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.39206890|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.19060275|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.10526018|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.49619552|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.73596012|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.76568724|  PASSED  
        diehard_sums|   0|       100|     100|0.01422760|  PASSED  
        diehard_runs|   0|    100000|     100|0.61421876|  PASSED  
        diehard_runs|   0|    100000|     100|0.28737078|  PASSED  
       diehard_craps|   0|    200000|     100|0.29638245|  PASSED  
       diehard_craps|   0|    200000|     100|0.65309648|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.44147665|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.65020053|  PASSED  
         sts_monobit|   1|    100000|     100|0.29582220|  PASSED  
            sts_runs|   2|    100000|     100|0.92786218|  PASSED  
          sts_serial|   1|    100000|     100|0.74332333|  PASSED  
          sts_serial|   2|    100000|     100|0.26163165|  PASSED  
          sts_serial|   3|    100000|     100|0.05488333|  PASSED  
          sts_serial|   3|    100000|     100|0.11359905|  PASSED  
          sts_serial|   4|    100000|     100|0.38847504|  PASSED  
          sts_serial|   4|    100000|     100|0.76837472|  PASSED  
          sts_serial|   5|    100000|     100|0.03459622|  PASSED  
          sts_serial|   5|    100000|     100|0.87857764|  PASSED  
          sts_serial|   6|    100000|     100|0.73346637|  PASSED  
          sts_serial|   6|    100000|     100|0.18398933|  PASSED  
          sts_serial|   7|    100000|     100|0.49743120|  PASSED  
          sts_serial|   7|    100000|     100|0.50575421|  PASSED  
          sts_serial|   8|    100000|     100|0.52142833|  PASSED  
          sts_serial|   8|    100000|     100|0.94082269|  PASSED  
          sts_serial|   9|    100000|     100|0.69889385|  PASSED  
          sts_serial|   9|    100000|     100|0.03207836|  PASSED  
          sts_serial|  10|    100000|     100|0.94420838|  PASSED  
          sts_serial|  10|    100000|     100|0.11627433|  PASSED  
          sts_serial|  11|    100000|     100|0.43506699|  PASSED  
          sts_serial|  11|    100000|     100|0.34008454|  PASSED  
          sts_serial|  12|    100000|     100|0.71378090|  PASSED  
          sts_serial|  12|    100000|     100|0.19389678|  PASSED  
          sts_serial|  13|    100000|     100|0.46890847|  PASSED  
          sts_serial|  13|    100000|     100|0.91803075|  PASSED  
          sts_serial|  14|    100000|     100|0.18903484|  PASSED  
          sts_serial|  14|    100000|     100|0.25466014|  PASSED  
          sts_serial|  15|    100000|     100|0.00578604|  PASSED  
          sts_serial|  15|    100000|     100|0.59544886|  PASSED  
          sts_serial|  16|    100000|     100|0.04648885|  PASSED  
          sts_serial|  16|    100000|     100|0.30580050|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.67612290|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.51237013|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.46484517|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.65578489|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.33513199|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.93133232|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.50960760|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.44209748|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.99393255|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.13077177|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.24946759|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.61774350|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.78690582|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.34797906|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.30631636|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.39223662|  PASSED  
    rgb_permutations|   2|    100000|     100|0.91872964|  PASSED  
    rgb_permutations|   3|    100000|     100|0.50766001|  PASSED  
    rgb_permutations|   4|    100000|     100|0.63885965|  PASSED  
    rgb_permutations|   5|    100000|     100|0.68422303|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.91726723|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.78895212|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.49726462|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.24496557|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.77222426|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.46345252|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.37730421|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.08525696|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.62253195|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.37373758|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.72333368|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.95486634|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.70007650|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.61912208|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.43560692|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.17490127|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.92672480|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.98301156|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.76396115|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.81690614|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.51021045|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.65796041|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.40492808|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.98472357|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.13974936|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.18413362|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.94470091|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.44918247|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.80370265|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.31683042|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.95981514|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.93175407|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.94019098|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.14375919|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.94100531|  PASSED  
             dab_dct| 256|     50000|       1|0.79910500|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.46752120|  PASSED  
        dab_filltree|  32|  15000000|       1|0.55062721|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.73511081|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.60876732|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.06504495|  PASSED  

real	53m22.030s
user	49m41.724s
sys	3m29.756s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x411a99fb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x411a99fb
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x411a99fb
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x411a99fb
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x411a99fb
length= 1 gigabyte (2^30 bytes), time= 21.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x411a99fb
length= 2 gigabytes (2^31 bytes), time= 41.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x411a99fb
length= 4 gigabytes (2^32 bytes), time= 79.8 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.8  p =  2.2e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x411a99fb
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 159 test result(s)


real	1m42.171s
user	1m38.684s
sys	0m3.168s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x23006615
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x23006615
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x23006615
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x23006615
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x23006615
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x23006615
length= 2 gigabytes (2^31 bytes), time= 40.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R=  +7.5  p =  1.7e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x23006615
length= 4 gigabytes (2^32 bytes), time= 78.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x23006615
length= 8 gigabytes (2^33 bytes), time= 159 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x23006615
length= 16 gigabytes (2^34 bytes), time= 327 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x23006615
length= 32 gigabytes (2^35 bytes), time= 658 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x23006615
length= 48.250 gigabytes (2^35.592 bytes), time= 1003 seconds
  no anomalies in 184 test result(s)


real	16m44.027s
user	16m13.144s
sys	0m27.680s
*/
