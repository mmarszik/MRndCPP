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
/// @created on 2019-12-08 02:59:27 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token fc39ac9b-61c1-4572-a7a0-b05628f15f6e                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin1a;
/* TEST00
time ./MRndCPP 
287134473
3829168161
2882927559
2540978429
635349956
1965515859
18446652000168661808

real	0m56.823s
user	0m56.604s
sys	0m0.028s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.15e+07  | 907483015|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.46792069|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.62640638|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.84163710|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.09383613|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.36340303|  PASSED  
        diehard_opso|   0|   2097152|     100|0.10445706|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.10425575|  PASSED  
         diehard_dna|   0|   2097152|     100|0.63957189|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.66876938|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.38268678|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.07295537|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.00826099|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.75061504|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.36832917|  PASSED  
        diehard_sums|   0|       100|     100|0.00355061|   WEAK   
        diehard_runs|   0|    100000|     100|0.99773632|   WEAK   
        diehard_runs|   0|    100000|     100|0.50423362|  PASSED  
       diehard_craps|   0|    200000|     100|0.92190883|  PASSED  
       diehard_craps|   0|    200000|     100|0.20123863|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.06516230|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.60280612|  PASSED  
         sts_monobit|   1|    100000|     100|0.20081636|  PASSED  
            sts_runs|   2|    100000|     100|0.50252317|  PASSED  
          sts_serial|   1|    100000|     100|0.29687975|  PASSED  
          sts_serial|   2|    100000|     100|0.31072712|  PASSED  
          sts_serial|   3|    100000|     100|0.07615325|  PASSED  
          sts_serial|   3|    100000|     100|0.44348854|  PASSED  
          sts_serial|   4|    100000|     100|0.42469079|  PASSED  
          sts_serial|   4|    100000|     100|0.83543755|  PASSED  
          sts_serial|   5|    100000|     100|0.55744229|  PASSED  
          sts_serial|   5|    100000|     100|0.69909473|  PASSED  
          sts_serial|   6|    100000|     100|0.51912836|  PASSED  
          sts_serial|   6|    100000|     100|0.45454082|  PASSED  
          sts_serial|   7|    100000|     100|0.67858192|  PASSED  
          sts_serial|   7|    100000|     100|0.48874314|  PASSED  
          sts_serial|   8|    100000|     100|0.34459798|  PASSED  
          sts_serial|   8|    100000|     100|0.17788027|  PASSED  
          sts_serial|   9|    100000|     100|0.56829153|  PASSED  
          sts_serial|   9|    100000|     100|0.89423459|  PASSED  
          sts_serial|  10|    100000|     100|0.94618428|  PASSED  
          sts_serial|  10|    100000|     100|0.90842550|  PASSED  
          sts_serial|  11|    100000|     100|0.38735833|  PASSED  
          sts_serial|  11|    100000|     100|0.41647640|  PASSED  
          sts_serial|  12|    100000|     100|0.80438204|  PASSED  
          sts_serial|  12|    100000|     100|0.95795183|  PASSED  
          sts_serial|  13|    100000|     100|0.68361428|  PASSED  
          sts_serial|  13|    100000|     100|0.13773293|  PASSED  
          sts_serial|  14|    100000|     100|0.79354592|  PASSED  
          sts_serial|  14|    100000|     100|0.51218367|  PASSED  
          sts_serial|  15|    100000|     100|0.56325010|  PASSED  
          sts_serial|  15|    100000|     100|0.92227470|  PASSED  
          sts_serial|  16|    100000|     100|0.78406833|  PASSED  
          sts_serial|  16|    100000|     100|0.43251044|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.23601403|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.05553466|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.27739376|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.26341039|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.85801146|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.84583504|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.79809233|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.97136009|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.10234607|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.42660691|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.83844038|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.12910273|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.72150979|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.52553538|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.25571705|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.77995633|  PASSED  
    rgb_permutations|   2|    100000|     100|0.26907748|  PASSED  
    rgb_permutations|   3|    100000|     100|0.76850227|  PASSED  
    rgb_permutations|   4|    100000|     100|0.04336185|  PASSED  
    rgb_permutations|   5|    100000|     100|0.28081494|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.33787559|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.51426654|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.11651908|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.48395538|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.33002962|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.78278173|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.07982463|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.71341188|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.42766855|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.34664659|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.25204064|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.65630036|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.32727920|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.37371354|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.07285131|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.04616334|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.62770067|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.32966207|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.25263602|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.25306937|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.62372490|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.23777664|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.98018557|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.25400496|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.87381403|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.48217489|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.41096663|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.78807797|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.46827318|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.75115059|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.58402774|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.23706194|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.62736922|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.06071686|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.65830046|  PASSED  
             dab_dct| 256|     50000|       1|0.13926320|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.30368304|  PASSED  
        dab_filltree|  32|  15000000|       1|0.57038841|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.05346963|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.92854005|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.81574112|  PASSED  

real	50m20.632s
user	46m54.848s
sys	3m22.712s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc8b6d64e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc8b6d64e
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc8b6d64e
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc8b6d64e
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +9.5  p =  4.6e-7   very suspicious  
  [Low1/32]FPF-14+6/16:all          R=  -8.4  p =1-9.2e-8   very suspicious  
  [Low1/32]FPF-14+6/16:all2         R=  +9.6  p =  4.9e-5   mildly suspicious
  ...and 129 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc8b6d64e
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R= +15.7  p =  2.0e-12    FAIL           
  [Low1/32]Gap-16:B                 R=  +4.6  p =  9.4e-4   unusual          
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -9.0  p =1-2.3e-8   very suspicious  
  [Low1/32]FPF-14+6/16:(1,14-1)     R=  -5.9  p =1-2.0e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= -11.0  p =1-2.2e-10   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +24.2  p =  3.0e-10   VERY SUSPICIOUS 
  ...and 135 test result(s) without anomalies


real	0m20.124s
user	0m19.604s
sys	0m0.500s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9472e265
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9472e265
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.0  p =  2.0e-4   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9472e265
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R= +11.3  p =  4.3e-9    VERY SUSPICIOUS 
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9472e265
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R= +17.1  p =  4.1e-13    FAIL           
  [Low1/32]Gap-16:B                 R=  +7.6  p =  1.4e-6   very suspicious  
  [Low1/32]FPF-14+6/16:(0,14-1)     R=  -6.9  p =1-1.9e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R=  -7.2  p =1-1.2e-6   very suspicious  
  [Low1/32]FPF-14+6/16:all2         R= +10.8  p =  1.8e-5   mildly suspicious
  ...and 127 test result(s) without anomalies


real	0m10.521s
user	0m10.292s
sys	0m0.208s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc82d4f81
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc82d4f81
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc82d4f81
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.2  p =  8.3e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc82d4f81
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +8.7  p =  1.7e-6   very suspicious  
  [Low1/32]FPF-14+6/16:all          R=  -6.6  p =1-5.0e-6   suspicious       
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc82d4f81
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R= +16.3  p =  6.9e-13    FAIL           
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -10.9  p =1-3.1e-10   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-1)     R=  -8.2  p =1-9.1e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R= -14.5  p =1-8.3e-14    FAIL           
  [Low1/32]FPF-14+6/16:all2         R= +43.4  p =  5.1e-17    FAIL !         
  ...and 136 test result(s) without anomalies


real	0m20.121s
user	0m19.524s
sys	0m0.464s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4db98cdf
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4db98cdf
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4db98cdf
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.8  p =  3.7e-5   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4db98cdf
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R= +13.8  p =  1.9e-10   VERY SUSPICIOUS 
  [Low1/32]Gap-16:B                 R=  +4.1  p =  1.8e-3   unusual          
  [Low1/32]FPF-14+6/16:all          R=  -5.9  p =1-2.2e-5   mildly suspicious
  ...and 129 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4db98cdf
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R= +27.6  p =  3.5e-22    FAIL !!        
  [Low1/32]Gap-16:B                 R=  +9.9  p =  4.0e-8   very suspicious  
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -11.9  p =1-3.3e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-1)     R=  -9.2  p =1-8.1e-9   very suspicious  
  [Low1/32]FPF-14+6/16:all          R= -17.2  p =1-2.0e-16    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +55.4  p =  2.8e-21    FAIL !!        
  [Low1/32]FPF-14+6/16:cross        R=  -2.2  p =1-7.8e-4   unusual          
  ...and 134 test result(s) without anomalies


real	0m19.968s
user	0m19.484s
sys	0m0.456s
*/
