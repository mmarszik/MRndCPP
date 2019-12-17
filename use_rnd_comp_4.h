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
18446707729444150213

real	0m15.503s
user	0m15.468s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.34e+07  | 641900292|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.15615629|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.64867962|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.93963450|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.45864459|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.94834578|  PASSED  
        diehard_opso|   0|   2097152|     100|0.94733215|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.56931007|  PASSED  
         diehard_dna|   0|   2097152|     100|0.91271732|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.83823152|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.40008802|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.76205443|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.86705165|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.73335837|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.60333551|  PASSED  
        diehard_sums|   0|       100|     100|0.02483398|  PASSED  
        diehard_runs|   0|    100000|     100|0.97811597|  PASSED  
        diehard_runs|   0|    100000|     100|0.62429218|  PASSED  
       diehard_craps|   0|    200000|     100|0.50983692|  PASSED  
       diehard_craps|   0|    200000|     100|0.77326262|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.97784771|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.96276103|  PASSED  
         sts_monobit|   1|    100000|     100|0.90745155|  PASSED  
            sts_runs|   2|    100000|     100|0.60870486|  PASSED  
          sts_serial|   1|    100000|     100|0.73875861|  PASSED  
          sts_serial|   2|    100000|     100|0.84522933|  PASSED  
          sts_serial|   3|    100000|     100|0.54040300|  PASSED  
          sts_serial|   3|    100000|     100|0.77132804|  PASSED  
          sts_serial|   4|    100000|     100|0.90441760|  PASSED  
          sts_serial|   4|    100000|     100|0.27361293|  PASSED  
          sts_serial|   5|    100000|     100|0.88812787|  PASSED  
          sts_serial|   5|    100000|     100|0.41679168|  PASSED  
          sts_serial|   6|    100000|     100|0.72771895|  PASSED  
          sts_serial|   6|    100000|     100|0.50127904|  PASSED  
          sts_serial|   7|    100000|     100|0.43831357|  PASSED  
          sts_serial|   7|    100000|     100|0.85277155|  PASSED  
          sts_serial|   8|    100000|     100|0.55773226|  PASSED  
          sts_serial|   8|    100000|     100|0.82841182|  PASSED  
          sts_serial|   9|    100000|     100|0.99418121|  PASSED  
          sts_serial|   9|    100000|     100|0.26810159|  PASSED  
          sts_serial|  10|    100000|     100|0.30692578|  PASSED  
          sts_serial|  10|    100000|     100|0.08069915|  PASSED  
          sts_serial|  11|    100000|     100|0.67464344|  PASSED  
          sts_serial|  11|    100000|     100|0.70213981|  PASSED  
          sts_serial|  12|    100000|     100|0.05385907|  PASSED  
          sts_serial|  12|    100000|     100|0.27656056|  PASSED  
          sts_serial|  13|    100000|     100|0.22127871|  PASSED  
          sts_serial|  13|    100000|     100|0.90639153|  PASSED  
          sts_serial|  14|    100000|     100|0.55931401|  PASSED  
          sts_serial|  14|    100000|     100|0.17221303|  PASSED  
          sts_serial|  15|    100000|     100|0.23042584|  PASSED  
          sts_serial|  15|    100000|     100|0.94601919|  PASSED  
          sts_serial|  16|    100000|     100|0.54712083|  PASSED  
          sts_serial|  16|    100000|     100|0.72918985|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.84968354|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.95624298|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.95467313|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.68644599|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.67628974|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.14424738|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.58264782|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.33857844|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.94653116|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.02295148|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.73731938|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.29160112|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.59591933|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.78730336|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.11630131|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.36313261|  PASSED  
    rgb_permutations|   2|    100000|     100|0.42240063|  PASSED  
    rgb_permutations|   3|    100000|     100|0.09680645|  PASSED  
    rgb_permutations|   4|    100000|     100|0.04607223|  PASSED  
    rgb_permutations|   5|    100000|     100|0.27571630|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.43357215|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.08155503|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.06245568|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.27068937|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.88818000|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.04411237|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.50367943|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.79008898|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.44222007|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.83320768|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.17765511|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.39234929|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.14154448|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.93759740|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.52084672|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.62600102|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.12934117|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.33197634|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.84720591|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.76666650|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.47300857|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.94378760|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.88318898|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.56441432|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.12835841|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.76523645|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.50903363|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.40237755|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.72715905|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.31736976|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.54311123|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.60570200|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.68323816|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.92220595|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.43636490|  PASSED  
             dab_dct| 256|     50000|       1|0.39910701|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.57758588|  PASSED  
        dab_filltree|  32|  15000000|       1|0.75205309|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.43747334|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.52804802|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.67348078|  PASSED  

