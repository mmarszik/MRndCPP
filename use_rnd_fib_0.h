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
/// @created on 2019-12-08 02:57:29 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 4f1a1ab5-c27a-40d1-a81b-84e2338f829b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib0;
/* TEST00
time ./MRndCPP 
753734251
3857031821
745688813
662591381
2862306613
3243338222
4611585175185574244

real	0m6.523s
user	0m6.512s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.26e+07  |4269736820|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.26837137|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.97595978|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.87852020|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.85238475|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.98481177|  PASSED  
        diehard_opso|   0|   2097152|     100|0.90932443|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.63572561|  PASSED  
         diehard_dna|   0|   2097152|     100|0.70887010|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.91856943|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.99089836|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.02307909|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.55523059|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.84900071|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.78847904|  PASSED  
        diehard_sums|   0|       100|     100|0.34303398|  PASSED  
        diehard_runs|   0|    100000|     100|0.95379798|  PASSED  
        diehard_runs|   0|    100000|     100|0.80478485|  PASSED  
       diehard_craps|   0|    200000|     100|0.15544785|  PASSED  
       diehard_craps|   0|    200000|     100|0.32772895|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.09412826|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.26315959|  PASSED  
         sts_monobit|   1|    100000|     100|0.97596109|  PASSED  
            sts_runs|   2|    100000|     100|0.43836664|  PASSED  
          sts_serial|   1|    100000|     100|0.80650837|  PASSED  
          sts_serial|   2|    100000|     100|0.85799980|  PASSED  
          sts_serial|   3|    100000|     100|0.86670845|  PASSED  
          sts_serial|   3|    100000|     100|0.95398131|  PASSED  
          sts_serial|   4|    100000|     100|0.99037523|  PASSED  
          sts_serial|   4|    100000|     100|0.32673215|  PASSED  
          sts_serial|   5|    100000|     100|0.97780416|  PASSED  
          sts_serial|   5|    100000|     100|0.26939879|  PASSED  
          sts_serial|   6|    100000|     100|0.93886112|  PASSED  
          sts_serial|   6|    100000|     100|0.84234614|  PASSED  
          sts_serial|   7|    100000|     100|0.37092394|  PASSED  
          sts_serial|   7|    100000|     100|0.29720097|  PASSED  
          sts_serial|   8|    100000|     100|0.92783680|  PASSED  
          sts_serial|   8|    100000|     100|0.93604600|  PASSED  
          sts_serial|   9|    100000|     100|0.81662144|  PASSED  
          sts_serial|   9|    100000|     100|0.77507021|  PASSED  
          sts_serial|  10|    100000|     100|0.29966120|  PASSED  
          sts_serial|  10|    100000|     100|0.85426137|  PASSED  
          sts_serial|  11|    100000|     100|0.44194077|  PASSED  
          sts_serial|  11|    100000|     100|0.40533335|  PASSED  
          sts_serial|  12|    100000|     100|0.18536129|  PASSED  
          sts_serial|  12|    100000|     100|0.71830646|  PASSED  
          sts_serial|  13|    100000|     100|0.04096766|  PASSED  
          sts_serial|  13|    100000|     100|0.28870404|  PASSED  
          sts_serial|  14|    100000|     100|0.44582648|  PASSED  
          sts_serial|  14|    100000|     100|0.99082013|  PASSED  
          sts_serial|  15|    100000|     100|0.62550783|  PASSED  
          sts_serial|  15|    100000|     100|0.91303057|  PASSED  
          sts_serial|  16|    100000|     100|0.37457775|  PASSED  
          sts_serial|  16|    100000|     100|0.81817633|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.32143063|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.31242653|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.08023517|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.39106435|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.24285819|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.05547759|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.12260339|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.54016543|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.94291571|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.53128113|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.94609420|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.57234206|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.43445698|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.29503773|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.30737128|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.63164187|  PASSED  
    rgb_permutations|   2|    100000|     100|0.98924883|  PASSED  
    rgb_permutations|   3|    100000|     100|0.81821336|  PASSED  
    rgb_permutations|   4|    100000|     100|0.54455099|  PASSED  
    rgb_permutations|   5|    100000|     100|0.26685279|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.41506957|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.48400572|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.08098665|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.87532822|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.67239368|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.50434491|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.07515223|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.10643602|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.04279364|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.62956186|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.39386460|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.14704861|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.57323640|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.84748334|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.36624984|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.28149917|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.36115106|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.70004949|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.68393834|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.44143796|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.64150566|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.79741155|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.65947697|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.47875467|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.04165480|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.79491067|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.09324934|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.56658842|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.54924494|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.70649548|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.98921591|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.30988529|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.98962356|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.30493565|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.13807404|  PASSED  
             dab_dct| 256|     50000|       1|0.01907613|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.83300867|  PASSED  
        dab_filltree|  32|  15000000|       1|0.47180086|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.75925279|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.77168165|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.95069809|  PASSED  

real	47m37.252s
user	44m7.356s
sys	3m23.404s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xaaee668c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xaaee668c
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +7.0  p =  6.7e-4   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xaaee668c
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xaaee668c
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.2  p =  2.3e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +5.3  p =  9.3e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xaaee668c
length= 1 gigabyte (2^30 bytes), time= 20.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +10.0  p =  1.1e-4   mildly suspicious
  [Low1/32]BCFN(2+0,13-4,T)         R= +14.5  p =  2.9e-6   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R= +12.0  p =  2.7e-7   very suspicious  
  ...and 138 test result(s) without anomalies

rng=RNG_stdin32, seed=0xaaee668c
length= 2 gigabytes (2^31 bytes), time= 39.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R= +20.8  p =  1.2e-10   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+0,13-3,T)         R= +24.6  p =  1.8e-11    FAIL           
  [Low1/32]DC6-9x1Bytes-1           R= +16.7  p =  4.6e-10   VERY SUSPICIOUS 
  ...and 145 test result(s) without anomalies


real	0m39.691s
user	0m38.600s
sys	0m0.948s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd29ab9a7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd29ab9a7
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd29ab9a7
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.4  p =  1.9e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd29ab9a7
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +14.7  p =  6.2e-6   suspicious       
  [Low1/32]DC6-9x1Bytes-1           R=  +6.5  p =  1.9e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd29ab9a7
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +19.4  p =  1.9e-8    VERY SUSPICIOUS 
  [Low1/32]DC6-9x1Bytes-1           R=  +8.1  p =  1.1e-4   suspicious       
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd29ab9a7
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R= +19.2  p =  8.9e-10   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+0,13-3,T)         R= +40.0  p =  9.9e-19    FAIL !         
  [Low1/32]DC6-9x1Bytes-1           R= +17.2  p =  2.3e-10    FAIL           
  ...and 145 test result(s) without anomalies


real	0m37.930s
user	0m37.104s
sys	0m0.764s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x479f473c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x479f473c
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x479f473c
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x479f473c
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.7  p =  1.4e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +5.2  p = 0.010     unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x479f473c
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-4,T)         R= +18.1  p =  7.2e-8   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R=  +8.5  p =  6.6e-5   suspicious       
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x479f473c
length= 2 gigabytes (2^31 bytes), time= 36.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R= +18.9  p =  1.1e-9    VERY SUSPICIOUS 
  [Low8/32]BCFN(2+2,13-2,T)         R=  +8.5  p =  6.0e-4   unusual          
  [Low1/32]BCFN(2+0,13-3,T)         R= +30.3  p =  3.8e-14    FAIL           
  [Low1/32]DC6-9x1Bytes-1           R= +19.2  p =  1.2e-11    FAIL           
  ...and 144 test result(s) without anomalies


real	0m37.531s
user	0m36.648s
sys	0m0.808s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd5a649be
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd5a649be
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd5a649be
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.8  p =  1.2e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +6.4  p =  2.8e-3   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd5a649be
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +15.9  p =  2.0e-6   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R=  +8.7  p =  9.6e-5   suspicious       
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd5a649be
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R=  +8.0  p =  1.1e-3   unusual          
  [Low1/32]BCFN(2+0,13-4,T)         R= +25.0  p =  7.2e-11    FAIL           
  [Low1/32]DC6-9x1Bytes-1           R= +10.7  p =  2.0e-6   very suspicious  
  ...and 138 test result(s) without anomalies


real	0m19.850s
user	0m19.240s
sys	0m0.528s
*/
