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
/// @created on 2019-12-18 20:17:52 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 24819965-d4de-4bc0-a5ed-04df553c30ba                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot1c;
/* TEST00
time ./MRndCPP 
3202967548
2333516245
3964224213
3879251532
2192942551
2731320453
4611753090739573681

real	0m21.086s
user	0m21.060s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.55e+07  |3718123078|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.12444197|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.75345567|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.35860135|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.59165520|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.72410970|  PASSED  
        diehard_opso|   0|   2097152|     100|0.44512163|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.91134141|  PASSED  
         diehard_dna|   0|   2097152|     100|0.34608179|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.74246550|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.98144294|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.12845620|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.84310089|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.68479369|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.87760715|  PASSED  
        diehard_sums|   0|       100|     100|0.98463253|  PASSED  
        diehard_runs|   0|    100000|     100|0.59111806|  PASSED  
        diehard_runs|   0|    100000|     100|0.81313937|  PASSED  
       diehard_craps|   0|    200000|     100|0.19631816|  PASSED  
       diehard_craps|   0|    200000|     100|0.27032036|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.28521501|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.74067267|  PASSED  
         sts_monobit|   1|    100000|     100|0.71804980|  PASSED  
            sts_runs|   2|    100000|     100|0.92726804|  PASSED  
          sts_serial|   1|    100000|     100|0.95989626|  PASSED  
          sts_serial|   2|    100000|     100|0.16804799|  PASSED  
          sts_serial|   3|    100000|     100|0.62656040|  PASSED  
          sts_serial|   3|    100000|     100|0.89551653|  PASSED  
          sts_serial|   4|    100000|     100|0.38089251|  PASSED  
          sts_serial|   4|    100000|     100|0.40456828|  PASSED  
          sts_serial|   5|    100000|     100|0.35248338|  PASSED  
          sts_serial|   5|    100000|     100|0.08943527|  PASSED  
          sts_serial|   6|    100000|     100|0.90647962|  PASSED  
          sts_serial|   6|    100000|     100|0.06870147|  PASSED  
          sts_serial|   7|    100000|     100|0.82352420|  PASSED  
          sts_serial|   7|    100000|     100|0.81341846|  PASSED  
          sts_serial|   8|    100000|     100|0.69447493|  PASSED  
          sts_serial|   8|    100000|     100|0.88378164|  PASSED  
          sts_serial|   9|    100000|     100|0.99974701|   WEAK   
          sts_serial|   9|    100000|     100|0.97414630|  PASSED  
          sts_serial|  10|    100000|     100|0.60858240|  PASSED  
          sts_serial|  10|    100000|     100|0.99987922|   WEAK   
          sts_serial|  11|    100000|     100|0.54638801|  PASSED  
          sts_serial|  11|    100000|     100|0.00515584|  PASSED  
          sts_serial|  12|    100000|     100|0.53171747|  PASSED  
          sts_serial|  12|    100000|     100|0.99079338|  PASSED  
          sts_serial|  13|    100000|     100|0.06229047|  PASSED  
          sts_serial|  13|    100000|     100|0.47219342|  PASSED  
          sts_serial|  14|    100000|     100|0.00463389|   WEAK   
          sts_serial|  14|    100000|     100|0.13679783|  PASSED  
          sts_serial|  15|    100000|     100|0.02461394|  PASSED  
          sts_serial|  15|    100000|     100|0.47097086|  PASSED  
          sts_serial|  16|    100000|     100|0.33876127|  PASSED  
          sts_serial|  16|    100000|     100|0.37206145|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.74401791|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.66730488|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.15001329|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.68006595|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.48518729|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.53586978|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.73581364|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.91544591|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.29496763|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.71639599|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.33955787|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.82561509|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.91751163|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.83931101|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.78392501|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.12096485|  PASSED  
    rgb_permutations|   2|    100000|     100|0.98996896|  PASSED  
    rgb_permutations|   3|    100000|     100|0.88664510|  PASSED  
    rgb_permutations|   4|    100000|     100|0.27529308|  PASSED  
    rgb_permutations|   5|    100000|     100|0.86834211|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.40022305|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.18217662|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.83544648|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.74500075|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.80010995|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.30944938|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.59062638|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.90382154|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.73108526|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.70786081|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.41516526|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.01288731|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.95908367|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.88704877|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.57173208|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.33524425|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.45055808|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.80796228|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.95857494|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.21463502|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.72068579|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.32087544|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.34769535|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.08656809|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.56992062|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.74700380|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.96818076|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.37483225|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.24796029|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.65706673|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.78934284|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.43919312|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.85250187|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.64434990|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.13997013|  PASSED  
             dab_dct| 256|     50000|       1|0.68417725|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.80333239|  PASSED  
        dab_filltree|  32|  15000000|       1|0.59153582|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.79017367|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.68464151|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.24885634|  PASSED  

real	56m29.119s
user	52m42.596s
sys	3m33.696s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb5bd957c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb5bd957c
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb5bd957c
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb5bd957c
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb5bd957c
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb5bd957c
length= 2 gigabytes (2^31 bytes), time= 41.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb5bd957c
length= 4 gigabytes (2^32 bytes), time= 81.7 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +5.0  p =  1.4e-4   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb5bd957c
length= 5.000 gigabytes (2^32.322 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +5.0  p =  1.3e-4   mildly suspicious
  ...and 158 test result(s) without anomalies


real	1m44.222s
user	1m40.960s
sys	0m3.112s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x90035562
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x90035562
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x90035562
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  -5.3  p =1-1.0e-4   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x90035562
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x90035562
length= 1 gigabyte (2^30 bytes), time= 21.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x90035562
length= 2 gigabytes (2^31 bytes), time= 41.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-1,T)         R=  -8.2  p =1-2.1e-4   mildly suspicious
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x90035562
length= 4 gigabytes (2^32 bytes), time= 81.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x90035562
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.1  p =  2.1e-3   unusual          
  ...and 158 test result(s) without anomalies


real	1m41.622s
user	1m38.200s
sys	0m3.296s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x29487400
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x29487400
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x29487400
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.0  p =1-6.7e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x29487400
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x29487400
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x29487400
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-0,T)                  R=  -6.7  p =1-2.5e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x29487400
length= 4 gigabytes (2^32 bytes), time= 83.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x29487400
length= 5.000 gigabytes (2^32.322 bytes), time= 105 seconds
  no anomalies in 159 test result(s)


real	1m45.900s
user	1m42.664s
sys	0m3.148s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x94040a86
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x94040a86
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.2  p =1-1.2e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x94040a86
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x94040a86
length= 512 megabytes (2^29 bytes), time= 11.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x94040a86
length= 1 gigabyte (2^30 bytes), time= 22.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x94040a86
length= 2 gigabytes (2^31 bytes), time= 44.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x94040a86
length= 4 gigabytes (2^32 bytes), time= 85.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x94040a86
length= 8 gigabytes (2^33 bytes), time= 179 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +4.6  p =  2.7e-3   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x94040a86
length= 16 gigabytes (2^34 bytes), time= 364 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x94040a86
length= 32 gigabytes (2^35 bytes), time= 730 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x94040a86
length= 64 gigabytes (2^36 bytes), time= 1474 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x94040a86
length= 128 gigabytes (2^37 bytes), time= 2947 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +5.8  p =  6.5e-5   mildly suspicious
  ...and 195 test result(s) without anomalies

rng=RNG_stdin32, seed=0x94040a86
length= 156.750 gigabytes (2^37.292 bytes), time= 3601 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +6.0  p =  4.9e-5   mildly suspicious
  ...and 198 test result(s) without anomalies


real	60m2.290s
user	58m22.252s
sys	1m36.280s
*/
