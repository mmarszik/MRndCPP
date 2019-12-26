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
/// @created on 2019-12-18 20:18:45 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 912d9149-4dbd-40bd-bf54-2ac158e49ff6                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot0a;
/* TEST00
time ./MRndCPP 
896647120
1510448857
1714447568
3554829125
1705895995
1122052304
4611664894965193084

real	0m15.828s
user	0m15.808s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.70e+07  |3746784023|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.71529368|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.85605335|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.71885689|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.41132090|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.96257458|  PASSED  
        diehard_opso|   0|   2097152|     100|0.52836272|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.79954704|  PASSED  
         diehard_dna|   0|   2097152|     100|0.65086110|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.48066848|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.82082631|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.54399718|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.65823390|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.56745909|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.24835302|  PASSED  
        diehard_sums|   0|       100|     100|0.10620169|  PASSED  
        diehard_runs|   0|    100000|     100|0.38337837|  PASSED  
        diehard_runs|   0|    100000|     100|0.50890129|  PASSED  
       diehard_craps|   0|    200000|     100|0.59608095|  PASSED  
       diehard_craps|   0|    200000|     100|0.79088278|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.84101232|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.57224151|  PASSED  
         sts_monobit|   1|    100000|     100|0.52308923|  PASSED  
            sts_runs|   2|    100000|     100|0.77096732|  PASSED  
          sts_serial|   1|    100000|     100|0.52733746|  PASSED  
          sts_serial|   2|    100000|     100|0.86351983|  PASSED  
          sts_serial|   3|    100000|     100|0.68738705|  PASSED  
          sts_serial|   3|    100000|     100|0.77806678|  PASSED  
          sts_serial|   4|    100000|     100|0.46737483|  PASSED  
          sts_serial|   4|    100000|     100|0.07244074|  PASSED  
          sts_serial|   5|    100000|     100|0.85491505|  PASSED  
          sts_serial|   5|    100000|     100|0.65211462|  PASSED  
          sts_serial|   6|    100000|     100|0.17738937|  PASSED  
          sts_serial|   6|    100000|     100|0.00642800|  PASSED  
          sts_serial|   7|    100000|     100|0.55364934|  PASSED  
          sts_serial|   7|    100000|     100|0.88360299|  PASSED  
          sts_serial|   8|    100000|     100|0.56021153|  PASSED  
          sts_serial|   8|    100000|     100|0.57811505|  PASSED  
          sts_serial|   9|    100000|     100|0.32092001|  PASSED  
          sts_serial|   9|    100000|     100|0.87366491|  PASSED  
          sts_serial|  10|    100000|     100|0.89768673|  PASSED  
          sts_serial|  10|    100000|     100|0.14278571|  PASSED  
          sts_serial|  11|    100000|     100|0.85098702|  PASSED  
          sts_serial|  11|    100000|     100|0.32914605|  PASSED  
          sts_serial|  12|    100000|     100|0.74712587|  PASSED  
          sts_serial|  12|    100000|     100|0.81918497|  PASSED  
          sts_serial|  13|    100000|     100|0.81425760|  PASSED  
          sts_serial|  13|    100000|     100|0.45730969|  PASSED  
          sts_serial|  14|    100000|     100|0.62323316|  PASSED  
          sts_serial|  14|    100000|     100|0.91235036|  PASSED  
          sts_serial|  15|    100000|     100|0.22704334|  PASSED  
          sts_serial|  15|    100000|     100|0.55284621|  PASSED  
          sts_serial|  16|    100000|     100|0.76983941|  PASSED  
          sts_serial|  16|    100000|     100|0.83654361|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.40334817|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.32587273|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.96984277|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.55900575|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.65879569|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.55228121|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.98023255|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.47235757|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.40237788|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.83337359|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.25166987|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.11702805|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.95607341|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.01999962|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.89769254|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.60250478|  PASSED  
    rgb_permutations|   2|    100000|     100|0.85578324|  PASSED  
    rgb_permutations|   3|    100000|     100|0.32228889|  PASSED  
    rgb_permutations|   4|    100000|     100|0.92136878|  PASSED  
    rgb_permutations|   5|    100000|     100|0.26270420|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.98609245|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.68733710|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.53289516|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.46949139|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.64506235|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.73962373|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.25972305|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.28525785|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.92450800|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.16355995|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.20190020|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.17096592|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.42889533|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.39652411|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.05625124|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.26608967|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.69435487|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.53520128|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.99220710|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.71872594|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.41603171|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.60848262|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.87604442|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.14592646|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.82910185|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.93493013|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.41671258|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.24333280|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.82626168|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.54427466|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.85389605|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.12368592|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.70369310|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.56791329|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.30024117|  PASSED  
             dab_dct| 256|     50000|       1|0.53750971|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.09098822|  PASSED  
        dab_filltree|  32|  15000000|       1|0.49746346|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.91891599|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.61365780|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.14366527|  PASSED  

real	59m19.223s
user	55m30.000s
sys	3m45.928s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5112ed38
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5112ed38
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5112ed38
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5112ed38
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5112ed38
length= 1 gigabyte (2^30 bytes), time= 21.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.1  p =  2.4e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5112ed38
length= 2 gigabytes (2^31 bytes), time= 40.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5112ed38
length= 4 gigabytes (2^32 bytes), time= 79.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x5112ed38
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 159 test result(s)


real	1m41.769s
user	1m38.184s
sys	0m3.404s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x18358573
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x18358573
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x18358573
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x18358573
length= 512 megabytes (2^29 bytes), time= 12.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x18358573
length= 1 gigabyte (2^30 bytes), time= 24.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x18358573
length= 2 gigabytes (2^31 bytes), time= 47.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x18358573
length= 4 gigabytes (2^32 bytes), time= 91.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x18358573
length= 4.500 gigabytes (2^32.170 bytes), time= 103 seconds
  no anomalies in 156 test result(s)


real	1m43.707s
user	1m40.836s
sys	0m2.772s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8032f87e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8032f87e
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.8  p =  2.0e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8032f87e
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8032f87e
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8032f87e
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x8032f87e
length= 2 gigabytes (2^31 bytes), time= 40.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8032f87e
length= 4 gigabytes (2^32 bytes), time= 81.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.8  p = 0.989     unusual          
  [Low8/32]BCFN(2+2,13-1,T)         R=  +9.9  p =  8.4e-5   mildly suspicious
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8032f87e
length= 5.000 gigabytes (2^32.322 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.0  p =1-8.0e-3   unusual          
  [Low8/32]BCFN(2+2,13-1,T)         R=  +9.2  p =  2.1e-4   mildly suspicious
  [Low1/32]Gap-16:A                 R=  +4.7  p =  1.4e-3   unusual          
  ...and 156 test result(s) without anomalies


real	1m43.691s
user	1m40.232s
sys	0m3.228s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x163e5e27
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x163e5e27
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.3  p =  7.8e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x163e5e27
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x163e5e27
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x163e5e27
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x163e5e27
length= 2 gigabytes (2^31 bytes), time= 40.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.7  p =  5.2e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x163e5e27
length= 4 gigabytes (2^32 bytes), time= 78.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.1  p =  2.4e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x163e5e27
length= 8 gigabytes (2^33 bytes), time= 163 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x163e5e27
length= 16 gigabytes (2^34 bytes), time= 332 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.9  p =  3.1e-3   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0x163e5e27
length= 32 gigabytes (2^35 bytes), time= 664 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x163e5e27
length= 64 gigabytes (2^36 bytes), time= 1340 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x163e5e27
length= 128 gigabytes (2^37 bytes), time= 2682 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x163e5e27
length= 171.750 gigabytes (2^37.424 bytes), time= 3604 seconds
  no anomalies in 201 test result(s)


real	60m4.218s
user	58m6.676s
sys	1m48.280s
*/
