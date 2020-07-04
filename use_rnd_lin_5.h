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
/// @created on 2019-12-08 03:00:04 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 313a58a6-94ed-47d2-9194-ccfa066f2f73                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

namespace MRnd {

using TMRnd = RndLin5;

}
/* TEST00
time ./MRndCPP 10 
1429888350
1930996510
2751695229
3357925846
1627701116
123001771
3961838821
4157523336
1308695079
20649485
842287435395954407

real	0m12.874s
user	0m12.869s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.43e+07  |3369213727|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.84538763|  PASSED  

real	0m22.647s
user	0m24.362s
sys	0m0.585s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xefd4e771
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xefd4e771
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.0  p =1-8.2e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xefd4e771
length= 256 megabytes (2^28 bytes), time= 6.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 512 megabytes (2^29 bytes), time= 12.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 1 gigabyte (2^30 bytes), time= 25.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 2 gigabytes (2^31 bytes), time= 48.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 4 gigabytes (2^32 bytes), time= 94.0 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 8 gigabytes (2^33 bytes), time= 186 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xefd4e771
length= 13.250 gigabytes (2^33.728 bytes), time= 303 seconds
  no anomalies in 219 test result(s)


real	5m4.302s
user	5m5.130s
sys	0m9.671s
*/
/* TEST00
time ./MRndCPP 10 
1429888350
1930996510
2751695229
3357925846
1627701116
123001771
3961838821
4157523336
1308695079
20649485
842287435395954407

real	0m13.351s
user	0m13.336s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.43e+07  |3438634332|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.08713841|  PASSED  

real	0m26.282s
user	0m25.792s
sys	0m0.468s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x60a80d0a
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x60a80d0a
length= 128 megabytes (2^27 bytes), time= 3.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x60a80d0a
length= 256 megabytes (2^28 bytes), time= 6.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x60a80d0a
length= 512 megabytes (2^29 bytes), time= 13.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +5.4  p =  8.9e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x60a80d0a
length= 1 gigabyte (2^30 bytes), time= 26.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+4,13-2,T)                  R=  -8.5  p =1-1.0e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x60a80d0a
length= 2 gigabytes (2^31 bytes), time= 50.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x60a80d0a
length= 4 gigabytes (2^32 bytes), time= 98.3 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x60a80d0a
length= 8 gigabytes (2^33 bytes), time= 200 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x60a80d0a
length= 16 gigabytes (2^34 bytes), time= 407 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x60a80d0a
length= 32 gigabytes (2^35 bytes), time= 814 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x60a80d0a
length= 39.250 gigabytes (2^35.295 bytes), time= 1000 seconds
  no anomalies in 239 test result(s)


real	16m41.050s
user	16m24.240s
sys	0m15.768s
*/
/* TEST00
time ./MRndCPP 12 
1429888350
1930996510
2751695229
3357925846
1627701116
123001771
3961838821
4157523336
1308695079
20649485
6682808766091986484

real	0m58.795s
user	0m58.784s
sys	0m0.005s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.92e+07  |2629077653|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.70409838|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.02714631|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.63804218|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.48976429|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.98181449|  PASSED  
        diehard_opso|   0|   2097152|     100|0.71479874|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.66003608|  PASSED  
         diehard_dna|   0|   2097152|     100|0.32912142|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.40649834|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.21066124|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.74215483|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.99452877|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.48698014|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.92434925|  PASSED  
        diehard_sums|   0|       100|     100|0.09197329|  PASSED  
        diehard_runs|   0|    100000|     100|0.33686237|  PASSED  
        diehard_runs|   0|    100000|     100|0.41565399|  PASSED  
       diehard_craps|   0|    200000|     100|0.34789190|  PASSED  
       diehard_craps|   0|    200000|     100|0.43051459|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.21163183|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.49717675|  PASSED  
         sts_monobit|   1|    100000|     100|0.58823730|  PASSED  
            sts_runs|   2|    100000|     100|0.51847724|  PASSED  
          sts_serial|   1|    100000|     100|0.54149455|  PASSED  
          sts_serial|   2|    100000|     100|0.79586614|  PASSED  
          sts_serial|   3|    100000|     100|0.35973819|  PASSED  
          sts_serial|   3|    100000|     100|0.47895222|  PASSED  
          sts_serial|   4|    100000|     100|0.39411229|  PASSED  
          sts_serial|   4|    100000|     100|0.73379502|  PASSED  
          sts_serial|   5|    100000|     100|0.78492932|  PASSED  
          sts_serial|   5|    100000|     100|0.84153076|  PASSED  
          sts_serial|   6|    100000|     100|0.53661857|  PASSED  
          sts_serial|   6|    100000|     100|0.32896256|  PASSED  
          sts_serial|   7|    100000|     100|0.67769236|  PASSED  
          sts_serial|   7|    100000|     100|0.93182407|  PASSED  
          sts_serial|   8|    100000|     100|0.29499932|  PASSED  
          sts_serial|   8|    100000|     100|0.84195461|  PASSED  
          sts_serial|   9|    100000|     100|0.87189862|  PASSED  
          sts_serial|   9|    100000|     100|0.52716350|  PASSED  
          sts_serial|  10|    100000|     100|0.86580316|  PASSED  
          sts_serial|  10|    100000|     100|0.69879427|  PASSED  
          sts_serial|  11|    100000|     100|0.30468595|  PASSED  
          sts_serial|  11|    100000|     100|0.31081799|  PASSED  
          sts_serial|  12|    100000|     100|0.82571615|  PASSED  
          sts_serial|  12|    100000|     100|0.94402349|  PASSED  
          sts_serial|  13|    100000|     100|0.77434164|  PASSED  
          sts_serial|  13|    100000|     100|0.80069205|  PASSED  
          sts_serial|  14|    100000|     100|0.99438044|  PASSED  
          sts_serial|  14|    100000|     100|0.22571119|  PASSED  
          sts_serial|  15|    100000|     100|0.58641420|  PASSED  
          sts_serial|  15|    100000|     100|0.97397163|  PASSED  
          sts_serial|  16|    100000|     100|0.86324645|  PASSED  
          sts_serial|  16|    100000|     100|0.51230673|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.56046215|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.50535743|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.47406791|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.80390101|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.67608336|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.19434144|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.99200068|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.50671482|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.02003762|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.99217508|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.51308224|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.46835810|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.65428139|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.94628337|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.67346222|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.22950165|  PASSED  
    rgb_permutations|   2|    100000|     100|0.92447133|  PASSED  
    rgb_permutations|   3|    100000|     100|0.09722958|  PASSED  
    rgb_permutations|   4|    100000|     100|0.81752128|  PASSED  
    rgb_permutations|   5|    100000|     100|0.84849672|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.99674635|   WEAK   
      rgb_lagged_sum|   1|   1000000|     100|0.25192282|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.64172294|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.04048965|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.49322921|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.56960501|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.53201900|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.32756436|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.53687265|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.51920465|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.49058802|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.02432428|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.56875223|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.13657601|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.84101230|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.59149993|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.45789481|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.16748460|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.64747470|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.52331386|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.48060207|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.32907897|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.59597079|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.95070078|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.43149248|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.13202077|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.96502974|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.69315673|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.86955633|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.89118332|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.98838157|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.73009469|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.69338088|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.75435298|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.17579426|  PASSED  
             dab_dct| 256|     50000|       1|0.03901380|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.11121372|  PASSED  
        dab_filltree|  32|  15000000|       1|0.61915408|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.78879029|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.16664803|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.61891330|  PASSED  

real	81m7.329s
user	72m40.661s
sys	8m19.056s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xcd52c80e
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xcd52c80e
length= 64 megabytes (2^26 bytes), time= 2.4 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xcd52c80e
length= 128 megabytes (2^27 bytes), time= 5.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xcd52c80e
length= 256 megabytes (2^28 bytes), time= 10.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xcd52c80e
length= 512 megabytes (2^29 bytes), time= 19.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xcd52c80e
length= 1 gigabyte (2^30 bytes), time= 36.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xcd52c80e
length= 2 gigabytes (2^31 bytes), time= 71.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xcd52c80e
length= 4 gigabytes (2^32 bytes), time= 135 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xcd52c80e
length= 8 gigabytes (2^33 bytes), time= 261 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xcd52c80e
length= 16 gigabytes (2^34 bytes), time= 520 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xcd52c80e
length= 32 gigabytes (2^35 bytes), time= 1022 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xcd52c80e
length= 64 gigabytes (2^36 bytes), time= 2045 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xcd52c80e
length= 114.250 gigabytes (2^36.836 bytes), time= 3603 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-0,T)         R=  -7.2  p =1-1.2e-3   unusual          
  ...and 251 test result(s) without anomalies


real	60m5.044s
user	58m40.668s
sys	1m19.777s
*/
/* TEST00
time ./MRndCPP 12 
1429888350
1930996510
2751695229
3357925846
1627701116
123001771
3961838821
4157523336
1308695079
20649485
6682808766091986484

real	0m59.476s
user	0m59.361s
sys	0m0.108s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.65e+07  |1030591741|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.83851911|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.80826535|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.40945866|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.03115809|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.99346511|  PASSED  
        diehard_opso|   0|   2097152|     100|0.20163362|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.67811782|  PASSED  
         diehard_dna|   0|   2097152|     100|0.17992606|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.68498746|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.85895654|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.88193571|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.59778615|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.39056932|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.49575743|  PASSED  
        diehard_sums|   0|       100|     100|0.07740904|  PASSED  
        diehard_runs|   0|    100000|     100|0.34925446|  PASSED  
        diehard_runs|   0|    100000|     100|0.19798330|  PASSED  
       diehard_craps|   0|    200000|     100|0.58434434|  PASSED  
       diehard_craps|   0|    200000|     100|0.87631573|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.48110725|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.55002340|  PASSED  
         sts_monobit|   1|    100000|     100|0.31021598|  PASSED  
            sts_runs|   2|    100000|     100|0.86004908|  PASSED  
          sts_serial|   1|    100000|     100|0.12618710|  PASSED  
          sts_serial|   2|    100000|     100|0.50481883|  PASSED  
          sts_serial|   3|    100000|     100|0.57341818|  PASSED  
          sts_serial|   3|    100000|     100|0.27781225|  PASSED  
          sts_serial|   4|    100000|     100|0.97944030|  PASSED  
          sts_serial|   4|    100000|     100|0.84325093|  PASSED  
          sts_serial|   5|    100000|     100|0.20329948|  PASSED  
          sts_serial|   5|    100000|     100|0.05786897|  PASSED  
          sts_serial|   6|    100000|     100|0.13305774|  PASSED  
          sts_serial|   6|    100000|     100|0.41760792|  PASSED  
          sts_serial|   7|    100000|     100|0.38835837|  PASSED  
          sts_serial|   7|    100000|     100|0.87451445|  PASSED  
          sts_serial|   8|    100000|     100|0.25757630|  PASSED  
          sts_serial|   8|    100000|     100|0.48285585|  PASSED  
          sts_serial|   9|    100000|     100|0.20012735|  PASSED  
          sts_serial|   9|    100000|     100|0.28840915|  PASSED  
          sts_serial|  10|    100000|     100|0.94229090|  PASSED  
          sts_serial|  10|    100000|     100|0.13187709|  PASSED  
          sts_serial|  11|    100000|     100|0.75005189|  PASSED  
          sts_serial|  11|    100000|     100|0.21145545|  PASSED  
          sts_serial|  12|    100000|     100|0.83672389|  PASSED  
          sts_serial|  12|    100000|     100|0.76236017|  PASSED  
          sts_serial|  13|    100000|     100|0.34888686|  PASSED  
          sts_serial|  13|    100000|     100|0.61558960|  PASSED  
          sts_serial|  14|    100000|     100|0.73275515|  PASSED  
          sts_serial|  14|    100000|     100|0.95073165|  PASSED  
          sts_serial|  15|    100000|     100|0.69387673|  PASSED  
          sts_serial|  15|    100000|     100|0.71455569|  PASSED  
          sts_serial|  16|    100000|     100|0.37714603|  PASSED  
          sts_serial|  16|    100000|     100|0.87057424|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.79954277|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.97784998|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.64957237|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.32625619|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.81022692|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.25231120|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.13841363|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.18851924|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.99160104|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.79062015|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.86293029|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.33823788|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.45189179|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.28396224|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.12811259|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.25238711|  PASSED  
    rgb_permutations|   2|    100000|     100|0.92740747|  PASSED  
    rgb_permutations|   3|    100000|     100|0.99927202|   WEAK   
    rgb_permutations|   4|    100000|     100|0.27143737|  PASSED  
    rgb_permutations|   5|    100000|     100|0.48045766|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.78515143|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.28698798|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.53126748|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.56492875|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.72108265|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.69422934|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.53386820|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.40000755|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.24372475|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.10886980|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.22540449|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.79280512|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.70330131|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.65150773|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.96477782|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.66009688|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.24943138|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.47427486|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.02837828|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.57971468|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.97825055|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.61065730|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.75698179|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.96275671|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.17956831|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.46187840|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.79337671|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.40119052|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.94907036|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.21128984|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.34377018|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.02942285|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.16868441|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.11322962|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.60237981|  PASSED  
             dab_dct| 256|     50000|       1|0.34982675|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.18293972|  PASSED  
        dab_filltree|  32|  15000000|       1|0.61253424|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.20572289|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.96291427|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.39003925|  PASSED  

real	93m57.864s
user	84m20.228s
sys	9m35.871s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x6e1aa364
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x6e1aa364
length= 4 megabytes (2^22 bytes), time= 2.0 seconds
  no anomalies in 99 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 8 megabytes (2^23 bytes), time= 3.5 seconds
  no anomalies in 107 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 16 megabytes (2^24 bytes), time= 4.9 seconds
  no anomalies in 119 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 32 megabytes (2^25 bytes), time= 6.8 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 64 megabytes (2^26 bytes), time= 10.1 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 128 megabytes (2^27 bytes), time= 14.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 256 megabytes (2^28 bytes), time= 20.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 512 megabytes (2^29 bytes), time= 30.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:A                 R=  +5.1  p =  8.4e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x6e1aa364
length= 1 gigabyte (2^30 bytes), time= 52.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+4,13-4,T)         R=  -9.5  p =1-5.4e-6   mildly suspicious
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x6e1aa364
length= 2 gigabytes (2^31 bytes), time= 93.7 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 4 gigabytes (2^32 bytes), time= 174 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 8 gigabytes (2^33 bytes), time= 345 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 16 gigabytes (2^34 bytes), time= 651 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 32 gigabytes (2^35 bytes), time= 1217 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 64 gigabytes (2^36 bytes), time= 2363 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 128 gigabytes (2^37 bytes), time= 4673 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 256 gigabytes (2^38 bytes), time= 9152 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x6e1aa364
length= 512 gigabytes (2^39 bytes), time= 18030 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.2  p =  1.8e-3   unusual          
  ...and 278 test result(s) without anomalies

rng=RNG_stdin, seed=0x6e1aa364
length= 1 terabyte (2^40 bytes), time= 35028 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.0  p =  1.2e-3   unusual          
  [Low1/32]Gap-16:B                 R=  +8.9  p =  1.4e-7   very suspicious  
  ...and 288 test result(s) without anomalies

rng=RNG_stdin, seed=0x6e1aa364
length= 2 terabytes (2^41 bytes), time= 69712 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R= +12.5  p =  1.4e-8    VERY SUSPICIOUS 
  [Low1/32]Gap-16:B                 R= +19.9  p =  6.3e-17    FAIL !         
  ...and 297 test result(s) without anomalies


real	1161m54.573s
user	1135m31.382s
sys	25m44.281s
*/
