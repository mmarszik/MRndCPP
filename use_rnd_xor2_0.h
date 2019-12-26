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
/// @created on 2019-12-08 03:02:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 9b7aaf86-1d29-4847-bcea-031ec630c093                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_xor2.h"
#include "rnd_mlin.h"

using TRnd = RndXor2<RndMLin,5039,5153>;
/* TEST00
time ./MRndCPP 
407406787
239207623
2217949946
1047795860
3158173004
1591622249
4612262074773252729

real	0m4.294s
user	0m4.288s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.20e+07  |1808437039|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.10317056|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.00222166|   WEAK   
  diehard_rank_32x32|   0|     40000|     100|0.69594366|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.91530404|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.88442250|  PASSED  
        diehard_opso|   0|   2097152|     100|0.04694078|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.56450266|  PASSED  
         diehard_dna|   0|   2097152|     100|0.04786829|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.99254059|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.95287677|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.92614578|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.67355460|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.52821259|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.53447996|  PASSED  
        diehard_sums|   0|       100|     100|0.00008544|   WEAK   
        diehard_runs|   0|    100000|     100|0.96226844|  PASSED  
        diehard_runs|   0|    100000|     100|0.04643921|  PASSED  
       diehard_craps|   0|    200000|     100|0.20356457|  PASSED  
       diehard_craps|   0|    200000|     100|0.19380528|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.05743613|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.08395273|  PASSED  
         sts_monobit|   1|    100000|     100|0.28163545|  PASSED  
            sts_runs|   2|    100000|     100|0.01267078|  PASSED  
          sts_serial|   1|    100000|     100|0.52087430|  PASSED  
          sts_serial|   2|    100000|     100|0.79229071|  PASSED  
          sts_serial|   3|    100000|     100|0.40245935|  PASSED  
          sts_serial|   3|    100000|     100|0.42060491|  PASSED  
          sts_serial|   4|    100000|     100|0.31537317|  PASSED  
          sts_serial|   4|    100000|     100|0.05226001|  PASSED  
          sts_serial|   5|    100000|     100|0.82480855|  PASSED  
          sts_serial|   5|    100000|     100|0.12211489|  PASSED  
          sts_serial|   6|    100000|     100|0.98375366|  PASSED  
          sts_serial|   6|    100000|     100|0.53296068|  PASSED  
          sts_serial|   7|    100000|     100|0.24957729|  PASSED  
          sts_serial|   7|    100000|     100|0.58107608|  PASSED  
          sts_serial|   8|    100000|     100|0.87235372|  PASSED  
          sts_serial|   8|    100000|     100|0.94389457|  PASSED  
          sts_serial|   9|    100000|     100|0.22589923|  PASSED  
          sts_serial|   9|    100000|     100|0.05475244|  PASSED  
          sts_serial|  10|    100000|     100|0.57981201|  PASSED  
          sts_serial|  10|    100000|     100|0.84657114|  PASSED  
          sts_serial|  11|    100000|     100|0.67762566|  PASSED  
          sts_serial|  11|    100000|     100|0.71412646|  PASSED  
          sts_serial|  12|    100000|     100|0.56976283|  PASSED  
          sts_serial|  12|    100000|     100|0.56164176|  PASSED  
          sts_serial|  13|    100000|     100|0.81255679|  PASSED  
          sts_serial|  13|    100000|     100|0.60805143|  PASSED  
          sts_serial|  14|    100000|     100|0.90371188|  PASSED  
          sts_serial|  14|    100000|     100|0.86416876|  PASSED  
          sts_serial|  15|    100000|     100|0.34070387|  PASSED  
          sts_serial|  15|    100000|     100|0.14872016|  PASSED  
          sts_serial|  16|    100000|     100|0.91086464|  PASSED  
          sts_serial|  16|    100000|     100|0.54591577|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.29758910|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.71766650|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.63233056|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.20416998|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.40540487|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.42091415|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.26490457|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.80428982|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.28433813|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.91829209|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.96685612|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.74892617|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.22889901|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.92359804|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.48439435|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.05543262|  PASSED  
    rgb_permutations|   2|    100000|     100|0.83729366|  PASSED  
    rgb_permutations|   3|    100000|     100|0.48739167|  PASSED  
    rgb_permutations|   4|    100000|     100|0.99243388|  PASSED  
    rgb_permutations|   5|    100000|     100|0.52196146|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.29338138|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.45992143|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.01076061|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.20078665|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.22958094|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.42919304|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.49329279|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.87900253|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.21821526|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.98973663|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.30057376|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.91272014|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.68177215|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.04894809|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.37512595|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.98143007|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.13271426|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.66252534|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.92411346|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.49598374|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.24165096|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.58220393|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.69084125|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.56648304|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.03400184|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.30233796|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.30378561|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.05413091|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.23784788|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.34898749|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.86760092|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.09150684|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.37358161|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.93501498|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.00000000|  FAILED  
             dab_dct| 256|     50000|       1|0.08652408|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.77866555|  PASSED  
        dab_filltree|  32|  15000000|       1|0.19844592|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.00003872|   WEAK   
       dab_filltree2|   1|   5000000|       1|0.03661349|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.26532026|  PASSED  

real	49m6.674s
user	45m16.464s
sys	3m47.296s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x431f7939
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x431f7939
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +18.7  p =  1.2e-8    VERY SUSPICIOUS 
  DC6-9x1Bytes-1                    R=+158.8  p =  4.0e-97    FAIL !!!!!     
  Gap-16:A                          R=+225.2  p =  1.7e-191   FAIL !!!!!!    
  Gap-16:B                          R= +60.2  p =  3.1e-48    FAIL !!!!      
  FPF-14+6/16:(0,14-0)              R= +59.9  p =  4.6e-55    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= +56.0  p =  2.0e-51    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= +59.2  p =  2.1e-54    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= +42.0  p =  5.5e-37    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= +31.4  p =  3.3e-27    FAIL !!        
  FPF-14+6/16:(5,14-2)              R= +29.6  p =  1.0e-25    FAIL !!        
  FPF-14+6/16:(6,14-3)              R= +23.5  p =  2.4e-20    FAIL !         
  FPF-14+6/16:(7,14-4)              R= +15.9  p =  6.9e-13    FAIL           
  FPF-14+6/16:(8,14-5)              R=  +9.3  p =  1.5e-7   suspicious       
  FPF-14+6/16:(10,14-6)             R=  +7.6  p =  6.8e-6   unusual          
  FPF-14+6/16:all                   R=+121.9  p =  6.7e-114   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +3212  p =  8e-1201    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+139.6  p =  3.2e-93    FAIL !!!!!     
  [Low8/32]Gap-16:A                 R= +43.6  p =  2.9e-35    FAIL !!!       
  [Low8/32]Gap-16:B                 R= +22.4  p =  2.0e-18    FAIL !         
  [Low1/32]DC6-9x1Bytes-1           R=  +9.0  p =  8.1e-5   suspicious       
  [Low1/32]Gap-16:A                 R= +39.5  p =  2.3e-31    FAIL !!!       
  [Low1/32]Gap-16:B                 R=  +8.0  p =  3.3e-6   suspicious       
  ...and 95 test result(s) without anomalies


real	0m3.022s
user	0m2.836s
sys	0m0.184s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3fdc75fd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3fdc75fd
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +13.9  p =  2.1e-6   very suspicious  
  DC6-9x1Bytes-1                    R=+168.0  p =  8.0e-103   FAIL !!!!!     
  Gap-16:A                          R=+228.5  p =  2.2e-194   FAIL !!!!!!    
  Gap-16:B                          R= +65.8  p =  1.0e-52    FAIL !!!!      
  FPF-14+6/16:(0,14-0)              R= +52.7  p =  2.3e-48    FAIL !!!       
  FPF-14+6/16:(1,14-0)              R= +56.3  p =  9.4e-52    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= +54.8  p =  2.7e-50    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= +40.7  p =  8.1e-36    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= +29.1  p =  2.8e-25    FAIL !!        
  FPF-14+6/16:(5,14-2)              R= +27.9  p =  3.8e-24    FAIL !!        
  FPF-14+6/16:(6,14-3)              R= +23.0  p =  6.4e-20    FAIL !         
  FPF-14+6/16:(7,14-4)              R= +12.9  p =  1.8e-10   VERY SUSPICIOUS 
  FPF-14+6/16:(8,14-5)              R= +10.3  p =  2.2e-8   very suspicious  
  FPF-14+6/16:(9,14-5)              R= +10.3  p =  2.0e-8   very suspicious  
  FPF-14+6/16:(11,14-7)             R=  +7.8  p =  5.0e-6   unusual          
  FPF-14+6/16:all                   R=+115.1  p =  1.5e-107   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +2842  p =  1e-1062    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+140.1  p =  1.6e-93    FAIL !!!!!     
  [Low8/32]Gap-16:A                 R=+109.0  p =  5.8e-89    FAIL !!!!!     
  [Low8/32]Gap-16:B                 R= +84.9  p =  7.3e-70    FAIL !!!!      
  [Low1/32]DC6-9x1Bytes-1           R=  +6.1  p =  3.3e-3   unusual          
  [Low1/32]Gap-16:A                 R= +28.5  p =  1.5e-22    FAIL !!        
  [Low1/32]Gap-16:B                 R=  +7.0  p =  1.7e-5   suspicious       
  ...and 94 test result(s) without anomalies


real	0m2.843s
user	0m2.732s
sys	0m0.100s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x22ed9d29
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x22ed9d29
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +16.4  p =  1.5e-7   very suspicious  
  DC6-9x1Bytes-1                    R=+171.1  p =  1.0e-104   FAIL !!!!!     
  Gap-16:A                          R=+223.2  p =  8.8e-190   FAIL !!!!!!    
  Gap-16:B                          R= +52.6  p =  3.8e-42    FAIL !!!       
  FPF-14+6/16:(0,14-0)              R= +58.6  p =  8.1e-54    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= +59.0  p =  3.0e-54    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= +61.4  p =  2.0e-56    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= +43.3  p =  3.8e-38    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= +27.9  p =  3.8e-24    FAIL !!        
  FPF-14+6/16:(5,14-2)              R= +25.9  p =  2.1e-22    FAIL !!        
  FPF-14+6/16:(6,14-3)              R= +22.0  p =  4.7e-19    FAIL !         
  FPF-14+6/16:(7,14-4)              R= +14.5  p =  8.2e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(9,14-5)              R=  +7.9  p =  2.0e-6   mildly suspicious
  FPF-14+6/16:all                   R=+121.6  p =  1.2e-113   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +3228  p =  7e-1207    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+143.3  p =  1.1e-95    FAIL !!!!!     
  [Low8/32]Gap-16:A                 R= +44.7  p =  3.7e-36    FAIL !!!       
  [Low8/32]Gap-16:B                 R= +16.4  p =  1.8e-13    FAIL           
  [Low1/32]DC6-9x1Bytes-1           R=  +6.3  p =  2.5e-3   unusual          
  [Low1/32]Gap-16:A                 R= +34.8  p =  1.4e-27    FAIL !!!       
  [Low1/32]Gap-16:B                 R=  +7.0  p =  1.7e-5   suspicious       
  ...and 96 test result(s) without anomalies


real	0m2.972s
user	0m2.868s
sys	0m0.096s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb06c9dbc
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb06c9dbc
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +18.3  p =  1.8e-8    VERY SUSPICIOUS 
  DC6-9x1Bytes-1                    R=+164.9  p =  6.4e-101   FAIL !!!!!     
  Gap-16:A                          R=+232.8  p =  5.1e-198   FAIL !!!!!!    
  Gap-16:B                          R= +69.4  p =  1.4e-55    FAIL !!!!      
  FPF-14+6/16:(0,14-0)              R= +61.0  p =  4.4e-56    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= +58.2  p =  1.9e-53    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= +54.6  p =  3.8e-50    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= +37.7  p =  3.7e-33    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= +30.5  p =  2.0e-26    FAIL !!        
  FPF-14+6/16:(5,14-2)              R= +24.0  p =  8.5e-21    FAIL !         
  FPF-14+6/16:(6,14-3)              R= +21.2  p =  2.3e-18    FAIL !         
  FPF-14+6/16:(7,14-4)              R= +16.2  p =  3.3e-13    FAIL           
  FPF-14+6/16:(8,14-5)              R= +13.0  p =  1.1e-10   VERY SUSPICIOUS 
  FPF-14+6/16:(9,14-5)              R= +10.5  p =  1.5e-8   very suspicious  
  FPF-14+6/16:(10,14-6)             R=  +9.0  p =  6.0e-7   mildly suspicious
  FPF-14+6/16:all                   R=+118.7  p =  6.5e-111   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +3047  p =  4e-1139    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+138.8  p =  1.1e-92    FAIL !!!!!     
  [Low8/32]Gap-16:A                 R= +74.0  p =  3.1e-60    FAIL !!!!      
  [Low8/32]Gap-16:B                 R= +40.1  p =  5.0e-33    FAIL !!!       
  [Low1/32]DC6-9x1Bytes-1           R=  +6.5  p =  2.0e-3   unusual          
  [Low1/32]Gap-16:A                 R= +32.0  p =  2.3e-25    FAIL !!        
  [Low1/32]Gap-16:B                 R=  +4.8  p =  8.3e-4   unusual          
  ...and 94 test result(s) without anomalies


real	0m2.884s
user	0m2.796s
sys	0m0.080s
*/
