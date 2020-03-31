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
/* TEST00
time ./MRndCPP 14 
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
1862078880771047018

real	1m42.640s
user	1m41.758s
sys	0m0.086s
*/
/* TEST00
time ./MRndCPP 14 
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
1862078880771047018

real	1m53.522s
user	1m52.615s
sys	0m0.096s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.28e+07  |3218075045|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.45711075|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.02919569|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.68902693|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.10183562|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.13202900|  PASSED  
        diehard_opso|   0|   2097152|     100|0.88909175|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.72915327|  PASSED  
         diehard_dna|   0|   2097152|     100|0.99654772|   WEAK   
diehard_count_1s_str|   0|    256000|     100|0.70317653|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.34555975|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.24520972|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.16768293|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.23861501|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.72178520|  PASSED  
        diehard_sums|   0|       100|     100|0.11340107|  PASSED  
        diehard_runs|   0|    100000|     100|0.37425502|  PASSED  
        diehard_runs|   0|    100000|     100|0.74871238|  PASSED  
       diehard_craps|   0|    200000|     100|0.87005087|  PASSED  
       diehard_craps|   0|    200000|     100|0.33317864|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.03607798|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.90431238|  PASSED  
         sts_monobit|   1|    100000|     100|0.81718542|  PASSED  
            sts_runs|   2|    100000|     100|0.42506393|  PASSED  
          sts_serial|   1|    100000|     100|0.92423238|  PASSED  
          sts_serial|   2|    100000|     100|0.87341279|  PASSED  
          sts_serial|   3|    100000|     100|0.45403442|  PASSED  
          sts_serial|   3|    100000|     100|0.80740541|  PASSED  
          sts_serial|   4|    100000|     100|0.97396683|  PASSED  
          sts_serial|   4|    100000|     100|0.22787555|  PASSED  
          sts_serial|   5|    100000|     100|0.40955953|  PASSED  
          sts_serial|   5|    100000|     100|0.31465359|  PASSED  
          sts_serial|   6|    100000|     100|0.38074452|  PASSED  
          sts_serial|   6|    100000|     100|0.25812262|  PASSED  
          sts_serial|   7|    100000|     100|0.46844248|  PASSED  
          sts_serial|   7|    100000|     100|0.02755730|  PASSED  
          sts_serial|   8|    100000|     100|0.29741233|  PASSED  
          sts_serial|   8|    100000|     100|0.50228168|  PASSED  
          sts_serial|   9|    100000|     100|0.41714116|  PASSED  
          sts_serial|   9|    100000|     100|0.70712608|  PASSED  
          sts_serial|  10|    100000|     100|0.06128814|  PASSED  
          sts_serial|  10|    100000|     100|0.16192120|  PASSED  
          sts_serial|  11|    100000|     100|0.07311030|  PASSED  
          sts_serial|  11|    100000|     100|0.63442452|  PASSED  
          sts_serial|  12|    100000|     100|0.02957906|  PASSED  
          sts_serial|  12|    100000|     100|0.59587087|  PASSED  
          sts_serial|  13|    100000|     100|0.32415129|  PASSED  
          sts_serial|  13|    100000|     100|0.87215098|  PASSED  
          sts_serial|  14|    100000|     100|0.13456753|  PASSED  
          sts_serial|  14|    100000|     100|0.44819719|  PASSED  
          sts_serial|  15|    100000|     100|0.87731773|  PASSED  
          sts_serial|  15|    100000|     100|0.00446072|   WEAK   
          sts_serial|  16|    100000|     100|0.43617232|  PASSED  
          sts_serial|  16|    100000|     100|0.35813737|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.32935017|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.77785214|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.98999520|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.91490284|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.25251354|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.43366620|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.20158061|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.81479794|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.06131837|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.82849544|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.27841034|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.53897862|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.04782393|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.94126485|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.64658788|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.63012219|  PASSED  
    rgb_permutations|   2|    100000|     100|0.57598143|  PASSED  
    rgb_permutations|   3|    100000|     100|0.99533816|   WEAK   
    rgb_permutations|   4|    100000|     100|0.30015763|  PASSED  
    rgb_permutations|   5|    100000|     100|0.50700575|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.87848154|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.43887750|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.07966502|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.25599740|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.64447935|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.61325047|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.65568230|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.93089425|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.89042199|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.90593217|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.87855118|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.30514150|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.54136737|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.83471279|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.23848309|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.75009247|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.21389021|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.97837208|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.01897042|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.21367602|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.82806850|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.25943759|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.11447970|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.97042336|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.84410764|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.67326869|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.62124454|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.52693906|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.99020209|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.51768032|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.16458702|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.77815560|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.53274338|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.78384447|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.58342832|  PASSED  
             dab_dct| 256|     50000|       1|0.24541445|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.96782104|  PASSED  
        dab_filltree|  32|  15000000|       1|0.82823931|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.38106595|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.99392407|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.04434754|  PASSED  

real	101m37.625s
user	89m50.965s
sys	11m15.354s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.48e+07  |3509125272|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.76019824|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.59841256|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.92709967|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.06274929|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.74576197|  PASSED  
        diehard_opso|   0|   2097152|     100|0.80521235|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.62560664|  PASSED  
         diehard_dna|   0|   2097152|     100|0.77630484|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.17242875|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.48861513|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.59516268|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.34462560|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.24832544|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.50384185|  PASSED  
        diehard_sums|   0|       100|     100|0.14646249|  PASSED  
        diehard_runs|   0|    100000|     100|0.66778568|  PASSED  
        diehard_runs|   0|    100000|     100|0.20516242|  PASSED  
       diehard_craps|   0|    200000|     100|0.90895367|  PASSED  
       diehard_craps|   0|    200000|     100|0.58422147|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.97364753|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.40108180|  PASSED  
         sts_monobit|   1|    100000|     100|0.61579852|  PASSED  
            sts_runs|   2|    100000|     100|0.27111822|  PASSED  
          sts_serial|   1|    100000|     100|0.18779980|  PASSED  
          sts_serial|   2|    100000|     100|0.70779298|  PASSED  
          sts_serial|   3|    100000|     100|0.56860767|  PASSED  
          sts_serial|   3|    100000|     100|0.97024954|  PASSED  
          sts_serial|   4|    100000|     100|0.77715418|  PASSED  
          sts_serial|   4|    100000|     100|0.40169333|  PASSED  
          sts_serial|   5|    100000|     100|0.78094182|  PASSED  
          sts_serial|   5|    100000|     100|0.25449999|  PASSED  
          sts_serial|   6|    100000|     100|0.59761614|  PASSED  
          sts_serial|   6|    100000|     100|0.36367849|  PASSED  
          sts_serial|   7|    100000|     100|0.98923999|  PASSED  
          sts_serial|   7|    100000|     100|0.98898799|  PASSED  
          sts_serial|   8|    100000|     100|0.61428220|  PASSED  
          sts_serial|   8|    100000|     100|0.82454092|  PASSED  
          sts_serial|   9|    100000|     100|0.87133740|  PASSED  
          sts_serial|   9|    100000|     100|0.72977177|  PASSED  
          sts_serial|  10|    100000|     100|0.20991405|  PASSED  
          sts_serial|  10|    100000|     100|0.38696127|  PASSED  
          sts_serial|  11|    100000|     100|0.47343986|  PASSED  
          sts_serial|  11|    100000|     100|0.93503302|  PASSED  
          sts_serial|  12|    100000|     100|0.74301563|  PASSED  
          sts_serial|  12|    100000|     100|0.29417319|  PASSED  
          sts_serial|  13|    100000|     100|0.57075327|  PASSED  
          sts_serial|  13|    100000|     100|0.43368231|  PASSED  
          sts_serial|  14|    100000|     100|0.30766165|  PASSED  
          sts_serial|  14|    100000|     100|0.91434870|  PASSED  
          sts_serial|  15|    100000|     100|0.78853687|  PASSED  
          sts_serial|  15|    100000|     100|0.63851767|  PASSED  
          sts_serial|  16|    100000|     100|0.23992690|  PASSED  
          sts_serial|  16|    100000|     100|0.06112627|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.35318187|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.91603233|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.19322677|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.75590199|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.38830013|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.58936293|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.48744970|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.48672840|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.89000934|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.52625133|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.75239839|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.59890280|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.63326468|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.80667766|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.23991980|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.49785744|  PASSED  
    rgb_permutations|   2|    100000|     100|0.07949933|  PASSED  
    rgb_permutations|   3|    100000|     100|0.20995565|  PASSED  
    rgb_permutations|   4|    100000|     100|0.46904096|  PASSED  
    rgb_permutations|   5|    100000|     100|0.81825613|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.57000651|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.65928643|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.15207801|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.30319907|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.81598611|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.90398089|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.37342025|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.50962009|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.79302226|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.93797193|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.40560059|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.99004902|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.95282960|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.36414030|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.68553246|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.35066788|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.83516229|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.12567451|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.92246176|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.94495696|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.81642875|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.25209586|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.36853713|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.83539155|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.42475538|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.83886464|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.85620057|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.46200269|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.48812707|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.37354983|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.32233351|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.80694336|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.71838215|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.99040657|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.63772602|  PASSED  
             dab_dct| 256|     50000|       1|0.88523619|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.97782062|  PASSED  
        dab_filltree|  32|  15000000|       1|0.20791978|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.51020268|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.33052738|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.87959071|  PASSED  

real	101m27.737s
user	89m37.630s
sys	11m13.036s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xf03a4980
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xf03a4980
length= 32 megabytes (2^25 bytes), time= 2.2 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 64 megabytes (2^26 bytes), time= 5.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 128 megabytes (2^27 bytes), time= 9.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 256 megabytes (2^28 bytes), time= 16.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 512 megabytes (2^29 bytes), time= 29.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 1 gigabyte (2^30 bytes), time= 54.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 2 gigabytes (2^31 bytes), time= 101 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 4 gigabytes (2^32 bytes), time= 191 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 8 gigabytes (2^33 bytes), time= 370 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 16 gigabytes (2^34 bytes), time= 732 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 32 gigabytes (2^35 bytes), time= 1439 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 64 gigabytes (2^36 bytes), time= 2892 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xf03a4980
length= 80.500 gigabytes (2^36.331 bytes), time= 3600 seconds
  no anomalies in 251 test result(s)


real	60m2.534s
user	58m16.093s
sys	1m27.942s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7ef217cf
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7ef217cf
length= 32 megabytes (2^25 bytes), time= 2.7 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x7ef217cf
length= 64 megabytes (2^26 bytes), time= 5.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x7ef217cf
length= 128 megabytes (2^27 bytes), time= 10.4 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7ef217cf
length= 256 megabytes (2^28 bytes), time= 17.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7ef217cf
length= 512 megabytes (2^29 bytes), time= 30.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7ef217cf
length= 1 gigabyte (2^30 bytes), time= 55.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x7ef217cf
length= 2 gigabytes (2^31 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.0  p =1-6.7e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x7ef217cf
length= 4 gigabytes (2^32 bytes), time= 191 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.1  p =1-5.8e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x7ef217cf
length= 8 gigabytes (2^33 bytes), time= 372 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x7ef217cf
length= 16 gigabytes (2^34 bytes), time= 732 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x7ef217cf
length= 32 gigabytes (2^35 bytes), time= 1435 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +4.4  p =  4.3e-4   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x7ef217cf
length= 64 gigabytes (2^36 bytes), time= 2882 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x7ef217cf
length= 81.000 gigabytes (2^36.340 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m4.873s
user	58m20.490s
sys	1m25.922s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x6648ec45
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x6648ec45
length= 64 megabytes (2^26 bytes), time= 2.6 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x6648ec45
length= 128 megabytes (2^27 bytes), time= 6.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x6648ec45
length= 256 megabytes (2^28 bytes), time= 13.8 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.8  p =1-2.1e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x6648ec45
length= 512 megabytes (2^29 bytes), time= 25.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x6648ec45
length= 1 gigabyte (2^30 bytes), time= 49.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.9  p =1-2.1e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x6648ec45
length= 2 gigabytes (2^31 bytes), time= 95.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.5  p =1-3.6e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x6648ec45
length= 4 gigabytes (2^32 bytes), time= 181 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x6648ec45
length= 8 gigabytes (2^33 bytes), time= 358 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.9  p =1-3.5e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x6648ec45
length= 16 gigabytes (2^34 bytes), time= 710 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -5.1  p =1-3.3e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x6648ec45
length= 32 gigabytes (2^35 bytes), time= 1401 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x6648ec45
length= 64 gigabytes (2^36 bytes), time= 2842 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x6648ec45
length= 82.000 gigabytes (2^36.358 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m5.344s
user	58m21.593s
sys	1m24.902s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd8d0ace3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd8d0ace3
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-3,T)                  R=  +8.7  p =  6.9e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +5.4  p =  7.9e-3   unusual          
  ...and 137 test result(s) without anomalies

rng=RNG_stdin, seed=0xd8d0ace3
length= 128 megabytes (2^27 bytes), time= 7.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R= +10.0  p =  7.6e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xd8d0ace3
length= 256 megabytes (2^28 bytes), time= 14.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xd8d0ace3
length= 512 megabytes (2^29 bytes), time= 27.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xd8d0ace3
length= 1 gigabyte (2^30 bytes), time= 52.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xd8d0ace3
length= 2 gigabytes (2^31 bytes), time= 99.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd8d0ace3
length= 4 gigabytes (2^32 bytes), time= 188 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xd8d0ace3
length= 8 gigabytes (2^33 bytes), time= 365 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xd8d0ace3
length= 16 gigabytes (2^34 bytes), time= 718 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+1,13-0,T)          R=  +7.5  p =  1.5e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0xd8d0ace3
length= 32 gigabytes (2^35 bytes), time= 1414 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xd8d0ace3
length= 64 gigabytes (2^36 bytes), time= 2867 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xd8d0ace3
length= 81.250 gigabytes (2^36.344 bytes), time= 3601 seconds
  no anomalies in 251 test result(s)


real	60m2.928s
user	58m18.342s
sys	1m25.179s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xcd67e3e0
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xcd67e3e0
length= 64 megabytes (2^26 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  +5.1  p =  3.5e-4   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xcd67e3e0
length= 128 megabytes (2^27 bytes), time= 6.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xcd67e3e0
length= 256 megabytes (2^28 bytes), time= 13.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xcd67e3e0
length= 512 megabytes (2^29 bytes), time= 25.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xcd67e3e0
length= 1 gigabyte (2^30 bytes), time= 48.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xcd67e3e0
length= 2 gigabytes (2^31 bytes), time= 93.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xcd67e3e0
length= 4 gigabytes (2^32 bytes), time= 180 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xcd67e3e0
length= 8 gigabytes (2^33 bytes), time= 352 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xcd67e3e0
length= 16 gigabytes (2^34 bytes), time= 697 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xcd67e3e0
length= 32 gigabytes (2^35 bytes), time= 1405 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xcd67e3e0
length= 64 gigabytes (2^36 bytes), time= 2849 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-0,T)          R=  -7.3  p =1-1.0e-3   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xcd67e3e0
length= 81.250 gigabytes (2^36.344 bytes), time= 3604 seconds
  no anomalies in 251 test result(s)


real	60m6.225s
user	58m17.011s
sys	1m24.396s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4b670528
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4b670528
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x4b670528
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4b670528
length= 256 megabytes (2^28 bytes), time= 14.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4b670528
length= 512 megabytes (2^29 bytes), time= 26.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x4b670528
length= 1 gigabyte (2^30 bytes), time= 50.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4b670528
length= 2 gigabytes (2^31 bytes), time= 95.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x4b670528
length= 4 gigabytes (2^32 bytes), time= 183 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x4b670528
length= 8 gigabytes (2^33 bytes), time= 359 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x4b670528
length= 16 gigabytes (2^34 bytes), time= 709 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x4b670528
length= 32 gigabytes (2^35 bytes), time= 1422 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x4b670528
length= 64 gigabytes (2^36 bytes), time= 2876 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x4b670528
length= 80.500 gigabytes (2^36.331 bytes), time= 3604 seconds
  no anomalies in 251 test result(s)


real	60m6.501s
user	58m16.796s
sys	1m29.096s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xae870fd7
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xae870fd7
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+2,13-6,T)         R= +10.2  p =  6.3e-4   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xae870fd7
length= 128 megabytes (2^27 bytes), time= 7.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.7  p =  5.5e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xae870fd7
length= 256 megabytes (2^28 bytes), time= 14.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+0,13-4,T)         R=  +9.0  p =  7.4e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xae870fd7
length= 512 megabytes (2^29 bytes), time= 27.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.8  p =1-2.0e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +5.3  p =  9.1e-4   unusual          
  ...and 169 test result(s) without anomalies

rng=RNG_stdin, seed=0xae870fd7
length= 1 gigabyte (2^30 bytes), time= 51.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xae870fd7
length= 2 gigabytes (2^31 bytes), time= 97.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xae870fd7
length= 4 gigabytes (2^32 bytes), time= 184 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xae870fd7
length= 8 gigabytes (2^33 bytes), time= 365 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xae870fd7
length= 16 gigabytes (2^34 bytes), time= 722 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xae870fd7
length= 32 gigabytes (2^35 bytes), time= 1421 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]FPF-14+6/16:cross         R=  +4.4  p =  4.3e-4   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xae870fd7
length= 64 gigabytes (2^36 bytes), time= 2840 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:cross        R=  -2.4  p =1-4.5e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xae870fd7
length= 81.500 gigabytes (2^36.349 bytes), time= 3604 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:cross        R=  -2.4  p =1-4.3e-4   unusual          
  ...and 250 test result(s) without anomalies


real	60m6.210s
user	58m17.722s
sys	1m25.771s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4a45a731
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4a45a731
length= 64 megabytes (2^26 bytes), time= 3.1 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x4a45a731
length= 128 megabytes (2^27 bytes), time= 7.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4a45a731
length= 256 megabytes (2^28 bytes), time= 15.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4a45a731
length= 512 megabytes (2^29 bytes), time= 27.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x4a45a731
length= 1 gigabyte (2^30 bytes), time= 52.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4a45a731
length= 2 gigabytes (2^31 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-4,T)         R=  +9.9  p =  2.9e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x4a45a731
length= 4 gigabytes (2^32 bytes), time= 190 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x4a45a731
length= 8 gigabytes (2^33 bytes), time= 372 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +8.2  p =  6.7e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x4a45a731
length= 16 gigabytes (2^34 bytes), time= 734 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  +5.0  p =  1.2e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x4a45a731
length= 32 gigabytes (2^35 bytes), time= 1440 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-0,T)          R=  -7.4  p =1-8.8e-4   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x4a45a731
length= 64 gigabytes (2^36 bytes), time= 2871 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x4a45a731
length= 80.500 gigabytes (2^36.331 bytes), time= 3602 seconds
  no anomalies in 251 test result(s)


real	60m4.464s
user	58m15.724s
sys	1m28.603s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd2dc9772
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd2dc9772
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xd2dc9772
length= 128 megabytes (2^27 bytes), time= 7.5 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=  +7.8  p =  1.7e-3   unusual          
  [Low1/8]DC6-9x1Bytes-1            R=  +5.8  p =  4.7e-3   unusual          
  ...and 149 test result(s) without anomalies

rng=RNG_stdin, seed=0xd2dc9772
length= 256 megabytes (2^28 bytes), time= 14.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R=  -5.7  p =1-1.0e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xd2dc9772
length= 512 megabytes (2^29 bytes), time= 27.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xd2dc9772
length= 1 gigabyte (2^30 bytes), time= 51.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.8  p =1-8.9e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xd2dc9772
length= 2 gigabytes (2^31 bytes), time= 96.4 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all2                  R=  -1.8  p =1-4.0e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0xd2dc9772
length= 4 gigabytes (2^32 bytes), time= 185 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xd2dc9772
length= 8 gigabytes (2^33 bytes), time= 361 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xd2dc9772
length= 16 gigabytes (2^34 bytes), time= 716 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xd2dc9772
length= 32 gigabytes (2^35 bytes), time= 1413 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xd2dc9772
length= 64 gigabytes (2^36 bytes), time= 2833 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.2  p =1-1.1e-3   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xd2dc9772
length= 82.000 gigabytes (2^36.358 bytes), time= 3606 seconds
  no anomalies in 251 test result(s)


real	60m7.241s
user	58m31.098s
sys	1m23.672s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xaeba7794
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xaeba7794
length= 64 megabytes (2^26 bytes), time= 3.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xaeba7794
length= 128 megabytes (2^27 bytes), time= 7.4 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +4.7  p =  1.6e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xaeba7794
length= 256 megabytes (2^28 bytes), time= 14.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xaeba7794
length= 512 megabytes (2^29 bytes), time= 27.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xaeba7794
length= 1 gigabyte (2^30 bytes), time= 52.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xaeba7794
length= 2 gigabytes (2^31 bytes), time= 96.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xaeba7794
length= 4 gigabytes (2^32 bytes), time= 185 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xaeba7794
length= 8 gigabytes (2^33 bytes), time= 359 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xaeba7794
length= 16 gigabytes (2^34 bytes), time= 719 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  -7.3  p =1-1.0e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0xaeba7794
length= 32 gigabytes (2^35 bytes), time= 1421 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xaeba7794
length= 64 gigabytes (2^36 bytes), time= 2853 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xaeba7794
length= 81.500 gigabytes (2^36.349 bytes), time= 3606 seconds
  no anomalies in 251 test result(s)


real	60m7.478s
user	58m29.028s
sys	1m25.171s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xaac7a65
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xaac7a65
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xaac7a65
length= 128 megabytes (2^27 bytes), time= 7.4 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xaac7a65
length= 256 megabytes (2^28 bytes), time= 15.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xaac7a65
length= 512 megabytes (2^29 bytes), time= 27.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xaac7a65
length= 1 gigabyte (2^30 bytes), time= 51.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xaac7a65
length= 2 gigabytes (2^31 bytes), time= 96.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xaac7a65
length= 4 gigabytes (2^32 bytes), time= 184 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xaac7a65
length= 8 gigabytes (2^33 bytes), time= 365 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xaac7a65
length= 16 gigabytes (2^34 bytes), time= 720 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xaac7a65
length= 32 gigabytes (2^35 bytes), time= 1408 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xaac7a65
length= 64 gigabytes (2^36 bytes), time= 2840 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xaac7a65
length= 81.750 gigabytes (2^36.353 bytes), time= 3601 seconds
  no anomalies in 251 test result(s)


real	60m3.544s
user	58m24.467s
sys	1m24.600s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa5653489
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa5653489
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xa5653489
length= 128 megabytes (2^27 bytes), time= 7.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xa5653489
length= 256 megabytes (2^28 bytes), time= 15.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xa5653489
length= 512 megabytes (2^29 bytes), time= 27.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa5653489
length= 1 gigabyte (2^30 bytes), time= 50.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xa5653489
length= 2 gigabytes (2^31 bytes), time= 96.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xa5653489
length= 4 gigabytes (2^32 bytes), time= 185 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xa5653489
length= 8 gigabytes (2^33 bytes), time= 368 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xa5653489
length= 16 gigabytes (2^34 bytes), time= 726 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xa5653489
length= 32 gigabytes (2^35 bytes), time= 1422 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xa5653489
length= 64 gigabytes (2^36 bytes), time= 2867 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xa5653489
length= 81.000 gigabytes (2^36.340 bytes), time= 3609 seconds
  no anomalies in 251 test result(s)


real	60m10.820s
user	58m29.371s
sys	1m26.139s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x56608eda
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x56608eda
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x56608eda
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x56608eda
length= 256 megabytes (2^28 bytes), time= 14.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x56608eda
length= 512 megabytes (2^29 bytes), time= 27.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x56608eda
length= 1 gigabyte (2^30 bytes), time= 49.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x56608eda
length= 2 gigabytes (2^31 bytes), time= 94.7 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x56608eda
length= 4 gigabytes (2^32 bytes), time= 181 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:B                  R=  -5.6  p =1-1.0e-4   mildly suspicious
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x56608eda
length= 8 gigabytes (2^33 bytes), time= 360 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x56608eda
length= 16 gigabytes (2^34 bytes), time= 712 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x56608eda
length= 32 gigabytes (2^35 bytes), time= 1402 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x56608eda
length= 64 gigabytes (2^36 bytes), time= 2849 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x56608eda
length= 81.250 gigabytes (2^36.344 bytes), time= 3602 seconds
  no anomalies in 251 test result(s)


real	60m4.469s
user	58m24.231s
sys	1m25.160s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa961dfed
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa961dfed
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+2,13-6,T)         R=  -5.9  p =1-6.7e-4   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xa961dfed
length= 128 megabytes (2^27 bytes), time= 6.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xa961dfed
length= 256 megabytes (2^28 bytes), time= 14.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xa961dfed
length= 512 megabytes (2^29 bytes), time= 26.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa961dfed
length= 1 gigabyte (2^30 bytes), time= 49.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.1  p =1-5.8e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xa961dfed
length= 2 gigabytes (2^31 bytes), time= 94.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xa961dfed
length= 4 gigabytes (2^32 bytes), time= 182 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xa961dfed
length= 8 gigabytes (2^33 bytes), time= 362 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xa961dfed
length= 16 gigabytes (2^34 bytes), time= 714 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xa961dfed
length= 32 gigabytes (2^35 bytes), time= 1405 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xa961dfed
length= 64 gigabytes (2^36 bytes), time= 2847 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xa961dfed
length= 81.500 gigabytes (2^36.349 bytes), time= 3607 seconds
  no anomalies in 251 test result(s)


real	60m9.292s
user	58m27.377s
sys	1m27.296s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x1c549085
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x1c549085
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x1c549085
length= 128 megabytes (2^27 bytes), time= 7.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x1c549085
length= 256 megabytes (2^28 bytes), time= 14.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x1c549085
length= 512 megabytes (2^29 bytes), time= 26.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x1c549085
length= 1 gigabyte (2^30 bytes), time= 50.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x1c549085
length= 2 gigabytes (2^31 bytes), time= 95.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x1c549085
length= 4 gigabytes (2^32 bytes), time= 183 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x1c549085
length= 8 gigabytes (2^33 bytes), time= 362 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x1c549085
length= 16 gigabytes (2^34 bytes), time= 714 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x1c549085
length= 32 gigabytes (2^35 bytes), time= 1404 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x1c549085
length= 64 gigabytes (2^36 bytes), time= 2797 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x1c549085
length= 83.250 gigabytes (2^36.379 bytes), time= 3607 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +5.2  p =  5.3e-3   unusual          
  ...and 250 test result(s) without anomalies


real	60m9.461s
user	58m29.687s
sys	1m25.769s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xdf1d6b2a
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xdf1d6b2a
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+9,13-8,T)                  R= +17.1  p =  2.7e-5   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xdf1d6b2a
length= 128 megabytes (2^27 bytes), time= 7.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xdf1d6b2a
length= 256 megabytes (2^28 bytes), time= 14.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xdf1d6b2a
length= 512 megabytes (2^29 bytes), time= 26.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xdf1d6b2a
length= 1 gigabyte (2^30 bytes), time= 50.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xdf1d6b2a
length= 2 gigabytes (2^31 bytes), time= 95.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xdf1d6b2a
length= 4 gigabytes (2^32 bytes), time= 180 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.6  p =  5.0e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0xdf1d6b2a
length= 8 gigabytes (2^33 bytes), time= 360 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.7  p =1-9.0e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0xdf1d6b2a
length= 16 gigabytes (2^34 bytes), time= 710 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +4.7  p =  8.1e-3   unusual          
  [Low1/8]DC6-9x1Bytes-1            R=  -5.0  p =1-1.9e-3   unusual          
  ...and 224 test result(s) without anomalies

rng=RNG_stdin, seed=0xdf1d6b2a
length= 32 gigabytes (2^35 bytes), time= 1390 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xdf1d6b2a
length= 64 gigabytes (2^36 bytes), time= 2764 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xdf1d6b2a
length= 84.250 gigabytes (2^36.397 bytes), time= 3604 seconds
  no anomalies in 251 test result(s)


real	60m5.792s
user	58m27.794s
sys	1m25.073s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x6879a39d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x6879a39d
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x6879a39d
length= 128 megabytes (2^27 bytes), time= 7.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x6879a39d
length= 256 megabytes (2^28 bytes), time= 14.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x6879a39d
length= 512 megabytes (2^29 bytes), time= 27.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x6879a39d
length= 1 gigabyte (2^30 bytes), time= 50.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x6879a39d
length= 2 gigabytes (2^31 bytes), time= 98.7 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x6879a39d
length= 4 gigabytes (2^32 bytes), time= 184 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x6879a39d
length= 8 gigabytes (2^33 bytes), time= 356 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x6879a39d
length= 16 gigabytes (2^34 bytes), time= 702 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x6879a39d
length= 32 gigabytes (2^35 bytes), time= 1357 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x6879a39d
length= 64 gigabytes (2^36 bytes), time= 2742 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-1,T)         R=  +8.5  p =  4.8e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0x6879a39d
length= 84.500 gigabytes (2^36.401 bytes), time= 3608 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-0,T)         R=  +8.3  p =  6.0e-4   unusual          
  ...and 250 test result(s) without anomalies


real	60m10.054s
user	58m28.845s
sys	1m24.613s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x845d1856
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x845d1856
length= 64 megabytes (2^26 bytes), time= 2.7 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x845d1856
length= 128 megabytes (2^27 bytes), time= 7.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x845d1856
length= 256 megabytes (2^28 bytes), time= 14.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x845d1856
length= 512 megabytes (2^29 bytes), time= 27.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x845d1856
length= 1 gigabyte (2^30 bytes), time= 52.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x845d1856
length= 2 gigabytes (2^31 bytes), time= 98.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x845d1856
length= 4 gigabytes (2^32 bytes), time= 184 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x845d1856
length= 8 gigabytes (2^33 bytes), time= 357 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x845d1856
length= 16 gigabytes (2^34 bytes), time= 703 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x845d1856
length= 32 gigabytes (2^35 bytes), time= 1357 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x845d1856
length= 64 gigabytes (2^36 bytes), time= 2748 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x845d1856
length= 84.250 gigabytes (2^36.397 bytes), time= 3610 seconds
  no anomalies in 251 test result(s)


real	60m11.946s
user	58m27.358s
sys	1m24.670s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x738fe936
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x738fe936
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x738fe936
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x738fe936
length= 256 megabytes (2^28 bytes), time= 14.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x738fe936
length= 512 megabytes (2^29 bytes), time= 27.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x738fe936
length= 1 gigabyte (2^30 bytes), time= 50.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x738fe936
length= 2 gigabytes (2^31 bytes), time= 96.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.7  p =1-2.4e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x738fe936
length= 4 gigabytes (2^32 bytes), time= 182 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x738fe936
length= 8 gigabytes (2^33 bytes), time= 359 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x738fe936
length= 16 gigabytes (2^34 bytes), time= 709 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x738fe936
length= 32 gigabytes (2^35 bytes), time= 1413 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x738fe936
length= 64 gigabytes (2^36 bytes), time= 2843 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x738fe936
length= 81.750 gigabytes (2^36.353 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m5.519s
user	58m22.084s
sys	1m25.630s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x487d10a6
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x487d10a6
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x487d10a6
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x487d10a6
length= 256 megabytes (2^28 bytes), time= 14.3 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x487d10a6
length= 512 megabytes (2^29 bytes), time= 27.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x487d10a6
length= 1 gigabyte (2^30 bytes), time= 51.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -3.9  p =1-7.5e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x487d10a6
length= 2 gigabytes (2^31 bytes), time= 97.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x487d10a6
length= 4 gigabytes (2^32 bytes), time= 184 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x487d10a6
length= 8 gigabytes (2^33 bytes), time= 363 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x487d10a6
length= 16 gigabytes (2^34 bytes), time= 716 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x487d10a6
length= 32 gigabytes (2^35 bytes), time= 1421 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x487d10a6
length= 64 gigabytes (2^36 bytes), time= 2844 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x487d10a6
length= 81.750 gigabytes (2^36.353 bytes), time= 3605 seconds
  no anomalies in 251 test result(s)


real	60m7.457s
user	58m21.363s
sys	1m27.539s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x78a3821e
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x78a3821e
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -4.2  p =1-6.0e-4   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x78a3821e
length= 128 megabytes (2^27 bytes), time= 7.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x78a3821e
length= 256 megabytes (2^28 bytes), time= 15.3 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x78a3821e
length= 512 megabytes (2^29 bytes), time= 27.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x78a3821e
length= 1 gigabyte (2^30 bytes), time= 52.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x78a3821e
length= 2 gigabytes (2^31 bytes), time= 98.7 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x78a3821e
length= 4 gigabytes (2^32 bytes), time= 187 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  +7.5  p =  1.5e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x78a3821e
length= 8 gigabytes (2^33 bytes), time= 364 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  +9.2  p =  1.9e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x78a3821e
length= 16 gigabytes (2^34 bytes), time= 724 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x78a3821e
length= 32 gigabytes (2^35 bytes), time= 1421 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x78a3821e
length= 64 gigabytes (2^36 bytes), time= 2816 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x78a3821e
length= 82.750 gigabytes (2^36.371 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m5.066s
user	58m24.967s
sys	1m26.035s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x55d7de3d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x55d7de3d
length= 64 megabytes (2^26 bytes), time= 3.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x55d7de3d
length= 128 megabytes (2^27 bytes), time= 7.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x55d7de3d
length= 256 megabytes (2^28 bytes), time= 15.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.6  p =  5.6e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x55d7de3d
length= 512 megabytes (2^29 bytes), time= 27.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x55d7de3d
length= 1 gigabyte (2^30 bytes), time= 51.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x55d7de3d
length= 2 gigabytes (2^31 bytes), time= 98.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x55d7de3d
length= 4 gigabytes (2^32 bytes), time= 186 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x55d7de3d
length= 8 gigabytes (2^33 bytes), time= 365 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x55d7de3d
length= 16 gigabytes (2^34 bytes), time= 723 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x55d7de3d
length= 32 gigabytes (2^35 bytes), time= 1418 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x55d7de3d
length= 64 gigabytes (2^36 bytes), time= 2816 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x55d7de3d
length= 82.750 gigabytes (2^36.371 bytes), time= 3602 seconds
  no anomalies in 251 test result(s)


real	60m3.863s
user	58m21.577s
sys	1m25.889s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa3d368d0
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa3d368d0
length= 64 megabytes (2^26 bytes), time= 2.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+4,13-6,T)          R= +11.7  p =  1.9e-4   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xa3d368d0
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xa3d368d0
length= 256 megabytes (2^28 bytes), time= 15.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xa3d368d0
length= 512 megabytes (2^29 bytes), time= 27.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa3d368d0
length= 1 gigabyte (2^30 bytes), time= 49.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xa3d368d0
length= 2 gigabytes (2^31 bytes), time= 94.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xa3d368d0
length= 4 gigabytes (2^32 bytes), time= 179 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xa3d368d0
length= 8 gigabytes (2^33 bytes), time= 350 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xa3d368d0
length= 16 gigabytes (2^34 bytes), time= 693 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xa3d368d0
length= 32 gigabytes (2^35 bytes), time= 1368 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xa3d368d0
length= 64 gigabytes (2^36 bytes), time= 2720 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+1,13-0,T)          R=  +7.7  p =  1.3e-3   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xa3d368d0
length= 85.000 gigabytes (2^36.409 bytes), time= 3600 seconds
  no anomalies in 251 test result(s)


real	60m2.327s
user	58m25.646s
sys	1m23.837s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe1a9fa68
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe1a9fa68
length= 64 megabytes (2^26 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.0  p =  3.8e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xe1a9fa68
length= 128 megabytes (2^27 bytes), time= 6.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe1a9fa68
length= 256 megabytes (2^28 bytes), time= 13.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -3.9  p =1-2.1e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xe1a9fa68
length= 512 megabytes (2^29 bytes), time= 25.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xe1a9fa68
length= 1 gigabyte (2^30 bytes), time= 48.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe1a9fa68
length= 2 gigabytes (2^31 bytes), time= 92.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe1a9fa68
length= 4 gigabytes (2^32 bytes), time= 177 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xe1a9fa68
length= 8 gigabytes (2^33 bytes), time= 347 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xe1a9fa68
length= 16 gigabytes (2^34 bytes), time= 690 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-1,T)         R=  -7.4  p =1-6.9e-4   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0xe1a9fa68
length= 32 gigabytes (2^35 bytes), time= 1359 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -4.6  p =1-7.6e-4   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xe1a9fa68
length= 64 gigabytes (2^36 bytes), time= 2719 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xe1a9fa68
length= 85.250 gigabytes (2^36.414 bytes), time= 3609 seconds
  no anomalies in 251 test result(s)


real	60m11.034s
user	58m32.063s
sys	1m23.650s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd0917c24
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd0917c24
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=  +8.3  p =  9.6e-4   unusual          
  [Low4/32]BCFN(2+0,13-5,T)         R=  +8.7  p =  1.4e-3   unusual          
  [Low4/32]BCFN(2+2,13-6,T)         R=  -5.8  p =1-8.8e-4   unusual          
  ...and 136 test result(s) without anomalies

rng=RNG_stdin, seed=0xd0917c24
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd0917c24
length= 256 megabytes (2^28 bytes), time= 14.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xd0917c24
length= 512 megabytes (2^29 bytes), time= 27.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-5,T)         R=  +9.4  p =  7.3e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xd0917c24
length= 1 gigabyte (2^30 bytes), time= 51.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.9  p =1-7.0e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xd0917c24
length= 2 gigabytes (2^31 bytes), time= 96.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd0917c24
length= 4 gigabytes (2^32 bytes), time= 184 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  6.2e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0xd0917c24
length= 8 gigabytes (2^33 bytes), time= 355 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xd0917c24
length= 16 gigabytes (2^34 bytes), time= 701 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xd0917c24
length= 32 gigabytes (2^35 bytes), time= 1372 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +4.3  p =  7.2e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xd0917c24
length= 64 gigabytes (2^36 bytes), time= 2790 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xd0917c24
length= 83.750 gigabytes (2^36.388 bytes), time= 3601 seconds
  no anomalies in 251 test result(s)


real	60m3.123s
user	58m20.872s
sys	1m24.432s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xf920cec3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xf920cec3
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xf920cec3
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xf920cec3
length= 256 megabytes (2^28 bytes), time= 14.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xf920cec3
length= 512 megabytes (2^29 bytes), time= 27.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xf920cec3
length= 1 gigabyte (2^30 bytes), time= 50.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xf920cec3
length= 2 gigabytes (2^31 bytes), time= 96.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xf920cec3
length= 4 gigabytes (2^32 bytes), time= 181 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xf920cec3
length= 8 gigabytes (2^33 bytes), time= 351 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.5  p =  7.0e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0xf920cec3
length= 16 gigabytes (2^34 bytes), time= 697 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xf920cec3
length= 32 gigabytes (2^35 bytes), time= 1372 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xf920cec3
length= 64 gigabytes (2^36 bytes), time= 2781 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xf920cec3
length= 84.500 gigabytes (2^36.401 bytes), time= 3605 seconds
  no anomalies in 251 test result(s)


real	60m6.526s
user	58m21.960s
sys	1m26.882s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe951875b
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe951875b
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.7  p =  1.4e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xe951875b
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe951875b
length= 256 megabytes (2^28 bytes), time= 14.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xe951875b
length= 512 megabytes (2^29 bytes), time= 24.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xe951875b
length= 1 gigabyte (2^30 bytes), time= 38.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe951875b
length= 2 gigabytes (2^31 bytes), time= 77.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+2,13-3,T)         R=  +9.4  p =  3.1e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0xe951875b
length= 4 gigabytes (2^32 bytes), time= 162 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xe951875b
length= 8 gigabytes (2^33 bytes), time= 335 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xe951875b
length= 16 gigabytes (2^34 bytes), time= 677 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xe951875b
length= 32 gigabytes (2^35 bytes), time= 1359 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xe951875b
length= 64 gigabytes (2^36 bytes), time= 2737 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]FPF-14+6/16:all2          R=  -1.9  p =1-2.5e-5   mildly suspicious
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xe951875b
length= 84.750 gigabytes (2^36.405 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m4.814s
user	58m22.152s
sys	1m26.446s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x770e6d2
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x770e6d2
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x770e6d2
length= 128 megabytes (2^27 bytes), time= 6.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x770e6d2
length= 256 megabytes (2^28 bytes), time= 14.3 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x770e6d2
length= 512 megabytes (2^29 bytes), time= 26.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.9  p =  4.2e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x770e6d2
length= 1 gigabyte (2^30 bytes), time= 49.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x770e6d2
length= 2 gigabytes (2^31 bytes), time= 92.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x770e6d2
length= 4 gigabytes (2^32 bytes), time= 176 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x770e6d2
length= 8 gigabytes (2^33 bytes), time= 346 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x770e6d2
length= 16 gigabytes (2^34 bytes), time= 683 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x770e6d2
length= 32 gigabytes (2^35 bytes), time= 1355 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x770e6d2
length= 64 gigabytes (2^36 bytes), time= 2723 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x770e6d2
length= 85.500 gigabytes (2^36.418 bytes), time= 3607 seconds
  no anomalies in 251 test result(s)


real	60m9.932s
user	58m29.899s
sys	1m25.256s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x43f77a62
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x43f77a62
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  -3.6  p =1-1.1e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x43f77a62
length= 128 megabytes (2^27 bytes), time= 6.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  -4.2  p =1-4.9e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x43f77a62
length= 256 megabytes (2^28 bytes), time= 13.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  -4.6  p =1-1.8e-4   mildly suspicious
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x43f77a62
length= 512 megabytes (2^29 bytes), time= 26.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x43f77a62
length= 1 gigabyte (2^30 bytes), time= 50.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x43f77a62
length= 2 gigabytes (2^31 bytes), time= 95.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x43f77a62
length= 4 gigabytes (2^32 bytes), time= 180 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x43f77a62
length= 8 gigabytes (2^33 bytes), time= 355 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  4.5e-3   unusual          
  [Low1/8]DC6-9x1Bytes-1            R=  +5.0  p =  8.9e-3   unusual          
  ...and 213 test result(s) without anomalies

rng=RNG_stdin, seed=0x43f77a62
length= 16 gigabytes (2^34 bytes), time= 704 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x43f77a62
length= 32 gigabytes (2^35 bytes), time= 1393 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x43f77a62
length= 64 gigabytes (2^36 bytes), time= 2831 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x43f77a62
length= 81.500 gigabytes (2^36.349 bytes), time= 3600 seconds
  no anomalies in 251 test result(s)


real	60m2.366s
user	58m19.894s
sys	1m26.768s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x55402ee
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x55402ee
length= 64 megabytes (2^26 bytes), time= 2.7 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x55402ee
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x55402ee
length= 256 megabytes (2^28 bytes), time= 14.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-4,T)          R=  -7.0  p =1-4.7e-4   unusual          
  [Low1/8]DC6-9x1Bytes-1            R=  +6.6  p =  1.3e-3   unusual          
  ...and 160 test result(s) without anomalies

rng=RNG_stdin, seed=0x55402ee
length= 512 megabytes (2^29 bytes), time= 27.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+1,13-3,T)          R=  +8.9  p =  5.2e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x55402ee
length= 1 gigabyte (2^30 bytes), time= 51.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x55402ee
length= 2 gigabytes (2^31 bytes), time= 95.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x55402ee
length= 4 gigabytes (2^32 bytes), time= 183 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x55402ee
length= 8 gigabytes (2^33 bytes), time= 357 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-1,T)         R=  +7.9  p =  1.1e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x55402ee
length= 16 gigabytes (2^34 bytes), time= 709 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:A                 R=  +5.1  p =  1.1e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -4.7  p =1-2.4e-3   unusual          
  ...and 224 test result(s) without anomalies

rng=RNG_stdin, seed=0x55402ee
length= 32 gigabytes (2^35 bytes), time= 1396 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -5.8  p =1-7.0e-4   mildly suspicious
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x55402ee
length= 64 gigabytes (2^36 bytes), time= 2839 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x55402ee
length= 81.500 gigabytes (2^36.349 bytes), time= 3607 seconds
  no anomalies in 251 test result(s)


real	60m10.013s
user	58m30.574s
sys	1m27.165s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x246fbb00
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x246fbb00
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x246fbb00
length= 128 megabytes (2^27 bytes), time= 7.0 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x246fbb00
length= 256 megabytes (2^28 bytes), time= 13.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x246fbb00
length= 512 megabytes (2^29 bytes), time= 26.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.5  p =  8.8e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x246fbb00
length= 1 gigabyte (2^30 bytes), time= 50.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  6.2e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x246fbb00
length= 2 gigabytes (2^31 bytes), time= 95.5 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  -7.9  p =1-4.1e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x246fbb00
length= 4 gigabytes (2^32 bytes), time= 184 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x246fbb00
length= 8 gigabytes (2^33 bytes), time= 367 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x246fbb00
length= 16 gigabytes (2^34 bytes), time= 746 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x246fbb00
length= 32 gigabytes (2^35 bytes), time= 1493 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]FPF-14+6/16:cross         R=  -2.2  p =1-1.0e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x246fbb00
length= 64 gigabytes (2^36 bytes), time= 2989 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x246fbb00
length= 78.250 gigabytes (2^36.290 bytes), time= 3609 seconds
  no anomalies in 251 test result(s)


real	60m11.336s
user	58m28.890s
sys	1m27.985s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x93481c1c
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x93481c1c
length= 64 megabytes (2^26 bytes), time= 2.7 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x93481c1c
length= 128 megabytes (2^27 bytes), time= 7.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:B                 R=  -4.7  p =1-4.7e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -4.0  p =1-8.0e-3   unusual          
  ...and 149 test result(s) without anomalies

rng=RNG_stdin, seed=0x93481c1c
length= 256 megabytes (2^28 bytes), time= 14.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x93481c1c
length= 512 megabytes (2^29 bytes), time= 26.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x93481c1c
length= 1 gigabyte (2^30 bytes), time= 50.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x93481c1c
length= 2 gigabytes (2^31 bytes), time= 96.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x93481c1c
length= 4 gigabytes (2^32 bytes), time= 184 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x93481c1c
length= 8 gigabytes (2^33 bytes), time= 368 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x93481c1c
length= 16 gigabytes (2^34 bytes), time= 746 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x93481c1c
length= 32 gigabytes (2^35 bytes), time= 1492 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x93481c1c
length= 64 gigabytes (2^36 bytes), time= 2970 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x93481c1c
length= 78.750 gigabytes (2^36.299 bytes), time= 3608 seconds
  no anomalies in 251 test result(s)


real	60m10.891s
user	58m29.393s
sys	1m25.153s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x938c7570
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x938c7570
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x938c7570
length= 128 megabytes (2^27 bytes), time= 7.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -6.4  p =1-2.0e-4   mildly suspicious
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x938c7570
length= 256 megabytes (2^28 bytes), time= 15.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x938c7570
length= 512 megabytes (2^29 bytes), time= 26.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x938c7570
length= 1 gigabyte (2^30 bytes), time= 51.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x938c7570
length= 2 gigabytes (2^31 bytes), time= 97.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x938c7570
length= 4 gigabytes (2^32 bytes), time= 187 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x938c7570
length= 8 gigabytes (2^33 bytes), time= 367 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x938c7570
length= 16 gigabytes (2^34 bytes), time= 726 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x938c7570
length= 32 gigabytes (2^35 bytes), time= 1451 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:A                 R=  +5.3  p =  1.0e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -4.2  p =1-5.2e-3   unusual          
  ...and 233 test result(s) without anomalies

rng=RNG_stdin, seed=0x938c7570
length= 64 gigabytes (2^36 bytes), time= 2916 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-0,T)          R=  -8.3  p =1-2.3e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0x938c7570
length= 78.750 gigabytes (2^36.299 bytes), time= 3600 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-0,T)          R=  -7.7  p =1-5.4e-4   unusual          
  ...and 250 test result(s) without anomalies


real	60m2.066s
user	58m17.129s
sys	1m28.226s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x29eb1b6b
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x29eb1b6b
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x29eb1b6b
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x29eb1b6b
length= 256 megabytes (2^28 bytes), time= 14.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x29eb1b6b
length= 512 megabytes (2^29 bytes), time= 26.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x29eb1b6b
length= 1 gigabyte (2^30 bytes), time= 50.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x29eb1b6b
length= 2 gigabytes (2^31 bytes), time= 98.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x29eb1b6b
length= 4 gigabytes (2^32 bytes), time= 186 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x29eb1b6b
length= 8 gigabytes (2^33 bytes), time= 366 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x29eb1b6b
length= 16 gigabytes (2^34 bytes), time= 719 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x29eb1b6b
length= 32 gigabytes (2^35 bytes), time= 1439 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x29eb1b6b
length= 64 gigabytes (2^36 bytes), time= 2879 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x29eb1b6b
length= 79.750 gigabytes (2^36.317 bytes), time= 3600 seconds
  no anomalies in 251 test result(s)


real	60m3.169s
user	58m15.109s
sys	1m27.065s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xdc481e9d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xdc481e9d
length= 64 megabytes (2^26 bytes), time= 3.1 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xdc481e9d
length= 128 megabytes (2^27 bytes), time= 8.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xdc481e9d
length= 256 megabytes (2^28 bytes), time= 16.3 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xdc481e9d
length= 512 megabytes (2^29 bytes), time= 29.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xdc481e9d
length= 1 gigabyte (2^30 bytes), time= 55.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xdc481e9d
length= 2 gigabytes (2^31 bytes), time= 105 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xdc481e9d
length= 4 gigabytes (2^32 bytes), time= 203 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xdc481e9d
length= 8 gigabytes (2^33 bytes), time= 400 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xdc481e9d
length= 16 gigabytes (2^34 bytes), time= 769 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xdc481e9d
length= 32 gigabytes (2^35 bytes), time= 1500 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xdc481e9d
length= 64 gigabytes (2^36 bytes), time= 3020 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+3,13-0,T)                  R=  -8.4  p =1-2.2e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xdc481e9d
length= 75.750 gigabytes (2^36.243 bytes), time= 3606 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.6  p =  4.1e-3   unusual          
  ...and 250 test result(s) without anomalies


real	60m8.625s
user	58m23.412s
sys	1m28.628s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x8ad02fc3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x8ad02fc3
length= 64 megabytes (2^26 bytes), time= 3.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x8ad02fc3
length= 128 megabytes (2^27 bytes), time= 8.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x8ad02fc3
length= 256 megabytes (2^28 bytes), time= 16.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x8ad02fc3
length= 512 megabytes (2^29 bytes), time= 29.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x8ad02fc3
length= 1 gigabyte (2^30 bytes), time= 56.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-1,T)                  R=  -7.0  p =1-1.4e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x8ad02fc3
length= 2 gigabytes (2^31 bytes), time= 109 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x8ad02fc3
length= 4 gigabytes (2^32 bytes), time= 204 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x8ad02fc3
length= 8 gigabytes (2^33 bytes), time= 401 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x8ad02fc3
length= 16 gigabytes (2^34 bytes), time= 773 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x8ad02fc3
length= 32 gigabytes (2^35 bytes), time= 1515 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x8ad02fc3
length= 64 gigabytes (2^36 bytes), time= 3055 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x8ad02fc3
length= 74.750 gigabytes (2^36.224 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m5.648s
user	58m17.533s
sys	1m28.834s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x838cbdf4
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x838cbdf4
length= 64 megabytes (2^26 bytes), time= 3.1 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x838cbdf4
length= 128 megabytes (2^27 bytes), time= 8.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x838cbdf4
length= 256 megabytes (2^28 bytes), time= 17.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x838cbdf4
length= 512 megabytes (2^29 bytes), time= 30.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x838cbdf4
length= 1 gigabyte (2^30 bytes), time= 59.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x838cbdf4
length= 2 gigabytes (2^31 bytes), time= 111 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x838cbdf4
length= 4 gigabytes (2^32 bytes), time= 213 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x838cbdf4
length= 8 gigabytes (2^33 bytes), time= 426 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x838cbdf4
length= 16 gigabytes (2^34 bytes), time= 822 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+2,13-1,T)          R=  +7.8  p =  1.2e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x838cbdf4
length= 32 gigabytes (2^35 bytes), time= 1609 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x838cbdf4
length= 64 gigabytes (2^36 bytes), time= 3197 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x838cbdf4
length= 72.250 gigabytes (2^36.175 bytes), time= 3601 seconds
  no anomalies in 247 test result(s)


real	60m3.607s
user	58m19.575s
sys	1m27.050s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x2bf9c37d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x2bf9c37d
length= 64 megabytes (2^26 bytes), time= 3.5 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x2bf9c37d
length= 128 megabytes (2^27 bytes), time= 8.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x2bf9c37d
length= 256 megabytes (2^28 bytes), time= 17.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x2bf9c37d
length= 512 megabytes (2^29 bytes), time= 30.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x2bf9c37d
length= 1 gigabyte (2^30 bytes), time= 58.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x2bf9c37d
length= 2 gigabytes (2^31 bytes), time= 112 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+5,13-4,T)          R= +10.3  p =  1.8e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x2bf9c37d
length= 4 gigabytes (2^32 bytes), time= 222 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x2bf9c37d
length= 8 gigabytes (2^33 bytes), time= 429 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  +7.8  p =  1.0e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x2bf9c37d
length= 16 gigabytes (2^34 bytes), time= 826 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x2bf9c37d
length= 32 gigabytes (2^35 bytes), time= 1626 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x2bf9c37d
length= 64 gigabytes (2^36 bytes), time= 3231 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x2bf9c37d
length= 71.500 gigabytes (2^36.160 bytes), time= 3603 seconds
  no anomalies in 247 test result(s)


real	60m4.645s
user	58m18.629s
sys	1m27.005s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7448b407
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7448b407
length= 64 megabytes (2^26 bytes), time= 3.6 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x7448b407
length= 128 megabytes (2^27 bytes), time= 8.4 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7448b407
length= 256 megabytes (2^28 bytes), time= 16.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7448b407
length= 512 megabytes (2^29 bytes), time= 30.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7448b407
length= 1 gigabyte (2^30 bytes), time= 58.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x7448b407
length= 2 gigabytes (2^31 bytes), time= 112 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x7448b407
length= 4 gigabytes (2^32 bytes), time= 207 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x7448b407
length= 8 gigabytes (2^33 bytes), time= 407 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.2  p =1-1.0e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x7448b407
length= 16 gigabytes (2^34 bytes), time= 799 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x7448b407
length= 32 gigabytes (2^35 bytes), time= 1544 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x7448b407
length= 64 gigabytes (2^36 bytes), time= 3037 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x7448b407
length= 76.750 gigabytes (2^36.262 bytes), time= 3602 seconds
  no anomalies in 251 test result(s)


real	60m4.376s
user	58m21.190s
sys	1m27.906s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x1da77deb
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x1da77deb
length= 64 megabytes (2^26 bytes), time= 3.4 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x1da77deb
length= 128 megabytes (2^27 bytes), time= 8.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x1da77deb
length= 256 megabytes (2^28 bytes), time= 17.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x1da77deb
length= 512 megabytes (2^29 bytes), time= 31.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x1da77deb
length= 1 gigabyte (2^30 bytes), time= 59.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x1da77deb
length= 2 gigabytes (2^31 bytes), time= 109 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x1da77deb
length= 4 gigabytes (2^32 bytes), time= 202 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x1da77deb
length= 8 gigabytes (2^33 bytes), time= 401 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x1da77deb
length= 16 gigabytes (2^34 bytes), time= 794 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x1da77deb
length= 32 gigabytes (2^35 bytes), time= 1526 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x1da77deb
length= 64 gigabytes (2^36 bytes), time= 3001 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x1da77deb
length= 77.750 gigabytes (2^36.281 bytes), time= 3607 seconds
  no anomalies in 251 test result(s)


real	60m9.452s
user	58m24.075s
sys	1m27.009s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa21a3687
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa21a3687
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xa21a3687
length= 128 megabytes (2^27 bytes), time= 7.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xa21a3687
length= 256 megabytes (2^28 bytes), time= 15.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xa21a3687
length= 512 megabytes (2^29 bytes), time= 27.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa21a3687
length= 1 gigabyte (2^30 bytes), time= 52.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xa21a3687
length= 2 gigabytes (2^31 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:B                  R=  -4.7  p =1-6.3e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0xa21a3687
length= 4 gigabytes (2^32 bytes), time= 205 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xa21a3687
length= 8 gigabytes (2^33 bytes), time= 392 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xa21a3687
length= 16 gigabytes (2^34 bytes), time= 753 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xa21a3687
length= 32 gigabytes (2^35 bytes), time= 1458 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xa21a3687
length= 64 gigabytes (2^36 bytes), time= 2934 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xa21a3687
length= 79.000 gigabytes (2^36.304 bytes), time= 3607 seconds
  no anomalies in 251 test result(s)


real	60m9.977s
user	58m31.023s
sys	1m24.670s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4483dbdf
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4483dbdf
length= 64 megabytes (2^26 bytes), time= 3.3 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x4483dbdf
length= 128 megabytes (2^27 bytes), time= 8.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.6  p =  1.7e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x4483dbdf
length= 256 megabytes (2^28 bytes), time= 16.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.3  p =  3.0e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x4483dbdf
length= 512 megabytes (2^29 bytes), time= 30.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x4483dbdf
length= 1 gigabyte (2^30 bytes), time= 57.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4483dbdf
length= 2 gigabytes (2^31 bytes), time= 109 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x4483dbdf
length= 4 gigabytes (2^32 bytes), time= 202 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x4483dbdf
length= 8 gigabytes (2^33 bytes), time= 387 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x4483dbdf
length= 16 gigabytes (2^34 bytes), time= 752 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x4483dbdf
length= 32 gigabytes (2^35 bytes), time= 1461 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.1  p =1-7.0e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x4483dbdf
length= 64 gigabytes (2^36 bytes), time= 2948 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x4483dbdf
length= 78.750 gigabytes (2^36.299 bytes), time= 3608 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-0,T)         R=  +7.9  p =  8.9e-4   unusual          
  ...and 250 test result(s) without anomalies


real	60m9.203s
user	58m30.232s
sys	1m23.972s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x3ef74011
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x3ef74011
length= 64 megabytes (2^26 bytes), time= 3.1 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x3ef74011
length= 128 megabytes (2^27 bytes), time= 7.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x3ef74011
length= 256 megabytes (2^28 bytes), time= 14.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x3ef74011
length= 512 megabytes (2^29 bytes), time= 28.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x3ef74011
length= 1 gigabyte (2^30 bytes), time= 54.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x3ef74011
length= 2 gigabytes (2^31 bytes), time= 101 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x3ef74011
length= 4 gigabytes (2^32 bytes), time= 191 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x3ef74011
length= 8 gigabytes (2^33 bytes), time= 378 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:B                  R=  +5.8  p =  7.5e-5   mildly suspicious
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x3ef74011
length= 16 gigabytes (2^34 bytes), time= 746 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x3ef74011
length= 32 gigabytes (2^35 bytes), time= 1438 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x3ef74011
length= 64 gigabytes (2^36 bytes), time= 2844 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x3ef74011
length= 80.750 gigabytes (2^36.335 bytes), time= 3609 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+2,13-0,T)          R=  +8.6  p =  3.8e-4   unusual          
  [Low1/8]DC6-9x1Bytes-1            R=  +5.3  p =  4.4e-3   unusual          
  ...and 249 test result(s) without anomalies


real	60m11.310s
user	58m31.802s
sys	1m26.285s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x2ea9c3be
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x2ea9c3be
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x2ea9c3be
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x2ea9c3be
length= 256 megabytes (2^28 bytes), time= 14.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x2ea9c3be
length= 512 megabytes (2^29 bytes), time= 26.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x2ea9c3be
length= 1 gigabyte (2^30 bytes), time= 51.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x2ea9c3be
length= 2 gigabytes (2^31 bytes), time= 100 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x2ea9c3be
length= 4 gigabytes (2^32 bytes), time= 190 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x2ea9c3be
length= 8 gigabytes (2^33 bytes), time= 379 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x2ea9c3be
length= 16 gigabytes (2^34 bytes), time= 746 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x2ea9c3be
length= 32 gigabytes (2^35 bytes), time= 1449 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x2ea9c3be
length= 64 gigabytes (2^36 bytes), time= 2887 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x2ea9c3be
length= 79.500 gigabytes (2^36.313 bytes), time= 3600 seconds
  no anomalies in 251 test result(s)


real	60m2.695s
user	58m21.250s
sys	1m26.894s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x5ab494f2
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x5ab494f2
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x5ab494f2
length= 128 megabytes (2^27 bytes), time= 7.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x5ab494f2
length= 256 megabytes (2^28 bytes), time= 15.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x5ab494f2
length= 512 megabytes (2^29 bytes), time= 27.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x5ab494f2
length= 1 gigabyte (2^30 bytes), time= 52.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x5ab494f2
length= 2 gigabytes (2^31 bytes), time= 101 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x5ab494f2
length= 4 gigabytes (2^32 bytes), time= 193 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x5ab494f2
length= 8 gigabytes (2^33 bytes), time= 384 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x5ab494f2
length= 16 gigabytes (2^34 bytes), time= 743 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x5ab494f2
length= 32 gigabytes (2^35 bytes), time= 1442 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x5ab494f2
length= 64 gigabytes (2^36 bytes), time= 2902 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x5ab494f2
length= 79.250 gigabytes (2^36.308 bytes), time= 3602 seconds
  no anomalies in 251 test result(s)


real	60m4.630s
user	58m27.838s
sys	1m24.181s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe6a8e58a
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe6a8e58a
length= 64 megabytes (2^26 bytes), time= 3.4 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xe6a8e58a
length= 128 megabytes (2^27 bytes), time= 8.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe6a8e58a
length= 256 megabytes (2^28 bytes), time= 17.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xe6a8e58a
length= 512 megabytes (2^29 bytes), time= 30.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xe6a8e58a
length= 1 gigabyte (2^30 bytes), time= 54.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe6a8e58a
length= 2 gigabytes (2^31 bytes), time= 101 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe6a8e58a
length= 4 gigabytes (2^32 bytes), time= 197 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xe6a8e58a
length= 8 gigabytes (2^33 bytes), time= 386 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.8  p =1-2.2e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0xe6a8e58a
length= 16 gigabytes (2^34 bytes), time= 745 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xe6a8e58a
length= 32 gigabytes (2^35 bytes), time= 1441 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+4,13-0,T)                  R=  -8.5  p =1-1.7e-4   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xe6a8e58a
length= 64 gigabytes (2^36 bytes), time= 2902 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xe6a8e58a
length= 79.250 gigabytes (2^36.308 bytes), time= 3601 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+5,13-0,T)                  R=  +8.9  p =  2.6e-4   unusual          
  ...and 250 test result(s) without anomalies


real	60m3.285s
user	58m28.575s
sys	1m23.394s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x6f60547e
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x6f60547e
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x6f60547e
length= 128 megabytes (2^27 bytes), time= 8.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:B                 R=  +4.8  p =  4.1e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x6f60547e
length= 256 megabytes (2^28 bytes), time= 16.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.2  p =1-4.4e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x6f60547e
length= 512 megabytes (2^29 bytes), time= 31.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x6f60547e
length= 1 gigabyte (2^30 bytes), time= 60.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x6f60547e
length= 2 gigabytes (2^31 bytes), time= 110 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x6f60547e
length= 4 gigabytes (2^32 bytes), time= 199 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x6f60547e
length= 8 gigabytes (2^33 bytes), time= 381 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x6f60547e
length= 16 gigabytes (2^34 bytes), time= 751 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x6f60547e
length= 32 gigabytes (2^35 bytes), time= 1477 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x6f60547e
length= 64 gigabytes (2^36 bytes), time= 2910 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x6f60547e
length= 80.000 gigabytes (2^36.322 bytes), time= 3607 seconds
  no anomalies in 251 test result(s)


real	60m9.564s
user	58m30.210s
sys	1m25.472s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x80f96aa2
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x80f96aa2
length= 64 megabytes (2^26 bytes), time= 3.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x80f96aa2
length= 128 megabytes (2^27 bytes), time= 8.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x80f96aa2
length= 256 megabytes (2^28 bytes), time= 16.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x80f96aa2
length= 512 megabytes (2^29 bytes), time= 29.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x80f96aa2
length= 1 gigabyte (2^30 bytes), time= 54.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -5.1  p =1-2.8e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x80f96aa2
length= 2 gigabytes (2^31 bytes), time= 106 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x80f96aa2
length= 4 gigabytes (2^32 bytes), time= 195 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R=  -7.7  p =1-2.3e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -3.8  p =1-8.8e-3   unusual          
  ...and 201 test result(s) without anomalies

rng=RNG_stdin, seed=0x80f96aa2
length= 8 gigabytes (2^33 bytes), time= 382 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x80f96aa2
length= 16 gigabytes (2^34 bytes), time= 754 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x80f96aa2
length= 32 gigabytes (2^35 bytes), time= 1494 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x80f96aa2
length= 64 gigabytes (2^36 bytes), time= 2951 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x80f96aa2
length= 79.000 gigabytes (2^36.304 bytes), time= 3604 seconds
  no anomalies in 251 test result(s)


real	60m6.622s
user	58m28.265s
sys	1m25.978s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x59be33fd
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x59be33fd
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 256 megabytes (2^28 bytes), time= 14.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 512 megabytes (2^29 bytes), time= 27.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 1 gigabyte (2^30 bytes), time= 52.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 2 gigabytes (2^31 bytes), time= 98.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 4 gigabytes (2^32 bytes), time= 186 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.8  p =  3.6e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x59be33fd
length= 8 gigabytes (2^33 bytes), time= 368 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 16 gigabytes (2^34 bytes), time= 752 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 32 gigabytes (2^35 bytes), time= 1490 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 64 gigabytes (2^36 bytes), time= 3004 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 128 gigabytes (2^37 bytes), time= 6023 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 256 gigabytes (2^38 bytes), time= 11974 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+7,13-0,T)                  R= +10.5  p =  3.6e-5   unusual          
  ...and 266 test result(s) without anomalies

rng=RNG_stdin, seed=0x59be33fd
length= 512 gigabytes (2^39 bytes), time= 24009 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 1 terabyte (2^40 bytes), time= 46919 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x59be33fd
length= 2 terabytes (2^41 bytes), time= 93440 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.4  p =1-2.8e-4   unusual          
  ...and 298 test result(s) without anomalies

rng=RNG_stdin, seed=0x59be33fd
length= 4 terabytes (2^42 bytes), time= 187078 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.7  p =1-6.8e-3   unusual          
  ...and 310 test result(s) without anomalies

rng=RNG_stdin, seed=0x59be33fd
length= 7.373 terabytes (2^42.882 bytes), time= 345610 seconds
  no anomalies in 322 test result(s)


real	5760m13.791s
user	5596m48.066s
sys	138m7.189s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4cbe1fed
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4cbe1fed
length= 64 megabytes (2^26 bytes), time= 2.7 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 128 megabytes (2^27 bytes), time= 7.0 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 256 megabytes (2^28 bytes), time= 14.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 512 megabytes (2^29 bytes), time= 26.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 1 gigabyte (2^30 bytes), time= 51.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 2 gigabytes (2^31 bytes), time= 96.7 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 4 gigabytes (2^32 bytes), time= 184 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 8 gigabytes (2^33 bytes), time= 368 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 16 gigabytes (2^34 bytes), time= 753 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 32 gigabytes (2^35 bytes), time= 1488 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 64 gigabytes (2^36 bytes), time= 3001 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 128 gigabytes (2^37 bytes), time= 6030 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.1  p =  2.1e-3   unusual          
  ...and 257 test result(s) without anomalies

rng=RNG_stdin, seed=0x4cbe1fed
length= 256 gigabytes (2^38 bytes), time= 11994 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 512 gigabytes (2^39 bytes), time= 24028 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 1 terabyte (2^40 bytes), time= 46959 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 2 terabytes (2^41 bytes), time= 93474 seconds
  no anomalies in 299 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 4 terabytes (2^42 bytes), time= 187361 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0x4cbe1fed
length= 7.360 terabytes (2^42.880 bytes), time= 345604 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+1,13-0,T)          R=  -8.9  p =1-1.0e-4   mildly suspicious
  ...and 321 test result(s) without anomalies


real	5760m6.104s
user	5598m15.356s
sys	137m8.611s
*/
