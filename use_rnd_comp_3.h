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
/// @created on 2019-12-08 02:56:18 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 0ff3b5f3-789f-404a-9120-d809aa46f6fd                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib0a, RndFib1a, 7 >;

/* TEST00
time ./MRndCPP 
1973536367
3381483824
3556148829
2430275353
1787476771
1747937403
18446661907502387042

real	0m53.870s
user	0m53.608s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.73e+07  |2822474010|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.94873881|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.67391249|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.68319933|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.21841384|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.70369350|  PASSED  
        diehard_opso|   0|   2097152|     100|0.74214133|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.06084900|  PASSED  
         diehard_dna|   0|   2097152|     100|0.52153640|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.46565435|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.10479105|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.31640509|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.71880241|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.45846331|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.60976245|  PASSED  
        diehard_sums|   0|       100|     100|0.02722107|  PASSED  
        diehard_runs|   0|    100000|     100|0.18986814|  PASSED  
        diehard_runs|   0|    100000|     100|0.09846035|  PASSED  
       diehard_craps|   0|    200000|     100|0.98423507|  PASSED  
       diehard_craps|   0|    200000|     100|0.47832223|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.84839530|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99252896|  PASSED  
         sts_monobit|   1|    100000|     100|0.34402430|  PASSED  
            sts_runs|   2|    100000|     100|0.93898711|  PASSED  
          sts_serial|   1|    100000|     100|0.60581984|  PASSED  
          sts_serial|   2|    100000|     100|0.96919563|  PASSED  
          sts_serial|   3|    100000|     100|0.81902533|  PASSED  
          sts_serial|   3|    100000|     100|0.34646817|  PASSED  
          sts_serial|   4|    100000|     100|0.68748592|  PASSED  
          sts_serial|   4|    100000|     100|0.97177120|  PASSED  
          sts_serial|   5|    100000|     100|0.14941812|  PASSED  
          sts_serial|   5|    100000|     100|0.12954537|  PASSED  
          sts_serial|   6|    100000|     100|0.21673605|  PASSED  
          sts_serial|   6|    100000|     100|0.95028813|  PASSED  
          sts_serial|   7|    100000|     100|0.91222924|  PASSED  
          sts_serial|   7|    100000|     100|0.01924663|  PASSED  
          sts_serial|   8|    100000|     100|0.41749785|  PASSED  
          sts_serial|   8|    100000|     100|0.74583415|  PASSED  
          sts_serial|   9|    100000|     100|0.41752881|  PASSED  
          sts_serial|   9|    100000|     100|0.25634593|  PASSED  
          sts_serial|  10|    100000|     100|0.32609963|  PASSED  
          sts_serial|  10|    100000|     100|0.84298503|  PASSED  
          sts_serial|  11|    100000|     100|0.54176958|  PASSED  
          sts_serial|  11|    100000|     100|0.30735827|  PASSED  
          sts_serial|  12|    100000|     100|0.37918903|  PASSED  
          sts_serial|  12|    100000|     100|0.99688934|   WEAK   
          sts_serial|  13|    100000|     100|0.94090944|  PASSED  
          sts_serial|  13|    100000|     100|0.28691867|  PASSED  
          sts_serial|  14|    100000|     100|0.65213688|  PASSED  
          sts_serial|  14|    100000|     100|0.04601584|  PASSED  
          sts_serial|  15|    100000|     100|0.90288725|  PASSED  
          sts_serial|  15|    100000|     100|0.17514703|  PASSED  
          sts_serial|  16|    100000|     100|0.98762608|  PASSED  
          sts_serial|  16|    100000|     100|0.95030420|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.97194267|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.87104783|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.56702421|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.07136096|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.71923386|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.93823720|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.16879142|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.62324807|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.82043404|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.73369723|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.13027936|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.85815414|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.85554319|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.77237329|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.97545875|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.48447817|  PASSED  
    rgb_permutations|   2|    100000|     100|0.84239104|  PASSED  
    rgb_permutations|   3|    100000|     100|0.26237587|  PASSED  
    rgb_permutations|   4|    100000|     100|0.43737280|  PASSED  
    rgb_permutations|   5|    100000|     100|0.87227106|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.55022083|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.91306123|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.21839956|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.07527651|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.05082832|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.88344499|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.77648607|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.27283535|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.35948894|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.81093843|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.09986326|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.21292286|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.56188495|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.90478194|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.41837837|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.69730169|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.41747029|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.17374617|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.42918388|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.97415231|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.58424678|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.59787323|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.88585896|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.85926714|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.23623390|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.92185958|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.98721220|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.21467565|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.61405639|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.05644265|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.63187482|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.67916181|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.08595400|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.06884253|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.41419041|  PASSED  
             dab_dct| 256|     50000|       1|0.62547580|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.37154039|  PASSED  
        dab_filltree|  32|  15000000|       1|0.56447564|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.54601942|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.52230806|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.72587506|  PASSED  

real	54m17.657s
user	50m22.904s
sys	3m45.428s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x331f7a91
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x331f7a91
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x331f7a91
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x331f7a91
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x331f7a91
length= 1 gigabyte (2^30 bytes), time= 20.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.4  p =1-4.1e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x331f7a91
length= 2 gigabytes (2^31 bytes), time= 39.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-1,T)         R=  -7.7  p =1-4.7e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -3.6  p = 0.989     unusual          
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0x331f7a91
length= 4 gigabytes (2^32 bytes), time= 77.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x331f7a91
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.900s
user	1m40.396s
sys	0m3.096s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x495195b9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x495195b9
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x495195b9
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +4.7  p =  1.8e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x495195b9
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x495195b9
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x495195b9
length= 2 gigabytes (2^31 bytes), time= 39.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x495195b9
length= 4 gigabytes (2^32 bytes), time= 77.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x495195b9
length= 8 gigabytes (2^33 bytes), time= 157 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x495195b9
length= 16 gigabytes (2^34 bytes), time= 324 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x495195b9
length= 32 gigabytes (2^35 bytes), time= 653 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x495195b9
length= 48.750 gigabytes (2^35.607 bytes), time= 1004 seconds
  no anomalies in 184 test result(s)


real	16m44.485s
user	16m12.112s
sys	0m28.892s
*/
/* TEST00
time ./MRndCPP 
1973536367
3381483824
3556148829
2430275353
1787476771
1747937403
18446661907502387042

real	0m53.655s
user	0m53.476s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.84e+07  | 766663481|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.37690000|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.37360451|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.22680770|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.72348368|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.98680146|  PASSED  
        diehard_opso|   0|   2097152|     100|0.48801114|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.61932845|  PASSED  
         diehard_dna|   0|   2097152|     100|0.13830591|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.44322228|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.52476619|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.54459758|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.03690212|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.74585452|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.93565664|  PASSED  
        diehard_sums|   0|       100|     100|0.42676061|  PASSED  
        diehard_runs|   0|    100000|     100|0.45236793|  PASSED  
        diehard_runs|   0|    100000|     100|0.33705411|  PASSED  
       diehard_craps|   0|    200000|     100|0.70157406|  PASSED  
       diehard_craps|   0|    200000|     100|0.89801313|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.81884969|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.87669697|  PASSED  
         sts_monobit|   1|    100000|     100|0.87357998|  PASSED  
            sts_runs|   2|    100000|     100|0.85281109|  PASSED  
          sts_serial|   1|    100000|     100|0.02119312|  PASSED  
          sts_serial|   2|    100000|     100|0.88162711|  PASSED  
          sts_serial|   3|    100000|     100|0.15897149|  PASSED  
          sts_serial|   3|    100000|     100|0.31583811|  PASSED  
          sts_serial|   4|    100000|     100|0.18483300|  PASSED  
          sts_serial|   4|    100000|     100|0.95187609|  PASSED  
          sts_serial|   5|    100000|     100|0.19153969|  PASSED  
          sts_serial|   5|    100000|     100|0.71254996|  PASSED  
          sts_serial|   6|    100000|     100|0.30341436|  PASSED  
          sts_serial|   6|    100000|     100|0.68865663|  PASSED  
          sts_serial|   7|    100000|     100|0.53298122|  PASSED  
          sts_serial|   7|    100000|     100|0.92348005|  PASSED  
          sts_serial|   8|    100000|     100|0.85381211|  PASSED  
          sts_serial|   8|    100000|     100|0.80380837|  PASSED  
          sts_serial|   9|    100000|     100|0.08409213|  PASSED  
          sts_serial|   9|    100000|     100|0.31586155|  PASSED  
          sts_serial|  10|    100000|     100|0.11364611|  PASSED  
          sts_serial|  10|    100000|     100|0.87982377|  PASSED  
          sts_serial|  11|    100000|     100|0.06912115|  PASSED  
          sts_serial|  11|    100000|     100|0.18081332|  PASSED  
          sts_serial|  12|    100000|     100|0.72635767|  PASSED  
          sts_serial|  12|    100000|     100|0.43990999|  PASSED  
          sts_serial|  13|    100000|     100|0.54236265|  PASSED  
          sts_serial|  13|    100000|     100|0.35408891|  PASSED  
          sts_serial|  14|    100000|     100|0.35375779|  PASSED  
          sts_serial|  14|    100000|     100|0.91615630|  PASSED  
          sts_serial|  15|    100000|     100|0.65073301|  PASSED  
          sts_serial|  15|    100000|     100|0.99894866|   WEAK   
          sts_serial|  16|    100000|     100|0.98047475|  PASSED  
          sts_serial|  16|    100000|     100|0.49035642|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.08482539|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.68072634|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.60428831|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.32480793|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.15755555|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.12635082|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.67333190|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.76411332|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.16533244|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.99949151|   WEAK   
         rgb_bitdist|  11|    100000|     100|0.45525971|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.75106344|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.46101472|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.93466207|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.16486836|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.12867628|  PASSED  
    rgb_permutations|   2|    100000|     100|0.54142546|  PASSED  
    rgb_permutations|   3|    100000|     100|0.63117399|  PASSED  
    rgb_permutations|   4|    100000|     100|0.27755459|  PASSED  
    rgb_permutations|   5|    100000|     100|0.59143733|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.68604232|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.91375573|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.37925207|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.04201561|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.97747961|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.99977638|   WEAK   
      rgb_lagged_sum|   6|   1000000|     100|0.98890388|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.56599711|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.41744129|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.68942824|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.48113608|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.94435332|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.77901809|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.51561765|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.61205461|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.94766751|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.00612958|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.73494328|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.91283606|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.12898600|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.82787095|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.47874827|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.02192829|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.20685642|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.89165676|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.79969223|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.60570785|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.10880866|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.80908283|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.58048908|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.05011099|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.64247548|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.38464384|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.54931150|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.75078595|  PASSED  
             dab_dct| 256|     50000|       1|0.55001585|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.20016094|  PASSED  
        dab_filltree|  32|  15000000|       1|0.05190377|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.18986971|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.43731553|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.88151103|  PASSED  

real	56m13.306s
user	52m41.604s
sys	3m22.064s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd2900536
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd2900536
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd2900536
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd2900536
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.6  p =  6.1e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd2900536
length= 1 gigabyte (2^30 bytes), time= 20.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.7  p =1-8.9e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd2900536
length= 2 gigabytes (2^31 bytes), time= 40.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.3  p =1-4.3e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd2900536
length= 4 gigabytes (2^32 bytes), time= 80.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd2900536
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 159 test result(s)


real	1m41.777s
user	1m38.276s
sys	0m3.164s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xaa490d62
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xaa490d62
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xaa490d62
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xaa490d62
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xaa490d62
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xaa490d62
length= 2 gigabytes (2^31 bytes), time= 39.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xaa490d62
length= 4 gigabytes (2^32 bytes), time= 76.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xaa490d62
length= 8 gigabytes (2^33 bytes), time= 159 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xaa490d62
length= 16 gigabytes (2^34 bytes), time= 324 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  1.7e-3   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0xaa490d62
length= 32 gigabytes (2^35 bytes), time= 649 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xaa490d62
length= 49.000 gigabytes (2^35.615 bytes), time= 1002 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +4.9  p =  6.6e-3   unusual          
  ...and 183 test result(s) without anomalies


real	16m42.191s
user	16m10.504s
sys	0m28.808s
*/
