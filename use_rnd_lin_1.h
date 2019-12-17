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
/// @created on 2019-12-08 02:59:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8e200c1f-f53f-48b8-9d3a-c301e6742617                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin1;
/* TEST00
time ./MRndCPP 
2883782798
713566596
2633069086
1884896272
1650841066
4093672931
18446417789032809088

real	0m13.629s
user	0m13.604s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.32e+07  | 857326963|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.83863811|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.39676050|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.45755685|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.99980678|   WEAK   
   diehard_bitstream|   0|   2097152|     100|0.32396517|  PASSED  
        diehard_opso|   0|   2097152|     100|0.63251647|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.66379341|  PASSED  
         diehard_dna|   0|   2097152|     100|0.25345654|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.05600336|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.08985116|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.94278939|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.95887365|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.36896933|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.63142462|  PASSED  
        diehard_sums|   0|       100|     100|0.14121017|  PASSED  
        diehard_runs|   0|    100000|     100|0.54825730|  PASSED  
        diehard_runs|   0|    100000|     100|0.96468131|  PASSED  
       diehard_craps|   0|    200000|     100|0.47947559|  PASSED  
       diehard_craps|   0|    200000|     100|0.82531200|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.83078993|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.86517057|  PASSED  
         sts_monobit|   1|    100000|     100|0.04512566|  PASSED  
            sts_runs|   2|    100000|     100|0.95838480|  PASSED  
          sts_serial|   1|    100000|     100|0.69691772|  PASSED  
          sts_serial|   2|    100000|     100|0.05234314|  PASSED  
          sts_serial|   3|    100000|     100|0.03447519|  PASSED  
          sts_serial|   3|    100000|     100|0.75683953|  PASSED  
          sts_serial|   4|    100000|     100|0.01315725|  PASSED  
          sts_serial|   4|    100000|     100|0.70184096|  PASSED  
          sts_serial|   5|    100000|     100|0.56007285|  PASSED  
          sts_serial|   5|    100000|     100|0.91359521|  PASSED  
          sts_serial|   6|    100000|     100|0.14164550|  PASSED  
          sts_serial|   6|    100000|     100|0.04253396|  PASSED  
          sts_serial|   7|    100000|     100|0.02208586|  PASSED  
          sts_serial|   7|    100000|     100|0.01144867|  PASSED  
          sts_serial|   8|    100000|     100|0.00414638|   WEAK   
          sts_serial|   8|    100000|     100|0.63610054|  PASSED  
          sts_serial|   9|    100000|     100|0.00985616|  PASSED  
          sts_serial|   9|    100000|     100|0.22398538|  PASSED  
          sts_serial|  10|    100000|     100|0.14993758|  PASSED  
          sts_serial|  10|    100000|     100|0.96018734|  PASSED  
          sts_serial|  11|    100000|     100|0.54186248|  PASSED  
          sts_serial|  11|    100000|     100|0.08172681|  PASSED  
          sts_serial|  12|    100000|     100|0.72347515|  PASSED  
          sts_serial|  12|    100000|     100|0.37053135|  PASSED  
          sts_serial|  13|    100000|     100|0.76359465|  PASSED  
          sts_serial|  13|    100000|     100|0.89449320|  PASSED  
          sts_serial|  14|    100000|     100|0.79058787|  PASSED  
          sts_serial|  14|    100000|     100|0.99003564|  PASSED  
          sts_serial|  15|    100000|     100|0.53857521|  PASSED  
          sts_serial|  15|    100000|     100|0.21786183|  PASSED  
          sts_serial|  16|    100000|     100|0.69466199|  PASSED  
          sts_serial|  16|    100000|     100|0.25399992|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.68782099|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.32057665|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.02624175|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.52833291|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.57750829|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.55116708|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.88074574|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.62068919|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.87788551|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.37021577|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.44665350|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.24485864|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.27286818|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.64041836|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.56003920|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.46397364|  PASSED  
    rgb_permutations|   2|    100000|     100|0.61082623|  PASSED  
    rgb_permutations|   3|    100000|     100|0.71634262|  PASSED  
    rgb_permutations|   4|    100000|     100|0.78153584|  PASSED  
    rgb_permutations|   5|    100000|     100|0.50458270|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.93799280|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.22801852|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.39306930|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.30818867|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.98974204|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.01626676|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.78745961|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.97903191|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.39932444|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.79866419|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.85809083|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.79130724|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.50595140|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.59460825|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.80252573|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.25329960|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.21121345|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.37447165|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.59569222|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.33357655|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.76491848|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.01651752|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.44148432|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.98134769|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.79172214|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.71325902|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.87593440|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.61745974|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.66486833|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.97170229|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.66929097|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.82291013|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.22593195|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.35581413|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.80744873|  PASSED  
             dab_dct| 256|     50000|       1|0.07225669|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.08861783|  PASSED  
        dab_filltree|  32|  15000000|       1|0.48552715|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.50681347|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.35736334|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.34063399|  PASSED  

real	47m26.216s
user	43m39.224s
sys	3m38.612s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb843a4a7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb843a4a7
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.1  p =1-6.4e-3   unusual          
  [Low1/32]BCFN(2+1,13-6,T)         R=  -5.8  p =1-8.8e-4   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb843a4a7
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb843a4a7
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb843a4a7
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb843a4a7
length= 2 gigabytes (2^31 bytes), time= 36.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -5.7  p =1-7.7e-5   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R=  -7.6  p =1-5.1e-7   very suspicious  
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb843a4a7
length= 4 gigabytes (2^32 bytes), time= 71.0 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  -4.6  p =1-7.9e-4   unusual          
  [Low8/32]Gap-16:A                 R=  -4.8  p =1-1.7e-4   mildly suspicious
  [Low8/32]Gap-16:B                 R=  -5.8  p =1-7.9e-5   mildly suspicious
  [Low1/32]DC6-9x1Bytes-1           R=  +7.3  p =  4.4e-4   mildly suspicious
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -12.0  p =1-9.6e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R= -10.8  p =1-1.1e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -9.1  p =1-4.2e-8   suspicious       
  [Low1/32]FPF-14+6/16:(3,14-1)     R=  -5.9  p =1-1.9e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= -19.3  p =1-1.5e-18    FAIL !         
  [Low1/32]FPF-14+6/16:all2         R= +69.1  p =  1.9e-27    FAIL !!        
  ...and 146 test result(s) without anomalies


real	1m11.697s
user	1m9.716s
sys	0m1.684s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x80d9b209
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x80d9b209
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +5.3  p =  5.5e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x80d9b209
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x80d9b209
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -4.0  p =1-9.2e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x80d9b209
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.8  p =1-1.4e-3   unusual          
  [Low1/32]FPF-14+6/16:all          R=  -4.7  p =1-3.5e-4   unusual          
  ...and 139 test result(s) without anomalies

rng=RNG_stdin32, seed=0x80d9b209
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -7.4  p =1-1.7e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:(2,14-1)     R=  -5.9  p =1-2.0e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= -10.6  p =1-5.7e-10   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +19.9  p =  6.8e-9   very suspicious  
  ...and 144 test result(s) without anomalies

rng=RNG_stdin32, seed=0x80d9b209
length= 4 gigabytes (2^32 bytes), time= 74.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -5.6  p =1-1.0e-4   mildly suspicious
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -14.2  p =1-8.3e-13    FAIL           
  [Low1/32]FPF-14+6/16:(1,14-0)     R= -12.9  p =1-1.6e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(2,14-0)     R= -11.3  p =1-4.3e-10  very suspicious  
  [Low1/32]FPF-14+6/16:(3,14-1)     R=  -6.6  p =1-4.0e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= -23.3  p =1-1.9e-22    FAIL !!        
  [Low1/32]FPF-14+6/16:all2         R=+102.9  p =  4.5e-40    FAIL !!!       
  ...and 149 test result(s) without anomalies


real	1m15.193s
user	1m13.332s
sys	0m1.592s
*/
/* TEST00
time ./MRndCPP 
2883782798
713566596
2633069086
1884896272
1650841066
4093672931
18446417789032809088

real	0m13.604s
user	0m13.580s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.35e+07  |2142871919|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.92769845|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.80270790|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.50973130|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.51380571|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.02570236|  PASSED  
        diehard_opso|   0|   2097152|     100|0.39737766|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.93795735|  PASSED  
         diehard_dna|   0|   2097152|     100|0.28775117|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.99764620|   WEAK   
diehard_count_1s_byt|   0|    256000|     100|0.74006330|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.25249632|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.81720747|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.88318167|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.26174107|  PASSED  
        diehard_sums|   0|       100|     100|0.57946162|  PASSED  
        diehard_runs|   0|    100000|     100|0.27090164|  PASSED  
        diehard_runs|   0|    100000|     100|0.84442830|  PASSED  
       diehard_craps|   0|    200000|     100|0.91111797|  PASSED  
       diehard_craps|   0|    200000|     100|0.67514851|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.95435770|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.03567629|  PASSED  
         sts_monobit|   1|    100000|     100|0.93060127|  PASSED  
            sts_runs|   2|    100000|     100|0.44191830|  PASSED  
          sts_serial|   1|    100000|     100|0.93761557|  PASSED  
          sts_serial|   2|    100000|     100|0.26538347|  PASSED  
          sts_serial|   3|    100000|     100|0.27177578|  PASSED  
          sts_serial|   3|    100000|     100|0.38694476|  PASSED  
          sts_serial|   4|    100000|     100|0.80941680|  PASSED  
          sts_serial|   4|    100000|     100|0.96714865|  PASSED  
          sts_serial|   5|    100000|     100|0.48325195|  PASSED  
          sts_serial|   5|    100000|     100|0.23845432|  PASSED  
          sts_serial|   6|    100000|     100|0.13717860|  PASSED  
          sts_serial|   6|    100000|     100|0.53482252|  PASSED  
          sts_serial|   7|    100000|     100|0.07789144|  PASSED  
          sts_serial|   7|    100000|     100|0.11911326|  PASSED  
          sts_serial|   8|    100000|     100|0.07537262|  PASSED  
          sts_serial|   8|    100000|     100|0.92680021|  PASSED  
          sts_serial|   9|    100000|     100|0.14152542|  PASSED  
          sts_serial|   9|    100000|     100|0.73484848|  PASSED  
          sts_serial|  10|    100000|     100|0.18076431|  PASSED  
          sts_serial|  10|    100000|     100|0.62017650|  PASSED  
          sts_serial|  11|    100000|     100|0.10350358|  PASSED  
          sts_serial|  11|    100000|     100|0.23636013|  PASSED  
          sts_serial|  12|    100000|     100|0.44440901|  PASSED  
          sts_serial|  12|    100000|     100|0.94124053|  PASSED  
          sts_serial|  13|    100000|     100|0.50685771|  PASSED  
          sts_serial|  13|    100000|     100|0.94495645|  PASSED  
          sts_serial|  14|    100000|     100|0.14923590|  PASSED  
          sts_serial|  14|    100000|     100|0.88371465|  PASSED  
          sts_serial|  15|    100000|     100|0.12698235|  PASSED  
          sts_serial|  15|    100000|     100|0.77121234|  PASSED  
          sts_serial|  16|    100000|     100|0.75571417|  PASSED  
          sts_serial|  16|    100000|     100|0.53067880|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.31797311|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.93954142|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.43996405|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.34576842|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.40115866|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.24934280|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.59485292|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.04152271|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.99950020|   WEAK   
         rgb_bitdist|  10|    100000|     100|0.35905510|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.84567870|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.26439070|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.43551521|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.02832159|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.42083169|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.64148899|  PASSED  
    rgb_permutations|   2|    100000|     100|0.27337995|  PASSED  
    rgb_permutations|   3|    100000|     100|0.37931499|  PASSED  
    rgb_permutations|   4|    100000|     100|0.42567678|  PASSED  
    rgb_permutations|   5|    100000|     100|0.49104636|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.81032222|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.52637663|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.79994091|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.72822575|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.70403937|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.92300340|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.55583059|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.19613541|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.73031595|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.43905662|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.10747657|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.99774825|   WEAK   
      rgb_lagged_sum|  12|   1000000|     100|0.76679252|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.82004329|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.73310727|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.95355568|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.90346112|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.69989885|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.64770578|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.76692036|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.04486683|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.72676941|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.08566095|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.51833921|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.61183827|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.70610223|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.87201318|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.41701406|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.79554122|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.99283028|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.97590073|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.96017604|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.89502935|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.79552931|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.13127453|  PASSED  
             dab_dct| 256|     50000|       1|0.12576476|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.46414023|  PASSED  
        dab_filltree|  32|  15000000|       1|0.96027457|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.03584268|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.32205634|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.93533454|  PASSED  

real	50m8.960s
user	46m24.916s
sys	3m34.384s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x23335e95
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x23335e95
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x23335e95
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x23335e95
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x23335e95
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -6.7  p =1-3.6e-6   suspicious       
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x23335e95
length= 2 gigabytes (2^31 bytes), time= 36.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(1,14-0)     R=  -6.7  p =1-6.6e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= -10.7  p =1-4.4e-10   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:all2         R= +14.7  p =  4.9e-7   very suspicious  
  ...and 145 test result(s) without anomalies

rng=RNG_stdin32, seed=0x23335e95
length= 4 gigabytes (2^32 bytes), time= 70.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:(0,14-0)     R= -12.3  p =1-4.7e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(1,14-0)     R= -10.7  p =1-1.5e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(2,14-0)     R=  -6.9  p =1-5.1e-6   unusual          
  [Low1/32]FPF-14+6/16:(3,14-1)     R=  -7.7  p =1-2.8e-7   suspicious       
  [Low1/32]FPF-14+6/16:(4,14-2)     R=  -7.5  p =1-6.5e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= -20.4  p =1-1.3e-19    FAIL !!        
  [Low1/32]FPF-14+6/16:all2         R= +78.6  p =  5.4e-31    FAIL !!!       
  ...and 149 test result(s) without anomalies


real	1m11.576s
user	1m9.664s
sys	0m1.660s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb29c5371
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb29c5371
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb29c5371
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb29c5371
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.6  p =1-1.8e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -3.6  p = 0.989     unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb29c5371
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -6.5  p =1-5.8e-6   suspicious       
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb29c5371
length= 2 gigabytes (2^31 bytes), time= 42.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -4.8  p =1-1.9e-4   mildly suspicious
  [Low1/32]FPF-14+6/16:(0,14-0)     R=  -8.4  p =1-2.1e-7   suspicious       
  [Low1/32]FPF-14+6/16:(1,14-0)     R=  -6.3  p =1-1.5e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= -12.4  p =1-9.8e-12    FAIL           
  [Low1/32]FPF-14+6/16:all2         R= +23.2  p =  4.2e-10   VERY SUSPICIOUS 
  ...and 143 test result(s) without anomalies


real	0m42.951s
user	0m41.896s
sys	0m0.904s
*/
