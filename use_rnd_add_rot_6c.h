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
/// @created on 2019-12-18 20:15:20 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 3051d1f3-b108-44f9-abae-12d4ea98b4a1                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot6c;
/* TEST00
time ./MRndCPP 
3622537629
1121367211
770772988
3841210759
455793676
1020152752
4611670500323082599

real	0m18.320s
user	0m18.292s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.60e+07  | 807766255|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.74280345|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.53539801|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.85627196|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.31899870|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.40657385|  PASSED  
        diehard_opso|   0|   2097152|     100|0.15538286|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.37002193|  PASSED  
         diehard_dna|   0|   2097152|     100|0.42994106|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.70194426|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.93640546|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.81757364|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.64002365|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.14814193|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.71964664|  PASSED  
        diehard_sums|   0|       100|     100|0.00210981|   WEAK   
        diehard_runs|   0|    100000|     100|0.43164893|  PASSED  
        diehard_runs|   0|    100000|     100|0.59891632|  PASSED  
       diehard_craps|   0|    200000|     100|0.30085219|  PASSED  
       diehard_craps|   0|    200000|     100|0.98314429|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.84011662|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.88657623|  PASSED  
         sts_monobit|   1|    100000|     100|0.43602031|  PASSED  
            sts_runs|   2|    100000|     100|0.48161373|  PASSED  
          sts_serial|   1|    100000|     100|0.21830111|  PASSED  
          sts_serial|   2|    100000|     100|0.18805002|  PASSED  
          sts_serial|   3|    100000|     100|0.57860764|  PASSED  
          sts_serial|   3|    100000|     100|0.95486294|  PASSED  
          sts_serial|   4|    100000|     100|0.90314298|  PASSED  
          sts_serial|   4|    100000|     100|0.23819608|  PASSED  
          sts_serial|   5|    100000|     100|0.39941406|  PASSED  
          sts_serial|   5|    100000|     100|0.02741745|  PASSED  
          sts_serial|   6|    100000|     100|0.44544027|  PASSED  
          sts_serial|   6|    100000|     100|0.30726650|  PASSED  
          sts_serial|   7|    100000|     100|0.06857810|  PASSED  
          sts_serial|   7|    100000|     100|0.26200523|  PASSED  
          sts_serial|   8|    100000|     100|0.78724357|  PASSED  
          sts_serial|   8|    100000|     100|0.94762798|  PASSED  
          sts_serial|   9|    100000|     100|0.13252186|  PASSED  
          sts_serial|   9|    100000|     100|0.00790592|  PASSED  
          sts_serial|  10|    100000|     100|0.48577491|  PASSED  
          sts_serial|  10|    100000|     100|0.88447649|  PASSED  
          sts_serial|  11|    100000|     100|0.45260680|  PASSED  
          sts_serial|  11|    100000|     100|0.54130525|  PASSED  
          sts_serial|  12|    100000|     100|0.14122722|  PASSED  
          sts_serial|  12|    100000|     100|0.41894125|  PASSED  
          sts_serial|  13|    100000|     100|0.34158031|  PASSED  
          sts_serial|  13|    100000|     100|0.73199941|  PASSED  
          sts_serial|  14|    100000|     100|0.97617144|  PASSED  
          sts_serial|  14|    100000|     100|0.71302325|  PASSED  
          sts_serial|  15|    100000|     100|0.33801256|  PASSED  
          sts_serial|  15|    100000|     100|0.93398004|  PASSED  
          sts_serial|  16|    100000|     100|0.81191643|  PASSED  
          sts_serial|  16|    100000|     100|0.83314958|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.05927190|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.93587022|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.85390164|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.96470597|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.23039715|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.10014169|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.78490572|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.46048080|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.90088153|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.02547236|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.78825783|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.94675256|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.73616625|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.04652438|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.01375979|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.43400506|  PASSED  
    rgb_permutations|   2|    100000|     100|0.88198518|  PASSED  
    rgb_permutations|   3|    100000|     100|0.95029862|  PASSED  
    rgb_permutations|   4|    100000|     100|0.97577815|  PASSED  
    rgb_permutations|   5|    100000|     100|0.58484482|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.13119688|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.60788017|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.23184508|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.02885144|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.91067358|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.54197632|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.42216282|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.96050957|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.70706156|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.03102484|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.83554409|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.95417545|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.99975838|   WEAK   
      rgb_lagged_sum|  13|   1000000|     100|0.24791107|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.46735051|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.06846229|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.71169537|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.91643043|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.52326901|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.79096564|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.86170074|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.16904565|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.85149013|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.97277525|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.87284599|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.86257750|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.23446146|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.92284377|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.58120611|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.01603392|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.96216611|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.99488316|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.08034538|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.22954991|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.39119024|  PASSED  
             dab_dct| 256|     50000|       1|0.46243542|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.70097287|  PASSED  
        dab_filltree|  32|  15000000|       1|0.81999427|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.46476321|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.65304381|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.77021128|  PASSED  

real	56m54.670s
user	53m11.832s
sys	3m38.992s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5249d039
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5249d039
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5249d039
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.0  p =  2.7e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5249d039
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.0  p =  1.6e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5249d039
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.7  p =  3.3e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5249d039
length= 2 gigabytes (2^31 bytes), time= 41.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.5  p =  4.0e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5249d039
length= 4 gigabytes (2^32 bytes), time= 80.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x5249d039
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  no anomalies in 159 test result(s)


real	1m40.887s
user	1m37.608s
sys	0m3.092s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x89178a5a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x89178a5a
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+5,13-5,T)                  R=  -6.6  p =1-3.7e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x89178a5a
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +6.4  p =  1.7e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x89178a5a
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.3  p =1-8.2e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x89178a5a
length= 1 gigabyte (2^30 bytes), time= 22.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x89178a5a
length= 2 gigabytes (2^31 bytes), time= 42.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x89178a5a
length= 4 gigabytes (2^32 bytes), time= 85.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x89178a5a
length= 4.750 gigabytes (2^32.248 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.2  p =1-5.9e-3   unusual          
  ...and 158 test result(s) without anomalies


real	1m42.068s
user	1m38.932s
sys	0m3.028s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x71ddbe95
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x71ddbe95
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-3,T)                  R=  +8.2  p =  1.1e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x71ddbe95
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x71ddbe95
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x71ddbe95
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x71ddbe95
length= 2 gigabytes (2^31 bytes), time= 41.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x71ddbe95
length= 4 gigabytes (2^32 bytes), time= 80.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x71ddbe95
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  no anomalies in 159 test result(s)


real	1m40.978s
user	1m37.540s
sys	0m3.324s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7838bd8d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7838bd8d
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7838bd8d
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7838bd8d
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7838bd8d
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7838bd8d
length= 2 gigabytes (2^31 bytes), time= 41.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x7838bd8d
length= 4 gigabytes (2^32 bytes), time= 80.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x7838bd8d
length= 8 gigabytes (2^33 bytes), time= 164 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x7838bd8d
length= 16 gigabytes (2^34 bytes), time= 336 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x7838bd8d
length= 32 gigabytes (2^35 bytes), time= 676 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x7838bd8d
length= 64 gigabytes (2^36 bytes), time= 1368 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x7838bd8d
length= 128 gigabytes (2^37 bytes), time= 2745 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x7838bd8d
length= 168.000 gigabytes (2^37.392 bytes), time= 3605 seconds
  no anomalies in 201 test result(s)


real	60m5.527s
user	58m22.604s
sys	1m39.396s
*/
