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
/// @created on 2019-12-08 02:59:53 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 7d31d573-c8f4-4651-ab8e-a8f0b614d221                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin4;
/* TEST00
time ./MRndCPP 10 
4224035437
1877448252
3194539910
2768115908
831174961
2425604188
4272881177
2266054290
195033450
3480155772
10648871365191019624

real	0m9.658s
user	0m9.654s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.60e+07  |1066773079|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.46046015|  PASSED  

real	0m21.928s
user	0m23.186s
sys	0m0.596s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xdaca7aeb
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xdaca7aeb
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-3,T)         R=  -6.9  p =1-9.7e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xdaca7aeb
length= 1 gigabyte (2^30 bytes), time= 23.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 2 gigabytes (2^31 bytes), time= 45.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 4 gigabytes (2^32 bytes), time= 88.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 8 gigabytes (2^33 bytes), time= 175 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xdaca7aeb
length= 14.000 gigabytes (2^33.807 bytes), time= 301 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -4.0  p =1-7.5e-4   unusual          
  ...and 218 test result(s) without anomalies


real	5m2.272s
user	5m2.184s
sys	0m9.479s
*/
/* TEST00
time ./MRndCPP 10 
4224035437
1877448252
3194539910
2768115908
831174961
2425604188
4272881177
2266054290
195033450
3480155772
10648871365191019624

real	0m9.979s
user	0m9.972s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.65e+07  |2894621547|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.31072738|  PASSED  

real	0m25.895s
user	0m25.396s
sys	0m0.464s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4469a1f4
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4469a1f4
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4469a1f4
length= 256 megabytes (2^28 bytes), time= 6.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4469a1f4
length= 512 megabytes (2^29 bytes), time= 13.0 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.6  p =1-3.1e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x4469a1f4
length= 1 gigabyte (2^30 bytes), time= 25.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4469a1f4
length= 2 gigabytes (2^31 bytes), time= 49.1 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x4469a1f4
length= 4 gigabytes (2^32 bytes), time= 94.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-1,T)          R=  +8.0  p =  9.4e-4   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x4469a1f4
length= 8 gigabytes (2^33 bytes), time= 193 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+4,13-2,T)         R=  +9.7  p =  1.4e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x4469a1f4
length= 16 gigabytes (2^34 bytes), time= 393 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.3  p =1-8.3e-4   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x4469a1f4
length= 32 gigabytes (2^35 bytes), time= 786 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x4469a1f4
length= 40.750 gigabytes (2^35.349 bytes), time= 1001 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-0,T)         R=  +7.8  p =  1.1e-3   unusual          
  ...and 238 test result(s) without anomalies


real	16m42.102s
user	16m24.804s
sys	0m16.184s
*/
/* TEST00
time ./MRndCPP 12 
4224035437
1877448252
3194539910
2768115908
831174961
2425604188
4272881177
2266054290
195033450
3480155772
13343883006157474152

real	0m44.557s
user	0m44.528s
sys	0m0.025s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.69e+07  |3702035176|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.56744631|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.31809439|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.92292781|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.31477095|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.07699360|  PASSED  
        diehard_opso|   0|   2097152|     100|0.54603609|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.28555336|  PASSED  
         diehard_dna|   0|   2097152|     100|0.24291924|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.03649919|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.59488563|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.72624287|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.26024673|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.33721437|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.85592138|  PASSED  
        diehard_sums|   0|       100|     100|0.08404110|  PASSED  
        diehard_runs|   0|    100000|     100|0.36031659|  PASSED  
        diehard_runs|   0|    100000|     100|0.43587526|  PASSED  
       diehard_craps|   0|    200000|     100|0.40692820|  PASSED  
       diehard_craps|   0|    200000|     100|0.90912028|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99817582|   WEAK   
 marsaglia_tsang_gcd|   0|  10000000|     100|0.92321170|  PASSED  
         sts_monobit|   1|    100000|     100|0.61627670|  PASSED  
            sts_runs|   2|    100000|     100|0.18353598|  PASSED  
          sts_serial|   1|    100000|     100|0.71320832|  PASSED  
          sts_serial|   2|    100000|     100|0.49460528|  PASSED  
          sts_serial|   3|    100000|     100|0.92178045|  PASSED  
          sts_serial|   3|    100000|     100|0.82018791|  PASSED  
          sts_serial|   4|    100000|     100|0.99904492|   WEAK   
          sts_serial|   4|    100000|     100|0.93701440|  PASSED  
          sts_serial|   5|    100000|     100|0.62773880|  PASSED  
          sts_serial|   5|    100000|     100|0.56788581|  PASSED  
          sts_serial|   6|    100000|     100|0.50714495|  PASSED  
          sts_serial|   6|    100000|     100|0.62476007|  PASSED  
          sts_serial|   7|    100000|     100|0.21919672|  PASSED  
          sts_serial|   7|    100000|     100|0.01602007|  PASSED  
          sts_serial|   8|    100000|     100|0.92065205|  PASSED  
          sts_serial|   8|    100000|     100|0.09572499|  PASSED  
          sts_serial|   9|    100000|     100|0.95323660|  PASSED  
          sts_serial|   9|    100000|     100|0.56670613|  PASSED  
          sts_serial|  10|    100000|     100|0.84512464|  PASSED  
          sts_serial|  10|    100000|     100|0.89787111|  PASSED  
          sts_serial|  11|    100000|     100|0.99979575|   WEAK   
          sts_serial|  11|    100000|     100|0.80597010|  PASSED  
          sts_serial|  12|    100000|     100|0.23990731|  PASSED  
          sts_serial|  12|    100000|     100|0.43769464|  PASSED  
          sts_serial|  13|    100000|     100|0.39057522|  PASSED  
          sts_serial|  13|    100000|     100|0.95860950|  PASSED  
          sts_serial|  14|    100000|     100|0.18310361|  PASSED  
          sts_serial|  14|    100000|     100|0.10161711|  PASSED  
          sts_serial|  15|    100000|     100|0.11537172|  PASSED  
          sts_serial|  15|    100000|     100|0.43704819|  PASSED  
          sts_serial|  16|    100000|     100|0.12408709|  PASSED  
          sts_serial|  16|    100000|     100|0.31893168|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.92526313|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.50724909|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.10026691|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.61739915|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.36387494|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.74328790|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.82354624|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.98443426|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.63188135|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.65058790|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.03891914|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.90188466|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.43140623|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.50061260|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.99226550|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.09501507|  PASSED  
    rgb_permutations|   2|    100000|     100|0.19137508|  PASSED  
    rgb_permutations|   3|    100000|     100|0.10868816|  PASSED  
    rgb_permutations|   4|    100000|     100|0.93258493|  PASSED  
    rgb_permutations|   5|    100000|     100|0.93642027|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.90401858|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.67481989|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.57887380|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.16285175|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.72998220|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.37716580|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.51404772|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.27728323|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.84195463|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.33928199|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.86727640|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.86672547|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.73371761|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.77709897|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.47410454|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.77479782|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.44090319|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.32478672|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.20921308|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.88981409|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.22204418|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.21293423|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.35036747|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.99939670|   WEAK   
      rgb_lagged_sum|  24|   1000000|     100|0.07126774|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.83701986|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.48271006|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.37663075|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.68598711|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.56025096|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.94408872|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.87240962|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.81010455|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.02757089|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.26827433|  PASSED  
             dab_dct| 256|     50000|       1|0.96093113|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.27037010|  PASSED  
        dab_filltree|  32|  15000000|       1|0.64428214|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.74438069|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.36088110|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.93313122|  PASSED  

real	76m4.356s
user	68m5.510s
sys	7m58.152s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd55a94b5
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd55a94b5
length= 64 megabytes (2^26 bytes), time= 2.4 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xd55a94b5
length= 128 megabytes (2^27 bytes), time= 5.4 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd55a94b5
length= 256 megabytes (2^28 bytes), time= 10.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:all          R=  +4.9  p =  4.9e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xd55a94b5
length= 512 megabytes (2^29 bytes), time= 19.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.4  p =  2.1e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xd55a94b5
length= 1 gigabyte (2^30 bytes), time= 36.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xd55a94b5
length= 2 gigabytes (2^31 bytes), time= 69.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd55a94b5
length= 4 gigabytes (2^32 bytes), time= 136 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xd55a94b5
length= 8 gigabytes (2^33 bytes), time= 267 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xd55a94b5
length= 16 gigabytes (2^34 bytes), time= 525 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:B                 R=  +4.3  p =  1.5e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0xd55a94b5
length= 32 gigabytes (2^35 bytes), time= 1028 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xd55a94b5
length= 64 gigabytes (2^36 bytes), time= 2057 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xd55a94b5
length= 114.250 gigabytes (2^36.836 bytes), time= 3614 seconds
  no anomalies in 252 test result(s)


real	60m14.740s
user	58m52.292s
sys	1m18.796s
*/
/* TEST00
time ./MRndCPP 12 
4224035437
1877448252
3194539910
2768115908
831174961
2425604188
4272881177
2266054290
195033450
3480155772
13343883006157474152

real	0m44.415s
user	0m44.403s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.95e+07  |4224180106|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.97648092|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.95911277|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.22688435|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.97947202|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.79748510|  PASSED  
        diehard_opso|   0|   2097152|     100|0.88136642|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.78855250|  PASSED  
         diehard_dna|   0|   2097152|     100|0.46876391|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.28856886|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.82117258|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.72327165|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.59681738|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.66480275|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.77269022|  PASSED  
        diehard_sums|   0|       100|     100|0.83490274|  PASSED  
        diehard_runs|   0|    100000|     100|0.88337351|  PASSED  
        diehard_runs|   0|    100000|     100|0.96737939|  PASSED  
       diehard_craps|   0|    200000|     100|0.75772193|  PASSED  
       diehard_craps|   0|    200000|     100|0.03584595|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.87132232|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.81359358|  PASSED  
         sts_monobit|   1|    100000|     100|0.05937561|  PASSED  
            sts_runs|   2|    100000|     100|0.01711146|  PASSED  
          sts_serial|   1|    100000|     100|0.64600955|  PASSED  
          sts_serial|   2|    100000|     100|0.77736608|  PASSED  
          sts_serial|   3|    100000|     100|0.45969265|  PASSED  
          sts_serial|   3|    100000|     100|0.18224889|  PASSED  
          sts_serial|   4|    100000|     100|0.99697201|   WEAK   
          sts_serial|   4|    100000|     100|0.58350725|  PASSED  
          sts_serial|   5|    100000|     100|0.24007778|  PASSED  
          sts_serial|   5|    100000|     100|0.06395947|  PASSED  
          sts_serial|   6|    100000|     100|0.21494443|  PASSED  
          sts_serial|   6|    100000|     100|0.85881614|  PASSED  
          sts_serial|   7|    100000|     100|0.41937902|  PASSED  
          sts_serial|   7|    100000|     100|0.18623959|  PASSED  
          sts_serial|   8|    100000|     100|0.95013455|  PASSED  
          sts_serial|   8|    100000|     100|0.10222887|  PASSED  
          sts_serial|   9|    100000|     100|0.02565574|  PASSED  
          sts_serial|   9|    100000|     100|0.01029842|  PASSED  
          sts_serial|  10|    100000|     100|0.34675334|  PASSED  
          sts_serial|  10|    100000|     100|0.79632714|  PASSED  
          sts_serial|  11|    100000|     100|0.42726351|  PASSED  
          sts_serial|  11|    100000|     100|0.63870476|  PASSED  
          sts_serial|  12|    100000|     100|0.05639256|  PASSED  
          sts_serial|  12|    100000|     100|0.01135415|  PASSED  
          sts_serial|  13|    100000|     100|0.16916278|  PASSED  
          sts_serial|  13|    100000|     100|0.79322474|  PASSED  
          sts_serial|  14|    100000|     100|0.74115216|  PASSED  
          sts_serial|  14|    100000|     100|0.62196794|  PASSED  
          sts_serial|  15|    100000|     100|0.06369645|  PASSED  
          sts_serial|  15|    100000|     100|0.31271114|  PASSED  
          sts_serial|  16|    100000|     100|0.10890342|  PASSED  
          sts_serial|  16|    100000|     100|0.02629308|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.92709576|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.11365912|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.90463223|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.78269028|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.70742940|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.09550924|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.13971753|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.63392528|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.47530205|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.74476729|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.20814301|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.89216227|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.79543391|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.40547856|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.54817302|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.05739887|  PASSED  
    rgb_permutations|   2|    100000|     100|0.69769725|  PASSED  
    rgb_permutations|   3|    100000|     100|0.82412597|  PASSED  
    rgb_permutations|   4|    100000|     100|0.04336717|  PASSED  
    rgb_permutations|   5|    100000|     100|0.25124690|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.10739903|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.91540558|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.56062333|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.21562582|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.21795352|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.61011576|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.89664242|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.10255241|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.42568404|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.83957723|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.94140113|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.13814293|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.65240516|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.42180230|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.07593603|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.86797950|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.31453808|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.76746923|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.29517731|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.95623221|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.32822853|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.88134125|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.96987013|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.99205642|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.44741544|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.75233991|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.34632082|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.53188691|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.58711384|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.40557860|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.85529016|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.31402832|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.98442188|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.44440480|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.91060719|  PASSED  
             dab_dct| 256|     50000|       1|0.42052657|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.58689184|  PASSED  
        dab_filltree|  32|  15000000|       1|0.17981068|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.66053994|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.05741508|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.18851017|  PASSED  

real	82m7.465s
user	73m8.590s
sys	8m57.732s
*/
