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
/// @created on 2019-12-08 02:58:42 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token c07c75d9-db05-492c-84fb-b06ccecfbe9b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib3;
/* TEST00
time ./MRndCPP 
3947485500
17362123
1960902338
3226255525
3723312857
1353835486
18446644450532178251

real	0m55.640s
user	0m55.584s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.16e+07  |2897451688|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.99621888|   WEAK   
      diehard_operm5|   0|   1000000|     100|0.62271877|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.00849424|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.99023621|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.26712938|  PASSED  
        diehard_opso|   0|   2097152|     100|0.05880305|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.52534558|  PASSED  
         diehard_dna|   0|   2097152|     100|0.64703788|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.28748134|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.37339495|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.58615511|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.79715923|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.59699899|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.96159895|  PASSED  
        diehard_sums|   0|       100|     100|0.12282852|  PASSED  
        diehard_runs|   0|    100000|     100|0.27451859|  PASSED  
        diehard_runs|   0|    100000|     100|0.26197452|  PASSED  
       diehard_craps|   0|    200000|     100|0.13955630|  PASSED  
       diehard_craps|   0|    200000|     100|0.38903654|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.41657308|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.13193190|  PASSED  
         sts_monobit|   1|    100000|     100|0.84756869|  PASSED  
            sts_runs|   2|    100000|     100|0.99140333|  PASSED  
          sts_serial|   1|    100000|     100|0.35503840|  PASSED  
          sts_serial|   2|    100000|     100|0.79125623|  PASSED  
          sts_serial|   3|    100000|     100|0.50514487|  PASSED  
          sts_serial|   3|    100000|     100|0.09483507|  PASSED  
          sts_serial|   4|    100000|     100|0.32323585|  PASSED  
          sts_serial|   4|    100000|     100|0.95649522|  PASSED  
          sts_serial|   5|    100000|     100|0.99945499|   WEAK   
          sts_serial|   5|    100000|     100|0.34737582|  PASSED  
          sts_serial|   6|    100000|     100|0.99682265|   WEAK   
          sts_serial|   6|    100000|     100|0.96825754|  PASSED  
          sts_serial|   7|    100000|     100|0.75534752|  PASSED  
          sts_serial|   7|    100000|     100|0.38494186|  PASSED  
          sts_serial|   8|    100000|     100|0.44281672|  PASSED  
          sts_serial|   8|    100000|     100|0.14018666|  PASSED  
          sts_serial|   9|    100000|     100|0.26481185|  PASSED  
          sts_serial|   9|    100000|     100|0.63762280|  PASSED  
          sts_serial|  10|    100000|     100|0.95277121|  PASSED  
          sts_serial|  10|    100000|     100|0.93339754|  PASSED  
          sts_serial|  11|    100000|     100|0.41535287|  PASSED  
          sts_serial|  11|    100000|     100|0.27317770|  PASSED  
          sts_serial|  12|    100000|     100|0.29697917|  PASSED  
          sts_serial|  12|    100000|     100|0.68102847|  PASSED  
          sts_serial|  13|    100000|     100|0.38395689|  PASSED  
          sts_serial|  13|    100000|     100|0.08723706|  PASSED  
          sts_serial|  14|    100000|     100|0.78635737|  PASSED  
          sts_serial|  14|    100000|     100|0.83014546|  PASSED  
          sts_serial|  15|    100000|     100|0.56296952|  PASSED  
          sts_serial|  15|    100000|     100|0.57263242|  PASSED  
          sts_serial|  16|    100000|     100|0.71168573|  PASSED  
          sts_serial|  16|    100000|     100|0.33120583|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.55209928|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.30837062|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.96603381|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.52791134|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.08529037|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.93082172|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.97453909|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.04175159|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.48261107|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.16767283|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.90095507|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.93517895|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.03953149|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.53806909|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.77100708|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.11348866|  PASSED  
    rgb_permutations|   2|    100000|     100|0.25839798|  PASSED  
    rgb_permutations|   3|    100000|     100|0.95270480|  PASSED  
    rgb_permutations|   4|    100000|     100|0.50718676|  PASSED  
    rgb_permutations|   5|    100000|     100|0.11392430|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.66577830|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.97162683|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.60990709|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.99943415|   WEAK   
      rgb_lagged_sum|   4|   1000000|     100|0.78650334|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.20994084|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.91950342|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.04722486|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.76346632|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.52766274|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.97533883|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.31010424|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.98926903|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.92293263|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.99126008|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.39335027|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.99367383|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.15183658|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.46815432|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.98260371|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.93954297|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.40249029|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.95157274|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.35494425|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.06521592|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.82827504|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.60811523|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.21621251|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.65169649|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.54769749|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.47647189|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.96221667|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.99910200|   WEAK   
     rgb_kstest_test|   0|     10000|    1000|0.33374907|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.12225411|  PASSED  
             dab_dct| 256|     50000|       1|0.24199699|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.35125612|  PASSED  
        dab_filltree|  32|  15000000|       1|0.65466741|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.05688134|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.92957627|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.94277985|  PASSED  

real	48m41.009s
user	45m4.996s
sys	3m32.756s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xab53e107
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xab53e107
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  7.7e-3   unusual          
  [Low8/32]DC6-9x1Bytes-1           R=  -4.0  p =1-5.9e-3   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0xab53e107
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +21.3  p =  1.6e-8    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+1,13-5,T)         R= +20.1  p =  4.7e-8   very suspicious  
  [Low1/32]BCFN(2+4,13-6,T)         R= +14.3  p =  2.5e-5   mildly suspicious
  [Low1/32]DC6-9x1Bytes-1           R=+217.2  p =  1.2e-114   FAIL !!!!!     
  [Low1/32]Gap-16:A                 R=+223.0  p =  3.8e-191   FAIL !!!!!!    
  [Low1/32]Gap-16:B                 R= +35.6  p =  6.3e-29    FAIL !!!       
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +57.5  p =  4.2e-50    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-2)     R= +61.7  p =  9.0e-54    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= +42.1  p =  1.0e-36    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= +34.1  p =  8.4e-28    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= +23.4  p =  2.9e-19    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= +17.0  p =  5.5e-14    FAIL           
  [Low1/32]FPF-14+6/16:(6,14-6)     R= +13.7  p =  1.4e-10   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(7,14-7)     R=  +7.9  p =  3.8e-6   unusual          
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  +7.6  p =  1.5e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R=+106.3  p =  9.2e-96    FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2481  p =  2.4e-846   FAIL !!!!!!!   
  ...and 107 test result(s) without anomalies


real	0m6.481s
user	0m6.224s
sys	0m0.216s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4c370813
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4c370813
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4c370813
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R= +11.2  p =  1.4e-4   mildly suspicious
  [Low1/32]BCFN(2+1,13-5,T)         R= +13.0  p =  2.9e-5   mildly suspicious
  [Low1/32]BCFN(2+3,13-6,T)         R= +18.6  p =  8.5e-7   suspicious       
  [Low1/32]BCFN(2+4,13-6,T)         R= +19.8  p =  3.3e-7   very suspicious  
  [Low1/32]BCFN(2+5,13-7,T)         R= +26.0  p =  1.8e-8   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R=+221.0  p =  1.2e-116   FAIL !!!!!     
  [Low1/32]Gap-16:A                 R=+224.7  p =  1.2e-192   FAIL !!!!!!    
  [Low1/32]Gap-16:B                 R= +34.8  p =  3.2e-28    FAIL !!!       
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +57.2  p =  8.3e-50    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-2)     R= +57.7  p =  3.2e-50    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= +41.9  p =  1.7e-36    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= +30.8  p =  4.1e-25    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= +16.0  p =  3.9e-13    FAIL           
  [Low1/32]FPF-14+6/16:(5,14-5)     R= +19.2  p =  9.4e-16    FAIL           
  [Low1/32]FPF-14+6/16:(6,14-6)     R= +11.9  p =  3.7e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(7,14-7)     R=  +8.1  p =  2.7e-6   unusual          
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +12.3  p =  7.2e-9   very suspicious  
  [Low1/32]FPF-14+6/16:all          R=+101.5  p =  2.0e-91    FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2273  p =  1.1e-775   FAIL !!!!!!!   
  ...and 105 test result(s) without anomalies


real	0m5.701s
user	0m5.552s
sys	0m0.140s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x10d191de
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x10d191de
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x10d191de
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  9.2e-3   unusual          
  [Low1/32]BCFN(2+0,13-5,T)         R= +13.2  p =  2.3e-5   suspicious       
  [Low1/32]BCFN(2+1,13-5,T)         R= +22.2  p =  7.4e-9    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+2,13-6,T)         R= +17.5  p =  1.9e-6   very suspicious  
  [Low1/32]BCFN(2+3,13-6,T)         R= +12.8  p =  8.3e-5   unusual          
  [Low1/32]BCFN(2+4,13-6,T)         R= +14.6  p =  1.9e-5   mildly suspicious
  [Low1/32]BCFN(2+5,13-7,T)         R= +12.6  p =  2.0e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=+221.4  p =  8.2e-117   FAIL !!!!!     
  [Low1/32]Gap-16:A                 R=+223.0  p =  3.6e-191   FAIL !!!!!!    
  [Low1/32]Gap-16:B                 R= +36.7  p =  8.0e-30    FAIL !!!       
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +57.7  p =  2.9e-50    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-2)     R= +60.6  p =  9.6e-53    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= +42.4  p =  5.8e-37    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= +28.9  p =  1.4e-23    FAIL !!        
  [Low1/32]FPF-14+6/16:(4,14-5)     R= +22.9  p =  7.4e-19    FAIL !         
  [Low1/32]FPF-14+6/16:(5,14-5)     R= +26.1  p =  1.5e-21    FAIL !!        
  [Low1/32]FPF-14+6/16:(6,14-6)     R= +14.8  p =  2.1e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(7,14-7)     R= +10.1  p =  7.3e-8   suspicious       
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  +8.4  p =  4.7e-6   unusual          
  [Low1/32]FPF-14+6/16:(9,14-8)     R=  +7.6  p =  1.6e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R=+106.6  p =  5.4e-96    FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2484  p =  2.5e-847   FAIL !!!!!!!   
  ...and 102 test result(s) without anomalies


real	0m5.677s
user	0m5.548s
sys	0m0.120s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9cce69d0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9cce69d0
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9cce69d0
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R= +13.0  p =  6.6e-5   mildly suspicious
  [Low1/32]BCFN(2+4,13-6,T)         R= +11.7  p =  1.8e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=+219.1  p =  1.2e-115   FAIL !!!!!     
  [Low1/32]Gap-16:A                 R=+223.5  p =  1.5e-191   FAIL !!!!!!    
  [Low1/32]Gap-16:B                 R= +33.4  p =  3.7e-27    FAIL !!        
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +58.4  p =  7.3e-51    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(1,14-2)     R= +58.9  p =  2.7e-51    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(2,14-3)     R= +44.3  p =  1.4e-38    FAIL !!!       
  [Low1/32]FPF-14+6/16:(3,14-4)     R= +24.3  p =  8.0e-20    FAIL !         
  [Low1/32]FPF-14+6/16:(4,14-5)     R= +19.8  p =  2.6e-16    FAIL           
  [Low1/32]FPF-14+6/16:(5,14-5)     R= +23.5  p =  2.2e-19    FAIL !         
  [Low1/32]FPF-14+6/16:(6,14-6)     R= +14.3  p =  5.8e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(7,14-7)     R=  +7.2  p =  1.4e-5   unusual          
  [Low1/32]FPF-14+6/16:(9,14-8)     R=  +8.5  p =  4.0e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R=+103.4  p =  4.3e-93    FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all2         R= +2374  p =  7.4e-810   FAIL !!!!!!!   
  ...and 108 test result(s) without anomalies


real	0m5.909s
user	0m5.760s
sys	0m0.144s
*/
