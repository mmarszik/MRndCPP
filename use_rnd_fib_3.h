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
time ./MRndCPP 
3237930143
924043937
3976843214
62872134
3455282647
3156509901
98764544477601

real	0m26.126s
user	0m26.056s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.04e+07  | 265476105|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.58621631|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.96367741|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.46086818|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.29644780|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.20334435|  PASSED  
        diehard_opso|   0|   2097152|     100|0.29292045|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.07814650|  PASSED  
         diehard_dna|   0|   2097152|     100|0.12344974|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.50178585|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.65840217|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.53884141|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.87430526|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.07670532|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.36931876|  PASSED  
        diehard_sums|   0|       100|     100|0.19747666|  PASSED  
        diehard_runs|   0|    100000|     100|0.17989746|  PASSED  
        diehard_runs|   0|    100000|     100|0.24332465|  PASSED  
       diehard_craps|   0|    200000|     100|0.38503132|  PASSED  
       diehard_craps|   0|    200000|     100|0.90502188|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.74057977|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.94755233|  PASSED  
         sts_monobit|   1|    100000|     100|0.16831027|  PASSED  
            sts_runs|   2|    100000|     100|0.88220905|  PASSED  
          sts_serial|   1|    100000|     100|0.94537523|  PASSED  
          sts_serial|   2|    100000|     100|0.87825409|  PASSED  
          sts_serial|   3|    100000|     100|0.87458533|  PASSED  
          sts_serial|   3|    100000|     100|0.17922414|  PASSED  
          sts_serial|   4|    100000|     100|0.54473938|  PASSED  
          sts_serial|   4|    100000|     100|0.29578353|  PASSED  
          sts_serial|   5|    100000|     100|0.65365632|  PASSED  
          sts_serial|   5|    100000|     100|0.58955139|  PASSED  
          sts_serial|   6|    100000|     100|0.64790944|  PASSED  
          sts_serial|   6|    100000|     100|0.79439606|  PASSED  
          sts_serial|   7|    100000|     100|0.97233578|  PASSED  
          sts_serial|   7|    100000|     100|0.99851937|   WEAK   
          sts_serial|   8|    100000|     100|0.33797213|  PASSED  
          sts_serial|   8|    100000|     100|0.94223767|  PASSED  
          sts_serial|   9|    100000|     100|0.98775013|  PASSED  
          sts_serial|   9|    100000|     100|0.55340198|  PASSED  
          sts_serial|  10|    100000|     100|0.41886602|  PASSED  
          sts_serial|  10|    100000|     100|0.08390965|  PASSED  
          sts_serial|  11|    100000|     100|0.25942544|  PASSED  
          sts_serial|  11|    100000|     100|0.50166225|  PASSED  
          sts_serial|  12|    100000|     100|0.79188500|  PASSED  
          sts_serial|  12|    100000|     100|0.99949246|   WEAK   
          sts_serial|  13|    100000|     100|0.91585777|  PASSED  
          sts_serial|  13|    100000|     100|0.72577306|  PASSED  
          sts_serial|  14|    100000|     100|0.86835264|  PASSED  
          sts_serial|  14|    100000|     100|0.92173048|  PASSED  
          sts_serial|  15|    100000|     100|0.62598287|  PASSED  
          sts_serial|  15|    100000|     100|0.69890205|  PASSED  
          sts_serial|  16|    100000|     100|0.70111125|  PASSED  
          sts_serial|  16|    100000|     100|0.88646212|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.99625763|   WEAK   
         rgb_bitdist|   2|    100000|     100|0.99502143|   WEAK   
         rgb_bitdist|   3|    100000|     100|0.67642781|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.06453830|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.09736041|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.63180937|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.61328591|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.88620259|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.49477511|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.37722441|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.13916126|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.75921850|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.68618701|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.76319069|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.62866501|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.59480964|  PASSED  
    rgb_permutations|   2|    100000|     100|0.70592663|  PASSED  
    rgb_permutations|   3|    100000|     100|0.02990989|  PASSED  
    rgb_permutations|   4|    100000|     100|0.71883915|  PASSED  
    rgb_permutations|   5|    100000|     100|0.76104067|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.94638336|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.65715060|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.67161800|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.92166436|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.60146468|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.33363634|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.57195717|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.35387265|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.85002786|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.21347078|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.82206549|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.63280254|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.60827378|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.96325556|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.50418373|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.33332895|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.34557827|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.10541795|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.72521351|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.81919183|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.04099496|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.57924128|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.97541341|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.88035520|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.96003921|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.62007961|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.14320094|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.77593760|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.72858326|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.04415544|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.01135745|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.19414434|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.67776988|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.38322545|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.87765611|  PASSED  
             dab_dct| 256|     50000|       1|0.44688140|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.39894094|  PASSED  
        dab_filltree|  32|  15000000|       1|0.22392811|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.81694938|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.56451276|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.16444677|  PASSED  

