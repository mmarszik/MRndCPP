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
/// @created on 2019-12-08 02:57:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8f4635a2-d7ca-4771-81ec-c2e4a2e59fab                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib1;
/* TEST00
time ./MRndCPP 
2772671560
1230292352
3182881147
2748660412
3615175996
2860307554
4611726330464399917

real	0m6.502s
user	0m6.488s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.24e+07  |2883974164|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.20275038|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.60167573|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.69450781|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.12381381|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.81009276|  PASSED  
        diehard_opso|   0|   2097152|     100|0.14069729|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.27480152|  PASSED  
         diehard_dna|   0|   2097152|     100|0.91008491|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.08035476|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.98735471|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.54444845|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.93100089|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.99265969|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.30775090|  PASSED  
        diehard_sums|   0|       100|     100|0.36166141|  PASSED  
        diehard_runs|   0|    100000|     100|0.84018477|  PASSED  
        diehard_runs|   0|    100000|     100|0.65889590|  PASSED  
       diehard_craps|   0|    200000|     100|0.53716306|  PASSED  
       diehard_craps|   0|    200000|     100|0.19203092|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.20447662|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.54954551|  PASSED  
         sts_monobit|   1|    100000|     100|0.97980645|  PASSED  
            sts_runs|   2|    100000|     100|0.97012229|  PASSED  
          sts_serial|   1|    100000|     100|0.08507332|  PASSED  
          sts_serial|   2|    100000|     100|0.08257315|  PASSED  
          sts_serial|   3|    100000|     100|0.60152866|  PASSED  
          sts_serial|   3|    100000|     100|0.99702823|   WEAK   
          sts_serial|   4|    100000|     100|0.69914285|  PASSED  
          sts_serial|   4|    100000|     100|0.86368171|  PASSED  
          sts_serial|   5|    100000|     100|0.71322620|  PASSED  
          sts_serial|   5|    100000|     100|0.72916695|  PASSED  
          sts_serial|   6|    100000|     100|0.43047529|  PASSED  
          sts_serial|   6|    100000|     100|0.05194734|  PASSED  
          sts_serial|   7|    100000|     100|0.88658102|  PASSED  
          sts_serial|   7|    100000|     100|0.52113625|  PASSED  
          sts_serial|   8|    100000|     100|0.75364961|  PASSED  
          sts_serial|   8|    100000|     100|0.92729746|  PASSED  
          sts_serial|   9|    100000|     100|0.36103799|  PASSED  
          sts_serial|   9|    100000|     100|0.44326359|  PASSED  
          sts_serial|  10|    100000|     100|0.87521486|  PASSED  
          sts_serial|  10|    100000|     100|0.74962837|  PASSED  
          sts_serial|  11|    100000|     100|0.74537838|  PASSED  
          sts_serial|  11|    100000|     100|0.54510685|  PASSED  
          sts_serial|  12|    100000|     100|0.12614620|  PASSED  
          sts_serial|  12|    100000|     100|0.16444348|  PASSED  
          sts_serial|  13|    100000|     100|0.46841862|  PASSED  
          sts_serial|  13|    100000|     100|0.89270806|  PASSED  
          sts_serial|  14|    100000|     100|0.20983156|  PASSED  
          sts_serial|  14|    100000|     100|0.79156323|  PASSED  
          sts_serial|  15|    100000|     100|0.79868495|  PASSED  
          sts_serial|  15|    100000|     100|0.13895175|  PASSED  
          sts_serial|  16|    100000|     100|0.40126222|  PASSED  
          sts_serial|  16|    100000|     100|0.28715114|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.26432530|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.61840464|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.13639900|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.92173454|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.94471732|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.90818138|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.12892429|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.11903481|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.34007648|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.57739041|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.84686976|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.86342323|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.40780737|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.41964697|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.67179332|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.01893676|  PASSED  
    rgb_permutations|   2|    100000|     100|0.34118976|  PASSED  
    rgb_permutations|   3|    100000|     100|0.78040998|  PASSED  
    rgb_permutations|   4|    100000|     100|0.51899086|  PASSED  
    rgb_permutations|   5|    100000|     100|0.59301211|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.93023362|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.46071593|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.53184475|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.25523514|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.62384530|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.32132027|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.88163627|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.53201922|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.91872127|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.76493423|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.32851519|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.60375368|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.99598865|   WEAK   
      rgb_lagged_sum|  13|   1000000|     100|0.48144807|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.86346731|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.82494356|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.97579275|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.96315542|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.24397752|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.95329643|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.38554941|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.73943238|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.62848285|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.92582111|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.28381219|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.70086832|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.52850341|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.13556912|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.04536530|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.66508812|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.53538605|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.70091516|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.55320191|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.79266616|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.68055350|  PASSED  
             dab_dct| 256|     50000|       1|0.09390642|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.93086435|  PASSED  
        dab_filltree|  32|  15000000|       1|0.06460243|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.35633109|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.21572917|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.04626776|  PASSED  

real	49m9.804s
user	45m30.484s
sys	3m33.616s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x79ac0907
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x79ac0907
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-5,T)         R= +14.4  p =  8.4e-6   suspicious       
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x79ac0907
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +24.0  p =  2.0e-10   VERY SUSPICIOUS 
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x79ac0907
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R=  +9.2  p =  3.9e-4   unusual          
  [Low8/32]BCFN(2+2,13-3,T)         R= +36.4  p =  5.2e-17    FAIL !         
  ...and 130 test result(s) without anomalies


real	0m10.533s
user	0m10.188s
sys	0m0.312s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x713e4c04
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x713e4c04
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-5,T)         R=  +9.4  p =  7.6e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x713e4c04
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.6  p = 0.988     unusual          
  [Low8/32]BCFN(2+1,13-3,T)         R=  +9.0  p =  4.6e-4   unusual          
  [Low8/32]BCFN(2+2,13-4,T)         R= +14.3  p =  3.5e-6   suspicious       
  [Low8/32]Gap-16:A                 R=  -3.6  p =1-1.8e-3   unusual          
  [Low1/32]Gap-16:B                 R=  -5.0  p =1-1.8e-4   mildly suspicious
  ...and 119 test result(s) without anomalies

rng=RNG_stdin32, seed=0x713e4c04
length= 512 megabytes (2^29 bytes), time= 11.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.6  p =1-2.8e-3   unusual          
  [Low8/32]BCFN(2+1,13-3,T)         R=  +9.8  p =  2.0e-4   mildly suspicious
  [Low8/32]BCFN(2+2,13-3,T)         R= +23.9  p =  4.2e-11    FAIL           
  ...and 129 test result(s) without anomalies


real	0m12.188s
user	0m11.888s
sys	0m0.280s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb52f104
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb52f104
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-5,T)         R= +11.1  p =  1.5e-4   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb52f104
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.2  p =1-1.1e-3   unusual          
  [Low8/32]BCFN(2+2,13-4,T)         R= +18.4  p =  5.6e-8   very suspicious  
  [Low8/32]BCFN(2+3,13-4,T)         R= +14.2  p =  3.7e-6   suspicious       
  ...and 121 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb52f104
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +26.9  p =  1.5e-12    FAIL           
  [Low8/32]BCFN(2+3,13-3,T)         R= +11.8  p =  2.1e-5   mildly suspicious
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.6  p =  1.6e-3   unusual          
  ...and 129 test result(s) without anomalies


real	0m10.543s
user	0m10.260s
sys	0m0.256s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf7b8eef7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf7b8eef7
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -3.9  p =1-2.5e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf7b8eef7
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.1  p =1-5.6e-3   unusual          
  [Low8/32]BCFN(2+2,13-4,T)         R= +21.1  p =  3.6e-9    VERY SUSPICIOUS 
  [Low8/32]BCFN(2+3,13-4,T)         R=  +9.1  p =  6.7e-4   unusual          
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.6  p =  1.5e-3   unusual          
  ...and 120 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf7b8eef7
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +37.1  p =  2.2e-17    FAIL !         
  [Low8/32]BCFN(2+3,13-3,T)         R= +11.8  p =  2.1e-5   mildly suspicious
  ...and 130 test result(s) without anomalies


real	0m10.505s
user	0m10.244s
sys	0m0.240s
*/
