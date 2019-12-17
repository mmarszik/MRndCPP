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
/// @created on 2019-12-08 02:55:44 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f3d861a8-a940-418e-93ba-af4c51f21089                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_sim_lin.h"

using TRnd = RndComp<RndSimLin00,RndSimLin02,10>;

/* TEST00
time ./MRndCPP 
844443584
2504572837
278761187
3746838637
2321442934
2618716438
39742734416035

real	0m15.520s
user	0m15.464s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.32e+07  | 741233664|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.87232877|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.12064176|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.65536840|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.91359218|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.05506401|  PASSED  
        diehard_opso|   0|   2097152|     100|0.80800721|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.75643141|  PASSED  
         diehard_dna|   0|   2097152|     100|0.64690035|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.15833030|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.51446092|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.95757392|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.31406229|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.29701711|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.57512601|  PASSED  
        diehard_sums|   0|       100|     100|0.00948819|  PASSED  
        diehard_runs|   0|    100000|     100|0.45037313|  PASSED  
        diehard_runs|   0|    100000|     100|0.53201792|  PASSED  
       diehard_craps|   0|    200000|     100|0.60639884|  PASSED  
       diehard_craps|   0|    200000|     100|0.45039673|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.65359939|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.61889417|  PASSED  
         sts_monobit|   1|    100000|     100|0.86007603|  PASSED  
            sts_runs|   2|    100000|     100|0.21995342|  PASSED  
          sts_serial|   1|    100000|     100|0.92695214|  PASSED  
          sts_serial|   2|    100000|     100|0.87662293|  PASSED  
          sts_serial|   3|    100000|     100|0.15026198|  PASSED  
          sts_serial|   3|    100000|     100|0.00797710|  PASSED  
          sts_serial|   4|    100000|     100|0.28944397|  PASSED  
          sts_serial|   4|    100000|     100|0.72365119|  PASSED  
          sts_serial|   5|    100000|     100|0.02375460|  PASSED  
          sts_serial|   5|    100000|     100|0.95730876|  PASSED  
          sts_serial|   6|    100000|     100|0.46041646|  PASSED  
          sts_serial|   6|    100000|     100|0.88586713|  PASSED  
          sts_serial|   7|    100000|     100|0.07137716|  PASSED  
          sts_serial|   7|    100000|     100|0.14311255|  PASSED  
          sts_serial|   8|    100000|     100|0.42954398|  PASSED  
          sts_serial|   8|    100000|     100|0.81913397|  PASSED  
          sts_serial|   9|    100000|     100|0.89117697|  PASSED  
          sts_serial|   9|    100000|     100|0.44275023|  PASSED  
          sts_serial|  10|    100000|     100|0.55573115|  PASSED  
          sts_serial|  10|    100000|     100|0.09730157|  PASSED  
          sts_serial|  11|    100000|     100|0.66206859|  PASSED  
          sts_serial|  11|    100000|     100|0.78422590|  PASSED  
          sts_serial|  12|    100000|     100|0.95614939|  PASSED  
          sts_serial|  12|    100000|     100|0.66432028|  PASSED  
          sts_serial|  13|    100000|     100|0.71129912|  PASSED  
          sts_serial|  13|    100000|     100|0.88418367|  PASSED  
          sts_serial|  14|    100000|     100|0.70011282|  PASSED  
          sts_serial|  14|    100000|     100|0.11616103|  PASSED  
          sts_serial|  15|    100000|     100|0.94668960|  PASSED  
          sts_serial|  15|    100000|     100|0.11246542|  PASSED  
          sts_serial|  16|    100000|     100|0.21743064|  PASSED  
          sts_serial|  16|    100000|     100|0.92638711|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.52887289|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.17934344|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.89468650|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.71982756|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.71433685|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.85689405|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.59498883|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.43899857|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.31100379|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.92868160|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.96930972|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.80559366|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.97852582|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.41146000|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.15599820|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.16412692|  PASSED  
    rgb_permutations|   2|    100000|     100|0.04141074|  PASSED  
    rgb_permutations|   3|    100000|     100|0.89000608|  PASSED  
    rgb_permutations|   4|    100000|     100|0.42780255|  PASSED  
    rgb_permutations|   5|    100000|     100|0.81689163|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.15642177|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.99090569|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.63310492|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.81747847|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.05728660|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.99519147|   WEAK   
      rgb_lagged_sum|   6|   1000000|     100|0.93930401|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.14989838|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.09713816|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.63901103|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.07823007|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.31467135|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.53576452|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.79536218|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.82639348|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.08383374|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.93972220|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.90643256|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.93922856|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.99968593|   WEAK   
      rgb_lagged_sum|  20|   1000000|     100|0.65162496|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.63142202|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.26077915|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.55813644|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.32863078|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.80578043|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.52460881|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.95521281|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.32979665|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.70103583|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.51903700|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.92367815|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.98180474|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.26062403|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.50381803|  PASSED  
             dab_dct| 256|     50000|       1|0.23244510|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.89266745|  PASSED  
        dab_filltree|  32|  15000000|       1|0.48452837|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.67628345|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.66717373|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.91119972|  PASSED  

real	47m47.366s
user	44m2.888s
sys	3m37.152s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x40625804
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x40625804
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.1  p =1-5.5e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x40625804
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x40625804
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x40625804
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x40625804
length= 2 gigabytes (2^31 bytes), time= 36.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  +4.7  p =  7.2e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x40625804
length= 4 gigabytes (2^32 bytes), time= 70.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x40625804
length= 5.750 gigabytes (2^32.524 bytes), time= 105 seconds
  no anomalies in 160 test result(s)


real	1m45.441s
user	1m42.700s
sys	0m2.436s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x52246ad5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x52246ad5
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x52246ad5
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x52246ad5
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x52246ad5
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x52246ad5
length= 2 gigabytes (2^31 bytes), time= 36.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x52246ad5
length= 4 gigabytes (2^32 bytes), time= 70.4 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  +4.5  p =  1.0e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x52246ad5
length= 8 gigabytes (2^33 bytes), time= 143 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x52246ad5
length= 16 gigabytes (2^34 bytes), time= 295 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x52246ad5
length= 32 gigabytes (2^35 bytes), time= 596 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-0,T)                  R=  +7.3  p =  2.0e-3   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0x52246ad5
length= 53.000 gigabytes (2^35.728 bytes), time= 1003 seconds
  no anomalies in 184 test result(s)


real	16m43.904s
user	16m20.164s
sys	0m20.856s
*/
/* TEST00
time ./MRndCPP 
844443584
2504572837
278761187
3746838637
2321442934
2618716438
39742734416035

real	0m15.488s
user	0m15.440s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.30e+07  |1551777605|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.41065662|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.66360911|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.86515976|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.47482261|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.96518833|  PASSED  
        diehard_opso|   0|   2097152|     100|0.45223140|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.99233266|  PASSED  
         diehard_dna|   0|   2097152|     100|0.98998634|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.54213039|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.74728437|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.31706537|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.59665982|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.59571896|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.01359647|  PASSED  
        diehard_sums|   0|       100|     100|0.31666821|  PASSED  
        diehard_runs|   0|    100000|     100|0.04467787|  PASSED  
        diehard_runs|   0|    100000|     100|0.95156817|  PASSED  
       diehard_craps|   0|    200000|     100|0.86576939|  PASSED  
       diehard_craps|   0|    200000|     100|0.27862624|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.97536411|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.45753121|  PASSED  
         sts_monobit|   1|    100000|     100|0.74438839|  PASSED  
            sts_runs|   2|    100000|     100|0.80884570|  PASSED  
          sts_serial|   1|    100000|     100|0.84994290|  PASSED  
          sts_serial|   2|    100000|     100|0.27945427|  PASSED  
          sts_serial|   3|    100000|     100|0.94755517|  PASSED  
          sts_serial|   3|    100000|     100|0.59340893|  PASSED  
          sts_serial|   4|    100000|     100|0.79871014|  PASSED  
          sts_serial|   4|    100000|     100|0.95426701|  PASSED  
          sts_serial|   5|    100000|     100|0.86108933|  PASSED  
          sts_serial|   5|    100000|     100|0.51754352|  PASSED  
          sts_serial|   6|    100000|     100|0.64568332|  PASSED  
          sts_serial|   6|    100000|     100|0.42234883|  PASSED  
          sts_serial|   7|    100000|     100|0.89098541|  PASSED  
          sts_serial|   7|    100000|     100|0.62420885|  PASSED  
          sts_serial|   8|    100000|     100|0.50282016|  PASSED  
          sts_serial|   8|    100000|     100|0.67122752|  PASSED  
          sts_serial|   9|    100000|     100|0.97633714|  PASSED  
          sts_serial|   9|    100000|     100|0.97608411|  PASSED  
          sts_serial|  10|    100000|     100|0.55464126|  PASSED  
          sts_serial|  10|    100000|     100|0.95673268|  PASSED  
          sts_serial|  11|    100000|     100|0.95708059|  PASSED  
          sts_serial|  11|    100000|     100|0.54837949|  PASSED  
          sts_serial|  12|    100000|     100|0.64021245|  PASSED  
          sts_serial|  12|    100000|     100|0.84166060|  PASSED  
          sts_serial|  13|    100000|     100|0.95051673|  PASSED  
          sts_serial|  13|    100000|     100|0.46107416|  PASSED  
          sts_serial|  14|    100000|     100|0.74107979|  PASSED  
          sts_serial|  14|    100000|     100|0.39717445|  PASSED  
          sts_serial|  15|    100000|     100|0.86352672|  PASSED  
          sts_serial|  15|    100000|     100|0.96294711|  PASSED  
          sts_serial|  16|    100000|     100|0.59600060|  PASSED  
          sts_serial|  16|    100000|     100|0.75102627|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.13082856|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.32606061|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.62772681|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.38066374|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.01394036|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.35081862|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.57248183|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.30895920|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.08264363|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.56299701|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.38365074|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.72371279|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.18653870|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.75840082|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.62200101|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.16958235|  PASSED  
    rgb_permutations|   2|    100000|     100|0.64586923|  PASSED  
    rgb_permutations|   3|    100000|     100|0.06061128|  PASSED  
    rgb_permutations|   4|    100000|     100|0.26056672|  PASSED  
    rgb_permutations|   5|    100000|     100|0.33918189|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.36582359|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.46465185|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.21683212|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.67501039|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.07836500|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.87340031|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.14472828|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.24477679|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.63822445|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.68124803|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.73780686|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.24489273|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.88678429|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.99166252|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.41017167|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.86443676|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.16668619|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.44983138|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.39858289|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.85995537|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.99860376|   WEAK   
      rgb_lagged_sum|  21|   1000000|     100|0.89788336|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.52622293|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.92537656|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.36263648|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.54632847|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.45053289|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.20583915|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.98794929|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.26702729|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.32072520|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.53200048|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.93870219|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.11622695|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.09116307|  PASSED  
             dab_dct| 256|     50000|       1|0.96898786|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.85628276|  PASSED  
        dab_filltree|  32|  15000000|       1|0.08253494|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.72764486|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.78159978|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.48301047|  PASSED  

real	53m6.878s
user	49m8.868s
sys	3m51.324s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x73024d89
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x73024d89
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x73024d89
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x73024d89
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.3  p =1-4.4e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x73024d89
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x73024d89
length= 2 gigabytes (2^31 bytes), time= 36.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x73024d89
length= 4 gigabytes (2^32 bytes), time= 70.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x73024d89
length= 5.750 gigabytes (2^32.524 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.536s
user	1m40.960s
sys	0m2.388s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1b328cf9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1b328cf9
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x1b328cf9
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x1b328cf9
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x1b328cf9
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x1b328cf9
length= 2 gigabytes (2^31 bytes), time= 37.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x1b328cf9
length= 4 gigabytes (2^32 bytes), time= 73.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x1b328cf9
length= 8 gigabytes (2^33 bytes), time= 147 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x1b328cf9
length= 16 gigabytes (2^34 bytes), time= 299 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x1b328cf9
length= 32 gigabytes (2^35 bytes), time= 598 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x1b328cf9
length= 53.000 gigabytes (2^35.728 bytes), time= 1001 seconds
  no anomalies in 184 test result(s)


real	16m42.351s
user	16m19.712s
sys	0m20.376s
*/
