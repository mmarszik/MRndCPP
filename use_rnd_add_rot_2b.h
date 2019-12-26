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
/// @created on 2019-12-18 20:17:32 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 76e44bba-1e68-4230-b3e4-e0f15430783f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot2b;
/* TEST00
time ./MRndCPP 
2879935249
4065401198
2840674606
512108360
3160495581
3377885673
4611630465799241525

real	0m18.404s
user	0m18.340s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.76e+07  |2061916643|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.03853943|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.00213325|   WEAK   
  diehard_rank_32x32|   0|     40000|     100|0.44143184|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.84716036|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.88091931|  PASSED  
        diehard_opso|   0|   2097152|     100|0.92472753|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.08543282|  PASSED  
         diehard_dna|   0|   2097152|     100|0.26217096|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.43171976|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.17119602|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.97877193|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.05961802|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.40913650|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.82084460|  PASSED  
        diehard_sums|   0|       100|     100|0.14881311|  PASSED  
        diehard_runs|   0|    100000|     100|0.99988700|   WEAK   
        diehard_runs|   0|    100000|     100|0.98409221|  PASSED  
       diehard_craps|   0|    200000|     100|0.40537337|  PASSED  
       diehard_craps|   0|    200000|     100|0.90926148|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.86417766|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.34016336|  PASSED  
         sts_monobit|   1|    100000|     100|0.45989526|  PASSED  
            sts_runs|   2|    100000|     100|0.28876161|  PASSED  
          sts_serial|   1|    100000|     100|0.18904363|  PASSED  
          sts_serial|   2|    100000|     100|0.71753571|  PASSED  
          sts_serial|   3|    100000|     100|0.80221020|  PASSED  
          sts_serial|   3|    100000|     100|0.85392921|  PASSED  
          sts_serial|   4|    100000|     100|0.37058432|  PASSED  
          sts_serial|   4|    100000|     100|0.22473551|  PASSED  
          sts_serial|   5|    100000|     100|0.03615143|  PASSED  
          sts_serial|   5|    100000|     100|0.02105143|  PASSED  
          sts_serial|   6|    100000|     100|0.05470670|  PASSED  
          sts_serial|   6|    100000|     100|0.22801986|  PASSED  
          sts_serial|   7|    100000|     100|0.04818542|  PASSED  
          sts_serial|   7|    100000|     100|0.95406221|  PASSED  
          sts_serial|   8|    100000|     100|0.34044895|  PASSED  
          sts_serial|   8|    100000|     100|0.51946463|  PASSED  
          sts_serial|   9|    100000|     100|0.92514397|  PASSED  
          sts_serial|   9|    100000|     100|0.42005262|  PASSED  
          sts_serial|  10|    100000|     100|0.71747632|  PASSED  
          sts_serial|  10|    100000|     100|0.67061031|  PASSED  
          sts_serial|  11|    100000|     100|0.95298956|  PASSED  
          sts_serial|  11|    100000|     100|0.53987462|  PASSED  
          sts_serial|  12|    100000|     100|0.78551521|  PASSED  
          sts_serial|  12|    100000|     100|0.60666022|  PASSED  
          sts_serial|  13|    100000|     100|0.77627690|  PASSED  
          sts_serial|  13|    100000|     100|0.90345544|  PASSED  
          sts_serial|  14|    100000|     100|0.45369015|  PASSED  
          sts_serial|  14|    100000|     100|0.51828980|  PASSED  
          sts_serial|  15|    100000|     100|0.28606887|  PASSED  
          sts_serial|  15|    100000|     100|0.49823396|  PASSED  
          sts_serial|  16|    100000|     100|0.92371976|  PASSED  
          sts_serial|  16|    100000|     100|0.18754610|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.50958200|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.94057166|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.57429059|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.23204497|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.14662450|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.21815208|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.94117127|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.99616384|   WEAK   
         rgb_bitdist|   9|    100000|     100|0.60373609|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.67654580|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.73868912|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.59478501|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.93210642|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.09967238|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.93649006|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.61746268|  PASSED  
    rgb_permutations|   2|    100000|     100|0.53764746|  PASSED  
    rgb_permutations|   3|    100000|     100|0.64650838|  PASSED  
    rgb_permutations|   4|    100000|     100|0.99722857|   WEAK   
    rgb_permutations|   5|    100000|     100|0.72366190|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.89818833|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.24161868|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.97192414|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.64133025|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.52829986|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.60522702|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.64474091|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.28372933|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.65157739|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.14074166|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.40564466|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.81216918|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.20409414|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.03046906|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.72245145|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.60780629|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.80226702|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.49081458|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.24390517|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.84675204|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.99755140|   WEAK   
      rgb_lagged_sum|  21|   1000000|     100|0.96988510|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.07459536|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.85224954|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.97505582|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.86697241|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.84063616|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.03677135|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.41348594|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.79316821|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.56593623|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.75107812|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.40753727|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.24866780|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.82235027|  PASSED  
             dab_dct| 256|     50000|       1|0.66824696|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.95015798|  PASSED  
        dab_filltree|  32|  15000000|       1|0.45014497|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.05996912|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.02379743|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.97818616|  PASSED  

real	58m27.086s
user	54m55.752s
sys	3m27.852s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4bb72294
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4bb72294
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.9  p =1-7.8e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4bb72294
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4bb72294
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x4bb72294
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4bb72294
length= 2 gigabytes (2^31 bytes), time= 41.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x4bb72294
length= 4 gigabytes (2^32 bytes), time= 79.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.0  p = 0.012     unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4bb72294
length= 5.250 gigabytes (2^32.392 bytes), time= 105 seconds
  no anomalies in 160 test result(s)


real	1m45.947s
user	1m42.452s
sys	0m3.088s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdb8ee81c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdb8ee81c
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xdb8ee81c
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xdb8ee81c
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  +4.3  p =  1.4e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdb8ee81c
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  +4.4  p =  1.2e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdb8ee81c
length= 2 gigabytes (2^31 bytes), time= 40.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xdb8ee81c
length= 4 gigabytes (2^32 bytes), time= 80.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xdb8ee81c
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  +4.0  p =  2.5e-3   unusual          
  ...and 158 test result(s) without anomalies


real	1m42.945s
user	1m39.688s
sys	0m3.144s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x25a0eaab
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x25a0eaab
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x25a0eaab
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x25a0eaab
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x25a0eaab
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x25a0eaab
length= 2 gigabytes (2^31 bytes), time= 42.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x25a0eaab
length= 4 gigabytes (2^32 bytes), time= 82.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.6  p =  2.1e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x25a0eaab
length= 5.000 gigabytes (2^32.322 bytes), time= 103 seconds
  no anomalies in 159 test result(s)


real	1m44.232s
user	1m41.124s
sys	0m2.964s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2519d455
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2519d455
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2519d455
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2519d455
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2519d455
length= 1 gigabyte (2^30 bytes), time= 21.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2519d455
length= 2 gigabytes (2^31 bytes), time= 40.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2519d455
length= 4 gigabytes (2^32 bytes), time= 79.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2519d455
length= 8 gigabytes (2^33 bytes), time= 159 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x2519d455
length= 16 gigabytes (2^34 bytes), time= 327 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x2519d455
length= 32 gigabytes (2^35 bytes), time= 658 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x2519d455
length= 64 gigabytes (2^36 bytes), time= 1332 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x2519d455
length= 128 gigabytes (2^37 bytes), time= 2672 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x2519d455
length= 172.500 gigabytes (2^37.430 bytes), time= 3601 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+4,13-1,T)         R=  +8.9  p =  3.2e-4   unusual          
  ...and 200 test result(s) without anomalies


real	60m1.174s
user	58m11.192s
sys	1m45.936s
*/
