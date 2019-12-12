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
/// @created on 2019-12-08 02:58:07 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 38931ffa-bf5e-4829-bb95-e5060ccd5ca1                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib1a;
/* TEST00
time ./MRndCPP 
4217143007
2263514851
3622271318
4017173772
731841040
1586642232
25660801227284

real	0m31.233s
user	0m31.144s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.19e+07  |2086015341|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.73067445|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.93323120|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.53625933|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.17146221|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.32548139|  PASSED  
        diehard_opso|   0|   2097152|     100|0.20896906|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.38362250|  PASSED  
         diehard_dna|   0|   2097152|     100|0.35748072|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.98066452|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.97782946|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.43795973|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.83368399|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.86285181|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.70198450|  PASSED  
        diehard_sums|   0|       100|     100|0.07285817|  PASSED  
        diehard_runs|   0|    100000|     100|0.01603258|  PASSED  
        diehard_runs|   0|    100000|     100|0.98898013|  PASSED  
       diehard_craps|   0|    200000|     100|0.35494552|  PASSED  
       diehard_craps|   0|    200000|     100|0.36088494|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.31005617|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.23745718|  PASSED  
         sts_monobit|   1|    100000|     100|0.09005083|  PASSED  
            sts_runs|   2|    100000|     100|0.71779869|  PASSED  
          sts_serial|   1|    100000|     100|0.99185839|  PASSED  
          sts_serial|   2|    100000|     100|0.77749274|  PASSED  
          sts_serial|   3|    100000|     100|0.92280990|  PASSED  
          sts_serial|   3|    100000|     100|0.51199574|  PASSED  
          sts_serial|   4|    100000|     100|0.41563213|  PASSED  
          sts_serial|   4|    100000|     100|0.57944417|  PASSED  
          sts_serial|   5|    100000|     100|0.94149270|  PASSED  
          sts_serial|   5|    100000|     100|0.98924328|  PASSED  
          sts_serial|   6|    100000|     100|0.92827777|  PASSED  
          sts_serial|   6|    100000|     100|0.58429748|  PASSED  
          sts_serial|   7|    100000|     100|0.34442358|  PASSED  
          sts_serial|   7|    100000|     100|0.40991421|  PASSED  
          sts_serial|   8|    100000|     100|0.90046534|  PASSED  
          sts_serial|   8|    100000|     100|0.50378537|  PASSED  
          sts_serial|   9|    100000|     100|0.97684986|  PASSED  
          sts_serial|   9|    100000|     100|0.85081252|  PASSED  
          sts_serial|  10|    100000|     100|0.33931416|  PASSED  
          sts_serial|  10|    100000|     100|0.56303313|  PASSED  
          sts_serial|  11|    100000|     100|0.11802329|  PASSED  
          sts_serial|  11|    100000|     100|0.26049902|  PASSED  
          sts_serial|  12|    100000|     100|0.63572437|  PASSED  
          sts_serial|  12|    100000|     100|0.77302960|  PASSED  
          sts_serial|  13|    100000|     100|0.96635274|  PASSED  
          sts_serial|  13|    100000|     100|0.29601973|  PASSED  
          sts_serial|  14|    100000|     100|0.43168131|  PASSED  
          sts_serial|  14|    100000|     100|0.16490570|  PASSED  
          sts_serial|  15|    100000|     100|0.97566940|  PASSED  
          sts_serial|  15|    100000|     100|0.37469796|  PASSED  
          sts_serial|  16|    100000|     100|0.18127352|  PASSED  
          sts_serial|  16|    100000|     100|0.65176500|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.39510370|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.42983653|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.68602687|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.34811642|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.67244915|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.70075173|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.76988133|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.42260688|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.81496228|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.49668938|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.83324365|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.94813501|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.92682998|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.41131652|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.98950962|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.61974259|  PASSED  
    rgb_permutations|   2|    100000|     100|0.06611168|  PASSED  
    rgb_permutations|   3|    100000|     100|0.63445942|  PASSED  
    rgb_permutations|   4|    100000|     100|0.18239217|  PASSED  
    rgb_permutations|   5|    100000|     100|0.15033166|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.09451637|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.38814665|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.78116094|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.29957295|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.76099061|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.89551811|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.78177070|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.66447024|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.93514832|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.98808218|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.93023420|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.31614518|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.45627153|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.65736926|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.03972244|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.83343085|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.60887559|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.15405469|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.11612130|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.53190171|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.43689099|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.87314196|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.72937059|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.44980887|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.87037892|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.68821598|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.96016594|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.18942674|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.92235605|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.02070566|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.94323185|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.03811414|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.95221402|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.39321819|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.58359137|  PASSED  
             dab_dct| 256|     50000|       1|0.60321465|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.41692676|  PASSED  
        dab_filltree|  32|  15000000|       1|0.40070870|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.83243288|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.03382463|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.63683281|  PASSED  

real	48m43.476s
user	45m5.612s
sys	3m28.580s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3685d1e7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3685d1e7
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3685d1e7
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x3685d1e7
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +11.2  p =  1.4e-4   mildly suspicious
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3685d1e7
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.2  p =  9.6e-3   unusual          
  [Low1/32]BCFN(2+0,13-4,T)         R= +12.0  p =  3.5e-5   mildly suspicious
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3685d1e7
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +16.3  p =  1.7e-7   very suspicious  
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3685d1e7
length= 4 gigabytes (2^32 bytes), time= 73.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +26.3  p =  2.9e-12    FAIL           
  [Low1/32]BCFN(2+2,13-3,T)         R=  +8.2  p =  1.1e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +5.2  p =  8.7e-3   unusual          
  ...and 153 test result(s) without anomalies


real	1m14.289s
user	1m12.364s
sys	0m1.668s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7779f7f4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7779f7f4
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7779f7f4
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  +4.4  p =  1.4e-3   unusual          
  [Low8/32]BCFN(2+0,13-3,T)         R=  -6.7  p =1-1.3e-3   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7779f7f4
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x7779f7f4
length= 1 gigabyte (2^30 bytes), time= 23.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7779f7f4
length= 2 gigabytes (2^31 bytes), time= 43.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R= +10.9  p =  5.7e-5   mildly suspicious
  [Low1/32]BCFN(2+2,13-4,T)         R= +17.1  p =  1.9e-7   very suspicious  
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7779f7f4
length= 4 gigabytes (2^32 bytes), time= 84.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-1,T)         R=  +8.5  p =  4.8e-4   unusual          
  [Low1/32]BCFN(2+0,13-3,T)         R= +30.0  p =  5.5e-14    FAIL           
  [Low1/32]BCFN(2+2,13-3,T)         R= +18.1  p =  2.2e-8    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+3,13-3,T)         R=  +8.9  p =  5.0e-4   unusual          
  ...and 152 test result(s) without anomalies


real	1m25.247s
user	1m23.232s
sys	0m1.676s
*/
