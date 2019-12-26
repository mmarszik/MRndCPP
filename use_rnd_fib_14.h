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
/// @created on 2019-12-18 01:26:23 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 18e8b81c-8466-40c9-a4f8-e7d3ee9bd9ef                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib14;
/* TEST00
time ./MRndCPP 
3384036880
2574916630
2347765712
2488636922
1300471961
3410446265
4611674775112330109

real	0m7.836s
user	0m7.800s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.12e+07  |3164746924|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.19227523|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.09339515|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.30150557|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.21949726|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.99876287|   WEAK   
        diehard_opso|   0|   2097152|     100|0.45228553|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.99179780|  PASSED  
         diehard_dna|   0|   2097152|     100|0.23339896|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.53449027|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.52766393|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.96856245|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.46671858|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.28719594|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.05616910|  PASSED  
        diehard_sums|   0|       100|     100|0.02833526|  PASSED  
        diehard_runs|   0|    100000|     100|0.85312289|  PASSED  
        diehard_runs|   0|    100000|     100|0.44538790|  PASSED  
       diehard_craps|   0|    200000|     100|0.64457530|  PASSED  
       diehard_craps|   0|    200000|     100|0.94992669|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.55112560|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00869119|  PASSED  
         sts_monobit|   1|    100000|     100|0.77225901|  PASSED  
            sts_runs|   2|    100000|     100|0.32287241|  PASSED  
          sts_serial|   1|    100000|     100|0.35609288|  PASSED  
          sts_serial|   2|    100000|     100|0.66318393|  PASSED  
          sts_serial|   3|    100000|     100|0.14566595|  PASSED  
          sts_serial|   3|    100000|     100|0.79809430|  PASSED  
          sts_serial|   4|    100000|     100|0.90502130|  PASSED  
          sts_serial|   4|    100000|     100|0.39748140|  PASSED  
          sts_serial|   5|    100000|     100|0.29693819|  PASSED  
          sts_serial|   5|    100000|     100|0.95359710|  PASSED  
          sts_serial|   6|    100000|     100|0.59543735|  PASSED  
          sts_serial|   6|    100000|     100|0.45004259|  PASSED  
          sts_serial|   7|    100000|     100|0.60851357|  PASSED  
          sts_serial|   7|    100000|     100|0.55291360|  PASSED  
          sts_serial|   8|    100000|     100|0.24001555|  PASSED  
          sts_serial|   8|    100000|     100|0.83709158|  PASSED  
          sts_serial|   9|    100000|     100|0.09987962|  PASSED  
          sts_serial|   9|    100000|     100|0.79112909|  PASSED  
          sts_serial|  10|    100000|     100|0.28017848|  PASSED  
          sts_serial|  10|    100000|     100|0.66693638|  PASSED  
          sts_serial|  11|    100000|     100|0.83785521|  PASSED  
          sts_serial|  11|    100000|     100|0.69764798|  PASSED  
          sts_serial|  12|    100000|     100|0.78682718|  PASSED  
          sts_serial|  12|    100000|     100|0.53209921|  PASSED  
          sts_serial|  13|    100000|     100|0.25122544|  PASSED  
          sts_serial|  13|    100000|     100|0.67702700|  PASSED  
          sts_serial|  14|    100000|     100|0.96113115|  PASSED  
          sts_serial|  14|    100000|     100|0.35589699|  PASSED  
          sts_serial|  15|    100000|     100|0.61945479|  PASSED  
          sts_serial|  15|    100000|     100|0.50493755|  PASSED  
          sts_serial|  16|    100000|     100|0.89190285|  PASSED  
          sts_serial|  16|    100000|     100|0.95336233|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.61999940|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.37218123|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.18044953|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.69249814|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.47995645|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.44074123|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.24144288|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.37414563|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.59962748|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.63172838|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.25316199|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.27831883|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.13832086|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.13580633|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.68197950|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.05823082|  PASSED  
    rgb_permutations|   2|    100000|     100|0.50424223|  PASSED  
    rgb_permutations|   3|    100000|     100|0.33238932|  PASSED  
    rgb_permutations|   4|    100000|     100|0.11560299|  PASSED  
    rgb_permutations|   5|    100000|     100|0.46748593|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.66924545|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.09820867|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.59966863|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.59953269|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.88274794|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.11753527|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.67032364|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.96806218|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.19096390|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.41840267|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.73574712|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.46283998|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.87238827|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.94418786|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.84020455|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.87900827|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.45551285|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.69382981|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.65428696|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.45390148|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.08353951|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.63994943|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.05779674|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.73735995|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.23106054|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.86747762|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.48834895|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.58148732|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.98577176|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.30288741|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.44845658|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.30591064|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.23345692|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.08697333|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.27162601|  PASSED  
             dab_dct| 256|     50000|       1|0.63491785|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.95811894|  PASSED  
        dab_filltree|  32|  15000000|       1|0.00942441|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.42669233|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.29391844|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.13708398|  PASSED  

real	50m21.167s
user	46m36.176s
sys	3m38.780s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xea2c22e6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xea2c22e6
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.1  p =1-2.0e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.5e-3   unusual          
  [Low1/32]Gap-16:B                 R=  +4.1  p =  2.5e-3   unusual          
  ...and 114 test result(s) without anomalies

rng=RNG_stdin32, seed=0xea2c22e6
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xea2c22e6
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xea2c22e6
length= 1 gigabyte (2^30 bytes), time= 20.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +10.7  p =  1.2e-4   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xea2c22e6
length= 2 gigabytes (2^31 bytes), time= 39.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +30.9  p =  1.9e-14    FAIL !         
  ...and 147 test result(s) without anomalies


real	0m40.421s
user	0m39.440s
sys	0m0.904s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2060f28e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2060f28e
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-6,T)         R=  -6.2  p =1-2.7e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2060f28e
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2060f28e
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.4  p =  1.9e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -4.5  p =1-3.4e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2060f28e
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2060f28e
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +28.2  p =  3.9e-13    FAIL           
  ...and 147 test result(s) without anomalies


real	0m38.253s
user	0m37.280s
sys	0m0.860s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc9229f18
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc9229f18
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc9229f18
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc9229f18
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xc9229f18
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +10.7  p =  1.3e-4   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc9229f18
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +25.6  p =  6.5e-12    FAIL           
  [Low1/32]BCFN(2+1,13-3,T)         R= +10.0  p =  1.5e-4   mildly suspicious
  ...and 146 test result(s) without anomalies


real	0m38.217s
user	0m37.312s
sys	0m0.828s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa83b56d7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa83b56d7
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xa83b56d7
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa83b56d7
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.0  p =  2.8e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -3.9  p =1-7.9e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa83b56d7
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +12.7  p =  1.7e-5   suspicious       
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa83b56d7
length= 2 gigabytes (2^31 bytes), time= 37.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +25.4  p =  7.7e-12    FAIL           
  [Low1/32]BCFN(2+1,13-3,T)         R=  +9.2  p =  3.6e-4   unusual          
  [Low1/32]BCFN(2+3,13-4,T)         R= +10.4  p =  1.7e-4   unusual          
  ...and 145 test result(s) without anomalies


real	0m38.553s
user	0m37.636s
sys	0m0.820s
*/
