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

namespace MRnd {

using TRnd = RndFib3;

}
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
/* TEST00
time ./MRndCPP 12 
2321039120
1463767217
228476281
2580860673
4166330638
3360849154
199650802
3326014572
4245175190
2696682363
8621659468734709126

real	0m9.771s
user	0m9.768s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.13e+07  |3676480611|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.40717634|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.54570129|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.30382199|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.72020157|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.88590673|  PASSED  
        diehard_opso|   0|   2097152|     100|0.59437357|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.12245142|  PASSED  
         diehard_dna|   0|   2097152|     100|0.57351834|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.96193955|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.10358087|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.20530715|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.69162540|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.85898924|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.97528959|  PASSED  
        diehard_sums|   0|       100|     100|0.02298029|  PASSED  
        diehard_runs|   0|    100000|     100|0.67642362|  PASSED  
        diehard_runs|   0|    100000|     100|0.81013799|  PASSED  
       diehard_craps|   0|    200000|     100|0.72816720|  PASSED  
       diehard_craps|   0|    200000|     100|0.28349697|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99511285|   WEAK   
 marsaglia_tsang_gcd|   0|  10000000|     100|0.97871161|  PASSED  
         sts_monobit|   1|    100000|     100|0.65044716|  PASSED  
            sts_runs|   2|    100000|     100|0.35512930|  PASSED  
          sts_serial|   1|    100000|     100|0.02259083|  PASSED  
          sts_serial|   2|    100000|     100|0.50729912|  PASSED  
          sts_serial|   3|    100000|     100|0.40015677|  PASSED  
          sts_serial|   3|    100000|     100|0.69843513|  PASSED  
          sts_serial|   4|    100000|     100|0.38390812|  PASSED  
          sts_serial|   4|    100000|     100|0.19913707|  PASSED  
          sts_serial|   5|    100000|     100|0.82906388|  PASSED  
          sts_serial|   5|    100000|     100|0.75412269|  PASSED  
          sts_serial|   6|    100000|     100|0.41090933|  PASSED  
          sts_serial|   6|    100000|     100|0.15004769|  PASSED  
          sts_serial|   7|    100000|     100|0.18349451|  PASSED  
          sts_serial|   7|    100000|     100|0.64316816|  PASSED  
          sts_serial|   8|    100000|     100|0.75862671|  PASSED  
          sts_serial|   8|    100000|     100|0.25966500|  PASSED  
          sts_serial|   9|    100000|     100|0.82774518|  PASSED  
          sts_serial|   9|    100000|     100|0.32063608|  PASSED  
          sts_serial|  10|    100000|     100|0.81012012|  PASSED  
          sts_serial|  10|    100000|     100|0.51869647|  PASSED  
          sts_serial|  11|    100000|     100|0.37074558|  PASSED  
          sts_serial|  11|    100000|     100|0.52432459|  PASSED  
          sts_serial|  12|    100000|     100|0.96008311|  PASSED  
          sts_serial|  12|    100000|     100|0.40405256|  PASSED  
          sts_serial|  13|    100000|     100|0.54146709|  PASSED  
          sts_serial|  13|    100000|     100|0.87581013|  PASSED  
          sts_serial|  14|    100000|     100|0.79520875|  PASSED  
          sts_serial|  14|    100000|     100|0.99974787|   WEAK   
          sts_serial|  15|    100000|     100|0.70287161|  PASSED  
          sts_serial|  15|    100000|     100|0.03594324|  PASSED  
          sts_serial|  16|    100000|     100|0.35095910|  PASSED  
          sts_serial|  16|    100000|     100|0.97649743|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.84726489|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.42079565|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.28569592|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.19797059|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.75260480|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.66213167|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.94970038|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.15049064|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.13698041|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.82126397|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.58038409|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.96845973|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.03176427|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.01516473|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.40022434|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.27838611|  PASSED  
    rgb_permutations|   2|    100000|     100|0.11983755|  PASSED  
    rgb_permutations|   3|    100000|     100|0.83382916|  PASSED  
    rgb_permutations|   4|    100000|     100|0.45011865|  PASSED  
    rgb_permutations|   5|    100000|     100|0.44747904|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.50077209|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.42687440|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.45686426|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.30355003|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.54009266|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.90083885|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.81209848|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.13848258|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.92768409|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.22096937|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.76709062|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.71722188|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.05161773|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.39628419|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.91580349|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.90542939|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.78143221|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.40476716|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.50611435|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.24863622|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.99067874|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.70258632|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.99976473|   WEAK   
      rgb_lagged_sum|  23|   1000000|     100|0.80357018|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.63750396|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.86998779|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.92151137|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.02990292|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.96585531|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.99630483|   WEAK   
      rgb_lagged_sum|  30|   1000000|     100|0.54566725|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.32641178|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.23188139|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.17925474|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.63204086|  PASSED  
             dab_dct| 256|     50000|       1|0.60143567|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.58974567|  PASSED  
        dab_filltree|  32|  15000000|       1|0.01703161|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.17051744|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.49264185|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.60727516|  PASSED  

real	64m38.736s
user	56m43.804s
sys	7m50.035s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x1b87fbf5
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x1b87fbf5
length= 128 megabytes (2^27 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.2  p =  2.3e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x1b87fbf5
length= 256 megabytes (2^28 bytes), time= 8.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x1b87fbf5
length= 512 megabytes (2^29 bytes), time= 15.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x1b87fbf5
length= 1 gigabyte (2^30 bytes), time= 29.9 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.8  p =1-4.7e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +6.3  p =  1.8e-3   unusual          
  ...and 181 test result(s) without anomalies

rng=RNG_stdin, seed=0x1b87fbf5
length= 2 gigabytes (2^31 bytes), time= 57.5 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.8  p =1-5.2e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x1b87fbf5
length= 4 gigabytes (2^32 bytes), time= 112 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x1b87fbf5
length= 8 gigabytes (2^33 bytes), time= 224 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x1b87fbf5
length= 16 gigabytes (2^34 bytes), time= 450 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x1b87fbf5
length= 32 gigabytes (2^35 bytes), time= 888 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x1b87fbf5
length= 64 gigabytes (2^36 bytes), time= 1810 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x1b87fbf5
length= 128 gigabytes (2^37 bytes), time= 3590 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x1b87fbf5
length= 128.500 gigabytes (2^37.006 bytes), time= 3605 seconds
  no anomalies in 258 test result(s)


real	60m6.293s
user	58m42.460s
sys	1m17.878s
*/
/* TEST00
time ./MRndCPP 12 
2321039120
1463767217
228476281
2580860673
4166330638
3360849154
199650802
3326014572
4245175190
2696682363
8621659468734709126

real	0m15.550s
user	0m15.549s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.56e+07  |1422523408|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.90880524|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.83090285|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.24473561|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.65454826|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.22400363|  PASSED  
        diehard_opso|   0|   2097152|     100|0.25259534|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.68014396|  PASSED  
         diehard_dna|   0|   2097152|     100|0.05812427|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.16675069|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.86287497|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.05439829|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.81321252|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.04032948|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.93729577|  PASSED  
        diehard_sums|   0|       100|     100|0.65190089|  PASSED  
        diehard_runs|   0|    100000|     100|0.90689190|  PASSED  
        diehard_runs|   0|    100000|     100|0.78386116|  PASSED  
       diehard_craps|   0|    200000|     100|0.53659002|  PASSED  
       diehard_craps|   0|    200000|     100|0.57881108|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.08004073|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99859348|   WEAK   
         sts_monobit|   1|    100000|     100|0.95510126|  PASSED  
            sts_runs|   2|    100000|     100|0.29017868|  PASSED  
          sts_serial|   1|    100000|     100|0.99296194|  PASSED  
          sts_serial|   2|    100000|     100|0.44293422|  PASSED  
          sts_serial|   3|    100000|     100|0.86199111|  PASSED  
          sts_serial|   3|    100000|     100|0.37286109|  PASSED  
          sts_serial|   4|    100000|     100|0.34553214|  PASSED  
          sts_serial|   4|    100000|     100|0.27048895|  PASSED  
          sts_serial|   5|    100000|     100|0.09639520|  PASSED  
          sts_serial|   5|    100000|     100|0.24203655|  PASSED  
          sts_serial|   6|    100000|     100|0.98250757|  PASSED  
          sts_serial|   6|    100000|     100|0.13689403|  PASSED  
          sts_serial|   7|    100000|     100|0.46108706|  PASSED  
          sts_serial|   7|    100000|     100|0.36180697|  PASSED  
          sts_serial|   8|    100000|     100|0.10739788|  PASSED  
          sts_serial|   8|    100000|     100|0.15587942|  PASSED  
          sts_serial|   9|    100000|     100|0.04481764|  PASSED  
          sts_serial|   9|    100000|     100|0.74001454|  PASSED  
          sts_serial|  10|    100000|     100|0.29951794|  PASSED  
          sts_serial|  10|    100000|     100|0.32720165|  PASSED  
          sts_serial|  11|    100000|     100|0.91580444|  PASSED  
          sts_serial|  11|    100000|     100|0.98787546|  PASSED  
          sts_serial|  12|    100000|     100|0.55838116|  PASSED  
          sts_serial|  12|    100000|     100|0.50090103|  PASSED  
          sts_serial|  13|    100000|     100|0.11356816|  PASSED  
          sts_serial|  13|    100000|     100|0.13585932|  PASSED  
          sts_serial|  14|    100000|     100|0.86701457|  PASSED  
          sts_serial|  14|    100000|     100|0.49158188|  PASSED  
          sts_serial|  15|    100000|     100|0.83627069|  PASSED  
          sts_serial|  15|    100000|     100|0.98797845|  PASSED  
          sts_serial|  16|    100000|     100|0.43002779|  PASSED  
          sts_serial|  16|    100000|     100|0.79046334|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.93712108|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.78268162|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.82585206|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.09673509|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.07111717|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.81278251|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.17298284|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.45561069|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.84291878|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.33629262|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.97602580|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.29180533|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.76926995|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.95656834|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.60321281|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.06042399|  PASSED  
    rgb_permutations|   2|    100000|     100|0.62102183|  PASSED  
    rgb_permutations|   3|    100000|     100|0.94152766|  PASSED  
    rgb_permutations|   4|    100000|     100|0.47958342|  PASSED  
    rgb_permutations|   5|    100000|     100|0.31731553|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.99573462|   WEAK   
      rgb_lagged_sum|   1|   1000000|     100|0.10002061|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.76182105|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.68688174|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.01073240|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.89702926|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.74816872|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.58022828|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.85572732|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.15788866|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.83398503|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.82815854|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.73218301|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.27092355|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.90925227|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.94049340|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.59366457|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.39657947|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.98327062|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.71210575|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.11849557|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.65419878|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.72553846|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.72823571|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.54414588|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.97463046|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.73866466|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.50088376|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.31920579|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.02942970|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.97554183|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.56185785|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.11494386|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.22836165|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.34361200|  PASSED  
             dab_dct| 256|     50000|       1|0.03936177|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.50968665|  PASSED  
        dab_filltree|  32|  15000000|       1|0.41091200|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.18606820|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.70221787|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.77970889|  PASSED  

real	99m2.022s
user	87m27.827s
sys	11m30.003s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x157e811f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x157e811f
length= 32 megabytes (2^25 bytes), time= 2.0 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 64 megabytes (2^26 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.4  p =  8.6e-3   unusual          
  [Low4/32]BCFN(2+2,13-6,T)         R= +11.0  p =  3.3e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +6.2  p =  2.6e-3   unusual          
  ...and 136 test result(s) without anomalies

rng=RNG_stdin, seed=0x157e811f
length= 128 megabytes (2^27 bytes), time= 9.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 256 megabytes (2^28 bytes), time= 16.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 512 megabytes (2^29 bytes), time= 27.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 1 gigabyte (2^30 bytes), time= 51.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 2 gigabytes (2^31 bytes), time= 94.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 4 gigabytes (2^32 bytes), time= 180 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 8 gigabytes (2^33 bytes), time= 350 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 16 gigabytes (2^34 bytes), time= 691 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +4.6  p =  8.6e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x157e811f
length= 32 gigabytes (2^35 bytes), time= 1369 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 64 gigabytes (2^36 bytes), time= 2778 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 128 gigabytes (2^37 bytes), time= 5647 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 256 gigabytes (2^38 bytes), time= 11551 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 512 gigabytes (2^39 bytes), time= 23610 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 1 terabyte (2^40 bytes), time= 45996 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 2 terabytes (2^41 bytes), time= 89350 seconds
  no anomalies in 299 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 4 terabytes (2^42 bytes), time= 165869 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 8 terabytes (2^43 bytes), time= 300109 seconds
  no anomalies in 322 test result(s)

rng=RNG_stdin, seed=0x157e811f
length= 9.415 terabytes (2^43.235 bytes), time= 345604 seconds
  no anomalies in 326 test result(s)


real	5760m5.817s
user	5650m40.514s
sys	198m59.497s
*/
