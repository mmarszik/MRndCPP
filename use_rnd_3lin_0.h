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
