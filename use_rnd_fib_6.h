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

namespace MRnd {

using TMRnd = RndFib6;

}
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
/* TEST00
time ./MRndCPP 12 
1512313715
4171169730
2592040410
1980251209
1587830741
983945886
808823459
28711206
803171047
4223441885
15775301281931141676

real	0m12.581s
user	0m12.534s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.19e+07  |3558608331|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.17622154|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.67433499|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.39383822|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.84521756|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.12819017|  PASSED  
        diehard_opso|   0|   2097152|     100|0.17445544|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.45160133|  PASSED  
         diehard_dna|   0|   2097152|     100|0.33947593|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.36469404|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.43628393|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.78148856|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.50605535|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.48289203|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.85596155|  PASSED  
        diehard_sums|   0|       100|     100|0.05684412|  PASSED  
        diehard_runs|   0|    100000|     100|0.08543353|  PASSED  
        diehard_runs|   0|    100000|     100|0.00745718|  PASSED  
       diehard_craps|   0|    200000|     100|0.27835080|  PASSED  
       diehard_craps|   0|    200000|     100|0.90522335|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.46798075|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.89095498|  PASSED  
         sts_monobit|   1|    100000|     100|0.93439053|  PASSED  
            sts_runs|   2|    100000|     100|0.91828225|  PASSED  
          sts_serial|   1|    100000|     100|0.47929373|  PASSED  
          sts_serial|   2|    100000|     100|0.99795017|   WEAK   
          sts_serial|   3|    100000|     100|0.33513821|  PASSED  
          sts_serial|   3|    100000|     100|0.85976585|  PASSED  
          sts_serial|   4|    100000|     100|0.95897339|  PASSED  
          sts_serial|   4|    100000|     100|0.35718153|  PASSED  
          sts_serial|   5|    100000|     100|0.13950929|  PASSED  
          sts_serial|   5|    100000|     100|0.43107378|  PASSED  
          sts_serial|   6|    100000|     100|0.35586942|  PASSED  
          sts_serial|   6|    100000|     100|0.10078729|  PASSED  
          sts_serial|   7|    100000|     100|0.86667265|  PASSED  
          sts_serial|   7|    100000|     100|0.88110473|  PASSED  
          sts_serial|   8|    100000|     100|0.98067337|  PASSED  
          sts_serial|   8|    100000|     100|0.68301710|  PASSED  
          sts_serial|   9|    100000|     100|0.05944881|  PASSED  
          sts_serial|   9|    100000|     100|0.03183858|  PASSED  
          sts_serial|  10|    100000|     100|0.89029099|  PASSED  
          sts_serial|  10|    100000|     100|0.40461188|  PASSED  
          sts_serial|  11|    100000|     100|0.78751587|  PASSED  
          sts_serial|  11|    100000|     100|0.31760459|  PASSED  
          sts_serial|  12|    100000|     100|0.82531225|  PASSED  
          sts_serial|  12|    100000|     100|0.90449285|  PASSED  
          sts_serial|  13|    100000|     100|0.70858705|  PASSED  
          sts_serial|  13|    100000|     100|0.43251379|  PASSED  
          sts_serial|  14|    100000|     100|0.99696786|   WEAK   
          sts_serial|  14|    100000|     100|0.34608461|  PASSED  
          sts_serial|  15|    100000|     100|0.95974808|  PASSED  
          sts_serial|  15|    100000|     100|0.79213013|  PASSED  
          sts_serial|  16|    100000|     100|0.99841677|   WEAK   
          sts_serial|  16|    100000|     100|0.91638650|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.19481610|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.11078216|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.46381031|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.81841696|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.77022876|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.76858804|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.50862332|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.30424332|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.03581822|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.23667573|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.13546007|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.06309888|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.88570454|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.86680490|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.22397912|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.29219142|  PASSED  
    rgb_permutations|   2|    100000|     100|0.38353328|  PASSED  
    rgb_permutations|   3|    100000|     100|0.84506461|  PASSED  
    rgb_permutations|   4|    100000|     100|0.77842499|  PASSED  
    rgb_permutations|   5|    100000|     100|0.60986556|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.96191947|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.86765034|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.02702249|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.09233157|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.24152722|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.51388234|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.43930367|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.63475619|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.27821724|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.00212402|   WEAK   
      rgb_lagged_sum|  10|   1000000|     100|0.61388513|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.97792282|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.58420923|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.42197205|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.61082364|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.31894085|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.32391056|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.99587194|   WEAK   
      rgb_lagged_sum|  18|   1000000|     100|0.36304857|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.27175889|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.61946783|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.09650557|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.04754411|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.30851118|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.62749562|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.76491599|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.84622856|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.76857175|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.62166800|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.12027478|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.88319319|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.81050416|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.64032611|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.46629386|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.34287505|  PASSED  
             dab_dct| 256|     50000|       1|0.32873600|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.27604421|  PASSED  
        dab_filltree|  32|  15000000|       1|0.24203781|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.50167837|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.95293043|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.70384872|  PASSED  

real	65m18.800s
user	57m25.964s
sys	7m46.507s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x288202fd
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x288202fd
length= 128 megabytes (2^27 bytes), time= 3.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x288202fd
length= 256 megabytes (2^28 bytes), time= 8.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x288202fd
length= 512 megabytes (2^29 bytes), time= 16.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.5  p =  7.2e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x288202fd
length= 1 gigabyte (2^30 bytes), time= 31.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x288202fd
length= 2 gigabytes (2^31 bytes), time= 60.1 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x288202fd
length= 4 gigabytes (2^32 bytes), time= 120 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x288202fd
length= 8 gigabytes (2^33 bytes), time= 234 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x288202fd
length= 16 gigabytes (2^34 bytes), time= 453 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x288202fd
length= 32 gigabytes (2^35 bytes), time= 898 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.2  p =  1.8e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x288202fd
length= 64 gigabytes (2^36 bytes), time= 1805 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x288202fd
length= 128 gigabytes (2^37 bytes), time= 3573 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x288202fd
length= 129.000 gigabytes (2^37.011 bytes), time= 3600 seconds
  no anomalies in 258 test result(s)


real	60m1.761s
user	58m44.565s
sys	1m19.425s
*/
/* TEST00
time ./MRndCPP 12 
1512313715
4171169730
2592040410
1980251209
1587830741
983945886
808823459
28711206
803171047
4223441885
15775301281931141676

real	0m18.868s
user	0m18.861s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.46e+07  |2925264172|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.96661861|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.15893121|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.14824797|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.77144085|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.89852266|  PASSED  
        diehard_opso|   0|   2097152|     100|0.25951518|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.91941987|  PASSED  
         diehard_dna|   0|   2097152|     100|0.97511764|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.81230641|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.87453557|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.31899023|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.55596295|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.03899542|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.32550666|  PASSED  
        diehard_sums|   0|       100|     100|0.28329303|  PASSED  
        diehard_runs|   0|    100000|     100|0.49524319|  PASSED  
        diehard_runs|   0|    100000|     100|0.32486098|  PASSED  
       diehard_craps|   0|    200000|     100|0.06007076|  PASSED  
       diehard_craps|   0|    200000|     100|0.04414856|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.03585859|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.92723717|  PASSED  
         sts_monobit|   1|    100000|     100|0.36599857|  PASSED  
            sts_runs|   2|    100000|     100|0.21274712|  PASSED  
          sts_serial|   1|    100000|     100|0.85901336|  PASSED  
          sts_serial|   2|    100000|     100|0.69223419|  PASSED  
          sts_serial|   3|    100000|     100|0.27650333|  PASSED  
          sts_serial|   3|    100000|     100|0.20247223|  PASSED  
          sts_serial|   4|    100000|     100|0.28680721|  PASSED  
          sts_serial|   4|    100000|     100|0.77474796|  PASSED  
          sts_serial|   5|    100000|     100|0.47346652|  PASSED  
          sts_serial|   5|    100000|     100|0.15485693|  PASSED  
          sts_serial|   6|    100000|     100|0.87847016|  PASSED  
          sts_serial|   6|    100000|     100|0.51839013|  PASSED  
          sts_serial|   7|    100000|     100|0.99495378|  PASSED  
          sts_serial|   7|    100000|     100|0.89737114|  PASSED  
          sts_serial|   8|    100000|     100|0.87527171|  PASSED  
          sts_serial|   8|    100000|     100|0.49697911|  PASSED  
          sts_serial|   9|    100000|     100|0.99972533|   WEAK   
          sts_serial|   9|    100000|     100|0.76469302|  PASSED  
          sts_serial|  10|    100000|     100|0.96752835|  PASSED  
          sts_serial|  10|    100000|     100|0.89459362|  PASSED  
          sts_serial|  11|    100000|     100|0.69883784|  PASSED  
          sts_serial|  11|    100000|     100|0.54108822|  PASSED  
          sts_serial|  12|    100000|     100|0.41993392|  PASSED  
          sts_serial|  12|    100000|     100|0.31243479|  PASSED  
          sts_serial|  13|    100000|     100|0.38294472|  PASSED  
          sts_serial|  13|    100000|     100|0.97235664|  PASSED  
          sts_serial|  14|    100000|     100|0.26709788|  PASSED  
          sts_serial|  14|    100000|     100|0.97655271|  PASSED  
          sts_serial|  15|    100000|     100|0.62000658|  PASSED  
          sts_serial|  15|    100000|     100|0.59030269|  PASSED  
          sts_serial|  16|    100000|     100|0.31468994|  PASSED  
          sts_serial|  16|    100000|     100|0.23469467|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.90514557|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.28442689|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.04994520|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.05938621|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.36714882|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.22088846|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.84385390|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.97726683|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.78580425|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.60114356|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.70657324|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.94428332|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.03930868|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.41568352|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.85921834|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.60972423|  PASSED  
    rgb_permutations|   2|    100000|     100|0.83131591|  PASSED  
    rgb_permutations|   3|    100000|     100|0.60712239|  PASSED  
    rgb_permutations|   4|    100000|     100|0.56785167|  PASSED  
    rgb_permutations|   5|    100000|     100|0.31000800|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.39362068|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.81269916|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.46228409|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.87687323|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.37346588|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.05437537|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.00125190|   WEAK   
      rgb_lagged_sum|   7|   1000000|     100|0.94578899|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.67587153|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.42872453|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.42354491|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.62198302|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.07089973|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.83929041|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.79105978|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.49610158|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.67905114|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.87010290|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.67622013|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.74271704|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.08538731|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.45751162|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.45796266|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.94915863|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.17739497|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.46449766|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.68037312|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.68187229|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.88489499|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.20902621|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.19303764|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.73980113|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.30142607|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.12684452|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.93380770|  PASSED  
             dab_dct| 256|     50000|       1|0.15590967|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.54999502|  PASSED  
        dab_filltree|  32|  15000000|       1|0.30714158|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.26684137|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.69004736|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.33589465|  PASSED  

real	99m33.609s
user	88m8.101s
sys	11m22.323s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x293dafe3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x293dafe3
length= 32 megabytes (2^25 bytes), time= 2.2 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 64 megabytes (2^26 bytes), time= 5.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 128 megabytes (2^27 bytes), time= 9.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 256 megabytes (2^28 bytes), time= 16.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 512 megabytes (2^29 bytes), time= 29.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 1 gigabyte (2^30 bytes), time= 52.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 2 gigabytes (2^31 bytes), time= 96.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 4 gigabytes (2^32 bytes), time= 182 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 8 gigabytes (2^33 bytes), time= 362 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 16 gigabytes (2^34 bytes), time= 719 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 32 gigabytes (2^35 bytes), time= 1407 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  +5.3  p =  1.9e-4   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x293dafe3
length= 64 gigabytes (2^36 bytes), time= 2835 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 128 gigabytes (2^37 bytes), time= 5811 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 256 gigabytes (2^38 bytes), time= 11749 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 512 gigabytes (2^39 bytes), time= 23879 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -5.3  p =1-3.4e-3   unusual          
  [Low1/8]FPF-14+6/16:all           R=  +4.9  p =  4.7e-4   unusual          
  ...and 277 test result(s) without anomalies

rng=RNG_stdin, seed=0x293dafe3
length= 1 terabyte (2^40 bytes), time= 46285 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 2 terabytes (2^41 bytes), time= 90172 seconds
  no anomalies in 299 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 4 terabytes (2^42 bytes), time= 166723 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 8 terabytes (2^43 bytes), time= 302795 seconds
  no anomalies in 322 test result(s)

rng=RNG_stdin, seed=0x293dafe3
length= 9.341 terabytes (2^43.224 bytes), time= 345600 seconds
  no anomalies in 326 test result(s)


real	5760m2.516s
user	5652m50.863s
sys	203m14.875s
*/
