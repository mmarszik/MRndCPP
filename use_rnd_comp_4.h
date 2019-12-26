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
/// @created on 2019-12-08 02:56:29 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e4876b20-c1b1-40b9-a269-339f7584338e                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_lin.h"

using TRnd = RndComp< RndLin1, RndLin1, 7 >;
/* TEST00
time ./MRndCPP 
2650568634
2384656680
758777039
281209698
3608703350
2808436608
4611654936243361419

real	0m3.884s
user	0m3.864s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.34e+07  |4048502032|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.03823191|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.13851625|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.15819419|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.23126745|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.74051343|  PASSED  
        diehard_opso|   0|   2097152|     100|0.43259586|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.63613678|  PASSED  
         diehard_dna|   0|   2097152|     100|0.43579537|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.36911072|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.63595961|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.51744758|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.61428518|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.85610484|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.88816902|  PASSED  
        diehard_sums|   0|       100|     100|0.73116790|  PASSED  
        diehard_runs|   0|    100000|     100|0.95168566|  PASSED  
        diehard_runs|   0|    100000|     100|0.85846088|  PASSED  
       diehard_craps|   0|    200000|     100|0.17094141|  PASSED  
       diehard_craps|   0|    200000|     100|0.00917655|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99003566|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99995212|   WEAK   
         sts_monobit|   1|    100000|     100|0.13684021|  PASSED  
            sts_runs|   2|    100000|     100|0.41350072|  PASSED  
          sts_serial|   1|    100000|     100|0.78248185|  PASSED  
          sts_serial|   2|    100000|     100|0.80336592|  PASSED  
          sts_serial|   3|    100000|     100|0.28726897|  PASSED  
          sts_serial|   3|    100000|     100|0.28432236|  PASSED  
          sts_serial|   4|    100000|     100|0.18096107|  PASSED  
          sts_serial|   4|    100000|     100|0.67446695|  PASSED  
          sts_serial|   5|    100000|     100|0.23381587|  PASSED  
          sts_serial|   5|    100000|     100|0.98331783|  PASSED  
          sts_serial|   6|    100000|     100|0.32597602|  PASSED  
          sts_serial|   6|    100000|     100|0.41975419|  PASSED  
          sts_serial|   7|    100000|     100|0.16578103|  PASSED  
          sts_serial|   7|    100000|     100|0.53472776|  PASSED  
          sts_serial|   8|    100000|     100|0.92657856|  PASSED  
          sts_serial|   8|    100000|     100|0.28680296|  PASSED  
          sts_serial|   9|    100000|     100|0.84118489|  PASSED  
          sts_serial|   9|    100000|     100|0.22671486|  PASSED  
          sts_serial|  10|    100000|     100|0.91624126|  PASSED  
          sts_serial|  10|    100000|     100|0.44208585|  PASSED  
          sts_serial|  11|    100000|     100|0.90058064|  PASSED  
          sts_serial|  11|    100000|     100|0.91011066|  PASSED  
          sts_serial|  12|    100000|     100|0.67432791|  PASSED  
          sts_serial|  12|    100000|     100|0.72705876|  PASSED  
          sts_serial|  13|    100000|     100|0.79694672|  PASSED  
          sts_serial|  13|    100000|     100|0.86124609|  PASSED  
          sts_serial|  14|    100000|     100|0.15419135|  PASSED  
          sts_serial|  14|    100000|     100|0.53016477|  PASSED  
          sts_serial|  15|    100000|     100|0.37407324|  PASSED  
          sts_serial|  15|    100000|     100|0.78139671|  PASSED  
          sts_serial|  16|    100000|     100|0.82438084|  PASSED  
          sts_serial|  16|    100000|     100|0.58167098|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.97627373|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.43610878|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.47341849|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.89705763|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.34841847|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.64456806|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.17591975|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.58980508|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.09925404|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.85020727|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.78975586|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.93510757|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.99939919|   WEAK   
rgb_minimum_distance|   3|     10000|    1000|0.41600607|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.73869538|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.31481670|  PASSED  
    rgb_permutations|   2|    100000|     100|0.93800524|  PASSED  
    rgb_permutations|   3|    100000|     100|0.30481464|  PASSED  
    rgb_permutations|   4|    100000|     100|0.82893555|  PASSED  
    rgb_permutations|   5|    100000|     100|0.99595104|   WEAK   
      rgb_lagged_sum|   0|   1000000|     100|0.59809064|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.06783094|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.22465018|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.69591734|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.64920043|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.16597634|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.36065911|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.54301831|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.33046180|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.47566832|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.21573156|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.63269536|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.25405196|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.49502675|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.28851628|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.36808595|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.04328820|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.91478377|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.83690905|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.52221525|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.83424995|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.15072544|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.58897315|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.82353754|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.62931060|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.66572373|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.42432622|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.34402870|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.51164879|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.98577004|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.43967985|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.25359842|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.41839871|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.08948329|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.05742543|  PASSED  
             dab_dct| 256|     50000|       1|0.96019898|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.21576030|  PASSED  
        dab_filltree|  32|  15000000|       1|0.15355437|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.65262126|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.39273757|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.64786799|  PASSED  

real	46m42.312s
user	43m2.052s
sys	3m34.448s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb1fceb0d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb1fceb0d
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb1fceb0d
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb1fceb0d
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb1fceb0d
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb1fceb0d
length= 2 gigabytes (2^31 bytes), time= 36.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb1fceb0d
length= 4 gigabytes (2^32 bytes), time= 70.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.5  p =1-3.7e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb1fceb0d
length= 5.750 gigabytes (2^32.524 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.771s
user	1m41.300s
sys	0m2.268s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x557664ad
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x557664ad
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x557664ad
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x557664ad
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x557664ad
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x557664ad
length= 2 gigabytes (2^31 bytes), time= 36.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x557664ad
length= 4 gigabytes (2^32 bytes), time= 71.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x557664ad
length= 5.750 gigabytes (2^32.524 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.637s
user	1m41.020s
sys	0m2.276s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf59ac1f4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf59ac1f4
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -4.3  p =1-8.5e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf59ac1f4
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf59ac1f4
length= 512 megabytes (2^29 bytes), time= 9.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf59ac1f4
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf59ac1f4
length= 2 gigabytes (2^31 bytes), time= 36.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf59ac1f4
length= 4 gigabytes (2^32 bytes), time= 74.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.3  p =1-4.5e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf59ac1f4
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.8  p =1-8.8e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m44.677s
user	1m42.376s
sys	0m2.128s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xee6ff4da
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xee6ff4da
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -3.4  p =1-2.2e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xee6ff4da
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xee6ff4da
length= 512 megabytes (2^29 bytes), time= 9.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xee6ff4da
length= 1 gigabyte (2^30 bytes), time= 18.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xee6ff4da
length= 2 gigabytes (2^31 bytes), time= 36.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xee6ff4da
length= 4 gigabytes (2^32 bytes), time= 69.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xee6ff4da
length= 8 gigabytes (2^33 bytes), time= 146 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  1.7e-3   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0xee6ff4da
length= 16 gigabytes (2^34 bytes), time= 298 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xee6ff4da
length= 32 gigabytes (2^35 bytes), time= 596 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xee6ff4da
length= 64 gigabytes (2^36 bytes), time= 1205 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+6,13-3,T)         R= +11.2  p =  4.3e-5   unusual          
  [Low1/32]BCFN(2+7,13-3,T)         R= +10.4  p =  1.0e-4   unusual          
  [Low1/32]BCFN(2+8,13-4,T)         R= +11.3  p =  6.9e-5   unusual          
  [Low1/32]BCFN(2+9,13-5,T)         R= +15.7  p =  2.5e-6   mildly suspicious
  [Low1/32]BCFN(2+10,13-5,T)        R= +18.0  p =  3.0e-7   suspicious       
  ...and 184 test result(s) without anomalies

rng=RNG_stdin32, seed=0xee6ff4da
length= 128 gigabytes (2^37 bytes), time= 2414 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+4,13-1,T)         R= +10.3  p =  5.5e-5   unusual          
  [Low1/32]BCFN(2+5,13-1,T)         R= +18.9  p =  1.3e-9    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+6,13-2,T)         R= +37.7  p =  7.4e-19    FAIL !         
  [Low1/32]BCFN(2+7,13-3,T)         R= +38.4  p =  5.7e-18    FAIL !         
  [Low1/32]BCFN(2+8,13-3,T)         R= +53.1  p =  6.6e-25    FAIL !!        
  [Low1/32]BCFN(2+9,13-4,T)         R= +60.6  p =  1.9e-26    FAIL !!        
  [Low1/32]BCFN(2+10,13-5,T)        R= +50.0  p =  8.9e-20    FAIL !         
  [Low1/32]BCFN(2+11,13-5,T)        R= +40.6  p =  4.2e-16    FAIL !         
  [Low1/32]BCFN(2+12,13-6,T)        R= +25.4  p =  3.9e-9   very suspicious  
  [Low1/32]BCFN(2+13,13-6,T)        R= +29.4  p =  1.6e-10   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+14,13-7,T)        R= +19.1  p =  2.2e-6   unusual          
  ...and 185 test result(s) without anomalies


real	40m14.802s
user	39m20.796s
sys	0m48.400s
*/
