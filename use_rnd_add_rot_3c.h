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
/// @created on 2019-12-18 19:55:19 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 1229bed7-3b3d-420d-ad4e-e3a5a31e6e88                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot3c;
/* TEST00
time ./MRndCPP 
3804522998
1249068412
3428990472
158049389
132572942
2015860
4611639686970976117

real	0m21.202s
user	0m21.172s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.51e+07  |2050538946|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.97054686|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.70987814|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.45573605|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.16532513|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.95399528|  PASSED  
        diehard_opso|   0|   2097152|     100|0.01580868|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.47127891|  PASSED  
         diehard_dna|   0|   2097152|     100|0.25556272|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.13706901|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.02835416|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.77403241|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.72844152|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.98513440|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.32168538|  PASSED  
        diehard_sums|   0|       100|     100|0.02632122|  PASSED  
        diehard_runs|   0|    100000|     100|0.44927077|  PASSED  
        diehard_runs|   0|    100000|     100|0.65478547|  PASSED  
       diehard_craps|   0|    200000|     100|0.71246306|  PASSED  
       diehard_craps|   0|    200000|     100|0.94935073|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.71918767|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.76482446|  PASSED  
         sts_monobit|   1|    100000|     100|0.04749062|  PASSED  
            sts_runs|   2|    100000|     100|0.11252961|  PASSED  
          sts_serial|   1|    100000|     100|0.02020439|  PASSED  
          sts_serial|   2|    100000|     100|0.64425590|  PASSED  
          sts_serial|   3|    100000|     100|0.47060339|  PASSED  
          sts_serial|   3|    100000|     100|0.54504517|  PASSED  
          sts_serial|   4|    100000|     100|0.49208215|  PASSED  
          sts_serial|   4|    100000|     100|0.59996570|  PASSED  
          sts_serial|   5|    100000|     100|0.36994045|  PASSED  
          sts_serial|   5|    100000|     100|0.75454789|  PASSED  
          sts_serial|   6|    100000|     100|0.06663255|  PASSED  
          sts_serial|   6|    100000|     100|0.32020532|  PASSED  
          sts_serial|   7|    100000|     100|0.71082505|  PASSED  
          sts_serial|   7|    100000|     100|0.54798770|  PASSED  
          sts_serial|   8|    100000|     100|0.99028293|  PASSED  
          sts_serial|   8|    100000|     100|0.36333634|  PASSED  
          sts_serial|   9|    100000|     100|0.81407378|  PASSED  
          sts_serial|   9|    100000|     100|0.54970855|  PASSED  
          sts_serial|  10|    100000|     100|0.90717671|  PASSED  
          sts_serial|  10|    100000|     100|0.99483768|  PASSED  
          sts_serial|  11|    100000|     100|0.97474840|  PASSED  
          sts_serial|  11|    100000|     100|0.44352366|  PASSED  
          sts_serial|  12|    100000|     100|0.90003316|  PASSED  
          sts_serial|  12|    100000|     100|0.99199831|  PASSED  
          sts_serial|  13|    100000|     100|0.94515610|  PASSED  
          sts_serial|  13|    100000|     100|0.25326269|  PASSED  
          sts_serial|  14|    100000|     100|0.28859051|  PASSED  
          sts_serial|  14|    100000|     100|0.13791833|  PASSED  
          sts_serial|  15|    100000|     100|0.18470624|  PASSED  
          sts_serial|  15|    100000|     100|0.05460498|  PASSED  
          sts_serial|  16|    100000|     100|0.46227911|  PASSED  
          sts_serial|  16|    100000|     100|0.46772586|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.55816212|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.93265881|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.32316108|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.75002528|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.10294245|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.49149063|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.73295542|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.07117123|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.83435363|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.53651488|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.87778670|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.06001865|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.70691446|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.29282941|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.65254998|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.31175636|  PASSED  
    rgb_permutations|   2|    100000|     100|0.99772950|   WEAK   
    rgb_permutations|   3|    100000|     100|0.46144855|  PASSED  
    rgb_permutations|   4|    100000|     100|0.96409502|  PASSED  
    rgb_permutations|   5|    100000|     100|0.24712107|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.02006846|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.94215812|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.66249843|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.68790009|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.86530038|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.07974147|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.45354877|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.39668016|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.98763468|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.44046603|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.52704254|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.61053221|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.35455527|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.47171213|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.86633734|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.59285272|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.19327604|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.50503243|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.94254203|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.25723200|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.50361416|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.10524225|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.87270470|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.98511139|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.68797724|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.82963858|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.89689345|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.81318005|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.42686271|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.28985003|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.51398529|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.58343840|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.97023308|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.16550743|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.44434015|  PASSED  
             dab_dct| 256|     50000|       1|0.77131671|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.73248977|  PASSED  
        dab_filltree|  32|  15000000|       1|0.86617021|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.01187502|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.87608835|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.20270514|  PASSED  

real	56m38.723s
user	53m11.072s
sys	3m24.416s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe1267532
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe1267532
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.3  p =  7.5e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe1267532
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xe1267532
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xe1267532
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xe1267532
length= 2 gigabytes (2^31 bytes), time= 42.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xe1267532
length= 4 gigabytes (2^32 bytes), time= 83.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xe1267532
length= 4.750 gigabytes (2^32.248 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +7.2  p =  2.3e-3   unusual          
  FPF-14+6/16:cross                 R=  -2.2  p =1-1.0e-3   unusual          
  ...and 157 test result(s) without anomalies


real	1m41.185s
user	1m37.872s
sys	0m3.176s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x279c6bbc
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x279c6bbc
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x279c6bbc
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x279c6bbc
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x279c6bbc
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x279c6bbc
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.6  p = 0.989     unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x279c6bbc
length= 4 gigabytes (2^32 bytes), time= 80.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -6.4  p =1-2.5e-4   mildly suspicious
  [Low1/32]Gap-16:A                 R=  +5.1  p =  7.4e-4   unusual          
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0x279c6bbc
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.8  p =1-2.1e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +5.6  p =  1.6e-4   mildly suspicious
  ...and 157 test result(s) without anomalies


real	1m41.716s
user	1m38.596s
sys	0m3.000s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1f0fc9f8
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1f0fc9f8
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.0  p =  3.7e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1f0fc9f8
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.6  p =  5.3e-5   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1f0fc9f8
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.6  p =  5.5e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1f0fc9f8
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-3,T)         R=  -6.7  p =1-1.3e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +5.0  p =  1.3e-3   unusual          
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1f0fc9f8
length= 2 gigabytes (2^31 bytes), time= 42.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x1f0fc9f8
length= 4 gigabytes (2^32 bytes), time= 83.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x1f0fc9f8
length= 4.750 gigabytes (2^32.248 bytes), time= 100 seconds
  no anomalies in 159 test result(s)


real	1m41.017s
user	1m37.868s
sys	0m3.044s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe064ca26
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe064ca26
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xe064ca26
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -5.2  p =1-1.0e-3   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe064ca26
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xe064ca26
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.1  p =  1.0e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe064ca26
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xe064ca26
length= 4 gigabytes (2^32 bytes), time= 80.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xe064ca26
length= 8 gigabytes (2^33 bytes), time= 167 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.7  p =  2.9e-3   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe064ca26
length= 16 gigabytes (2^34 bytes), time= 339 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +4.6  p =  8.7e-3   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe064ca26
length= 32 gigabytes (2^35 bytes), time= 680 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xe064ca26
length= 64 gigabytes (2^36 bytes), time= 1373 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.2  p =1-1.1e-3   unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe064ca26
length= 128 gigabytes (2^37 bytes), time= 2748 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xe064ca26
length= 167.750 gigabytes (2^37.390 bytes), time= 3601 seconds
  no anomalies in 201 test result(s)


real	60m1.397s
user	58m15.204s
sys	1m42.376s
*/
