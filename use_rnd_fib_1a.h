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
/// @created on 2019-12-08 02:58:07 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 38931ffa-bf5e-4829-bb95-e5060ccd5ca1                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib1a;
/* TEST00
time ./MRndCPP 
1387274767
4103034838
1238098056
2454809200
1118209163
2865701015
18446685776776165106

real	0m51.685s
user	0m51.512s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.19e+07  | 581066484|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.99475241|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.83159646|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.50282173|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.18502282|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.84988101|  PASSED  
        diehard_opso|   0|   2097152|     100|0.00000096|  FAILED  
        diehard_oqso|   0|   2097152|     100|0.00000000|  FAILED  
         diehard_dna|   0|   2097152|     100|0.00000000|  FAILED  
diehard_count_1s_str|   0|    256000|     100|0.02016530|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.62122472|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.14615348|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.88406821|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.58328920|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.99580398|   WEAK   
        diehard_sums|   0|       100|     100|0.00293538|   WEAK   
        diehard_runs|   0|    100000|     100|0.01663553|  PASSED  
        diehard_runs|   0|    100000|     100|0.19593442|  PASSED  
       diehard_craps|   0|    200000|     100|0.99273555|  PASSED  
       diehard_craps|   0|    200000|     100|0.31482319|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.00318630|   WEAK   
            sts_runs|   2|    100000|     100|0.11365343|  PASSED  
          sts_serial|   1|    100000|     100|0.00000970|   WEAK   
          sts_serial|   2|    100000|     100|0.48299883|  PASSED  
          sts_serial|   3|    100000|     100|0.48770745|  PASSED  
          sts_serial|   3|    100000|     100|0.15374764|  PASSED  
          sts_serial|   4|    100000|     100|0.96964959|  PASSED  
          sts_serial|   4|    100000|     100|0.72032877|  PASSED  
          sts_serial|   5|    100000|     100|0.53020098|  PASSED  
          sts_serial|   5|    100000|     100|0.75398361|  PASSED  
          sts_serial|   6|    100000|     100|0.28760690|  PASSED  
          sts_serial|   6|    100000|     100|0.92799915|  PASSED  
          sts_serial|   7|    100000|     100|0.68999771|  PASSED  
          sts_serial|   7|    100000|     100|0.93262460|  PASSED  
          sts_serial|   8|    100000|     100|0.74987027|  PASSED  
          sts_serial|   8|    100000|     100|0.99370409|  PASSED  
          sts_serial|   9|    100000|     100|0.06378103|  PASSED  
          sts_serial|   9|    100000|     100|0.17604954|  PASSED  
          sts_serial|  10|    100000|     100|0.31438654|  PASSED  
          sts_serial|  10|    100000|     100|0.09109223|  PASSED  
          sts_serial|  11|    100000|     100|0.06851844|  PASSED  
          sts_serial|  11|    100000|     100|0.68145576|  PASSED  
          sts_serial|  12|    100000|     100|0.63192732|  PASSED  
          sts_serial|  12|    100000|     100|0.91952147|  PASSED  
          sts_serial|  13|    100000|     100|0.96275556|  PASSED  
          sts_serial|  13|    100000|     100|0.36090855|  PASSED  
          sts_serial|  14|    100000|     100|0.77502266|  PASSED  
          sts_serial|  14|    100000|     100|0.41131648|  PASSED  
          sts_serial|  15|    100000|     100|0.83861509|  PASSED  
          sts_serial|  15|    100000|     100|0.62603035|  PASSED  
          sts_serial|  16|    100000|     100|0.79697464|  PASSED  
          sts_serial|  16|    100000|     100|0.95802526|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.99303300|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.66396012|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.43844815|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.21552407|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.13919357|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.78152106|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.42139380|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.96257899|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.10916568|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.16868591|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.54577321|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.72452054|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.55539798|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.58665600|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.44747923|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.67275786|  PASSED  
    rgb_permutations|   2|    100000|     100|0.48701053|  PASSED  
    rgb_permutations|   3|    100000|     100|0.60614481|  PASSED  
    rgb_permutations|   4|    100000|     100|0.66817323|  PASSED  
    rgb_permutations|   5|    100000|     100|0.85431680|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.60609168|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.44799359|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.29790729|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.00115552|   WEAK   
      rgb_lagged_sum|   4|   1000000|     100|0.31218284|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.99091359|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.55995081|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.34047297|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.66300696|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.71647443|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.31678919|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.72947305|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.98760480|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.99070073|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.76772474|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.71991813|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.68060504|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.99465155|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.61387449|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.06488114|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.95016161|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.46071331|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.04229463|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.04956823|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.74926273|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.78834482|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.82575753|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.75400700|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.89880964|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.17515078|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.70517732|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.72879055|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.98989271|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.70477392|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.00000000|  FAILED  
             dab_dct| 256|     50000|       1|0.18876216|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.12789583|  PASSED  
        dab_filltree|  32|  15000000|       1|0.82511525|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.25626050|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.01017139|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|1.00000000|  FAILED  

real	49m56.301s
user	46m16.796s
sys	3m35.496s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf3fcb089
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf3fcb089
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +32.2  p =  5.0e-15    FAIL !         
  BCFN(2+1,13-3,T)                  R= +34.1  p =  6.0e-16    FAIL !         
  BCFN(2+2,13-3,T)                  R= +28.0  p =  4.9e-13    FAIL           
  BCFN(2+3,13-3,T)                  R= +32.7  p =  2.8e-15    FAIL !         
  BCFN(2+4,13-4,T)                  R= +44.4  p =  2.4e-19    FAIL !         
  BCFN(2+5,13-5,T)                  R= +59.9  p =  1.2e-23    FAIL !!        
  BCFN(2+6,13-5,T)                  R= +68.1  p =  7.8e-27    FAIL !!        
  BCFN(2+7,13-6,T)                  R= +82.6  p =  9.8e-29    FAIL !!!       
  BCFN(2+8,13-6,T)                  R= +79.7  p =  9.9e-28    FAIL !!        
  BCFN(2+9,13-7,T)                  R= +89.7  p =  1.3e-27    FAIL !!        
  BCFN(2+10,13-8,T)                 R=+119.6  p =  2.7e-31    FAIL !!!       
  BCFN(2+11,13-8,T)                 R=+124.9  p =  1.2e-32    FAIL !!!       
  BCFN(2+12,13-9,T)                 R=+159.3  p =  6.6e-37    FAIL !!!       
  BCFN(2+13,13-9,T)                 R=+139.3  p =  2.0e-32    FAIL !!!       
  DC6-9x1Bytes-1                    R=  +5.5  p =  5.9e-3   unusual          
  FPF-14+6/16:(0,14-0)              R= +21.0  p =  4.8e-19    FAIL !         
  FPF-14+6/16:(2,14-0)              R=  +8.1  p =  4.5e-7   mildly suspicious
  FPF-14+6/16:all                   R= +18.0  p =  2.0e-16    FAIL !         
  FPF-14+6/16:all2                  R=+104.1  p =  1.6e-40    FAIL !!!       
  FPF-14+6/16:cross                 R= +44.4  p =  1.1e-37    FAIL !!!       
  [Low8/32]BCFN(2+0,13-4,T)         R=+359.1  p =  8.1e-157   FAIL !!!!!     
  [Low8/32]BCFN(2+1,13-4,T)         R=+398.7  p =  4.0e-174   FAIL !!!!!!    
  [Low8/32]BCFN(2+2,13-5,T)         R=+475.9  p =  1.7e-186   FAIL !!!!!!    
  [Low8/32]BCFN(2+3,13-5,T)         R=+444.8  p =  2.7e-174   FAIL !!!!!!    
  [Low8/32]BCFN(2+4,13-5,T)         R=+425.8  p =  7.4e-167   FAIL !!!!!     
  [Low8/32]BCFN(2+5,13-6,T)         R=+403.4  p =  1.3e-138   FAIL !!!!!     
  [Low8/32]BCFN(2+6,13-6,T)         R=+599.2  p =  1.1e-205   FAIL !!!!!!    
  [Low8/32]BCFN(2+7,13-7,T)         R=+483.1  p =  6.0e-146   FAIL !!!!!     
  [Low8/32]BCFN(2+8,13-8,T)         R=+566.6  p =  9.5e-145   FAIL !!!!!     
  [Low8/32]BCFN(2+9,13-8,T)         R=+515.0  p =  1.1e-131   FAIL !!!!!     
  [Low8/32]BCFN(2+10,13-9,T)        R=+683.1  p =  1.3e-154   FAIL !!!!!     
  [Low8/32]BCFN(2+11,13-9,T)        R=+527.6  p =  1.1e-119   FAIL !!!!!     
  [Low8/32]DC6-9x1Bytes-1           R= +1619  p =  9e-1090    FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R= +1933  p =  1e-1585    FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+339.7  p =  2.1e-279   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +1113  p =  9e-1025    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+784.0  p =  1.4e-694   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+516.1  p =  3.8e-451   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+409.6  p =  5.5e-358   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+292.2  p =  6.5e-256   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+194.5  p =  7.2e-159   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+139.3  p =  2.2e-115   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+134.5  p =  2.3e-111   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(8,14-6)     R= +95.3  p =  6.2e-73    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +84.0  p =  1.0e-66    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +40.3  p =  5.0e-29    FAIL !!        
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +49.2  p =  1.9e-35    FAIL !!!       
  [Low8/32]FPF-14+6/16:(12,14-9)    R= +17.9  p =  1.5e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +32.1  p =  1.1e-17    FAIL !         
  [Low8/32]FPF-14+6/16:(14,14-11)   R= +30.2  p =  5.5e-14    FAIL           
  [Low8/32]FPF-14+6/16:all          R= +1566  p =  7e-1469    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+588665 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+193.0  p =  2.7e-152   FAIL !!!!!     
  [Low1/32]BCFN(2+0,13-6,T)         R=+10134  p =  5e-3471    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+10295  p =  4e-3526    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R= +5980  p =  2e-2048    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R= +7736  p =  7e-2650    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +2378  p =  6.0e-716   FAIL !!!!!!!   
  [Low1/32]BCFN(2+5,13-8,T)         R= +1778  p =  4.7e-452   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R= +1795  p =  2.1e-456   FAIL !!!!!!!   
  [Low1/32]BCFN(2+7,13-9,T)         R= +1133  p =  1.2e-255   FAIL !!!!!!    
  [Low1/32]BCFN(2+8,13-9,T)         R=+854.4  p =  4.1e-193   FAIL !!!!!!    
  [Low1/32]DC6-9x1Bytes-1           R=+64356  p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+215037 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+848261 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+42490  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+29591  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+20869  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+15100  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+11082  p =  1e-9187    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +7539  p =  1e-5769    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +5447  p =  3e-4335    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +4389  p =  1e-3158    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R=+768.6  p =  4.0e-553   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +1883  p =  6e-1186    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(10,14-10)   R= +1056  p =  3.5e-562   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(11,14-11)   R= +1550  p =  1.3e-676   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:all          R=+59540  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+906899723 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +2297  p =  2e-1974    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2256  p~=  4.3e-680   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +5621  p~=  5e-1693    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +7106  p~=  3e-2140    FAIL !!!!!!!!  
  ...and 33 test result(s) without anomalies


real	0m2.933s
user	0m2.748s
sys	0m0.180s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe026b921
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe026b921
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=  +9.4  p =  2.8e-4   mildly suspicious
  BCFN(2+1,13-3,T)                  R= +19.2  p =  7.3e-9    VERY SUSPICIOUS 
  BCFN(2+2,13-3,T)                  R= +13.0  p =  5.8e-6   suspicious       
  BCFN(2+8,13-6,T)                  R= +12.6  p =  9.1e-5   unusual          
  FPF-14+6/16:all                   R=  +6.8  p =  7.9e-6   suspicious       
  FPF-14+6/16:all2                  R=  +7.0  p =  3.0e-4   unusual          
  FPF-14+6/16:cross                 R=  +7.6  p =  1.0e-6   very suspicious  
  [Low8/32]BCFN(2+0,13-4,T)         R=+277.5  p =  3.5e-121   FAIL !!!!!     
  [Low8/32]BCFN(2+1,13-4,T)         R=+193.3  p =  2.0e-84    FAIL !!!!      
  [Low8/32]BCFN(2+2,13-5,T)         R=+181.5  p =  3.2e-71    FAIL !!!!      
  [Low8/32]BCFN(2+3,13-5,T)         R=+148.6  p =  2.3e-58    FAIL !!!!      
  [Low8/32]BCFN(2+4,13-5,T)         R=+266.8  p =  1.2e-104   FAIL !!!!!     
  [Low8/32]BCFN(2+5,13-6,T)         R=+141.2  p =  8.6e-49    FAIL !!!!      
  [Low8/32]BCFN(2+6,13-6,T)         R=+225.9  p =  8.5e-78    FAIL !!!!      
  [Low8/32]BCFN(2+7,13-7,T)         R=+245.6  p =  1.6e-74    FAIL !!!!      
  [Low8/32]BCFN(2+8,13-8,T)         R= +95.2  p =  4.0e-25    FAIL !!        
  [Low8/32]BCFN(2+9,13-8,T)         R= +64.9  p =  2.1e-17    FAIL !         
  [Low8/32]BCFN(2+10,13-9,T)        R=+105.2  p =  9.5e-25    FAIL !!        
  [Low8/32]BCFN(2+11,13-9,T)        R=+101.0  p =  8.2e-24    FAIL !!        
  [Low8/32]DC6-9x1Bytes-1           R= +1666  p =  6e-1121    FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R= +2375  p =  1e-1947    FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+968.1  p =  3.1e-796   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +1518  p =  1e-1397    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+939.6  p =  1.7e-832   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+726.6  p =  2.8e-635   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+543.7  p =  2.9e-475   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+397.8  p =  1.7e-348   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+271.9  p =  4.4e-222   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+207.7  p =  4.4e-172   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+167.1  p =  2.2e-138   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+144.8  p =  7.3e-111   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +70.9  p =  2.8e-56    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +49.6  p =  9.1e-36    FAIL !!!       
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +35.5  p =  1.4e-25    FAIL !!        
  [Low8/32]FPF-14+6/16:(12,14-9)    R= +50.4  p =  4.9e-32    FAIL !!!       
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +51.7  p =  4.5e-28    FAIL !!        
  [Low8/32]FPF-14+6/16:all          R= +2070  p =  8e-1942    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+1038866 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +77.1  p =  3.7e-61    FAIL !!!!      
  [Low1/32]BCFN(2+0,13-6,T)         R= +8846  p =  8e-3030    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+10145  p =  6e-3475    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R= +6956  p =  1e-2382    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R= +8541  p =  2e-2925    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +2711  p =  6.2e-816   FAIL !!!!!!!   
  [Low1/32]BCFN(2+5,13-8,T)         R= +1992  p =  2.0e-506   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R=+799.6  p =  7.3e-204   FAIL !!!!!!    
  [Low1/32]BCFN(2+7,13-9,T)         R= +1273  p =  3.7e-287   FAIL !!!!!!    
  [Low1/32]BCFN(2+8,13-9,T)         R= +1639  p =  2.5e-369   FAIL !!!!!!!   
  [Low1/32]DC6-9x1Bytes-1           R=+64191  p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+214933 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+847391 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+42239  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+29477  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+21466  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+15993  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+11721  p =  3e-9717    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +8697  p =  1e-6655    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +5798  p =  3e-4614    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +4051  p =  2e-2915    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +2371  p =  4e-1706    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +1468  p =  6.9e-925   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(11,14-11)   R= +1161  p =  1.1e-506   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:all          R=+60193  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+960828261 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +2217  p =  6e-1906    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2256  p~=  4.3e-680   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +5621  p~=  5e-1693    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +7106  p~=  3e-2140    FAIL !!!!!!!!  
  ...and 47 test result(s) without anomalies


real	0m2.840s
user	0m2.764s
sys	0m0.060s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf47a4beb
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf47a4beb
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +51.3  p =  4.4e-24    FAIL !!        
  BCFN(2+1,13-3,T)                  R= +45.4  p =  2.7e-21    FAIL !!        
  BCFN(2+2,13-3,T)                  R= +45.3  p =  3.0e-21    FAIL !!        
  BCFN(2+3,13-3,T)                  R= +44.7  p =  6.0e-21    FAIL !!        
  BCFN(2+4,13-4,T)                  R= +53.0  p =  4.4e-23    FAIL !!        
  BCFN(2+5,13-5,T)                  R= +73.3  p =  7.1e-29    FAIL !!!       
  BCFN(2+6,13-5,T)                  R= +74.0  p =  3.7e-29    FAIL !!!       
  BCFN(2+7,13-6,T)                  R=+106.7  p =  5.8e-37    FAIL !!!       
  BCFN(2+8,13-6,T)                  R= +96.6  p =  1.6e-33    FAIL !!!       
  BCFN(2+9,13-7,T)                  R=+124.6  p =  4.0e-38    FAIL !!!       
  BCFN(2+10,13-8,T)                 R=+170.5  p =  3.2e-44    FAIL !!!       
  BCFN(2+11,13-8,T)                 R=+133.3  p =  9.1e-35    FAIL !!!       
  BCFN(2+12,13-9,T)                 R=+155.9  p =  3.7e-36    FAIL !!!       
  BCFN(2+13,13-9,T)                 R=+147.2  p =  3.4e-34    FAIL !!!       
  FPF-14+6/16:(0,14-0)              R= +14.8  p =  2.6e-13    FAIL           
  FPF-14+6/16:all                   R= +23.5  p =  1.5e-21    FAIL !!        
  FPF-14+6/16:all2                  R= +45.8  p =  9.2e-19    FAIL !         
  FPF-14+6/16:cross                 R=+446.7  p =  3.8e-376   FAIL !!!!!!!   
  [Low8/32]BCFN(2+0,13-4,T)         R=+435.1  p =  4.9e-190   FAIL !!!!!!    
  [Low8/32]BCFN(2+1,13-4,T)         R=+434.0  p =  1.5e-189   FAIL !!!!!!    
  [Low8/32]BCFN(2+2,13-5,T)         R=+421.9  p =  2.3e-165   FAIL !!!!!     
  [Low8/32]BCFN(2+3,13-5,T)         R=+470.5  p =  2.2e-184   FAIL !!!!!!    
  [Low8/32]BCFN(2+4,13-5,T)         R=+492.5  p =  5.6e-193   FAIL !!!!!!    
  [Low8/32]BCFN(2+5,13-6,T)         R=+607.2  p =  2.1e-208   FAIL !!!!!!    
  [Low8/32]BCFN(2+6,13-6,T)         R=+649.1  p =  9.7e-223   FAIL !!!!!!    
  [Low8/32]BCFN(2+7,13-7,T)         R=+775.3  p =  7.9e-234   FAIL !!!!!!    
  [Low8/32]BCFN(2+8,13-8,T)         R=+626.9  p =  4.9e-160   FAIL !!!!!     
  [Low8/32]BCFN(2+9,13-8,T)         R=+658.0  p =  6.3e-168   FAIL !!!!!     
  [Low8/32]BCFN(2+10,13-9,T)        R=+541.2  p =  1.0e-122   FAIL !!!!!     
  [Low8/32]BCFN(2+11,13-9,T)        R=+671.5  p =  5.3e-152   FAIL !!!!!     
  [Low8/32]DC6-9x1Bytes-1           R= +1696  p =  1e-1141    FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R= +2004  p =  1e-1643    FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+396.0  p =  1.0e-325   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +1332  p =  1e-1226    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+866.0  p =  2.9e-767   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+654.3  p =  4.7e-572   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+478.0  p =  7.4e-418   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+352.1  p =  2.3e-308   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+253.6  p =  3.5e-207   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+186.5  p =  1.9e-154   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+188.2  p =  6.6e-156   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+110.5  p =  1.4e-84    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +79.9  p =  1.9e-63    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +42.1  p =  2.2e-30    FAIL !!!       
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +78.9  p =  8.0e-57    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(12,14-9)    R= +36.8  p =  1.7e-23    FAIL !!        
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +16.0  p =  4.3e-9   very suspicious  
  [Low8/32]FPF-14+6/16:(14,14-11)   R= +17.8  p =  1.3e-8   suspicious       
  [Low8/32]FPF-14+6/16:(15,14-11)   R= +52.7  p =  8.1e-24    FAIL !!        
  [Low8/32]FPF-14+6/16:all          R= +1868  p =  2e-1752    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+826671 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+569.7  p =  1.4e-448   FAIL !!!!!!!   
  [Low1/32]BCFN(2+0,13-6,T)         R= +9228  p =  1e-3160    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+10494  p =  2e-3594    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R= +8881  p =  6e-3042    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+10735  p =  8e-3677    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +5686  p =  6e-1711    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +3366  p =  3.4e-855   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R= +2713  p =  1.7e-689   FAIL !!!!!!!   
  [Low1/32]BCFN(2+7,13-9,T)         R= +2520  p =  2.2e-567   FAIL !!!!!!!   
  [Low1/32]BCFN(2+8,13-9,T)         R= +2264  p =  7.2e-510   FAIL !!!!!!!   
  [Low1/32]DC6-9x1Bytes-1           R=+63796  p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+215288 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+849048 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+41969  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+29770  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+21370  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+14113  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+11264  p =  1e-9338    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +7044  p =  3e-5390    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +4361  p =  1e-3470    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +2642  p =  6e-1901    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +2628  p =  3e-1891    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +3402  p =  3e-2142    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(10,14-10)   R= +1057  p =  6.2e-563   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:all          R=+59106  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+933016770 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +2356  p =  3e-2025    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2256  p~=  4.3e-680   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +5642  p~=  1e-1699    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +7106  p~=  3e-2140    FAIL !!!!!!!!  
  ...and 34 test result(s) without anomalies


real	0m2.838s
user	0m2.764s
sys	0m0.068s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x93a98f16
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x93a98f16
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:(0,14-0)              R= +12.6  p =  3.0e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(2,14-0)              R= +12.4  p =  4.6e-11   VERY SUSPICIOUS 
  FPF-14+6/16:all                   R= +21.3  p =  1.7e-19    FAIL !         
  FPF-14+6/16:all2                  R= +61.1  p =  1.7e-24    FAIL !!        
  FPF-14+6/16:cross                 R=+198.0  p =  6.3e-167   FAIL !!!!!     
  [Low8/32]BCFN(2+0,13-4,T)         R=+300.9  p =  2.0e-131   FAIL !!!!!     
  [Low8/32]BCFN(2+1,13-4,T)         R=+280.2  p =  2.2e-122   FAIL !!!!!     
  [Low8/32]BCFN(2+2,13-5,T)         R=+219.9  p =  2.9e-86    FAIL !!!!      
  [Low8/32]BCFN(2+3,13-5,T)         R=+256.5  p =  1.3e-100   FAIL !!!!!     
  [Low8/32]BCFN(2+4,13-5,T)         R=+165.4  p =  6.1e-65    FAIL !!!!      
  [Low8/32]BCFN(2+5,13-6,T)         R=+145.3  p =  3.4e-50    FAIL !!!!      
  [Low8/32]BCFN(2+6,13-6,T)         R=+181.5  p =  1.3e-62    FAIL !!!!      
  [Low8/32]BCFN(2+7,13-7,T)         R=+205.6  p =  1.8e-62    FAIL !!!!      
  [Low8/32]BCFN(2+8,13-8,T)         R=+146.3  p =  4.4e-38    FAIL !!!       
  [Low8/32]BCFN(2+9,13-8,T)         R=+185.5  p =  5.1e-48    FAIL !!!       
  [Low8/32]BCFN(2+10,13-9,T)        R= +81.0  p =  2.5e-19    FAIL !         
  [Low8/32]BCFN(2+11,13-9,T)        R=+103.4  p =  2.4e-24    FAIL !!        
  [Low8/32]DC6-9x1Bytes-1           R= +1702  p =  1e-1145    FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R= +2339  p =  2e-1918    FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+785.2  p =  7.5e-646   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(0,14-0)     R= +1583  p =  1e-1457    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R= +1122  p =  1.9e-994   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(2,14-2)     R= +1048  p =  2.8e-916   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+489.2  p =  1.2e-427   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+353.9  p =  6.1e-310   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+337.6  p =  8.6e-276   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+236.6  p =  5.3e-196   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+214.5  p =  1.0e-177   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+198.3  p =  8.4e-152   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +67.2  p =  2.6e-53    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +55.4  p =  7.2e-40    FAIL !!!       
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +42.0  p =  3.1e-30    FAIL !!!       
  [Low8/32]FPF-14+6/16:(12,14-9)    R= +47.5  p =  3.4e-30    FAIL !!!       
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +33.1  p =  3.5e-18    FAIL !         
  [Low8/32]FPF-14+6/16:(14,14-11)   R= +23.0  p =  7.0e-11   VERY SUSPICIOUS 
  [Low8/32]FPF-14+6/16:(15,14-11)   R= +38.4  p =  1.4e-17    FAIL !         
  [Low8/32]FPF-14+6/16:all          R= +2315  p =  1e-2172    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+1303270 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+549.3  p =  1.8e-432   FAIL !!!!!!!   
  [Low1/32]BCFN(2+0,13-6,T)         R=+13409  p =  1e-4592    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R= +5374  p =  7e-1841    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+10186  p =  9e-3489    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R= +7877  p =  3e-2698    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +2389  p =  4.4e-719   FAIL !!!!!!!   
  [Low1/32]BCFN(2+5,13-8,T)         R= +2311  p =  1.4e-587   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R= +1439  p =  3.3e-366   FAIL !!!!!!!   
  [Low1/32]BCFN(2+7,13-9,T)         R=+538.9  p =  3.3e-122   FAIL !!!!!     
  [Low1/32]BCFN(2+8,13-9,T)         R=+749.5  p =  1.5e-169   FAIL !!!!!!    
  [Low1/32]DC6-9x1Bytes-1           R=+66054  p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+217072 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+858237 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+41789  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+29989  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+21125  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+14445  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+11184  p =  4e-9272    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +8255  p =  1e-6317    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +6596  p =  4e-5249    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +3285  p =  5e-2364    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +2899  p =  4e-2086    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +1883  p =  6e-1186    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(10,14-10)   R= +1057  p =  6.2e-563   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(11,14-11)   R= +1549  p =  3.8e-676   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:all          R=+59490  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+901245617 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +1409  p =  5e-1211    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2256  p~=  4.3e-680   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +5621  p~=  5e-1693    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +7106  p~=  3e-2140    FAIL !!!!!!!!  
  ...and 47 test result(s) without anomalies


real	0m2.934s
user	0m2.848s
sys	0m0.080s
*/
