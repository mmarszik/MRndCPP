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
/// @created on 2019-12-18 01:26:42 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 4b74100b-635b-4c21-b986-a7fc6cccd551                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib16;
/* TEST00
time ./MRndCPP 
1509875395
3652619513
2353570407
450461425
2468325801
4032099329
114399418491026

real	0m51.698s
user	0m51.636s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.19e+07  | 833259674|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.97118466|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.65883982|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.51005708|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.99505902|   WEAK   
   diehard_bitstream|   0|   2097152|     100|0.69938968|  PASSED  
        diehard_opso|   0|   2097152|     100|0.37977418|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.00000000|  FAILED  
         diehard_dna|   0|   2097152|     100|0.51679735|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.51659419|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.15667444|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.30484250|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.01270938|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.01824340|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.86015848|  PASSED  
        diehard_sums|   0|       100|     100|0.26475616|  PASSED  
        diehard_runs|   0|    100000|     100|0.67070748|  PASSED  
        diehard_runs|   0|    100000|     100|0.95116569|  PASSED  
       diehard_craps|   0|    200000|     100|0.65520907|  PASSED  
       diehard_craps|   0|    200000|     100|0.73490862|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.70308960|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.08698106|  PASSED  
            sts_runs|   2|    100000|     100|0.04250946|  PASSED  
          sts_serial|   1|    100000|     100|0.75656096|  PASSED  
          sts_serial|   2|    100000|     100|0.53322865|  PASSED  
          sts_serial|   3|    100000|     100|0.48272931|  PASSED  
          sts_serial|   3|    100000|     100|0.53516109|  PASSED  
          sts_serial|   4|    100000|     100|0.11204864|  PASSED  
          sts_serial|   4|    100000|     100|0.21287168|  PASSED  
          sts_serial|   5|    100000|     100|0.05511673|  PASSED  
          sts_serial|   5|    100000|     100|0.76840240|  PASSED  
          sts_serial|   6|    100000|     100|0.12127591|  PASSED  
          sts_serial|   6|    100000|     100|0.53124249|  PASSED  
          sts_serial|   7|    100000|     100|0.47878721|  PASSED  
          sts_serial|   7|    100000|     100|0.98496051|  PASSED  
          sts_serial|   8|    100000|     100|0.73044837|  PASSED  
          sts_serial|   8|    100000|     100|0.97743147|  PASSED  
          sts_serial|   9|    100000|     100|0.38181392|  PASSED  
          sts_serial|   9|    100000|     100|0.28128307|  PASSED  
          sts_serial|  10|    100000|     100|0.37979279|  PASSED  
          sts_serial|  10|    100000|     100|0.97968845|  PASSED  
          sts_serial|  11|    100000|     100|0.24803391|  PASSED  
          sts_serial|  11|    100000|     100|0.90935004|  PASSED  
          sts_serial|  12|    100000|     100|0.30499624|  PASSED  
          sts_serial|  12|    100000|     100|0.08698846|  PASSED  
          sts_serial|  13|    100000|     100|0.94561482|  PASSED  
          sts_serial|  13|    100000|     100|0.99761062|   WEAK   
          sts_serial|  14|    100000|     100|0.86877671|  PASSED  
          sts_serial|  14|    100000|     100|0.99822349|   WEAK   
          sts_serial|  15|    100000|     100|0.28731333|  PASSED  
          sts_serial|  15|    100000|     100|0.50303609|  PASSED  
          sts_serial|  16|    100000|     100|0.71431515|  PASSED  
          sts_serial|  16|    100000|     100|0.61657569|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.01996100|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.97335135|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.91107542|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.13230544|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.21717497|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.00492976|   WEAK   
         rgb_bitdist|   7|    100000|     100|0.27824513|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.04369350|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.21373183|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.98889254|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.32820750|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.44636388|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.99872257|   WEAK   
rgb_minimum_distance|   3|     10000|    1000|0.86785977|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.71857139|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.53057152|  PASSED  
    rgb_permutations|   2|    100000|     100|0.17894172|  PASSED  
    rgb_permutations|   3|    100000|     100|0.91461914|  PASSED  
    rgb_permutations|   4|    100000|     100|0.83646563|  PASSED  
    rgb_permutations|   5|    100000|     100|0.94595979|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.69093676|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.96465881|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.11746748|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.47433049|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.47540046|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.23718247|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.05086132|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.98259860|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.32098883|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.56591173|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.19784578|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.47960395|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.07332369|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.87482713|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.13525908|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.50926120|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.56653777|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.31855336|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.88472673|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.94265989|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.06418170|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.98275898|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.62905104|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.39676970|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.99743623|   WEAK   
      rgb_lagged_sum|  25|   1000000|     100|0.50182409|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.33059349|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.77596955|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.16519766|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.30056245|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.46625532|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.57178705|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.97628730|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.84163170|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.00000000|  FAILED  
             dab_dct| 256|     50000|       1|0.08778904|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.09801970|  PASSED  
        dab_filltree|  32|  15000000|       1|0.28371060|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.91120507|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.02167092|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.75484021|  PASSED  

real	50m14.953s
user	46m43.180s
sys	3m29.104s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x178b6f78
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x178b6f78
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +18.6  p =  1.3e-8    VERY SUSPICIOUS 
  BCFN(2+1,13-3,T)                  R= +10.8  p =  6.7e-5   mildly suspicious
  BCFN(2+2,13-3,T)                  R= +17.2  p =  6.3e-8   very suspicious  
  BCFN(2+3,13-3,T)                  R= +21.2  p =  7.8e-10   VERY SUSPICIOUS 
  BCFN(2+4,13-4,T)                  R= +34.4  p =  5.6e-15    FAIL           
  BCFN(2+5,13-5,T)                  R= +30.9  p =  2.7e-12    FAIL           
  BCFN(2+6,13-5,T)                  R= +25.9  p =  2.5e-10   VERY SUSPICIOUS 
  BCFN(2+7,13-6,T)                  R= +33.6  p =  6.2e-12   VERY SUSPICIOUS 
  BCFN(2+8,13-6,T)                  R= +41.0  p =  1.8e-14    FAIL           
  BCFN(2+9,13-7,T)                  R= +52.2  p =  2.4e-16    FAIL !         
  BCFN(2+10,13-8,T)                 R= +58.7  p =  7.6e-16    FAIL           
  BCFN(2+11,13-8,T)                 R= +55.2  p =  5.9e-15    FAIL           
  BCFN(2+12,13-9,T)                 R= +59.9  p =  1.4e-14    FAIL           
  BCFN(2+13,13-9,T)                 R= +66.6  p =  4.4e-16    FAIL           
  FPF-14+6/16:(5,14-2)              R=  +9.7  p =  2.8e-8   very suspicious  
  FPF-14+6/16:all                   R= +11.2  p =  5.3e-10   VERY SUSPICIOUS 
  FPF-14+6/16:all2                  R= +16.1  p =  1.1e-7   very suspicious  
  FPF-14+6/16:cross                 R=+233.0  p =  2.3e-196   FAIL !!!!!!    
  [Low8/32]BCFN(2+0,13-4,T)         R=+183.8  p =  3.1e-80    FAIL !!!!      
  [Low8/32]BCFN(2+1,13-4,T)         R=+188.1  p =  4.1e-82    FAIL !!!!      
  [Low8/32]BCFN(2+2,13-5,T)         R=+195.3  p =  1.2e-76    FAIL !!!!      
  [Low8/32]BCFN(2+3,13-5,T)         R=+142.9  p =  3.9e-56    FAIL !!!!      
  [Low8/32]BCFN(2+4,13-5,T)         R=+177.3  p =  1.4e-69    FAIL !!!!      
  [Low8/32]BCFN(2+5,13-6,T)         R=+156.1  p =  6.6e-54    FAIL !!!!      
  [Low8/32]BCFN(2+6,13-6,T)         R=+173.4  p =  8.3e-60    FAIL !!!!      
  [Low8/32]BCFN(2+7,13-7,T)         R=+155.8  p =  1.6e-47    FAIL !!!       
  [Low8/32]BCFN(2+8,13-8,T)         R=+177.3  p =  6.0e-46    FAIL !!!       
  [Low8/32]BCFN(2+9,13-8,T)         R=+190.0  p =  3.7e-49    FAIL !!!!      
  [Low8/32]BCFN(2+10,13-9,T)        R=+235.3  p =  5.3e-54    FAIL !!!!      
  [Low8/32]BCFN(2+11,13-9,T)        R=+241.0  p =  2.9e-55    FAIL !!!!      
  [Low8/32]DC6-9x1Bytes-1           R=+656.5  p =  2.5e-441   FAIL !!!!!!!   
  [Low8/32]Gap-16:A                 R=+771.8  p =  1.4e-632   FAIL !!!!!!!   
  [Low8/32]Gap-16:B                 R=+151.4  p =  1.6e-124   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+537.8  p =  5.3e-495   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+440.1  p =  8.8e-390   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+268.6  p =  1.0e-234   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+217.9  p =  2.1e-190   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+147.8  p =  2.8e-129   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(5,14-4)     R= +97.4  p =  1.7e-79    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(6,14-5)     R= +67.0  p =  2.2e-55    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +79.7  p =  5.6e-66    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(8,14-6)     R= +42.6  p =  1.2e-32    FAIL !!!       
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +32.0  p =  2.9e-25    FAIL !!        
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +35.8  p =  7.9e-26    FAIL !!        
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +15.6  p =  2.9e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:(12,14-9)    R= +22.7  p =  1.4e-14    FAIL           
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +26.5  p =  1.1e-14    FAIL           
  [Low8/32]FPF-14+6/16:(15,14-11)   R= +11.7  p =  6.1e-6   unusual          
  [Low8/32]FPF-14+6/16:all          R=+803.4  p =  1.7e-753   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:all2         R=+153546 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+140.7  p =  3.6e-111   FAIL !!!!!     
  [Low1/32]BCFN(2+0,13-6,T)         R= +4402  p =  5e-1508    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R= +4075  p =  7e-1396    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R= +4914  p =  2e-1683    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R= +6719  p =  2e-2301    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +1462  p =  2.5e-440   FAIL !!!!!!!   
  [Low1/32]BCFN(2+5,13-8,T)         R=+951.2  p =  2.4e-242   FAIL !!!!!!    
  [Low1/32]BCFN(2+6,13-8,T)         R=+755.7  p =  9.6e-193   FAIL !!!!!!    
  [Low1/32]BCFN(2+7,13-9,T)         R= +1506  p =  1.6e-339   FAIL !!!!!!!   
  [Low1/32]BCFN(2+8,13-9,T)         R= +1292  p =  2.0e-291   FAIL !!!!!!    
  [Low1/32]DC6-9x1Bytes-1           R=+45475  p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+207354 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+813912 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+24557  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+17072  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+12452  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R= +9288  p =  3e-7700    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R= +7368  p =  3e-6108    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +5419  p =  3e-4147    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +3490  p =  1e-2777    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +2075  p =  2e-1493    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +1736  p =  1e-1249    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +1063  p =  2.4e-669   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(10,14-10)   R=+921.9  p =  4.7e-491   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(12,14-11)   R=+558.5  p =  2.8e-244   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:all          R=+35169  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+313011552 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +1264  p =  6e-1087    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +3016  p~=  6.7e-909   FAIL !!!!!!!   
  ...and 37 test result(s) without anomalies


real	0m2.909s
user	0m2.752s
sys	0m0.152s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3b06befd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3b06befd
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:(0,14-0)              R=  +7.8  p =  7.7e-7   mildly suspicious
  FPF-14+6/16:all                   R=  +5.2  p =  2.1e-4   unusual          
  FPF-14+6/16:all2                  R=  +8.7  p =  6.8e-5   unusual          
  FPF-14+6/16:cross                 R= +83.9  p =  6.2e-71    FAIL !!!!      
  [Low8/32]BCFN(2+0,13-4,T)         R= +98.4  p =  6.2e-43    FAIL !!!       
  [Low8/32]BCFN(2+1,13-4,T)         R=+111.4  p =  1.2e-48    FAIL !!!!      
  [Low8/32]BCFN(2+2,13-5,T)         R= +69.8  p =  1.7e-27    FAIL !!!       
  [Low8/32]BCFN(2+3,13-5,T)         R= +69.5  p =  2.0e-27    FAIL !!        
  [Low8/32]BCFN(2+4,13-5,T)         R= +82.0  p =  2.7e-32    FAIL !!!       
  [Low8/32]BCFN(2+5,13-6,T)         R= +49.0  p =  3.2e-17    FAIL !         
  [Low8/32]BCFN(2+6,13-6,T)         R= +62.7  p =  6.6e-22    FAIL !!        
  [Low8/32]BCFN(2+7,13-7,T)         R= +30.0  p =  1.1e-9    VERY SUSPICIOUS 
  [Low8/32]BCFN(2+8,13-8,T)         R= +25.8  p =  1.6e-7   suspicious       
  [Low8/32]BCFN(2+9,13-8,T)         R= +64.3  p =  2.8e-17    FAIL !         
  [Low8/32]BCFN(2+10,13-9,T)        R= +30.1  p =  6.9e-8   suspicious       
  [Low8/32]BCFN(2+11,13-9,T)        R= +62.4  p =  3.8e-15    FAIL           
  [Low8/32]DC6-9x1Bytes-1           R=+656.8  p =  1.7e-441   FAIL !!!!!!!   
  [Low8/32]Gap-16:A                 R=+796.9  p =  3.1e-653   FAIL !!!!!!!   
  [Low8/32]Gap-16:B                 R=+137.7  p =  2.7e-113   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+601.5  p =  1.1e-553   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+402.8  p =  9.1e-357   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+274.9  p =  3.3e-240   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+216.0  p =  1.0e-188   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+137.9  p =  1.2e-120   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+109.4  p =  2.7e-89    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(6,14-5)     R= +72.7  p =  3.7e-60    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +67.4  p =  9.6e-56    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(8,14-6)     R= +53.2  p =  9.9e-41    FAIL !!!       
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +30.8  p =  2.3e-24    FAIL !!        
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +30.8  p =  3.2e-22    FAIL !!        
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +12.5  p =  4.8e-9   very suspicious  
  [Low8/32]FPF-14+6/16:(12,14-9)    R=  +9.4  p =  3.5e-6   unusual          
  [Low8/32]FPF-14+6/16:all          R=+828.1  p =  1.1e-776   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:all2         R=+164682 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+138.3  p =  3.1e-109   FAIL !!!!!     
  [Low1/32]BCFN(2+0,13-6,T)         R= +3850  p =  8e-1319    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R= +4829  p =  2e-1654    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R= +4343  p =  1e-1487    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R= +4450  p =  1e-1524    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +1219  p =  2.1e-367   FAIL !!!!!!!   
  [Low1/32]BCFN(2+5,13-8,T)         R=+478.7  p =  2.0e-122   FAIL !!!!!     
  [Low1/32]BCFN(2+6,13-8,T)         R=+439.0  p =  2.3e-112   FAIL !!!!!     
  [Low1/32]BCFN(2+7,13-9,T)         R=+555.6  p =  5.8e-126   FAIL !!!!!     
  [Low1/32]BCFN(2+8,13-9,T)         R=+716.2  p =  4.8e-162   FAIL !!!!!     
  [Low1/32]DC6-9x1Bytes-1           R=+43643  p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+205534 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+806377 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+25043  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+17885  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+12064  p =  2e-9857    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R= +9095  p =  1e-7539    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R= +6767  p =  1e-5609    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +5083  p =  2e-3890    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +3636  p =  2e-2893    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +2730  p =  6e-1965    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +1857  p =  3e-1336    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +2036  p =  4e-1282    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(10,14-10)   R=+921.9  p =  4.7e-491   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(11,14-11)   R=+558.5  p =  2.8e-244   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:all          R=+35629  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+322348803 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+623.3  p =  6.0e-536   FAIL !!!!!!!   
  [Low1/32]BRank(12):512(1)         R= +3016  p~=  6.7e-909   FAIL !!!!!!!   
  ...and 53 test result(s) without anomalies


real	0m2.953s
user	0m2.896s
sys	0m0.052s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf90dac5e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf90dac5e
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:(0,14-0)              R=  +6.5  p =  1.1e-5   unusual          
  FPF-14+6/16:all                   R=  +5.1  p =  2.9e-4   unusual          
  FPF-14+6/16:cross                 R= +66.4  p =  3.1e-56    FAIL !!!!      
  [Low8/32]BCFN(2+0,13-4,T)         R=+139.7  p =  5.6e-61    FAIL !!!!      
  [Low8/32]BCFN(2+1,13-4,T)         R=+149.0  p =  4.6e-65    FAIL !!!!      
  [Low8/32]BCFN(2+2,13-5,T)         R=+121.9  p =  6.6e-48    FAIL !!!!      
  [Low8/32]BCFN(2+3,13-5,T)         R=+109.2  p =  6.3e-43    FAIL !!!       
  [Low8/32]BCFN(2+4,13-5,T)         R= +94.2  p =  4.6e-37    FAIL !!!       
  [Low8/32]BCFN(2+5,13-6,T)         R= +97.1  p =  1.0e-33    FAIL !!!       
  [Low8/32]BCFN(2+6,13-6,T)         R= +63.7  p =  2.9e-22    FAIL !!        
  [Low8/32]BCFN(2+7,13-7,T)         R= +42.8  p =  1.6e-13    FAIL           
  [Low8/32]BCFN(2+8,13-8,T)         R= +44.0  p =  4.1e-12   VERY SUSPICIOUS 
  [Low8/32]BCFN(2+9,13-8,T)         R= +49.9  p =  1.3e-13    FAIL           
  [Low8/32]BCFN(2+10,13-9,T)        R= +53.8  p =  3.3e-13    FAIL           
  [Low8/32]BCFN(2+11,13-9,T)        R= +45.5  p =  2.4e-11   VERY SUSPICIOUS 
  [Low8/32]DC6-9x1Bytes-1           R=+647.5  p =  3.2e-435   FAIL !!!!!!!   
  [Low8/32]Gap-16:A                 R=+763.7  p =  5.5e-626   FAIL !!!!!!!   
  [Low8/32]Gap-16:B                 R=+142.3  p =  4.5e-117   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+531.3  p =  5.4e-489   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+399.2  p =  1.4e-353   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+294.5  p =  2.2e-257   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+207.1  p =  6.6e-181   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+149.4  p =  9.7e-131   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+100.7  p =  3.2e-82    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(6,14-5)     R= +65.3  p =  5.4e-54    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +82.7  p =  2.1e-68    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(8,14-6)     R= +61.0  p =  9.9e-47    FAIL !!!       
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +25.0  p =  9.7e-20    FAIL !         
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +21.4  p =  1.9e-15    FAIL           
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +12.1  p =  9.6e-9   very suspicious  
  [Low8/32]FPF-14+6/16:(12,14-9)    R= +15.7  p =  3.8e-10  very suspicious  
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +18.4  p =  2.4e-10  very suspicious  
  [Low8/32]FPF-14+6/16:all          R=+784.4  p =  1.1e-735   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:all2         R=+146447 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +91.1  p =  3.9e-72    FAIL !!!!      
  [Low1/32]BCFN(2+0,13-6,T)         R= +4482  p =  2e-1535    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R= +4385  p =  5e-1502    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R= +6493  p =  3e-2224    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R= +3626  p =  3e-1242    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +1860  p =  3.8e-560   FAIL !!!!!!!   
  [Low1/32]BCFN(2+5,13-8,T)         R=+575.5  p =  5.2e-147   FAIL !!!!!     
  [Low1/32]BCFN(2+6,13-8,T)         R=+363.1  p =  4.2e-93    FAIL !!!!!     
  [Low1/32]BCFN(2+7,13-9,T)         R=+148.3  p =  1.9e-34    FAIL !!!       
  [Low1/32]BCFN(2+8,13-9,T)         R=+228.9  p =  1.4e-52    FAIL !!!!      
  [Low1/32]DC6-9x1Bytes-1           R=+46096  p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+203907 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+799077 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+25471  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+17588  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+12234  p =  1e-9996    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R= +9051  p =  3e-7503    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R= +7379  p =  2e-6117    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +5123  p =  1e-3920    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +3322  p =  1e-2643    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +3657  p =  1e-2631    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +1271  p =  1.4e-914   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +1537  p =  4.2e-968   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(10,14-10)   R= +1324  p =  3.4e-705   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:all          R=+35990  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+342785628 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +1332  p =  3e-1145    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +3016  p~=  6.7e-909   FAIL !!!!!!!   
  ...and 53 test result(s) without anomalies


real	0m2.836s
user	0m2.728s
sys	0m0.104s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x75d00a14
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x75d00a14
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +17.8  p =  3.1e-8   very suspicious  
  BCFN(2+1,13-3,T)                  R= +22.5  p =  1.8e-10   VERY SUSPICIOUS 
  BCFN(2+2,13-3,T)                  R= +19.2  p =  7.1e-9    VERY SUSPICIOUS 
  BCFN(2+3,13-3,T)                  R= +20.5  p =  1.6e-9    VERY SUSPICIOUS 
  BCFN(2+4,13-4,T)                  R= +27.4  p =  6.6e-12    FAIL           
  BCFN(2+5,13-5,T)                  R= +24.6  p =  8.0e-10   VERY SUSPICIOUS 
  BCFN(2+6,13-5,T)                  R= +37.0  p =  1.1e-14    FAIL           
  BCFN(2+7,13-6,T)                  R= +33.8  p =  5.2e-12    FAIL           
  BCFN(2+8,13-6,T)                  R= +46.2  p =  3.0e-16    FAIL !         
  BCFN(2+9,13-7,T)                  R= +43.1  p =  1.3e-13    FAIL           
  BCFN(2+10,13-8,T)                 R= +53.6  p =  1.5e-14    FAIL           
  BCFN(2+11,13-8,T)                 R= +56.6  p =  2.5e-15    FAIL           
  BCFN(2+12,13-9,T)                 R= +62.3  p =  4.0e-15    FAIL           
  BCFN(2+13,13-9,T)                 R= +74.9  p =  6.0e-18    FAIL !         
  FPF-14+6/16:all                   R=  +5.6  p =  9.6e-5   mildly suspicious
  FPF-14+6/16:cross                 R= +21.5  p =  1.7e-18    FAIL !         
  [Low8/32]BCFN(2+0,13-4,T)         R=+184.9  p =  1.0e-80    FAIL !!!!      
  [Low8/32]BCFN(2+1,13-4,T)         R=+173.7  p =  8.0e-76    FAIL !!!!      
  [Low8/32]BCFN(2+2,13-5,T)         R=+167.7  p =  8.0e-66    FAIL !!!!      
  [Low8/32]BCFN(2+3,13-5,T)         R=+159.1  p =  1.9e-62    FAIL !!!!      
  [Low8/32]BCFN(2+4,13-5,T)         R=+123.8  p =  1.2e-48    FAIL !!!!      
  [Low8/32]BCFN(2+5,13-6,T)         R=+137.4  p =  1.7e-47    FAIL !!!       
  [Low8/32]BCFN(2+6,13-6,T)         R=+168.3  p =  4.5e-58    FAIL !!!!      
  [Low8/32]BCFN(2+7,13-7,T)         R=+196.9  p =  7.5e-60    FAIL !!!!      
  [Low8/32]BCFN(2+8,13-8,T)         R=+159.1  p =  2.6e-41    FAIL !!!       
  [Low8/32]BCFN(2+9,13-8,T)         R=+194.0  p =  3.6e-50    FAIL !!!!      
  [Low8/32]BCFN(2+10,13-9,T)        R=+242.4  p =  1.4e-55    FAIL !!!!      
  [Low8/32]BCFN(2+11,13-9,T)        R=+229.9  p =  8.7e-53    FAIL !!!!      
  [Low8/32]DC6-9x1Bytes-1           R=+672.1  p =  7.8e-452   FAIL !!!!!!!   
  [Low8/32]Gap-16:A                 R=+783.2  p =  6.4e-642   FAIL !!!!!!!   
  [Low8/32]Gap-16:B                 R=+138.1  p =  1.4e-113   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+588.4  p =  1.1e-541   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+432.9  p =  1.9e-383   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+299.3  p =  1.6e-261   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+209.5  p =  5.5e-183   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+153.0  p =  7.0e-134   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+113.0  p =  2.8e-92    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(6,14-5)     R= +74.2  p =  2.0e-61    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +89.3  p =  6.7e-74    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(8,14-6)     R= +46.5  p =  1.2e-35    FAIL !!!       
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +31.2  p =  1.0e-24    FAIL !!        
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +20.3  p =  1.1e-14    FAIL           
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +18.0  p =  5.2e-13    FAIL           
  [Low8/32]FPF-14+6/16:(12,14-9)    R= +19.3  p =  1.9e-12   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:(14,14-11)   R= +11.9  p =  5.0e-6   unusual          
  [Low8/32]FPF-14+6/16:all          R=+846.9  p =  2.6e-794   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:all2         R=+170909 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+170.7  p =  9.1e-135   FAIL !!!!!     
  [Low1/32]BCFN(2+0,13-6,T)         R= +3861  p =  8e-1323    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R= +4002  p =  3e-1371    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R= +6162  p =  1e-2110    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R= +4846  p =  4e-1660    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +1680  p =  7.5e-506   FAIL !!!!!!!   
  [Low1/32]BCFN(2+5,13-8,T)         R=+337.1  p =  1.7e-86    FAIL !!!!      
  [Low1/32]BCFN(2+6,13-8,T)         R=+657.3  p =  9.3e-168   FAIL !!!!!     
  [Low1/32]BCFN(2+7,13-9,T)         R=+589.9  p =  1.1e-133   FAIL !!!!!     
  [Low1/32]BCFN(2+8,13-9,T)         R=+384.5  p =  1.6e-87    FAIL !!!!      
  [Low1/32]DC6-9x1Bytes-1           R=+44073  p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+208107 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+816737 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+24813  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+17842  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+12398  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R= +8474  p =  3e-7025    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R= +6614  p =  5e-5483    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +5388  p =  5e-4123    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +3990  p =  1e-3175    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +2270  p =  3e-1633    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +2112  p =  4e-1520    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +1417  p =  2.8e-892   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(10,14-10)   R=+763.9  p =  5.6e-407   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(11,14-11)   R=+745.6  p =  8.3e-326   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(12,14-11)   R= +1120  p =  7.2e-489   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:all          R=+35474  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+306045598 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +1209  p =  4e-1039    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +3016  p~=  6.7e-909   FAIL !!!!!!!   
  ...and 40 test result(s) without anomalies


real	0m3.025s
user	0m2.832s
sys	0m0.080s
*/
