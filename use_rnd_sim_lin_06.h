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
/// @created on 2019-12-09 19:36:47 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 55802526-3e41-4972-98d5-3b3cf98d3648                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin06;

/* TEST00
time ./MRndCPP 
323208208
3685989511
1474717894
3322609586
2569725805
1946063250
4611640092465773978

real	0m11.676s
user	0m11.664s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.99e+07  |4289413432|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.12731412|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.75749381|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.97819112|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.57527787|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.09844107|  PASSED  
        diehard_opso|   0|   2097152|     100|0.43394664|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.54392784|  PASSED  
         diehard_dna|   0|   2097152|     100|0.18915269|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.35621675|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.04348281|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.49340705|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.46620531|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.16708360|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.34846292|  PASSED  
        diehard_sums|   0|       100|     100|0.15646819|  PASSED  
        diehard_runs|   0|    100000|     100|0.83743821|  PASSED  
        diehard_runs|   0|    100000|     100|0.58999754|  PASSED  
       diehard_craps|   0|    200000|     100|0.20934095|  PASSED  
       diehard_craps|   0|    200000|     100|0.99926462|   WEAK   
 marsaglia_tsang_gcd|   0|  10000000|     100|0.58822254|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.08674301|  PASSED  
         sts_monobit|   1|    100000|     100|0.45546373|  PASSED  
            sts_runs|   2|    100000|     100|0.83213607|  PASSED  
          sts_serial|   1|    100000|     100|0.94623155|  PASSED  
          sts_serial|   2|    100000|     100|0.35309968|  PASSED  
          sts_serial|   3|    100000|     100|0.32062161|  PASSED  
          sts_serial|   3|    100000|     100|0.65915779|  PASSED  
          sts_serial|   4|    100000|     100|0.26445807|  PASSED  
          sts_serial|   4|    100000|     100|0.38835146|  PASSED  
          sts_serial|   5|    100000|     100|0.01128702|  PASSED  
          sts_serial|   5|    100000|     100|0.05432521|  PASSED  
          sts_serial|   6|    100000|     100|0.34345895|  PASSED  
          sts_serial|   6|    100000|     100|0.98128219|  PASSED  
          sts_serial|   7|    100000|     100|0.30740085|  PASSED  
          sts_serial|   7|    100000|     100|0.39618548|  PASSED  
          sts_serial|   8|    100000|     100|0.07049320|  PASSED  
          sts_serial|   8|    100000|     100|0.98657827|  PASSED  
          sts_serial|   9|    100000|     100|0.86241313|  PASSED  
          sts_serial|   9|    100000|     100|0.39870792|  PASSED  
          sts_serial|  10|    100000|     100|0.27739837|  PASSED  
          sts_serial|  10|    100000|     100|0.41420893|  PASSED  
          sts_serial|  11|    100000|     100|0.99950799|   WEAK   
          sts_serial|  11|    100000|     100|0.27510470|  PASSED  
          sts_serial|  12|    100000|     100|0.80896559|  PASSED  
          sts_serial|  12|    100000|     100|0.81917065|  PASSED  
          sts_serial|  13|    100000|     100|0.28122228|  PASSED  
          sts_serial|  13|    100000|     100|0.19868758|  PASSED  
          sts_serial|  14|    100000|     100|0.18200993|  PASSED  
          sts_serial|  14|    100000|     100|0.07607778|  PASSED  
          sts_serial|  15|    100000|     100|0.21365282|  PASSED  
          sts_serial|  15|    100000|     100|0.22192402|  PASSED  
          sts_serial|  16|    100000|     100|0.80077210|  PASSED  
          sts_serial|  16|    100000|     100|0.33993749|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.67217232|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.98198077|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.84275554|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.41151064|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.91581697|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.08470755|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.07239302|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.28792944|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.12164243|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.21033726|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.90760990|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.27578514|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.63927083|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.92687758|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.18816262|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.53664604|  PASSED  
    rgb_permutations|   2|    100000|     100|0.63677589|  PASSED  
    rgb_permutations|   3|    100000|     100|0.65235034|  PASSED  
    rgb_permutations|   4|    100000|     100|0.08802945|  PASSED  
    rgb_permutations|   5|    100000|     100|0.77926858|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.27702825|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.80589287|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.26492183|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.65602206|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.90076506|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.00817500|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.88782652|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.43790067|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.88091679|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.52995399|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.24176915|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.51815108|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.79578710|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.71100962|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.37715208|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.02342879|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.79287437|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.99014307|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.65441043|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.04599255|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.57499210|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.83310860|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.49290812|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.53636701|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.71535067|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.26825021|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.46116323|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.00518843|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.84307562|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.73799265|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.54905125|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.44487325|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.75388767|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.58589790|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.47334133|  PASSED  
             dab_dct| 256|     50000|       1|0.49615489|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.31759868|  PASSED  
        dab_filltree|  32|  15000000|       1|0.74148946|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.73207865|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.95523348|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.47575479|  PASSED  

real	50m48.384s
user	46m44.188s
sys	3m46.816s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9eceb6b7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9eceb6b7
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9eceb6b7
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9eceb6b7
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x9eceb6b7
length= 1 gigabyte (2^30 bytes), time= 22.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9eceb6b7
length= 2 gigabytes (2^31 bytes), time= 41.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x9eceb6b7
length= 4 gigabytes (2^32 bytes), time= 77.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x9eceb6b7
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.8  p = 0.989     unusual          
  ...and 159 test result(s) without anomalies


real	1m42.723s
user	1m39.248s
sys	0m3.300s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x498724ef
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x498724ef
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x498724ef
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x498724ef
length= 512 megabytes (2^29 bytes), time= 10.4 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +4.5  p =  2.5e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x498724ef
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x498724ef
length= 2 gigabytes (2^31 bytes), time= 39.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x498724ef
length= 4 gigabytes (2^32 bytes), time= 78.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:(1,14-0)     R=  +7.0  p =  4.5e-6   unusual          
  [Low8/32]FPF-14+6/16:all          R=  +5.2  p =  2.4e-4   unusual          
  [Low8/32]FPF-14+6/16:all2         R=  +6.9  p =  2.7e-4   unusual          
  ...and 153 test result(s) without anomalies

rng=RNG_stdin32, seed=0x498724ef
length= 5.250 gigabytes (2^32.392 bytes), time= 105 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:(1,14-0)     R=  +8.4  p =  2.3e-7   suspicious       
  [Low8/32]FPF-14+6/16:all          R=  +5.9  p =  5.0e-5   mildly suspicious
  [Low8/32]FPF-14+6/16:all2         R= +10.3  p =  1.1e-5   mildly suspicious
  ...and 157 test result(s) without anomalies


real	1m45.432s
user	1m42.076s
sys	0m3.060s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x74b89210
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x74b89210
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x74b89210
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x74b89210
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x74b89210
length= 1 gigabyte (2^30 bytes), time= 20.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x74b89210
length= 2 gigabytes (2^31 bytes), time= 38.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x74b89210
length= 4 gigabytes (2^32 bytes), time= 74.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+4,13-1,T)                  R=  -8.9  p =1-8.0e-5   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x74b89210
length= 5.250 gigabytes (2^32.392 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+4,13-1,T)                  R=  -8.3  p =1-1.8e-4   unusual          
  [Low8/32]FPF-14+6/16:all          R=  +6.3  p =  2.2e-5   mildly suspicious
  [Low8/32]FPF-14+6/16:all2         R=  +6.2  p =  4.8e-4   unusual          
  ...and 157 test result(s) without anomalies


real	1m41.356s
user	1m38.132s
sys	0m2.944s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9221baf6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9221baf6
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9221baf6
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9221baf6
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x9221baf6
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9221baf6
length= 2 gigabytes (2^31 bytes), time= 42.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x9221baf6
length= 4 gigabytes (2^32 bytes), time= 82.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x9221baf6
length= 8 gigabytes (2^33 bytes), time= 169 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:(1,14-0)     R=  +7.6  p =  1.2e-6   mildly suspicious
  [Low8/32]FPF-14+6/16:all          R=  +5.3  p =  1.8e-4   unusual          
  [Low8/32]FPF-14+6/16:all2         R= +13.4  p =  5.2e-7   very suspicious  
  ...and 162 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9221baf6
length= 16 gigabytes (2^34 bytes), time= 352 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +12.2  p =  6.3e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:(1,14-0)     R= +14.7  p =  3.2e-13    FAIL           
  [Low8/32]FPF-14+6/16:all          R= +12.3  p =  5.2e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:all2         R= +64.8  p =  2.1e-28    FAIL !!!       
  ...and 168 test result(s) without anomalies


real	5m53.076s
user	5m43.124s
sys	0m9.060s
*/
