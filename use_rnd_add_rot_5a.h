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
/// @created on 2019-12-18 20:16:09 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f0757266-94d8-45b1-bcec-2b7ea1c4a71b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot5a;
/* TEST00
time ./MRndCPP 
2413775950
66850803
762678325
4017436850
294625300
2114531605
4611778164177021112

real	0m19.348s
user	0m19.324s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.64e+07  |2223908491|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.81126811|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.23476992|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.32051562|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.05524968|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.96518833|  PASSED  
        diehard_opso|   0|   2097152|     100|0.09475071|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.25621331|  PASSED  
         diehard_dna|   0|   2097152|     100|0.53407357|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.99658892|   WEAK   
diehard_count_1s_byt|   0|    256000|     100|0.65620089|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.44976967|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.87097048|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.39618022|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.72279775|  PASSED  
        diehard_sums|   0|       100|     100|0.22567076|  PASSED  
        diehard_runs|   0|    100000|     100|0.98450151|  PASSED  
        diehard_runs|   0|    100000|     100|0.84663369|  PASSED  
       diehard_craps|   0|    200000|     100|0.44711962|  PASSED  
       diehard_craps|   0|    200000|     100|0.96532671|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.63165406|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.70818241|  PASSED  
         sts_monobit|   1|    100000|     100|0.79255301|  PASSED  
            sts_runs|   2|    100000|     100|0.83096074|  PASSED  
          sts_serial|   1|    100000|     100|0.06382056|  PASSED  
          sts_serial|   2|    100000|     100|0.62947032|  PASSED  
          sts_serial|   3|    100000|     100|0.38847715|  PASSED  
          sts_serial|   3|    100000|     100|0.79152934|  PASSED  
          sts_serial|   4|    100000|     100|0.81184085|  PASSED  
          sts_serial|   4|    100000|     100|0.69839179|  PASSED  
          sts_serial|   5|    100000|     100|0.27753421|  PASSED  
          sts_serial|   5|    100000|     100|0.63807339|  PASSED  
          sts_serial|   6|    100000|     100|0.16015849|  PASSED  
          sts_serial|   6|    100000|     100|0.41439085|  PASSED  
          sts_serial|   7|    100000|     100|0.13085705|  PASSED  
          sts_serial|   7|    100000|     100|0.66773946|  PASSED  
          sts_serial|   8|    100000|     100|0.86834434|  PASSED  
          sts_serial|   8|    100000|     100|0.96755622|  PASSED  
          sts_serial|   9|    100000|     100|0.51734747|  PASSED  
          sts_serial|   9|    100000|     100|0.55515796|  PASSED  
          sts_serial|  10|    100000|     100|0.35513692|  PASSED  
          sts_serial|  10|    100000|     100|0.71221088|  PASSED  
          sts_serial|  11|    100000|     100|0.81785457|  PASSED  
          sts_serial|  11|    100000|     100|0.61013087|  PASSED  
          sts_serial|  12|    100000|     100|0.37122881|  PASSED  
          sts_serial|  12|    100000|     100|0.83276111|  PASSED  
          sts_serial|  13|    100000|     100|0.15340734|  PASSED  
          sts_serial|  13|    100000|     100|0.50770348|  PASSED  
          sts_serial|  14|    100000|     100|0.40113330|  PASSED  
          sts_serial|  14|    100000|     100|0.66882154|  PASSED  
          sts_serial|  15|    100000|     100|0.22852018|  PASSED  
          sts_serial|  15|    100000|     100|0.99530626|   WEAK   
          sts_serial|  16|    100000|     100|0.05032947|  PASSED  
          sts_serial|  16|    100000|     100|0.09505991|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.07717582|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.50298017|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.73516728|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.91969645|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.99797260|   WEAK   
         rgb_bitdist|   6|    100000|     100|0.83634320|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.54896012|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.45017136|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.98136172|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.22248966|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.93442057|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.80062852|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.05430670|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.42073089|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.45820511|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.36033218|  PASSED  
    rgb_permutations|   2|    100000|     100|0.97870838|  PASSED  
    rgb_permutations|   3|    100000|     100|0.10978044|  PASSED  
    rgb_permutations|   4|    100000|     100|0.88119277|  PASSED  
    rgb_permutations|   5|    100000|     100|0.91871342|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.63623316|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.71961419|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.44319112|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.00914821|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.99671455|   WEAK   
      rgb_lagged_sum|   5|   1000000|     100|0.15503716|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.90920372|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.87919713|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.00778194|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.48927415|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.79184846|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.95936530|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.26788689|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.96461220|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.67984168|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.83802343|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.91513037|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.13932338|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.33628821|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.09618015|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.37693455|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.54238640|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.17697379|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.08628395|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.97893926|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.26930372|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.90142378|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.17156131|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.21428111|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.12416719|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.94020468|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.90333083|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.83443055|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.81764149|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.15022660|  PASSED  
             dab_dct| 256|     50000|       1|0.61402921|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.78757656|  PASSED  
        dab_filltree|  32|  15000000|       1|0.83927293|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.75037239|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.13084301|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.69487365|  PASSED  

real	55m55.507s
user	52m16.832s
sys	3m35.268s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x10cf2607
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x10cf2607
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x10cf2607
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -5.0  p =1-1.7e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x10cf2607
length= 512 megabytes (2^29 bytes), time= 12.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x10cf2607
length= 1 gigabyte (2^30 bytes), time= 24.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x10cf2607
length= 2 gigabytes (2^31 bytes), time= 46.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.7  p =1-9.6e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x10cf2607
length= 4 gigabytes (2^32 bytes), time= 90.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  1.6e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x10cf2607
length= 4.500 gigabytes (2^32.170 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.8  p =  1.0e-3   unusual          
  ...and 155 test result(s) without anomalies


real	1m43.046s
user	1m39.980s
sys	0m2.920s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x272d809
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x272d809
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.8  p =  3.3e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x272d809
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x272d809
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x272d809
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  +5.2  p =  2.2e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x272d809
length= 2 gigabytes (2^31 bytes), time= 41.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.4e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x272d809
length= 4 gigabytes (2^32 bytes), time= 83.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x272d809
length= 5.000 gigabytes (2^32.322 bytes), time= 105 seconds
  no anomalies in 159 test result(s)


real	1m45.636s
user	1m42.368s
sys	0m3.108s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xce0912ce
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xce0912ce
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.2  p = 0.011     unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xce0912ce
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xce0912ce
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xce0912ce
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xce0912ce
length= 2 gigabytes (2^31 bytes), time= 41.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xce0912ce
length= 4 gigabytes (2^32 bytes), time= 80.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xce0912ce
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 159 test result(s)


real	1m41.787s
user	1m38.580s
sys	0m3.080s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa4b67b29
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa4b67b29
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xa4b67b29
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xa4b67b29
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xa4b67b29
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xa4b67b29
length= 2 gigabytes (2^31 bytes), time= 42.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xa4b67b29
length= 4 gigabytes (2^32 bytes), time= 81.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xa4b67b29
length= 8 gigabytes (2^33 bytes), time= 166 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xa4b67b29
length= 16 gigabytes (2^34 bytes), time= 337 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xa4b67b29
length= 32 gigabytes (2^35 bytes), time= 675 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xa4b67b29
length= 64 gigabytes (2^36 bytes), time= 1363 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xa4b67b29
length= 128 gigabytes (2^37 bytes), time= 2728 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +7.2  p =  2.1e-3   unusual          
  ...and 195 test result(s) without anomalies

rng=RNG_stdin32, seed=0xa4b67b29
length= 169.250 gigabytes (2^37.403 bytes), time= 3605 seconds
  no anomalies in 201 test result(s)


real	60m5.476s
user	58m17.204s
sys	1m44.340s
*/
