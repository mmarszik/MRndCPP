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
/// @created on 2019-12-08 03:11:45 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 9367a3f6-6dbc-4085-ada6-9e68e543e3a7                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sfib.h"

using TRnd = RndSFib0;
/* TEST00
time ./MRndCPP 
1709448209
2412023039
3605789886
2820342608
3057952285
1386997744
18446683041479469384

real	0m27.708s
user	0m27.644s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  |1919539381|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.16859254|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.44597003|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.11037448|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.61797490|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.16714435|  PASSED  
        diehard_opso|   0|   2097152|     100|0.10993705|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.96366105|  PASSED  
         diehard_dna|   0|   2097152|     100|0.92242672|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.10938919|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.80095046|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.41559726|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.86934715|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.51277973|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.06606936|  PASSED  
        diehard_sums|   0|       100|     100|0.07911637|  PASSED  
        diehard_runs|   0|    100000|     100|0.10995776|  PASSED  
        diehard_runs|   0|    100000|     100|0.99832185|   WEAK   
       diehard_craps|   0|    200000|     100|0.80379314|  PASSED  
       diehard_craps|   0|    200000|     100|0.63823900|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.39557110|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.96314236|  PASSED  
         sts_monobit|   1|    100000|     100|0.88819486|  PASSED  
            sts_runs|   2|    100000|     100|0.76039167|  PASSED  
          sts_serial|   1|    100000|     100|0.06188973|  PASSED  
          sts_serial|   2|    100000|     100|0.85063671|  PASSED  
          sts_serial|   3|    100000|     100|0.93361297|  PASSED  
          sts_serial|   3|    100000|     100|0.45332160|  PASSED  
          sts_serial|   4|    100000|     100|0.45828422|  PASSED  
          sts_serial|   4|    100000|     100|0.59184985|  PASSED  
          sts_serial|   5|    100000|     100|0.53506009|  PASSED  
          sts_serial|   5|    100000|     100|0.53431380|  PASSED  
          sts_serial|   6|    100000|     100|0.42919970|  PASSED  
          sts_serial|   6|    100000|     100|0.72740217|  PASSED  
          sts_serial|   7|    100000|     100|0.06051638|  PASSED  
          sts_serial|   7|    100000|     100|0.38155225|  PASSED  
          sts_serial|   8|    100000|     100|0.76724702|  PASSED  
          sts_serial|   8|    100000|     100|0.99953538|   WEAK   
          sts_serial|   9|    100000|     100|0.18599941|  PASSED  
          sts_serial|   9|    100000|     100|0.22453910|  PASSED  
          sts_serial|  10|    100000|     100|0.42005849|  PASSED  
          sts_serial|  10|    100000|     100|0.14521454|  PASSED  
          sts_serial|  11|    100000|     100|0.67848858|  PASSED  
          sts_serial|  11|    100000|     100|0.41792450|  PASSED  
          sts_serial|  12|    100000|     100|0.30219886|  PASSED  
          sts_serial|  12|    100000|     100|0.28907965|  PASSED  
          sts_serial|  13|    100000|     100|0.18642216|  PASSED  
          sts_serial|  13|    100000|     100|0.24721788|  PASSED  
          sts_serial|  14|    100000|     100|0.50976527|  PASSED  
          sts_serial|  14|    100000|     100|0.97630916|  PASSED  
          sts_serial|  15|    100000|     100|0.94711400|  PASSED  
          sts_serial|  15|    100000|     100|0.33663531|  PASSED  
          sts_serial|  16|    100000|     100|0.84300886|  PASSED  
          sts_serial|  16|    100000|     100|0.55529926|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.03128245|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.44372414|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.38430040|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.04863189|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.58988665|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.98937767|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.99944384|   WEAK   
         rgb_bitdist|   8|    100000|     100|0.74512064|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.33338802|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.48700734|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.47369848|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.48809814|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.24482694|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.42350396|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.30304511|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.87699482|  PASSED  
    rgb_permutations|   2|    100000|     100|0.73540258|  PASSED  
    rgb_permutations|   3|    100000|     100|0.00557919|  PASSED  
    rgb_permutations|   4|    100000|     100|0.23894586|  PASSED  
    rgb_permutations|   5|    100000|     100|0.08606319|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.79565697|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.27928509|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.71038840|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.60790250|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.13899217|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.87368274|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.01785445|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.63669808|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.84055046|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.76219922|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.14082991|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.21463283|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.67656892|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.46925267|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.53774145|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.98369839|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.22566971|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.61222556|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.93128533|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.17684354|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.49721128|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.08223978|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.80099759|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.71388908|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.11640944|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.86969294|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.44103564|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.92956763|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.99381199|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.63339424|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.28811205|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.64326503|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.94754992|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.41198567|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.46951788|  PASSED  
             dab_dct| 256|     50000|       1|0.31983267|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.07426637|  PASSED  
        dab_filltree|  32|  15000000|       1|0.79725499|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.28230915|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.26050284|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.71438077|  PASSED  

real	49m40.763s
user	45m48.780s
sys	3m45.860s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x972a2ef3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x972a2ef3
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.1  p =1-1.4e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x972a2ef3
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -3.3  p =1-2.3e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x972a2ef3
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x972a2ef3
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x972a2ef3
length= 2 gigabytes (2^31 bytes), time= 38.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x972a2ef3
length= 4 gigabytes (2^32 bytes), time= 73.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x972a2ef3
length= 5.500 gigabytes (2^32.459 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.381s
user	1m38.488s
sys	0m2.620s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd92ff15c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd92ff15c
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd92ff15c
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd92ff15c
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xd92ff15c
length= 1 gigabyte (2^30 bytes), time= 19.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xd92ff15c
length= 2 gigabytes (2^31 bytes), time= 38.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.2  p =  7.6e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd92ff15c
length= 4 gigabytes (2^32 bytes), time= 78.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd92ff15c
length= 8 gigabytes (2^33 bytes), time= 162 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xd92ff15c
length= 16 gigabytes (2^34 bytes), time= 324 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xd92ff15c
length= 32 gigabytes (2^35 bytes), time= 645 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xd92ff15c
length= 49.500 gigabytes (2^35.629 bytes), time= 1004 seconds
  no anomalies in 184 test result(s)


real	16m44.273s
user	16m20.944s
sys	0m20.980s
*/
/* TEST00
time ./MRndCPP 
1709448209
2412023039
3605789886
2820342608
3057952285
1386997744
18446683041479469384

real	0m27.629s
user	0m27.528s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.11e+07  |1500042938|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.59785973|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.21681395|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.07376252|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.74068861|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.68359302|  PASSED  
        diehard_opso|   0|   2097152|     100|0.77922277|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.83143226|  PASSED  
         diehard_dna|   0|   2097152|     100|0.34368964|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.03768550|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.70466005|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.72624287|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.93324730|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.12088710|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.77318004|  PASSED  
        diehard_sums|   0|       100|     100|0.10036461|  PASSED  
        diehard_runs|   0|    100000|     100|0.92909821|  PASSED  
        diehard_runs|   0|    100000|     100|0.59184257|  PASSED  
       diehard_craps|   0|    200000|     100|0.12579358|  PASSED  
       diehard_craps|   0|    200000|     100|0.58112752|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.27712001|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.19937908|  PASSED  
         sts_monobit|   1|    100000|     100|0.98476883|  PASSED  
            sts_runs|   2|    100000|     100|0.50536293|  PASSED  
          sts_serial|   1|    100000|     100|0.04259138|  PASSED  
          sts_serial|   2|    100000|     100|0.64821204|  PASSED  
          sts_serial|   3|    100000|     100|0.97600359|  PASSED  
          sts_serial|   3|    100000|     100|0.44353245|  PASSED  
          sts_serial|   4|    100000|     100|0.66747589|  PASSED  
          sts_serial|   4|    100000|     100|0.74724505|  PASSED  
          sts_serial|   5|    100000|     100|0.95380735|  PASSED  
          sts_serial|   5|    100000|     100|0.62776855|  PASSED  
          sts_serial|   6|    100000|     100|0.59991336|  PASSED  
          sts_serial|   6|    100000|     100|0.93501298|  PASSED  
          sts_serial|   7|    100000|     100|0.61817080|  PASSED  
          sts_serial|   7|    100000|     100|0.62075418|  PASSED  
          sts_serial|   8|    100000|     100|0.59966074|  PASSED  
          sts_serial|   8|    100000|     100|0.19666476|  PASSED  
          sts_serial|   9|    100000|     100|0.74812539|  PASSED  
          sts_serial|   9|    100000|     100|0.42757308|  PASSED  
          sts_serial|  10|    100000|     100|0.98681996|  PASSED  
          sts_serial|  10|    100000|     100|0.61409608|  PASSED  
          sts_serial|  11|    100000|     100|0.92986883|  PASSED  
          sts_serial|  11|    100000|     100|0.70548987|  PASSED  
          sts_serial|  12|    100000|     100|0.81321886|  PASSED  
          sts_serial|  12|    100000|     100|0.38495650|  PASSED  
          sts_serial|  13|    100000|     100|0.28759546|  PASSED  
          sts_serial|  13|    100000|     100|0.55096071|  PASSED  
          sts_serial|  14|    100000|     100|0.13054436|  PASSED  
          sts_serial|  14|    100000|     100|0.99029220|  PASSED  
          sts_serial|  15|    100000|     100|0.75860528|  PASSED  
          sts_serial|  15|    100000|     100|0.32461069|  PASSED  
          sts_serial|  16|    100000|     100|0.96878465|  PASSED  
          sts_serial|  16|    100000|     100|0.62962637|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.00053631|   WEAK   
         rgb_bitdist|   2|    100000|     100|0.47737170|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.58985155|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.88370058|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.96559051|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.07568888|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.83922710|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.75139068|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.67145090|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.04438529|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.60290026|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.44456167|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.43788127|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.33516003|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.67169909|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.27471854|  PASSED  
    rgb_permutations|   2|    100000|     100|0.87976173|  PASSED  
    rgb_permutations|   3|    100000|     100|0.43307504|  PASSED  
    rgb_permutations|   4|    100000|     100|0.17097729|  PASSED  
    rgb_permutations|   5|    100000|     100|0.84265333|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.17801060|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.00468956|   WEAK   
      rgb_lagged_sum|   2|   1000000|     100|0.61403721|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.82771844|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.81743045|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.56416217|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.93035839|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.52867199|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.49190647|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.35228394|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.85130080|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.70713315|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.83687666|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.67192872|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.41974017|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.21345283|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.80626611|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.11593775|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.67530858|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.80329229|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.88320256|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.87025708|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.57274027|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.57095556|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.94803103|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.63904185|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.65373131|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.81771346|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.30272910|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.45664916|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.63380204|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.80598698|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.47616357|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.32983035|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.06319562|  PASSED  
             dab_dct| 256|     50000|       1|0.13681952|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.20727081|  PASSED  
        dab_filltree|  32|  15000000|       1|0.27111633|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.68045540|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.72448666|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.96956533|  PASSED  

real	48m20.616s
user	44m15.144s
sys	3m59.012s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7b523f0d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7b523f0d
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.2  p =  9.6e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7b523f0d
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7b523f0d
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7b523f0d
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7b523f0d
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+3,13-4,T)         R= +10.6  p =  1.4e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7b523f0d
length= 4 gigabytes (2^32 bytes), time= 72.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x7b523f0d
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.364s
user	1m41.456s
sys	0m2.644s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x83cbdd88
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x83cbdd88
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x83cbdd88
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x83cbdd88
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.5  p =1-3.4e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x83cbdd88
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x83cbdd88
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x83cbdd88
length= 4 gigabytes (2^32 bytes), time= 74.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +4.6  p =  1.8e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x83cbdd88
length= 8 gigabytes (2^33 bytes), time= 153 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x83cbdd88
length= 16 gigabytes (2^34 bytes), time= 308 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x83cbdd88
length= 32 gigabytes (2^35 bytes), time= 611 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x83cbdd88
length= 52.000 gigabytes (2^35.700 bytes), time= 1001 seconds
  no anomalies in 184 test result(s)


real	16m41.987s
user	16m17.876s
sys	0m21.812s
*/
