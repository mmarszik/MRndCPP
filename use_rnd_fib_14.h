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
/// @created on 2019-12-18 01:26:23 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 18e8b81c-8466-40c9-a4f8-e7d3ee9bd9ef                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib14;
/* TEST00
time ./MRndCPP 
2945471430
557610125
3020773449
254383801
667015282
656689966
18446649185814688340

real	0m51.656s
user	0m51.596s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.21e+07  |2173742266|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.53855035|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.51479166|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.46408725|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.69005271|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.85991298|  PASSED  
        diehard_opso|   0|   2097152|     100|0.16861994|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.99035262|  PASSED  
         diehard_dna|   0|   2097152|     100|0.83685831|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.99148807|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.96147241|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.28167383|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.62412687|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.59725828|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.80051876|  PASSED  
        diehard_sums|   0|       100|     100|0.09107748|  PASSED  
        diehard_runs|   0|    100000|     100|0.17545324|  PASSED  
        diehard_runs|   0|    100000|     100|0.56910735|  PASSED  
       diehard_craps|   0|    200000|     100|0.94125975|  PASSED  
       diehard_craps|   0|    200000|     100|0.78531703|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.78593533|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.94238112|  PASSED  
         sts_monobit|   1|    100000|     100|0.98557125|  PASSED  
            sts_runs|   2|    100000|     100|0.19868681|  PASSED  
          sts_serial|   1|    100000|     100|0.40804314|  PASSED  
          sts_serial|   2|    100000|     100|0.54976326|  PASSED  
          sts_serial|   3|    100000|     100|0.34281659|  PASSED  
          sts_serial|   3|    100000|     100|0.83747739|  PASSED  
          sts_serial|   4|    100000|     100|0.81585804|  PASSED  
          sts_serial|   4|    100000|     100|0.99460152|  PASSED  
          sts_serial|   5|    100000|     100|0.21777748|  PASSED  
          sts_serial|   5|    100000|     100|0.49882182|  PASSED  
          sts_serial|   6|    100000|     100|0.95838316|  PASSED  
          sts_serial|   6|    100000|     100|0.70963181|  PASSED  
          sts_serial|   7|    100000|     100|0.42884337|  PASSED  
          sts_serial|   7|    100000|     100|0.68794470|  PASSED  
          sts_serial|   8|    100000|     100|0.97929932|  PASSED  
          sts_serial|   8|    100000|     100|0.99235813|  PASSED  
          sts_serial|   9|    100000|     100|0.77686152|  PASSED  
          sts_serial|   9|    100000|     100|0.64811555|  PASSED  
          sts_serial|  10|    100000|     100|0.67142406|  PASSED  
          sts_serial|  10|    100000|     100|0.45323098|  PASSED  
          sts_serial|  11|    100000|     100|0.77508541|  PASSED  
          sts_serial|  11|    100000|     100|0.99657590|   WEAK   
          sts_serial|  12|    100000|     100|0.41126253|  PASSED  
          sts_serial|  12|    100000|     100|0.40291909|  PASSED  
          sts_serial|  13|    100000|     100|0.12374309|  PASSED  
          sts_serial|  13|    100000|     100|0.71463479|  PASSED  
          sts_serial|  14|    100000|     100|0.42756756|  PASSED  
          sts_serial|  14|    100000|     100|0.61372983|  PASSED  
          sts_serial|  15|    100000|     100|0.91542386|  PASSED  
          sts_serial|  15|    100000|     100|0.88123714|  PASSED  
          sts_serial|  16|    100000|     100|0.59940428|  PASSED  
          sts_serial|  16|    100000|     100|0.12060915|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.76587367|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.99994441|   WEAK   
         rgb_bitdist|   3|    100000|     100|0.95478450|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.99502454|   WEAK   
         rgb_bitdist|   5|    100000|     100|0.63290051|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.63873844|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.86392852|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.28300876|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.83624915|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.95307486|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.56019783|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.48842164|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.87671520|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.53815533|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.53708354|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.26681654|  PASSED  
    rgb_permutations|   2|    100000|     100|0.85715106|  PASSED  
    rgb_permutations|   3|    100000|     100|0.26992978|  PASSED  
    rgb_permutations|   4|    100000|     100|0.44134003|  PASSED  
    rgb_permutations|   5|    100000|     100|0.39614842|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.04670184|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.81928228|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.48454022|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.38652426|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.66085033|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.29723696|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.61178965|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.84610235|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.25781300|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.68664411|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.12658382|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.10972632|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.75953037|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.31274470|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.64366145|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.77369406|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.97274187|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.62315629|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.33529736|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.63850064|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.97797450|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.72152711|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.03588958|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.14848043|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.81358156|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.22758043|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.70414396|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.79660339|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.85686362|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.86275383|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.87095014|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.46812622|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.80568207|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.35052998|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.05299461|  PASSED  
             dab_dct| 256|     50000|       1|0.47195837|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.70228756|  PASSED  
        dab_filltree|  32|  15000000|       1|0.60624234|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.92122421|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.11832903|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.89524048|  PASSED  

real	47m37.697s
user	44m5.660s
sys	3m29.176s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5da9c9bb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5da9c9bb
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5da9c9bb
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5da9c9bb
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5da9c9bb
length= 1 gigabyte (2^30 bytes), time= 19.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.6  p =1-2.0e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5da9c9bb
length= 2 gigabytes (2^31 bytes), time= 37.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5da9c9bb
length= 4 gigabytes (2^32 bytes), time= 73.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x5da9c9bb
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.879s
user	1m41.396s
sys	0m2.332s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x24b2adec
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x24b2adec
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x24b2adec
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x24b2adec
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x24b2adec
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x24b2adec
length= 2 gigabytes (2^31 bytes), time= 38.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x24b2adec
length= 4 gigabytes (2^32 bytes), time= 72.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x24b2adec
length= 5.500 gigabytes (2^32.459 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m40.778s
user	1m38.488s
sys	0m2.188s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x44b61c7d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x44b61c7d
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x44b61c7d
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-3,T)         R=  +7.6  p =  2.1e-3   unusual          
  [Low8/32]FPF-14+6/16:cross        R=  -2.2  p =1-8.4e-4   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x44b61c7d
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x44b61c7d
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x44b61c7d
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x44b61c7d
length= 4 gigabytes (2^32 bytes), time= 73.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x44b61c7d
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +7.7  p =  1.2e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m44.952s
user	1m42.768s
sys	0m2.088s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x38fbbeb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x38fbbeb
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x38fbbeb
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x38fbbeb
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x38fbbeb
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x38fbbeb
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x38fbbeb
length= 4 gigabytes (2^32 bytes), time= 72.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all2         R=  -1.8  p =1-7.2e-5   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x38fbbeb
length= 8 gigabytes (2^33 bytes), time= 150 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x38fbbeb
length= 16 gigabytes (2^34 bytes), time= 306 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x38fbbeb
length= 32 gigabytes (2^35 bytes), time= 615 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x38fbbeb
length= 64 gigabytes (2^36 bytes), time= 1245 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x38fbbeb
length= 128 gigabytes (2^37 bytes), time= 2492 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x38fbbeb
length= 185.500 gigabytes (2^37.535 bytes), time= 3601 seconds
  no anomalies in 201 test result(s)


real	60m1.016s
user	58m46.464s
sys	1m10.508s
*/
