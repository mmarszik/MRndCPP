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
/// @created on 2019-12-18 20:15:41 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token b05d766e-2137-49e1-adc8-3d961bc7fc0e                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot6a;
/* TEST00
time ./MRndCPP 
230430264
362068154
273137681
2482940748
754712492
3243487611
4611556190512905724

real	0m18.296s
user	0m18.268s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.62e+07  |3596825752|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.69810955|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.96379489|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.94469595|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.97270156|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.25225659|  PASSED  
        diehard_opso|   0|   2097152|     100|0.57946180|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.19452878|  PASSED  
         diehard_dna|   0|   2097152|     100|0.39806587|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.21491791|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.18199535|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.99461379|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.97391468|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.80341282|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.77371548|  PASSED  
        diehard_sums|   0|       100|     100|0.01534834|  PASSED  
        diehard_runs|   0|    100000|     100|0.27998528|  PASSED  
        diehard_runs|   0|    100000|     100|0.27992074|  PASSED  
       diehard_craps|   0|    200000|     100|0.42059805|  PASSED  
       diehard_craps|   0|    200000|     100|0.19453227|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.72762901|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.37073569|  PASSED  
         sts_monobit|   1|    100000|     100|0.48844502|  PASSED  
            sts_runs|   2|    100000|     100|0.64934703|  PASSED  
          sts_serial|   1|    100000|     100|0.40035956|  PASSED  
          sts_serial|   2|    100000|     100|0.88814476|  PASSED  
          sts_serial|   3|    100000|     100|0.75489748|  PASSED  
          sts_serial|   3|    100000|     100|0.44303622|  PASSED  
          sts_serial|   4|    100000|     100|0.70611385|  PASSED  
          sts_serial|   4|    100000|     100|0.75476062|  PASSED  
          sts_serial|   5|    100000|     100|0.97023031|  PASSED  
          sts_serial|   5|    100000|     100|0.72928077|  PASSED  
          sts_serial|   6|    100000|     100|0.65465265|  PASSED  
          sts_serial|   6|    100000|     100|0.47441605|  PASSED  
          sts_serial|   7|    100000|     100|0.03734789|  PASSED  
          sts_serial|   7|    100000|     100|0.35256786|  PASSED  
          sts_serial|   8|    100000|     100|0.40049115|  PASSED  
          sts_serial|   8|    100000|     100|0.95207655|  PASSED  
          sts_serial|   9|    100000|     100|0.23069074|  PASSED  
          sts_serial|   9|    100000|     100|0.78040668|  PASSED  
          sts_serial|  10|    100000|     100|0.92824306|  PASSED  
          sts_serial|  10|    100000|     100|0.50279993|  PASSED  
          sts_serial|  11|    100000|     100|0.05014182|  PASSED  
          sts_serial|  11|    100000|     100|0.28058553|  PASSED  
          sts_serial|  12|    100000|     100|0.51500900|  PASSED  
          sts_serial|  12|    100000|     100|0.78395300|  PASSED  
          sts_serial|  13|    100000|     100|0.77831136|  PASSED  
          sts_serial|  13|    100000|     100|0.91258497|  PASSED  
          sts_serial|  14|    100000|     100|0.27595320|  PASSED  
          sts_serial|  14|    100000|     100|0.28322543|  PASSED  
          sts_serial|  15|    100000|     100|0.92409807|  PASSED  
          sts_serial|  15|    100000|     100|0.74554186|  PASSED  
          sts_serial|  16|    100000|     100|0.96432676|  PASSED  
          sts_serial|  16|    100000|     100|0.96724821|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.15907105|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.46372539|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.37548067|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.81866317|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.43174421|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.51158279|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.68927575|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.60373943|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.67341660|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.36597370|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.70313595|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.80273335|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.10862052|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.67960690|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.01654705|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.98563036|  PASSED  
    rgb_permutations|   2|    100000|     100|0.90584425|  PASSED  
    rgb_permutations|   3|    100000|     100|0.96788358|  PASSED  
    rgb_permutations|   4|    100000|     100|0.70398034|  PASSED  
    rgb_permutations|   5|    100000|     100|0.34675814|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.46311158|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.98339003|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.16295967|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.67139904|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.86903245|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.72184234|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.00563360|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.86650972|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.49084768|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.80838817|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.64695779|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.62562047|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.92846124|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.03858393|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.65188275|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.76804625|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.38787487|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.36211006|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.88808733|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.90917103|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.80870848|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.19417322|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.28450121|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.25432397|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.96704700|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.28252860|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.16666170|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.07570214|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.32697553|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.94140159|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.91232680|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.17625673|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.94917854|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.24555918|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.56213142|  PASSED  
             dab_dct| 256|     50000|       1|0.13129831|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.81370383|  PASSED  
        dab_filltree|  32|  15000000|       1|0.69166578|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.54880942|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.86454242|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.16048572|  PASSED  

real	59m46.088s
user	56m18.160s
sys	3m24.472s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x63db8d2b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x63db8d2b
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.0  p =  1.3e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x63db8d2b
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x63db8d2b
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x63db8d2b
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x63db8d2b
length= 2 gigabytes (2^31 bytes), time= 41.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x63db8d2b
length= 4 gigabytes (2^32 bytes), time= 80.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.9  p =  1.1e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x63db8d2b
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.3  p =  3.7e-4   unusual          
  ...and 158 test result(s) without anomalies


real	1m40.773s
user	1m37.724s
sys	0m2.856s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5e0db20b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5e0db20b
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5e0db20b
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5e0db20b
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5e0db20b
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5e0db20b
length= 2 gigabytes (2^31 bytes), time= 41.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-3,T)         R=  -6.4  p =1-2.0e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +5.0  p =  9.0e-4   unusual          
  [Low1/32]Gap-16:B                 R=  +4.5  p =  9.9e-4   unusual          
  ...and 145 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5e0db20b
length= 4 gigabytes (2^32 bytes), time= 83.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x5e0db20b
length= 5.000 gigabytes (2^32.322 bytes), time= 105 seconds
  no anomalies in 159 test result(s)


real	1m45.655s
user	1m42.076s
sys	0m3.476s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4d2ef9d0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4d2ef9d0
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4d2ef9d0
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4d2ef9d0
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  +7.2  p =  2.6e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +6.1  p =  2.0e-4   mildly suspicious
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4d2ef9d0
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4d2ef9d0
length= 2 gigabytes (2^31 bytes), time= 41.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x4d2ef9d0
length= 4 gigabytes (2^32 bytes), time= 80.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-0,T)                  R=  +7.6  p =  1.3e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4d2ef9d0
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-0,T)                  R=  +8.6  p =  4.0e-4   unusual          
  ...and 158 test result(s) without anomalies


real	1m41.792s
user	1m38.840s
sys	0m2.848s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xba676b73
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xba676b73
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xba676b73
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xba676b73
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xba676b73
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xba676b73
length= 2 gigabytes (2^31 bytes), time= 42.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xba676b73
length= 4 gigabytes (2^32 bytes), time= 82.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.2  p =  6.0e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xba676b73
length= 8 gigabytes (2^33 bytes), time= 167 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xba676b73
length= 16 gigabytes (2^34 bytes), time= 345 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xba676b73
length= 32 gigabytes (2^35 bytes), time= 696 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xba676b73
length= 64 gigabytes (2^36 bytes), time= 1410 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xba676b73
length= 128 gigabytes (2^37 bytes), time= 2826 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+4,13-0,T)         R= +11.2  p =  1.5e-5   mildly suspicious
  ...and 195 test result(s) without anomalies

rng=RNG_stdin32, seed=0xba676b73
length= 163.500 gigabytes (2^37.353 bytes), time= 3600 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+4,13-0,T)         R=  +9.5  p =  1.2e-4   unusual          
  ...and 198 test result(s) without anomalies


real	60m1.084s
user	58m9.672s
sys	1m48.044s
*/
