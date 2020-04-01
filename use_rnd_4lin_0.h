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
/// @created on 2020-03-24 13:30:14 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 2fcd0eed-5c70-4065-9c3a-edeae10818ef                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_4lin.h"

using TRnd = Rnd4Lin;
/* TEST00
time ./MRndCPP 14 
1722101999
1561632097
2254573130
2252925966
518303273
4013788417
3073641765
3898250374
815187329
272773071
5920288438006072892

real	9m44.603s
user	9m40.555s
sys	0m0.297s
*/
/* TEST00
time ./MRndCPP 14 
1722101999
1561632097
2254573130
2252925966
518303273
4013788417
3073641765
3898250374
815187329
272773071
5920288438006072892

real	9m48.763s
user	9m45.961s
sys	0m0.279s
*/
/* TEST00
time ./MRndCPP 14 
1722101999
1561632097
2254573130
2252925966
518303273
4013788417
3073641765
3898250374
815187329
272773071
5920288438006072892

real	9m53.707s
user	9m49.047s
sys	0m0.394s
*/
/* TEST00
time ./MRndCPP 14 
1722101999
1561632097
2254573130
2252925966
518303273
4013788417
3073641765
3898250374
815187329
272773071
5920288438006072892

real	9m54.326s
user	9m51.180s
sys	0m0.273s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  9.03e+06  |3780980218|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.27205943|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.89471152|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.28685752|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.25205545|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.99930196|   WEAK   
        diehard_opso|   0|   2097152|     100|0.39736888|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.21800040|  PASSED  
         diehard_dna|   0|   2097152|     100|0.80764514|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.61392495|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.32673583|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.45040839|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.89760193|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.07292304|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.70849804|  PASSED  
        diehard_sums|   0|       100|     100|0.09863312|  PASSED  
        diehard_runs|   0|    100000|     100|0.07939146|  PASSED  
        diehard_runs|   0|    100000|     100|0.01687771|  PASSED  
       diehard_craps|   0|    200000|     100|0.59417026|  PASSED  
       diehard_craps|   0|    200000|     100|0.50702289|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99529171|   WEAK   
 marsaglia_tsang_gcd|   0|  10000000|     100|0.23711710|  PASSED  
         sts_monobit|   1|    100000|     100|0.97443619|  PASSED  
            sts_runs|   2|    100000|     100|0.67452350|  PASSED  
          sts_serial|   1|    100000|     100|0.18633815|  PASSED  
          sts_serial|   2|    100000|     100|0.12366581|  PASSED  
          sts_serial|   3|    100000|     100|0.13048945|  PASSED  
          sts_serial|   3|    100000|     100|0.96135320|  PASSED  
          sts_serial|   4|    100000|     100|0.59861094|  PASSED  
          sts_serial|   4|    100000|     100|0.97691104|  PASSED  
          sts_serial|   5|    100000|     100|0.85266945|  PASSED  
          sts_serial|   5|    100000|     100|0.00965278|  PASSED  
          sts_serial|   6|    100000|     100|0.12946320|  PASSED  
          sts_serial|   6|    100000|     100|0.91645616|  PASSED  
          sts_serial|   7|    100000|     100|0.66889533|  PASSED  
          sts_serial|   7|    100000|     100|0.99593191|   WEAK   
          sts_serial|   8|    100000|     100|0.81709396|  PASSED  
          sts_serial|   8|    100000|     100|0.46788625|  PASSED  
          sts_serial|   9|    100000|     100|0.63141534|  PASSED  
          sts_serial|   9|    100000|     100|0.58045915|  PASSED  
          sts_serial|  10|    100000|     100|0.99229758|  PASSED  
          sts_serial|  10|    100000|     100|0.71212085|  PASSED  
          sts_serial|  11|    100000|     100|0.71135529|  PASSED  
          sts_serial|  11|    100000|     100|0.12597157|  PASSED  
          sts_serial|  12|    100000|     100|0.85123759|  PASSED  
          sts_serial|  12|    100000|     100|0.85770025|  PASSED  
          sts_serial|  13|    100000|     100|0.67798122|  PASSED  
          sts_serial|  13|    100000|     100|0.26748713|  PASSED  
          sts_serial|  14|    100000|     100|0.62694117|  PASSED  
          sts_serial|  14|    100000|     100|0.51941347|  PASSED  
          sts_serial|  15|    100000|     100|0.26554300|  PASSED  
          sts_serial|  15|    100000|     100|0.08669064|  PASSED  
          sts_serial|  16|    100000|     100|0.38774985|  PASSED  
          sts_serial|  16|    100000|     100|0.38841472|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.74490179|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.66196019|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.81172119|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.85419572|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.03786370|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.92741079|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.08513341|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.49593143|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.21562354|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.60656389|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.67688981|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.25278805|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.90222557|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.68317705|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.12718476|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.94142286|  PASSED  
    rgb_permutations|   2|    100000|     100|0.34638563|  PASSED  
    rgb_permutations|   3|    100000|     100|0.29927049|  PASSED  
    rgb_permutations|   4|    100000|     100|0.36195151|  PASSED  
    rgb_permutations|   5|    100000|     100|0.13176415|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.17417113|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.75114945|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.21159418|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.11164869|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.21333369|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.17317283|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.54945345|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.85296816|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.63136756|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.52563820|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.75212770|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.62112925|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.75474625|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.67362786|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.15591263|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.59132866|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.64352588|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.57993745|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.82111129|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.28956106|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.58914818|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.30313767|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.02389796|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.83149305|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.17230722|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.14407359|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.99638494|   WEAK   
      rgb_lagged_sum|  27|   1000000|     100|0.48024457|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.80893050|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.97317589|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.12073990|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.25927895|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.24630310|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.29891300|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.33310716|  PASSED  
             dab_dct| 256|     50000|       1|0.84289807|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.87486018|  PASSED  
        dab_filltree|  32|  15000000|       1|0.57391174|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.36702620|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.39104244|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.82612251|  PASSED  

real	152m50.382s
user	138m52.095s
sys	13m18.839s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  9.94e+06  |3054976714|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.89295837|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.28941619|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.97163842|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.61753363|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.33922139|  PASSED  
        diehard_opso|   0|   2097152|     100|0.18765153|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.41458914|  PASSED  
         diehard_dna|   0|   2097152|     100|0.58343010|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.81270557|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.78256549|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.35982598|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.69533467|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.48835720|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.57068411|  PASSED  
        diehard_sums|   0|       100|     100|0.06312411|  PASSED  
        diehard_runs|   0|    100000|     100|0.47287462|  PASSED  
        diehard_runs|   0|    100000|     100|0.01050942|  PASSED  
       diehard_craps|   0|    200000|     100|0.86084680|  PASSED  
       diehard_craps|   0|    200000|     100|0.03172134|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.11350517|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.48632578|  PASSED  
         sts_monobit|   1|    100000|     100|0.46494753|  PASSED  
            sts_runs|   2|    100000|     100|0.42217659|  PASSED  
          sts_serial|   1|    100000|     100|0.74794358|  PASSED  
          sts_serial|   2|    100000|     100|0.65415540|  PASSED  
          sts_serial|   3|    100000|     100|0.09952243|  PASSED  
          sts_serial|   3|    100000|     100|0.29637543|  PASSED  
          sts_serial|   4|    100000|     100|0.44416955|  PASSED  
          sts_serial|   4|    100000|     100|0.99891874|   WEAK   
          sts_serial|   5|    100000|     100|0.93411707|  PASSED  
          sts_serial|   5|    100000|     100|0.83917048|  PASSED  
          sts_serial|   6|    100000|     100|0.80274046|  PASSED  
          sts_serial|   6|    100000|     100|0.89854802|  PASSED  
          sts_serial|   7|    100000|     100|0.72422195|  PASSED  
          sts_serial|   7|    100000|     100|0.78499223|  PASSED  
          sts_serial|   8|    100000|     100|0.98665437|  PASSED  
          sts_serial|   8|    100000|     100|0.99970068|   WEAK   
          sts_serial|   9|    100000|     100|0.84930072|  PASSED  
          sts_serial|   9|    100000|     100|0.71552923|  PASSED  
          sts_serial|  10|    100000|     100|0.58002659|  PASSED  
          sts_serial|  10|    100000|     100|0.98653983|  PASSED  
          sts_serial|  11|    100000|     100|0.98534351|  PASSED  
          sts_serial|  11|    100000|     100|0.95970132|  PASSED  
          sts_serial|  12|    100000|     100|0.89612902|  PASSED  
          sts_serial|  12|    100000|     100|0.26565183|  PASSED  
          sts_serial|  13|    100000|     100|0.64394638|  PASSED  
          sts_serial|  13|    100000|     100|0.77682225|  PASSED  
          sts_serial|  14|    100000|     100|0.98033484|  PASSED  
          sts_serial|  14|    100000|     100|0.34731900|  PASSED  
          sts_serial|  15|    100000|     100|0.19335002|  PASSED  
          sts_serial|  15|    100000|     100|0.99316968|  PASSED  
          sts_serial|  16|    100000|     100|0.45255753|  PASSED  
          sts_serial|  16|    100000|     100|0.87506286|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.82576827|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.99586047|   WEAK   
         rgb_bitdist|   3|    100000|     100|0.19684423|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.85701315|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.37435055|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.68136648|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.95910621|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.79754223|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.85790882|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.82039709|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.12163864|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.60065643|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.45912560|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.72798165|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.33633064|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.04730114|  PASSED  
    rgb_permutations|   2|    100000|     100|0.85834468|  PASSED  
    rgb_permutations|   3|    100000|     100|0.53298504|  PASSED  
    rgb_permutations|   4|    100000|     100|0.11970157|  PASSED  
    rgb_permutations|   5|    100000|     100|0.99470086|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.89792393|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.49361506|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.93160894|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.26408049|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.41369589|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.99754805|   WEAK   
      rgb_lagged_sum|   6|   1000000|     100|0.81002382|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.85353073|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.12637795|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.13654945|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.71991448|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.10212177|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.83373939|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.98929452|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.89849760|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.07775458|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.74864482|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.07649457|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.32160786|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.78323574|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.82289569|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.27109698|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.30660202|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.27710281|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.63083333|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.74222441|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.35199939|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.85160314|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.59423628|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.56871453|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.98251681|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.10790452|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.63418119|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.53131469|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.88958388|  PASSED  
             dab_dct| 256|     50000|       1|0.48819428|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.37948338|  PASSED  
        dab_filltree|  32|  15000000|       1|0.20462829|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.68619690|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.40840771|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.77501694|  PASSED  

real	152m42.083s
user	138m43.715s
sys	13m19.980s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  9.65e+06  |3476737872|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.46312654|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.75050428|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.88568986|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.76521705|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.46666263|  PASSED  
        diehard_opso|   0|   2097152|     100|0.69476840|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.40371102|  PASSED  
         diehard_dna|   0|   2097152|     100|0.90927638|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.97854255|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.09442556|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.63965905|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.59828501|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.99108043|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.35401623|  PASSED  
        diehard_sums|   0|       100|     100|0.01029830|  PASSED  
        diehard_runs|   0|    100000|     100|0.31988199|  PASSED  
        diehard_runs|   0|    100000|     100|0.07928887|  PASSED  
       diehard_craps|   0|    200000|     100|0.80825222|  PASSED  
       diehard_craps|   0|    200000|     100|0.13104320|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.55059657|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.84373749|  PASSED  
         sts_monobit|   1|    100000|     100|0.00509981|  PASSED  
            sts_runs|   2|    100000|     100|0.89985333|  PASSED  
          sts_serial|   1|    100000|     100|0.98055125|  PASSED  
          sts_serial|   2|    100000|     100|0.69243905|  PASSED  
          sts_serial|   3|    100000|     100|0.78214374|  PASSED  
          sts_serial|   3|    100000|     100|0.31556291|  PASSED  
          sts_serial|   4|    100000|     100|0.11549393|  PASSED  
          sts_serial|   4|    100000|     100|0.03775574|  PASSED  
          sts_serial|   5|    100000|     100|0.00730701|  PASSED  
          sts_serial|   5|    100000|     100|0.04011395|  PASSED  
          sts_serial|   6|    100000|     100|0.19399479|  PASSED  
          sts_serial|   6|    100000|     100|0.76621952|  PASSED  
          sts_serial|   7|    100000|     100|0.89684803|  PASSED  
          sts_serial|   7|    100000|     100|0.18171739|  PASSED  
          sts_serial|   8|    100000|     100|0.82195771|  PASSED  
          sts_serial|   8|    100000|     100|0.26296266|  PASSED  
          sts_serial|   9|    100000|     100|0.99880812|   WEAK   
          sts_serial|   9|    100000|     100|0.40349388|  PASSED  
          sts_serial|  10|    100000|     100|0.78866584|  PASSED  
          sts_serial|  10|    100000|     100|0.95196185|  PASSED  
          sts_serial|  11|    100000|     100|0.08847429|  PASSED  
          sts_serial|  11|    100000|     100|0.12622142|  PASSED  
          sts_serial|  12|    100000|     100|0.23548310|  PASSED  
          sts_serial|  12|    100000|     100|0.26437676|  PASSED  
          sts_serial|  13|    100000|     100|0.28235047|  PASSED  
          sts_serial|  13|    100000|     100|0.69327997|  PASSED  
          sts_serial|  14|    100000|     100|0.29773801|  PASSED  
          sts_serial|  14|    100000|     100|0.89564517|  PASSED  
          sts_serial|  15|    100000|     100|0.57821745|  PASSED  
          sts_serial|  15|    100000|     100|0.99927460|   WEAK   
          sts_serial|  16|    100000|     100|0.56899095|  PASSED  
          sts_serial|  16|    100000|     100|0.61075488|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.45684603|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.88907875|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.84529016|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.24986840|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.61980587|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.64538595|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.69839867|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.14560692|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.46076895|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.99942422|   WEAK   
         rgb_bitdist|  11|    100000|     100|0.44130510|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.93260369|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.44679475|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.63958058|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.16251402|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.56116893|  PASSED  
    rgb_permutations|   2|    100000|     100|0.36682298|  PASSED  
    rgb_permutations|   3|    100000|     100|0.16402937|  PASSED  
    rgb_permutations|   4|    100000|     100|0.35070314|  PASSED  
    rgb_permutations|   5|    100000|     100|0.34474640|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.81240821|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.09441889|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.64792774|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.75558032|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.92351604|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.24855149|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.41215692|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.74792429|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.43057826|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.21788124|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.34847968|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.86920401|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.57332092|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.34783718|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.45552973|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.32341062|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.60820803|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.49573267|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.98494858|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.68796095|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.96959141|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.81219698|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.03885026|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.99736105|   WEAK   
      rgb_lagged_sum|  24|   1000000|     100|0.17159714|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.91043286|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.42819756|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.39623593|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.65051610|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.68292970|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.15701183|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.37547543|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.30362364|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.23142241|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.77406679|  PASSED  
             dab_dct| 256|     50000|       1|0.18253481|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.19665919|  PASSED  
        dab_filltree|  32|  15000000|       1|0.78722762|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.49449561|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.41617790|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.83636440|  PASSED  

real	152m59.078s
user	138m59.421s
sys	13m19.583s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  9.60e+06  |2984162497|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.32597880|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.00368062|   WEAK   
  diehard_rank_32x32|   0|     40000|     100|0.97403594|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.80960319|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.84018892|  PASSED  
        diehard_opso|   0|   2097152|     100|0.16742898|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.31106459|  PASSED  
         diehard_dna|   0|   2097152|     100|0.22265898|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.79425895|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.47316067|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.81757364|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.82862025|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.82491680|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.96526714|  PASSED  
        diehard_sums|   0|       100|     100|0.08707781|  PASSED  
        diehard_runs|   0|    100000|     100|0.77478753|  PASSED  
        diehard_runs|   0|    100000|     100|0.71492282|  PASSED  
       diehard_craps|   0|    200000|     100|0.95587439|  PASSED  
       diehard_craps|   0|    200000|     100|0.97326806|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.20629729|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.89015659|  PASSED  
         sts_monobit|   1|    100000|     100|0.88215235|  PASSED  
            sts_runs|   2|    100000|     100|0.24851446|  PASSED  
          sts_serial|   1|    100000|     100|0.72634581|  PASSED  
          sts_serial|   2|    100000|     100|0.57378450|  PASSED  
          sts_serial|   3|    100000|     100|0.19450221|  PASSED  
          sts_serial|   3|    100000|     100|0.38620089|  PASSED  
          sts_serial|   4|    100000|     100|0.02428891|  PASSED  
          sts_serial|   4|    100000|     100|0.44155434|  PASSED  
          sts_serial|   5|    100000|     100|0.78744675|  PASSED  
          sts_serial|   5|    100000|     100|0.74463651|  PASSED  
          sts_serial|   6|    100000|     100|0.89515984|  PASSED  
          sts_serial|   6|    100000|     100|0.31212798|  PASSED  
          sts_serial|   7|    100000|     100|0.94930439|  PASSED  
          sts_serial|   7|    100000|     100|0.80426238|  PASSED  
          sts_serial|   8|    100000|     100|0.69995123|  PASSED  
          sts_serial|   8|    100000|     100|0.90507961|  PASSED  
          sts_serial|   9|    100000|     100|0.76603214|  PASSED  
          sts_serial|   9|    100000|     100|0.42526275|  PASSED  
          sts_serial|  10|    100000|     100|0.90190310|  PASSED  
          sts_serial|  10|    100000|     100|0.72252231|  PASSED  
          sts_serial|  11|    100000|     100|0.83693060|  PASSED  
          sts_serial|  11|    100000|     100|0.75299771|  PASSED  
          sts_serial|  12|    100000|     100|0.54632185|  PASSED  
          sts_serial|  12|    100000|     100|0.45099903|  PASSED  
          sts_serial|  13|    100000|     100|0.60320654|  PASSED  
          sts_serial|  13|    100000|     100|0.57624289|  PASSED  
          sts_serial|  14|    100000|     100|0.84749014|  PASSED  
          sts_serial|  14|    100000|     100|0.44727987|  PASSED  
          sts_serial|  15|    100000|     100|0.78247558|  PASSED  
          sts_serial|  15|    100000|     100|0.90506448|  PASSED  
          sts_serial|  16|    100000|     100|0.31051086|  PASSED  
          sts_serial|  16|    100000|     100|0.04601935|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.98462776|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.53330203|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.47093927|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.21665915|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.56239896|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.69849489|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.02901722|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.76069433|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.48501830|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.13254817|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.85207323|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.18896959|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.13759869|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.48188755|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.36570275|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.08049628|  PASSED  
    rgb_permutations|   2|    100000|     100|0.77890550|  PASSED  
    rgb_permutations|   3|    100000|     100|0.51243241|  PASSED  
    rgb_permutations|   4|    100000|     100|0.99893266|   WEAK   
    rgb_permutations|   5|    100000|     100|0.85930397|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.24959631|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.22397080|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.14642124|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.54145038|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.51110181|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.99999993|  FAILED  
      rgb_lagged_sum|   6|   1000000|     100|0.83619745|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.84187339|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.21799408|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.96932044|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.56474534|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.93077159|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.99943196|   WEAK   
      rgb_lagged_sum|  13|   1000000|     100|0.00122047|   WEAK   
      rgb_lagged_sum|  14|   1000000|     100|0.83882952|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.39850035|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.50799194|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.96489756|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.86072916|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.08022268|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.88666359|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.99243777|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.26357533|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.34368507|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.45691762|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.90578717|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.84881717|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.99194846|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.58424028|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.24746449|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.67123600|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.25016320|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.74102192|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.19421279|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.65004393|  PASSED  
             dab_dct| 256|     50000|       1|0.48710976|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.27310710|  PASSED  
        dab_filltree|  32|  15000000|       1|0.52988943|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.97252313|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.40564408|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.91680125|  PASSED  

real	152m57.544s
user	138m58.562s
sys	13m19.660s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x88754172
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x88754172
length= 1 kilobyte (2^10 bytes), time= 2.1 seconds
  no anomalies in 3 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 2 kilobytes (2^11 bytes), time= 2.5 seconds
  no anomalies in 5 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 4 kilobytes (2^12 bytes), time= 2.8 seconds
  no anomalies in 10 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 8 kilobytes (2^13 bytes), time= 3.3 seconds
  no anomalies in 17 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 16 kilobytes (2^14 bytes), time= 4.6 seconds
  no anomalies in 22 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 32 kilobytes (2^15 bytes), time= 5.6 seconds
  no anomalies in 36 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 64 kilobytes (2^16 bytes), time= 7.4 seconds
  no anomalies in 44 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 128 kilobytes (2^17 bytes), time= 9.0 seconds
  no anomalies in 53 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 256 kilobytes (2^18 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]FPF-14+6/16:all           R=  -6.2  p =1-2.8e-4   unusual          
  ...and 57 test result(s) without anomalies

rng=RNG_stdin, seed=0x88754172
length= 512 kilobytes (2^19 bytes), time= 12.7 seconds
  no anomalies in 70 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 1 megabyte (2^20 bytes), time= 14.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:all          R=  -4.8  p =1-7.5e-4   unusual          
  ...and 76 test result(s) without anomalies

rng=RNG_stdin, seed=0x88754172
length= 2 megabytes (2^21 bytes), time= 17.1 seconds
  no anomalies in 88 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 4 megabytes (2^22 bytes), time= 19.0 seconds
  no anomalies in 99 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 8 megabytes (2^23 bytes), time= 21.1 seconds
  no anomalies in 107 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 16 megabytes (2^24 bytes), time= 23.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.9  p =1-7.6e-3   unusual          
  ...and 118 test result(s) without anomalies

rng=RNG_stdin, seed=0x88754172
length= 32 megabytes (2^25 bytes), time= 26.6 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 64 megabytes (2^26 bytes), time= 30.3 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 128 megabytes (2^27 bytes), time= 37.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:all          R=  +5.7  p =  7.8e-5   mildly suspicious
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x88754172
length= 256 megabytes (2^28 bytes), time= 46.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 512 megabytes (2^29 bytes), time= 63.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 1 gigabyte (2^30 bytes), time= 95.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 2 gigabytes (2^31 bytes), time= 158 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 4 gigabytes (2^32 bytes), time= 280 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 8 gigabytes (2^33 bytes), time= 529 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 16 gigabytes (2^34 bytes), time= 1009 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 32 gigabytes (2^35 bytes), time= 1946 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x88754172
length= 60.250 gigabytes (2^35.913 bytes), time= 3602 seconds
  no anomalies in 247 test result(s)


real	60m4.550s
user	57m57.312s
sys	1m53.080s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x3200767
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x3200767
length= 32 megabytes (2^25 bytes), time= 2.8 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x3200767
length= 64 megabytes (2^26 bytes), time= 6.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x3200767
length= 128 megabytes (2^27 bytes), time= 12.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+2,13-5,T)          R=  -6.0  p =1-1.4e-3   unusual          
  [Low1/8]FPF-14+6/16:all           R=  -5.0  p =1-1.9e-4   unusual          
  ...and 149 test result(s) without anomalies

rng=RNG_stdin, seed=0x3200767
length= 256 megabytes (2^28 bytes), time= 23.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x3200767
length= 512 megabytes (2^29 bytes), time= 39.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x3200767
length= 1 gigabyte (2^30 bytes), time= 71.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x3200767
length= 2 gigabytes (2^31 bytes), time= 133 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x3200767
length= 4 gigabytes (2^32 bytes), time= 254 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +5.7  p =  4.0e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x3200767
length= 8 gigabytes (2^33 bytes), time= 505 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x3200767
length= 16 gigabytes (2^34 bytes), time= 986 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x3200767
length= 32 gigabytes (2^35 bytes), time= 1917 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x3200767
length= 60.750 gigabytes (2^35.925 bytes), time= 3611 seconds
  no anomalies in 247 test result(s)


real	60m13.152s
user	58m7.355s
sys	1m52.397s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xc676297a
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xc676297a
length= 32 megabytes (2^25 bytes), time= 2.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.5  p =1-3.0e-3   unusual          
  ...and 129 test result(s) without anomalies

rng=RNG_stdin, seed=0xc676297a
length= 64 megabytes (2^26 bytes), time= 6.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.2  p =1-4.1e-3   unusual          
  [Low4/32]BCFN(2+1,13-5,T)         R=  -6.2  p =1-9.4e-4   unusual          
  ...and 137 test result(s) without anomalies

rng=RNG_stdin, seed=0xc676297a
length= 128 megabytes (2^27 bytes), time= 12.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xc676297a
length= 256 megabytes (2^28 bytes), time= 21.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xc676297a
length= 512 megabytes (2^29 bytes), time= 39.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xc676297a
length= 1 gigabyte (2^30 bytes), time= 70.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xc676297a
length= 2 gigabytes (2^31 bytes), time= 133 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xc676297a
length= 4 gigabytes (2^32 bytes), time= 255 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xc676297a
length= 8 gigabytes (2^33 bytes), time= 502 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.8  p =1-8.3e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0xc676297a
length= 16 gigabytes (2^34 bytes), time= 981 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xc676297a
length= 32 gigabytes (2^35 bytes), time= 1907 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xc676297a
length= 61.000 gigabytes (2^35.931 bytes), time= 3613 seconds
  no anomalies in 247 test result(s)


real	60m16.297s
user	58m11.560s
sys	1m51.307s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x40a6a49e
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x40a6a49e
length= 8 megabytes (2^23 bytes), time= 2.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.5  p =  7.9e-3   unusual          
  ...and 106 test result(s) without anomalies

rng=RNG_stdin, seed=0x40a6a49e
length= 16 megabytes (2^24 bytes), time= 4.6 seconds
  no anomalies in 119 test result(s)

rng=RNG_stdin, seed=0x40a6a49e
length= 32 megabytes (2^25 bytes), time= 7.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  1.3e-3   unusual          
  ...and 129 test result(s) without anomalies

rng=RNG_stdin, seed=0x40a6a49e
length= 64 megabytes (2^26 bytes), time= 11.5 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x40a6a49e
length= 128 megabytes (2^27 bytes), time= 17.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x40a6a49e
length= 256 megabytes (2^28 bytes), time= 27.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x40a6a49e
length= 512 megabytes (2^29 bytes), time= 43.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x40a6a49e
length= 1 gigabyte (2^30 bytes), time= 74.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x40a6a49e
length= 2 gigabytes (2^31 bytes), time= 137 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.8  p =  1.6e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x40a6a49e
length= 4 gigabytes (2^32 bytes), time= 258 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.7  p =  2.3e-4   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x40a6a49e
length= 8 gigabytes (2^33 bytes), time= 506 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x40a6a49e
length= 16 gigabytes (2^34 bytes), time= 982 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x40a6a49e
length= 32 gigabytes (2^35 bytes), time= 1913 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x40a6a49e
length= 60.750 gigabytes (2^35.925 bytes), time= 3602 seconds
  no anomalies in 247 test result(s)


real	60m4.721s
user	58m1.277s
sys	1m50.609s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xdef8e469
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xdef8e469
length= 32 megabytes (2^25 bytes), time= 2.1 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0xdef8e469
length= 64 megabytes (2^26 bytes), time= 6.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xdef8e469
length= 128 megabytes (2^27 bytes), time= 12.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+2,13-5,T)         R=  -6.5  p =1-4.8e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xdef8e469
length= 256 megabytes (2^28 bytes), time= 21.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xdef8e469
length= 512 megabytes (2^29 bytes), time= 36.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xdef8e469
length= 1 gigabyte (2^30 bytes), time= 67.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xdef8e469
length= 2 gigabytes (2^31 bytes), time= 128 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xdef8e469
length= 4 gigabytes (2^32 bytes), time= 242 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xdef8e469
length= 8 gigabytes (2^33 bytes), time= 471 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xdef8e469
length= 16 gigabytes (2^34 bytes), time= 940 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xdef8e469
length= 32 gigabytes (2^35 bytes), time= 1842 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xdef8e469
length= 62.500 gigabytes (2^35.966 bytes), time= 3602 seconds
  no anomalies in 247 test result(s)


real	60m5.536s
user	58m5.526s
sys	1m49.158s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe29b458
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe29b458
length= 64 megabytes (2^26 bytes), time= 3.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +5.7  p =  6.5e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xe29b458
length= 128 megabytes (2^27 bytes), time= 9.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe29b458
length= 256 megabytes (2^28 bytes), time= 18.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+1,13-4,T)          R=  +8.5  p =  1.2e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xe29b458
length= 512 megabytes (2^29 bytes), time= 33.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+1,13-3,T)          R=  +8.0  p =  1.4e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xe29b458
length= 1 gigabyte (2^30 bytes), time= 64.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe29b458
length= 2 gigabytes (2^31 bytes), time= 124 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe29b458
length= 4 gigabytes (2^32 bytes), time= 238 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xe29b458
length= 8 gigabytes (2^33 bytes), time= 470 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xe29b458
length= 16 gigabytes (2^34 bytes), time= 936 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xe29b458
length= 32 gigabytes (2^35 bytes), time= 1838 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xe29b458
length= 62.750 gigabytes (2^35.972 bytes), time= 3606 seconds
  no anomalies in 247 test result(s)


real	60m8.637s
user	58m7.000s
sys	1m51.621s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa1bfbaba
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa1bfbaba
length= 32 megabytes (2^25 bytes), time= 2.1 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.0  p =1-6.2e-3   unusual          
  [Low1/32]BCFN(2+2,13-8,T)         R= +10.1  p =  1.7e-3   unusual          
  ...and 128 test result(s) without anomalies

rng=RNG_stdin, seed=0xa1bfbaba
length= 64 megabytes (2^26 bytes), time= 5.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xa1bfbaba
length= 128 megabytes (2^27 bytes), time= 11.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xa1bfbaba
length= 256 megabytes (2^28 bytes), time= 20.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xa1bfbaba
length= 512 megabytes (2^29 bytes), time= 36.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa1bfbaba
length= 1 gigabyte (2^30 bytes), time= 68.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xa1bfbaba
length= 2 gigabytes (2^31 bytes), time= 127 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xa1bfbaba
length= 4 gigabytes (2^32 bytes), time= 242 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +3.9  p =  1.1e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0xa1bfbaba
length= 8 gigabytes (2^33 bytes), time= 472 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xa1bfbaba
length= 16 gigabytes (2^34 bytes), time= 936 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xa1bfbaba
length= 32 gigabytes (2^35 bytes), time= 1834 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xa1bfbaba
length= 63.000 gigabytes (2^35.977 bytes), time= 3605 seconds
  no anomalies in 247 test result(s)


real	60m6.041s
user	58m3.986s
sys	1m52.411s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x12f7c560
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x12f7c560
length= 32 megabytes (2^25 bytes), time= 2.1 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x12f7c560
length= 64 megabytes (2^26 bytes), time= 5.6 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x12f7c560
length= 128 megabytes (2^27 bytes), time= 10.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x12f7c560
length= 256 megabytes (2^28 bytes), time= 19.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x12f7c560
length= 512 megabytes (2^29 bytes), time= 35.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x12f7c560
length= 1 gigabyte (2^30 bytes), time= 66.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x12f7c560
length= 2 gigabytes (2^31 bytes), time= 126 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x12f7c560
length= 4 gigabytes (2^32 bytes), time= 239 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x12f7c560
length= 8 gigabytes (2^33 bytes), time= 470 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x12f7c560
length= 16 gigabytes (2^34 bytes), time= 934 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x12f7c560
length= 32 gigabytes (2^35 bytes), time= 1831 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x12f7c560
length= 63.000 gigabytes (2^35.977 bytes), time= 3605 seconds
  no anomalies in 247 test result(s)


real	60m5.881s
user	58m6.887s
sys	1m51.772s
*/