real	53m22.795s
user	49m26.788s
sys	3m46.892s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5bb387bb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5bb387bb
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5bb387bb
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5bb387bb
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5bb387bb
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5bb387bb
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5bb387bb
length= 4 gigabytes (2^32 bytes), time= 71.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x5bb387bb
length= 5.750 gigabytes (2^32.524 bytes), time= 105 seconds
  no anomalies in 160 test result(s)


real	1m45.281s
user	1m42.456s
sys	0m2.376s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7b198b4e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7b198b4e
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.7  p =1-9.6e-3   unusual          
  [Low8/32]BCFN(2+2,13-5,T)         R=  +9.0  p =  1.0e-3   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7b198b4e
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7b198b4e
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7b198b4e
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7b198b4e
length= 2 gigabytes (2^31 bytes), time= 41.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x7b198b4e
length= 4 gigabytes (2^32 bytes), time= 80.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x7b198b4e
length= 8 gigabytes (2^33 bytes), time= 162 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x7b198b4e
length= 16 gigabytes (2^34 bytes), time= 339 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x7b198b4e
length= 32 gigabytes (2^35 bytes), time= 686 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x7b198b4e
length= 46.250 gigabytes (2^35.531 bytes), time= 1004 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-1,T)         R=  +7.7  p =  1.4e-3   unusual          
  [Low1/32]BCFN(2+2,13-1,T)         R= +10.7  p =  3.1e-5   mildly suspicious
  ...and 182 test result(s) without anomalies


