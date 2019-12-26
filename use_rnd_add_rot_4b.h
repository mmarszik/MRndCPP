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
/// @created on 2019-12-18 20:16:38 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 9a6b3e50-258a-49c4-817f-18c94e98c7c3                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot4b;
/* TEST00
time ./MRndCPP 
3188215798
2630793146
2100827324
679890457
1329750613
2358251466
4611668991585555811

real	0m18.291s
user	0m18.276s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.62e+07  |1644562967|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.52171253|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.61181495|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.44439201|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.18027551|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.96477331|  PASSED  
        diehard_opso|   0|   2097152|     100|0.06281477|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.79216005|  PASSED  
         diehard_dna|   0|   2097152|     100|0.14385490|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.83988691|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.90046623|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.98448969|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.51047567|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.98692047|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.97021424|  PASSED  
        diehard_sums|   0|       100|     100|0.25919935|  PASSED  
        diehard_runs|   0|    100000|     100|0.68046710|  PASSED  
        diehard_runs|   0|    100000|     100|0.85090097|  PASSED  
       diehard_craps|   0|    200000|     100|0.37870473|  PASSED  
       diehard_craps|   0|    200000|     100|0.70735695|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.95422134|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.77127660|  PASSED  
         sts_monobit|   1|    100000|     100|0.71682766|  PASSED  
            sts_runs|   2|    100000|     100|0.85817350|  PASSED  
          sts_serial|   1|    100000|     100|0.87152534|  PASSED  
          sts_serial|   2|    100000|     100|0.87094790|  PASSED  
          sts_serial|   3|    100000|     100|0.70946254|  PASSED  
          sts_serial|   3|    100000|     100|0.27543485|  PASSED  
          sts_serial|   4|    100000|     100|0.69338500|  PASSED  
          sts_serial|   4|    100000|     100|0.70495526|  PASSED  
          sts_serial|   5|    100000|     100|0.06470131|  PASSED  
          sts_serial|   5|    100000|     100|0.04479895|  PASSED  
          sts_serial|   6|    100000|     100|0.01979466|  PASSED  
          sts_serial|   6|    100000|     100|0.02878854|  PASSED  
          sts_serial|   7|    100000|     100|0.02386664|  PASSED  
          sts_serial|   7|    100000|     100|0.56148990|  PASSED  
          sts_serial|   8|    100000|     100|0.96728133|  PASSED  
          sts_serial|   8|    100000|     100|0.29797282|  PASSED  
          sts_serial|   9|    100000|     100|0.96584316|  PASSED  
          sts_serial|   9|    100000|     100|0.64290685|  PASSED  
          sts_serial|  10|    100000|     100|0.86451410|  PASSED  
          sts_serial|  10|    100000|     100|0.65442149|  PASSED  
          sts_serial|  11|    100000|     100|0.86134483|  PASSED  
          sts_serial|  11|    100000|     100|0.44739653|  PASSED  
          sts_serial|  12|    100000|     100|0.99629657|   WEAK   
          sts_serial|  12|    100000|     100|0.73295115|  PASSED  
          sts_serial|  13|    100000|     100|0.20181890|  PASSED  
          sts_serial|  13|    100000|     100|0.01702246|  PASSED  
          sts_serial|  14|    100000|     100|0.69593902|  PASSED  
          sts_serial|  14|    100000|     100|0.53743597|  PASSED  
          sts_serial|  15|    100000|     100|0.95393994|  PASSED  
          sts_serial|  15|    100000|     100|0.97163633|  PASSED  
          sts_serial|  16|    100000|     100|0.66994866|  PASSED  
          sts_serial|  16|    100000|     100|0.40947233|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.68005691|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.88850986|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.16439439|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.91615289|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.65292627|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.78008067|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.56180478|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.75895877|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.75775665|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.68820043|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.52531734|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.65402544|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.49543563|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.33658838|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.46012861|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.78456996|  PASSED  
    rgb_permutations|   2|    100000|     100|0.04246444|  PASSED  
    rgb_permutations|   3|    100000|     100|0.96196605|  PASSED  
    rgb_permutations|   4|    100000|     100|0.45456078|  PASSED  
    rgb_permutations|   5|    100000|     100|0.75911264|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.69351572|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.55247812|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.54240908|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.78477318|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.03987833|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.50532012|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.79340696|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.96282257|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.66068211|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.11082687|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.99942479|   WEAK   
      rgb_lagged_sum|  11|   1000000|     100|0.94256411|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.34791859|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.92285391|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.72666104|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.21205387|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.67255175|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.72487918|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.28201653|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.77330645|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.69734932|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.64242523|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.65828767|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.54063807|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.71476507|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.74441419|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.75024811|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.45922872|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.90395934|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.35255250|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.99272714|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.79648835|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.03714192|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.37377344|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.60438527|  PASSED  
             dab_dct| 256|     50000|       1|0.02097441|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.95003964|  PASSED  
        dab_filltree|  32|  15000000|       1|0.36362657|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.66368417|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.27187721|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.44400773|  PASSED  

real	59m46.390s
user	56m10.668s
sys	3m22.928s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5859c390
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5859c390
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5859c390
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R=  +8.0  p =  1.4e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5859c390
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +19.6  p =  4.6e-9    VERY SUSPICIOUS 
  [Low8/32]BCFN(2+2,13-3,T)         R= +12.6  p =  9.8e-6   suspicious       
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5859c390
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +39.8  p =  6.0e-20    FAIL !!        
  [Low8/32]BCFN(2+2,13-3,T)         R= +20.8  p =  1.2e-9    VERY SUSPICIOUS 
  ...and 139 test result(s) without anomalies


real	0m22.383s
user	0m21.616s
sys	0m0.728s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6b09b2f4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6b09b2f4
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6b09b2f4
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +13.0  p =  6.1e-6   suspicious       
  [Low8/32]BCFN(2+2,13-4,T)         R=  +8.1  p =  1.7e-3   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6b09b2f4
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +22.2  p =  2.6e-10   VERY SUSPICIOUS 
  [Low8/32]BCFN(2+2,13-3,T)         R=  +8.7  p =  6.2e-4   unusual          
  [Low1/32]Gap-16:A                 R=  +5.5  p =  5.8e-4   unusual          
  ...and 129 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6b09b2f4
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +36.8  p =  2.0e-18    FAIL !         
  [Low8/32]BCFN(2+2,13-3,T)         R= +16.8  p =  9.5e-8   very suspicious  
  ...and 139 test result(s) without anomalies


real	0m22.054s
user	0m21.316s
sys	0m0.712s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6b0f6853
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6b0f6853
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6b0f6853
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +10.8  p =  6.5e-5   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6b0f6853
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.1  p =  9.2e-3   unusual          
  [Low8/32]BCFN(2+1,13-3,T)         R= +19.1  p =  7.5e-9    VERY SUSPICIOUS 
  [Low1/32]Gap-16:A                 R=  +6.0  p =  2.3e-4   mildly suspicious
  ...and 129 test result(s) without anomalies

rng=RNG_stdin32, seed=0x6b0f6853
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +41.1  p =  1.3e-20    FAIL !!        
  [Low8/32]BCFN(2+2,13-3,T)         R=  +9.0  p =  4.7e-4   unusual          
  ...and 139 test result(s) without anomalies


real	0m21.975s
user	0m21.272s
sys	0m0.676s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x43256e4f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x43256e4f
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-4,T)         R=  +8.9  p =  7.7e-4   unusual          
  [Low1/32]Gap-16:A                 R=  +5.6  p =  4.6e-4   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0x43256e4f
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.2  p =  9.3e-3   unusual          
  [Low8/32]BCFN(2+1,13-3,T)         R= +18.3  p =  1.8e-8    VERY SUSPICIOUS 
  [Low1/32]Gap-16:A                 R=  +6.5  p =  6.4e-5   mildly suspicious
  ...and 121 test result(s) without anomalies

rng=RNG_stdin32, seed=0x43256e4f
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +22.1  p =  3.1e-10   VERY SUSPICIOUS 
  [Low8/32]BCFN(2+2,13-3,T)         R= +10.7  p =  7.0e-5   mildly suspicious
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x43256e4f
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +45.3  p =  9.7e-23    FAIL !!        
  [Low8/32]BCFN(2+2,13-3,T)         R= +14.2  p =  1.6e-6   very suspicious  
  [Low1/32]BCFN(2+2,13-5,T)         R= +10.3  p =  3.2e-4   unusual          
  ...and 138 test result(s) without anomalies


real	0m22.025s
user	0m21.360s
sys	0m0.620s
*/
