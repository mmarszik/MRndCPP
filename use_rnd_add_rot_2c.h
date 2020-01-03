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
/// @created on 2019-12-18 20:17:21 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 0fb4fbfe-2da9-45e6-b929-2e55f670d3e9                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot2c;
/* TEST00
time ./MRndCPP 
198547326
2174638071
1062453592
2246798110
3535062031
3906292261
4611651357982677029

real	0m18.341s
user	0m18.320s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.73e+07  | 863634489|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.98556101|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.15455905|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.37004024|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.71279349|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.98682884|  PASSED  
        diehard_opso|   0|   2097152|     100|0.71011245|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.59513774|  PASSED  
         diehard_dna|   0|   2097152|     100|0.43557062|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.93486831|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.44930829|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.11472168|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.21987456|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.94712275|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.70361235|  PASSED  
        diehard_sums|   0|       100|     100|0.59781589|  PASSED  
        diehard_runs|   0|    100000|     100|0.38407942|  PASSED  
        diehard_runs|   0|    100000|     100|0.45506110|  PASSED  
       diehard_craps|   0|    200000|     100|0.47813490|  PASSED  
       diehard_craps|   0|    200000|     100|0.98281454|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.82829768|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.45286149|  PASSED  
         sts_monobit|   1|    100000|     100|0.89113698|  PASSED  
            sts_runs|   2|    100000|     100|0.74834017|  PASSED  
          sts_serial|   1|    100000|     100|0.16944431|  PASSED  
          sts_serial|   2|    100000|     100|0.93485562|  PASSED  
          sts_serial|   3|    100000|     100|0.28093570|  PASSED  
          sts_serial|   3|    100000|     100|0.44127019|  PASSED  
          sts_serial|   4|    100000|     100|0.69410034|  PASSED  
          sts_serial|   4|    100000|     100|0.22409482|  PASSED  
          sts_serial|   5|    100000|     100|0.96827484|  PASSED  
          sts_serial|   5|    100000|     100|0.98841885|  PASSED  
          sts_serial|   6|    100000|     100|0.73273042|  PASSED  
          sts_serial|   6|    100000|     100|0.30247845|  PASSED  
          sts_serial|   7|    100000|     100|0.87328670|  PASSED  
          sts_serial|   7|    100000|     100|0.74709835|  PASSED  
          sts_serial|   8|    100000|     100|0.36841867|  PASSED  
          sts_serial|   8|    100000|     100|0.54484374|  PASSED  
          sts_serial|   9|    100000|     100|0.84269520|  PASSED  
          sts_serial|   9|    100000|     100|0.92794744|  PASSED  
          sts_serial|  10|    100000|     100|0.99445448|  PASSED  
          sts_serial|  10|    100000|     100|0.57098026|  PASSED  
          sts_serial|  11|    100000|     100|0.04148429|  PASSED  
          sts_serial|  11|    100000|     100|0.02583625|  PASSED  
          sts_serial|  12|    100000|     100|0.86904771|  PASSED  
          sts_serial|  12|    100000|     100|0.23496301|  PASSED  
          sts_serial|  13|    100000|     100|0.93806730|  PASSED  
          sts_serial|  13|    100000|     100|0.63073145|  PASSED  
          sts_serial|  14|    100000|     100|0.68661450|  PASSED  
          sts_serial|  14|    100000|     100|0.58818717|  PASSED  
          sts_serial|  15|    100000|     100|0.53637715|  PASSED  
          sts_serial|  15|    100000|     100|0.36102571|  PASSED  
          sts_serial|  16|    100000|     100|0.07010668|  PASSED  
          sts_serial|  16|    100000|     100|0.35861546|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.83725969|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.42803727|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.69089331|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.98752442|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.27785646|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.86684768|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.05653265|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.80389223|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.53622378|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.17355669|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.70934543|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.98447279|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.60058632|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.24188901|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.76972458|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.72349381|  PASSED  
    rgb_permutations|   2|    100000|     100|0.64531526|  PASSED  
    rgb_permutations|   3|    100000|     100|0.29841755|  PASSED  
    rgb_permutations|   4|    100000|     100|0.53397708|  PASSED  
    rgb_permutations|   5|    100000|     100|0.55217488|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.17515492|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.70790149|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.99781644|   WEAK   
      rgb_lagged_sum|   3|   1000000|     100|0.26174264|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.56145405|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.90089502|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.12009477|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.95696408|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.92496561|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.75246322|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.99714191|   WEAK   
      rgb_lagged_sum|  11|   1000000|     100|0.55089902|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.81470671|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.94936532|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.46804381|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.96644482|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.25884767|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.95647826|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.72108871|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.99063278|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.23788099|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.56343807|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.76385574|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.15223446|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.86776213|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.99803054|   WEAK   
      rgb_lagged_sum|  26|   1000000|     100|0.40877525|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.90456331|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.62010412|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.33858507|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.06784252|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.80337187|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.14322686|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.39754145|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.61678447|  PASSED  
             dab_dct| 256|     50000|       1|0.06837876|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.80155667|  PASSED  
        dab_filltree|  32|  15000000|       1|0.88555757|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.10599262|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.34790600|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.67058290|  PASSED  

real	54m44.045s
user	51m6.780s
sys	3m33.988s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x47317f6d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x47317f6d
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x47317f6d
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x47317f6d
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x47317f6d
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x47317f6d
length= 2 gigabytes (2^31 bytes), time= 40.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x47317f6d
length= 4 gigabytes (2^32 bytes), time= 78.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x47317f6d
length= 5.250 gigabytes (2^32.392 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.825s
user	1m41.592s
sys	0m3.060s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xcab08ed5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xcab08ed5
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.4  p =  9.3e-5   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xcab08ed5
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +7.1  p =  1.9e-5   suspicious       
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xcab08ed5
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xcab08ed5
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xcab08ed5
length= 2 gigabytes (2^31 bytes), time= 40.6 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.1  p =  2.1e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xcab08ed5
length= 4 gigabytes (2^32 bytes), time= 80.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xcab08ed5
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  no anomalies in 159 test result(s)


real	1m42.504s
user	1m39.140s
sys	0m3.228s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdb1d84b9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdb1d84b9
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xdb1d84b9
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xdb1d84b9
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xdb1d84b9
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xdb1d84b9
length= 2 gigabytes (2^31 bytes), time= 40.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-1,T)                  R= +10.4  p =  4.9e-5   mildly suspicious
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdb1d84b9
length= 4 gigabytes (2^32 bytes), time= 78.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.2  p =  6.1e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdb1d84b9
length= 5.250 gigabytes (2^32.392 bytes), time= 105 seconds
  no anomalies in 160 test result(s)


real	1m45.688s
user	1m42.464s
sys	0m3.112s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xfb92418d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xfb92418d
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all2                  R=  -1.7  p =1-2.7e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfb92418d
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xfb92418d
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xfb92418d
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xfb92418d
length= 2 gigabytes (2^31 bytes), time= 40.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xfb92418d
length= 4 gigabytes (2^32 bytes), time= 78.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.5  p =  2.4e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfb92418d
length= 8 gigabytes (2^33 bytes), time= 159 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xfb92418d
length= 16 gigabytes (2^34 bytes), time= 326 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xfb92418d
length= 32 gigabytes (2^35 bytes), time= 658 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.9  p =  1.8e-4   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfb92418d
length= 64 gigabytes (2^36 bytes), time= 1334 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +5.0  p =  3.8e-4   unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfb92418d
length= 128 gigabytes (2^37 bytes), time= 2675 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xfb92418d
length= 172.500 gigabytes (2^37.430 bytes), time= 3601 seconds
  no anomalies in 201 test result(s)


real	60m2.191s
user	58m11.600s
sys	1m45.416s
*/
/* TEST00
time ./MRndCPP 
198547326
2174638071
1062453592
2246798110
3535062031
3906292261
114246960674996

real	0m36.248s
user	0m36.212s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.26e+07  | 374445117|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.33652309|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.24546322|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.98564222|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.47148464|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.96125498|  PASSED  
        diehard_opso|   0|   2097152|     100|0.31165535|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.55716472|  PASSED  
         diehard_dna|   0|   2097152|     100|0.45019464|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.22296440|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.98690102|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.96913730|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.66046511|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.00474673|   WEAK   
     diehard_squeeze|   0|    100000|     100|0.23328567|  PASSED  
        diehard_sums|   0|       100|     100|0.05936582|  PASSED  
        diehard_runs|   0|    100000|     100|0.76894285|  PASSED  
        diehard_runs|   0|    100000|     100|0.88481968|  PASSED  
       diehard_craps|   0|    200000|     100|0.91759627|  PASSED  
       diehard_craps|   0|    200000|     100|0.96904129|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.65257894|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.83347360|  PASSED  
         sts_monobit|   1|    100000|     100|0.53910957|  PASSED  
            sts_runs|   2|    100000|     100|0.63159641|  PASSED  
          sts_serial|   1|    100000|     100|0.04747982|  PASSED  
          sts_serial|   2|    100000|     100|0.43789245|  PASSED  
          sts_serial|   3|    100000|     100|0.84398264|  PASSED  
          sts_serial|   3|    100000|     100|0.91047249|  PASSED  
          sts_serial|   4|    100000|     100|0.76631945|  PASSED  
          sts_serial|   4|    100000|     100|0.76832082|  PASSED  
          sts_serial|   5|    100000|     100|0.99463845|  PASSED  
          sts_serial|   5|    100000|     100|0.64455844|  PASSED  
          sts_serial|   6|    100000|     100|0.70765350|  PASSED  
          sts_serial|   6|    100000|     100|0.33138701|  PASSED  
          sts_serial|   7|    100000|     100|0.38259204|  PASSED  
          sts_serial|   7|    100000|     100|0.46030922|  PASSED  
          sts_serial|   8|    100000|     100|0.89932335|  PASSED  
          sts_serial|   8|    100000|     100|0.51417946|  PASSED  
          sts_serial|   9|    100000|     100|0.51099063|  PASSED  
          sts_serial|   9|    100000|     100|0.56688116|  PASSED  
          sts_serial|  10|    100000|     100|0.99896419|   WEAK   
          sts_serial|  10|    100000|     100|0.73173913|  PASSED  
          sts_serial|  11|    100000|     100|0.30246913|  PASSED  
          sts_serial|  11|    100000|     100|0.11469095|  PASSED  
          sts_serial|  12|    100000|     100|0.76362282|  PASSED  
          sts_serial|  12|    100000|     100|0.70121020|  PASSED  
          sts_serial|  13|    100000|     100|0.51585729|  PASSED  
          sts_serial|  13|    100000|     100|0.91935759|  PASSED  
          sts_serial|  14|    100000|     100|0.90662351|  PASSED  
          sts_serial|  14|    100000|     100|0.52281489|  PASSED  
          sts_serial|  15|    100000|     100|0.36045685|  PASSED  
          sts_serial|  15|    100000|     100|0.01406797|  PASSED  
          sts_serial|  16|    100000|     100|0.01757696|  PASSED  
          sts_serial|  16|    100000|     100|0.26072153|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.17970147|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.91710496|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.14089587|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.37132151|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.16601649|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.45214129|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.06303300|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.72185514|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.89419633|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.42256281|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.74279641|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.83240176|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.94469449|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.68765544|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.10193449|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.70322627|  PASSED  
    rgb_permutations|   2|    100000|     100|0.66232424|  PASSED  
    rgb_permutations|   3|    100000|     100|0.34590992|  PASSED  
    rgb_permutations|   4|    100000|     100|0.71219071|  PASSED  
    rgb_permutations|   5|    100000|     100|0.43717962|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.45798830|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.58886492|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.27652666|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.38480421|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.32644500|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.99677110|   WEAK   
      rgb_lagged_sum|   6|   1000000|     100|0.16196235|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.22197534|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.05385098|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.88239703|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.86085418|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.72403270|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.79082589|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.23226820|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.83703420|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.23710617|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.46016143|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.81560187|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.10438650|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.53901060|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.09404483|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.43689062|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.97143154|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.39103499|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.75590263|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.66526275|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.66511807|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.71142107|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.58675707|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.50568611|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.79834829|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.97409103|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.25034216|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.81142599|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.87315889|  PASSED  
             dab_dct| 256|     50000|       1|0.96797803|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.60151694|  PASSED  
        dab_filltree|  32|  15000000|       1|0.13672691|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.80542711|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.22189302|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.30476041|  PASSED  

real	48m45.421s
user	45m0.760s
sys	3m41.728s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb48f72d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb48f72d
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb48f72d
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb48f72d
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb48f72d
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb48f72d
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb48f72d
length= 4 gigabytes (2^32 bytes), time= 71.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xb48f72d
length= 5.500 gigabytes (2^32.459 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.716s
user	1m40.436s
sys	0m2.160s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x30b11c69
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x30b11c69
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x30b11c69
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.2  p =1-4.8e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x30b11c69
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R=  +8.6  p =  7.5e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x30b11c69
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x30b11c69
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x30b11c69
length= 4 gigabytes (2^32 bytes), time= 71.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x30b11c69
length= 5.750 gigabytes (2^32.524 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m43.200s
user	1m40.740s
sys	0m2.208s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x150a6f1a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x150a6f1a
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.9  p =  1.7e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x150a6f1a
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x150a6f1a
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x150a6f1a
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x150a6f1a
length= 2 gigabytes (2^31 bytes), time= 36.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x150a6f1a
length= 4 gigabytes (2^32 bytes), time= 73.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x150a6f1a
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.824s
user	1m41.488s
sys	0m2.240s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x624dc050
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x624dc050
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x624dc050
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x624dc050
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x624dc050
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x624dc050
length= 2 gigabytes (2^31 bytes), time= 36.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x624dc050
length= 4 gigabytes (2^32 bytes), time= 71.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x624dc050
length= 8 gigabytes (2^33 bytes), time= 147 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x624dc050
length= 16 gigabytes (2^34 bytes), time= 301 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x624dc050
length= 32 gigabytes (2^35 bytes), time= 604 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x624dc050
length= 64 gigabytes (2^36 bytes), time= 1221 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.7  p =  3.8e-3   unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0x624dc050
length= 128 gigabytes (2^37 bytes), time= 2450 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x624dc050
length= 188.750 gigabytes (2^37.560 bytes), time= 3602 seconds
  no anomalies in 201 test result(s)


real	60m2.720s
user	58m45.888s
sys	1m12.224s
*/
