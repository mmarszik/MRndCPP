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
/// @created on 2019-12-18 01:26:14 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 0dfedf11-77a7-4040-b2bf-4c350b7fab63                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib13;
/* TEST00
time ./MRndCPP 
4194195740
3441653495
2832820489
2395245702
1409957820
1743513315
18446633206652686073

real	0m51.674s
user	0m51.624s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.18e+07  | 530126383|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.29151515|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.87419617|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.50353142|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.00000117|   WEAK   
   diehard_bitstream|   0|   2097152|     100|0.47222347|  PASSED  
        diehard_opso|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_oqso|   0|   2097152|     100|0.00000000|  FAILED  
         diehard_dna|   0|   2097152|     100|0.00000000|  FAILED  
diehard_count_1s_str|   0|    256000|     100|0.79001155|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.13241058|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.51744758|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.99375196|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.50318284|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.97776547|  PASSED  
        diehard_sums|   0|       100|     100|0.00454951|   WEAK   
        diehard_runs|   0|    100000|     100|0.35394772|  PASSED  
        diehard_runs|   0|    100000|     100|0.28861548|  PASSED  
       diehard_craps|   0|    200000|     100|0.83057505|  PASSED  
       diehard_craps|   0|    200000|     100|0.62508303|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.00000000|  FAILED  
            sts_runs|   2|    100000|     100|0.00000679|   WEAK   
          sts_serial|   1|    100000|     100|0.00000648|   WEAK   
          sts_serial|   2|    100000|     100|0.62448987|  PASSED  
          sts_serial|   3|    100000|     100|0.71496573|  PASSED  
          sts_serial|   3|    100000|     100|0.04479731|  PASSED  
          sts_serial|   4|    100000|     100|0.96319759|  PASSED  
          sts_serial|   4|    100000|     100|0.94260510|  PASSED  
          sts_serial|   5|    100000|     100|0.98718984|  PASSED  
          sts_serial|   5|    100000|     100|0.71898316|  PASSED  
          sts_serial|   6|    100000|     100|0.35449695|  PASSED  
          sts_serial|   6|    100000|     100|0.14253748|  PASSED  
          sts_serial|   7|    100000|     100|0.42625773|  PASSED  
          sts_serial|   7|    100000|     100|0.87447319|  PASSED  
          sts_serial|   8|    100000|     100|0.85817560|  PASSED  
          sts_serial|   8|    100000|     100|0.79970176|  PASSED  
          sts_serial|   9|    100000|     100|0.99595968|   WEAK   
          sts_serial|   9|    100000|     100|0.25813086|  PASSED  
          sts_serial|  10|    100000|     100|0.36678195|  PASSED  
          sts_serial|  10|    100000|     100|0.03647802|  PASSED  
          sts_serial|  11|    100000|     100|0.24881607|  PASSED  
          sts_serial|  11|    100000|     100|0.95232253|  PASSED  
          sts_serial|  12|    100000|     100|0.80291940|  PASSED  
          sts_serial|  12|    100000|     100|0.65315296|  PASSED  
          sts_serial|  13|    100000|     100|0.24416179|  PASSED  
          sts_serial|  13|    100000|     100|0.03113917|  PASSED  
          sts_serial|  14|    100000|     100|0.87642668|  PASSED  
          sts_serial|  14|    100000|     100|0.86223070|  PASSED  
          sts_serial|  15|    100000|     100|0.30181685|  PASSED  
          sts_serial|  15|    100000|     100|0.85670179|  PASSED  
          sts_serial|  16|    100000|     100|0.74313588|  PASSED  
          sts_serial|  16|    100000|     100|0.78350368|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.23873386|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.06889466|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.27881023|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.00517795|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.02112478|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.21235921|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.88966090|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.49398901|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.13821980|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.73311401|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.79072741|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.22534008|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.62795974|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.77350850|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.18957732|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.21529055|  PASSED  
    rgb_permutations|   2|    100000|     100|0.10166136|  PASSED  
    rgb_permutations|   3|    100000|     100|0.27893609|  PASSED  
    rgb_permutations|   4|    100000|     100|0.41185966|  PASSED  
    rgb_permutations|   5|    100000|     100|0.11467130|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.98802600|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.13621022|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.45741737|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.56824484|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.14720740|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.78584230|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.11208725|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.85560764|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.78288146|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.86905385|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.93197069|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.82638283|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.12574095|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.54563177|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.04027984|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.96330246|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.77247958|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.12134825|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.06657510|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.85118144|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.74680236|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.94071677|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.79471398|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.92011367|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.16331898|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.87787477|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.99638044|   WEAK   
      rgb_lagged_sum|  27|   1000000|     100|0.16534179|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.64149723|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.82462455|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.95026206|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.92636914|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.89724503|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.70611804|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.00000000|  FAILED  
             dab_dct| 256|     50000|       1|0.00578749|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.17026174|  PASSED  
        dab_filltree|  32|  15000000|       1|0.11584605|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.73708235|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.00000000|  FAILED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|1.00000000|  FAILED  

real	49m52.701s
user	46m18.540s
sys	3m31.412s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc763277b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc763277b
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +23.3  p =  8.1e-11    FAIL           
  BCFN(2+1,13-3,T)                  R= +40.5  p =  5.6e-19    FAIL !         
  BCFN(2+2,13-3,T)                  R= +25.8  p =  5.3e-12    FAIL           
  BCFN(2+3,13-3,T)                  R= +26.6  p =  2.1e-12    FAIL           
  BCFN(2+4,13-4,T)                  R= +34.9  p =  3.4e-15    FAIL !         
  BCFN(2+5,13-5,T)                  R= +15.3  p =  3.7e-6   suspicious       
  BCFN(2+6,13-5,T)                  R= +16.5  p =  1.1e-6   suspicious       
  BCFN(2+7,13-6,T)                  R= +25.3  p =  4.3e-9   very suspicious  
  BCFN(2+8,13-6,T)                  R= +21.8  p =  6.8e-8   very suspicious  
  BCFN(2+9,13-7,T)                  R= +35.8  p =  2.0e-11   VERY SUSPICIOUS 
  BCFN(2+10,13-8,T)                 R= +28.0  p =  4.6e-8   very suspicious  
  BCFN(2+11,13-8,T)                 R= +29.0  p =  2.5e-8   very suspicious  
  BCFN(2+12,13-9,T)                 R= +21.5  p =  5.8e-6   unusual          
  BCFN(2+13,13-9,T)                 R= +35.7  p =  3.8e-9   very suspicious  
  DC6-9x1Bytes-1                    R=  +7.8  p =  2.1e-4   mildly suspicious
  Gap-16:A                          R= +12.2  p =  7.1e-10   VERY SUSPICIOUS 
  Gap-16:B                          R=  +4.3  p =  1.8e-3   unusual          
  FPF-14+6/16:(0,14-0)              R= +45.7  p =  6.7e-42    FAIL !!!       
  FPF-14+6/16:(1,14-0)              R= +25.0  p =  9.7e-23    FAIL !!        
  FPF-14+6/16:(2,14-0)              R= +13.0  p =  1.2e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(3,14-1)              R=  +6.7  p =  1.1e-5   unusual          
  FPF-14+6/16:(4,14-2)              R=  +7.0  p =  6.5e-6   unusual          
  FPF-14+6/16:all                   R= +51.9  p =  3.1e-48    FAIL !!!!      
  FPF-14+6/16:all2                  R=+642.2  p =  2.1e-241   FAIL !!!!!!    
  FPF-14+6/16:cross                 R=+279.3  p =  2.4e-235   FAIL !!!!!!    
  [Low8/32]BCFN(2+0,13-4,T)         R=+872.6  p =  3.4e-381   FAIL !!!!!!!   
  [Low8/32]BCFN(2+1,13-4,T)         R= +1048  p =  6.2e-458   FAIL !!!!!!!   
  [Low8/32]BCFN(2+2,13-5,T)         R= +1025  p =  1.7e-401   FAIL !!!!!!!   
  [Low8/32]BCFN(2+3,13-5,T)         R=+623.2  p =  3.8e-244   FAIL !!!!!!    
  [Low8/32]BCFN(2+4,13-5,T)         R=+694.3  p =  5.8e-272   FAIL !!!!!!    
  [Low8/32]BCFN(2+5,13-6,T)         R=+695.2  p =  1.6e-238   FAIL !!!!!!    
  [Low8/32]BCFN(2+6,13-6,T)         R=+380.0  p =  1.4e-130   FAIL !!!!!     
  [Low8/32]BCFN(2+7,13-7,T)         R=+394.9  p =  2.0e-119   FAIL !!!!!     
  [Low8/32]BCFN(2+8,13-8,T)         R=+292.7  p =  3.0e-75    FAIL !!!!      
  [Low8/32]BCFN(2+9,13-8,T)         R=+332.8  p =  2.1e-85    FAIL !!!!      
  [Low8/32]BCFN(2+10,13-9,T)        R=+192.2  p =  2.6e-44    FAIL !!!       
  [Low8/32]BCFN(2+11,13-9,T)        R=+204.0  p =  5.8e-47    FAIL !!!       
  [Low8/32]DC6-9x1Bytes-1           R= +6591  p =  1e-4437    FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+10649  p =  5e-8734    FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R= +6419  p =  2e-5279    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +4902  p =  1e-4514    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R= +3136  p =  1e-2778    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R= +2410  p =  1e-2107    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= +1674  p =  1e-1463    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R= +1191  p =  1e-1043    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+808.9  p =  6.7e-661   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+487.8  p =  2.9e-404   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+572.7  p =  1.2e-474   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+466.5  p =  4.4e-357   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+242.1  p =  1.6e-192   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(10,14-8)    R=+163.5  p =  1.0e-117   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(11,14-8)    R=+198.2  p =  1.2e-142   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+188.9  p =  3.3e-119   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+163.9  p =  9.5e-88    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(14,14-11)   R= +56.4  p =  2.0e-25    FAIL !!        
  [Low8/32]FPF-14+6/16:(15,14-11)   R= +52.3  p =  1.2e-23    FAIL !!        
  [Low8/32]FPF-14+6/16:all          R= +6696  p =  1e-6283    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+10905073 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+706.7  p =  2.5e-556   FAIL !!!!!!!   
  [Low8/32]BRank(12):768(1)         R=+260.4  p~=  2.0e-79    FAIL !!!!      
  [Low8/32]BRank(12):1K(1)          R= +1401  p~=  7.1e-423   FAIL !!!!!!!   
  [Low1/32]BCFN(2+0,13-6,T)         R=+30746  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+23185  p =  1e-7940    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+28942  p =  4e-9912    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+17357  p =  1e-5944    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+10667  p =  3e-3209    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +4107  p =  3e-1043    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R= +1809  p =  3.7e-460   FAIL !!!!!!!   
  [Low1/32]BCFN(2+7,13-9,T)         R= +1322  p =  3.8e-298   FAIL !!!!!!    
  [Low1/32]BCFN(2+8,13-9,T)         R=+574.8  p =  2.8e-130   FAIL !!!!!     
  [Low1/32]DC6-9x1Bytes-1           R=+108677 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+221649 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+880541 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+76554  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+55818  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+36942  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+30052  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+18013  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+12705  p =  4e-9723    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +4979  p =  3e-3962    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +6968  p =  4e-5014    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(10,14-10)   R= +5358  p =  6e-2851    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+108158 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+3467496445 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +6350  p =  8e-5458    FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R=+550.9  p~=  7.1e-167   FAIL !!!!!     
  [Low1/32]BRank(12):256(2)         R= +4448  p~=  6e-1340    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +7407  p~=  6e-2231    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +8656  p~=  9e-2607    FAIL !!!!!!!!  
  ...and 24 test result(s) without anomalies


real	0m2.927s
user	0m2.752s
sys	0m0.168s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1a3739f9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1a3739f9
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +75.7  p =  1.3e-35    FAIL !!!       
  BCFN(2+1,13-3,T)                  R= +52.7  p =  9.8e-25    FAIL !!        
  BCFN(2+2,13-3,T)                  R= +45.5  p =  2.6e-21    FAIL !!        
  BCFN(2+3,13-3,T)                  R= +44.6  p =  6.4e-21    FAIL !!        
  BCFN(2+4,13-4,T)                  R= +73.8  p =  3.4e-32    FAIL !!!       
  BCFN(2+5,13-5,T)                  R= +85.5  p =  1.2e-33    FAIL !!!       
  BCFN(2+6,13-5,T)                  R= +80.7  p =  9.3e-32    FAIL !!!       
  BCFN(2+7,13-6,T)                  R= +93.0  p =  2.7e-32    FAIL !!!       
  BCFN(2+8,13-6,T)                  R= +95.0  p =  5.8e-33    FAIL !!!       
  BCFN(2+9,13-7,T)                  R=+139.7  p =  1.1e-42    FAIL !!!       
  BCFN(2+10,13-8,T)                 R=+130.6  p =  4.3e-34    FAIL !!!       
  BCFN(2+11,13-8,T)                 R=+102.2  p =  7.0e-27    FAIL !!        
  BCFN(2+12,13-9,T)                 R=+150.9  p =  4.9e-35    FAIL !!!       
  BCFN(2+13,13-9,T)                 R=+167.5  p =  9.4e-39    FAIL !!!       
  DC6-9x1Bytes-1                    R=  +8.7  p =  6.7e-5   suspicious       
  Gap-16:A                          R= +12.6  p =  3.3e-10   VERY SUSPICIOUS 
  Gap-16:B                          R=  +7.4  p =  5.5e-6   suspicious       
  FPF-14+6/16:(0,14-0)              R= +40.0  p =  1.2e-36    FAIL !!!       
  FPF-14+6/16:(1,14-0)              R= +30.0  p =  2.1e-27    FAIL !!        
  FPF-14+6/16:(4,14-2)              R= +11.1  p =  1.8e-9   very suspicious  
  FPF-14+6/16:all                   R= +44.0  p =  9.8e-41    FAIL !!!       
  FPF-14+6/16:all2                  R=+570.6  p =  1.1e-214   FAIL !!!!!!    
  FPF-14+6/16:cross                 R=+174.9  p =  1.6e-147   FAIL !!!!!     
  [Low8/32]BCFN(2+0,13-4,T)         R=+945.7  p =  3.8e-413   FAIL !!!!!!!   
  [Low8/32]BCFN(2+1,13-4,T)         R=+950.0  p =  5.4e-415   FAIL !!!!!!!   
  [Low8/32]BCFN(2+2,13-5,T)         R=+856.2  p =  2.3e-335   FAIL !!!!!!!   
  [Low8/32]BCFN(2+3,13-5,T)         R= +1109  p =  1.8e-434   FAIL !!!!!!!   
  [Low8/32]BCFN(2+4,13-5,T)         R=+951.2  p =  1.5e-372   FAIL !!!!!!!   
  [Low8/32]BCFN(2+5,13-6,T)         R=+910.7  p =  2.6e-312   FAIL !!!!!!    
  [Low8/32]BCFN(2+6,13-6,T)         R=+991.9  p =  4.0e-340   FAIL !!!!!!!   
  [Low8/32]BCFN(2+7,13-7,T)         R=+702.3  p =  7.2e-212   FAIL !!!!!!    
  [Low8/32]BCFN(2+8,13-8,T)         R=+683.5  p =  2.1e-174   FAIL !!!!!!    
  [Low8/32]BCFN(2+9,13-8,T)         R=+535.5  p =  7.4e-137   FAIL !!!!!     
  [Low8/32]BCFN(2+10,13-9,T)        R=+668.1  p =  3.1e-151   FAIL !!!!!     
  [Low8/32]BCFN(2+11,13-9,T)        R=+725.0  p =  5.0e-164   FAIL !!!!!     
  [Low8/32]DC6-9x1Bytes-1           R= +6652  p =  4e-4479    FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R= +9808  p =  1e-8044    FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R= +4575  p =  7e-3763    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +4659  p =  4e-4291    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R= +3328  p =  1e-2949    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R= +2235  p =  2e-1954    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= +1735  p =  1e-1517    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R= +1143  p =  1e-1001    FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+868.0  p =  3.1e-709   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+620.2  p =  5.1e-514   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+666.7  p =  1.3e-552   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+538.6  p =  3.5e-412   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+445.9  p =  1.0e-354   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(10,14-8)    R=+218.7  p =  1.9e-157   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(11,14-8)    R=+212.4  p =  6.5e-153   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(12,14-9)    R= +93.3  p =  4.6e-59    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +49.2  p =  9.1e-27    FAIL !!        
  [Low8/32]FPF-14+6/16:(14,14-11)   R= +52.1  p =  1.5e-23    FAIL !!        
  [Low8/32]FPF-14+6/16:(15,14-11)   R= +42.6  p =  2.1e-19    FAIL !         
  [Low8/32]FPF-14+6/16:all          R= +6621  p =  2e-6213    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+10560241 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+474.3  p =  1.6e-373   FAIL !!!!!!!   
  [Low8/32]BRank(12):768(1)         R=+260.4  p~=  2.0e-79    FAIL !!!!      
  [Low8/32]BRank(12):1K(1)          R= +1401  p~=  7.1e-423   FAIL !!!!!!!   
  [Low1/32]BCFN(2+0,13-6,T)         R=+30364  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+27702  p =  1e-9487    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+24002  p =  3e-8220    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+15666  p =  1e-5365    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +6970  p =  3e-2097    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +4224  p =  4e-1073    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R= +4069  p =  1e-1033    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R= +1527  p =  3.3e-344   FAIL !!!!!!!   
  [Low1/32]BCFN(2+8,13-9,T)         R= +2542  p =  2.5e-572   FAIL !!!!!!!   
  [Low1/32]DC6-9x1Bytes-1           R=+104050 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+221253 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+879184 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+78742  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+52606  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+37345  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+26282  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+20651  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+11242  p =  6e-8603    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +8123  p =  4e-6465    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +5768  p =  1e-4150    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(10,14-10)   R= +3571  p =  1e-1900    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(11,14-11)   R= +3922  p =  1e-1710    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+107922 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+3264272280 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +5380  p =  2e-4624    FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R=+550.9  p~=  7.1e-167   FAIL !!!!!     
  [Low1/32]BRank(12):256(2)         R= +4448  p~=  6e-1340    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +7407  p~=  6e-2231    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +8656  p~=  9e-2607    FAIL !!!!!!!!  
  ...and 26 test result(s) without anomalies


real	0m3.277s
user	0m3.196s
sys	0m0.072s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x883dffc4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x883dffc4
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +12.2  p =  1.3e-5   suspicious       
  BCFN(2+1,13-3,T)                  R=  +8.7  p =  6.2e-4   unusual          
  BCFN(2+4,13-4,T)                  R= +16.6  p =  3.5e-7   very suspicious  
  BCFN(2+5,13-5,T)                  R= +17.5  p =  5.0e-7   suspicious       
  BCFN(2+6,13-5,T)                  R= +11.9  p =  7.6e-5   unusual          
  BCFN(2+8,13-6,T)                  R= +20.2  p =  2.3e-7   suspicious       
  BCFN(2+10,13-8,T)                 R= +19.4  p =  7.3e-6   unusual          
  DC6-9x1Bytes-1                    R=  +6.2  p =  2.2e-3   unusual          
  Gap-16:A                          R= +16.3  p =  2.1e-13    FAIL           
  Gap-16:B                          R=  +4.1  p =  2.7e-3   unusual          
  FPF-14+6/16:(0,14-0)              R= +51.5  p =  2.8e-47    FAIL !!!       
  FPF-14+6/16:(1,14-0)              R= +16.0  p =  1.9e-14    FAIL           
  FPF-14+6/16:(2,14-0)              R= +27.1  p =  1.2e-24    FAIL !!        
  FPF-14+6/16:all                   R= +52.6  p =  7.1e-49    FAIL !!!!      
  FPF-14+6/16:all2                  R=+810.0  p =  4.9e-304   FAIL !!!!!!    
  FPF-14+6/16:cross                 R=+143.0  p =  1.0e-120   FAIL !!!!!     
  [Low8/32]BCFN(2+0,13-4,T)         R=+669.7  p =  1.4e-292   FAIL !!!!!!    
  [Low8/32]BCFN(2+1,13-4,T)         R=+734.2  p =  1.0e-320   FAIL !!!!!!    
  [Low8/32]BCFN(2+2,13-5,T)         R=+634.0  p =  2.3e-248   FAIL !!!!!!    
  [Low8/32]BCFN(2+3,13-5,T)         R=+717.8  p =  3.5e-281   FAIL !!!!!!    
  [Low8/32]BCFN(2+4,13-5,T)         R=+523.3  p =  4.9e-205   FAIL !!!!!!    
  [Low8/32]BCFN(2+5,13-6,T)         R=+440.5  p =  2.8e-151   FAIL !!!!!     
  [Low8/32]BCFN(2+6,13-6,T)         R=+334.8  p =  4.4e-115   FAIL !!!!!     
  [Low8/32]BCFN(2+7,13-7,T)         R=+337.7  p =  3.2e-102   FAIL !!!!!     
  [Low8/32]BCFN(2+8,13-8,T)         R=+558.0  p =  1.4e-142   FAIL !!!!!     
  [Low8/32]BCFN(2+9,13-8,T)         R=+218.5  p =  2.1e-56    FAIL !!!!      
  [Low8/32]BCFN(2+10,13-9,T)        R=+104.7  p =  1.1e-24    FAIL !!        
  [Low8/32]BCFN(2+11,13-9,T)        R=+173.4  p =  4.5e-40    FAIL !!!       
  [Low8/32]DC6-9x1Bytes-1           R= +6601  p =  9e-4445    FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+10610  p =  3e-8702    FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R= +6028  p =  9e-4958    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +4761  p =  3e-4385    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R= +3489  p =  1e-3091    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R= +2520  p =  2e-2203    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= +1638  p =  3e-1432    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R= +1303  p =  3e-1142    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R= +1013  p =  2.3e-827   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+639.5  p =  4.6e-530   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+702.2  p =  5.6e-582   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+474.8  p =  2.1e-363   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+352.6  p =  1.9e-280   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(10,14-8)    R=+162.6  p =  4.5e-117   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(11,14-8)    R=+313.9  p =  6.0e-226   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(12,14-9)    R= +74.9  p =  1.9e-47    FAIL !!!       
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+105.4  p =  1.1e-56    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(14,14-11)   R= +37.9  p =  2.4e-17    FAIL !         
  [Low8/32]FPF-14+6/16:(15,14-11)   R= +28.0  p =  4.6e-13   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:all          R= +6876  p =  1e-6452    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+11426367 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+217.3  p =  1.9e-171   FAIL !!!!!!    
  [Low8/32]BRank(12):768(1)         R=+260.4  p~=  2.0e-79    FAIL !!!!      
  [Low8/32]BRank(12):1K(1)          R= +1401  p~=  7.1e-423   FAIL !!!!!!!   
  [Low1/32]BCFN(2+0,13-6,T)         R=+22316  p =  5e-7643    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+30919  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+32340  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+22260  p =  6e-7624    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +9282  p =  1e-2792    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +7342  p =  2e-1864    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R= +2795  p =  2.8e-710   FAIL !!!!!!!   
  [Low1/32]BCFN(2+7,13-9,T)         R= +2753  p =  9.3e-620   FAIL !!!!!!!   
  [Low1/32]BCFN(2+8,13-9,T)         R= +1455  p =  4.1e-328   FAIL !!!!!!    
  [Low1/32]DC6-9x1Bytes-1           R=+108369 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+220857 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+876603 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+78783  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+55548  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+36178  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+21333  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+16650  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+13856  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R=+11285  p =  1e-8981    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +5768  p =  1e-4150    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +2609  p =  2e-1877    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +3102  p =  2e-1953    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(10,14-10)   R= +3571  p =  1e-1900    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(11,14-11)   R= +3921  p =  8e-1710    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+107504 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+2984021046 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +6281  p =  1e-5398    FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R=+550.9  p~=  7.1e-167   FAIL !!!!!     
  [Low1/32]BRank(12):256(2)         R= +4448  p~=  6e-1340    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +7407  p~=  6e-2231    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +8656  p~=  9e-2607    FAIL !!!!!!!!  
  ...and 33 test result(s) without anomalies


real	0m2.958s
user	0m2.852s
sys	0m0.096s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa84b4283
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa84b4283
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+101.7  p =  6.5e-48    FAIL !!!!      
  BCFN(2+1,13-3,T)                  R=+105.2  p =  1.4e-49    FAIL !!!!      
  BCFN(2+2,13-3,T)                  R=+101.1  p =  1.2e-47    FAIL !!!!      
  BCFN(2+3,13-3,T)                  R=+106.3  p =  3.9e-50    FAIL !!!!      
  BCFN(2+4,13-4,T)                  R=+112.2  p =  5.8e-49    FAIL !!!!      
  BCFN(2+5,13-5,T)                  R=+164.4  p =  1.4e-64    FAIL !!!!      
  BCFN(2+6,13-5,T)                  R=+180.5  p =  7.5e-71    FAIL !!!!      
  BCFN(2+7,13-6,T)                  R=+209.0  p =  5.3e-72    FAIL !!!!      
  BCFN(2+8,13-6,T)                  R=+180.6  p =  2.8e-62    FAIL !!!!      
  BCFN(2+9,13-7,T)                  R=+231.4  p =  3.0e-70    FAIL !!!!      
  BCFN(2+10,13-8,T)                 R=+286.9  p =  9.5e-74    FAIL !!!!      
  BCFN(2+11,13-8,T)                 R=+280.7  p =  3.4e-72    FAIL !!!!      
  BCFN(2+12,13-9,T)                 R=+294.4  p =  2.8e-67    FAIL !!!!      
  BCFN(2+13,13-9,T)                 R=+340.4  p =  1.2e-77    FAIL !!!!      
  DC6-9x1Bytes-1                    R= +10.2  p =  7.3e-6   very suspicious  
  Gap-16:A                          R= +15.4  p =  1.2e-12    FAIL           
  FPF-14+6/16:(0,14-0)              R= +43.2  p =  1.4e-39    FAIL !!!       
  FPF-14+6/16:(1,14-0)              R= +16.8  p =  3.8e-15    FAIL           
  FPF-14+6/16:(2,14-0)              R= +12.0  p =  1.0e-10   VERY SUSPICIOUS 
  FPF-14+6/16:(3,14-1)              R= +12.9  p =  3.8e-11   VERY SUSPICIOUS 
  FPF-14+6/16:all                   R= +65.7  p =  3.5e-61    FAIL !!!!      
  FPF-14+6/16:all2                  R=+533.2  p =  1.1e-200   FAIL !!!!!!    
  FPF-14+6/16:cross                 R=+980.7  p =  2.1e-825   FAIL !!!!!!!   
  [Low8/32]BCFN(2+0,13-4,T)         R= +1077  p =  2.7e-470   FAIL !!!!!!!   
  [Low8/32]BCFN(2+1,13-4,T)         R= +1264  p =  2.8e-552   FAIL !!!!!!!   
  [Low8/32]BCFN(2+2,13-5,T)         R= +1435  p =  7.7e-562   FAIL !!!!!!!   
  [Low8/32]BCFN(2+3,13-5,T)         R= +1267  p =  4.0e-496   FAIL !!!!!!!   
  [Low8/32]BCFN(2+4,13-5,T)         R= +1313  p =  2.4e-514   FAIL !!!!!!!   
  [Low8/32]BCFN(2+5,13-6,T)         R= +1068  p =  2.7e-366   FAIL !!!!!!!   
  [Low8/32]BCFN(2+6,13-6,T)         R= +1021  p =  5.2e-350   FAIL !!!!!!!   
  [Low8/32]BCFN(2+7,13-7,T)         R= +1189  p =  2.2e-358   FAIL !!!!!!!   
  [Low8/32]BCFN(2+8,13-8,T)         R= +1291  p =  1.2e-328   FAIL !!!!!!    
  [Low8/32]BCFN(2+9,13-8,T)         R= +1083  p =  9.6e-276   FAIL !!!!!!    
  [Low8/32]BCFN(2+10,13-9,T)        R= +1416  p =  3.4e-319   FAIL !!!!!!    
  [Low8/32]BCFN(2+11,13-9,T)        R= +1399  p =  1.6e-315   FAIL !!!!!!    
  [Low8/32]DC6-9x1Bytes-1           R= +6683  p =  8e-4500    FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+10673  p =  2e-8754    FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R= +6514  p =  1e-5357    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +5066  p =  5e-4666    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R= +3523  p =  7e-3122    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R= +2219  p =  2e-1940    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R= +1781  p =  3e-1557    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R= +1666  p =  1e-1460    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+852.7  p =  1.0e-696   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+609.8  p =  2.1e-505   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+698.9  p =  2.8e-579   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+452.0  p =  6.3e-346   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+308.6  p =  1.8e-245   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(10,14-8)    R=+197.3  p =  5.5e-142   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(11,14-8)    R=+187.0  p =  1.4e-134   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+112.6  p =  3.4e-71    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +72.0  p =  6.7e-39    FAIL !!!       
  [Low8/32]FPF-14+6/16:(14,14-11)   R= +42.6  p =  2.2e-19    FAIL !         
  [Low8/32]FPF-14+6/16:(15,14-11)   R= +53.1  p =  5.4e-24    FAIL !!        
  [Low8/32]FPF-14+6/16:all          R= +7104  p =  1e-6666    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+12184595 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+695.2  p =  3.1e-547   FAIL !!!!!!!   
  [Low8/32]BRank(12):768(1)         R=+260.4  p~=  2.0e-79    FAIL !!!!      
  [Low8/32]BRank(12):1K(1)          R= +1401  p~=  7.1e-423   FAIL !!!!!!!   
  [Low1/32]BCFN(2+0,13-6,T)         R=+50741  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+44393  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+32412  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+17760  p =  9e-6083    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +8306  p =  4e-2499    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +6025  p =  3e-1530    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+11004  p =  1e-2793    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+10326  p =  2e-2321    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+109064 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+222442 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+885282 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+75570  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+54751  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+39470  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+23482  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+18257  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+13855  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +9816  p =  7e-7812    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +2609  p =  2e-1877    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +4353  p =  1e-3132    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +3103  p =  4e-1954    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(11,14-11)   R= +3922  p =  1e-1710    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+106501 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+3042878864 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +4480  p =  5e-3851    FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R=+550.9  p~=  7.1e-167   FAIL !!!!!     
  [Low1/32]BRank(12):256(2)         R= +4448  p~=  6e-1340    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +7407  p~=  6e-2231    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +8656  p~=  9e-2607    FAIL !!!!!!!!  
  ...and 26 test result(s) without anomalies


real	0m2.836s
user	0m2.776s
sys	0m0.056s
*/
