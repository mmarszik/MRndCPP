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
/// @created on 2019-12-18 01:25:44 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 2ed26032-5d67-4a13-9a29-25b1c4ea0109                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib10;
/* TEST00
time ./MRndCPP 
3228350224
2428641550
2501503533
2501140002
2102311112
3723742203
4611648142975756564

real	0m7.895s
user	0m7.884s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.07e+07  |3571950251|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.89460525|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.05131593|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.50703689|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.65634389|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.48923547|  PASSED  
        diehard_opso|   0|   2097152|     100|0.68738079|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.87075996|  PASSED  
         diehard_dna|   0|   2097152|     100|0.39806587|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.96001967|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.44475234|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.99790600|   WEAK   
    diehard_2dsphere|   2|      8000|     100|0.68911447|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.25240959|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.35342698|  PASSED  
        diehard_sums|   0|       100|     100|0.73181855|  PASSED  
        diehard_runs|   0|    100000|     100|0.03938169|  PASSED  
        diehard_runs|   0|    100000|     100|0.45641915|  PASSED  
       diehard_craps|   0|    200000|     100|0.99848016|   WEAK   
       diehard_craps|   0|    200000|     100|0.57877041|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.84354374|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.79201967|  PASSED  
         sts_monobit|   1|    100000|     100|0.21470789|  PASSED  
            sts_runs|   2|    100000|     100|0.33143710|  PASSED  
          sts_serial|   1|    100000|     100|0.98133648|  PASSED  
          sts_serial|   2|    100000|     100|0.52227109|  PASSED  
          sts_serial|   3|    100000|     100|0.80635661|  PASSED  
          sts_serial|   3|    100000|     100|0.98661665|  PASSED  
          sts_serial|   4|    100000|     100|0.69430502|  PASSED  
          sts_serial|   4|    100000|     100|0.59843428|  PASSED  
          sts_serial|   5|    100000|     100|0.48963279|  PASSED  
          sts_serial|   5|    100000|     100|0.34047968|  PASSED  
          sts_serial|   6|    100000|     100|0.48148190|  PASSED  
          sts_serial|   6|    100000|     100|0.56469669|  PASSED  
          sts_serial|   7|    100000|     100|0.95108131|  PASSED  
          sts_serial|   7|    100000|     100|0.37331463|  PASSED  
          sts_serial|   8|    100000|     100|0.73909831|  PASSED  
          sts_serial|   8|    100000|     100|0.73409137|  PASSED  
          sts_serial|   9|    100000|     100|0.64729864|  PASSED  
          sts_serial|   9|    100000|     100|0.93037102|  PASSED  
          sts_serial|  10|    100000|     100|0.95684864|  PASSED  
          sts_serial|  10|    100000|     100|0.90934049|  PASSED  
          sts_serial|  11|    100000|     100|0.84698101|  PASSED  
          sts_serial|  11|    100000|     100|0.29393897|  PASSED  
          sts_serial|  12|    100000|     100|0.69401471|  PASSED  
          sts_serial|  12|    100000|     100|0.68099037|  PASSED  
          sts_serial|  13|    100000|     100|0.68303422|  PASSED  
          sts_serial|  13|    100000|     100|0.80234368|  PASSED  
          sts_serial|  14|    100000|     100|0.17601401|  PASSED  
          sts_serial|  14|    100000|     100|0.28364911|  PASSED  
          sts_serial|  15|    100000|     100|0.59080320|  PASSED  
          sts_serial|  15|    100000|     100|0.54480518|  PASSED  
          sts_serial|  16|    100000|     100|0.87736746|  PASSED  
          sts_serial|  16|    100000|     100|0.87189409|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.21971825|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.81071020|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.46200682|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.39656558|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.33603874|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.54431707|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.56855507|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.87553816|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.96687639|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.51424016|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.01999466|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.82501865|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.51072457|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.74130659|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.07056126|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.79045770|  PASSED  
    rgb_permutations|   2|    100000|     100|0.97320575|  PASSED  
    rgb_permutations|   3|    100000|     100|0.35511004|  PASSED  
    rgb_permutations|   4|    100000|     100|0.72654263|  PASSED  
    rgb_permutations|   5|    100000|     100|0.95189170|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.91881347|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.28975065|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.01885561|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.54200600|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.07752039|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.31633741|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.94775486|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.10802999|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.47086901|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.51727997|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.12528584|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.89429443|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.79047205|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.48726303|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.76754307|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.57721143|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.70131340|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.49369499|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.92521848|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.69832029|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.77394784|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.57882958|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.02667278|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.82029897|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.21607433|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.96133521|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.44177996|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.71235053|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.18050254|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.33605169|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.62886612|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.08866092|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.88279653|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.70650969|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.71225432|  PASSED  
             dab_dct| 256|     50000|       1|0.41334947|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.26562200|  PASSED  
        dab_filltree|  32|  15000000|       1|0.14138626|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.15745505|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.36355183|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.86068919|  PASSED  

real	54m44.959s
user	51m1.968s
sys	3m34.548s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8262473f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8262473f
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +6.1  p =  2.6e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8262473f
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8262473f
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8262473f
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x8262473f
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8262473f
length= 4 gigabytes (2^32 bytes), time= 74.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.3  p =  6.1e-3   unusual          
  [Low1/32]BCFN(2+0,13-3,T)         R=  +9.6  p =  2.3e-4   mildly suspicious
  [Low1/32]BCFN(2+3,13-3,T)         R=  -7.7  p =1-2.5e-4   unusual          
  ...and 153 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8262473f
length= 5.250 gigabytes (2^32.392 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-2,T)         R=  +8.6  p =  5.3e-4   unusual          
  ...and 159 test result(s) without anomalies


real	1m40.727s
user	1m38.248s
sys	0m2.188s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9b54435e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9b54435e
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9b54435e
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9b54435e
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-3,T)         R=  +7.4  p =  2.8e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9b54435e
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.8e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9b54435e
length= 2 gigabytes (2^31 bytes), time= 41.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x9b54435e
length= 4 gigabytes (2^32 bytes), time= 80.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +13.3  p =  4.2e-6   suspicious       
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9b54435e
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-2,T)         R= +14.7  p =  4.0e-7   very suspicious  
  ...and 158 test result(s) without anomalies


real	1m41.396s
user	1m39.068s
sys	0m2.044s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2e371166
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2e371166
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2e371166
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2e371166
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2e371166
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+4,13-2,T)                  R=  -8.3  p =1-1.3e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2e371166
length= 2 gigabytes (2^31 bytes), time= 37.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2e371166
length= 4 gigabytes (2^32 bytes), time= 74.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2e371166
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.591s
user	1m39.156s
sys	0m2.108s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xde048402
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xde048402
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xde048402
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xde048402
length= 512 megabytes (2^29 bytes), time= 11.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  +4.2  p =  2.1e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xde048402
length= 1 gigabyte (2^30 bytes), time= 23.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.4e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xde048402
length= 2 gigabytes (2^31 bytes), time= 44.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xde048402
length= 4 gigabytes (2^32 bytes), time= 86.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R=  +8.1  p =  1.2e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xde048402
length= 8 gigabytes (2^33 bytes), time= 182 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-2,T)         R=  +9.8  p =  1.2e-4   mildly suspicious
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0xde048402
length= 16 gigabytes (2^34 bytes), time= 375 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-0,T)         R=  +7.8  p =  1.1e-3   unusual          
  [Low1/32]BCFN(2+0,13-1,T)         R= +21.1  p =  8.7e-11    FAIL           
  ...and 170 test result(s) without anomalies


real	6m15.261s
user	6m7.696s
sys	0m6.412s
*/