real	16m44.781s
user	16m24.272s
sys	0m17.560s
*/
/* TEST00
time ./MRndCPP 
3237930143
924043937
3976843214
62872134
3455282647
3156509901
98764544477601

real	0m26.390s
user	0m26.332s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.21e+07  | 325810149|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.05022875|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.93326603|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.57536124|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.63160744|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.16742781|  PASSED  
        diehard_opso|   0|   2097152|     100|0.47783254|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.53043395|  PASSED  
         diehard_dna|   0|   2097152|     100|0.77685420|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.06031478|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.99028297|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.28239841|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.73603995|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.43178866|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.93234054|  PASSED  
        diehard_sums|   0|       100|     100|0.11948504|  PASSED  
        diehard_runs|   0|    100000|     100|0.81190689|  PASSED  
        diehard_runs|   0|    100000|     100|0.02303572|  PASSED  
       diehard_craps|   0|    200000|     100|0.98734444|  PASSED  
       diehard_craps|   0|    200000|     100|0.32794121|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.51828070|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.62490200|  PASSED  
         sts_monobit|   1|    100000|     100|0.59865673|  PASSED  
            sts_runs|   2|    100000|     100|0.84757864|  PASSED  
          sts_serial|   1|    100000|     100|0.10269675|  PASSED  
          sts_serial|   2|    100000|     100|0.18302553|  PASSED  
          sts_serial|   3|    100000|     100|0.48949460|  PASSED  
          sts_serial|   3|    100000|     100|0.88855873|  PASSED  
          sts_serial|   4|    100000|     100|0.90220833|  PASSED  
          sts_serial|   4|    100000|     100|0.89740695|  PASSED  
          sts_serial|   5|    100000|     100|0.87438767|  PASSED  
          sts_serial|   5|    100000|     100|0.49818391|  PASSED  
          sts_serial|   6|    100000|     100|0.61699943|  PASSED  
          sts_serial|   6|    100000|     100|0.49649654|  PASSED  
          sts_serial|   7|    100000|     100|0.52933104|  PASSED  
          sts_serial|   7|    100000|     100|0.32610434|  PASSED  
          sts_serial|   8|    100000|     100|0.13910734|  PASSED  
          sts_serial|   8|    100000|     100|0.25840820|  PASSED  
          sts_serial|   9|    100000|     100|0.51406360|  PASSED  
          sts_serial|   9|    100000|     100|0.92458327|  PASSED  
          sts_serial|  10|    100000|     100|0.57324641|  PASSED  
          sts_serial|  10|    100000|     100|0.54256141|  PASSED  
          sts_serial|  11|    100000|     100|0.95194070|  PASSED  
          sts_serial|  11|    100000|     100|0.49992504|  PASSED  
          sts_serial|  12|    100000|     100|0.47378801|  PASSED  
          sts_serial|  12|    100000|     100|0.94469014|  PASSED  
          sts_serial|  13|    100000|     100|0.47624189|  PASSED  
          sts_serial|  13|    100000|     100|0.03463822|  PASSED  
          sts_serial|  14|    100000|     100|0.56049289|  PASSED  
          sts_serial|  14|    100000|     100|0.57810396|  PASSED  
          sts_serial|  15|    100000|     100|0.82142290|  PASSED  
          sts_serial|  15|    100000|     100|0.69704903|  PASSED  
          sts_serial|  16|    100000|     100|0.17335032|  PASSED  
          sts_serial|  16|    100000|     100|0.44720031|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.11511810|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.09359733|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.37127731|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.45319786|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.58658352|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.97858856|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.85678125|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.98816485|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.30510230|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.40253491|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.53355473|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.87983511|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.80247977|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.72472491|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.39630107|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.04753186|  PASSED  
    rgb_permutations|   2|    100000|     100|0.32495676|  PASSED  
    rgb_permutations|   3|    100000|     100|0.01663979|  PASSED  
    rgb_permutations|   4|    100000|     100|0.58029401|  PASSED  
    rgb_permutations|   5|    100000|     100|0.20231578|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.87284214|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.84825159|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.64615493|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.44124654|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.53322558|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.92687681|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.57220582|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.79575360|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.04293604|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.59174412|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.42440281|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.95170731|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.21474744|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.91308195|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.63384141|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.86812645|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.18380307|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.63957754|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.02981567|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.51272344|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.75088319|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.44731492|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.66263787|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.72327610|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.93487203|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.00252892|   WEAK   
      rgb_lagged_sum|  26|   1000000|     100|0.39636270|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.32971137|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.59204315|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.71145685|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.55966646|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.12343413|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.67371804|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.49556555|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.55738336|  PASSED  
             dab_dct| 256|     50000|       1|0.86077896|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.10343450|  PASSED  
        dab_filltree|  32|  15000000|       1|0.94759914|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.56064810|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.98747427|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.54727521|  PASSED  

real	51m1.563s
user	47m14.004s
sys	3m40.808s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbc96c330
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbc96c330
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xbc96c330
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xbc96c330
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xbc96c330
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xbc96c330
length= 2 gigabytes (2^31 bytes), time= 41.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xbc96c330
length= 4 gigabytes (2^32 bytes), time= 83.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xbc96c330
length= 5.000 gigabytes (2^32.322 bytes), time= 105 seconds
  no anomalies in 159 test result(s)


real	1m45.852s
user	1m43.792s
sys	0m1.920s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xcb6009d8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xcb6009d8
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xcb6009d8
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xcb6009d8
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xcb6009d8
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xcb6009d8
length= 2 gigabytes (2^31 bytes), time= 36.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xcb6009d8
length= 4 gigabytes (2^32 bytes), time= 71.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xcb6009d8
length= 8 gigabytes (2^33 bytes), time= 146 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xcb6009d8
length= 16 gigabytes (2^34 bytes), time= 300 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xcb6009d8
length= 32 gigabytes (2^35 bytes), time= 602 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-1,T)         R= +11.4  p =  1.4e-5   suspicious       
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0xcb6009d8
length= 52.500 gigabytes (2^35.714 bytes), time= 1001 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-0,T)         R= +13.1  p =  1.5e-6   very suspicious  
  [Low1/32]BCFN(2+2,13-1,T)         R=  +7.8  p =  1.3e-3   unusual          
  ...and 182 test result(s) without anomalies


real	16m41.212s
user	16m20.092s
sys	0m18.940s
*/
