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
/// @created on 2019-12-08 02:58:42 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token c07c75d9-db05-492c-84fb-b06ccecfbe9b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib3;
/* TEST00
time ./MRndCPP 12 
1416706837
821792151
2361587558
1528556559
3833712100
715044904
1017855922
3129848477
2598390350
1956898729
16390563251760788949

real	0m7.185s
user	0m7.181s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.24e+07  |2811603617|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.02939858|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.95409983|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.35333112|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.80733188|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.99677637|   WEAK   
        diehard_opso|   0|   2097152|     100|0.81594738|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.03312550|  PASSED  
         diehard_dna|   0|   2097152|     100|0.61076518|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.14272097|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.61272174|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.79600924|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.82170495|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.65134962|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.83688934|  PASSED  
        diehard_sums|   0|       100|     100|0.23732258|  PASSED  
        diehard_runs|   0|    100000|     100|0.84036936|  PASSED  
        diehard_runs|   0|    100000|     100|0.21444864|  PASSED  
       diehard_craps|   0|    200000|     100|0.87005087|  PASSED  
       diehard_craps|   0|    200000|     100|0.48913707|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.36439703|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.69433002|  PASSED  
         sts_monobit|   1|    100000|     100|0.14649948|  PASSED  
            sts_runs|   2|    100000|     100|0.74595475|  PASSED  
          sts_serial|   1|    100000|     100|0.87910910|  PASSED  
          sts_serial|   2|    100000|     100|0.86795932|  PASSED  
          sts_serial|   3|    100000|     100|0.63780482|  PASSED  
          sts_serial|   3|    100000|     100|0.70786442|  PASSED  
          sts_serial|   4|    100000|     100|0.59838038|  PASSED  
          sts_serial|   4|    100000|     100|0.10321597|  PASSED  
          sts_serial|   5|    100000|     100|0.10011408|  PASSED  
          sts_serial|   5|    100000|     100|0.63109414|  PASSED  
          sts_serial|   6|    100000|     100|0.86895342|  PASSED  
          sts_serial|   6|    100000|     100|0.86822342|  PASSED  
          sts_serial|   7|    100000|     100|0.48180691|  PASSED  
          sts_serial|   7|    100000|     100|0.41534474|  PASSED  
          sts_serial|   8|    100000|     100|0.51924746|  PASSED  
          sts_serial|   8|    100000|     100|0.57883269|  PASSED  
          sts_serial|   9|    100000|     100|0.38567629|  PASSED  
          sts_serial|   9|    100000|     100|0.68629305|  PASSED  
          sts_serial|  10|    100000|     100|0.85643151|  PASSED  
          sts_serial|  10|    100000|     100|0.82605532|  PASSED  
          sts_serial|  11|    100000|     100|0.11759813|  PASSED  
          sts_serial|  11|    100000|     100|0.26370422|  PASSED  
          sts_serial|  12|    100000|     100|0.68210469|  PASSED  
          sts_serial|  12|    100000|     100|0.03768161|  PASSED  
          sts_serial|  13|    100000|     100|0.76795040|  PASSED  
          sts_serial|  13|    100000|     100|0.86083983|  PASSED  
          sts_serial|  14|    100000|     100|0.99902051|   WEAK   
          sts_serial|  14|    100000|     100|0.95572512|  PASSED  
          sts_serial|  15|    100000|     100|0.78123871|  PASSED  
          sts_serial|  15|    100000|     100|0.42892448|  PASSED  
          sts_serial|  16|    100000|     100|0.88662084|  PASSED  
          sts_serial|  16|    100000|     100|0.59592341|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.81749152|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.98670057|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.62179469|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.68264741|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.66560196|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.99335855|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.94801324|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.80279838|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.31376003|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.19120792|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.85185266|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.40938884|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.96938682|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.80322759|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.69955596|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.48940739|  PASSED  
    rgb_permutations|   2|    100000|     100|0.96158543|  PASSED  
    rgb_permutations|   3|    100000|     100|0.24506409|  PASSED  
    rgb_permutations|   4|    100000|     100|0.78496551|  PASSED  
    rgb_permutations|   5|    100000|     100|0.04511996|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.70934206|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.19362095|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.63825589|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.62260261|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.62668201|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.08407530|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.83573248|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.32112267|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.79137899|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.46420366|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.67027931|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.10759789|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.30208642|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.18599638|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.84800331|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.46694174|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.88843878|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.97890689|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.15835691|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.16650752|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.71729493|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.94639726|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.92249543|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.71788529|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.11778183|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.46965747|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.94423227|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.86886535|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.59446176|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.56888037|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.75453605|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.04635127|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.98231338|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.99149064|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.38704672|  PASSED  
             dab_dct| 256|     50000|       1|0.24941369|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.98861896|  PASSED  
        dab_filltree|  32|  15000000|       1|0.24026229|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.25750196|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.43403685|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.82041464|  PASSED  

real	36m46.116s
user	38m26.152s
sys	3m59.140s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xdc19625d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xdc19625d
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xdc19625d
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xdc19625d
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +6.1  p =  2.9e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xdc19625d
length= 1 gigabyte (2^30 bytes), time= 21.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.3  p =  7.2e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xdc19625d
length= 2 gigabytes (2^31 bytes), time= 41.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xdc19625d
length= 4 gigabytes (2^32 bytes), time= 80.5 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xdc19625d
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  no anomalies in 207 test result(s)


real	1m41.120s
user	1m40.292s
sys	0m3.498s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x690d6af
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x690d6af
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x690d6af
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x690d6af
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x690d6af
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -4.5  p =1-2.5e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x690d6af
length= 2 gigabytes (2^31 bytes), time= 41.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x690d6af
length= 4 gigabytes (2^32 bytes), time= 80.6 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x690d6af
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  no anomalies in 207 test result(s)


real	1m41.157s
user	1m40.414s
sys	0m3.365s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe6263ebe
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe6263ebe
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+2,13-5,T)         R=  -5.9  p =1-1.7e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xe6263ebe
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xe6263ebe
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xe6263ebe
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe6263ebe
length= 2 gigabytes (2^31 bytes), time= 41.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe6263ebe
length= 4 gigabytes (2^32 bytes), time= 80.6 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xe6263ebe
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  no anomalies in 207 test result(s)


real	1m41.240s
user	1m40.560s
sys	0m3.302s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xccb8946a
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xccb8946a
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xccb8946a
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xccb8946a
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xccb8946a
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+5,13-5,T)          R=  -7.0  p =1-1.6e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xccb8946a
length= 2 gigabytes (2^31 bytes), time= 42.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-0,T)                  R=  -7.4  p =1-9.2e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0xccb8946a
length= 4 gigabytes (2^32 bytes), time= 80.9 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xccb8946a
length= 8 gigabytes (2^33 bytes), time= 160 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xccb8946a
length= 16 gigabytes (2^34 bytes), time= 316 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xccb8946a
length= 32 gigabytes (2^35 bytes), time= 621 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+5,13-1,T)          R=  -8.9  p =1-8.5e-5   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xccb8946a
length= 64 gigabytes (2^36 bytes), time= 1243 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xccb8946a
length= 128 gigabytes (2^37 bytes), time= 2483 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0xccb8946a
length= 186.750 gigabytes (2^37.545 bytes), time= 3602 seconds
  no anomalies in 263 test result(s)


real	60m3.122s
user	59m41.289s
sys	1m58.381s
*/
/* TEST00
time ./MRndCPP 10 
1416706837
821792151
2361587558
1528556559
3833712100
715044904
1017855922
3129848477
2598390350
1956898729
15608108282219081667

real	0m2.440s
user	0m2.436s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.16e+07  |2629326654|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.20021831|  PASSED  

real	0m24.926s
user	0m24.404s
sys	0m0.508s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x203216c3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x203216c3
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x203216c3
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x203216c3
length= 512 megabytes (2^29 bytes), time= 12.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x203216c3
length= 1 gigabyte (2^30 bytes), time= 23.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.3  p =1-8.5e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x203216c3
length= 2 gigabytes (2^31 bytes), time= 45.6 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -4.7  p =1-3.8e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x203216c3
length= 4 gigabytes (2^32 bytes), time= 88.2 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x203216c3
length= 8 gigabytes (2^33 bytes), time= 182 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]FPF-14+6/16:cross         R=  +4.7  p =  2.6e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x203216c3
length= 16 gigabytes (2^34 bytes), time= 367 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x203216c3
length= 32 gigabytes (2^35 bytes), time= 729 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x203216c3
length= 43.500 gigabytes (2^35.443 bytes), time= 1004 seconds
  no anomalies in 242 test result(s)


real	16m44.823s
user	16m25.896s
sys	0m18.020s
*/
