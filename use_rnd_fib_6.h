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
/// @created on 2019-12-18 01:27:56 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 34ad2af5-13d2-41ad-91c6-3a57fb71c743                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib6;
/* TEST00
time ./MRndCPP 10 
2081380970
2217102834
767025141
666141267
3082540733
2684899364
463511456
700845793
75980505
789290638
12552766132903402612

real	0m2.292s
user	0m2.288s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.21e+07  |1132273132|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.73460657|  PASSED  

real	0m22.136s
user	0m22.607s
sys	0m0.526s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xeac7bec3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xeac7bec3
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xeac7bec3
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xeac7bec3
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-2,T)                  R=  -8.6  p =1-8.9e-5   mildly suspicious
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xeac7bec3
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xeac7bec3
length= 1.500 gigabytes (2^30.585 bytes), time= 32.4 seconds
  no anomalies in 187 test result(s)


real	0m33.223s
user	0m32.863s
sys	0m1.174s
*/
/* TEST00
time ./MRndCPP 10 
2081380970
2217102834
767025141
666141267
3082540733
2684899364
463511456
700845793
75980505
789290638
12552766132903402612

real	0m2.286s
user	0m2.286s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.22e+07  |3537014576|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.24518588|  PASSED  

real	0m21.975s
user	0m22.350s
sys	0m0.689s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x550c1e32
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x550c1e32
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  7.8e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x550c1e32
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +6.1  p =  3.2e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x550c1e32
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x550c1e32
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x550c1e32
length= 2 gigabytes (2^31 bytes), time= 42.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x550c1e32
length= 4 gigabytes (2^32 bytes), time= 81.8 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x550c1e32
length= 8 gigabytes (2^33 bytes), time= 162 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x550c1e32
length= 15.000 gigabytes (2^33.907 bytes), time= 300 seconds
  no anomalies in 226 test result(s)


real	5m1.267s
user	4m59.047s
sys	0m10.329s
*/
/* TEST00
time ./MRndCPP 12 
2081380970
2217102834
767025141
666141267
3082540733
2684899364
463511456
700845793
75980505
789290638
11426501760210891085

real	0m9.131s
user	0m9.130s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.33e+07  |3906784804|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.46233480|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.72368913|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.08916966|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.95519517|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.28263457|  PASSED  
        diehard_opso|   0|   2097152|     100|0.66026685|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.50429545|  PASSED  
         diehard_dna|   0|   2097152|     100|0.15184167|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.52129218|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.44537609|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.43004782|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.59332099|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.41768134|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.27763168|  PASSED  
        diehard_sums|   0|       100|     100|0.00215642|   WEAK   
        diehard_runs|   0|    100000|     100|0.86819387|  PASSED  
        diehard_runs|   0|    100000|     100|0.88990209|  PASSED  
       diehard_craps|   0|    200000|     100|0.63593080|  PASSED  
       diehard_craps|   0|    200000|     100|0.67100641|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.94440746|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.91986614|  PASSED  
         sts_monobit|   1|    100000|     100|0.00746156|  PASSED  
            sts_runs|   2|    100000|     100|0.42146023|  PASSED  
          sts_serial|   1|    100000|     100|0.48490499|  PASSED  
          sts_serial|   2|    100000|     100|0.64886824|  PASSED  
          sts_serial|   3|    100000|     100|0.24959979|  PASSED  
          sts_serial|   3|    100000|     100|0.99111389|  PASSED  
          sts_serial|   4|    100000|     100|0.29221191|  PASSED  
          sts_serial|   4|    100000|     100|0.60900916|  PASSED  
          sts_serial|   5|    100000|     100|0.23040088|  PASSED  
          sts_serial|   5|    100000|     100|0.94094904|  PASSED  
          sts_serial|   6|    100000|     100|0.74623757|  PASSED  
          sts_serial|   6|    100000|     100|0.02640406|  PASSED  
          sts_serial|   7|    100000|     100|0.82836352|  PASSED  
          sts_serial|   7|    100000|     100|0.29817900|  PASSED  
          sts_serial|   8|    100000|     100|0.55225589|  PASSED  
          sts_serial|   8|    100000|     100|0.84271789|  PASSED  
          sts_serial|   9|    100000|     100|0.55544758|  PASSED  
          sts_serial|   9|    100000|     100|0.95900054|  PASSED  
          sts_serial|  10|    100000|     100|0.87935296|  PASSED  
          sts_serial|  10|    100000|     100|0.85858838|  PASSED  
          sts_serial|  11|    100000|     100|0.63447150|  PASSED  
          sts_serial|  11|    100000|     100|0.98783224|  PASSED  
          sts_serial|  12|    100000|     100|0.54969191|  PASSED  
          sts_serial|  12|    100000|     100|0.61254058|  PASSED  
          sts_serial|  13|    100000|     100|0.35507269|  PASSED  
          sts_serial|  13|    100000|     100|0.08857755|  PASSED  
          sts_serial|  14|    100000|     100|0.54618829|  PASSED  
          sts_serial|  14|    100000|     100|0.07364467|  PASSED  
          sts_serial|  15|    100000|     100|0.18073805|  PASSED  
          sts_serial|  15|    100000|     100|0.90452360|  PASSED  
          sts_serial|  16|    100000|     100|0.51288804|  PASSED  
          sts_serial|  16|    100000|     100|0.21773859|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.22385018|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.45361444|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.91272976|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.46366146|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.97716991|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.42963970|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.61610259|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.82953862|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.89357204|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.97594084|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.76955916|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.91930390|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.17278890|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.01173473|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.82796339|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.00069221|   WEAK   
    rgb_permutations|   2|    100000|     100|0.68171482|  PASSED  
    rgb_permutations|   3|    100000|     100|0.15606677|  PASSED  
    rgb_permutations|   4|    100000|     100|0.37415353|  PASSED  
    rgb_permutations|   5|    100000|     100|0.55943791|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.81527639|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.96272331|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.76702470|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.86925459|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.23327794|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.94953525|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.62861709|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.61641093|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.75085946|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.03387240|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.78756341|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.99069369|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.91944246|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.20511997|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.81445993|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.87936559|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.07507201|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.93383342|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.88888876|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.08901906|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.68443672|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.40389866|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.79673444|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.20110577|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.92155240|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.94478508|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.62906663|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.58360170|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.16933214|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.71572968|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.70487210|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.58541319|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.16926673|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.58171560|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.42048695|  PASSED  
             dab_dct| 256|     50000|       1|0.97007602|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.45173413|  PASSED  
        dab_filltree|  32|  15000000|       1|0.64724013|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.66022207|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.35352190|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.51726336|  PASSED  

real	36m44.916s
user	39m2.424s
sys	3m59.416s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x61a96ce0
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x61a96ce0
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x61a96ce0
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x61a96ce0
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x61a96ce0
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x61a96ce0
length= 2 gigabytes (2^31 bytes), time= 42.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x61a96ce0
length= 4 gigabytes (2^32 bytes), time= 81.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +7.5  p =  1.5e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x61a96ce0
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]FPF-14+6/16:all2          R=  -1.8  p =1-9.8e-5   unusual          
  ...and 206 test result(s) without anomalies


real	1m42.074s
user	1m41.241s
sys	0m3.533s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa583db7d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa583db7d
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xa583db7d
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xa583db7d
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa583db7d
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xa583db7d
length= 2 gigabytes (2^31 bytes), time= 42.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-1,T)                  R=  -8.2  p =1-2.1e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0xa583db7d
length= 4 gigabytes (2^32 bytes), time= 81.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xa583db7d
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.4  p =  1.6e-3   unusual          
  ...and 206 test result(s) without anomalies


real	1m42.275s
user	1m41.353s
sys	0m3.651s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xe9a2fd7f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xe9a2fd7f
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xe9a2fd7f
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xe9a2fd7f
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xe9a2fd7f
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xe9a2fd7f
length= 2 gigabytes (2^31 bytes), time= 42.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xe9a2fd7f
length= 4 gigabytes (2^32 bytes), time= 81.1 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xe9a2fd7f
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 207 test result(s)


real	1m41.899s
user	1m41.137s
sys	0m3.471s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4cf1c4d2
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4cf1c4d2
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4cf1c4d2
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4cf1c4d2
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x4cf1c4d2
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4cf1c4d2
length= 2 gigabytes (2^31 bytes), time= 42.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x4cf1c4d2
length= 4 gigabytes (2^32 bytes), time= 81.6 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x4cf1c4d2
length= 8 gigabytes (2^33 bytes), time= 161 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+4,13-3,T)         R=  -7.9  p =1-1.8e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x4cf1c4d2
length= 16 gigabytes (2^34 bytes), time= 319 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x4cf1c4d2
length= 32 gigabytes (2^35 bytes), time= 626 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x4cf1c4d2
length= 64 gigabytes (2^36 bytes), time= 1255 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x4cf1c4d2
length= 128 gigabytes (2^37 bytes), time= 2504 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x4cf1c4d2
length= 185.500 gigabytes (2^37.535 bytes), time= 3604 seconds
  no anomalies in 263 test result(s)


real	60m5.087s
user	59m40.978s
sys	2m2.601s
*/
/* TEST00
time ./MRndCPP 10 
2081380970
2217102834
767025141
666141267
3082540733
2684899364
463511456
700845793
75980505
789290638
12552766132903402612

real	0m3.238s
user	0m3.232s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.10e+07  |2908391238|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.67790212|  PASSED  

real	0m25.108s
user	0m24.548s
sys	0m0.520s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x10cd796b
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x10cd796b
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x10cd796b
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x10cd796b
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:cross        R=  -2.3  p =1-7.6e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x10cd796b
length= 1 gigabyte (2^30 bytes), time= 23.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x10cd796b
length= 2 gigabytes (2^31 bytes), time= 46.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x10cd796b
length= 4 gigabytes (2^32 bytes), time= 88.6 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x10cd796b
length= 8 gigabytes (2^33 bytes), time= 183 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x10cd796b
length= 16 gigabytes (2^34 bytes), time= 369 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x10cd796b
length= 32 gigabytes (2^35 bytes), time= 734 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x10cd796b
length= 43.250 gigabytes (2^35.435 bytes), time= 1004 seconds
  no anomalies in 242 test result(s)


real	16m45.374s
user	16m26.816s
sys	0m17.420s
*/