real	46m58.992s
user	43m8.544s
sys	3m40.612s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x66aaad13
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x66aaad13
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x66aaad13
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.5  p =1-2.1e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x66aaad13
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x66aaad13
length= 1 gigabyte (2^30 bytes), time= 19.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x66aaad13
length= 2 gigabytes (2^31 bytes), time= 38.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x66aaad13
length= 4 gigabytes (2^32 bytes), time= 74.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x66aaad13
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.479s
user	1m41.060s
sys	0m2.204s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xec284dbb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xec284dbb
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xec284dbb
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xec284dbb
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xec284dbb
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xec284dbb
length= 2 gigabytes (2^31 bytes), time= 36.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xec284dbb
length= 4 gigabytes (2^32 bytes), time= 72.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xec284dbb
length= 8 gigabytes (2^33 bytes), time= 150 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xec284dbb
length= 16 gigabytes (2^34 bytes), time= 303 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.6  p =1-3.5e-3   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0xec284dbb
length= 32 gigabytes (2^35 bytes), time= 604 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xec284dbb
length= 52.500 gigabytes (2^35.714 bytes), time= 1001 seconds
  no anomalies in 184 test result(s)


real	16m42.059s
user	16m17.036s
sys	0m21.384s
*/
/* TEST00
time ./MRndCPP 
2650568634
2384656680
758777039
281209698
3608703350
2808436608
18446707729444150213

real	0m15.487s
user	0m15.456s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.34e+07  |4067960132|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.98030660|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.98909743|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.79946705|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.51180266|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.56845827|  PASSED  
        diehard_opso|   0|   2097152|     100|0.40593096|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.40038598|  PASSED  
         diehard_dna|   0|   2097152|     100|0.47653499|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.15017310|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.25427121|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.91232487|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.63801987|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.61695143|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.66074790|  PASSED  
        diehard_sums|   0|       100|     100|0.80003323|  PASSED  
        diehard_runs|   0|    100000|     100|0.74838429|  PASSED  
        diehard_runs|   0|    100000|     100|0.22852650|  PASSED  
       diehard_craps|   0|    200000|     100|0.09757095|  PASSED  
       diehard_craps|   0|    200000|     100|0.65810418|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.80779816|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.84160236|  PASSED  
         sts_monobit|   1|    100000|     100|0.93044355|  PASSED  
            sts_runs|   2|    100000|     100|0.51303276|  PASSED  
          sts_serial|   1|    100000|     100|0.45541432|  PASSED  
          sts_serial|   2|    100000|     100|0.12550640|  PASSED  
          sts_serial|   3|    100000|     100|0.93607721|  PASSED  
          sts_serial|   3|    100000|     100|0.08937829|  PASSED  
          sts_serial|   4|    100000|     100|0.76622866|  PASSED  
          sts_serial|   4|    100000|     100|0.60896074|  PASSED  
          sts_serial|   5|    100000|     100|0.34875147|  PASSED  
          sts_serial|   5|    100000|     100|0.73619396|  PASSED  
          sts_serial|   6|    100000|     100|0.31983705|  PASSED  
          sts_serial|   6|    100000|     100|0.55814513|  PASSED  
          sts_serial|   7|    100000|     100|0.29773404|  PASSED  
          sts_serial|   7|    100000|     100|0.61806315|  PASSED  
          sts_serial|   8|    100000|     100|0.36728964|  PASSED  
          sts_serial|   8|    100000|     100|0.21405776|  PASSED  
          sts_serial|   9|    100000|     100|0.12948249|  PASSED  
          sts_serial|   9|    100000|     100|0.46456937|  PASSED  
          sts_serial|  10|    100000|     100|0.52591458|  PASSED  
          sts_serial|  10|    100000|     100|0.98281789|  PASSED  
          sts_serial|  11|    100000|     100|0.05946574|  PASSED  
          sts_serial|  11|    100000|     100|0.03488443|  PASSED  
          sts_serial|  12|    100000|     100|0.43803906|  PASSED  
          sts_serial|  12|    100000|     100|0.26835110|  PASSED  
          sts_serial|  13|    100000|     100|0.98967737|  PASSED  
          sts_serial|  13|    100000|     100|0.46416290|  PASSED  
          sts_serial|  14|    100000|     100|0.18077070|  PASSED  
          sts_serial|  14|    100000|     100|0.36860886|  PASSED  
          sts_serial|  15|    100000|     100|0.63610802|  PASSED  
          sts_serial|  15|    100000|     100|0.19277799|  PASSED  
          sts_serial|  16|    100000|     100|0.91964139|  PASSED  
          sts_serial|  16|    100000|     100|0.63112568|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.60334765|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.51316804|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.07754931|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.79487005|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.13306864|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.89023290|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.38828295|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.24464881|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.87253920|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.16708684|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.61544486|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.99979509|   WEAK   
rgb_minimum_distance|   2|     10000|    1000|0.94823214|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.66445414|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.21335656|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.88548475|  PASSED  
    rgb_permutations|   2|    100000|     100|0.62692382|  PASSED  
    rgb_permutations|   3|    100000|     100|0.02543198|  PASSED  
    rgb_permutations|   4|    100000|     100|0.63205574|  PASSED  
    rgb_permutations|   5|    100000|     100|0.04999954|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.02938727|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.50172426|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.00515410|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.23451578|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.43160701|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.58544956|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.56964458|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.32194089|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.62825049|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.83222441|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.94616651|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.70332082|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.25722290|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.71867803|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.01694060|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.80827238|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.03499149|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.67587759|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.19194179|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.74065055|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.05897220|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.44289398|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.37060162|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.32781914|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.54432280|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.03662234|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.85187350|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.89392800|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.85484967|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.85108796|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.82827683|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.97988918|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.37717199|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.36432685|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.41425657|  PASSED  
             dab_dct| 256|     50000|       1|0.76114376|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.82303881|  PASSED  
        dab_filltree|  32|  15000000|       1|0.36763264|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.01812314|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.29370038|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.42667851|  PASSED  

real	52m21.536s
user	48m26.404s
sys	3m46.664s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x20a20581
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x20a20581
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.5  p =  7.2e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x20a20581
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x20a20581
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x20a20581
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x20a20581
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x20a20581
length= 4 gigabytes (2^32 bytes), time= 71.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x20a20581
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m45.212s
user	1m42.344s
sys	0m2.460s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2d89a2f1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2d89a2f1
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2d89a2f1
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2d89a2f1
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2d89a2f1
length= 1 gigabyte (2^30 bytes), time= 18.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +4.7  p =  1.9e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2d89a2f1
length= 2 gigabytes (2^31 bytes), time= 36.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2d89a2f1
length= 4 gigabytes (2^32 bytes), time= 70.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2d89a2f1
length= 8 gigabytes (2^33 bytes), time= 141 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x2d89a2f1
length= 16 gigabytes (2^34 bytes), time= 292 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x2d89a2f1
length= 32 gigabytes (2^35 bytes), time= 591 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x2d89a2f1
length= 53.500 gigabytes (2^35.741 bytes), time= 1003 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+6,13-3,T)         R= +12.4  p =  1.1e-5   mildly suspicious
  [Low1/32]BCFN(2+7,13-3,T)         R= +15.1  p =  5.8e-7   suspicious       
  ...and 182 test result(s) without anomalies


real	16m43.812s
user	16m19.284s
sys	0m21.524s
*/
