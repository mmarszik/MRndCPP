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
/// @created on 2019-12-18 20:15:30 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 2d64ce59-3401-4d1d-8870-f94d17bbde43                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot6b;
/* TEST00
time ./MRndCPP 
2537728083
4050458061
1954009998
954956568
35592978
2036031180
4611649422994017566

real	0m18.297s
user	0m18.280s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.63e+07  |1801982927|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.37159300|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.23327622|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.49345494|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.89025623|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.15350133|  PASSED  
        diehard_opso|   0|   2097152|     100|0.07663284|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.05078847|  PASSED  
         diehard_dna|   0|   2097152|     100|0.62542046|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.02850114|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.05939285|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.72516127|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.04920616|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.93473944|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.57542119|  PASSED  
        diehard_sums|   0|       100|     100|0.00207267|   WEAK   
        diehard_runs|   0|    100000|     100|0.11758354|  PASSED  
        diehard_runs|   0|    100000|     100|0.29362950|  PASSED  
       diehard_craps|   0|    200000|     100|0.62368314|  PASSED  
       diehard_craps|   0|    200000|     100|0.85441399|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.92594808|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.79591968|  PASSED  
         sts_monobit|   1|    100000|     100|0.36266101|  PASSED  
            sts_runs|   2|    100000|     100|0.57695366|  PASSED  
          sts_serial|   1|    100000|     100|0.98712159|  PASSED  
          sts_serial|   2|    100000|     100|0.96501310|  PASSED  
          sts_serial|   3|    100000|     100|0.95278845|  PASSED  
          sts_serial|   3|    100000|     100|0.99213961|  PASSED  
          sts_serial|   4|    100000|     100|0.99998151|   WEAK   
          sts_serial|   4|    100000|     100|0.71866064|  PASSED  
          sts_serial|   5|    100000|     100|0.58573827|  PASSED  
          sts_serial|   5|    100000|     100|0.38664025|  PASSED  
          sts_serial|   6|    100000|     100|0.97549547|  PASSED  
          sts_serial|   6|    100000|     100|0.21503043|  PASSED  
          sts_serial|   7|    100000|     100|0.42595870|  PASSED  
          sts_serial|   7|    100000|     100|0.82314627|  PASSED  
          sts_serial|   8|    100000|     100|0.45717219|  PASSED  
          sts_serial|   8|    100000|     100|0.99614006|   WEAK   
          sts_serial|   9|    100000|     100|0.34792038|  PASSED  
          sts_serial|   9|    100000|     100|0.90442133|  PASSED  
          sts_serial|  10|    100000|     100|0.96632035|  PASSED  
          sts_serial|  10|    100000|     100|0.50892224|  PASSED  
          sts_serial|  11|    100000|     100|0.79754597|  PASSED  
          sts_serial|  11|    100000|     100|0.33051152|  PASSED  
          sts_serial|  12|    100000|     100|0.30058660|  PASSED  
          sts_serial|  12|    100000|     100|0.50771066|  PASSED  
          sts_serial|  13|    100000|     100|0.28890494|  PASSED  
          sts_serial|  13|    100000|     100|0.81359978|  PASSED  
          sts_serial|  14|    100000|     100|0.28541160|  PASSED  
          sts_serial|  14|    100000|     100|0.25821792|  PASSED  
          sts_serial|  15|    100000|     100|0.01037613|  PASSED  
          sts_serial|  15|    100000|     100|0.27017082|  PASSED  
          sts_serial|  16|    100000|     100|0.43993476|  PASSED  
          sts_serial|  16|    100000|     100|0.82470624|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.84556951|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.49917984|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.94496477|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.18472641|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.95028376|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.82489603|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.45105181|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.25292884|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.16531903|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.96371959|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.59869096|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.04710217|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.28237097|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.17410421|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.68560075|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.24339986|  PASSED  
    rgb_permutations|   2|    100000|     100|0.70997391|  PASSED  
    rgb_permutations|   3|    100000|     100|0.38628175|  PASSED  
    rgb_permutations|   4|    100000|     100|0.99839524|   WEAK   
    rgb_permutations|   5|    100000|     100|0.15334225|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.75184580|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.90622363|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.64762197|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.47767253|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.51893316|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.27416224|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.28273021|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.95138799|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.81458837|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.91936474|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.39742894|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.94455608|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.82183747|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.09090202|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.96554682|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.70106136|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.74753339|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.11549996|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.27380921|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.38057882|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.65863962|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.81688338|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.02984389|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.87355494|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.67086479|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.52536691|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.13429911|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.88551478|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.75731832|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.98169888|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.89526213|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.79875624|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.39358483|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.62975887|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.47796419|  PASSED  
             dab_dct| 256|     50000|       1|0.44919869|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.89496711|  PASSED  
        dab_filltree|  32|  15000000|       1|0.83073382|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.51876836|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.96583593|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.41561976|  PASSED  

real	55m5.297s
user	51m41.184s
sys	3m21.188s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2eae4cd7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2eae4cd7
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2eae4cd7
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2eae4cd7
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+3,13-2,T)                  R=  +8.4  p =  7.2e-4   unusual          
  [Low8/32]BCFN(2+0,13-3,T)         R=  -6.3  p =1-2.7e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2eae4cd7
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2eae4cd7
length= 2 gigabytes (2^31 bytes), time= 41.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2eae4cd7
length= 4 gigabytes (2^32 bytes), time= 81.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2eae4cd7
length= 5.000 gigabytes (2^32.322 bytes), time= 103 seconds
  no anomalies in 159 test result(s)


real	1m43.522s
user	1m40.088s
sys	0m3.256s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xea11540b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xea11540b
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xea11540b
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xea11540b
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xea11540b
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xea11540b
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -5.2  p =1-1.4e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xea11540b
length= 4 gigabytes (2^32 bytes), time= 80.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xea11540b
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  no anomalies in 159 test result(s)


real	1m40.996s
user	1m37.600s
sys	0m3.284s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd1959ab9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd1959ab9
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd1959ab9
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd1959ab9
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xd1959ab9
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xd1959ab9
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xd1959ab9
length= 4 gigabytes (2^32 bytes), time= 83.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd1959ab9
length= 5.000 gigabytes (2^32.322 bytes), time= 105 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  -4.3  p =1-1.0e-3   unusual          
  ...and 158 test result(s) without anomalies


real	1m45.473s
user	1m42.260s
sys	0m3.088s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbc03ceaa
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbc03ceaa
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xbc03ceaa
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xbc03ceaa
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xbc03ceaa
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xbc03ceaa
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xbc03ceaa
length= 4 gigabytes (2^32 bytes), time= 80.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xbc03ceaa
length= 8 gigabytes (2^33 bytes), time= 167 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xbc03ceaa
length= 16 gigabytes (2^34 bytes), time= 340 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xbc03ceaa
length= 32 gigabytes (2^35 bytes), time= 680 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xbc03ceaa
length= 64 gigabytes (2^36 bytes), time= 1372 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xbc03ceaa
length= 128 gigabytes (2^37 bytes), time= 2746 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+4,13-0,T)         R=  +8.9  p =  2.5e-4   unusual          
  ...and 195 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbc03ceaa
length= 168.000 gigabytes (2^37.392 bytes), time= 3601 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+4,13-0,T)         R= +12.6  p =  3.0e-6   suspicious       
  ...and 200 test result(s) without anomalies


real	60m1.954s
user	58m11.040s
sys	1m47.272s
*/
