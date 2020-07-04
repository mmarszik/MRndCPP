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
/// @created on 2019-12-08 02:59:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8e200c1f-f53f-48b8-9d3a-c301e6742617                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

namespace MRnd {

using TMRnd = RndLin1;

}

/* TEST00
time ./MRndCPP 10 
3232027252
3217903424
1121769180
2368350810
1204451062
95313796
1556492576
3984424168
2349071394
2602532608
5260524025060744915

real	0m3.232s
user	0m3.232s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.18e+07  |3948360108|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.04652740|  PASSED  

real	0m22.246s
user	0m22.741s
sys	0m0.592s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xfa4fdb87
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xfa4fdb87
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 256 megabytes (2^28 bytes), time= 6.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 1 gigabyte (2^30 bytes), time= 23.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 2 gigabytes (2^31 bytes), time= 44.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 4 gigabytes (2^32 bytes), time= 84.9 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 8 gigabytes (2^33 bytes), time= 167 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xfa4fdb87
length= 14.750 gigabytes (2^33.883 bytes), time= 301 seconds
  no anomalies in 226 test result(s)


real	5m2.289s
user	5m0.410s
sys	0m9.959s
*/
/* TEST00
time ./MRndCPP 10 
3232027252
3217903424
1121769180
2368350810
1204451062
95313796
1556492576
3984424168
2349071394
2602532608
5260524025060744915

real	0m3.387s
user	0m3.380s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.15e+07  |1343249807|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.89204516|  PASSED  

real	0m25.026s
user	0m24.388s
sys	0m0.608s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x986e279e
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x986e279e
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-3,T)                  R=  -6.6  p =1-1.5e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x986e279e
length= 256 megabytes (2^28 bytes), time= 6.3 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 512 megabytes (2^29 bytes), time= 12.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 1 gigabyte (2^30 bytes), time= 24.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.3  p =1-4.2e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x986e279e
length= 2 gigabytes (2^31 bytes), time= 46.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 4 gigabytes (2^32 bytes), time= 90.1 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 8 gigabytes (2^33 bytes), time= 182 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 16 gigabytes (2^34 bytes), time= 369 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 32 gigabytes (2^35 bytes), time= 736 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x986e279e
length= 43.000 gigabytes (2^35.426 bytes), time= 1001 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -3.9  p =1-9.0e-3   unusual          
  ...and 241 test result(s) without anomalies


real	16m41.834s
user	16m23.356s
sys	0m17.212s
*/
/* TEST00
time ./MRndCPP 12 
3232027252
3217903424
1121769180
2368350810
1204451062
95313796
1556492576
3984424168
2349071394
2602532608
8743494906319401931

real	0m14.927s
user	0m14.898s
sys	0m0.024s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.58e+07  |1195620712|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.81960334|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.06253164|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.66231757|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.98727726|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.14789017|  PASSED  
        diehard_opso|   0|   2097152|     100|0.70230193|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.42401407|  PASSED  
         diehard_dna|   0|   2097152|     100|0.75565742|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.65921941|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.51441970|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.05559273|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.79872125|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.78753992|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.99346452|  PASSED  
        diehard_sums|   0|       100|     100|0.27378548|  PASSED  
        diehard_runs|   0|    100000|     100|0.72415252|  PASSED  
        diehard_runs|   0|    100000|     100|0.47520836|  PASSED  
       diehard_craps|   0|    200000|     100|0.94437237|  PASSED  
       diehard_craps|   0|    200000|     100|0.83982845|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.96847135|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.91480269|  PASSED  
         sts_monobit|   1|    100000|     100|0.61431974|  PASSED  
            sts_runs|   2|    100000|     100|0.85467420|  PASSED  
          sts_serial|   1|    100000|     100|0.40579867|  PASSED  
          sts_serial|   2|    100000|     100|0.29344295|  PASSED  
          sts_serial|   3|    100000|     100|0.03938024|  PASSED  
          sts_serial|   3|    100000|     100|0.06012325|  PASSED  
          sts_serial|   4|    100000|     100|0.93933774|  PASSED  
          sts_serial|   4|    100000|     100|0.44102888|  PASSED  
          sts_serial|   5|    100000|     100|0.98246242|  PASSED  
          sts_serial|   5|    100000|     100|0.97781730|  PASSED  
          sts_serial|   6|    100000|     100|0.98640395|  PASSED  
          sts_serial|   6|    100000|     100|0.80408590|  PASSED  
          sts_serial|   7|    100000|     100|0.45232331|  PASSED  
          sts_serial|   7|    100000|     100|0.69144668|  PASSED  
          sts_serial|   8|    100000|     100|0.61810857|  PASSED  
          sts_serial|   8|    100000|     100|0.26873435|  PASSED  
          sts_serial|   9|    100000|     100|0.12908833|  PASSED  
          sts_serial|   9|    100000|     100|0.88453540|  PASSED  
          sts_serial|  10|    100000|     100|0.86989510|  PASSED  
          sts_serial|  10|    100000|     100|0.53552980|  PASSED  
          sts_serial|  11|    100000|     100|0.91566236|  PASSED  
          sts_serial|  11|    100000|     100|0.69029050|  PASSED  
          sts_serial|  12|    100000|     100|0.28619890|  PASSED  
          sts_serial|  12|    100000|     100|0.51483551|  PASSED  
          sts_serial|  13|    100000|     100|0.30573282|  PASSED  
          sts_serial|  13|    100000|     100|0.49942734|  PASSED  
          sts_serial|  14|    100000|     100|0.61275390|  PASSED  
          sts_serial|  14|    100000|     100|0.99812403|   WEAK   
          sts_serial|  15|    100000|     100|0.92845798|  PASSED  
          sts_serial|  15|    100000|     100|0.16120840|  PASSED  
          sts_serial|  16|    100000|     100|0.73619443|  PASSED  
          sts_serial|  16|    100000|     100|0.98034811|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.39560865|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.24287678|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.89129824|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.01434382|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.57107637|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.57741827|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.08544499|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.51732062|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.90268171|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.98609811|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.37502356|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.26411500|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.75310116|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.11770258|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.14437686|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.26825722|  PASSED  
    rgb_permutations|   2|    100000|     100|0.63764886|  PASSED  
    rgb_permutations|   3|    100000|     100|0.31168901|  PASSED  
    rgb_permutations|   4|    100000|     100|0.65349768|  PASSED  
    rgb_permutations|   5|    100000|     100|0.14043613|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.89610358|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.47115824|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.63867368|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.97643310|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.83080389|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.55781756|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.81142687|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.08327822|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.89950382|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.96048172|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.32812874|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.51507800|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.24080387|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.99886687|   WEAK   
      rgb_lagged_sum|  14|   1000000|     100|0.78460847|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.74944802|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.98670094|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.23207801|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.66868020|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.30923057|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.13222190|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.51053919|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.19051592|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.17008012|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.48636064|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.36437717|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.14060792|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.06687570|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.77300842|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.91546547|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.69215690|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.58325268|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.11460554|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.66506837|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.31718463|  PASSED  
             dab_dct| 256|     50000|       1|0.05963186|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.88901198|  PASSED  
        dab_filltree|  32|  15000000|       1|0.73336612|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.52386673|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.58375285|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.85694030|  PASSED  

real	69m3.073s
user	60m58.361s
sys	8m2.011s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x857a8dca
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x857a8dca
length= 128 megabytes (2^27 bytes), time= 3.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x857a8dca
length= 256 megabytes (2^28 bytes), time= 8.7 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.3  p =  5.3e-4   unusual          
  [Low1/8]BCFN(2+3,13-5,T)          R= +10.0  p =  4.1e-4   unusual          
  ...and 160 test result(s) without anomalies

rng=RNG_stdin, seed=0x857a8dca
length= 512 megabytes (2^29 bytes), time= 17.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x857a8dca
length= 1 gigabyte (2^30 bytes), time= 34.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x857a8dca
length= 2 gigabytes (2^31 bytes), time= 66.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x857a8dca
length= 4 gigabytes (2^32 bytes), time= 126 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x857a8dca
length= 8 gigabytes (2^33 bytes), time= 243 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x857a8dca
length= 16 gigabytes (2^34 bytes), time= 481 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  -3.9  p =1-2.2e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x857a8dca
length= 32 gigabytes (2^35 bytes), time= 964 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x857a8dca
length= 64 gigabytes (2^36 bytes), time= 1922 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x857a8dca
length= 121.500 gigabytes (2^36.925 bytes), time= 3605 seconds
  no anomalies in 258 test result(s)


real	60m6.197s
user	58m45.240s
sys	1m17.613s
*/
/* TEST00
time ./MRndCPP 12 
3232027252
3217903424
1121769180
2368350810
1204451062
95313796
1556492576
3984424168
2349071394
2602532608
8743494906319401931

real	0m14.825s
user	0m14.816s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.25e+07  |1595049557|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.96661861|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.34894239|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.29667930|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.81481339|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.20543145|  PASSED  
        diehard_opso|   0|   2097152|     100|0.81326651|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.76730056|  PASSED  
         diehard_dna|   0|   2097152|     100|0.93363012|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.76348005|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.76786380|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.58615511|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.52217079|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.54430991|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.46855233|  PASSED  
        diehard_sums|   0|       100|     100|0.10324048|  PASSED  
        diehard_runs|   0|    100000|     100|0.92526993|  PASSED  
        diehard_runs|   0|    100000|     100|0.33485244|  PASSED  
       diehard_craps|   0|    200000|     100|0.09532460|  PASSED  
       diehard_craps|   0|    200000|     100|0.33159174|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.39797748|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.85598464|  PASSED  
         sts_monobit|   1|    100000|     100|0.36109771|  PASSED  
            sts_runs|   2|    100000|     100|0.90109381|  PASSED  
          sts_serial|   1|    100000|     100|0.48182314|  PASSED  
          sts_serial|   2|    100000|     100|0.71724920|  PASSED  
          sts_serial|   3|    100000|     100|0.61103855|  PASSED  
          sts_serial|   3|    100000|     100|0.29032083|  PASSED  
          sts_serial|   4|    100000|     100|0.07605557|  PASSED  
          sts_serial|   4|    100000|     100|0.01867293|  PASSED  
          sts_serial|   5|    100000|     100|0.07044725|  PASSED  
          sts_serial|   5|    100000|     100|0.91741512|  PASSED  
          sts_serial|   6|    100000|     100|0.19094262|  PASSED  
          sts_serial|   6|    100000|     100|0.50618874|  PASSED  
          sts_serial|   7|    100000|     100|0.20364043|  PASSED  
          sts_serial|   7|    100000|     100|0.13131214|  PASSED  
          sts_serial|   8|    100000|     100|0.61724745|  PASSED  
          sts_serial|   8|    100000|     100|0.42973793|  PASSED  
          sts_serial|   9|    100000|     100|0.85652379|  PASSED  
          sts_serial|   9|    100000|     100|0.95078962|  PASSED  
          sts_serial|  10|    100000|     100|0.84307498|  PASSED  
          sts_serial|  10|    100000|     100|0.87461601|  PASSED  
          sts_serial|  11|    100000|     100|0.39107710|  PASSED  
          sts_serial|  11|    100000|     100|0.49672150|  PASSED  
          sts_serial|  12|    100000|     100|0.98523254|  PASSED  
          sts_serial|  12|    100000|     100|0.64678653|  PASSED  
          sts_serial|  13|    100000|     100|0.38451790|  PASSED  
          sts_serial|  13|    100000|     100|0.96068188|  PASSED  
          sts_serial|  14|    100000|     100|0.94608310|  PASSED  
          sts_serial|  14|    100000|     100|0.54423279|  PASSED  
          sts_serial|  15|    100000|     100|0.70965793|  PASSED  
          sts_serial|  15|    100000|     100|0.86145320|  PASSED  
          sts_serial|  16|    100000|     100|0.10592425|  PASSED  
          sts_serial|  16|    100000|     100|0.91612454|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.66905451|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.00256904|   WEAK   
         rgb_bitdist|   3|    100000|     100|0.11558106|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.20878775|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.94059948|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.54709193|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.84936554|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.07156840|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.76096289|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.68802825|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.16144756|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.42180225|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.96879266|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.85931180|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.41425337|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.11330279|  PASSED  
    rgb_permutations|   2|    100000|     100|0.33193504|  PASSED  
    rgb_permutations|   3|    100000|     100|0.16005761|  PASSED  
    rgb_permutations|   4|    100000|     100|0.99825487|   WEAK   
    rgb_permutations|   5|    100000|     100|0.87978883|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.99967503|   WEAK   
      rgb_lagged_sum|   1|   1000000|     100|0.04059016|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.38592010|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.60206275|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.83899752|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.33997812|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.76437224|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.29110304|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.63475043|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.93683950|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.81771803|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.14658095|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.87287940|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.94933347|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.57729046|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.30108056|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.81759720|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.39592069|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.91078859|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.90506642|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.83615989|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.87333577|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.27332461|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.93685544|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.99645015|   WEAK   
      rgb_lagged_sum|  25|   1000000|     100|0.75997716|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.91892440|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.33793592|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.08469101|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.14507303|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.51872881|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.77942489|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.86401912|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.63822905|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.03506980|  PASSED  
             dab_dct| 256|     50000|       1|0.81264706|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.76090570|  PASSED  
        dab_filltree|  32|  15000000|       1|0.13869129|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.74451313|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.85356239|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.94390854|  PASSED  

real	67m21.145s
user	59m34.043s
sys	7m44.978s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x6146174f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x6146174f
length= 64 megabytes (2^26 bytes), time= 2.3 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 128 megabytes (2^27 bytes), time= 5.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 256 megabytes (2^28 bytes), time= 10.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 512 megabytes (2^29 bytes), time= 18.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 1 gigabyte (2^30 bytes), time= 32.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 2 gigabytes (2^31 bytes), time= 62.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 4 gigabytes (2^32 bytes), time= 121 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 8 gigabytes (2^33 bytes), time= 234 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 16 gigabytes (2^34 bytes), time= 462 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 32 gigabytes (2^35 bytes), time= 906 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 64 gigabytes (2^36 bytes), time= 1816 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 128 gigabytes (2^37 bytes), time= 3616 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 256 gigabytes (2^38 bytes), time= 7314 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.2  p =1-8.5e-3   unusual          
  ...and 266 test result(s) without anomalies

rng=RNG_stdin, seed=0x6146174f
length= 512 gigabytes (2^39 bytes), time= 15862 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 1 terabyte (2^40 bytes), time= 33266 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 2 terabytes (2^41 bytes), time= 64213 seconds
  no anomalies in 299 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 4 terabytes (2^42 bytes), time= 129447 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 8 terabytes (2^43 bytes), time= 252718 seconds
  no anomalies in 322 test result(s)

rng=RNG_stdin, seed=0x6146174f
length= 11.086 terabytes (2^43.471 bytes), time= 345607 seconds
  no anomalies in 327 test result(s)


real	5760m9.669s
user	5633m47.849s
sys	120m57.730s
*/
