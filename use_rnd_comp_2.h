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
/// @created on 2019-12-08 02:56:07 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 0b0fbb96-789c-4fd8-802d-50b3d0f3757f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib0, RndFib1, 7 >;
/* TEST00
time ./MRndCPP 
2991690402
7978384
2837370390
3531070337
1249900283
1051446622
18446717790395592981

real	0m39.971s
user	0m39.868s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.00e+07  |2421171758|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.83160163|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.53785885|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.77953916|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.23573755|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.98583974|  PASSED  
        diehard_opso|   0|   2097152|     100|0.71471683|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.62885839|  PASSED  
         diehard_dna|   0|   2097152|     100|0.52158752|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.98001380|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.46083992|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.75596361|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.23406394|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.57862184|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.28248450|  PASSED  
        diehard_sums|   0|       100|     100|0.00673985|  PASSED  
        diehard_runs|   0|    100000|     100|0.58648233|  PASSED  
        diehard_runs|   0|    100000|     100|0.58776170|  PASSED  
       diehard_craps|   0|    200000|     100|0.78149367|  PASSED  
       diehard_craps|   0|    200000|     100|0.62899655|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.44919417|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.63142148|  PASSED  
         sts_monobit|   1|    100000|     100|0.07755553|  PASSED  
            sts_runs|   2|    100000|     100|0.91101196|  PASSED  
          sts_serial|   1|    100000|     100|0.87767173|  PASSED  
          sts_serial|   2|    100000|     100|0.82867753|  PASSED  
          sts_serial|   3|    100000|     100|0.79166601|  PASSED  
          sts_serial|   3|    100000|     100|0.86778038|  PASSED  
          sts_serial|   4|    100000|     100|0.53411309|  PASSED  
          sts_serial|   4|    100000|     100|0.48665697|  PASSED  
          sts_serial|   5|    100000|     100|0.25319487|  PASSED  
          sts_serial|   5|    100000|     100|0.12254496|  PASSED  
          sts_serial|   6|    100000|     100|0.86934116|  PASSED  
          sts_serial|   6|    100000|     100|0.32518495|  PASSED  
          sts_serial|   7|    100000|     100|0.89030356|  PASSED  
          sts_serial|   7|    100000|     100|0.93228599|  PASSED  
          sts_serial|   8|    100000|     100|0.55451699|  PASSED  
          sts_serial|   8|    100000|     100|0.50752217|  PASSED  
          sts_serial|   9|    100000|     100|0.16831713|  PASSED  
          sts_serial|   9|    100000|     100|0.88548046|  PASSED  
          sts_serial|  10|    100000|     100|0.17920196|  PASSED  
          sts_serial|  10|    100000|     100|0.81181058|  PASSED  
          sts_serial|  11|    100000|     100|0.00285812|   WEAK   
          sts_serial|  11|    100000|     100|0.01884670|  PASSED  
          sts_serial|  12|    100000|     100|0.11689389|  PASSED  
          sts_serial|  12|    100000|     100|0.81921757|  PASSED  
          sts_serial|  13|    100000|     100|0.13805106|  PASSED  
          sts_serial|  13|    100000|     100|0.81744760|  PASSED  
          sts_serial|  14|    100000|     100|0.05369834|  PASSED  
          sts_serial|  14|    100000|     100|0.67079299|  PASSED  
          sts_serial|  15|    100000|     100|0.43620529|  PASSED  
          sts_serial|  15|    100000|     100|0.25130910|  PASSED  
          sts_serial|  16|    100000|     100|0.05046691|  PASSED  
          sts_serial|  16|    100000|     100|0.35657565|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.46227072|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.76936557|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.36721498|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.36554438|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.08052869|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.79169562|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.19967796|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.31971463|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.93435589|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.07068902|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.97850393|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.98172796|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.63166654|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.73213804|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.10203141|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.13907869|  PASSED  
    rgb_permutations|   2|    100000|     100|0.63512216|  PASSED  
    rgb_permutations|   3|    100000|     100|0.81191287|  PASSED  
    rgb_permutations|   4|    100000|     100|0.93401823|  PASSED  
    rgb_permutations|   5|    100000|     100|0.64366719|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.28432393|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.36462654|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.64685976|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.51543858|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.99387750|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.16122709|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.42355371|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.99662262|   WEAK   
      rgb_lagged_sum|   8|   1000000|     100|0.53486401|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.21427291|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.58768504|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.56038174|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.17235102|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.13920371|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.98846989|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.77401154|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.39797337|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.62781011|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.12213302|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.58251321|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.92437868|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.36761490|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.74730901|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.31272419|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.84781273|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.74235435|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.31030387|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.15762734|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.42731468|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.46665129|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.97323073|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.08962167|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.69345891|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.20792180|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.37112051|  PASSED  
             dab_dct| 256|     50000|       1|0.11390168|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.18499671|  PASSED  
        dab_filltree|  32|  15000000|       1|0.01751598|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.20729957|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.39645716|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.41550151|  PASSED  

real	55m10.946s
user	51m20.384s
sys	3m41.528s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4a54cf86
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4a54cf86
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4a54cf86
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.0  p =1-5.9e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4a54cf86
length= 512 megabytes (2^29 bytes), time= 10.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x4a54cf86
length= 1 gigabyte (2^30 bytes), time= 20.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4a54cf86
length= 2 gigabytes (2^31 bytes), time= 38.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x4a54cf86
length= 4 gigabytes (2^32 bytes), time= 75.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x4a54cf86
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.757s
user	1m39.376s
sys	0m3.108s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xfe9dad18
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xfe9dad18
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xfe9dad18
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-3,T)                  R=  +8.4  p =  8.6e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfe9dad18
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xfe9dad18
length= 1 gigabyte (2^30 bytes), time= 21.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xfe9dad18
length= 2 gigabytes (2^31 bytes), time= 40.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xfe9dad18
length= 4 gigabytes (2^32 bytes), time= 79.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-1,T)         R=  -8.0  p =1-3.0e-4   mildly suspicious
  [Low8/32]DC6-9x1Bytes-1           R=  -3.9  p =1-8.0e-3   unusual          
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfe9dad18
length= 8 gigabytes (2^33 bytes), time= 163 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -5.1  p =1-1.7e-3   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0xfe9dad18
length= 16 gigabytes (2^34 bytes), time= 336 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xfe9dad18
length= 32 gigabytes (2^35 bytes), time= 680 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xfe9dad18
length= 46.500 gigabytes (2^35.539 bytes), time= 1002 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all2         R=  -1.8  p =1-4.4e-4   unusual          
  [Low1/32]BCFN(2+1,13-1,T)         R=  +7.6  p =  1.6e-3   unusual          
  ...and 182 test result(s) without anomalies


real	16m42.738s
user	16m13.192s
sys	0m26.568s
*/
