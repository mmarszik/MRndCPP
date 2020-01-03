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
2122758370
193958869
2716769323
1193556343
3748451631
3083975411
18446730191773918528

real	0m30.942s
user	0m30.896s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.32e+07  |2674984798|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.70470812|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.42544445|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.92155643|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.78006566|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.48729571|  PASSED  
        diehard_opso|   0|   2097152|     100|0.12601470|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.65833437|  PASSED  
         diehard_dna|   0|   2097152|     100|0.05005125|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.36280838|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.57310938|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.63022075|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.93613142|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.51078127|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.14283867|  PASSED  
        diehard_sums|   0|       100|     100|0.57563760|  PASSED  
        diehard_runs|   0|    100000|     100|0.97472200|  PASSED  
        diehard_runs|   0|    100000|     100|0.53776520|  PASSED  
       diehard_craps|   0|    200000|     100|0.20350269|  PASSED  
       diehard_craps|   0|    200000|     100|0.24655307|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.66449327|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.24773124|  PASSED  
         sts_monobit|   1|    100000|     100|0.20855609|  PASSED  
            sts_runs|   2|    100000|     100|0.91160854|  PASSED  
          sts_serial|   1|    100000|     100|0.63805569|  PASSED  
          sts_serial|   2|    100000|     100|0.36006344|  PASSED  
          sts_serial|   3|    100000|     100|0.48476590|  PASSED  
          sts_serial|   3|    100000|     100|0.69170146|  PASSED  
          sts_serial|   4|    100000|     100|0.61057195|  PASSED  
          sts_serial|   4|    100000|     100|0.81485673|  PASSED  
          sts_serial|   5|    100000|     100|0.64178117|  PASSED  
          sts_serial|   5|    100000|     100|0.67678226|  PASSED  
          sts_serial|   6|    100000|     100|0.30854813|  PASSED  
          sts_serial|   6|    100000|     100|0.41631222|  PASSED  
          sts_serial|   7|    100000|     100|0.25378138|  PASSED  
          sts_serial|   7|    100000|     100|0.67062614|  PASSED  
          sts_serial|   8|    100000|     100|0.05552774|  PASSED  
          sts_serial|   8|    100000|     100|0.31991686|  PASSED  
          sts_serial|   9|    100000|     100|0.50852588|  PASSED  
          sts_serial|   9|    100000|     100|0.59889452|  PASSED  
          sts_serial|  10|    100000|     100|0.76039152|  PASSED  
          sts_serial|  10|    100000|     100|0.99328950|  PASSED  
          sts_serial|  11|    100000|     100|0.61275205|  PASSED  
          sts_serial|  11|    100000|     100|0.24017586|  PASSED  
          sts_serial|  12|    100000|     100|0.61844626|  PASSED  
          sts_serial|  12|    100000|     100|0.90104094|  PASSED  
          sts_serial|  13|    100000|     100|0.85381567|  PASSED  
          sts_serial|  13|    100000|     100|0.67621641|  PASSED  
          sts_serial|  14|    100000|     100|0.30889870|  PASSED  
          sts_serial|  14|    100000|     100|0.09449022|  PASSED  
          sts_serial|  15|    100000|     100|0.04272728|  PASSED  
          sts_serial|  15|    100000|     100|0.14394990|  PASSED  
          sts_serial|  16|    100000|     100|0.13352623|  PASSED  
          sts_serial|  16|    100000|     100|0.71096863|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.53313632|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.72136950|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.81988971|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.09914665|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.04234890|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.53827780|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.82594055|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.16884176|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.01219712|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.75184134|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.97488363|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.47695193|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.92933014|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.98056706|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.06363711|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.90873735|  PASSED  
    rgb_permutations|   2|    100000|     100|0.71718708|  PASSED  
    rgb_permutations|   3|    100000|     100|0.13788526|  PASSED  
    rgb_permutations|   4|    100000|     100|0.05480371|  PASSED  
    rgb_permutations|   5|    100000|     100|0.99130669|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.66379337|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.81823844|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.70059677|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.09086135|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.27788330|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.63584582|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.11608384|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.27032286|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.12404738|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.53582583|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.86910089|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.82850202|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.23335831|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.79580645|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.65719421|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.98797230|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.37300014|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.74200945|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.92373265|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.82651367|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.59150052|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.83188428|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.92949322|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.11404760|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.93569827|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.92417917|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.14558604|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.99646048|   WEAK   
      rgb_lagged_sum|  28|   1000000|     100|0.28320004|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.28977825|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.46407770|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.36573628|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.09230987|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.34484975|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.49960257|  PASSED  
             dab_dct| 256|     50000|       1|0.82216798|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.51545952|  PASSED  
        dab_filltree|  32|  15000000|       1|0.86359660|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.45420798|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.00074911|   WEAK   
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.75328344|  PASSED  

