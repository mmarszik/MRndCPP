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
/// @created on 2019-12-18 01:27:46 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token a2dd08a7-9dc2-4201-9715-62da74a61002                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib5;
/* TEST00
time ./MRndCPP 
2810413297
2709879
97689813
2134377944
2069403271
4234901334
4611618284321074569

real	0m7.797s
user	0m7.792s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  |3958438234|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.71432197|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.61442413|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.17598803|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.04200023|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.29517039|  PASSED  
        diehard_opso|   0|   2097152|     100|0.72045707|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.39887154|  PASSED  
         diehard_dna|   0|   2097152|     100|0.11173894|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.63174471|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.87606957|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.74215483|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.81196144|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.85497144|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.88375744|  PASSED  
        diehard_sums|   0|       100|     100|0.08567396|  PASSED  
        diehard_runs|   0|    100000|     100|0.53649511|  PASSED  
        diehard_runs|   0|    100000|     100|0.19776041|  PASSED  
       diehard_craps|   0|    200000|     100|0.39303301|  PASSED  
       diehard_craps|   0|    200000|     100|0.56260541|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.82763832|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.40423332|  PASSED  
         sts_monobit|   1|    100000|     100|0.46145943|  PASSED  
            sts_runs|   2|    100000|     100|0.90922738|  PASSED  
          sts_serial|   1|    100000|     100|0.20364717|  PASSED  
          sts_serial|   2|    100000|     100|0.42051681|  PASSED  
          sts_serial|   3|    100000|     100|0.42950940|  PASSED  
          sts_serial|   3|    100000|     100|0.65461390|  PASSED  
          sts_serial|   4|    100000|     100|0.98442882|  PASSED  
          sts_serial|   4|    100000|     100|0.40839160|  PASSED  
          sts_serial|   5|    100000|     100|0.75468771|  PASSED  
          sts_serial|   5|    100000|     100|0.42930219|  PASSED  
          sts_serial|   6|    100000|     100|0.67665230|  PASSED  
          sts_serial|   6|    100000|     100|0.78936011|  PASSED  
          sts_serial|   7|    100000|     100|0.76133879|  PASSED  
          sts_serial|   7|    100000|     100|0.27800858|  PASSED  
          sts_serial|   8|    100000|     100|0.83440751|  PASSED  
          sts_serial|   8|    100000|     100|0.69699764|  PASSED  
          sts_serial|   9|    100000|     100|0.93235390|  PASSED  
          sts_serial|   9|    100000|     100|0.07518268|  PASSED  
          sts_serial|  10|    100000|     100|0.98125543|  PASSED  
          sts_serial|  10|    100000|     100|0.87240287|  PASSED  
          sts_serial|  11|    100000|     100|0.84115059|  PASSED  
          sts_serial|  11|    100000|     100|0.78130260|  PASSED  
          sts_serial|  12|    100000|     100|0.79231680|  PASSED  
          sts_serial|  12|    100000|     100|0.98421540|  PASSED  
          sts_serial|  13|    100000|     100|0.92461535|  PASSED  
          sts_serial|  13|    100000|     100|0.57582176|  PASSED  
          sts_serial|  14|    100000|     100|0.52271293|  PASSED  
          sts_serial|  14|    100000|     100|0.05615724|  PASSED  
          sts_serial|  15|    100000|     100|0.32172056|  PASSED  
          sts_serial|  15|    100000|     100|0.28058432|  PASSED  
          sts_serial|  16|    100000|     100|0.94375913|  PASSED  
          sts_serial|  16|    100000|     100|0.99398037|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.78955875|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.52833153|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.06905357|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.13048967|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.86834785|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.96705527|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.99604649|   WEAK   
         rgb_bitdist|   8|    100000|     100|0.66962454|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.46104780|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.91631772|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.80634295|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.24959470|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.29604260|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.28315954|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.49592961|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.05326712|  PASSED  
    rgb_permutations|   2|    100000|     100|0.61535163|  PASSED  
    rgb_permutations|   3|    100000|     100|0.66230039|  PASSED  
    rgb_permutations|   4|    100000|     100|0.86298012|  PASSED  
    rgb_permutations|   5|    100000|     100|0.80025837|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.35999822|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.57159715|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.85377496|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.71288620|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.41445711|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.94926188|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.92455924|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.56538864|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.06818771|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.24706753|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.98472792|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.21028859|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.96821896|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.12160433|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.59778888|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.99646733|   WEAK   
      rgb_lagged_sum|  16|   1000000|     100|0.80899758|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.46929623|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.24837540|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.68421571|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.98238484|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.86312864|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.48135699|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.67492216|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.48648586|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.43819606|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.67661917|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.69370352|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.57298753|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.50675295|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.52028450|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.84712277|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.72070030|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.79553023|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.55816253|  PASSED  
             dab_dct| 256|     50000|       1|0.00196078|   WEAK   
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.45505944|  PASSED  
        dab_filltree|  32|  15000000|       1|0.61354251|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.13003094|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.90634553|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.90818595|  PASSED  

real	53m41.256s
user	50m2.924s
sys	3m32.512s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x96801c8b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x96801c8b
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x96801c8b
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x96801c8b
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x96801c8b
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R=  +9.8  p =  3.2e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x96801c8b
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +30.4  p =  3.6e-14    FAIL           
  ...and 147 test result(s) without anomalies


real	0m38.343s
user	0m37.308s
sys	0m0.964s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6421252e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6421252e
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6421252e
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6421252e
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6421252e
length= 1 gigabyte (2^30 bytes), time= 20.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +13.6  p =  6.7e-6   suspicious       
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6421252e
length= 2 gigabytes (2^31 bytes), time= 39.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +24.7  p =  1.6e-11    FAIL           
  ...and 147 test result(s) without anomalies


real	0m39.796s
user	0m38.992s
sys	0m0.744s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xcfd1a102
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xcfd1a102
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xcfd1a102
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xcfd1a102
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xcfd1a102
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.4  p =  6.0e-3   unusual          
  [Low1/32]BCFN(2+0,13-4,T)         R= +12.3  p =  2.6e-5   suspicious       
  [Low1/32]BCFN(2+1,13-4,T)         R=  +8.4  p =  1.4e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin32, seed=0xcfd1a102
length= 2 gigabytes (2^31 bytes), time= 37.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +32.0  p =  6.4e-15    FAIL !         
  ...and 147 test result(s) without anomalies


real	0m38.405s
user	0m37.540s
sys	0m0.768s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x551d5ea0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x551d5ea0
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x551d5ea0
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x551d5ea0
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x551d5ea0
length= 1 gigabyte (2^30 bytes), time= 19.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +12.8  p =  1.6e-5   suspicious       
  [Low1/32]FPF-14+6/16:all          R=  -4.4  p =1-6.9e-4   unusual          
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x551d5ea0
length= 2 gigabytes (2^31 bytes), time= 38.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +23.9  p =  4.2e-11    FAIL           
  ...and 147 test result(s) without anomalies


real	0m38.829s
user	0m37.952s
sys	0m0.764s
*/
