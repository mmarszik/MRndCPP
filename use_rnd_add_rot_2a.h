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
/// @created on 2019-12-18 20:17:43 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f0e6bb0b-4dcd-4a46-9d40-7663f0b4dab0                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot2a;
/* TEST00
time ./MRndCPP 
172548589
3877563966
1159394658
1873617448
2815983541
3215073062
4611800510514374816

real	0m18.337s
user	0m18.312s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.75e+07  |1379531079|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.64675091|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.12397859|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.97302505|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.24436938|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.91863583|  PASSED  
        diehard_opso|   0|   2097152|     100|0.33381757|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.47254923|  PASSED  
         diehard_dna|   0|   2097152|     100|0.14933240|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.99929504|   WEAK   
diehard_count_1s_byt|   0|    256000|     100|0.94164304|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.16111731|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.12972046|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.27104244|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.41071308|  PASSED  
        diehard_sums|   0|       100|     100|0.07341908|  PASSED  
        diehard_runs|   0|    100000|     100|0.07701534|  PASSED  
        diehard_runs|   0|    100000|     100|0.65167337|  PASSED  
       diehard_craps|   0|    200000|     100|0.69277728|  PASSED  
       diehard_craps|   0|    200000|     100|0.44850662|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.06769904|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.10382862|  PASSED  
         sts_monobit|   1|    100000|     100|0.94806926|  PASSED  
            sts_runs|   2|    100000|     100|0.13961821|  PASSED  
          sts_serial|   1|    100000|     100|0.24009588|  PASSED  
          sts_serial|   2|    100000|     100|0.47571136|  PASSED  
          sts_serial|   3|    100000|     100|0.34180637|  PASSED  
          sts_serial|   3|    100000|     100|0.44828051|  PASSED  
          sts_serial|   4|    100000|     100|0.84777442|  PASSED  
          sts_serial|   4|    100000|     100|0.60568339|  PASSED  
          sts_serial|   5|    100000|     100|0.71972648|  PASSED  
          sts_serial|   5|    100000|     100|0.18502553|  PASSED  
          sts_serial|   6|    100000|     100|0.83019482|  PASSED  
          sts_serial|   6|    100000|     100|0.86483112|  PASSED  
          sts_serial|   7|    100000|     100|0.88891317|  PASSED  
          sts_serial|   7|    100000|     100|0.37098029|  PASSED  
          sts_serial|   8|    100000|     100|0.11922862|  PASSED  
          sts_serial|   8|    100000|     100|0.18582900|  PASSED  
          sts_serial|   9|    100000|     100|0.63506638|  PASSED  
          sts_serial|   9|    100000|     100|0.19822999|  PASSED  
          sts_serial|  10|    100000|     100|0.45087346|  PASSED  
          sts_serial|  10|    100000|     100|0.41475036|  PASSED  
          sts_serial|  11|    100000|     100|0.08536663|  PASSED  
          sts_serial|  11|    100000|     100|0.04204553|  PASSED  
          sts_serial|  12|    100000|     100|0.00756438|  PASSED  
          sts_serial|  12|    100000|     100|0.30789931|  PASSED  
          sts_serial|  13|    100000|     100|0.38429217|  PASSED  
          sts_serial|  13|    100000|     100|0.68973492|  PASSED  
          sts_serial|  14|    100000|     100|0.17467952|  PASSED  
          sts_serial|  14|    100000|     100|0.28040189|  PASSED  
          sts_serial|  15|    100000|     100|0.75343698|  PASSED  
          sts_serial|  15|    100000|     100|0.99982096|   WEAK   
          sts_serial|  16|    100000|     100|0.41599646|  PASSED  
          sts_serial|  16|    100000|     100|0.62063086|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.92662710|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.27201229|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.83644560|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.63653106|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.21754822|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.91812100|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.65250175|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.34443513|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.10987089|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.86965608|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.46764086|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.36231021|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.11063823|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.93354120|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.67734616|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.72650557|  PASSED  
    rgb_permutations|   2|    100000|     100|0.05087565|  PASSED  
    rgb_permutations|   3|    100000|     100|0.76049997|  PASSED  
    rgb_permutations|   4|    100000|     100|0.99722641|   WEAK   
    rgb_permutations|   5|    100000|     100|0.86955902|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.97725920|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.85198558|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.52797400|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.15425878|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.78733801|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.53128242|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.79058777|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.60497809|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.85846565|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.47909702|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.64085756|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.23382670|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.08607234|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.79972232|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.69786874|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.42251057|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.04755752|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.97360278|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.07064593|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.87619306|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.79646403|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.32851129|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.64248982|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.70227099|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.19353447|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.62478632|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.89221944|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.83989907|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.05022202|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.87598865|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.62509368|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.77727413|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.10196663|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.77025575|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.58872354|  PASSED  
             dab_dct| 256|     50000|       1|0.82266762|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.33010874|  PASSED  
        dab_filltree|  32|  15000000|       1|0.76410037|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.50173352|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.62708336|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.68509660|  PASSED  

real	56m53.460s
user	53m22.344s
sys	3m26.436s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x74bc4d08
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x74bc4d08
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x74bc4d08
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.3e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x74bc4d08
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x74bc4d08
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x74bc4d08
length= 2 gigabytes (2^31 bytes), time= 40.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x74bc4d08
length= 4 gigabytes (2^32 bytes), time= 78.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x74bc4d08
length= 5.250 gigabytes (2^32.392 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.236s
user	1m40.740s
sys	0m3.332s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc16fdad5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc16fdad5
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc16fdad5
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc16fdad5
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xc16fdad5
length= 1 gigabyte (2^30 bytes), time= 21.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc16fdad5
length= 2 gigabytes (2^31 bytes), time= 41.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.5  p =  2.8e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc16fdad5
length= 4 gigabytes (2^32 bytes), time= 81.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +4.6  p =  1.8e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc16fdad5
length= 5.000 gigabytes (2^32.322 bytes), time= 103 seconds
  no anomalies in 159 test result(s)


real	1m43.495s
user	1m40.112s
sys	0m3.244s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xac9c8d53
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xac9c8d53
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+10,13-8,T)                 R= +17.4  p =  2.3e-5   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xac9c8d53
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xac9c8d53
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xac9c8d53
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +6.1  p =  2.5e-3   unusual          
  [Low8/32]DC6-9x1Bytes-1           R=  +5.9  p =  4.0e-3   unusual          
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0xac9c8d53
length= 2 gigabytes (2^31 bytes), time= 40.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xac9c8d53
length= 4 gigabytes (2^32 bytes), time= 78.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xac9c8d53
length= 5.250 gigabytes (2^32.392 bytes), time= 105 seconds
  no anomalies in 160 test result(s)


real	1m45.807s
user	1m41.904s
sys	0m3.612s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xed941dbd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xed941dbd
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xed941dbd
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xed941dbd
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xed941dbd
length= 1 gigabyte (2^30 bytes), time= 22.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xed941dbd
length= 2 gigabytes (2^31 bytes), time= 42.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xed941dbd
length= 4 gigabytes (2^32 bytes), time= 82.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xed941dbd
length= 8 gigabytes (2^33 bytes), time= 169 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xed941dbd
length= 16 gigabytes (2^34 bytes), time= 349 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xed941dbd
length= 32 gigabytes (2^35 bytes), time= 705 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xed941dbd
length= 64 gigabytes (2^36 bytes), time= 1427 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xed941dbd
length= 128 gigabytes (2^37 bytes), time= 2863 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xed941dbd
length= 161.500 gigabytes (2^37.335 bytes), time= 3601 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  +8.3  p =  5.3e-4   unusual          
  ...and 198 test result(s) without anomalies


real	60m2.288s
user	58m13.960s
sys	1m44.040s
*/
/* TEST00
time ./MRndCPP 
172548589
3877563966
1159394658
1873617448
2815983541
3215073062
47994216805977

real	0m36.503s
user	0m36.460s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.22e+07  |3418483605|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.64483127|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.99861849|   WEAK   
  diehard_rank_32x32|   0|     40000|     100|0.30385225|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.67818035|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.56679757|  PASSED  
        diehard_opso|   0|   2097152|     100|0.86024349|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.96789815|  PASSED  
         diehard_dna|   0|   2097152|     100|0.99980378|   WEAK   
diehard_count_1s_str|   0|    256000|     100|0.99669210|   WEAK   
diehard_count_1s_byt|   0|    256000|     100|0.82092476|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.66719833|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.23207507|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.47737453|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.47185940|  PASSED  
        diehard_sums|   0|       100|     100|0.32409324|  PASSED  
        diehard_runs|   0|    100000|     100|0.95020305|  PASSED  
        diehard_runs|   0|    100000|     100|0.34041161|  PASSED  
       diehard_craps|   0|    200000|     100|0.84874993|  PASSED  
       diehard_craps|   0|    200000|     100|0.99986286|   WEAK   
 marsaglia_tsang_gcd|   0|  10000000|     100|0.57217954|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.14071548|  PASSED  
         sts_monobit|   1|    100000|     100|0.89094908|  PASSED  
            sts_runs|   2|    100000|     100|0.57969413|  PASSED  
          sts_serial|   1|    100000|     100|0.31539453|  PASSED  
          sts_serial|   2|    100000|     100|0.27593499|  PASSED  
          sts_serial|   3|    100000|     100|0.88115755|  PASSED  
          sts_serial|   3|    100000|     100|0.13367255|  PASSED  
          sts_serial|   4|    100000|     100|0.55189840|  PASSED  
          sts_serial|   4|    100000|     100|0.50357440|  PASSED  
          sts_serial|   5|    100000|     100|0.22623381|  PASSED  
          sts_serial|   5|    100000|     100|0.69115877|  PASSED  
          sts_serial|   6|    100000|     100|0.68844857|  PASSED  
          sts_serial|   6|    100000|     100|0.80579255|  PASSED  
          sts_serial|   7|    100000|     100|0.53453804|  PASSED  
          sts_serial|   7|    100000|     100|0.53042798|  PASSED  
          sts_serial|   8|    100000|     100|0.58710144|  PASSED  
          sts_serial|   8|    100000|     100|0.00633818|  PASSED  
          sts_serial|   9|    100000|     100|0.78284208|  PASSED  
          sts_serial|   9|    100000|     100|0.51029635|  PASSED  
          sts_serial|  10|    100000|     100|0.70728571|  PASSED  
          sts_serial|  10|    100000|     100|0.24248360|  PASSED  
          sts_serial|  11|    100000|     100|0.67278450|  PASSED  
          sts_serial|  11|    100000|     100|0.91179734|  PASSED  
          sts_serial|  12|    100000|     100|0.30224140|  PASSED  
          sts_serial|  12|    100000|     100|0.62966629|  PASSED  
          sts_serial|  13|    100000|     100|0.65282506|  PASSED  
          sts_serial|  13|    100000|     100|0.99082521|  PASSED  
          sts_serial|  14|    100000|     100|0.41546136|  PASSED  
          sts_serial|  14|    100000|     100|0.78486663|  PASSED  
          sts_serial|  15|    100000|     100|0.75274255|  PASSED  
          sts_serial|  15|    100000|     100|0.20854713|  PASSED  
          sts_serial|  16|    100000|     100|0.42369986|  PASSED  
          sts_serial|  16|    100000|     100|0.84294153|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.10926993|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.03871450|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.84232779|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.50675856|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.34466921|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.16821113|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.14435342|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.70930167|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.76414997|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.86120527|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.69186982|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.87794367|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.09119349|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.36019442|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.99419864|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.51259012|  PASSED  
    rgb_permutations|   2|    100000|     100|0.59213936|  PASSED  
    rgb_permutations|   3|    100000|     100|0.78974900|  PASSED  
    rgb_permutations|   4|    100000|     100|0.64159856|  PASSED  
    rgb_permutations|   5|    100000|     100|0.95634657|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.74232366|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.98922798|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.72803935|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.69928119|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.99469115|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.71905822|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.53603142|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.38384798|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.29881920|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.83067682|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.92334420|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.58178295|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.59922217|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.60268305|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.63829417|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.95807484|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.20718180|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.92973226|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.68150168|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.70240020|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.24757461|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.92457227|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.84354605|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.91695728|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.57690334|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.39237575|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.54195855|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.22098161|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.87268916|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.85475641|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.85349111|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.97496540|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.51268007|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.13676825|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.31016576|  PASSED  
             dab_dct| 256|     50000|       1|0.68947842|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.47306500|  PASSED  
        dab_filltree|  32|  15000000|       1|0.32615693|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.25595063|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.11847956|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.61241603|  PASSED  

real	48m11.321s
user	44m29.380s
sys	3m38.660s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4ea40679
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4ea40679
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4ea40679
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.8  p =1-9.4e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4ea40679
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.3  p =  9.2e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4ea40679
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4ea40679
length= 2 gigabytes (2^31 bytes), time= 37.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x4ea40679
length= 4 gigabytes (2^32 bytes), time= 72.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x4ea40679
length= 5.500 gigabytes (2^32.459 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.538s
user	1m40.056s
sys	0m2.332s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd992b372
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd992b372
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd992b372
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.4  p =  5.1e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd992b372
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.7e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd992b372
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -5.3  p =1-1.8e-4   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd992b372
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xd992b372
length= 4 gigabytes (2^32 bytes), time= 72.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd992b372
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.914s
user	1m42.348s
sys	0m2.440s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3b21cf16
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3b21cf16
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.7  p =  4.2e-3   unusual          
  [Low1/32]Gap-16:B                 R=  +4.3  p =  1.9e-3   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3b21cf16
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x3b21cf16
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-1,T)                  R=  -6.5  p =1-2.9e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3b21cf16
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +5.2  p =  2.7e-4   mildly suspicious
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3b21cf16
length= 2 gigabytes (2^31 bytes), time= 36.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.8  p =  1.6e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3b21cf16
length= 4 gigabytes (2^32 bytes), time= 75.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.0  p =  8.8e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3b21cf16
length= 5.250 gigabytes (2^32.392 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.0  p =  8.4e-5   mildly suspicious
  ...and 159 test result(s) without anomalies


real	1m41.083s
user	1m38.836s
sys	0m2.116s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x62acef63
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x62acef63
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x62acef63
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x62acef63
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x62acef63
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x62acef63
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R=  +7.4  p =  2.9e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x62acef63
length= 4 gigabytes (2^32 bytes), time= 71.6 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:(0,14-0)              R=  +6.1  p =  2.7e-5   unusual          
  [Low1/32]Gap-16:A                 R=  +4.5  p =  2.7e-3   unusual          
  ...and 154 test result(s) without anomalies

rng=RNG_stdin32, seed=0x62acef63
length= 8 gigabytes (2^33 bytes), time= 149 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x62acef63
length= 16 gigabytes (2^34 bytes), time= 302 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x62acef63
length= 32 gigabytes (2^35 bytes), time= 604 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x62acef63
length= 64 gigabytes (2^36 bytes), time= 1220 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x62acef63
length= 128 gigabytes (2^37 bytes), time= 2444 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x62acef63
length= 189.250 gigabytes (2^37.564 bytes), time= 3603 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.6  p =  3.0e-3   unusual          
  ...and 200 test result(s) without anomalies


real	60m3.483s
user	58m45.140s
sys	1m13.472s
*/
