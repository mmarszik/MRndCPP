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
/// @created on 2019-12-08 03:00:46 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5992744a-46f6-4728-9046-d424638b4e1a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_mlin.h"

using TRnd = RndMLin;

/* TEST00
time ./MRndCPP 
2458479412
56640046
2419309898
2204864253
607697875
4022608612
18446647677626733138

real	0m29.136s
user	0m29.032s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.13e+07  |3594037961|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.05671219|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.76983264|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.52350005|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.69574758|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.26605226|  PASSED  
        diehard_opso|   0|   2097152|     100|0.72023010|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.82856519|  PASSED  
         diehard_dna|   0|   2097152|     100|0.01240463|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.35511550|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.10164808|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.66912419|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.95723115|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.93949146|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.89810332|  PASSED  
        diehard_sums|   0|       100|     100|0.17535796|  PASSED  
        diehard_runs|   0|    100000|     100|0.46442805|  PASSED  
        diehard_runs|   0|    100000|     100|0.39589867|  PASSED  
       diehard_craps|   0|    200000|     100|0.99311369|  PASSED  
       diehard_craps|   0|    200000|     100|0.02866211|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.87618425|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.40206385|  PASSED  
         sts_monobit|   1|    100000|     100|0.10689107|  PASSED  
            sts_runs|   2|    100000|     100|0.73414959|  PASSED  
          sts_serial|   1|    100000|     100|0.06572470|  PASSED  
          sts_serial|   2|    100000|     100|0.87210394|  PASSED  
          sts_serial|   3|    100000|     100|0.47518324|  PASSED  
          sts_serial|   3|    100000|     100|0.31804275|  PASSED  
          sts_serial|   4|    100000|     100|0.61345046|  PASSED  
          sts_serial|   4|    100000|     100|0.44061408|  PASSED  
          sts_serial|   5|    100000|     100|0.00356202|   WEAK   
          sts_serial|   5|    100000|     100|0.00432078|   WEAK   
          sts_serial|   6|    100000|     100|0.02643197|  PASSED  
          sts_serial|   6|    100000|     100|0.48201350|  PASSED  
          sts_serial|   7|    100000|     100|0.35171635|  PASSED  
          sts_serial|   7|    100000|     100|0.37474917|  PASSED  
          sts_serial|   8|    100000|     100|0.16068216|  PASSED  
          sts_serial|   8|    100000|     100|0.54518990|  PASSED  
          sts_serial|   9|    100000|     100|0.12732252|  PASSED  
          sts_serial|   9|    100000|     100|0.63691315|  PASSED  
          sts_serial|  10|    100000|     100|0.91511287|  PASSED  
          sts_serial|  10|    100000|     100|0.32441746|  PASSED  
          sts_serial|  11|    100000|     100|0.86526843|  PASSED  
          sts_serial|  11|    100000|     100|0.69593916|  PASSED  
          sts_serial|  12|    100000|     100|0.99736939|   WEAK   
          sts_serial|  12|    100000|     100|0.75450143|  PASSED  
          sts_serial|  13|    100000|     100|0.10549602|  PASSED  
          sts_serial|  13|    100000|     100|0.01414295|  PASSED  
          sts_serial|  14|    100000|     100|0.46588519|  PASSED  
          sts_serial|  14|    100000|     100|0.97778497|  PASSED  
          sts_serial|  15|    100000|     100|0.10177028|  PASSED  
          sts_serial|  15|    100000|     100|0.44887775|  PASSED  
          sts_serial|  16|    100000|     100|0.04368892|  PASSED  
          sts_serial|  16|    100000|     100|0.50623050|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.59767447|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.97255132|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.33932567|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.10674089|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.78004677|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.08702388|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.66252292|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.65277035|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.45648337|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.36980589|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.13149739|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.36968638|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.48790784|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.52038840|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.25730233|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.31328153|  PASSED  
    rgb_permutations|   2|    100000|     100|0.82969465|  PASSED  
    rgb_permutations|   3|    100000|     100|0.75318556|  PASSED  
    rgb_permutations|   4|    100000|     100|0.15039053|  PASSED  
    rgb_permutations|   5|    100000|     100|0.77263739|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.79969549|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.32659147|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.95193012|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.28130395|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.05283617|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.97551611|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.79723354|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.23898213|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.51359484|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.10777965|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.91985873|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.28738460|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.71392801|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.35151320|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.85207718|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.93604302|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.62623962|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.42754170|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.73050414|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.25618432|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.98715704|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.55535422|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.02758176|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.68293163|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.09475485|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.79987940|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.48690666|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.07855078|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.77999342|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.21225485|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.43261938|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.84985453|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.75724905|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.06176872|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.11791702|  PASSED  
             dab_dct| 256|     50000|       1|0.30283655|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.71433713|  PASSED  
        dab_filltree|  32|  15000000|       1|0.34183532|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.82979963|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.18368675|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.66297291|  PASSED  

real	53m3.219s
user	49m9.316s
sys	3m45.164s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6d628d2a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6d628d2a
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6d628d2a
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6d628d2a
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6d628d2a
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.8  p =1-1.8e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6d628d2a
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6d628d2a
length= 4 gigabytes (2^32 bytes), time= 72.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x6d628d2a
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.964s
user	1m42.268s
sys	0m2.428s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc2b7b91e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc2b7b91e
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc2b7b91e
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc2b7b91e
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xc2b7b91e
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc2b7b91e
length= 2 gigabytes (2^31 bytes), time= 37.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xc2b7b91e
length= 4 gigabytes (2^32 bytes), time= 75.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xc2b7b91e
length= 8 gigabytes (2^33 bytes), time= 155 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xc2b7b91e
length= 16 gigabytes (2^34 bytes), time= 312 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xc2b7b91e
length= 32 gigabytes (2^35 bytes), time= 619 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xc2b7b91e
length= 51.250 gigabytes (2^35.679 bytes), time= 1003 seconds
  no anomalies in 184 test result(s)


real	16m43.404s
user	16m20.868s
sys	0m19.728s
*/
