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
/// @created on 2020-03-31 16:41:18 CEST                              //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 7edfd57f-446e-4756-a5e3-3c2da400bc2d                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_3lin.h"

using TRnd = Rnd3Lin;
/* TEST00
time ./MRndCPP 14 
1538594075
4076344096
4165135192
528260248
2130858886
3554783987
3141980644
4074251411
3083997111
1560914653
1866237571787912629

real	2m2.671s
user	2m2.446s
sys	0m0.034s
*/
/* TEST00
time ./MRndCPP 14 
1538594075
4076344096
4165135192
528260248
2130858886
3554783987
3141980644
4074251411
3083997111
1560914653
1866237571787912629

real	2m6.168s
user	2m5.865s
sys	0m0.053s
*/
/* TEST00
time ./MRndCPP 14 
1538594075
4076344096
4165135192
528260248
2130858886
3554783987
3141980644
4074251411
3083997111
1560914653
1866237571787912629

real	2m8.475s
user	2m7.987s
sys	0m0.037s
*/
/* TEST00
time ./MRndCPP 14 
1538594075
4076344096
4165135192
528260248
2130858886
3554783987
3141980644
4074251411
3083997111
1560914653
1866237571787912629

real	2m5.852s
user	2m5.774s
sys	0m0.061s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.14e+07  | 267557064|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.78216319|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.21071957|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.76918479|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.31543277|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.62588327|  PASSED  
        diehard_opso|   0|   2097152|     100|0.22815167|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.08421695|  PASSED  
         diehard_dna|   0|   2097152|     100|0.60567793|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.99505741|   WEAK   
diehard_count_1s_byt|   0|    256000|     100|0.07780480|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.19536922|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.73706946|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.64568805|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.51379833|  PASSED  
        diehard_sums|   0|       100|     100|0.00272277|   WEAK   
        diehard_runs|   0|    100000|     100|0.44052693|  PASSED  
        diehard_runs|   0|    100000|     100|0.68348185|  PASSED  
       diehard_craps|   0|    200000|     100|0.33206132|  PASSED  
       diehard_craps|   0|    200000|     100|0.26625970|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.46233066|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.15044877|  PASSED  
         sts_monobit|   1|    100000|     100|0.45563392|  PASSED  
            sts_runs|   2|    100000|     100|0.59896288|  PASSED  
          sts_serial|   1|    100000|     100|0.56668378|  PASSED  
          sts_serial|   2|    100000|     100|0.71053646|  PASSED  
          sts_serial|   3|    100000|     100|0.99941334|   WEAK   
          sts_serial|   3|    100000|     100|0.80405953|  PASSED  
          sts_serial|   4|    100000|     100|0.76344044|  PASSED  
          sts_serial|   4|    100000|     100|0.99569942|   WEAK   
          sts_serial|   5|    100000|     100|0.65899372|  PASSED  
          sts_serial|   5|    100000|     100|0.21832467|  PASSED  
          sts_serial|   6|    100000|     100|0.65981067|  PASSED  
          sts_serial|   6|    100000|     100|0.97620513|  PASSED  
          sts_serial|   7|    100000|     100|0.60469444|  PASSED  
          sts_serial|   7|    100000|     100|0.84938006|  PASSED  
          sts_serial|   8|    100000|     100|0.43245214|  PASSED  
          sts_serial|   8|    100000|     100|0.96065935|  PASSED  
          sts_serial|   9|    100000|     100|0.93621659|  PASSED  
          sts_serial|   9|    100000|     100|0.60786186|  PASSED  
          sts_serial|  10|    100000|     100|0.46573190|  PASSED  
          sts_serial|  10|    100000|     100|0.21629203|  PASSED  
          sts_serial|  11|    100000|     100|0.42289872|  PASSED  
          sts_serial|  11|    100000|     100|0.91715187|  PASSED  
          sts_serial|  12|    100000|     100|0.23085082|  PASSED  
          sts_serial|  12|    100000|     100|0.08575811|  PASSED  
          sts_serial|  13|    100000|     100|0.49652461|  PASSED  
          sts_serial|  13|    100000|     100|0.20093409|  PASSED  
          sts_serial|  14|    100000|     100|0.85446109|  PASSED  
          sts_serial|  14|    100000|     100|0.37494105|  PASSED  
          sts_serial|  15|    100000|     100|0.97066369|  PASSED  
          sts_serial|  15|    100000|     100|0.20008869|  PASSED  
          sts_serial|  16|    100000|     100|0.46362217|  PASSED  
          sts_serial|  16|    100000|     100|0.74235998|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.37207079|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.46139484|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.66853335|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.86310721|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.36265322|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.77027314|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.38836134|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.48824831|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.84413981|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.44191252|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.99009580|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.69654766|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.92106957|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.58679347|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.54769102|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.94000615|  PASSED  
    rgb_permutations|   2|    100000|     100|0.85164136|  PASSED  
    rgb_permutations|   3|    100000|     100|0.51699549|  PASSED  
    rgb_permutations|   4|    100000|     100|0.46706547|  PASSED  
    rgb_permutations|   5|    100000|     100|0.47496935|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.90932524|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.60202666|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.86470853|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.45571309|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.44682586|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.60931231|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.02475126|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.53618931|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.11683589|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.46145258|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.70856217|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.10076777|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.07586128|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.68369082|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.51321051|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.72299283|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.97403416|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.19122117|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.23640056|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.27276427|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.30979867|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.70672809|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.40969909|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.63457546|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.99260469|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.63160725|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.43650294|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.51462505|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.05476200|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.83572069|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.54065935|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.07361068|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.50527360|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.00151184|   WEAK   
     dab_bytedistrib|   0|  51200000|       1|0.90820076|  PASSED  
             dab_dct| 256|     50000|       1|0.30514859|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.58853638|  PASSED  
        dab_filltree|  32|  15000000|       1|0.43773338|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.72177694|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.34686834|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.91748058|  PASSED  

real	121m3.439s
user	107m50.070s
sys	13m2.435s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.08e+07  | 751528747|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.40745149|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.94902196|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.93465251|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.49800820|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.21538191|  PASSED  
        diehard_opso|   0|   2097152|     100|0.78817564|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.92594890|  PASSED  
         diehard_dna|   0|   2097152|     100|0.88068247|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.33156901|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.82076838|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.70447638|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.83350452|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.14018223|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.98758142|  PASSED  
        diehard_sums|   0|       100|     100|0.23688867|  PASSED  
        diehard_runs|   0|    100000|     100|0.72753716|  PASSED  
        diehard_runs|   0|    100000|     100|0.23589338|  PASSED  
       diehard_craps|   0|    200000|     100|0.94030939|  PASSED  
       diehard_craps|   0|    200000|     100|0.17879475|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.63667054|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.72352918|  PASSED  
         sts_monobit|   1|    100000|     100|0.42016828|  PASSED  
            sts_runs|   2|    100000|     100|0.44191701|  PASSED  
          sts_serial|   1|    100000|     100|0.31919064|  PASSED  
          sts_serial|   2|    100000|     100|0.13481324|  PASSED  
          sts_serial|   3|    100000|     100|0.54597056|  PASSED  
          sts_serial|   3|    100000|     100|0.32322223|  PASSED  
          sts_serial|   4|    100000|     100|0.31513180|  PASSED  
          sts_serial|   4|    100000|     100|0.98417349|  PASSED  
          sts_serial|   5|    100000|     100|0.57246112|  PASSED  
          sts_serial|   5|    100000|     100|0.05805073|  PASSED  
          sts_serial|   6|    100000|     100|0.77962894|  PASSED  
          sts_serial|   6|    100000|     100|0.74368973|  PASSED  
          sts_serial|   7|    100000|     100|0.36842337|  PASSED  
          sts_serial|   7|    100000|     100|0.53658537|  PASSED  
          sts_serial|   8|    100000|     100|0.90383008|  PASSED  
          sts_serial|   8|    100000|     100|0.59957823|  PASSED  
          sts_serial|   9|    100000|     100|0.10261575|  PASSED  
          sts_serial|   9|    100000|     100|0.31591631|  PASSED  
          sts_serial|  10|    100000|     100|0.26337096|  PASSED  
          sts_serial|  10|    100000|     100|0.04656126|  PASSED  
          sts_serial|  11|    100000|     100|0.29987991|  PASSED  
          sts_serial|  11|    100000|     100|0.86219065|  PASSED  
          sts_serial|  12|    100000|     100|0.37694906|  PASSED  
          sts_serial|  12|    100000|     100|0.99266820|  PASSED  
          sts_serial|  13|    100000|     100|0.65443094|  PASSED  
          sts_serial|  13|    100000|     100|0.93786162|  PASSED  
          sts_serial|  14|    100000|     100|0.09790959|  PASSED  
          sts_serial|  14|    100000|     100|0.56771536|  PASSED  
          sts_serial|  15|    100000|     100|0.04686739|  PASSED  
          sts_serial|  15|    100000|     100|0.26305495|  PASSED  
          sts_serial|  16|    100000|     100|0.83328931|  PASSED  
          sts_serial|  16|    100000|     100|0.71794799|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.59060166|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.34996426|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.18245412|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.89847120|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.39513070|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.64719119|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.22428138|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.99914060|   WEAK   
         rgb_bitdist|   9|    100000|     100|0.40283921|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.45129935|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.22854993|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.45592527|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.27125566|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.17557081|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.08289778|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.48351407|  PASSED  
    rgb_permutations|   2|    100000|     100|0.19187814|  PASSED  
    rgb_permutations|   3|    100000|     100|0.04887155|  PASSED  
    rgb_permutations|   4|    100000|     100|0.40455771|  PASSED  
    rgb_permutations|   5|    100000|     100|0.47280263|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.52355017|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.75457161|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.70444945|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.08161959|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.54604765|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.53275965|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.63216891|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.93528336|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.93490622|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.75870813|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.91890128|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.35879588|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.70132966|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.10895769|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.27360914|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.76746077|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.92758116|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.17083487|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.38683306|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.03561026|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.58349076|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.49057677|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.71893301|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.34675060|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.44667102|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.95380918|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.63074391|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.10774614|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.61071833|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.74840177|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.50800268|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.02614465|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.87338104|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.90121535|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.82460300|  PASSED  
             dab_dct| 256|     50000|       1|0.31935893|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.00502292|  PASSED  
        dab_filltree|  32|  15000000|       1|0.13445604|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.78679160|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.95087703|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.43563890|  PASSED  

real	121m14.431s
user	108m0.470s
sys	13m3.629s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.16e+07  |2570078164|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.99270727|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.49899035|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.93546444|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.13055652|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.13286379|  PASSED  
        diehard_opso|   0|   2097152|     100|0.92830574|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.58712079|  PASSED  
         diehard_dna|   0|   2097152|     100|0.62477855|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.94665554|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.88400639|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.51803658|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.08075211|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.77138575|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.31246113|  PASSED  
        diehard_sums|   0|       100|     100|0.13238867|  PASSED  
        diehard_runs|   0|    100000|     100|0.15542997|  PASSED  
        diehard_runs|   0|    100000|     100|0.62479798|  PASSED  
       diehard_craps|   0|    200000|     100|0.58715210|  PASSED  
       diehard_craps|   0|    200000|     100|0.21591712|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.84980329|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.95437777|  PASSED  
         sts_monobit|   1|    100000|     100|0.67319031|  PASSED  
            sts_runs|   2|    100000|     100|0.11190555|  PASSED  
          sts_serial|   1|    100000|     100|0.61067983|  PASSED  
          sts_serial|   2|    100000|     100|0.89804164|  PASSED  
          sts_serial|   3|    100000|     100|0.99666687|   WEAK   
          sts_serial|   3|    100000|     100|0.89511545|  PASSED  
          sts_serial|   4|    100000|     100|0.21600956|  PASSED  
          sts_serial|   4|    100000|     100|0.22814059|  PASSED  
          sts_serial|   5|    100000|     100|0.72721195|  PASSED  
          sts_serial|   5|    100000|     100|0.95677851|  PASSED  
          sts_serial|   6|    100000|     100|0.74829064|  PASSED  
          sts_serial|   6|    100000|     100|0.35074543|  PASSED  
          sts_serial|   7|    100000|     100|0.79823817|  PASSED  
          sts_serial|   7|    100000|     100|0.81609363|  PASSED  
          sts_serial|   8|    100000|     100|0.92911407|  PASSED  
          sts_serial|   8|    100000|     100|0.78199562|  PASSED  
          sts_serial|   9|    100000|     100|0.44480665|  PASSED  
          sts_serial|   9|    100000|     100|0.50599719|  PASSED  
          sts_serial|  10|    100000|     100|0.87484174|  PASSED  
          sts_serial|  10|    100000|     100|0.66742587|  PASSED  
          sts_serial|  11|    100000|     100|0.54428195|  PASSED  
          sts_serial|  11|    100000|     100|0.60613811|  PASSED  
          sts_serial|  12|    100000|     100|0.57101839|  PASSED  
          sts_serial|  12|    100000|     100|0.49768476|  PASSED  
          sts_serial|  13|    100000|     100|0.23809197|  PASSED  
          sts_serial|  13|    100000|     100|0.67522502|  PASSED  
          sts_serial|  14|    100000|     100|0.45717683|  PASSED  
          sts_serial|  14|    100000|     100|0.77955185|  PASSED  
          sts_serial|  15|    100000|     100|0.07222827|  PASSED  
          sts_serial|  15|    100000|     100|0.99790145|   WEAK   
          sts_serial|  16|    100000|     100|0.83434127|  PASSED  
          sts_serial|  16|    100000|     100|0.13597754|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.93289181|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.63899666|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.96755092|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.99135308|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.91406535|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.21010687|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.51715219|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.07332832|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.25588531|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.38875707|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.91092296|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.82816722|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.83772099|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.83392566|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.62095571|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.84388592|  PASSED  
    rgb_permutations|   2|    100000|     100|0.58725063|  PASSED  
    rgb_permutations|   3|    100000|     100|0.17859165|  PASSED  
    rgb_permutations|   4|    100000|     100|0.82814166|  PASSED  
    rgb_permutations|   5|    100000|     100|0.34289054|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.18294611|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.90620656|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.89316239|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.80375767|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.36916518|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.55371680|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.52840218|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.56413029|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.47886642|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.53488706|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.44022624|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.52382583|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.83448241|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.92462738|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.41873351|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.49244205|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.07897932|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.52557956|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.72123775|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.57925847|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.16360429|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.65054222|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.93534417|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.41169924|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.44781663|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.52643963|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.63302581|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.87605419|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.93327016|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.22456009|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.20282176|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.97808241|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.65836006|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.48188044|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.86750285|  PASSED  
             dab_dct| 256|     50000|       1|0.86482546|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.39155974|  PASSED  
        dab_filltree|  32|  15000000|       1|0.41278076|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.54850957|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.96330081|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.31711162|  PASSED  

real	121m36.462s
user	108m24.146s
sys	13m2.335s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  8.82e+06  |3127950631|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.21151394|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.93809927|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.70559597|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.61480430|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.25337758|  PASSED  
        diehard_opso|   0|   2097152|     100|0.52664959|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.72126489|  PASSED  
         diehard_dna|   0|   2097152|     100|0.85226299|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.82098545|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.88714146|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.28041223|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.99893151|   WEAK   
    diehard_3dsphere|   3|      4000|     100|0.92414343|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.93180852|  PASSED  
        diehard_sums|   0|       100|     100|0.00242053|   WEAK   
        diehard_runs|   0|    100000|     100|0.90947093|  PASSED  
        diehard_runs|   0|    100000|     100|0.02651862|  PASSED  
       diehard_craps|   0|    200000|     100|0.70157406|  PASSED  
       diehard_craps|   0|    200000|     100|0.83649077|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.57934686|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.97218904|  PASSED  
         sts_monobit|   1|    100000|     100|0.01565182|  PASSED  
            sts_runs|   2|    100000|     100|0.19232532|  PASSED  
          sts_serial|   1|    100000|     100|0.71681113|  PASSED  
          sts_serial|   2|    100000|     100|0.78584342|  PASSED  
          sts_serial|   3|    100000|     100|0.65194852|  PASSED  
          sts_serial|   3|    100000|     100|0.42413675|  PASSED  
          sts_serial|   4|    100000|     100|0.37263793|  PASSED  
          sts_serial|   4|    100000|     100|0.41978504|  PASSED  
          sts_serial|   5|    100000|     100|0.01929302|  PASSED  
          sts_serial|   5|    100000|     100|0.02333727|  PASSED  
          sts_serial|   6|    100000|     100|0.08970882|  PASSED  
          sts_serial|   6|    100000|     100|0.89642930|  PASSED  
          sts_serial|   7|    100000|     100|0.47276109|  PASSED  
          sts_serial|   7|    100000|     100|0.64994772|  PASSED  
          sts_serial|   8|    100000|     100|0.15754907|  PASSED  
          sts_serial|   8|    100000|     100|0.53022746|  PASSED  
          sts_serial|   9|    100000|     100|0.99758784|   WEAK   
          sts_serial|   9|    100000|     100|0.31667142|  PASSED  
          sts_serial|  10|    100000|     100|0.70137784|  PASSED  
          sts_serial|  10|    100000|     100|0.85058610|  PASSED  
          sts_serial|  11|    100000|     100|0.72420323|  PASSED  
          sts_serial|  11|    100000|     100|0.70107078|  PASSED  
          sts_serial|  12|    100000|     100|0.96092136|  PASSED  
          sts_serial|  12|    100000|     100|0.91922898|  PASSED  
          sts_serial|  13|    100000|     100|0.64885917|  PASSED  
          sts_serial|  13|    100000|     100|0.47017439|  PASSED  
          sts_serial|  14|    100000|     100|0.08985624|  PASSED  
          sts_serial|  14|    100000|     100|0.24198700|  PASSED  
          sts_serial|  15|    100000|     100|0.03994380|  PASSED  
          sts_serial|  15|    100000|     100|0.57831274|  PASSED  
          sts_serial|  16|    100000|     100|0.09787865|  PASSED  
          sts_serial|  16|    100000|     100|0.35845604|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.97699100|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.82844685|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.42652483|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.26024510|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.84714383|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.58211326|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.58491093|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.99819265|   WEAK   
         rgb_bitdist|   9|    100000|     100|0.83363607|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.05214718|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.73666302|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.16290856|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.93662455|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.75314694|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.31467047|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.67903809|  PASSED  
    rgb_permutations|   2|    100000|     100|0.50266493|  PASSED  
    rgb_permutations|   3|    100000|     100|0.98976870|  PASSED  
    rgb_permutations|   4|    100000|     100|0.57243868|  PASSED  
    rgb_permutations|   5|    100000|     100|0.32007071|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.92123415|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.74111799|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.84694023|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.10959854|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.99973565|   WEAK   
      rgb_lagged_sum|   5|   1000000|     100|0.10865744|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.10395269|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.39664624|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.04815583|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.72624022|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.87494030|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.47081446|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.93205157|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.12549159|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.90892285|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.49270767|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.15141307|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.00419905|   WEAK   
      rgb_lagged_sum|  18|   1000000|     100|0.97052889|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.92514739|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.39495324|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.20789525|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.73218376|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.44309096|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.74141964|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.23118925|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.22571144|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.04219428|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.12630913|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.98303766|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.05134031|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.76360129|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.58808860|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.74636307|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.47053121|  PASSED  
             dab_dct| 256|     50000|       1|0.25865416|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.42799434|  PASSED  
        dab_filltree|  32|  15000000|       1|0.12828098|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.34460976|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.81211348|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.71407324|  PASSED  

real	121m39.629s
user	108m20.211s
sys	13m7.265s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xed739759
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xed739759
length= 16 megabytes (2^24 bytes), time= 2.2 seconds
  no anomalies in 119 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 32 megabytes (2^25 bytes), time= 4.9 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 64 megabytes (2^26 bytes), time= 8.6 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 128 megabytes (2^27 bytes), time= 13.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 256 megabytes (2^28 bytes), time= 21.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 512 megabytes (2^29 bytes), time= 35.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 1 gigabyte (2^30 bytes), time= 62.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:cross        R=  +4.9  p =  1.8e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xed739759
length= 2 gigabytes (2^31 bytes), time= 113 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 4 gigabytes (2^32 bytes), time= 212 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 8 gigabytes (2^33 bytes), time= 410 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 16 gigabytes (2^34 bytes), time= 808 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 32 gigabytes (2^35 bytes), time= 1601 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 64 gigabytes (2^36 bytes), time= 3229 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xed739759
length= 71.500 gigabytes (2^36.160 bytes), time= 3603 seconds
  no anomalies in 247 test result(s)


real	60m5.632s
user	58m31.015s
sys	1m26.195s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7f56369a
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7f56369a
length= 32 megabytes (2^25 bytes), time= 2.6 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x7f56369a
length= 64 megabytes (2^26 bytes), time= 6.1 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x7f56369a
length= 128 megabytes (2^27 bytes), time= 11.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7f56369a
length= 256 megabytes (2^28 bytes), time= 19.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7f56369a
length= 512 megabytes (2^29 bytes), time= 33.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7f56369a
length= 1 gigabyte (2^30 bytes), time= 60.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x7f56369a
length= 2 gigabytes (2^31 bytes), time= 112 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.9  p =  1.7e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x7f56369a
length= 4 gigabytes (2^32 bytes), time= 208 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x7f56369a
length= 8 gigabytes (2^33 bytes), time= 406 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x7f56369a
length= 16 gigabytes (2^34 bytes), time= 801 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x7f56369a
length= 32 gigabytes (2^35 bytes), time= 1584 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x7f56369a
length= 64 gigabytes (2^36 bytes), time= 3206 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x7f56369a
length= 72.000 gigabytes (2^36.170 bytes), time= 3606 seconds
  no anomalies in 247 test result(s)


real	60m7.649s
user	58m29.706s
sys	1m27.697s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd620e552
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd620e552
length= 32 megabytes (2^25 bytes), time= 2.5 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0xd620e552
length= 64 megabytes (2^26 bytes), time= 6.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xd620e552
length= 128 megabytes (2^27 bytes), time= 11.4 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd620e552
length= 256 megabytes (2^28 bytes), time= 19.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xd620e552
length= 512 megabytes (2^29 bytes), time= 33.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xd620e552
length= 1 gigabyte (2^30 bytes), time= 59.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:B                  R=  -4.3  p =1-1.3e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xd620e552
length= 2 gigabytes (2^31 bytes), time= 112 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd620e552
length= 4 gigabytes (2^32 bytes), time= 208 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xd620e552
length= 8 gigabytes (2^33 bytes), time= 405 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xd620e552
length= 16 gigabytes (2^34 bytes), time= 800 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xd620e552
length= 32 gigabytes (2^35 bytes), time= 1590 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xd620e552
length= 64 gigabytes (2^36 bytes), time= 3212 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xd620e552
length= 71.750 gigabytes (2^36.165 bytes), time= 3600 seconds
  no anomalies in 247 test result(s)


real	60m2.928s
user	58m25.352s
sys	1m27.326s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x79e936e1
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x79e936e1
length= 32 megabytes (2^25 bytes), time= 3.0 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x79e936e1
length= 64 megabytes (2^26 bytes), time= 6.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:B                  R=  -4.8  p =1-3.0e-4   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x79e936e1
length= 128 megabytes (2^27 bytes), time= 11.4 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x79e936e1
length= 256 megabytes (2^28 bytes), time= 19.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x79e936e1
length= 512 megabytes (2^29 bytes), time= 34.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-3,T)         R=  +8.0  p =  1.4e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x79e936e1
length= 1 gigabyte (2^30 bytes), time= 60.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x79e936e1
length= 2 gigabytes (2^31 bytes), time= 112 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x79e936e1
length= 4 gigabytes (2^32 bytes), time= 209 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.3  p =  7.0e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x79e936e1
length= 8 gigabytes (2^33 bytes), time= 408 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x79e936e1
length= 16 gigabytes (2^34 bytes), time= 802 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.6  p =  4.3e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x79e936e1
length= 32 gigabytes (2^35 bytes), time= 1596 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x79e936e1
length= 64 gigabytes (2^36 bytes), time= 3219 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x79e936e1
length= 71.750 gigabytes (2^36.165 bytes), time= 3601 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.1  p =1-8.6e-3   unusual          
  ...and 246 test result(s) without anomalies


real	60m2.896s
user	58m26.772s
sys	1m27.162s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa5f61079
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa5f61079
length= 64 megabytes (2^26 bytes), time= 3.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-6,T)         R=  +9.0  p =  1.6e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xa5f61079
length= 128 megabytes (2^27 bytes), time= 7.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xa5f61079
length= 256 megabytes (2^28 bytes), time= 16.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xa5f61079
length= 512 megabytes (2^29 bytes), time= 29.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa5f61079
length= 1 gigabyte (2^30 bytes), time= 56.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xa5f61079
length= 2 gigabytes (2^31 bytes), time= 108 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xa5f61079
length= 4 gigabytes (2^32 bytes), time= 213 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +7.5  p =  1.6e-3   unusual          
  [Low1/8]DC6-9x1Bytes-1            R=  -3.9  p =1-7.3e-3   unusual          
  ...and 201 test result(s) without anomalies

rng=RNG_stdin, seed=0xa5f61079
length= 8 gigabytes (2^33 bytes), time= 416 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xa5f61079
length= 16 gigabytes (2^34 bytes), time= 826 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xa5f61079
length= 32 gigabytes (2^35 bytes), time= 1622 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xa5f61079
length= 64 gigabytes (2^36 bytes), time= 3290 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xa5f61079
length= 70.500 gigabytes (2^36.140 bytes), time= 3610 seconds
  no anomalies in 247 test result(s)


real	60m12.836s
user	58m27.745s
sys	1m26.725s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7a10c5be
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7a10c5be
length= 64 megabytes (2^26 bytes), time= 3.1 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x7a10c5be
length= 128 megabytes (2^27 bytes), time= 8.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +5.7  p =  5.1e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x7a10c5be
length= 256 megabytes (2^28 bytes), time= 16.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7a10c5be
length= 512 megabytes (2^29 bytes), time= 30.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7a10c5be
length= 1 gigabyte (2^30 bytes), time= 56.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x7a10c5be
length= 2 gigabytes (2^31 bytes), time= 109 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x7a10c5be
length= 4 gigabytes (2^32 bytes), time= 212 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x7a10c5be
length= 8 gigabytes (2^33 bytes), time= 414 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x7a10c5be
length= 16 gigabytes (2^34 bytes), time= 817 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x7a10c5be
length= 32 gigabytes (2^35 bytes), time= 1610 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x7a10c5be
length= 64 gigabytes (2^36 bytes), time= 3262 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x7a10c5be
length= 71.000 gigabytes (2^36.150 bytes), time= 3606 seconds
  no anomalies in 247 test result(s)


real	60m7.826s
user	58m26.999s
sys	1m24.600s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7eb7794d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7eb7794d
length= 64 megabytes (2^26 bytes), time= 3.1 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x7eb7794d
length= 128 megabytes (2^27 bytes), time= 8.0 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7eb7794d
length= 256 megabytes (2^28 bytes), time= 16.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7eb7794d
length= 512 megabytes (2^29 bytes), time= 30.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7eb7794d
length= 1 gigabyte (2^30 bytes), time= 57.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x7eb7794d
length= 2 gigabytes (2^31 bytes), time= 109 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x7eb7794d
length= 4 gigabytes (2^32 bytes), time= 211 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x7eb7794d
length= 8 gigabytes (2^33 bytes), time= 415 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:B                 R=  +5.6  p =  1.0e-4   mildly suspicious
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x7eb7794d
length= 16 gigabytes (2^34 bytes), time= 825 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:B                 R=  +4.1  p =  2.2e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x7eb7794d
length= 32 gigabytes (2^35 bytes), time= 1622 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x7eb7794d
length= 64 gigabytes (2^36 bytes), time= 3286 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x7eb7794d
length= 70.500 gigabytes (2^36.140 bytes), time= 3604 seconds
  no anomalies in 247 test result(s)


real	60m6.708s
user	58m23.373s
sys	1m25.209s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe44d983b
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe44d983b
length= 64 megabytes (2^26 bytes), time= 3.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xe44d983b
length= 128 megabytes (2^27 bytes), time= 9.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe44d983b
length= 256 megabytes (2^28 bytes), time= 17.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xe44d983b
length= 512 megabytes (2^29 bytes), time= 31.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.9  p =1-1.6e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xe44d983b
length= 1 gigabyte (2^30 bytes), time= 58.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+0,13-3,T)         R=  -6.6  p =1-1.5e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xe44d983b
length= 2 gigabytes (2^31 bytes), time= 111 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe44d983b
length= 4 gigabytes (2^32 bytes), time= 214 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xe44d983b
length= 8 gigabytes (2^33 bytes), time= 417 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xe44d983b
length= 16 gigabytes (2^34 bytes), time= 825 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xe44d983b
length= 32 gigabytes (2^35 bytes), time= 1610 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xe44d983b
length= 64 gigabytes (2^36 bytes), time= 3259 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xe44d983b
length= 71.250 gigabytes (2^36.155 bytes), time= 3604 seconds
  no anomalies in 247 test result(s)


real	60m5.478s
user	58m19.418s
sys	1m27.318s
*/
/* TEST00
time ./MRndCPP 14 
1538594075
4076344096
4165135192
528260248
2130858886
3554783987
3141980644
4074251411
3083997111
1560914653
1866237571787912629

real	1m56.626s
user	1m56.373s
sys	0m0.068s
*/
/* TEST00
time ./MRndCPP 14 
1538594075
4076344096
4165135192
528260248
2130858886
3554783987
3141980644
4074251411
3083997111
1560914653
1866237571787912629

real	2m3.125s
user	2m2.680s
sys	0m0.069s
*/
/* TEST00
time ./MRndCPP 14 
1538594075
4076344096
4165135192
528260248
2130858886
3554783987
3141980644
4074251411
3083997111
1560914653
1866237571787912629

real	2m6.606s
user	2m6.515s
sys	0m0.054s
*/
/* TEST00
time ./MRndCPP 14 
1538594075
4076344096
4165135192
528260248
2130858886
3554783987
3141980644
4074251411
3083997111
1560914653
1866237571787912629

real	2m8.134s
user	2m7.284s
sys	0m0.117s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.17e+07  |3204781572|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.71449886|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.77011338|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.82285552|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.16637906|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.63628175|  PASSED  
        diehard_opso|   0|   2097152|     100|0.09334905|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.39232105|  PASSED  
         diehard_dna|   0|   2097152|     100|0.32419957|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.53370498|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.55758332|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.72624287|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.36683244|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.12959349|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.19548626|  PASSED  
        diehard_sums|   0|       100|     100|0.00526021|  PASSED  
        diehard_runs|   0|    100000|     100|0.89444686|  PASSED  
        diehard_runs|   0|    100000|     100|0.25469344|  PASSED  
       diehard_craps|   0|    200000|     100|0.18792237|  PASSED  
       diehard_craps|   0|    200000|     100|0.71950748|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.08130207|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.52328907|  PASSED  
         sts_monobit|   1|    100000|     100|0.22836248|  PASSED  
            sts_runs|   2|    100000|     100|0.60827362|  PASSED  
          sts_serial|   1|    100000|     100|0.71828331|  PASSED  
          sts_serial|   2|    100000|     100|0.91381652|  PASSED  
          sts_serial|   3|    100000|     100|0.41883718|  PASSED  
          sts_serial|   3|    100000|     100|0.59357315|  PASSED  
          sts_serial|   4|    100000|     100|0.48698266|  PASSED  
          sts_serial|   4|    100000|     100|0.23140433|  PASSED  
          sts_serial|   5|    100000|     100|0.46631268|  PASSED  
          sts_serial|   5|    100000|     100|0.58798226|  PASSED  
          sts_serial|   6|    100000|     100|0.56447285|  PASSED  
          sts_serial|   6|    100000|     100|0.47377326|  PASSED  
          sts_serial|   7|    100000|     100|0.00109915|   WEAK   
          sts_serial|   7|    100000|     100|0.00096120|   WEAK   
          sts_serial|   8|    100000|     100|0.15644406|  PASSED  
          sts_serial|   8|    100000|     100|0.15421875|  PASSED  
          sts_serial|   9|    100000|     100|0.82069530|  PASSED  
          sts_serial|   9|    100000|     100|0.06023044|  PASSED  
          sts_serial|  10|    100000|     100|0.85338519|  PASSED  
          sts_serial|  10|    100000|     100|0.67193653|  PASSED  
          sts_serial|  11|    100000|     100|0.70596790|  PASSED  
          sts_serial|  11|    100000|     100|0.50136705|  PASSED  
          sts_serial|  12|    100000|     100|0.76707971|  PASSED  
          sts_serial|  12|    100000|     100|0.82201387|  PASSED  
          sts_serial|  13|    100000|     100|0.35266762|  PASSED  
          sts_serial|  13|    100000|     100|0.66043054|  PASSED  
          sts_serial|  14|    100000|     100|0.68881026|  PASSED  
          sts_serial|  14|    100000|     100|0.92980256|  PASSED  
          sts_serial|  15|    100000|     100|0.20621279|  PASSED  
          sts_serial|  15|    100000|     100|0.20316468|  PASSED  
          sts_serial|  16|    100000|     100|0.79726545|  PASSED  
          sts_serial|  16|    100000|     100|0.28105927|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.18930711|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.86842449|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.06140778|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.83589217|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.59080720|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.85008673|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.86262937|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.51639118|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.95045395|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.10684150|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.63811839|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.67964692|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.36261691|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.24522455|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.38360511|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.24120499|  PASSED  
    rgb_permutations|   2|    100000|     100|0.10559916|  PASSED  
    rgb_permutations|   3|    100000|     100|0.20619682|  PASSED  
    rgb_permutations|   4|    100000|     100|0.17876314|  PASSED  
    rgb_permutations|   5|    100000|     100|0.58800956|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.94829736|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.83622741|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.71663334|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.99710091|   WEAK   
      rgb_lagged_sum|   4|   1000000|     100|0.11025956|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.39073186|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.17038893|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.99100960|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.98385635|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.33111416|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.96841333|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.12228821|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.77685502|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.91429269|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.96433628|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.80296126|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.88808161|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.60733007|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.61394027|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.89545692|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.49201081|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.02887535|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.99860267|   WEAK   
      rgb_lagged_sum|  23|   1000000|     100|0.10868195|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.48252697|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.66160953|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.43196664|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.04745670|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.16150991|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.75759724|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.44270696|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.65100154|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.08348630|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.33075983|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.19912502|  PASSED  
             dab_dct| 256|     50000|       1|0.95784723|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.57909440|  PASSED  
        dab_filltree|  32|  15000000|       1|0.07286680|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.41315031|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.45990787|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.40163766|  PASSED  

real	124m25.765s
user	110m34.217s
sys	13m29.983s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.05e+07  |1970297748|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.99304254|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.43778572|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.68642902|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.40366171|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.97675824|  PASSED  
        diehard_opso|   0|   2097152|     100|0.49301094|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.92628521|  PASSED  
         diehard_dna|   0|   2097152|     100|0.95104195|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.25048355|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.49836125|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.92858575|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.90527222|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.95982679|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.77021467|  PASSED  
        diehard_sums|   0|       100|     100|0.41504104|  PASSED  
        diehard_runs|   0|    100000|     100|0.53879393|  PASSED  
        diehard_runs|   0|    100000|     100|0.30176827|  PASSED  
       diehard_craps|   0|    200000|     100|0.97022452|  PASSED  
       diehard_craps|   0|    200000|     100|0.20832334|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.47981706|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.78365652|  PASSED  
         sts_monobit|   1|    100000|     100|0.65107308|  PASSED  
            sts_runs|   2|    100000|     100|0.98876107|  PASSED  
          sts_serial|   1|    100000|     100|0.33810460|  PASSED  
          sts_serial|   2|    100000|     100|0.68872029|  PASSED  
          sts_serial|   3|    100000|     100|0.04116870|  PASSED  
          sts_serial|   3|    100000|     100|0.08947761|  PASSED  
          sts_serial|   4|    100000|     100|0.17315835|  PASSED  
          sts_serial|   4|    100000|     100|0.97820122|  PASSED  
          sts_serial|   5|    100000|     100|0.56121512|  PASSED  
          sts_serial|   5|    100000|     100|0.72962309|  PASSED  
          sts_serial|   6|    100000|     100|0.79342502|  PASSED  
          sts_serial|   6|    100000|     100|0.10789959|  PASSED  
          sts_serial|   7|    100000|     100|0.98466329|  PASSED  
          sts_serial|   7|    100000|     100|0.69642269|  PASSED  
          sts_serial|   8|    100000|     100|0.27244149|  PASSED  
          sts_serial|   8|    100000|     100|0.23780950|  PASSED  
          sts_serial|   9|    100000|     100|0.76525095|  PASSED  
          sts_serial|   9|    100000|     100|0.68410416|  PASSED  
          sts_serial|  10|    100000|     100|0.96868618|  PASSED  
          sts_serial|  10|    100000|     100|0.63172534|  PASSED  
          sts_serial|  11|    100000|     100|0.98027893|  PASSED  
          sts_serial|  11|    100000|     100|0.95012848|  PASSED  
          sts_serial|  12|    100000|     100|0.46785632|  PASSED  
          sts_serial|  12|    100000|     100|0.11566746|  PASSED  
          sts_serial|  13|    100000|     100|0.24665378|  PASSED  
          sts_serial|  13|    100000|     100|0.41237811|  PASSED  
          sts_serial|  14|    100000|     100|0.54329256|  PASSED  
          sts_serial|  14|    100000|     100|0.17214504|  PASSED  
          sts_serial|  15|    100000|     100|0.36074439|  PASSED  
          sts_serial|  15|    100000|     100|0.97169067|  PASSED  
          sts_serial|  16|    100000|     100|0.73464544|  PASSED  
          sts_serial|  16|    100000|     100|0.64414491|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.41651586|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.99367496|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.06481792|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.17815412|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.60998593|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.62790394|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.99148058|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.72738699|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.31814468|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.05055251|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.50225256|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.62935791|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.98572075|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.32246189|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.20121565|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.59538772|  PASSED  
    rgb_permutations|   2|    100000|     100|0.56312009|  PASSED  
    rgb_permutations|   3|    100000|     100|0.95935654|  PASSED  
    rgb_permutations|   4|    100000|     100|0.82036190|  PASSED  
    rgb_permutations|   5|    100000|     100|0.46564819|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.63025334|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.11844613|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.99949662|   WEAK   
      rgb_lagged_sum|   3|   1000000|     100|0.67475231|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.98628393|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.34331687|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.47664515|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.91873541|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.59794944|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.68725559|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.94164276|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.28741244|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.27452632|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.62143849|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.83165942|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.41968620|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.13193116|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.19031651|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.98382710|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.88674737|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.99466364|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.24957882|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.43787624|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.01202575|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.88207597|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.82351649|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.91752616|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.20938613|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.94192210|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.42211819|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.46017697|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.97547017|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.55590391|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.32360974|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.32677263|  PASSED  
             dab_dct| 256|     50000|       1|0.16383064|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.71091106|  PASSED  
        dab_filltree|  32|  15000000|       1|0.36336230|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.06114593|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.72127370|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.96520157|  PASSED  

real	124m58.451s
user	110m56.052s
sys	13m37.608s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.13e+07  | 240142947|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.25185300|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.73029239|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.56712679|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.96809467|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.30599213|  PASSED  
        diehard_opso|   0|   2097152|     100|0.45451855|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.95317683|  PASSED  
         diehard_dna|   0|   2097152|     100|0.31520371|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.98704024|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.89198004|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.23503704|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.85011854|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.70368011|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.73281321|  PASSED  
        diehard_sums|   0|       100|     100|0.04067600|  PASSED  
        diehard_runs|   0|    100000|     100|0.16800928|  PASSED  
        diehard_runs|   0|    100000|     100|0.83506091|  PASSED  
       diehard_craps|   0|    200000|     100|0.76968585|  PASSED  
       diehard_craps|   0|    200000|     100|0.12492283|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.64074440|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.84458082|  PASSED  
         sts_monobit|   1|    100000|     100|0.08899924|  PASSED  
            sts_runs|   2|    100000|     100|0.99850880|   WEAK   
          sts_serial|   1|    100000|     100|0.75746588|  PASSED  
          sts_serial|   2|    100000|     100|0.84876018|  PASSED  
          sts_serial|   3|    100000|     100|0.98738883|  PASSED  
          sts_serial|   3|    100000|     100|0.78189058|  PASSED  
          sts_serial|   4|    100000|     100|0.35721514|  PASSED  
          sts_serial|   4|    100000|     100|0.62769219|  PASSED  
          sts_serial|   5|    100000|     100|0.50506253|  PASSED  
          sts_serial|   5|    100000|     100|0.74556262|  PASSED  
          sts_serial|   6|    100000|     100|0.94884074|  PASSED  
          sts_serial|   6|    100000|     100|0.50294382|  PASSED  
          sts_serial|   7|    100000|     100|0.82263497|  PASSED  
          sts_serial|   7|    100000|     100|0.33188815|  PASSED  
          sts_serial|   8|    100000|     100|0.98823860|  PASSED  
          sts_serial|   8|    100000|     100|0.88908075|  PASSED  
          sts_serial|   9|    100000|     100|0.46653620|  PASSED  
          sts_serial|   9|    100000|     100|0.74083444|  PASSED  
          sts_serial|  10|    100000|     100|0.94794655|  PASSED  
          sts_serial|  10|    100000|     100|0.16711469|  PASSED  
          sts_serial|  11|    100000|     100|0.66884754|  PASSED  
          sts_serial|  11|    100000|     100|0.29396502|  PASSED  
          sts_serial|  12|    100000|     100|0.75193330|  PASSED  
          sts_serial|  12|    100000|     100|0.91791135|  PASSED  
          sts_serial|  13|    100000|     100|0.98842504|  PASSED  
          sts_serial|  13|    100000|     100|0.90551012|  PASSED  
          sts_serial|  14|    100000|     100|0.48394708|  PASSED  
          sts_serial|  14|    100000|     100|0.03509106|  PASSED  
          sts_serial|  15|    100000|     100|0.03632532|  PASSED  
          sts_serial|  15|    100000|     100|0.23445824|  PASSED  
          sts_serial|  16|    100000|     100|0.23201347|  PASSED  
          sts_serial|  16|    100000|     100|0.36687938|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.18859685|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.92870957|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.95930232|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.72741826|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.25715750|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.45338874|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.32395521|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.96030957|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.08862513|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.71008623|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.43700409|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.91989320|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.26407680|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.12435937|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.03490434|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.24739419|  PASSED  
    rgb_permutations|   2|    100000|     100|0.95991507|  PASSED  
    rgb_permutations|   3|    100000|     100|0.94721557|  PASSED  
    rgb_permutations|   4|    100000|     100|0.59554286|  PASSED  
    rgb_permutations|   5|    100000|     100|0.39810732|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.75925142|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.99976307|   WEAK   
      rgb_lagged_sum|   2|   1000000|     100|0.89320025|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.31057511|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.38691013|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.95217964|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.60518165|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.73670507|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.12662518|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.19644376|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.56643913|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.89970548|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.80031135|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.97376531|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.64526629|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.85716677|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.29259570|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.79457159|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.95282349|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.57377756|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.81311323|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.75262951|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.56913438|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.85483774|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.23835555|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.82316583|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.56461217|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.95406744|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.52116684|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.19859216|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.17287497|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.99841081|   WEAK   
      rgb_lagged_sum|  32|   1000000|     100|0.68426827|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.57852667|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.61107761|  PASSED  
             dab_dct| 256|     50000|       1|0.89779897|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.00008962|   WEAK   
        dab_filltree|  32|  15000000|       1|0.70702166|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.73316867|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.47762264|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.52124923|  PASSED  

real	124m42.818s
user	110m52.079s
sys	13m27.419s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  9.22e+06  |1462933792|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.60857497|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.84172539|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.68679248|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.35376079|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.26477181|  PASSED  
        diehard_opso|   0|   2097152|     100|0.24791918|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.80372622|  PASSED  
         diehard_dna|   0|   2097152|     100|0.14278012|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.09951051|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.67423894|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.77490362|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.18873110|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.39073974|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.10645392|  PASSED  
        diehard_sums|   0|       100|     100|0.01937542|  PASSED  
        diehard_runs|   0|    100000|     100|0.40895895|  PASSED  
        diehard_runs|   0|    100000|     100|0.93620671|  PASSED  
       diehard_craps|   0|    200000|     100|0.40921112|  PASSED  
       diehard_craps|   0|    200000|     100|0.54889075|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.66287197|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.46977123|  PASSED  
         sts_monobit|   1|    100000|     100|0.29455197|  PASSED  
            sts_runs|   2|    100000|     100|0.74382100|  PASSED  
          sts_serial|   1|    100000|     100|0.37998786|  PASSED  
          sts_serial|   2|    100000|     100|0.07782624|  PASSED  
          sts_serial|   3|    100000|     100|0.17699545|  PASSED  
          sts_serial|   3|    100000|     100|0.49473542|  PASSED  
          sts_serial|   4|    100000|     100|0.12757744|  PASSED  
          sts_serial|   4|    100000|     100|0.96905760|  PASSED  
          sts_serial|   5|    100000|     100|0.10694747|  PASSED  
          sts_serial|   5|    100000|     100|0.78151445|  PASSED  
          sts_serial|   6|    100000|     100|0.00321646|   WEAK   
          sts_serial|   6|    100000|     100|0.16173742|  PASSED  
          sts_serial|   7|    100000|     100|0.15367210|  PASSED  
          sts_serial|   7|    100000|     100|0.19878013|  PASSED  
          sts_serial|   8|    100000|     100|0.19767470|  PASSED  
          sts_serial|   8|    100000|     100|0.84247736|  PASSED  
          sts_serial|   9|    100000|     100|0.16676136|  PASSED  
          sts_serial|   9|    100000|     100|0.55591249|  PASSED  
          sts_serial|  10|    100000|     100|0.20182570|  PASSED  
          sts_serial|  10|    100000|     100|0.68181251|  PASSED  
          sts_serial|  11|    100000|     100|0.67693259|  PASSED  
          sts_serial|  11|    100000|     100|0.90148484|  PASSED  
          sts_serial|  12|    100000|     100|0.91521776|  PASSED  
          sts_serial|  12|    100000|     100|0.87501317|  PASSED  
          sts_serial|  13|    100000|     100|0.21363259|  PASSED  
          sts_serial|  13|    100000|     100|0.61385675|  PASSED  
          sts_serial|  14|    100000|     100|0.41277550|  PASSED  
          sts_serial|  14|    100000|     100|0.85618267|  PASSED  
          sts_serial|  15|    100000|     100|0.55701439|  PASSED  
          sts_serial|  15|    100000|     100|0.46295578|  PASSED  
          sts_serial|  16|    100000|     100|0.91452497|  PASSED  
          sts_serial|  16|    100000|     100|0.73699403|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.55617799|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.98464678|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.60022078|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.98502798|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.56287066|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.25831910|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.82223488|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.89863048|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.32238205|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.23252904|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.69385668|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.49206976|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.78480938|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.96827635|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.83914685|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.32132731|  PASSED  
    rgb_permutations|   2|    100000|     100|0.54406945|  PASSED  
    rgb_permutations|   3|    100000|     100|0.25545170|  PASSED  
    rgb_permutations|   4|    100000|     100|0.67238868|  PASSED  
    rgb_permutations|   5|    100000|     100|0.05838064|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.88052959|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.77956701|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.91980554|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.26537717|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.24388663|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.91151522|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.87616007|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.83577653|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.54380567|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.19259268|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.49273203|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.50490138|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.73284647|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.01273706|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.95967802|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.69617360|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.29390779|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.79108009|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.41741376|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.75251469|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.72377026|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.60687791|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.83942318|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.98563201|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.42650162|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.91097694|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.37187010|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.94257678|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.68020789|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.73049105|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.92131966|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.01808850|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.04193320|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.65624378|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.15315906|  PASSED  
             dab_dct| 256|     50000|       1|0.20864268|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.42478695|  PASSED  
        dab_filltree|  32|  15000000|       1|0.29751165|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.90359148|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.02096039|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.90872909|  PASSED  

real	124m59.466s
user	111m8.330s
sys	13m28.445s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 360000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa00545d7
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa00545d7
length= 32 megabytes (2^25 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +4.7  p =  2.2e-3   unusual          
  ...and 129 test result(s) without anomalies

rng=RNG_stdin, seed=0xa00545d7
length= 64 megabytes (2^26 bytes), time= 6.1 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xa00545d7
length= 128 megabytes (2^27 bytes), time= 10.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xa00545d7
length= 256 megabytes (2^28 bytes), time= 18.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xa00545d7
length= 512 megabytes (2^29 bytes), time= 31.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa00545d7
length= 1 gigabyte (2^30 bytes), time= 59.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xa00545d7
length= 2 gigabytes (2^31 bytes), time= 110 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xa00545d7
length= 4 gigabytes (2^32 bytes), time= 208 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xa00545d7
length= 8 gigabytes (2^33 bytes), time= 410 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xa00545d7
length= 16 gigabytes (2^34 bytes), time= 808 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xa00545d7
length= 32 gigabytes (2^35 bytes), time= 1591 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-1,T)         R=  +8.2  p =  6.9e-4   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xa00545d7
length= 64 gigabytes (2^36 bytes), time= 3131 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xa00545d7
length= 74.250 gigabytes (2^36.214 bytes), time= 3604 seconds
  no anomalies in 251 test result(s)


real	60m6.421s
user	58m37.877s
sys	1m23.155s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 360000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xac3828f0
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xac3828f0
length= 32 megabytes (2^25 bytes), time= 2.8 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0xac3828f0
length= 64 megabytes (2^26 bytes), time= 6.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xac3828f0
length= 128 megabytes (2^27 bytes), time= 10.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xac3828f0
length= 256 megabytes (2^28 bytes), time= 18.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xac3828f0
length= 512 megabytes (2^29 bytes), time= 32.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xac3828f0
length= 1 gigabyte (2^30 bytes), time= 59.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xac3828f0
length= 2 gigabytes (2^31 bytes), time= 110 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xac3828f0
length= 4 gigabytes (2^32 bytes), time= 209 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xac3828f0
length= 8 gigabytes (2^33 bytes), time= 416 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xac3828f0
length= 16 gigabytes (2^34 bytes), time= 819 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  +4.5  p =  1.0e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0xac3828f0
length= 32 gigabytes (2^35 bytes), time= 1597 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xac3828f0
length= 64 gigabytes (2^36 bytes), time= 3144 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xac3828f0
length= 74.000 gigabytes (2^36.209 bytes), time= 3605 seconds
  no anomalies in 251 test result(s)


real	60m7.509s
user	58m35.042s
sys	1m24.536s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 360000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x6e551e4a
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x6e551e4a
length= 1 kilobyte (2^10 bytes), time= 2.4 seconds
  no anomalies in 3 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 2 kilobytes (2^11 bytes), time= 2.8 seconds
  no anomalies in 5 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 4 kilobytes (2^12 bytes), time= 3.1 seconds
  no anomalies in 10 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 8 kilobytes (2^13 bytes), time= 3.6 seconds
  no anomalies in 17 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 16 kilobytes (2^14 bytes), time= 4.9 seconds
  no anomalies in 22 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 32 kilobytes (2^15 bytes), time= 5.5 seconds
  no anomalies in 36 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 64 kilobytes (2^16 bytes), time= 7.2 seconds
  no anomalies in 44 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 128 kilobytes (2^17 bytes), time= 8.8 seconds
  no anomalies in 53 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 256 kilobytes (2^18 bytes), time= 10.5 seconds
  no anomalies in 58 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 512 kilobytes (2^19 bytes), time= 12.4 seconds
  no anomalies in 70 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 1 megabyte (2^20 bytes), time= 14.3 seconds
  no anomalies in 77 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 2 megabytes (2^21 bytes), time= 16.4 seconds
  no anomalies in 88 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 4 megabytes (2^22 bytes), time= 18.3 seconds
  no anomalies in 99 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 8 megabytes (2^23 bytes), time= 20.3 seconds
  no anomalies in 107 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 16 megabytes (2^24 bytes), time= 22.5 seconds
  no anomalies in 119 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 32 megabytes (2^25 bytes), time= 25.1 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 64 megabytes (2^26 bytes), time= 28.5 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 128 megabytes (2^27 bytes), time= 33.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 256 megabytes (2^28 bytes), time= 41.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 512 megabytes (2^29 bytes), time= 56.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 1 gigabyte (2^30 bytes), time= 81.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 2 gigabytes (2^31 bytes), time= 133 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 4 gigabytes (2^32 bytes), time= 230 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.2  p =  8.4e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x6e551e4a
length= 8 gigabytes (2^33 bytes), time= 435 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 16 gigabytes (2^34 bytes), time= 838 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 32 gigabytes (2^35 bytes), time= 1612 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 64 gigabytes (2^36 bytes), time= 3147 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x6e551e4a
length= 74.250 gigabytes (2^36.214 bytes), time= 3605 seconds
  no anomalies in 251 test result(s)


real	60m6.749s
user	58m35.917s
sys	1m25.750s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 360000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xbe1fe346
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xbe1fe346
length= 32 megabytes (2^25 bytes), time= 2.8 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0xbe1fe346
length= 64 megabytes (2^26 bytes), time= 6.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.7  p =  1.4e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xbe1fe346
length= 128 megabytes (2^27 bytes), time= 11.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xbe1fe346
length= 256 megabytes (2^28 bytes), time= 19.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xbe1fe346
length= 512 megabytes (2^29 bytes), time= 34.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  +8.8  p =  3.6e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xbe1fe346
length= 1 gigabyte (2^30 bytes), time= 60.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xbe1fe346
length= 2 gigabytes (2^31 bytes), time= 111 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xbe1fe346
length= 4 gigabytes (2^32 bytes), time= 207 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xbe1fe346
length= 8 gigabytes (2^33 bytes), time= 413 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xbe1fe346
length= 16 gigabytes (2^34 bytes), time= 815 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.2  p =1-9.2e-4   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0xbe1fe346
length= 32 gigabytes (2^35 bytes), time= 1589 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xbe1fe346
length= 64 gigabytes (2^36 bytes), time= 3130 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xbe1fe346
length= 74.500 gigabytes (2^36.219 bytes), time= 3600 seconds
  no anomalies in 251 test result(s)


real	60m0.612s
user	58m29.566s
sys	1m25.412s
*/
/* TEST00
time ./MRndCPP 14 
1538594075
4076344096
4165135192
528260248
2130858886
3554783987
3141980644
4074251411
3083997111
1560914653
1866237571787912629

real	1m3.083s
user	1m3.078s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 14 
1538594075
4076344096
4165135192
528260248
2130858886
3554783987
3141980644
4074251411
3083997111
1560914653
1866237571787912629

real	1m2.029s
user	1m1.990s
sys	0m0.037s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.34e+07  |1833094407|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.82135124|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.22567114|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.56318233|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.10966881|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.97411082|  PASSED  
        diehard_opso|   0|   2097152|     100|0.22885557|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.52636136|  PASSED  
         diehard_dna|   0|   2097152|     100|0.54065268|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.28020489|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.46220569|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.83992275|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.67782155|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.69229052|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.88478344|  PASSED  
        diehard_sums|   0|       100|     100|0.11783157|  PASSED  
        diehard_runs|   0|    100000|     100|0.93733445|  PASSED  
        diehard_runs|   0|    100000|     100|0.88780758|  PASSED  
       diehard_craps|   0|    200000|     100|0.73977378|  PASSED  
       diehard_craps|   0|    200000|     100|0.87584286|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.86498533|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.59037355|  PASSED  
         sts_monobit|   1|    100000|     100|0.26344819|  PASSED  
            sts_runs|   2|    100000|     100|0.29780957|  PASSED  
          sts_serial|   1|    100000|     100|0.01732847|  PASSED  
          sts_serial|   2|    100000|     100|0.13775998|  PASSED  
          sts_serial|   3|    100000|     100|0.25544527|  PASSED  
          sts_serial|   3|    100000|     100|0.82414067|  PASSED  
          sts_serial|   4|    100000|     100|0.83934472|  PASSED  
          sts_serial|   4|    100000|     100|0.92383724|  PASSED  
          sts_serial|   5|    100000|     100|0.83882125|  PASSED  
          sts_serial|   5|    100000|     100|0.67263568|  PASSED  
          sts_serial|   6|    100000|     100|0.29389928|  PASSED  
          sts_serial|   6|    100000|     100|0.30064505|  PASSED  
          sts_serial|   7|    100000|     100|0.72323186|  PASSED  
          sts_serial|   7|    100000|     100|0.59971846|  PASSED  
          sts_serial|   8|    100000|     100|0.88511477|  PASSED  
          sts_serial|   8|    100000|     100|0.53739953|  PASSED  
          sts_serial|   9|    100000|     100|0.71880241|  PASSED  
          sts_serial|   9|    100000|     100|0.11642580|  PASSED  
          sts_serial|  10|    100000|     100|0.98743309|  PASSED  
          sts_serial|  10|    100000|     100|0.51467444|  PASSED  
          sts_serial|  11|    100000|     100|0.54849172|  PASSED  
          sts_serial|  11|    100000|     100|0.93605099|  PASSED  
          sts_serial|  12|    100000|     100|0.79540822|  PASSED  
          sts_serial|  12|    100000|     100|0.97298191|  PASSED  
          sts_serial|  13|    100000|     100|0.86198058|  PASSED  
          sts_serial|  13|    100000|     100|0.90616451|  PASSED  
          sts_serial|  14|    100000|     100|0.80008970|  PASSED  
          sts_serial|  14|    100000|     100|0.73557533|  PASSED  
          sts_serial|  15|    100000|     100|0.71757426|  PASSED  
          sts_serial|  15|    100000|     100|0.86135464|  PASSED  
          sts_serial|  16|    100000|     100|0.71676838|  PASSED  
          sts_serial|  16|    100000|     100|0.95902152|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.58877329|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.99524226|   WEAK   
         rgb_bitdist|   3|    100000|     100|0.41069812|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.52564548|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.64489966|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.67464798|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.23591944|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.28437701|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.89758624|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.73463668|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.22688550|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.91647647|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.69196376|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.62068050|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.56373673|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.54810395|  PASSED  
    rgb_permutations|   2|    100000|     100|0.92856273|  PASSED  
    rgb_permutations|   3|    100000|     100|0.78163680|  PASSED  
    rgb_permutations|   4|    100000|     100|0.84193150|  PASSED  
    rgb_permutations|   5|    100000|     100|0.22832401|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.85926320|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.58238995|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.70494501|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.52718513|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.58993944|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.57336435|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.95548971|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.32258685|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.88668221|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.14583537|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.34665889|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.06188486|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.83642152|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.41053651|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.96467774|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.84546657|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.40419412|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.08173715|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.79869876|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.20158096|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.82066828|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.93039950|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.95597962|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.36930966|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.10917324|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.97992630|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.24147655|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.60461798|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.10249600|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.95934600|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.85767253|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.98668218|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.98806385|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.20157206|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.66081186|  PASSED  
             dab_dct| 256|     50000|       1|0.11131121|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.30595906|  PASSED  
        dab_filltree|  32|  15000000|       1|0.73769841|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.40043403|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.27359617|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.15213766|  PASSED  

real	73m11.129s
user	82m39.355s
sys	18m40.506s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.14e+07  | 242963135|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.76179344|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.59069379|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.88443072|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.64684816|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.00367143|   WEAK   
        diehard_opso|   0|   2097152|     100|0.91301645|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.69355744|  PASSED  
         diehard_dna|   0|   2097152|     100|0.41229846|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.77731092|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.94153495|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.54399718|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.89757841|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.40065780|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.99639185|   WEAK   
        diehard_sums|   0|       100|     100|0.03542655|  PASSED  
        diehard_runs|   0|    100000|     100|0.68017585|  PASSED  
        diehard_runs|   0|    100000|     100|0.11197681|  PASSED  
       diehard_craps|   0|    200000|     100|0.56977129|  PASSED  
       diehard_craps|   0|    200000|     100|0.81136833|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.86433444|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.04977013|  PASSED  
         sts_monobit|   1|    100000|     100|0.60089132|  PASSED  
            sts_runs|   2|    100000|     100|0.22161965|  PASSED  
          sts_serial|   1|    100000|     100|0.79975715|  PASSED  
          sts_serial|   2|    100000|     100|0.96012322|  PASSED  
          sts_serial|   3|    100000|     100|0.66666227|  PASSED  
          sts_serial|   3|    100000|     100|0.33419339|  PASSED  
          sts_serial|   4|    100000|     100|0.54183155|  PASSED  
          sts_serial|   4|    100000|     100|0.71420060|  PASSED  
          sts_serial|   5|    100000|     100|0.23139736|  PASSED  
          sts_serial|   5|    100000|     100|0.52935281|  PASSED  
          sts_serial|   6|    100000|     100|0.19792028|  PASSED  
          sts_serial|   6|    100000|     100|0.69496585|  PASSED  
          sts_serial|   7|    100000|     100|0.81224894|  PASSED  
          sts_serial|   7|    100000|     100|0.59792389|  PASSED  
          sts_serial|   8|    100000|     100|0.98192980|  PASSED  
          sts_serial|   8|    100000|     100|0.87403645|  PASSED  
          sts_serial|   9|    100000|     100|0.25457867|  PASSED  
          sts_serial|   9|    100000|     100|0.45108685|  PASSED  
          sts_serial|  10|    100000|     100|0.60713602|  PASSED  
          sts_serial|  10|    100000|     100|0.44445264|  PASSED  
          sts_serial|  11|    100000|     100|0.34870022|  PASSED  
          sts_serial|  11|    100000|     100|0.06489457|  PASSED  
          sts_serial|  12|    100000|     100|0.50036441|  PASSED  
          sts_serial|  12|    100000|     100|0.33845319|  PASSED  
          sts_serial|  13|    100000|     100|0.71625098|  PASSED  
          sts_serial|  13|    100000|     100|0.70898770|  PASSED  
          sts_serial|  14|    100000|     100|0.90850260|  PASSED  
          sts_serial|  14|    100000|     100|0.33730498|  PASSED  
          sts_serial|  15|    100000|     100|0.90524213|  PASSED  
          sts_serial|  15|    100000|     100|0.83658469|  PASSED  
          sts_serial|  16|    100000|     100|0.99780970|   WEAK   
          sts_serial|  16|    100000|     100|0.76576319|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.53622061|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.22711633|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.81785318|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.49106678|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.89084308|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.25581948|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.11209895|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.08208622|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.55759700|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.61871090|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.42874992|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.55332317|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.11768179|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.54152214|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.02072517|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.59497896|  PASSED  
    rgb_permutations|   2|    100000|     100|0.96476830|  PASSED  
    rgb_permutations|   3|    100000|     100|0.51313472|  PASSED  
    rgb_permutations|   4|    100000|     100|0.19032814|  PASSED  
    rgb_permutations|   5|    100000|     100|0.54983637|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.57879090|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.59875938|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.76303500|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.90707939|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.42316037|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.83461510|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.78613193|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.78412482|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.92337580|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.99754975|   WEAK   
      rgb_lagged_sum|  10|   1000000|     100|0.75219704|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.88232258|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.60873581|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.50610783|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.94503328|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.68971418|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.37792815|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.16592257|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.54881154|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.24768603|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.45098112|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.70675166|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.87593009|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.43795253|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.94756160|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.09194164|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.92851546|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.84790924|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.04845126|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.70351775|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.10415908|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.02409085|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.13637689|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.78524913|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.34561530|  PASSED  
             dab_dct| 256|     50000|       1|0.93676242|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.44615899|  PASSED  
        dab_filltree|  32|  15000000|       1|0.98472122|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.66874182|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.63051926|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.08020841|  PASSED  

real	73m16.646s
user	82m38.599s
sys	18m45.527s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 360000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x3d224e3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x3d224e3
length= 32 megabytes (2^25 bytes), time= 2.0 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 64 megabytes (2^26 bytes), time= 4.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 128 megabytes (2^27 bytes), time= 7.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 256 megabytes (2^28 bytes), time= 12.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 512 megabytes (2^29 bytes), time= 21.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 1 gigabyte (2^30 bytes), time= 37.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 2 gigabytes (2^31 bytes), time= 68.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 4 gigabytes (2^32 bytes), time= 128 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 8 gigabytes (2^33 bytes), time= 247 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 16 gigabytes (2^34 bytes), time= 485 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 32 gigabytes (2^35 bytes), time= 946 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 64 gigabytes (2^36 bytes), time= 1897 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 128 gigabytes (2^37 bytes), time= 3790 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.4  p =  5.9e-3   unusual          
  ...and 257 test result(s) without anomalies

rng=RNG_stdin, seed=0x3d224e3
length= 256 gigabytes (2^38 bytes), time= 7440 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 512 gigabytes (2^39 bytes), time= 14911 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 1 terabyte (2^40 bytes), time= 29316 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 2 terabytes (2^41 bytes), time= 59609 seconds
  no anomalies in 299 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 4 terabytes (2^42 bytes), time= 121966 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 8 terabytes (2^43 bytes), time= 241702 seconds
  no anomalies in 322 test result(s)

rng=RNG_stdin, seed=0x3d224e3
length= 11.786 terabytes (2^43.559 bytes), time= 360006 seconds
  no anomalies in 327 test result(s)


real	6000m7.809s
user	6002m10.926s
sys	310m43.441s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 360000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x1bbcbec
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x1bbcbec
length= 64 megabytes (2^26 bytes), time= 2.3 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 128 megabytes (2^27 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+2,13-5,T)         R=  -6.0  p =1-1.4e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x1bbcbec
length= 256 megabytes (2^28 bytes), time= 10.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 512 megabytes (2^29 bytes), time= 19.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 1 gigabyte (2^30 bytes), time= 35.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 2 gigabytes (2^31 bytes), time= 66.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 4 gigabytes (2^32 bytes), time= 125 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 8 gigabytes (2^33 bytes), time= 242 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 16 gigabytes (2^34 bytes), time= 477 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 32 gigabytes (2^35 bytes), time= 933 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 64 gigabytes (2^36 bytes), time= 1879 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 128 gigabytes (2^37 bytes), time= 3763 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 256 gigabytes (2^38 bytes), time= 7390 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 512 gigabytes (2^39 bytes), time= 14837 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 1 terabyte (2^40 bytes), time= 29182 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.0  p =1-8.3e-3   unusual          
  ...and 289 test result(s) without anomalies

rng=RNG_stdin, seed=0x1bbcbec
length= 2 terabytes (2^41 bytes), time= 59330 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+5,13-0,T)          R=  -8.2  p =1-2.8e-4   unusual          
  ...and 298 test result(s) without anomalies

rng=RNG_stdin, seed=0x1bbcbec
length= 4 terabytes (2^42 bytes), time= 121519 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0x1bbcbec
length= 8 terabytes (2^43 bytes), time= 240520 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-0,T)         R=  -9.3  p =1-6.1e-5   mildly suspicious
  ...and 321 test result(s) without anomalies

rng=RNG_stdin, seed=0x1bbcbec
length= 11.829 terabytes (2^43.564 bytes), time= 360002 seconds
  no anomalies in 327 test result(s)


real	6000m4.410s
user	6002m32.184s
sys	310m34.150s
*/
