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
/// @created on 2020-03-18 19:32:56 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 3e918477-2a82-4d8d-b398-8cd2715634a5                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_blin.h"

using TRnd = RndBLin;
/* TEST00
time ./MRndCPP 12 
209126189
545501297
2639273469
3202784432
834239682
3253752497
3193370590
537558403
846254217
1956289810
5163969547790513442

real	0m26,581s
user	0m26,565s
sys	0m0,000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.65e+07  | 288562242|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.18690337|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.37544803|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.84410155|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.07863111|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.59213789|  PASSED  
        diehard_opso|   0|   2097152|     100|0.71418937|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.35223776|  PASSED  
         diehard_dna|   0|   2097152|     100|0.53940478|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.63323578|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.33591132|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.59549008|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.37876709|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.82522771|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.65296788|  PASSED  
        diehard_sums|   0|       100|     100|0.44328013|  PASSED  
        diehard_runs|   0|    100000|     100|0.84162316|  PASSED  
        diehard_runs|   0|    100000|     100|0.75807801|  PASSED  
       diehard_craps|   0|    200000|     100|0.78636574|  PASSED  
       diehard_craps|   0|    200000|     100|0.57759456|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.18380697|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.41965036|  PASSED  
         sts_monobit|   1|    100000|     100|0.00378708|   WEAK   
            sts_runs|   2|    100000|     100|0.95206545|  PASSED  
          sts_serial|   1|    100000|     100|0.87505926|  PASSED  
          sts_serial|   2|    100000|     100|0.06852028|  PASSED  
          sts_serial|   3|    100000|     100|0.26882015|  PASSED  
          sts_serial|   3|    100000|     100|0.50283575|  PASSED  
          sts_serial|   4|    100000|     100|0.00374178|   WEAK   
          sts_serial|   4|    100000|     100|0.19805401|  PASSED  
          sts_serial|   5|    100000|     100|0.11397338|  PASSED  
          sts_serial|   5|    100000|     100|0.98053869|  PASSED  
          sts_serial|   6|    100000|     100|0.92088037|  PASSED  
          sts_serial|   6|    100000|     100|0.52192552|  PASSED  
          sts_serial|   7|    100000|     100|0.24844606|  PASSED  
          sts_serial|   7|    100000|     100|0.09273790|  PASSED  
          sts_serial|   8|    100000|     100|0.44186445|  PASSED  
          sts_serial|   8|    100000|     100|0.96653245|  PASSED  
          sts_serial|   9|    100000|     100|0.05251330|  PASSED  
          sts_serial|   9|    100000|     100|0.13369847|  PASSED  
          sts_serial|  10|    100000|     100|0.44416771|  PASSED  
          sts_serial|  10|    100000|     100|0.79576548|  PASSED  
          sts_serial|  11|    100000|     100|0.75454608|  PASSED  
          sts_serial|  11|    100000|     100|0.50767648|  PASSED  
          sts_serial|  12|    100000|     100|0.98316973|  PASSED  
          sts_serial|  12|    100000|     100|0.70067841|  PASSED  
          sts_serial|  13|    100000|     100|0.10884034|  PASSED  
          sts_serial|  13|    100000|     100|0.05366777|  PASSED  
          sts_serial|  14|    100000|     100|0.36660829|  PASSED  
          sts_serial|  14|    100000|     100|0.46553863|  PASSED  
          sts_serial|  15|    100000|     100|0.99616850|   WEAK   
          sts_serial|  15|    100000|     100|0.90779584|  PASSED  
          sts_serial|  16|    100000|     100|0.19982056|  PASSED  
          sts_serial|  16|    100000|     100|0.46011461|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.14192470|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.32843765|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.90584321|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.65358815|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.27471253|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.76378973|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.91517144|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.14220296|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.42028744|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.69513803|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.68100659|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.99896555|   WEAK   
rgb_minimum_distance|   2|     10000|    1000|0.04967023|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.36327511|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.34644880|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.56017965|  PASSED  
    rgb_permutations|   2|    100000|     100|0.09459092|  PASSED  
    rgb_permutations|   3|    100000|     100|0.99177942|  PASSED  
    rgb_permutations|   4|    100000|     100|0.85361218|  PASSED  
    rgb_permutations|   5|    100000|     100|0.68563816|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.25606325|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.00413354|   WEAK   
      rgb_lagged_sum|   2|   1000000|     100|0.13081724|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.73957524|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.98802851|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.30401231|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.49504053|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.94271450|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.65590691|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.31617981|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.51627973|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.13190988|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.49148605|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.53711597|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.69721248|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.97690951|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.63005786|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.65744575|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.62296816|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.07606683|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.18847418|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.62834858|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.80285887|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.98321260|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.49899630|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.43249001|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.60558396|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.02660135|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.56437567|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.36597136|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.46423111|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.42166576|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.99589196|   WEAK   
     rgb_kstest_test|   0|     10000|    1000|0.75148220|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.40631223|  PASSED  
             dab_dct| 256|     50000|       1|0.50666462|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.26138351|  PASSED  
        dab_filltree|  32|  15000000|       1|0.10332584|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.68855223|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.86728113|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.43151632|  PASSED  

real	43m3,651s
user	49m41,405s
sys	3m34,791s
*/
/* TEST00
time ./MRndCPP 12 
3102327973
1999313756
3900381220
22833281
3416978764
4239320856
3017843350
1656167293
817386878
869958393
6582485905260074080

real	0m20,591s
user	0m20,578s
sys	0m0,008s
*/
/* TEST00
time ./MRndCPP 12 
3102327973
1999313756
3900381220
22833281
3416978764
4239320856
3017843350
1656167293
817386878
869958393
6582485905260074080

real	0m15,579s
user	0m15,568s
sys	0m0,000s
*/
/* TEST00
time ./MRndCPP 12 
3102327973
1999313756
3900381220
22833281
3416978764
4239320856
3017843350
1656167293
817386878
869958393
6582485905260074080

real	0m16,049s
user	0m16,001s
sys	0m0,036s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x247d0b4f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x247d0b4f
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x247d0b4f
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x247d0b4f
length= 512 megabytes (2^29 bytes), time= 12.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x247d0b4f
length= 1 gigabyte (2^30 bytes), time= 23.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.2e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x247d0b4f
length= 2 gigabytes (2^31 bytes), time= 45.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x247d0b4f
length= 4 gigabytes (2^32 bytes), time= 85.7 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x247d0b4f
length= 8 gigabytes (2^33 bytes), time= 167 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  +4.5  p =  9.6e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x247d0b4f
length= 16 gigabytes (2^34 bytes), time= 329 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x247d0b4f
length= 29.000 gigabytes (2^34.858 bytes), time= 603 seconds
  no anomalies in 231 test result(s)


real	10m4,114s
user	9m57,141s
sys	0m25,251s
*/
