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
/// @created on 2019-12-08 02:57:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8f4635a2-d7ca-4771-81ec-c2e4a2e59fab                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib1;
/* TEST00
time ./MRndCPP 
2772671560
1230292352
3182881147
2748660412
3615175996
2860307554
18446729734917588284

real	0m26.041s
user	0m25.960s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.25e+07  |2207854963|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.67779016|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.17106333|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.60948465|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.99915174|   WEAK   
   diehard_bitstream|   0|   2097152|     100|0.15089951|  PASSED  
        diehard_opso|   0|   2097152|     100|0.38922056|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.46149613|  PASSED  
         diehard_dna|   0|   2097152|     100|0.10903975|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.06561935|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.44860312|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.11827587|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.74698647|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.59036354|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.53448933|  PASSED  
        diehard_sums|   0|       100|     100|0.48937277|  PASSED  
        diehard_runs|   0|    100000|     100|0.76435144|  PASSED  
        diehard_runs|   0|    100000|     100|0.46734137|  PASSED  
       diehard_craps|   0|    200000|     100|0.15021201|  PASSED  
       diehard_craps|   0|    200000|     100|0.07048524|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.81618056|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.51952828|  PASSED  
         sts_monobit|   1|    100000|     100|0.85785213|  PASSED  
            sts_runs|   2|    100000|     100|0.13775488|  PASSED  
          sts_serial|   1|    100000|     100|0.27418695|  PASSED  
          sts_serial|   2|    100000|     100|0.17760768|  PASSED  
          sts_serial|   3|    100000|     100|0.11042530|  PASSED  
          sts_serial|   3|    100000|     100|0.59717900|  PASSED  
          sts_serial|   4|    100000|     100|0.75461050|  PASSED  
          sts_serial|   4|    100000|     100|0.19432644|  PASSED  
          sts_serial|   5|    100000|     100|0.80395019|  PASSED  
          sts_serial|   5|    100000|     100|0.57841169|  PASSED  
          sts_serial|   6|    100000|     100|0.50844186|  PASSED  
          sts_serial|   6|    100000|     100|0.90490389|  PASSED  
          sts_serial|   7|    100000|     100|0.26445932|  PASSED  
          sts_serial|   7|    100000|     100|0.43404296|  PASSED  
          sts_serial|   8|    100000|     100|0.99136474|  PASSED  
          sts_serial|   8|    100000|     100|0.43153197|  PASSED  
          sts_serial|   9|    100000|     100|0.51190859|  PASSED  
          sts_serial|   9|    100000|     100|0.39090310|  PASSED  
          sts_serial|  10|    100000|     100|0.63463920|  PASSED  
          sts_serial|  10|    100000|     100|0.72284138|  PASSED  
          sts_serial|  11|    100000|     100|0.05392562|  PASSED  
          sts_serial|  11|    100000|     100|0.19095038|  PASSED  
          sts_serial|  12|    100000|     100|0.10331740|  PASSED  
          sts_serial|  12|    100000|     100|0.38538057|  PASSED  
          sts_serial|  13|    100000|     100|0.23185032|  PASSED  
          sts_serial|  13|    100000|     100|0.88987600|  PASSED  
          sts_serial|  14|    100000|     100|0.00062917|   WEAK   
          sts_serial|  14|    100000|     100|0.12752720|  PASSED  
          sts_serial|  15|    100000|     100|0.06342376|  PASSED  
          sts_serial|  15|    100000|     100|0.10620761|  PASSED  
          sts_serial|  16|    100000|     100|0.09319669|  PASSED  
          sts_serial|  16|    100000|     100|0.98050764|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.06532302|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.07343212|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.86419347|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.98652420|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.45153579|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.18286096|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.81036750|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.18271661|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.25964127|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.80553587|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.72412211|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.76445050|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.10968362|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.03271034|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.96119192|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.97521445|  PASSED  
    rgb_permutations|   2|    100000|     100|0.38376517|  PASSED  
    rgb_permutations|   3|    100000|     100|0.63189832|  PASSED  
    rgb_permutations|   4|    100000|     100|0.89736131|  PASSED  
    rgb_permutations|   5|    100000|     100|0.17638123|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.64485019|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.84364120|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.58268328|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.97626252|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.79953429|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.91710055|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.48037385|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.31948449|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.39412681|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.20788307|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.99554456|   WEAK   
      rgb_lagged_sum|  11|   1000000|     100|0.79565977|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.35675811|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.21103519|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.84019821|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.86980145|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.24623290|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.50723077|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.93834763|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.86402108|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.44609887|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.89114764|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.56976535|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.99989450|   WEAK   
      rgb_lagged_sum|  24|   1000000|     100|0.38336014|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.95553291|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.41941332|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.80566205|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.96427951|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.77680664|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.86876265|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.99254729|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.21023543|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.63772506|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.00917396|  PASSED  
             dab_dct| 256|     50000|       1|0.15417498|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.18985436|  PASSED  
        dab_filltree|  32|  15000000|       1|0.68528906|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.90408494|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.59055477|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.37463049|  PASSED  

real	48m4.625s
user	44m18.628s
sys	3m37.688s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2507d922
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2507d922
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-5,T)         R= +13.9  p =  1.3e-5   suspicious       
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2507d922
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +18.6  p =  4.5e-8   very suspicious  
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2507d922
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R=  +8.2  p =  1.2e-3   unusual          
  [Low8/32]BCFN(2+2,13-3,T)         R= +22.1  p =  3.1e-10   VERY SUSPICIOUS 
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2507d922
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +17.6  p =  1.3e-8    VERY SUSPICIOUS 
  [Low8/32]BCFN(2+2,13-3,T)         R= +62.9  p =  1.4e-29    FAIL !!!       
  [Low8/32]BCFN(2+3,13-3,T)         R= +15.6  p =  3.5e-7   very suspicious  
  [Low1/32]BCFN(2+0,13-4,T)         R= +15.4  p =  1.1e-6   very suspicious  
  ...and 137 test result(s) without anomalies


real	0m19.917s
user	0m19.336s
sys	0m0.544s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdcb7215e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdcb7215e
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xdcb7215e
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +12.6  p =  1.9e-5   suspicious       
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdcb7215e
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +12.2  p =  1.4e-5   suspicious       
  [Low8/32]BCFN(2+2,13-3,T)         R= +22.9  p =  1.1e-10   VERY SUSPICIOUS 
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdcb7215e
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +20.0  p =  8.5e-10   VERY SUSPICIOUS 
  [Low8/32]BCFN(2+2,13-3,T)         R= +59.8  p =  4.1e-28    FAIL !!!       
  [Low8/32]BCFN(2+3,13-3,T)         R= +10.7  p =  7.3e-5   mildly suspicious
  [Low1/32]BCFN(2+0,13-4,T)         R= +11.7  p =  4.7e-5   mildly suspicious
  ...and 137 test result(s) without anomalies


real	0m19.804s
user	0m19.280s
sys	0m0.440s
*/
/* TEST00
time ./MRndCPP 
2772671560
1230292352
3182881147
2748660412
3615175996
2860307554
18446729734917588284

real	0m26.162s
user	0m25.960s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.25e+07  |1937828461|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.93655614|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.96062812|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.01502809|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.17564263|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.92717054|  PASSED  
        diehard_opso|   0|   2097152|     100|0.82775938|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.99749561|   WEAK   
         diehard_dna|   0|   2097152|     100|0.20748144|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.38264254|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.55368108|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.23503704|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.09944302|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.12245184|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.71168190|  PASSED  
        diehard_sums|   0|       100|     100|0.13145262|  PASSED  
        diehard_runs|   0|    100000|     100|0.52829711|  PASSED  
        diehard_runs|   0|    100000|     100|0.20722092|  PASSED  
       diehard_craps|   0|    200000|     100|0.44502015|  PASSED  
       diehard_craps|   0|    200000|     100|0.92452190|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.89275946|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.72948508|  PASSED  
         sts_monobit|   1|    100000|     100|0.35196655|  PASSED  
            sts_runs|   2|    100000|     100|0.86524023|  PASSED  
          sts_serial|   1|    100000|     100|0.24540200|  PASSED  
          sts_serial|   2|    100000|     100|0.21526481|  PASSED  
          sts_serial|   3|    100000|     100|0.04508157|  PASSED  
          sts_serial|   3|    100000|     100|0.03608860|  PASSED  
          sts_serial|   4|    100000|     100|0.04545689|  PASSED  
          sts_serial|   4|    100000|     100|0.32913213|  PASSED  
          sts_serial|   5|    100000|     100|0.53473648|  PASSED  
          sts_serial|   5|    100000|     100|0.91763382|  PASSED  
          sts_serial|   6|    100000|     100|0.72256506|  PASSED  
          sts_serial|   6|    100000|     100|0.87361375|  PASSED  
          sts_serial|   7|    100000|     100|0.64808484|  PASSED  
          sts_serial|   7|    100000|     100|0.30036984|  PASSED  
          sts_serial|   8|    100000|     100|0.41356524|  PASSED  
          sts_serial|   8|    100000|     100|0.53777929|  PASSED  
          sts_serial|   9|    100000|     100|0.73178054|  PASSED  
          sts_serial|   9|    100000|     100|0.45902412|  PASSED  
          sts_serial|  10|    100000|     100|0.11537044|  PASSED  
          sts_serial|  10|    100000|     100|0.79439122|  PASSED  
          sts_serial|  11|    100000|     100|0.60191125|  PASSED  
          sts_serial|  11|    100000|     100|0.98580037|  PASSED  
          sts_serial|  12|    100000|     100|0.71880875|  PASSED  
          sts_serial|  12|    100000|     100|0.81612910|  PASSED  
          sts_serial|  13|    100000|     100|0.94658687|  PASSED  
          sts_serial|  13|    100000|     100|0.56779985|  PASSED  
          sts_serial|  14|    100000|     100|0.92679721|  PASSED  
          sts_serial|  14|    100000|     100|0.58323136|  PASSED  
          sts_serial|  15|    100000|     100|0.52125873|  PASSED  
          sts_serial|  15|    100000|     100|0.97504440|  PASSED  
          sts_serial|  16|    100000|     100|0.35089578|  PASSED  
          sts_serial|  16|    100000|     100|0.13420918|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.99293213|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.75762635|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.94848116|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.84195313|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.66350809|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.85967596|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.00306092|   WEAK   
         rgb_bitdist|   8|    100000|     100|0.09263077|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.84051421|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.17866562|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.88042249|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.49159606|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.72520588|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.91223614|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.68302045|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.89822466|  PASSED  
    rgb_permutations|   2|    100000|     100|0.86308411|  PASSED  
    rgb_permutations|   3|    100000|     100|0.31688793|  PASSED  
    rgb_permutations|   4|    100000|     100|0.84675985|  PASSED  
    rgb_permutations|   5|    100000|     100|0.29829672|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.54672798|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.88069402|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.97780017|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.99677682|   WEAK   
      rgb_lagged_sum|   4|   1000000|     100|0.33106614|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.81148015|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.49070020|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.66835190|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.75818448|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.95347153|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.14814700|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.97618023|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.07521259|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.18179436|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.92193747|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.50635665|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.69845482|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.40297098|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.03371995|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.75091048|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.86199277|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.80588468|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.13138507|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.43366957|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.31033877|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.45182445|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.99946810|   WEAK   
      rgb_lagged_sum|  27|   1000000|     100|0.65757363|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.53516249|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.89180801|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.00348211|   WEAK   
      rgb_lagged_sum|  31|   1000000|     100|0.11875700|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.88741972|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.31731193|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.68438988|  PASSED  
             dab_dct| 256|     50000|       1|0.04179763|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.44692650|  PASSED  
        dab_filltree|  32|  15000000|       1|0.34431390|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.72277453|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.50286250|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.95293836|  PASSED  

real	49m41.094s
user	45m50.736s
sys	3m33.696s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9bb1243c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9bb1243c
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-5,T)         R= +10.8  p =  2.0e-4   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9bb1243c
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +19.4  p =  1.9e-8    VERY SUSPICIOUS 
  [Low8/32]BCFN(2+3,13-4,T)         R= +11.9  p =  3.7e-5   mildly suspicious
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9bb1243c
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R= +34.3  p =  5.2e-16    FAIL !         
  [Low8/32]BCFN(2+3,13-3,T)         R= +13.1  p =  5.3e-6   suspicious       
  ...and 130 test result(s) without anomalies


real	0m10.593s
user	0m10.284s
sys	0m0.236s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x267bc4ea
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x267bc4ea
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x267bc4ea
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R= +17.1  p =  2.0e-7   very suspicious  
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x267bc4ea
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +11.8  p =  2.2e-5   suspicious       
  [Low8/32]BCFN(2+2,13-3,T)         R= +35.1  p =  2.0e-16    FAIL !         
  ...and 130 test result(s) without anomalies


real	0m10.480s
user	0m10.236s
sys	0m0.200s
*/
