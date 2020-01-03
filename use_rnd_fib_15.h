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
/// @created on 2019-12-18 01:26:33 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f8850336-d054-4f18-9d9d-af75565e230a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib15;
/* TEST00
time ./MRndCPP 
3153325178
3722740696
3261330048
1085127445
2202679545
4174591465
18446679733795918644

real	0m51.701s
user	0m51.640s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.20e+07  |3111365761|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.31360468|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.85930985|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.58776011|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.00000000|  FAILED  
   diehard_bitstream|   0|   2097152|     100|0.40776544|  PASSED  
        diehard_opso|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_oqso|   0|   2097152|     100|0.00000000|  FAILED  
         diehard_dna|   0|   2097152|     100|0.00000000|  FAILED  
diehard_count_1s_str|   0|    256000|     100|0.60132664|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.00000031|  FAILED  
 diehard_parking_lot|   0|     12000|     100|0.71266869|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.26125959|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.03764896|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.26211346|  PASSED  
        diehard_sums|   0|       100|     100|0.03076796|  PASSED  
        diehard_runs|   0|    100000|     100|0.95821035|  PASSED  
        diehard_runs|   0|    100000|     100|0.04758568|  PASSED  
       diehard_craps|   0|    200000|     100|0.18776051|  PASSED  
       diehard_craps|   0|    200000|     100|0.01486117|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.00000000|  FAILED  
            sts_runs|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   1|    100000|     100|0.00000000|  FAILED  
          sts_serial|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.56824300|  PASSED  
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.04191093|  PASSED  
          sts_serial|   5|    100000|     100|0.00000000|  FAILED  
          sts_serial|   5|    100000|     100|0.95314043|  PASSED  
          sts_serial|   6|    100000|     100|0.00000000|  FAILED  
          sts_serial|   6|    100000|     100|0.21296314|  PASSED  
          sts_serial|   7|    100000|     100|0.00000000|  FAILED  
          sts_serial|   7|    100000|     100|0.50859912|  PASSED  
          sts_serial|   8|    100000|     100|0.00000153|   WEAK   
          sts_serial|   8|    100000|     100|0.99489741|  PASSED  
          sts_serial|   9|    100000|     100|0.00015415|   WEAK   
          sts_serial|   9|    100000|     100|0.40594333|  PASSED  
          sts_serial|  10|    100000|     100|0.01272880|  PASSED  
          sts_serial|  10|    100000|     100|0.98165513|  PASSED  
          sts_serial|  11|    100000|     100|0.01209299|  PASSED  
          sts_serial|  11|    100000|     100|0.52187875|  PASSED  
          sts_serial|  12|    100000|     100|0.18055920|  PASSED  
          sts_serial|  12|    100000|     100|0.75611121|  PASSED  
          sts_serial|  13|    100000|     100|0.05567064|  PASSED  
          sts_serial|  13|    100000|     100|0.87762984|  PASSED  
          sts_serial|  14|    100000|     100|0.90145176|  PASSED  
          sts_serial|  14|    100000|     100|0.08617549|  PASSED  
          sts_serial|  15|    100000|     100|0.68346647|  PASSED  
          sts_serial|  15|    100000|     100|0.90118291|  PASSED  
          sts_serial|  16|    100000|     100|0.98981973|  PASSED  
          sts_serial|  16|    100000|     100|0.67245253|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.00000098|  FAILED  
         rgb_bitdist|   2|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   3|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   4|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   5|    100000|     100|0.00879742|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   7|    100000|     100|0.00268080|   WEAK   
         rgb_bitdist|   8|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   9|    100000|     100|0.00000931|   WEAK   
         rgb_bitdist|  10|    100000|     100|0.87481053|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.11147461|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.14829869|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.90657350|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.34017503|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.58609052|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.28224995|  PASSED  
    rgb_permutations|   2|    100000|     100|0.14806723|  PASSED  
    rgb_permutations|   3|    100000|     100|0.23869612|  PASSED  
    rgb_permutations|   4|    100000|     100|0.35079163|  PASSED  
    rgb_permutations|   5|    100000|     100|0.80126163|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.60547684|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.90207652|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.16863368|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.99367645|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.02471423|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.97972229|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.55060329|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.85500473|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.01632655|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.78423444|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.23855908|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.44234571|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.00059546|   WEAK   
      rgb_lagged_sum|  13|   1000000|     100|0.19100442|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.69696357|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.32074503|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.92416860|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.62884795|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.89250787|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.65449505|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.51874323|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.44202623|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.95598252|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.09412922|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.02794617|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.54163157|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.36020529|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.14552548|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.43522176|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.81810548|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.99561830|   WEAK   
      rgb_lagged_sum|  31|   1000000|     100|0.61088390|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.57767718|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.15480370|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.00000000|  FAILED  
             dab_dct| 256|     50000|       1|0.00000000|  FAILED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.32993711|  PASSED  
        dab_filltree|  32|  15000000|       1|0.52070410|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.14082110|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.00000000|  FAILED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|1.00000000|  FAILED  

real	48m2.508s
user	44m31.396s
sys	3m27.512s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x11963827
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x11963827
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +53.1  p =  6.4e-25    FAIL !!        
  BCFN(2+1,13-3,T)                  R=+120.7  p =  6.4e-57    FAIL !!!!      
  BCFN(2+2,13-3,T)                  R= +98.7  p =  1.6e-46    FAIL !!!       
  BCFN(2+3,13-3,T)                  R=+101.7  p =  6.1e-48    FAIL !!!!      
  BCFN(2+4,13-4,T)                  R=+159.2  p =  1.6e-69    FAIL !!!!      
  BCFN(2+5,13-5,T)                  R=+182.5  p =  1.3e-71    FAIL !!!!      
  BCFN(2+6,13-5,T)                  R=+124.1  p =  9.0e-49    FAIL !!!!      
  BCFN(2+7,13-6,T)                  R= +91.2  p =  1.1e-31    FAIL !!!       
  BCFN(2+8,13-6,T)                  R=+124.4  p =  4.8e-43    FAIL !!!       
  BCFN(2+9,13-7,T)                  R=+153.4  p =  8.9e-47    FAIL !!!       
  BCFN(2+10,13-8,T)                 R=+151.2  p =  2.5e-39    FAIL !!!       
  BCFN(2+11,13-8,T)                 R=+118.3  p =  5.7e-31    FAIL !!!       
  BCFN(2+12,13-9,T)                 R=+111.4  p =  3.7e-26    FAIL !!        
  BCFN(2+13,13-9,T)                 R=+140.4  p =  1.1e-32    FAIL !!!       
  DC6-9x1Bytes-1                    R= +23.7  p =  3.7e-14    FAIL !         
  Gap-16:A                          R=+239.2  p =  1.9e-203   FAIL !!!!!!    
  Gap-16:B                          R=+124.8  p =  6.4e-100   FAIL !!!!!     
  FPF-14+6/16:(0,14-0)              R=+471.7  p =  3.7e-436   FAIL !!!!!!!   
  FPF-14+6/16:(1,14-0)              R=+221.2  p =  2.7e-204   FAIL !!!!!!    
  FPF-14+6/16:(2,14-0)              R= +70.3  p =  1.2e-64    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= +28.6  p =  4.3e-25    FAIL !!        
  FPF-14+6/16:(4,14-2)              R= +22.2  p =  3.6e-19    FAIL !         
  FPF-14+6/16:(5,14-2)              R= +11.5  p =  7.5e-10  very suspicious  
  FPF-14+6/16:(6,14-3)              R= +23.5  p =  2.1e-20    FAIL !         
  FPF-14+6/16:(8,14-5)              R= +21.0  p =  2.7e-17    FAIL !         
  FPF-14+6/16:(9,14-5)              R=  +7.4  p =  5.5e-6   unusual          
  FPF-14+6/16:all                   R=+432.3  p =  3.6e-405   FAIL !!!!!!!   
  FPF-14+6/16:all2                  R=+66040  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R= +1649  p =  5e-1388    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R= +6056  p =  4e-2646    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R= +5404  p =  8e-2361    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R= +5114  p =  4e-2002    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R= +5121  p =  5e-2005    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R= +3627  p =  3e-1420    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R= +2531  p =  3.8e-867   FAIL !!!!!!!   
  [Low8/32]BCFN(2+6,13-6,T)         R= +2862  p =  1.2e-980   FAIL !!!!!!!   
  [Low8/32]BCFN(2+7,13-7,T)         R= +1264  p =  9.2e-381   FAIL !!!!!!!   
  [Low8/32]BCFN(2+8,13-8,T)         R= +1163  p =  3.3e-296   FAIL !!!!!!    
  [Low8/32]BCFN(2+9,13-8,T)         R=+880.8  p =  1.7e-224   FAIL !!!!!!    
  [Low8/32]BCFN(2+10,13-9,T)        R=+531.1  p =  1.8e-120   FAIL !!!!!     
  [Low8/32]BCFN(2+11,13-9,T)        R=+812.6  p =  1.0e-183   FAIL !!!!!!    
  [Low8/32]DC6-9x1Bytes-1           R=+41067  p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+266255 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+844862 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+30871  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+25157  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+16860  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+12830  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R= +9113  p =  9e-7988    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R= +6351  p =  8e-5190    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R= +4669  p =  1e-3870    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +3693  p =  3e-3061    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R= +2780  p =  3e-2127    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +1521  p =  4e-1210    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +1203  p =  2.0e-865   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +1007  p =  9.8e-725   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+651.6  p =  1.3e-410   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+655.7  p =  2.1e-349   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(14,14-11)   R=+409.7  p =  2.0e-179   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(15,14-11)   R=+410.8  p =  7.1e-180   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:all          R=+46703  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+525063554 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +2763  p =  2e-2173    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R= +3059  p~=  7.3e-922   FAIL !!!!!!!   
  [Low1/32]BCFN(2+0,13-6,T)         R=+39328  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+27556  p =  1e-9437    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+32300  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+31086  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+33074  p =  5e-9949    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+21578  p =  2e-5477    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+19863  p =  7e-5042    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11499  p =  7e-2585    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5769  p =  1e-1297    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+118949 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+220068 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+871515 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+72091  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+52492  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+35995  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+23540  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+14732  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+11648  p =  4e-8914    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +6829  p =  4e-5435    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +6735  p =  2e-4846    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +2193  p =  6e-1578    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +2608  p =  3e-1642    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+100198 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+2858451066 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +2131  p =  5e-1832    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R=+992.3  p~=  9.5e-300   FAIL !!!!!!    
  ...and 24 test result(s) without anomalies


real	0m2.941s
user	0m2.752s
sys	0m0.180s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xca05168b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xca05168b
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+269.0  p =  4.0e-127   FAIL !!!!!     
  BCFN(2+1,13-3,T)                  R=+277.9  p =  2.4e-131   FAIL !!!!!     
  BCFN(2+2,13-3,T)                  R=+308.7  p =  6.9e-146   FAIL !!!!!     
  BCFN(2+3,13-3,T)                  R=+239.9  p =  2.4e-113   FAIL !!!!!     
  BCFN(2+4,13-4,T)                  R=+290.7  p =  5.9e-127   FAIL !!!!!     
  BCFN(2+5,13-5,T)                  R=+415.2  p =  9.9e-163   FAIL !!!!!     
  BCFN(2+6,13-5,T)                  R=+417.4  p =  1.4e-163   FAIL !!!!!     
  BCFN(2+7,13-6,T)                  R=+494.9  p =  6.2e-170   FAIL !!!!!!    
  BCFN(2+8,13-6,T)                  R=+485.0  p =  1.6e-166   FAIL !!!!!     
  BCFN(2+9,13-7,T)                  R=+527.3  p =  3.0e-159   FAIL !!!!!     
  BCFN(2+10,13-8,T)                 R=+601.8  p =  1.1e-153   FAIL !!!!!     
  BCFN(2+11,13-8,T)                 R=+620.3  p =  2.2e-158   FAIL !!!!!     
  BCFN(2+12,13-9,T)                 R=+708.2  p =  2.9e-160   FAIL !!!!!     
  BCFN(2+13,13-9,T)                 R=+682.1  p =  2.2e-154   FAIL !!!!!     
  DC6-9x1Bytes-1                    R= +53.1  p =  3.3e-32    FAIL !!!       
  Gap-16:A                          R=+273.9  p =  4.7e-233   FAIL !!!!!!    
  Gap-16:B                          R=+153.6  p =  5.2e-123   FAIL !!!!!     
  FPF-14+6/16:(0,14-0)              R=+454.5  p =  3.2e-420   FAIL !!!!!!!   
  FPF-14+6/16:(1,14-0)              R=+198.1  p =  5.7e-183   FAIL !!!!!!    
  FPF-14+6/16:(2,14-0)              R= +99.7  p =  6.5e-92    FAIL !!!!!     
  FPF-14+6/16:(3,14-1)              R= +55.2  p =  1.1e-48    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= +33.1  p =  9.2e-29    FAIL !!        
  FPF-14+6/16:(5,14-2)              R= +26.1  p =  1.3e-22    FAIL !!        
  FPF-14+6/16:(6,14-3)              R= +12.8  p =  5.2e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(9,14-5)              R= +11.6  p =  1.8e-9   very suspicious  
  FPF-14+6/16:all                   R=+438.9  p =  1.9e-411   FAIL !!!!!!!   
  FPF-14+6/16:all2                  R=+61688  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R= +1602  p =  2e-1348    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R= +7166  p =  8e-3131    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R= +5522  p =  1e-2412    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R= +4673  p =  1e-1829    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R= +5121  p =  8e-2005    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R= +5258  p =  2e-2058    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R= +4776  p =  5e-1636    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R= +4401  p =  1e-1507    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R= +3178  p =  1.3e-956   FAIL !!!!!!!   
  [Low8/32]BCFN(2+8,13-8,T)         R= +2584  p =  8.0e-657   FAIL !!!!!!!   
  [Low8/32]BCFN(2+9,13-8,T)         R= +3138  p =  2.0e-797   FAIL !!!!!!!   
  [Low8/32]BCFN(2+10,13-9,T)        R= +4568  p =  1e-1027    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +2673  p =  1.2e-601   FAIL !!!!!!!   
  [Low8/32]DC6-9x1Bytes-1           R=+40574  p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+266432 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+841460 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+32994  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+23398  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+16792  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+12229  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R= +8928  p =  4e-7825    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R= +6271  p =  5e-5124    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R= +3831  p =  2e-3176    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +3713  p =  7e-3078    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R= +2585  p =  5e-1978    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +1758  p =  1e-1398    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +1038  p =  6.9e-747   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +1393  p =  2e-1002    FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+856.5  p =  1.4e-539   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+722.2  p =  8.6e-385   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(14,14-11)   R=+547.5  p =  1.7e-239   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(15,14-11)   R=+632.7  p =  1.3e-276   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:all          R=+46941  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+533086325 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +3081  p =  1e-2423    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R= +3059  p~=  7.3e-922   FAIL !!!!!!!   
  [Low1/32]BCFN(2+0,13-6,T)         R=+60180  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+48294  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+46310  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+38406  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+28773  p =  4e-8655    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+22272  p =  2e-5653    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+20899  p =  5e-5305    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11920  p =  1e-2679    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+123346 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+220105 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+872206 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+71241  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+50287  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+36907  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+26038  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+14884  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+12548  p =  8e-9603    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +7568  p =  8e-6023    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +7505  p =  1e-5400    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +3659  p =  4e-2633    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +5349  p =  3e-3368    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(11,14-11)   R= +3297  p =  8e-1438    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+100198 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+2691732181 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +3029  p =  3e-2603    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R=+992.3  p~=  9.5e-300   FAIL !!!!!!    
  ...and 25 test result(s) without anomalies


real	0m2.854s
user	0m2.744s
sys	0m0.088s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf9deb9ca
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf9deb9ca
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+459.5  p =  2.6e-217   FAIL !!!!!!    
  BCFN(2+1,13-3,T)                  R=+379.6  p =  1.8e-179   FAIL !!!!!!    
  BCFN(2+2,13-3,T)                  R=+296.6  p =  3.7e-140   FAIL !!!!!     
  BCFN(2+3,13-3,T)                  R=+338.9  p =  3.2e-160   FAIL !!!!!     
  BCFN(2+4,13-4,T)                  R=+428.5  p =  3.6e-187   FAIL !!!!!!    
  BCFN(2+5,13-5,T)                  R=+521.3  p =  2.9e-204   FAIL !!!!!!    
  BCFN(2+6,13-5,T)                  R=+467.2  p =  4.4e-183   FAIL !!!!!!    
  BCFN(2+7,13-6,T)                  R=+638.5  p =  4.1e-219   FAIL !!!!!!    
  BCFN(2+8,13-6,T)                  R=+572.4  p =  1.8e-196   FAIL !!!!!!    
  BCFN(2+9,13-7,T)                  R=+668.7  p =  8.9e-202   FAIL !!!!!!    
  BCFN(2+10,13-8,T)                 R=+794.7  p =  1.2e-202   FAIL !!!!!!    
  BCFN(2+11,13-8,T)                 R=+808.4  p =  4.2e-206   FAIL !!!!!!    
  BCFN(2+12,13-9,T)                 R=+980.2  p =  2.3e-221   FAIL !!!!!!    
  BCFN(2+13,13-9,T)                 R=+975.1  p =  3.1e-220   FAIL !!!!!!    
  DC6-9x1Bytes-1                    R= +70.0  p =  1.3e-42    FAIL !!!       
  Gap-16:A                          R=+280.5  p =  1.1e-238   FAIL !!!!!!    
  Gap-16:B                          R=+165.6  p =  1.2e-132   FAIL !!!!!     
  FPF-14+6/16:(0,14-0)              R=+353.9  p =  3.6e-327   FAIL !!!!!!    
  FPF-14+6/16:(1,14-0)              R=+269.3  p =  7.1e-249   FAIL !!!!!!    
  FPF-14+6/16:(2,14-0)              R=+109.9  p =  2.6e-101   FAIL !!!!!     
  FPF-14+6/16:(3,14-1)              R= +90.0  p =  1.5e-79    FAIL !!!!      
  FPF-14+6/16:(4,14-2)              R= +16.3  p =  4.8e-14    FAIL           
  FPF-14+6/16:(5,14-2)              R= +21.7  p =  9.5e-19    FAIL !         
  FPF-14+6/16:(6,14-3)              R= +15.5  p =  2.2e-13    FAIL           
  FPF-14+6/16:all                   R=+497.6  p =  1.7e-466   FAIL !!!!!!!   
  FPF-14+6/16:all2                  R=+51594  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R= +4235  p =  6e-3563    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R= +6171  p =  6e-2696    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R= +6227  p =  1e-2720    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R= +5376  p =  1e-2104    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R= +5350  p =  1e-2094    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R= +5433  p =  6e-2127    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R= +5159  p =  3e-1767    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R= +4585  p =  1e-1570    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R= +3309  p =  6.5e-996   FAIL !!!!!!!   
  [Low8/32]BCFN(2+8,13-8,T)         R= +3381  p =  4.6e-859   FAIL !!!!!!!   
  [Low8/32]BCFN(2+9,13-8,T)         R= +4102  p =  4e-1042    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R= +5371  p =  6e-1208    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +5068  p =  6e-1140    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+42037  p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+277504 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+885564 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+33673  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+24230  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+17810  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+13228  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R= +8373  p =  9e-7339    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R= +6224  p =  1e-5085    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R= +4656  p =  5e-3860    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +4092  p =  3e-3392    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R= +2750  p =  2e-2104    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +1903  p =  2e-1514    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +1421  p =  1e-1022    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +1385  p =  1.0e-996   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+648.8  p =  8.7e-409   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+849.0  p =  3.2e-452   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(15,14-11)   R=+409.2  p =  3.4e-179   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:all          R=+48544  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+586129770 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +5275  p =  5e-4149    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R= +3059  p~=  7.3e-922   FAIL !!!!!!!   
  [Low1/32]BCFN(2+0,13-6,T)         R=+40829  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+26438  p =  1e-9054    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+30042  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+37051  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+32453  p =  3e-9762    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+15543  p =  1e-3945    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R= +9785  p =  3e-2484    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R= +8637  p =  7e-1942    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+137518 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+221969 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+884065 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+70549  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+50213  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+38333  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+21847  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+18805  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +7907  p =  1e-6050    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R=+10563  p =  7e-8407    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +2192  p =  3e-1577    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +7469  p =  1e-5374    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+99672  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+2938038859 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +8217  p =  5e-7063    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R=+992.3  p~=  9.5e-300   FAIL !!!!!!    
  ...and 26 test result(s) without anomalies


real	0m2.840s
user	0m2.712s
sys	0m0.108s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc8b09f96
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc8b09f96
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+138.3  p =  2.9e-65    FAIL !!!!      
  BCFN(2+1,13-3,T)                  R=+124.7  p =  8.0e-59    FAIL !!!!      
  BCFN(2+2,13-3,T)                  R=+167.7  p =  3.4e-79    FAIL !!!!      
  BCFN(2+3,13-3,T)                  R=+114.7  p =  4.3e-54    FAIL !!!!      
  BCFN(2+4,13-4,T)                  R=+133.8  p =  2.0e-58    FAIL !!!!      
  BCFN(2+5,13-5,T)                  R=+161.9  p =  1.4e-63    FAIL !!!!      
  BCFN(2+6,13-5,T)                  R=+200.8  p =  9.1e-79    FAIL !!!!      
  BCFN(2+7,13-6,T)                  R=+232.6  p =  4.3e-80    FAIL !!!!      
  BCFN(2+8,13-6,T)                  R=+252.8  p =  5.1e-87    FAIL !!!!      
  BCFN(2+9,13-7,T)                  R=+240.9  p =  4.3e-73    FAIL !!!!      
  BCFN(2+10,13-8,T)                 R=+301.2  p =  2.1e-77    FAIL !!!!      
  BCFN(2+11,13-8,T)                 R=+300.6  p =  3.0e-77    FAIL !!!!      
  BCFN(2+12,13-9,T)                 R=+311.3  p =  4.4e-71    FAIL !!!!      
  BCFN(2+13,13-9,T)                 R=+343.8  p =  2.2e-78    FAIL !!!!      
  DC6-9x1Bytes-1                    R= +34.7  p =  6.9e-21    FAIL !!        
  Gap-16:A                          R=+202.2  p =  6.2e-172   FAIL !!!!!!    
  Gap-16:B                          R=+100.3  p =  2.6e-80    FAIL !!!!      
  FPF-14+6/16:(0,14-0)              R=+327.0  p =  2.9e-302   FAIL !!!!!!    
  FPF-14+6/16:(1,14-0)              R=+155.1  p =  3.6e-143   FAIL !!!!!     
  FPF-14+6/16:(2,14-0)              R= +73.9  p =  5.4e-68    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= +39.5  p =  8.7e-35    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= +32.8  p =  1.9e-28    FAIL !!        
  FPF-14+6/16:(6,14-3)              R= +10.2  p =  9.8e-9   very suspicious  
  FPF-14+6/16:all                   R=+308.9  p =  1.9e-289   FAIL !!!!!!    
  FPF-14+6/16:all2                  R=+32801  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+749.6  p =  5.6e-631   FAIL !!!!!!!   
  [Low8/32]BCFN(2+0,13-4,T)         R= +5088  p =  9e-2223    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R= +4821  p =  4e-2106    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R= +2635  p =  7e-1032    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R= +4777  p =  3e-1870    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R= +4313  p =  2e-1688    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R= +3572  p =  1e-1223    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R= +3270  p =  3e-1120    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R= +1335  p =  4.7e-402   FAIL !!!!!!!   
  [Low8/32]BCFN(2+8,13-8,T)         R= +1286  p =  3.3e-327   FAIL !!!!!!    
  [Low8/32]BCFN(2+9,13-8,T)         R= +1577  p =  4.2e-401   FAIL !!!!!!!   
  [Low8/32]BCFN(2+10,13-9,T)        R= +1733  p =  1.3e-390   FAIL !!!!!!!   
  [Low8/32]BCFN(2+11,13-9,T)        R= +2532  p =  4.4e-570   FAIL !!!!!!!   
  [Low8/32]DC6-9x1Bytes-1           R=+41034  p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+249091 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+778790 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+31027  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+19939  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+14577  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+11180  p =  3e-9778    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R= +8706  p =  6e-7631    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R= +5727  p =  7e-4680    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R= +4910  p =  1e-4070    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +4155  p =  3e-3444    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R= +3093  p =  1e-2366    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +1853  p =  1e-1474    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +2074  p =  3e-1492    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +1171  p =  5.4e-843   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+737.1  p =  1.9e-464   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+758.8  p =  3.0e-404   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:(14,14-11)   R=+203.3  p =  1.9e-89    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(15,14-11)   R=+271.9  p =  2.3e-119   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:all          R=+43026  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+446571502 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +2448  p =  1e-1925    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R= +3059  p~=  7.3e-922   FAIL !!!!!!!   
  [Low1/32]BCFN(2+0,13-6,T)         R=+41325  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+38949  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+41305  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+25186  p =  9e-8626    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+15929  p =  6e-4792    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+14900  p =  1e-3782    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+18407  p =  2e-4672    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11920  p =  1e-2679    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5918  p =  6e-1331    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+129175 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+221029 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+877852 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+70325  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+48968  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+36602  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+27318  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+15957  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+13754  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +8769  p =  1e-6978    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +7468  p =  4e-5374    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +3658  p =  2e-2632    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(9,14-9)     R= +4175  p =  2e-2629    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+99590  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+2777780092 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +2400  p =  4e-2063    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R=+992.3  p~=  9.5e-300   FAIL !!!!!!    
  ...and 27 test result(s) without anomalies


real	0m2.853s
user	0m2.748s
sys	0m0.096s
*/
