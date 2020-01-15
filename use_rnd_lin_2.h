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

using TRnd = RndLin2;
/* TEST00
time ./MRndCPP 10 
3031446162
318891177
2522508198
3234795101
887273959
4106570558
3280274796
396131901
3586669307
4038731636
16324785193472887027

real	0m6.456s
user	0m6.448s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.19e+07  |3312934271|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.49810811|  PASSED  

real	0m22.031s
user	0m22.865s
sys	0m0.624s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe5b46801
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe5b46801
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe5b46801
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  -4.1  p =1-5.7e-4   unusual          
  [Low1/8]FPF-14+6/16:cross         R=  +4.2  p =  9.0e-4   unusual          
  ...and 160 test result(s) without anomalies

rng=RNG_stdin, seed=0xe5b46801
length= 512 megabytes (2^29 bytes), time= 11.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xe5b46801
length= 1 gigabyte (2^30 bytes), time= 22.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe5b46801
length= 2 gigabytes (2^31 bytes), time= 43.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe5b46801
length= 4 gigabytes (2^32 bytes), time= 84.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+4,13-1,T)                  R=  +9.3  p =  1.7e-4   unusual          
  [Low1/32]BCFN(2+5,13-5,T)         R=  -7.2  p =1-1.0e-4   unusual          
  ...and 201 test result(s) without anomalies

rng=RNG_stdin, seed=0xe5b46801
length= 8 gigabytes (2^33 bytes), time= 168 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xe5b46801
length= 14.500 gigabytes (2^33.858 bytes), time= 302 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -3.9  p =1-8.1e-3   unusual          
  ...and 219 test result(s) without anomalies


real	5m3.281s
user	5m2.456s
sys	0m9.800s
*/
/* TEST00
time ./MRndCPP 10 
3031446162
318891177
2522508198
3234795101
887273959
4106570558
3280274796
396131901
3586669307
4038731636
16324785193472887027

real	0m6.684s
user	0m6.668s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.88e+07  |1712867483|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.62120418|  PASSED  

real	0m25.633s
user	0m25.024s
sys	0m0.596s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x21e04e48
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x21e04e48
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -3.9  p =1-7.7e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x21e04e48
length= 256 megabytes (2^28 bytes), time= 6.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x21e04e48
length= 512 megabytes (2^29 bytes), time= 12.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x21e04e48
length= 1 gigabyte (2^30 bytes), time= 24.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -5.7  p =1-3.6e-5   mildly suspicious
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x21e04e48
length= 2 gigabytes (2^31 bytes), time= 47.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.3  p =1-1.0e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x21e04e48
length= 4 gigabytes (2^32 bytes), time= 93.6 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x21e04e48
length= 8 gigabytes (2^33 bytes), time= 192 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  +5.2  p =  4.9e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x21e04e48
length= 16 gigabytes (2^34 bytes), time= 386 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x21e04e48
length= 32 gigabytes (2^35 bytes), time= 764 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x21e04e48
length= 41.500 gigabytes (2^35.375 bytes), time= 1000 seconds
  no anomalies in 240 test result(s)


real	16m41.239s
user	16m23.140s
sys	0m16.872s
*/
/* TEST00
time ./MRndCPP 12 
3031446162
318891177
2522508198
3234795101
887273959
4106570558
3280274796
396131901
3586669307
4038731636
7613036603694123127

real	0m29.508s
user	0m29.503s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.05e+07  |2475307667|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.21555424|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.04803907|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.14177746|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.14060024|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.85066530|  PASSED  
        diehard_opso|   0|   2097152|     100|0.39630737|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.85565634|  PASSED  
         diehard_dna|   0|   2097152|     100|0.75031026|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.85020353|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.29555452|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.97004348|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.95865708|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.53898603|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.27812475|  PASSED  
        diehard_sums|   0|       100|     100|0.70354519|  PASSED  
        diehard_runs|   0|    100000|     100|0.20777867|  PASSED  
        diehard_runs|   0|    100000|     100|0.52318530|  PASSED  
       diehard_craps|   0|    200000|     100|0.30869041|  PASSED  
       diehard_craps|   0|    200000|     100|0.13727259|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.50534648|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.79942750|  PASSED  
         sts_monobit|   1|    100000|     100|0.32708944|  PASSED  
            sts_runs|   2|    100000|     100|0.70460496|  PASSED  
          sts_serial|   1|    100000|     100|0.88840392|  PASSED  
          sts_serial|   2|    100000|     100|0.38933354|  PASSED  
          sts_serial|   3|    100000|     100|0.17765171|  PASSED  
          sts_serial|   3|    100000|     100|0.60457269|  PASSED  
          sts_serial|   4|    100000|     100|0.59943868|  PASSED  
          sts_serial|   4|    100000|     100|0.56908601|  PASSED  
          sts_serial|   5|    100000|     100|0.76038405|  PASSED  
          sts_serial|   5|    100000|     100|0.52245523|  PASSED  
          sts_serial|   6|    100000|     100|0.63785141|  PASSED  
          sts_serial|   6|    100000|     100|0.60667650|  PASSED  
          sts_serial|   7|    100000|     100|0.81808706|  PASSED  
          sts_serial|   7|    100000|     100|0.29241452|  PASSED  
          sts_serial|   8|    100000|     100|0.48240432|  PASSED  
          sts_serial|   8|    100000|     100|0.77852880|  PASSED  
          sts_serial|   9|    100000|     100|0.94712231|  PASSED  
          sts_serial|   9|    100000|     100|0.83173022|  PASSED  
          sts_serial|  10|    100000|     100|0.79897730|  PASSED  
          sts_serial|  10|    100000|     100|0.99962267|   WEAK   
          sts_serial|  11|    100000|     100|0.71589990|  PASSED  
          sts_serial|  11|    100000|     100|0.70108921|  PASSED  
          sts_serial|  12|    100000|     100|0.99872901|   WEAK   
          sts_serial|  12|    100000|     100|0.90914986|  PASSED  
          sts_serial|  13|    100000|     100|0.99899444|   WEAK   
          sts_serial|  13|    100000|     100|0.85346246|  PASSED  
          sts_serial|  14|    100000|     100|0.96304659|  PASSED  
          sts_serial|  14|    100000|     100|0.29252102|  PASSED  
          sts_serial|  15|    100000|     100|0.80347399|  PASSED  
          sts_serial|  15|    100000|     100|0.76258206|  PASSED  
          sts_serial|  16|    100000|     100|0.65965686|  PASSED  
          sts_serial|  16|    100000|     100|0.13773114|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.74298162|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.01774503|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.34337736|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.37727152|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.64675770|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.84578587|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.38925608|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.50886859|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.58738439|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.54848377|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.71843579|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.11720627|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.78329958|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.54349400|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.34024756|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.28320112|  PASSED  
    rgb_permutations|   2|    100000|     100|0.77816161|  PASSED  
    rgb_permutations|   3|    100000|     100|0.40789619|  PASSED  
    rgb_permutations|   4|    100000|     100|0.69594717|  PASSED  
    rgb_permutations|   5|    100000|     100|0.86142381|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.83018406|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.74521056|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.89610550|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.04649549|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.64242020|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.81688322|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.26570312|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.92831165|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.74036157|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.85399365|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.30365732|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.25390417|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.34033470|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.35108016|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.96012270|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.82852836|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.54161108|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.94772162|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.91366963|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.92670352|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.01038886|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.16727501|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.16234599|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.87223804|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.91585297|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.57165632|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.07587106|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.11799084|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.42516705|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.29952119|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.54279519|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.56536914|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.37570590|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.54860344|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.48891755|  PASSED  
             dab_dct| 256|     50000|       1|0.63090412|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.93520301|  PASSED  
        dab_filltree|  32|  15000000|       1|0.32490588|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.59305483|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.17103451|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.49810439|  PASSED  

real	73m5.337s
user	64m38.925s
sys	8m18.082s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xf5921792
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xf5921792
length= 64 megabytes (2^26 bytes), time= 2.4 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xf5921792
length= 128 megabytes (2^27 bytes), time= 5.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xf5921792
length= 256 megabytes (2^28 bytes), time= 10.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xf5921792
length= 512 megabytes (2^29 bytes), time= 18.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xf5921792
length= 1 gigabyte (2^30 bytes), time= 34.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-3,T)          R=  +7.7  p =  1.9e-3   unusual          
  [Low1/32]BCFN(2+4,13-5,T)         R=  -6.8  p =1-2.4e-4   unusual          
  ...and 181 test result(s) without anomalies

rng=RNG_stdin, seed=0xf5921792
length= 2 gigabytes (2^31 bytes), time= 64.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xf5921792
length= 4 gigabytes (2^32 bytes), time= 124 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xf5921792
length= 8 gigabytes (2^33 bytes), time= 245 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xf5921792
length= 16 gigabytes (2^34 bytes), time= 492 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xf5921792
length= 32 gigabytes (2^35 bytes), time= 971 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:all          R=  -4.3  p =1-1.0e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xf5921792
length= 64 gigabytes (2^36 bytes), time= 1931 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xf5921792
length= 120.750 gigabytes (2^36.916 bytes), time= 3604 seconds
  no anomalies in 258 test result(s)


real	60m4.886s
user	58m44.912s
sys	1m15.369s
*/
/* TEST00
time ./MRndCPP 12 
3031446162
318891177
2522508198
3234795101
887273959
4106570558
3280274796
396131901
3586669307
4038731636
7613036603694123127

real	0m29.996s
user	0m29.936s
sys	0m0.057s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.45e+07  |3935705268|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.60978407|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.06912790|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.14810405|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.38326546|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.92672306|  PASSED  
        diehard_opso|   0|   2097152|     100|0.98280778|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.77890475|  PASSED  
         diehard_dna|   0|   2097152|     100|0.04159733|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.08111124|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.78611726|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.04820412|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.25846461|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.82634016|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.78342612|  PASSED  
        diehard_sums|   0|       100|     100|0.19658845|  PASSED  
        diehard_runs|   0|    100000|     100|0.33253480|  PASSED  
        diehard_runs|   0|    100000|     100|0.27508999|  PASSED  
       diehard_craps|   0|    200000|     100|0.77907967|  PASSED  
       diehard_craps|   0|    200000|     100|0.59574303|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.46008245|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.77641307|  PASSED  
         sts_monobit|   1|    100000|     100|0.99232838|  PASSED  
            sts_runs|   2|    100000|     100|0.20091331|  PASSED  
          sts_serial|   1|    100000|     100|0.72023486|  PASSED  
          sts_serial|   2|    100000|     100|0.66551535|  PASSED  
          sts_serial|   3|    100000|     100|0.78486102|  PASSED  
          sts_serial|   3|    100000|     100|0.79006294|  PASSED  
          sts_serial|   4|    100000|     100|0.89676390|  PASSED  
          sts_serial|   4|    100000|     100|0.27265454|  PASSED  
          sts_serial|   5|    100000|     100|0.80048318|  PASSED  
          sts_serial|   5|    100000|     100|0.87230712|  PASSED  
          sts_serial|   6|    100000|     100|0.86628673|  PASSED  
          sts_serial|   6|    100000|     100|0.85266283|  PASSED  
          sts_serial|   7|    100000|     100|0.85491181|  PASSED  
          sts_serial|   7|    100000|     100|0.60848321|  PASSED  
          sts_serial|   8|    100000|     100|0.73794068|  PASSED  
          sts_serial|   8|    100000|     100|0.64707176|  PASSED  
          sts_serial|   9|    100000|     100|0.70107727|  PASSED  
          sts_serial|   9|    100000|     100|0.93898758|  PASSED  
          sts_serial|  10|    100000|     100|0.33279663|  PASSED  
          sts_serial|  10|    100000|     100|0.82838042|  PASSED  
          sts_serial|  11|    100000|     100|0.58383679|  PASSED  
          sts_serial|  11|    100000|     100|0.74017860|  PASSED  
          sts_serial|  12|    100000|     100|0.54690832|  PASSED  
          sts_serial|  12|    100000|     100|0.30996865|  PASSED  
          sts_serial|  13|    100000|     100|0.30754807|  PASSED  
          sts_serial|  13|    100000|     100|0.30431773|  PASSED  
          sts_serial|  14|    100000|     100|0.07568252|  PASSED  
          sts_serial|  14|    100000|     100|0.08776870|  PASSED  
          sts_serial|  15|    100000|     100|0.26003588|  PASSED  
          sts_serial|  15|    100000|     100|0.28362138|  PASSED  
          sts_serial|  16|    100000|     100|0.81705266|  PASSED  
          sts_serial|  16|    100000|     100|0.44267873|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.77470857|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.16833659|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.13370335|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.40309657|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.06328196|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.01625053|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.94311616|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.47137993|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.81688277|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.99915936|   WEAK   
         rgb_bitdist|  11|    100000|     100|0.08775661|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.76197813|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.22407854|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.63189968|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.13796069|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.49386354|  PASSED  
    rgb_permutations|   2|    100000|     100|0.57867993|  PASSED  
    rgb_permutations|   3|    100000|     100|0.93908728|  PASSED  
    rgb_permutations|   4|    100000|     100|0.38684358|  PASSED  
    rgb_permutations|   5|    100000|     100|0.12731622|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.28296388|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.07449034|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.86229644|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.70986650|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.23774276|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.37554647|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.56573868|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.17653976|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.37363272|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.21037945|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.15782654|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.05833756|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.44185777|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.60431545|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.74270484|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.19689456|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.81856831|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.01763779|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.16485224|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.66324278|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.54980141|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.66327862|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.76396181|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.09108058|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.81580002|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.93352848|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.94467875|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.66947453|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.24423477|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.04207117|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.34059753|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.10743745|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.32278187|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.25784861|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.80384164|  PASSED  
             dab_dct| 256|     50000|       1|0.28168806|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.58000902|  PASSED  
        dab_filltree|  32|  15000000|       1|0.65867296|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.31133369|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.11708714|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.35163600|  PASSED  

real	71m4.340s
user	63m25.857s
sys	7m36.527s
*/
