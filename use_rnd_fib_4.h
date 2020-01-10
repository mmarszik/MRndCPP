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
/// @created on 2019-12-18 01:27:28 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f8b7c0bd-21d4-4dfb-9c91-41312860a097                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib4;
/* TEST00
time ./MRndCPP 10 
3727113059
2244116651
2487557517
454283634
2075784682
2642176750
2014012913
2236011917
2635671722
3284104138
17288421246639911574

real	0m2.320s
user	0m2.319s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.36e+07  |2923580833|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.37486448|  PASSED  

real	0m22.147s
user	0m22.594s
sys	0m0.596s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x6e83cf40
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x6e83cf40
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x6e83cf40
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x6e83cf40
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x6e83cf40
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x6e83cf40
length= 1.500 gigabytes (2^30.585 bytes), time= 32.4 seconds
  no anomalies in 187 test result(s)


real	0m33.220s
user	0m32.760s
sys	0m1.294s
*/
/* TEST00
time ./MRndCPP 10 
3727113059
2244116651
2487557517
454283634
2075784682
2642176750
2014012913
2236011917
2635671722
3284104138
17288421246639911574

real	0m2.331s
user	0m2.319s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.29e+07  |2577032674|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.92678281|  PASSED  

real	0m22.035s
user	0m22.413s
sys	0m0.689s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xc847f33c
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xc847f33c
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xc847f33c
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xc847f33c
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xc847f33c
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xc847f33c
length= 2 gigabytes (2^31 bytes), time= 42.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xc847f33c
length= 4 gigabytes (2^32 bytes), time= 82.1 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xc847f33c
length= 8 gigabytes (2^33 bytes), time= 162 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xc847f33c
length= 15.000 gigabytes (2^33.907 bytes), time= 301 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:B                  R=  -4.3  p =1-1.3e-3   unusual          
  ...and 225 test result(s) without anomalies


real	5m2.375s
user	5m0.577s
sys	0m9.902s
*/
/* TEST00
time ./MRndCPP 12 
3727113059
2244116651
2487557517
454283634
2075784682
2642176750
2014012913
2236011917
2635671722
3284104138
14118764523942821839

real	0m9.080s
user	0m9.076s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.37e+07  |2946067246|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.28931226|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.99467963|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.91424428|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.52117945|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.48080088|  PASSED  
        diehard_opso|   0|   2097152|     100|0.72551489|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.70323788|  PASSED  
         diehard_dna|   0|   2097152|     100|0.41669401|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.84190295|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.89693697|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.26814905|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.45293436|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.73615407|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.78271390|  PASSED  
        diehard_sums|   0|       100|     100|0.04130896|  PASSED  
        diehard_runs|   0|    100000|     100|0.04527843|  PASSED  
        diehard_runs|   0|    100000|     100|0.29069724|  PASSED  
       diehard_craps|   0|    200000|     100|0.00644584|  PASSED  
       diehard_craps|   0|    200000|     100|0.55617063|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.14269602|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.70488981|  PASSED  
         sts_monobit|   1|    100000|     100|0.92070220|  PASSED  
            sts_runs|   2|    100000|     100|0.16604344|  PASSED  
          sts_serial|   1|    100000|     100|0.46713018|  PASSED  
          sts_serial|   2|    100000|     100|0.81978538|  PASSED  
          sts_serial|   3|    100000|     100|0.61951011|  PASSED  
          sts_serial|   3|    100000|     100|0.31005182|  PASSED  
          sts_serial|   4|    100000|     100|0.91064464|  PASSED  
          sts_serial|   4|    100000|     100|0.38622580|  PASSED  
          sts_serial|   5|    100000|     100|0.65676311|  PASSED  
          sts_serial|   5|    100000|     100|0.99962378|   WEAK   
          sts_serial|   6|    100000|     100|0.95715783|  PASSED  
          sts_serial|   6|    100000|     100|0.76999739|  PASSED  
          sts_serial|   7|    100000|     100|0.48706976|  PASSED  
          sts_serial|   7|    100000|     100|0.77416008|  PASSED  
          sts_serial|   8|    100000|     100|0.47957321|  PASSED  
          sts_serial|   8|    100000|     100|0.43692504|  PASSED  
          sts_serial|   9|    100000|     100|0.95637693|  PASSED  
          sts_serial|   9|    100000|     100|0.88187236|  PASSED  
          sts_serial|  10|    100000|     100|0.32560998|  PASSED  
          sts_serial|  10|    100000|     100|0.91832246|  PASSED  
          sts_serial|  11|    100000|     100|0.75513819|  PASSED  
          sts_serial|  11|    100000|     100|0.01245462|  PASSED  
          sts_serial|  12|    100000|     100|0.17434352|  PASSED  
          sts_serial|  12|    100000|     100|0.21024957|  PASSED  
          sts_serial|  13|    100000|     100|0.21649334|  PASSED  
          sts_serial|  13|    100000|     100|0.52386064|  PASSED  
          sts_serial|  14|    100000|     100|0.34823230|  PASSED  
          sts_serial|  14|    100000|     100|0.28057020|  PASSED  
          sts_serial|  15|    100000|     100|0.65766566|  PASSED  
          sts_serial|  15|    100000|     100|0.69794997|  PASSED  
          sts_serial|  16|    100000|     100|0.56988841|  PASSED  
          sts_serial|  16|    100000|     100|0.30293363|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.97638072|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.52770741|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.25193193|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.85094315|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.04670821|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.13298093|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.97348033|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.95329014|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.67358183|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.56631299|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.02774478|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.50474397|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.47655732|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.04209317|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.44037341|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.18779545|  PASSED  
    rgb_permutations|   2|    100000|     100|0.51683148|  PASSED  
    rgb_permutations|   3|    100000|     100|0.90222499|  PASSED  
    rgb_permutations|   4|    100000|     100|0.82866657|  PASSED  
    rgb_permutations|   5|    100000|     100|0.99338209|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.85292599|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.39110799|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.59909724|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.30744618|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.57614374|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.75500612|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.18244558|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.62811043|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.03536249|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.70835987|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.92702855|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.76973997|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.46630563|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.45328999|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.27222375|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.06612013|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.66792639|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.96602790|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.70764987|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.11889085|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.12278443|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.66982810|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.74160464|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.50923623|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.13565242|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.14354371|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.69606842|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.29259584|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.74958694|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.72512183|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.28135340|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.02436088|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.57590882|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.35687346|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.40174126|  PASSED  
             dab_dct| 256|     50000|       1|0.06466926|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.63217415|  PASSED  
        dab_filltree|  32|  15000000|       1|0.78988944|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.91140345|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.14473622|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.08388482|  PASSED  

real	36m55.204s
user	39m10.925s
sys	4m0.414s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xf375f4d3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xf375f4d3
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.9e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xf375f4d3
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xf375f4d3
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xf375f4d3
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.3  p =  7.7e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xf375f4d3
length= 2 gigabytes (2^31 bytes), time= 42.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xf375f4d3
length= 4 gigabytes (2^32 bytes), time= 81.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.5  p =  6.3e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0xf375f4d3
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.4  p =  6.8e-3   unusual          
  ...and 206 test result(s) without anomalies


real	1m41.715s
user	1m40.918s
sys	0m3.536s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x182927c4
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x182927c4
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x182927c4
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x182927c4
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  -8.0  p =1-2.9e-4   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x182927c4
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x182927c4
length= 2 gigabytes (2^31 bytes), time= 42.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x182927c4
length= 4 gigabytes (2^32 bytes), time= 81.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.2  p =1-5.9e-3   unusual          
  [Low1/8]FPF-14+6/16:cross         R=  -2.4  p =1-2.6e-4   unusual          
  ...and 201 test result(s) without anomalies

rng=RNG_stdin, seed=0x182927c4
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  no anomalies in 207 test result(s)


real	1m42.390s
user	1m41.540s
sys	0m3.574s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7daddf93
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7daddf93
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7daddf93
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7daddf93
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7daddf93
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x7daddf93
length= 2 gigabytes (2^31 bytes), time= 42.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]FPF-14+6/16:all           R=  -4.5  p =1-5.4e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x7daddf93
length= 4 gigabytes (2^32 bytes), time= 81.9 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x7daddf93
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-0,T)                  R=  -7.7  p =1-5.5e-4   unusual          
  ...and 206 test result(s) without anomalies


real	1m42.784s
user	1m41.837s
sys	0m3.699s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd7f9877c
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd7f9877c
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd7f9877c
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xd7f9877c
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xd7f9877c
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xd7f9877c
length= 2 gigabytes (2^31 bytes), time= 42.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd7f9877c
length= 4 gigabytes (2^32 bytes), time= 81.5 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xd7f9877c
length= 8 gigabytes (2^33 bytes), time= 161 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xd7f9877c
length= 16 gigabytes (2^34 bytes), time= 318 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xd7f9877c
length= 32 gigabytes (2^35 bytes), time= 626 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xd7f9877c
length= 64 gigabytes (2^36 bytes), time= 1256 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xd7f9877c
length= 128 gigabytes (2^37 bytes), time= 2508 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0xd7f9877c
length= 185.000 gigabytes (2^37.531 bytes), time= 3602 seconds
  no anomalies in 263 test result(s)


real	60m2.789s
user	59m39.149s
sys	2m3.915s
*/
/* TEST00
time ./MRndCPP 10 
3727113059
2244116651
2487557517
454283634
2075784682
2642176750
2014012913
2236011917
2635671722
3284104138
17288421246639911574

real	0m3.229s
user	0m3.224s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.07e+07  |2093520170|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.25967976|  PASSED  

real	0m25.324s
user	0m24.672s
sys	0m0.592s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x54bc13be
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x54bc13be
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x54bc13be
length= 256 megabytes (2^28 bytes), time= 6.3 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x54bc13be
length= 512 megabytes (2^29 bytes), time= 12.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x54bc13be
length= 1 gigabyte (2^30 bytes), time= 23.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x54bc13be
length= 2 gigabytes (2^31 bytes), time= 45.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x54bc13be
length= 4 gigabytes (2^32 bytes), time= 88.2 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x54bc13be
length= 8 gigabytes (2^33 bytes), time= 181 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x54bc13be
length= 16 gigabytes (2^34 bytes), time= 367 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x54bc13be
length= 32 gigabytes (2^35 bytes), time= 732 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x54bc13be
length= 43.250 gigabytes (2^35.435 bytes), time= 1001 seconds
  no anomalies in 242 test result(s)


real	16m42.130s
user	16m21.676s
sys	0m19.328s
*/
/* TEST00
time ./MRndCPP 12 
3963341284
702635029
2073646020
4084818626
4131452977
447353473
4203139806
880088521
142841027
4204854193
13689943419196499754

real	0m12.171s
user	0m12.116s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.74e+07  |   2354702|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.77548650|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.25596630|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.84883981|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.93098434|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.38383822|  PASSED  
        diehard_opso|   0|   2097152|     100|0.21374752|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.97546009|  PASSED  
         diehard_dna|   0|   2097152|     100|0.76568317|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.91111721|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.98412349|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.43795973|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.46116733|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.97897453|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.53883219|  PASSED  
        diehard_sums|   0|       100|     100|0.44733721|  PASSED  
        diehard_runs|   0|    100000|     100|0.26569748|  PASSED  
        diehard_runs|   0|    100000|     100|0.21550111|  PASSED  
       diehard_craps|   0|    200000|     100|0.40703557|  PASSED  
       diehard_craps|   0|    200000|     100|0.29798939|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.90768179|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.94704026|  PASSED  
         sts_monobit|   1|    100000|     100|0.69520834|  PASSED  
            sts_runs|   2|    100000|     100|0.78375604|  PASSED  
          sts_serial|   1|    100000|     100|0.89912492|  PASSED  
          sts_serial|   2|    100000|     100|0.61896970|  PASSED  
          sts_serial|   3|    100000|     100|0.62163291|  PASSED  
          sts_serial|   3|    100000|     100|0.99905011|   WEAK   
          sts_serial|   4|    100000|     100|0.75215513|  PASSED  
          sts_serial|   4|    100000|     100|0.90656461|  PASSED  
          sts_serial|   5|    100000|     100|0.61905422|  PASSED  
          sts_serial|   5|    100000|     100|0.77447282|  PASSED  
          sts_serial|   6|    100000|     100|0.56363352|  PASSED  
          sts_serial|   6|    100000|     100|0.04532372|  PASSED  
          sts_serial|   7|    100000|     100|0.49170072|  PASSED  
          sts_serial|   7|    100000|     100|0.49324814|  PASSED  
          sts_serial|   8|    100000|     100|0.85155442|  PASSED  
          sts_serial|   8|    100000|     100|0.08263400|  PASSED  
          sts_serial|   9|    100000|     100|0.74070031|  PASSED  
          sts_serial|   9|    100000|     100|0.95387458|  PASSED  
          sts_serial|  10|    100000|     100|0.61837612|  PASSED  
          sts_serial|  10|    100000|     100|0.94829513|  PASSED  
          sts_serial|  11|    100000|     100|0.85695278|  PASSED  
          sts_serial|  11|    100000|     100|0.77888483|  PASSED  
          sts_serial|  12|    100000|     100|0.71762474|  PASSED  
          sts_serial|  12|    100000|     100|0.20955682|  PASSED  
          sts_serial|  13|    100000|     100|0.27573745|  PASSED  
          sts_serial|  13|    100000|     100|0.44571315|  PASSED  
          sts_serial|  14|    100000|     100|0.82244620|  PASSED  
          sts_serial|  14|    100000|     100|0.78795114|  PASSED  
          sts_serial|  15|    100000|     100|0.08958957|  PASSED  
          sts_serial|  15|    100000|     100|0.85106265|  PASSED  
          sts_serial|  16|    100000|     100|0.40818981|  PASSED  
          sts_serial|  16|    100000|     100|0.93400957|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.45523517|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.91253104|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.15970645|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.36881196|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.56069983|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.69384288|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.02144054|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.53806736|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.59857344|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.94476468|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.38820170|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.70585904|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.36196931|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.93623780|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.55077451|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.02899274|  PASSED  
    rgb_permutations|   2|    100000|     100|0.66433692|  PASSED  
    rgb_permutations|   3|    100000|     100|0.99064563|  PASSED  
    rgb_permutations|   4|    100000|     100|0.51723233|  PASSED  
    rgb_permutations|   5|    100000|     100|0.21865318|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.45208559|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.10589375|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.87185052|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.95988597|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.92048355|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.37838372|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.49828406|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.98383355|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.70204378|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.98888290|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.06155108|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.80879049|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.58329808|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.69613244|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.62262749|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.77208771|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.74309537|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.03032897|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.61233549|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.41301439|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.91937388|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.24248135|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.36205135|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.28458619|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.47042792|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.26927017|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.88135451|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.24541800|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.84560870|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.34796894|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.80088128|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.96029646|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.45091439|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.74201112|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.38162543|  PASSED  
             dab_dct| 256|     50000|       1|0.78863570|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.66122872|  PASSED  
        dab_filltree|  32|  15000000|       1|0.06851242|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.06492190|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.80770266|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.06551612|  PASSED  

real	68m29.449s
user	60m25.317s
sys	8m2.099s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa8e33e6e
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa8e33e6e
length= 128 megabytes (2^27 bytes), time= 3.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xa8e33e6e
length= 256 megabytes (2^28 bytes), time= 8.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -3.3  p =1-2.3e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xa8e33e6e
length= 512 megabytes (2^29 bytes), time= 16.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa8e33e6e
length= 1 gigabyte (2^30 bytes), time= 31.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xa8e33e6e
length= 2 gigabytes (2^31 bytes), time= 63.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xa8e33e6e
length= 4 gigabytes (2^32 bytes), time= 124 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xa8e33e6e
length= 8 gigabytes (2^33 bytes), time= 244 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xa8e33e6e
length= 16 gigabytes (2^34 bytes), time= 483 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xa8e33e6e
length= 32 gigabytes (2^35 bytes), time= 952 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xa8e33e6e
length= 64 gigabytes (2^36 bytes), time= 1914 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xa8e33e6e
length= 121.250 gigabytes (2^36.922 bytes), time= 3605 seconds
  no anomalies in 258 test result(s)


real	60m7.590s
user	58m45.415s
sys	1m19.174s
*/
/* TEST00
time ./MRndCPP 12 
3963341284
702635029
2073646020
4084818626
4131452977
447353473
4203139806
880088521
142841027
4204854193
13689943419196499754

real	0m13.089s
user	0m13.087s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.58e+07  | 644904879|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.58647867|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.79994099|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.20312852|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.80084102|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.84555029|  PASSED  
        diehard_opso|   0|   2097152|     100|0.67385278|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.36596763|  PASSED  
         diehard_dna|   0|   2097152|     100|0.97761662|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.43267223|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.03016647|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.11892087|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.49616733|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.96644548|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.80862783|  PASSED  
        diehard_sums|   0|       100|     100|0.00159094|   WEAK   
        diehard_runs|   0|    100000|     100|0.92109312|  PASSED  
        diehard_runs|   0|    100000|     100|0.89593368|  PASSED  
       diehard_craps|   0|    200000|     100|0.34988428|  PASSED  
       diehard_craps|   0|    200000|     100|0.51071174|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.36058601|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.33448843|  PASSED  
         sts_monobit|   1|    100000|     100|0.90298008|  PASSED  
            sts_runs|   2|    100000|     100|0.98276865|  PASSED  
          sts_serial|   1|    100000|     100|0.82267106|  PASSED  
          sts_serial|   2|    100000|     100|0.85115358|  PASSED  
          sts_serial|   3|    100000|     100|0.32094729|  PASSED  
          sts_serial|   3|    100000|     100|0.13227760|  PASSED  
          sts_serial|   4|    100000|     100|0.20390621|  PASSED  
          sts_serial|   4|    100000|     100|0.88598928|  PASSED  
          sts_serial|   5|    100000|     100|0.18369154|  PASSED  
          sts_serial|   5|    100000|     100|0.24248831|  PASSED  
          sts_serial|   6|    100000|     100|0.56559455|  PASSED  
          sts_serial|   6|    100000|     100|0.82206562|  PASSED  
          sts_serial|   7|    100000|     100|0.37356594|  PASSED  
          sts_serial|   7|    100000|     100|0.67954475|  PASSED  
          sts_serial|   8|    100000|     100|0.75081268|  PASSED  
          sts_serial|   8|    100000|     100|0.23696275|  PASSED  
          sts_serial|   9|    100000|     100|0.44076379|  PASSED  
          sts_serial|   9|    100000|     100|0.05760990|  PASSED  
          sts_serial|  10|    100000|     100|0.90525776|  PASSED  
          sts_serial|  10|    100000|     100|0.52559876|  PASSED  
          sts_serial|  11|    100000|     100|0.98720120|  PASSED  
          sts_serial|  11|    100000|     100|0.98162346|  PASSED  
          sts_serial|  12|    100000|     100|0.92331648|  PASSED  
          sts_serial|  12|    100000|     100|0.73636282|  PASSED  
          sts_serial|  13|    100000|     100|0.95958727|  PASSED  
          sts_serial|  13|    100000|     100|0.83017449|  PASSED  
          sts_serial|  14|    100000|     100|0.40706232|  PASSED  
          sts_serial|  14|    100000|     100|0.94844223|  PASSED  
          sts_serial|  15|    100000|     100|0.05999017|  PASSED  
          sts_serial|  15|    100000|     100|0.04713957|  PASSED  
          sts_serial|  16|    100000|     100|0.47938361|  PASSED  
          sts_serial|  16|    100000|     100|0.94387392|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.65032437|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.91831525|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.72551656|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.51867158|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.25317686|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.84953870|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.87977848|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.98734320|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.66755578|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.74012355|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.04861656|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.06071361|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.92022629|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.12455964|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.59936072|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.92462701|  PASSED  
    rgb_permutations|   2|    100000|     100|0.45859170|  PASSED  
    rgb_permutations|   3|    100000|     100|0.89075541|  PASSED  
    rgb_permutations|   4|    100000|     100|0.91669256|  PASSED  
    rgb_permutations|   5|    100000|     100|0.64579170|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.14903802|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.80861627|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.90357647|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.22809323|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.59557816|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.24087527|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.71278129|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.54277608|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.86314176|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.66558865|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.49823374|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.04019536|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.02681943|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.46114108|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.51570109|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.61068877|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.44189965|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.63163414|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.40078539|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.61622961|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.95685919|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.51435886|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.57562657|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.98412672|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.94998454|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.13220394|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.92165679|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.79803044|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.16511437|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.91722978|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.33707581|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.15970631|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.97053105|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.00489192|   WEAK   
     dab_bytedistrib|   0|  51200000|       1|0.51767025|  PASSED  
             dab_dct| 256|     50000|       1|0.13626000|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.07683328|  PASSED  
        dab_filltree|  32|  15000000|       1|0.39290411|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.38796985|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.19635115|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.47502218|  PASSED  

real	65m56.999s
user	58m0.915s
sys	7m54.510s
*/
