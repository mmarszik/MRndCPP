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
/// @created on 2020-01-01 18:35:02 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e2451ddb-da73-44a5-a148-6c01dba38de6                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_wyhash64m.h"

using TRnd = RndWyhash64m_0;
/* TEST00
time ./MRndCPP 10 
4024201812
2477793677
477949105
4158765349
2938368548
3026072107
2213534633
788899272
4277323452
567142895
9523540150327040907

real	0m3.393s
user	0m3.393s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.22e+07  | 372411678|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.92910077|  PASSED  

real	0m22.045s
user	0m22.537s
sys	0m0.677s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x9d4fa437
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x9d4fa437
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x9d4fa437
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x9d4fa437
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x9d4fa437
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x9d4fa437
length= 1.500 gigabytes (2^30.585 bytes), time= 32.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.8e-3   unusual          
  ...and 186 test result(s) without anomalies


real	0m33.113s
user	0m32.897s
sys	0m1.090s
*/
/* TEST00
time ./MRndCPP 10 
4024201812
2477793677
477949105
4158765349
2938368548
3026072107
2213534633
788899272
4277323452
567142895
9523540150327040907

real	0m3.481s
user	0m3.471s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.00e+07  | 593721463|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.06512448|  PASSED  

real	0m22.194s
user	0m22.868s
sys	0m0.648s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x1d80a1b9
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x1d80a1b9
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 512 megabytes (2^29 bytes), time= 11.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 1 gigabyte (2^30 bytes), time= 22.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 2 gigabytes (2^31 bytes), time= 43.7 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 4 gigabytes (2^32 bytes), time= 84.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 8 gigabytes (2^33 bytes), time= 167 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x1d80a1b9
length= 14.750 gigabytes (2^33.883 bytes), time= 306 seconds
  no anomalies in 226 test result(s)


real	5m6.425s
user	5m4.482s
sys	0m10.890s
*/
/* TEST00
time ./MRndCPP 12 
4024201812
2477793677
477949105
4158765349
2938368548
3026072107
2213534633
788899272
4277323452
567142895
15751677746959258212

real	0m13.581s
user	0m13.554s
sys	0m0.024s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.09e+07  |1938672838|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.50146416|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.69220011|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.73645505|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.22734791|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.87802642|  PASSED  
        diehard_opso|   0|   2097152|     100|0.54714436|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.46379726|  PASSED  
         diehard_dna|   0|   2097152|     100|0.84162334|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.64044724|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.21787724|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.82688871|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.91509192|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.55165660|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.40760308|  PASSED  
        diehard_sums|   0|       100|     100|0.23351526|  PASSED  
        diehard_runs|   0|    100000|     100|0.98953913|  PASSED  
        diehard_runs|   0|    100000|     100|0.22640073|  PASSED  
       diehard_craps|   0|    200000|     100|0.84300088|  PASSED  
       diehard_craps|   0|    200000|     100|0.82403587|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99927267|   WEAK   
 marsaglia_tsang_gcd|   0|  10000000|     100|0.17544718|  PASSED  
         sts_monobit|   1|    100000|     100|0.89947425|  PASSED  
            sts_runs|   2|    100000|     100|0.11643003|  PASSED  
          sts_serial|   1|    100000|     100|0.84446467|  PASSED  
          sts_serial|   2|    100000|     100|0.59648655|  PASSED  
          sts_serial|   3|    100000|     100|0.39865812|  PASSED  
          sts_serial|   3|    100000|     100|0.74564744|  PASSED  
          sts_serial|   4|    100000|     100|0.99126195|  PASSED  
          sts_serial|   4|    100000|     100|0.73131675|  PASSED  
          sts_serial|   5|    100000|     100|0.50995745|  PASSED  
          sts_serial|   5|    100000|     100|0.29719896|  PASSED  
          sts_serial|   6|    100000|     100|0.87689551|  PASSED  
          sts_serial|   6|    100000|     100|0.53474201|  PASSED  
          sts_serial|   7|    100000|     100|0.99999297|   WEAK   
          sts_serial|   7|    100000|     100|0.39203722|  PASSED  
          sts_serial|   8|    100000|     100|0.24516627|  PASSED  
          sts_serial|   8|    100000|     100|0.00666226|  PASSED  
          sts_serial|   9|    100000|     100|0.22492507|  PASSED  
          sts_serial|   9|    100000|     100|0.17611860|  PASSED  
          sts_serial|  10|    100000|     100|0.07871875|  PASSED  
          sts_serial|  10|    100000|     100|0.63821531|  PASSED  
          sts_serial|  11|    100000|     100|0.02240878|  PASSED  
          sts_serial|  11|    100000|     100|0.75597465|  PASSED  
          sts_serial|  12|    100000|     100|0.10564028|  PASSED  
          sts_serial|  12|    100000|     100|0.65696884|  PASSED  
          sts_serial|  13|    100000|     100|0.05286681|  PASSED  
          sts_serial|  13|    100000|     100|0.03507931|  PASSED  
          sts_serial|  14|    100000|     100|0.40329322|  PASSED  
          sts_serial|  14|    100000|     100|0.95062474|  PASSED  
          sts_serial|  15|    100000|     100|0.53130047|  PASSED  
          sts_serial|  15|    100000|     100|0.73290193|  PASSED  
          sts_serial|  16|    100000|     100|0.89545182|  PASSED  
          sts_serial|  16|    100000|     100|0.45897514|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.82527924|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.59090749|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.07399531|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.99233638|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.52855077|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.78728985|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.67144711|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.66845489|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.60165652|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.64190076|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.99993389|   WEAK   
         rgb_bitdist|  12|    100000|     100|0.87784180|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.15358254|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.26973772|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.03967551|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.03220034|  PASSED  
    rgb_permutations|   2|    100000|     100|0.47826075|  PASSED  
    rgb_permutations|   3|    100000|     100|0.93090006|  PASSED  
    rgb_permutations|   4|    100000|     100|0.62340585|  PASSED  
    rgb_permutations|   5|    100000|     100|0.97984710|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.38161110|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.81502298|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.67341647|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.58451509|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.57207126|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.79153053|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.90206636|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.59837166|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.48846829|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.32167193|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.12156927|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.46093848|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.67092516|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.14660013|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.81085797|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.96470566|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.92504812|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.96205270|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.86508608|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.73984704|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.67965444|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.37660652|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.09334944|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.66530425|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.37931343|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.49639795|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.77314436|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.12559000|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.51413799|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.97740576|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.34576961|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.44067654|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.96034664|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.96323326|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.60877802|  PASSED  
             dab_dct| 256|     50000|       1|0.33097938|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.33425731|  PASSED  
        dab_filltree|  32|  15000000|       1|0.42482715|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.08343268|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.39970604|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.28802500|  PASSED  

real	37m6.816s
user	40m48.963s
sys	3m57.285s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x52078d90
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x52078d90
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x52078d90
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-5,T)         R=  -6.3  p =1-8.4e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x52078d90
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x52078d90
length= 1 gigabyte (2^30 bytes), time= 22.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +7.2  p =  6.8e-4   mildly suspicious
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x52078d90
length= 2 gigabytes (2^31 bytes), time= 42.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x52078d90
length= 4 gigabytes (2^32 bytes), time= 82.7 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x52078d90
length= 5.000 gigabytes (2^32.322 bytes), time= 103 seconds
  no anomalies in 207 test result(s)


real	1m43.779s
user	1m43.086s
sys	0m3.507s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xc1ed31c8
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xc1ed31c8
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xc1ed31c8
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xc1ed31c8
length= 512 megabytes (2^29 bytes), time= 11.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xc1ed31c8
length= 1 gigabyte (2^30 bytes), time= 22.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:B                 R=  +4.3  p =  1.8e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xc1ed31c8
length= 2 gigabytes (2^31 bytes), time= 43.1 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xc1ed31c8
length= 4 gigabytes (2^32 bytes), time= 83.0 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xc1ed31c8
length= 5.000 gigabytes (2^32.322 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-1,T)          R=  -6.9  p =1-1.6e-3   unusual          
  ...and 206 test result(s) without anomalies


real	1m44.366s
user	1m43.385s
sys	0m3.822s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4851ba78
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4851ba78
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4851ba78
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4851ba78
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x4851ba78
length= 1 gigabyte (2^30 bytes), time= 22.1 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +4.5  p =  2.2e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x4851ba78
length= 2 gigabytes (2^31 bytes), time= 42.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.1  p =1-6.1e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x4851ba78
length= 4 gigabytes (2^32 bytes), time= 82.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x4851ba78
length= 5.000 gigabytes (2^32.322 bytes), time= 103 seconds
  no anomalies in 207 test result(s)


real	1m43.503s
user	1m42.874s
sys	0m3.438s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x51574236
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x51574236
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -4.1  p =1-4.6e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x51574236
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x51574236
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x51574236
length= 1 gigabyte (2^30 bytes), time= 22.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x51574236
length= 2 gigabytes (2^31 bytes), time= 42.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x51574236
length= 4 gigabytes (2^32 bytes), time= 82.5 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x51574236
length= 8 gigabytes (2^33 bytes), time= 163 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.2  p =1-4.7e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x51574236
length= 16 gigabytes (2^34 bytes), time= 323 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x51574236
length= 32 gigabytes (2^35 bytes), time= 635 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x51574236
length= 64 gigabytes (2^36 bytes), time= 1272 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x51574236
length= 128 gigabytes (2^37 bytes), time= 2540 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x51574236
length= 182.500 gigabytes (2^37.512 bytes), time= 3601 seconds
  no anomalies in 263 test result(s)


real	60m1.644s
user	59m40.586s
sys	2m5.118s
*/
/* TEST00
time ./MRndCPP 10 
4024201812
2477793677
477949105
4158765349
2938368548
3026072107
2213534633
788899272
4277323452
567142895
9523540150327040907

real	0m4.605s
user	0m4.568s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.98e+07  |3081300005|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.59364698|  PASSED  

real	0m25.442s
user	0m24.896s
sys	0m0.528s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x9cabda4d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x9cabda4d
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x9cabda4d
length= 256 megabytes (2^28 bytes), time= 6.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x9cabda4d
length= 512 megabytes (2^29 bytes), time= 13.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -3.7  p =1-8.6e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x9cabda4d
length= 1 gigabyte (2^30 bytes), time= 25.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x9cabda4d
length= 2 gigabytes (2^31 bytes), time= 48.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x9cabda4d
length= 4 gigabytes (2^32 bytes), time= 93.7 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x9cabda4d
length= 8 gigabytes (2^33 bytes), time= 189 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x9cabda4d
length= 16 gigabytes (2^34 bytes), time= 387 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  +4.6  p =  9.3e-4   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x9cabda4d
length= 32 gigabytes (2^35 bytes), time= 775 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x9cabda4d
length= 41.250 gigabytes (2^35.366 bytes), time= 1000 seconds
  no anomalies in 239 test result(s)


real	16m40.654s
user	16m22.696s
sys	0m16.868s
*/
/* TEST00
time ./MRndCPP 12 
542845562
863352496
4285727559
2348762030
820028972
953963298
2994120542
3297812026
2060184351
1824843209
13512722689536892531

real	0m17.970s
user	0m17.948s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.00e+07  |2026470456|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.01128893|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.30197694|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.33888438|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.32803996|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.53049310|  PASSED  
        diehard_opso|   0|   2097152|     100|0.08649567|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.34065697|  PASSED  
         diehard_dna|   0|   2097152|     100|0.56064375|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.84509407|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.20303799|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.70447638|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.92611295|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.40654103|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.27431955|  PASSED  
        diehard_sums|   0|       100|     100|0.09773951|  PASSED  
        diehard_runs|   0|    100000|     100|0.56778204|  PASSED  
        diehard_runs|   0|    100000|     100|0.64828923|  PASSED  
       diehard_craps|   0|    200000|     100|0.59726440|  PASSED  
       diehard_craps|   0|    200000|     100|0.65161182|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.83458009|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.04018226|  PASSED  
         sts_monobit|   1|    100000|     100|0.01496503|  PASSED  
            sts_runs|   2|    100000|     100|0.41683409|  PASSED  
          sts_serial|   1|    100000|     100|0.50543700|  PASSED  
          sts_serial|   2|    100000|     100|0.62589769|  PASSED  
          sts_serial|   3|    100000|     100|0.90698396|  PASSED  
          sts_serial|   3|    100000|     100|0.47055977|  PASSED  
          sts_serial|   4|    100000|     100|0.99752768|   WEAK   
          sts_serial|   4|    100000|     100|0.54829227|  PASSED  
          sts_serial|   5|    100000|     100|0.55982791|  PASSED  
          sts_serial|   5|    100000|     100|0.77865933|  PASSED  
          sts_serial|   6|    100000|     100|0.28649630|  PASSED  
          sts_serial|   6|    100000|     100|0.28133524|  PASSED  
          sts_serial|   7|    100000|     100|0.17363000|  PASSED  
          sts_serial|   7|    100000|     100|0.51603462|  PASSED  
          sts_serial|   8|    100000|     100|0.24315232|  PASSED  
          sts_serial|   8|    100000|     100|0.67015729|  PASSED  
          sts_serial|   9|    100000|     100|0.79701448|  PASSED  
          sts_serial|   9|    100000|     100|0.64058013|  PASSED  
          sts_serial|  10|    100000|     100|0.59950381|  PASSED  
          sts_serial|  10|    100000|     100|0.90857978|  PASSED  
          sts_serial|  11|    100000|     100|0.95799219|  PASSED  
          sts_serial|  11|    100000|     100|0.22639317|  PASSED  
          sts_serial|  12|    100000|     100|0.90502951|  PASSED  
          sts_serial|  12|    100000|     100|0.79058579|  PASSED  
          sts_serial|  13|    100000|     100|0.96092551|  PASSED  
          sts_serial|  13|    100000|     100|0.32093900|  PASSED  
          sts_serial|  14|    100000|     100|0.60144306|  PASSED  
          sts_serial|  14|    100000|     100|0.61715286|  PASSED  
          sts_serial|  15|    100000|     100|0.68012883|  PASSED  
          sts_serial|  15|    100000|     100|0.87297899|  PASSED  
          sts_serial|  16|    100000|     100|0.59752839|  PASSED  
          sts_serial|  16|    100000|     100|0.64618832|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.93876797|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.50754014|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.87235599|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.62384019|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.05316372|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.62120271|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.14657508|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.10678183|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.85552056|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.32615509|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.68660960|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.69361204|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.50782629|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.66795602|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.86404851|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.44481674|  PASSED  
    rgb_permutations|   2|    100000|     100|0.21049335|  PASSED  
    rgb_permutations|   3|    100000|     100|0.25968191|  PASSED  
    rgb_permutations|   4|    100000|     100|0.28615381|  PASSED  
    rgb_permutations|   5|    100000|     100|0.39121881|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.79441893|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.99395141|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.55599578|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.66093085|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.18218417|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.36530724|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.28222105|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.34995654|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.21754348|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.22894278|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.13576844|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.32725131|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.17918620|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.78656715|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.18756220|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.65626111|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.47677165|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.48251244|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.36410817|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.50347839|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.19794543|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.97325696|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.97705413|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.43315400|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.14554757|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.78889389|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.02283537|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.27906027|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.61472537|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.08198866|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.37221788|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.10825577|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.01746657|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.13949506|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.27963223|  PASSED  
             dab_dct| 256|     50000|       1|0.75937740|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.88428342|  PASSED  
        dab_filltree|  32|  15000000|       1|0.25246607|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.30882570|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.85956766|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.61869538|  PASSED  

real	54m42.106s
user	51m9.588s
sys	3m29.424s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 18000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x84c77c8a
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x84c77c8a
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.8  p =  1.3e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x84c77c8a
length= 256 megabytes (2^28 bytes), time= 6.4 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.1  p =1-7.2e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x84c77c8a
length= 512 megabytes (2^29 bytes), time= 12.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+9,13-8,T)         R=  -4.8  p =1-6.0e-5   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x84c77c8a
length= 1 gigabyte (2^30 bytes), time= 24.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x84c77c8a
length= 2 gigabytes (2^31 bytes), time= 46.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x84c77c8a
length= 4 gigabytes (2^32 bytes), time= 91.0 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x84c77c8a
length= 8 gigabytes (2^33 bytes), time= 187 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x84c77c8a
length= 16 gigabytes (2^34 bytes), time= 380 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x84c77c8a
length= 32 gigabytes (2^35 bytes), time= 751 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x84c77c8a
length= 64 gigabytes (2^36 bytes), time= 1512 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.4  p =1-4.6e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0x84c77c8a
length= 128 gigabytes (2^37 bytes), time= 3020 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-0,T)         R=  +9.0  p =  2.3e-4   unusual          
  ...and 257 test result(s) without anomalies

rng=RNG_stdin, seed=0x84c77c8a
length= 256 gigabytes (2^38 bytes), time= 5974 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x84c77c8a
length= 512 gigabytes (2^39 bytes), time= 12027 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x84c77c8a
length= 771.250 gigabytes (2^39.591 bytes), time= 18002 seconds
  no anomalies in 283 test result(s)


real	300m3.675s
user	294m13.764s
sys	5m18.872s
*/
/* TEST00
time ./MRndCPP 12 
3864483526
1870472252
194495981
4044789706
3934103355
1351232145
2291178386
2331588872
2780637338
942255566
17294725589530039126

real	0m27.945s
user	0m27.926s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
test.sh: line 26: dieharder: command not found

real	0m0.009s
user	0m0.005s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xbdaf63d9
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xbdaf63d9
length= 64 megabytes (2^26 bytes), time= 2.1 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xbdaf63d9
length= 128 megabytes (2^27 bytes), time= 5.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xbdaf63d9
length= 256 megabytes (2^28 bytes), time= 9.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xbdaf63d9
length= 512 megabytes (2^29 bytes), time= 17.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xbdaf63d9
length= 1 gigabyte (2^30 bytes), time= 34.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xbdaf63d9
length= 2 gigabytes (2^31 bytes), time= 68.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xbdaf63d9
length= 4 gigabytes (2^32 bytes), time= 130 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xbdaf63d9
length= 8 gigabytes (2^33 bytes), time= 250 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xbdaf63d9
length= 16 gigabytes (2^34 bytes), time= 493 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xbdaf63d9
length= 32 gigabytes (2^35 bytes), time= 965 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xbdaf63d9
length= 64 gigabytes (2^36 bytes), time= 1933 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.0  p =  6.7e-3   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xbdaf63d9
length= 118.250 gigabytes (2^36.886 bytes), time= 3605 seconds
  no anomalies in 258 test result(s)


real	60m6.214s
user	58m41.845s
sys	1m19.128s
*/
