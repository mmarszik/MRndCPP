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
/// @created on 2019-12-18 20:16:59 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 2302969a-6c78-4a62-9091-dd46409f0d80                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot3b;
/* TEST00
time ./MRndCPP 
2978934439
3663128535
3325783361
4237634678
3431140605
268521588
4611653198381147514

real	0m20.816s
user	0m20.796s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.55e+07  |  24356773|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.42818738|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.45988457|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.91064282|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.92133862|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.26428281|  PASSED  
        diehard_opso|   0|   2097152|     100|0.19489269|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.57806418|  PASSED  
         diehard_dna|   0|   2097152|     100|0.29121339|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.38026725|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.90211970|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.72624287|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.97008628|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.68941638|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.99479059|  PASSED  
        diehard_sums|   0|       100|     100|0.03152273|  PASSED  
        diehard_runs|   0|    100000|     100|0.40537646|  PASSED  
        diehard_runs|   0|    100000|     100|0.56811393|  PASSED  
       diehard_craps|   0|    200000|     100|0.91828771|  PASSED  
       diehard_craps|   0|    200000|     100|0.17777609|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.75523547|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.81236325|  PASSED  
         sts_monobit|   1|    100000|     100|0.81657890|  PASSED  
            sts_runs|   2|    100000|     100|0.10933173|  PASSED  
          sts_serial|   1|    100000|     100|0.94765415|  PASSED  
          sts_serial|   2|    100000|     100|0.63159756|  PASSED  
          sts_serial|   3|    100000|     100|0.35909367|  PASSED  
          sts_serial|   3|    100000|     100|0.95842685|  PASSED  
          sts_serial|   4|    100000|     100|0.98348034|  PASSED  
          sts_serial|   4|    100000|     100|0.40036601|  PASSED  
          sts_serial|   5|    100000|     100|0.91903140|  PASSED  
          sts_serial|   5|    100000|     100|0.34798100|  PASSED  
          sts_serial|   6|    100000|     100|0.80204073|  PASSED  
          sts_serial|   6|    100000|     100|0.83465389|  PASSED  
          sts_serial|   7|    100000|     100|0.70470859|  PASSED  
          sts_serial|   7|    100000|     100|0.28470975|  PASSED  
          sts_serial|   8|    100000|     100|0.71650397|  PASSED  
          sts_serial|   8|    100000|     100|0.11265619|  PASSED  
          sts_serial|   9|    100000|     100|0.55940430|  PASSED  
          sts_serial|   9|    100000|     100|0.96121983|  PASSED  
          sts_serial|  10|    100000|     100|0.98361128|  PASSED  
          sts_serial|  10|    100000|     100|0.90679285|  PASSED  
          sts_serial|  11|    100000|     100|0.96885449|  PASSED  
          sts_serial|  11|    100000|     100|0.56895116|  PASSED  
          sts_serial|  12|    100000|     100|0.44839863|  PASSED  
          sts_serial|  12|    100000|     100|0.03955467|  PASSED  
          sts_serial|  13|    100000|     100|0.89744806|  PASSED  
          sts_serial|  13|    100000|     100|0.83377016|  PASSED  
          sts_serial|  14|    100000|     100|0.41499173|  PASSED  
          sts_serial|  14|    100000|     100|0.79236181|  PASSED  
          sts_serial|  15|    100000|     100|0.67857708|  PASSED  
          sts_serial|  15|    100000|     100|0.90968800|  PASSED  
          sts_serial|  16|    100000|     100|0.99117392|  PASSED  
          sts_serial|  16|    100000|     100|0.94386128|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.50290026|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.75779476|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.07260599|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.51792601|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.37277276|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.99895831|   WEAK   
         rgb_bitdist|   7|    100000|     100|0.99803310|   WEAK   
         rgb_bitdist|   8|    100000|     100|0.28843741|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.93317172|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.76662274|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.38150899|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.63598416|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.83057073|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.93747318|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.12145521|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.11425900|  PASSED  
    rgb_permutations|   2|    100000|     100|0.65775304|  PASSED  
    rgb_permutations|   3|    100000|     100|0.85333669|  PASSED  
    rgb_permutations|   4|    100000|     100|0.13860022|  PASSED  
    rgb_permutations|   5|    100000|     100|0.98243678|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.90180043|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.37582806|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.00684299|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.13579662|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.63985064|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.95245961|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.34258894|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.96963512|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.85334367|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.84308725|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.95996052|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.66552320|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.77788766|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.26486461|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.96022805|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.54919669|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.74900061|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.52406053|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.00669733|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.98642108|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.77800647|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.37643613|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.05548606|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.75999314|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.99627418|   WEAK   
      rgb_lagged_sum|  25|   1000000|     100|0.27193809|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.35387331|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.54371972|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.57945487|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.40188464|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.34621700|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.89743958|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.37546673|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.08359672|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.97375913|  PASSED  
             dab_dct| 256|     50000|       1|0.60321465|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.46772603|  PASSED  
        dab_filltree|  32|  15000000|       1|0.17777476|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.13846723|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.46265863|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.62930958|  PASSED  

real	56m10.513s
user	52m30.380s
sys	3m37.020s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xcf66fe3f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xcf66fe3f
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.4  p =1-4.4e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xcf66fe3f
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xcf66fe3f
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xcf66fe3f
length= 1 gigabyte (2^30 bytes), time= 22.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xcf66fe3f
length= 2 gigabytes (2^31 bytes), time= 43.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xcf66fe3f
length= 4 gigabytes (2^32 bytes), time= 84.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xcf66fe3f
length= 4.750 gigabytes (2^32.248 bytes), time= 100 seconds
  no anomalies in 159 test result(s)


real	1m41.136s
user	1m37.956s
sys	0m2.968s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x726742fe
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x726742fe
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x726742fe
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x726742fe
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x726742fe
length= 1 gigabyte (2^30 bytes), time= 21.6 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.8  p =1-8.8e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x726742fe
length= 2 gigabytes (2^31 bytes), time= 42.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x726742fe
length= 4 gigabytes (2^32 bytes), time= 81.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x726742fe
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.2  p =  1.5e-3   unusual          
  ...and 158 test result(s) without anomalies


real	1m42.735s
user	1m39.328s
sys	0m3.276s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6095e9f7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6095e9f7
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6095e9f7
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6095e9f7
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6095e9f7
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x6095e9f7
length= 2 gigabytes (2^31 bytes), time= 42.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6095e9f7
length= 4 gigabytes (2^32 bytes), time= 84.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.7  p =  2.3e-4   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6095e9f7
length= 4.750 gigabytes (2^32.248 bytes), time= 101 seconds
  no anomalies in 159 test result(s)


real	1m41.864s
user	1m38.696s
sys	0m3.076s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7cc50051
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7cc50051
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7cc50051
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7cc50051
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7cc50051
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7cc50051
length= 2 gigabytes (2^31 bytes), time= 41.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.3  p =1-5.1e-3   unusual          
  [Low8/32]BCFN(2+3,13-2,T)         R=  +8.7  p =  4.8e-4   unusual          
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7cc50051
length= 4 gigabytes (2^32 bytes), time= 81.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.6  p =  1.9e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7cc50051
length= 8 gigabytes (2^33 bytes), time= 170 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x7cc50051
length= 16 gigabytes (2^34 bytes), time= 346 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x7cc50051
length= 32 gigabytes (2^35 bytes), time= 688 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x7cc50051
length= 64 gigabytes (2^36 bytes), time= 1387 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.6  p =  4.1e-3   unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7cc50051
length= 128 gigabytes (2^37 bytes), time= 2770 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x7cc50051
length= 166.500 gigabytes (2^37.379 bytes), time= 3601 seconds
  no anomalies in 200 test result(s)


real	60m1.593s
user	58m9.000s
sys	1m48.508s
*/