real	48m41.706s
user	45m2.460s
sys	3m36.204s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x50d0e43a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x50d0e43a
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x50d0e43a
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x50d0e43a
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x50d0e43a
length= 1 gigabyte (2^30 bytes), time= 18.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x50d0e43a
length= 2 gigabytes (2^31 bytes), time= 36.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x50d0e43a
length= 4 gigabytes (2^32 bytes), time= 70.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x50d0e43a
length= 5.750 gigabytes (2^32.524 bytes), time= 101 seconds
  no anomalies in 160 test result(s)


real	1m41.835s
user	1m39.328s
sys	0m2.376s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6599c21f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6599c21f
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6599c21f
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6599c21f
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6599c21f
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.4  p =  8.4e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6599c21f
length= 2 gigabytes (2^31 bytes), time= 36.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6599c21f
length= 4 gigabytes (2^32 bytes), time= 72.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x6599c21f
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.454s
user	1m41.140s
sys	0m2.124s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdfb88770
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdfb88770
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xdfb88770
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -3.6  p =1-1.9e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdfb88770
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xdfb88770
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  +4.7  p =  7.2e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdfb88770
length= 2 gigabytes (2^31 bytes), time= 36.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xdfb88770
length= 4 gigabytes (2^32 bytes), time= 71.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xdfb88770
length= 5.750 gigabytes (2^32.524 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  -4.3  p =1-8.5e-4   unusual          
  ...and 159 test result(s) without anomalies


real	1m43.901s
user	1m41.424s
sys	0m2.336s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x962caaf2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x962caaf2
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x962caaf2
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x962caaf2
length= 512 megabytes (2^29 bytes), time= 9.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x962caaf2
length= 1 gigabyte (2^30 bytes), time= 18.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x962caaf2
length= 2 gigabytes (2^31 bytes), time= 36.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x962caaf2
length= 4 gigabytes (2^32 bytes), time= 69.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-0,T)                  R=  +7.7  p =  1.2e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x962caaf2
length= 8 gigabytes (2^33 bytes), time= 141 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x962caaf2
length= 16 gigabytes (2^34 bytes), time= 294 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x962caaf2
length= 32 gigabytes (2^35 bytes), time= 594 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+11,13-6,T)        R= +15.9  p =  7.1e-6   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0x962caaf2
length= 64 gigabytes (2^36 bytes), time= 1210 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+9,13-5,T)         R= +15.2  p =  3.7e-6   mildly suspicious
  [Low1/32]BCFN(2+10,13-5,T)        R= +18.0  p =  3.1e-7   suspicious       
  [Low1/32]BCFN(2+11,13-6,T)        R= +41.0  p =  1.7e-14    FAIL           
  [Low1/32]BCFN(2+12,13-6,T)        R= +18.3  p =  1.0e-6   mildly suspicious
  [Low1/32]BCFN(2+13,13-7,T)        R= +17.9  p =  5.2e-6   unusual          
  ...and 184 test result(s) without anomalies


real	20m10.285s
user	19m44.052s
sys	0m24.976s
*/
