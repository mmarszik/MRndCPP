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
/// @created on 2019-12-18 20:15:10 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 0eccbb2e-f467-4938-a69b-6e51003e8160                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot7a;
/* TEST00
time ./MRndCPP 
3457503284
60431811
3826225630
568770393
3108881175
3649289213
4611660561458775395

real	0m19.143s
user	0m19.108s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.63e+07  | 468944199|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.85825732|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.52944931|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.50858258|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.85549267|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.31286691|  PASSED  
        diehard_opso|   0|   2097152|     100|0.28817461|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.05411227|  PASSED  
         diehard_dna|   0|   2097152|     100|0.67367047|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.47624027|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.81966892|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.66912419|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.55900410|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.10945111|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.67536300|  PASSED  
        diehard_sums|   0|       100|     100|0.35711675|  PASSED  
        diehard_runs|   0|    100000|     100|0.62891602|  PASSED  
        diehard_runs|   0|    100000|     100|0.05243786|  PASSED  
       diehard_craps|   0|    200000|     100|0.77577965|  PASSED  
       diehard_craps|   0|    200000|     100|0.50183650|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.32438869|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.87512917|  PASSED  
         sts_monobit|   1|    100000|     100|0.89552187|  PASSED  
            sts_runs|   2|    100000|     100|0.23930177|  PASSED  
          sts_serial|   1|    100000|     100|0.43391059|  PASSED  
          sts_serial|   2|    100000|     100|0.22402957|  PASSED  
          sts_serial|   3|    100000|     100|0.87988327|  PASSED  
          sts_serial|   3|    100000|     100|0.63367488|  PASSED  
          sts_serial|   4|    100000|     100|0.81643001|  PASSED  
          sts_serial|   4|    100000|     100|0.91139287|  PASSED  
          sts_serial|   5|    100000|     100|0.99233527|  PASSED  
          sts_serial|   5|    100000|     100|0.69218403|  PASSED  
          sts_serial|   6|    100000|     100|0.69065113|  PASSED  
          sts_serial|   6|    100000|     100|0.38723693|  PASSED  
          sts_serial|   7|    100000|     100|0.38656404|  PASSED  
          sts_serial|   7|    100000|     100|0.31666494|  PASSED  
          sts_serial|   8|    100000|     100|0.25579997|  PASSED  
          sts_serial|   8|    100000|     100|0.98718700|  PASSED  
          sts_serial|   9|    100000|     100|0.68169558|  PASSED  
          sts_serial|   9|    100000|     100|0.99168454|  PASSED  
          sts_serial|  10|    100000|     100|0.58327118|  PASSED  
          sts_serial|  10|    100000|     100|0.83555885|  PASSED  
          sts_serial|  11|    100000|     100|0.42431373|  PASSED  
          sts_serial|  11|    100000|     100|0.62198438|  PASSED  
          sts_serial|  12|    100000|     100|0.29266454|  PASSED  
          sts_serial|  12|    100000|     100|0.99997452|   WEAK   
          sts_serial|  13|    100000|     100|0.55526167|  PASSED  
          sts_serial|  13|    100000|     100|0.74024132|  PASSED  
          sts_serial|  14|    100000|     100|0.71715199|  PASSED  
          sts_serial|  14|    100000|     100|0.50760645|  PASSED  
          sts_serial|  15|    100000|     100|0.98625587|  PASSED  
          sts_serial|  15|    100000|     100|0.99833290|   WEAK   
          sts_serial|  16|    100000|     100|0.38526082|  PASSED  
          sts_serial|  16|    100000|     100|0.74522294|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.62942639|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.69487016|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.91417609|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.80272410|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.89755356|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.67369222|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.26669393|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.48935370|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.44678181|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.73973879|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.04403110|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.02239748|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.41904802|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.13374259|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.84952077|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.91080697|  PASSED  
    rgb_permutations|   2|    100000|     100|0.62107417|  PASSED  
    rgb_permutations|   3|    100000|     100|0.87608787|  PASSED  
    rgb_permutations|   4|    100000|     100|0.06519732|  PASSED  
    rgb_permutations|   5|    100000|     100|0.52489035|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.88989684|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.59222061|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.06089048|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.34135808|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.49663749|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.27506306|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.41194997|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.50643918|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.29511673|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.91013255|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.30522809|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.08127110|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.93048241|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.69346436|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.86108171|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.78142921|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.11217776|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.87146430|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.99623343|   WEAK   
      rgb_lagged_sum|  19|   1000000|     100|0.75191202|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.03519912|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.67656960|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.59789493|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.40809885|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.82484345|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.04771617|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.39769998|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.70236922|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.16677708|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.94969533|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.48967331|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.90958918|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.61198647|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.40260676|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.09873745|  PASSED  
             dab_dct| 256|     50000|       1|0.68317954|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.67743508|  PASSED  
        dab_filltree|  32|  15000000|       1|0.54735875|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.57369106|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.73615807|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.49890999|  PASSED  

real	54m51.600s
user	51m14.716s
sys	3m33.792s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x55754d7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x55754d7
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x55754d7
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x55754d7
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x55754d7
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x55754d7
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x55754d7
length= 4 gigabytes (2^32 bytes), time= 80.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x55754d7
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 159 test result(s)


real	1m41.663s
user	1m38.160s
sys	0m3.364s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x29b994e6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x29b994e6
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x29b994e6
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x29b994e6
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x29b994e6
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x29b994e6
length= 2 gigabytes (2^31 bytes), time= 41.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x29b994e6
length= 4 gigabytes (2^32 bytes), time= 80.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x29b994e6
length= 5.250 gigabytes (2^32.392 bytes), time= 106 seconds
  no anomalies in 160 test result(s)


real	1m46.567s
user	1m43.148s
sys	0m3.308s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3a3662ca
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3a3662ca
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3a3662ca
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x3a3662ca
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x3a3662ca
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x3a3662ca
length= 2 gigabytes (2^31 bytes), time= 41.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x3a3662ca
length= 4 gigabytes (2^32 bytes), time= 83.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x3a3662ca
length= 5.000 gigabytes (2^32.322 bytes), time= 105 seconds
  no anomalies in 159 test result(s)


real	1m45.506s
user	1m42.320s
sys	0m3.088s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x339e277
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x339e277
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x339e277
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x339e277
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x339e277
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x339e277
length= 2 gigabytes (2^31 bytes), time= 41.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x339e277
length= 4 gigabytes (2^32 bytes), time= 81.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x339e277
length= 8 gigabytes (2^33 bytes), time= 168 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x339e277
length= 16 gigabytes (2^34 bytes), time= 340 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x339e277
length= 32 gigabytes (2^35 bytes), time= 680 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x339e277
length= 64 gigabytes (2^36 bytes), time= 1375 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x339e277
length= 128 gigabytes (2^37 bytes), time= 2749 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x339e277
length= 167.750 gigabytes (2^37.390 bytes), time= 3601 seconds
  no anomalies in 201 test result(s)


real	60m1.627s
user	58m10.668s
sys	1m47.472s
*/
