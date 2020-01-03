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
/// @created on 2019-12-09 19:36:47 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 55802526-3e41-4972-98d5-3b3cf98d3648                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin06;
/* TEST00
time ./MRndCPP 
1484737019
766592354
1046114819
1889431271
1025678123
2054579886
256844938345379

real	1m33.506s
user	1m33.368s
sys	0m0.040s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.94e+07  | 342871399|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.09076889|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.84318490|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.33590455|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.00000000|  FAILED  
   diehard_bitstream|   0|   2097152|     100|0.46413926|  PASSED  
        diehard_opso|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_oqso|   0|   2097152|     100|0.00000000|  FAILED  
         diehard_dna|   0|   2097152|     100|0.41229846|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.00063898|   WEAK   
diehard_count_1s_byt|   0|    256000|     100|0.18818998|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.25422977|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.77228614|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.48471201|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.47201608|  PASSED  
        diehard_sums|   0|       100|     100|0.00014312|   WEAK   
        diehard_runs|   0|    100000|     100|0.51494538|  PASSED  
        diehard_runs|   0|    100000|     100|0.05611671|  PASSED  
       diehard_craps|   0|    200000|     100|0.67228339|  PASSED  
       diehard_craps|   0|    200000|     100|0.69585320|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.91202953|  PASSED  
            sts_runs|   2|    100000|     100|0.89901161|  PASSED  
          sts_serial|   1|    100000|     100|0.61327832|  PASSED  
          sts_serial|   2|    100000|     100|0.52114085|  PASSED  
          sts_serial|   3|    100000|     100|0.43544119|  PASSED  
          sts_serial|   3|    100000|     100|0.95746117|  PASSED  
          sts_serial|   4|    100000|     100|0.60438337|  PASSED  
          sts_serial|   4|    100000|     100|0.84620670|  PASSED  
          sts_serial|   5|    100000|     100|0.99859933|   WEAK   
          sts_serial|   5|    100000|     100|0.64692928|  PASSED  
          sts_serial|   6|    100000|     100|0.41729595|  PASSED  
          sts_serial|   6|    100000|     100|0.28873222|  PASSED  
          sts_serial|   7|    100000|     100|0.34806722|  PASSED  
          sts_serial|   7|    100000|     100|0.95276709|  PASSED  
          sts_serial|   8|    100000|     100|0.63104247|  PASSED  
          sts_serial|   8|    100000|     100|0.52818147|  PASSED  
          sts_serial|   9|    100000|     100|0.96524750|  PASSED  
          sts_serial|   9|    100000|     100|0.98564627|  PASSED  
          sts_serial|  10|    100000|     100|0.81118231|  PASSED  
          sts_serial|  10|    100000|     100|0.70601120|  PASSED  
          sts_serial|  11|    100000|     100|0.21780068|  PASSED  
          sts_serial|  11|    100000|     100|0.66176036|  PASSED  
          sts_serial|  12|    100000|     100|0.27426371|  PASSED  
          sts_serial|  12|    100000|     100|0.94540883|  PASSED  
          sts_serial|  13|    100000|     100|0.73671807|  PASSED  
          sts_serial|  13|    100000|     100|0.78302879|  PASSED  
          sts_serial|  14|    100000|     100|0.15139276|  PASSED  
          sts_serial|  14|    100000|     100|0.56438727|  PASSED  
          sts_serial|  15|    100000|     100|0.03736123|  PASSED  
          sts_serial|  15|    100000|     100|0.42922873|  PASSED  
          sts_serial|  16|    100000|     100|0.11233109|  PASSED  
          sts_serial|  16|    100000|     100|0.25595452|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.96414559|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.39139431|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.29231748|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.00019485|   WEAK   
         rgb_bitdist|   5|    100000|     100|0.21524587|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.55744245|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.51349221|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.04756632|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.67765503|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.99224931|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.99155232|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.69553612|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.62042606|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.62399963|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.51465135|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.34080587|  PASSED  
    rgb_permutations|   2|    100000|     100|0.28850047|  PASSED  
    rgb_permutations|   3|    100000|     100|0.57988607|  PASSED  
    rgb_permutations|   4|    100000|     100|0.70686863|  PASSED  
    rgb_permutations|   5|    100000|     100|0.98058491|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.23088032|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.25230870|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.45960423|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.21534177|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.95435810|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.23712330|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.62326699|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.03830418|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.11832063|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.41387973|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.99473285|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.30410469|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.24742471|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.24847207|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.20624317|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.05903065|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.34577769|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.92263678|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.40265428|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.31150337|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.77509018|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.38410802|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.59827955|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.00773103|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.61172145|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.46440531|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.93075342|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.19599733|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.36938160|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.16738067|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.74743494|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  32|   1000000|     100|0.93385813|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.07713969|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.66775351|  PASSED  
             dab_dct| 256|     50000|       1|0.18276300|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.68260860|  PASSED  
        dab_filltree|  32|  15000000|       1|0.51643549|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.30083334|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.02076481|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.75097806|  PASSED  

real	51m0.892s
user	47m28.704s
sys	3m28.984s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x42e1edc5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x42e1edc5
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R= +78.8  p =  5.6e-48    FAIL !!!!      
  Gap-16:A                          R=  +8.1  p =  2.0e-6   very suspicious  
  [Low8/32]DC6-9x1Bytes-1           R= +1114  p =  2.3e-749   FAIL !!!!!!!   
  [Low8/32]Gap-16:A                 R=+206115 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+1258961 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+297816 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+210396 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+148852 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+97151  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+68719  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+48582  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+34389  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+17200  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+12802  p =  1e-9796    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +8131  p =  2e-6471    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4398  p =  5e-3165    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +3576  p =  1e-2573    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +3658  p =  1e-1946    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+409180 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+46222480506 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +2693  p =  3e-2118    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R= +79.4  p =  1.2e-27    FAIL !!!       
  [Low1/32]BCFN(2+1,13-6,T)         R= +20.5  p =  1.9e-7   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R= +1275  p =  1.6e-718   FAIL !!!!!!!   
  [Low1/32]Gap-16:A                 R= +47.7  p =  6.3e-38    FAIL !!!       
  [Low1/32]Gap-16:B                 R=+275.8  p =  2.9e-208   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +1058  p =  6.5e-925   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+735.7  p =  1.3e-644   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+428.4  p =  5.2e-350   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+252.2  p =  5.5e-209   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+125.4  p =  8.3e-104   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +66.8  p =  3.5e-51    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +41.3  p =  1.1e-32    FAIL !!!       
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +19.4  p =  4.9e-14    FAIL           
  [Low1/32]FPF-14+6/16:(8,14-8)     R= +11.7  p =  1.9e-8   suspicious       
  [Low1/32]FPF-14+6/16:all          R= +1448  p =  3e-1303    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+475816 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +1922  p =  5e-1652    FAIL !!!!!!!!  
  ...and 76 test result(s) without anomalies


real	0m3.018s
user	0m2.840s
sys	0m0.168s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7f642e76
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7f642e76
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R= +74.4  p =  2.6e-45    FAIL !!!       
  Gap-16:A                          R=  +5.2  p =  6.1e-4   unusual          
  [Low8/32]DC6-9x1Bytes-1           R= +1115  p =  3.2e-750   FAIL !!!!!!!   
  [Low8/32]Gap-16:A                 R=+206122 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+1259003 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+297818 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+210446 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+148696 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+97277  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+68723  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+48656  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+34336  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+17170  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+12807  p =  9e-9801    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +8213  p =  3e-6536    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4494  p =  7e-3234    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +3480  p =  5e-2504    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +3552  p =  4e-1890    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+409198 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+46223583119 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +2592  p =  7e-2039    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R= +85.2  p =  1.3e-29    FAIL !!!       
  [Low1/32]BCFN(2+1,13-6,T)         R= +22.4  p =  4.3e-8   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R= +1306  p =  7.6e-736   FAIL !!!!!!!   
  [Low1/32]Gap-16:A                 R= +49.0  p =  5.4e-39    FAIL !!!       
  [Low1/32]Gap-16:B                 R=+276.9  p =  3.9e-209   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +1047  p =  1.8e-915   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+729.3  p =  4.8e-639   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+452.4  p =  1.3e-369   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+254.3  p =  1.1e-210   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+118.4  p =  4.9e-98    FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +71.9  p =  4.9e-55    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +40.0  p =  1.1e-31    FAIL !!!       
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +26.1  p =  7.4e-19    FAIL !         
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  +9.8  p =  4.0e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= +1448  p =  7e-1303    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+472392 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +1956  p =  3e-1681    FAIL !!!!!!!!  
  ...and 76 test result(s) without anomalies


real	0m2.917s
user	0m2.824s
sys	0m0.088s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x425b22c9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x425b22c9
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R= +75.2  p =  8.1e-46    FAIL !!!       
  [Low8/32]DC6-9x1Bytes-1           R= +1118  p =  3.1e-752   FAIL !!!!!!!   
  [Low8/32]Gap-16:A                 R=+206099 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+1258853 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+297766 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+210617 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+148679 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+97191  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+68602  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+48598  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+34350  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+17147  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+12779  p =  1e-9779    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +8055  p =  2e-6410    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4406  p =  1e-3170    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +3383  p =  1e-2434    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +3606  p =  3e-1919    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+409154 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+46221728635 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +2646  p =  9e-2082    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R= +72.1  p =  4.1e-25    FAIL !!        
  [Low1/32]BCFN(2+1,13-6,T)         R= +13.6  p =  4.2e-5   mildly suspicious
  [Low1/32]DC6-9x1Bytes-1           R= +1278  p =  3.6e-720   FAIL !!!!!!!   
  [Low1/32]Gap-16:A                 R= +50.0  p =  8.3e-40    FAIL !!!       
  [Low1/32]Gap-16:B                 R=+264.5  p =  9.4e-200   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +1048  p =  1.5e-916   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+732.6  p =  6.5e-642   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+426.6  p =  1.6e-348   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+250.8  p =  9.1e-208   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+110.5  p =  1.7e-91    FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +72.2  p =  2.9e-55    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +48.6  p =  1.8e-38    FAIL !!!       
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +20.1  p =  1.7e-14    FAIL           
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  +7.8  p =  1.2e-5   unusual          
  [Low1/32]FPF-14+6/16:all          R= +1436  p =  1e-1292    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+468586 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +1906  p =  5e-1638    FAIL !!!!!!!!  
  ...and 77 test result(s) without anomalies


real	0m2.954s
user	0m2.840s
sys	0m0.092s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6186fef3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6186fef3
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R= +79.7  p =  1.5e-48    FAIL !!!!      
  Gap-16:A                          R=  +4.7  p =  1.5e-3   unusual          
  [Low8/32]DC6-9x1Bytes-1           R= +1113  p =  4.8e-749   FAIL !!!!!!!   
  [Low8/32]Gap-16:A                 R=+206114 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+1258945 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+297675 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+210525 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+149006 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+97134  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+68691  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+48422  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+34442  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+17176  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+12901  p =  5e-9873    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R= +8217  p =  2e-6539    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4401  p =  2e-3167    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +3514  p =  1e-2528    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(13,14-10)   R= +3635  p =  2e-1934    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+409173 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+46220726919 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +2676  p =  8e-2105    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R= +67.5  p =  1.5e-23    FAIL !!        
  [Low1/32]BCFN(2+1,13-6,T)         R= +12.2  p =  1.3e-4   mildly suspicious
  [Low1/32]DC6-9x1Bytes-1           R= +1317  p =  2.9e-742   FAIL !!!!!!!   
  [Low1/32]Gap-16:A                 R= +49.0  p =  5.1e-39    FAIL !!!       
  [Low1/32]Gap-16:B                 R=+271.0  p =  1.1e-204   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +1065  p =  2.4e-931   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+721.0  p =  9.0e-632   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+434.4  p =  7.0e-355   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+257.4  p =  2.8e-213   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+117.7  p =  2.0e-97    FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(5,14-6)     R= +65.1  p =  7.2e-50    FAIL !!!!      
  [Low1/32]FPF-14+6/16:(6,14-7)     R= +41.3  p =  1.0e-32    FAIL !!!       
  [Low1/32]FPF-14+6/16:(7,14-8)     R= +23.9  p =  3.3e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(8,14-8)     R=  +9.6  p =  5.6e-7   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= +1445  p =  1e-1300    FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+475641 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R= +1887  p =  1e-1621    FAIL !!!!!!!!  
  ...and 76 test result(s) without anomalies


real	0m2.991s
user	0m2.892s
sys	0m0.092s
*/
