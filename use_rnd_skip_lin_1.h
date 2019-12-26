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
/// @created on 2019-12-08 03:02:32 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 787c4945-7336-49a5-b536-8364bf0b4a8f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_skip_lin.h"

using TRnd = RndSkipLin1;
/* TEST00
time ./MRndCPP 
2410088158
2584699367
3398162018
1879748187
2318546736
4079247759
4611788235260035072

real	0m8.899s
user	0m8.864s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.09e+07  |2114447618|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.21660952|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.65869868|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.33320977|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.00000000|  FAILED  
   diehard_bitstream|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_opso|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_oqso|   0|   2097152|     100|0.00000000|  FAILED  
         diehard_dna|   0|   2097152|     100|0.00000000|  FAILED  
diehard_count_1s_str|   0|    256000|     100|0.00000000|  FAILED  
diehard_count_1s_byt|   0|    256000|     100|0.00000000|  FAILED  
 diehard_parking_lot|   0|     12000|     100|0.04838718|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.31899195|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.76395083|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.54792860|  PASSED  
        diehard_sums|   0|       100|     100|0.54802458|  PASSED  
        diehard_runs|   0|    100000|     100|0.61612912|  PASSED  
        diehard_runs|   0|    100000|     100|0.77556748|  PASSED  
       diehard_craps|   0|    200000|     100|0.75567934|  PASSED  
       diehard_craps|   0|    200000|     100|0.56967976|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.08987033|  PASSED  
            sts_runs|   2|    100000|     100|0.06041650|  PASSED  
          sts_serial|   1|    100000|     100|0.30502520|  PASSED  
          sts_serial|   2|    100000|     100|0.00055810|   WEAK   
          sts_serial|   3|    100000|     100|0.00000011|  FAILED  
          sts_serial|   3|    100000|     100|0.00124743|   WEAK   
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.00000193|   WEAK   
          sts_serial|   5|    100000|     100|0.00000000|  FAILED  
          sts_serial|   5|    100000|     100|0.00000000|  FAILED  
          sts_serial|   6|    100000|     100|0.00000000|  FAILED  
          sts_serial|   6|    100000|     100|0.00000000|  FAILED  
          sts_serial|   7|    100000|     100|0.00000000|  FAILED  
          sts_serial|   7|    100000|     100|0.00000000|  FAILED  
          sts_serial|   8|    100000|     100|0.00000000|  FAILED  
          sts_serial|   8|    100000|     100|0.00000000|  FAILED  
          sts_serial|   9|    100000|     100|0.00000000|  FAILED  
          sts_serial|   9|    100000|     100|0.00000000|  FAILED  
          sts_serial|  10|    100000|     100|0.00000000|  FAILED  
          sts_serial|  10|    100000|     100|0.00000000|  FAILED  
          sts_serial|  11|    100000|     100|0.00000000|  FAILED  
          sts_serial|  11|    100000|     100|0.00000000|  FAILED  
          sts_serial|  12|    100000|     100|0.00000000|  FAILED  
          sts_serial|  12|    100000|     100|0.00000000|  FAILED  
          sts_serial|  13|    100000|     100|0.00000000|  FAILED  
          sts_serial|  13|    100000|     100|0.00000000|  FAILED  
          sts_serial|  14|    100000|     100|0.00000000|  FAILED  
          sts_serial|  14|    100000|     100|0.00000000|  FAILED  
          sts_serial|  15|    100000|     100|0.00000000|  FAILED  
          sts_serial|  15|    100000|     100|0.00000000|  FAILED  
          sts_serial|  16|    100000|     100|0.00000000|  FAILED  
          sts_serial|  16|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   1|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   2|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   3|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   4|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   5|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   6|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   7|    100000|     100|0.85831919|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   9|    100000|     100|0.59489877|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.06656791|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.64293592|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.14745313|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.31706628|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.46468140|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.99340044|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.36340510|  PASSED  
    rgb_permutations|   2|    100000|     100|0.84191587|  PASSED  
    rgb_permutations|   3|    100000|     100|0.44212310|  PASSED  
    rgb_permutations|   4|    100000|     100|0.67321045|  PASSED  
    rgb_permutations|   5|    100000|     100|0.56497657|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.59259360|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.72719728|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.77471391|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.21123804|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.99335522|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.42905223|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.21618386|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.41076902|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.45597105|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.19778173|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.93122308|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.96842037|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.60488744|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.64851190|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.08576439|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.28359752|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.59984689|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.54316562|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.27214378|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.39267148|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.82494770|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.60979910|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.64892162|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.69503802|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.93523027|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.33027133|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.22966208|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.12767648|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.45143459|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.98377360|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.70654636|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.49848170|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.30462771|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.42482626|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|1.00000000|  FAILED  
             dab_dct| 256|     50000|       1|0.00000000|  FAILED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.85549312|  PASSED  
        dab_filltree|  32|  15000000|       1|0.14841077|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.00000000|  FAILED  
       dab_filltree2|   1|   5000000|       1|0.00000000|  FAILED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|1.00000000|  FAILED  

real	51m33.849s
user	47m58.412s
sys	3m29.680s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xca721fae
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xca721fae
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +2791  p =  7e-1321    FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+549.5  p =  7.3e-260   FAIL !!!!!!    
  BCFN(2+2,13-3,T)                  R=+299.4  p =  1.7e-141   FAIL !!!!!     
  BCFN(2+3,13-3,T)                  R=+313.4  p =  4.0e-148   FAIL !!!!!     
  BCFN(2+4,13-4,T)                  R=+485.1  p =  7.0e-212   FAIL !!!!!!    
  BCFN(2+5,13-5,T)                  R=+371.1  p =  1.8e-145   FAIL !!!!!     
  BCFN(2+6,13-5,T)                  R=+384.5  p =  1.1e-150   FAIL !!!!!     
  BCFN(2+7,13-6,T)                  R=+580.6  p =  2.8e-199   FAIL !!!!!!    
  BCFN(2+8,13-6,T)                  R=+448.8  p =  3.9e-154   FAIL !!!!!     
  BCFN(2+9,13-7,T)                  R= +25.0  p =  3.6e-8   very suspicious  
  BCFN(2+11,13-8,T)                 R= +19.4  p =  7.1e-6   unusual          
  DC6-9x1Bytes-1                    R= +3275  p =  1e-2011    FAIL !!!!!!!!  
  Gap-16:A                          R=+527211 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+1978494 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -64.2  p =1-1.0e-58    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= -64.4  p =1-7.0e-59    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= -62.8  p =1-2.1e-57    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= -46.6  p =1-3.1e-47    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= -31.8  p =1-4.7e-31    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -32.0  p =1-3.3e-31    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -23.0  p =1-6.7e-21    FAIL !         
  FPF-14+6/16:(7,14-4)              R= -15.1  p =1-2.2e-15    FAIL           
  FPF-14+6/16:(8,14-5)              R= -11.9  p =1-4.7e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(9,14-5)              R= -11.3  p =1-1.9e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(10,14-6)             R=  -7.4  p =1-1.1e-7   suspicious       
  FPF-14+6/16:(11,14-7)             R=  -6.1  p =1-2.6e-6   unusual          
  FPF-14+6/16:all                   R=-132.6  p =1-4.3e-130   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +4112  p =  1e-1536    FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=  -2.5  p =1-1.3e-4   mildly suspicious
  BRank(12):512(2)                  R=+794.5  p~=  3.4e-240   FAIL !!!!!!    
  BRank(12):768(1)                  R=+734.0  p~=  5.5e-222   FAIL !!!!!!    
  BRank(12):1K(2)                   R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+46826  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+57953  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+42739  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+42560  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+50621  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+33413  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+33064  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+12797  p =  8e-3850    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R= +8217  p =  2e-2086    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +8102  p =  3e-2057    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R= +8780  p =  5e-1974    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +4382  p =  1.1e-985   FAIL !!!!!!!   
  [Low8/32]DC6-9x1Bytes-1           R=+282008 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+746595 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+3027731 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+489125 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+345874 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+244585 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+144976 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+102526 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+72515  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+51301  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+25942  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+25574  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+10596  p =  6e-8433    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+663327 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+133375935138 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +4111  p =  2e-3233    FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +1124  p~=  2.2e-598   FAIL !!!!!!!   
  [Low8/32]BRank(12):256(2)         R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+12150  p~=  1e-3658    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+11713  p~=  5e-3527    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+20539  p~=  6e-6184    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+566057 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+390178 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+203559 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+104928 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+65226  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+39325  p =  4e-9981    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+19863  p =  7e-5042    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11499  p =  7e-2585    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5769  p =  1e-1297    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+224119 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223042 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888480 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+227094 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+289115 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+370854 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+265393 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 12 test result(s) without anomalies


real	0m2.901s
user	0m2.740s
sys	0m0.156s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbff42994
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbff42994
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +2761  p =  1e-1306    FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+507.8  p =  3.7e-240   FAIL !!!!!!    
  BCFN(2+2,13-3,T)                  R=+284.5  p =  1.8e-134   FAIL !!!!!     
  BCFN(2+3,13-3,T)                  R=+315.8  p =  3.0e-149   FAIL !!!!!     
  BCFN(2+4,13-4,T)                  R=+500.1  p =  2.0e-218   FAIL !!!!!!    
  BCFN(2+5,13-5,T)                  R=+352.5  p =  3.5e-138   FAIL !!!!!     
  BCFN(2+6,13-5,T)                  R=+353.4  p =  1.6e-138   FAIL !!!!!     
  BCFN(2+7,13-6,T)                  R=+484.5  p =  2.4e-166   FAIL !!!!!     
  BCFN(2+8,13-6,T)                  R= +1988  p =  3.0e-681   FAIL !!!!!!!   
  BCFN(2+9,13-7,T)                  R= +20.9  p =  6.2e-7   suspicious       
  BCFN(2+10,13-8,T)                 R= +16.7  p =  3.4e-5   unusual          
  BCFN(2+12,13-9,T)                 R= +20.5  p =  1.0e-5   unusual          
  DC6-9x1Bytes-1                    R= +3269  p =  3e-2008    FAIL !!!!!!!!  
  Gap-16:A                          R=+527138 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+1978322 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -64.3  p =1-9.1e-59    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= -63.8  p =1-2.4e-58    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= -63.7  p =1-3.2e-58    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= -46.7  p =1-2.1e-47    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= -32.2  p =1-2.0e-31    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -32.0  p =1-3.0e-31    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -22.9  p =1-7.4e-21    FAIL !         
  FPF-14+6/16:(7,14-4)              R= -16.6  p =1-4.9e-17    FAIL !         
  FPF-14+6/16:(8,14-5)              R= -12.5  p =1-1.1e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(9,14-5)              R= -10.9  p =1-5.2e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(10,14-6)             R=  -7.7  p =1-5.5e-8   suspicious       
  FPF-14+6/16:(11,14-7)             R=  -5.9  p =1-4.6e-6   unusual          
  FPF-14+6/16:all                   R=-133.2  p =1-1.0e-130   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +4154  p =  3e-1552    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+794.5  p~=  3.4e-240   FAIL !!!!!!    
  BRank(12):768(1)                  R=+734.0  p~=  5.5e-222   FAIL !!!!!!    
  BRank(12):1K(2)                   R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+46826  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+57953  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+42739  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+42561  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+50621  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+39453  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+67523  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+14943  p =  2e-4495    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R= +8217  p =  2e-2086    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+12133  p =  4e-3080    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R= +8780  p =  5e-1974    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +4382  p =  1.1e-985   FAIL !!!!!!!   
  [Low8/32]DC6-9x1Bytes-1           R=+282008 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+746595 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+3027731 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+489125 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+345874 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+244585 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+144976 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+102526 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+72515  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+51301  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+25942  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+25574  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+10596  p =  6e-8433    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+663327 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+133375932089 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +4111  p =  2e-3233    FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +1124  p~=  2.2e-598   FAIL !!!!!!!   
  [Low8/32]BRank(12):256(2)         R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+12150  p~=  1e-3658    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+11713  p~=  5e-3527    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+20539  p~=  6e-6184    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+566057 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+390178 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+203559 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+104928 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+65226  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+39325  p =  4e-9981    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+19863  p =  7e-5042    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11499  p =  7e-2585    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5769  p =  1e-1297    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+224119 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223042 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888480 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+227094 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+289115 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+370854 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+265393 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 12 test result(s) without anomalies


real	0m2.831s
user	0m2.740s
sys	0m0.084s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x939e06a4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x939e06a4
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +2807  p =  3e-1328    FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+530.5  p =  6.7e-251   FAIL !!!!!!    
  BCFN(2+2,13-3,T)                  R=+282.0  p =  2.8e-133   FAIL !!!!!     
  BCFN(2+3,13-3,T)                  R=+327.6  p =  7.8e-155   FAIL !!!!!     
  BCFN(2+4,13-4,T)                  R=+510.6  p =  5.2e-223   FAIL !!!!!!    
  BCFN(2+5,13-5,T)                  R=+365.8  p =  2.2e-143   FAIL !!!!!     
  BCFN(2+6,13-5,T)                  R=+341.3  p =  8.6e-134   FAIL !!!!!     
  BCFN(2+7,13-6,T)                  R=+535.5  p =  7.9e-184   FAIL !!!!!!    
  BCFN(2+8,13-6,T)                  R= +1908  p =  5.6e-654   FAIL !!!!!!!   
  BCFN(2+9,13-7,T)                  R= +19.9  p =  1.2e-6   mildly suspicious
  BCFN(2+11,13-8,T)                 R= +34.8  p =  9.1e-10  very suspicious  
  BCFN(2+12,13-9,T)                 R= +93.2  p =  4.6e-22    FAIL !!        
  DC6-9x1Bytes-1                    R= +3279  p =  8e-2014    FAIL !!!!!!!!  
  Gap-16:A                          R=+527036 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+1977944 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -65.4  p =1-8.5e-60    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= -64.3  p =1-8.4e-59    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= -62.9  p =1-1.5e-57    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= -45.2  p =1-8.7e-46    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= -31.7  p =1-5.5e-31    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -31.8  p =1-4.3e-31    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -21.6  p =1-1.3e-19    FAIL !         
  FPF-14+6/16:(7,14-4)              R= -16.1  p =1-1.6e-16    FAIL !         
  FPF-14+6/16:(8,14-5)              R= -11.3  p =1-2.1e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(9,14-5)              R= -11.8  p =1-5.3e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(10,14-6)             R=  -7.3  p =1-1.4e-7   suspicious       
  FPF-14+6/16:all                   R=-132.4  p =1-5.6e-130   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +4100  p =  3e-1532    FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=  -2.6  p =1-7.2e-5   mildly suspicious
  BRank(12):512(2)                  R=+794.5  p~=  3.4e-240   FAIL !!!!!!    
  BRank(12):768(1)                  R=+734.0  p~=  5.5e-222   FAIL !!!!!!    
  BRank(12):1K(2)                   R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+46826  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+57953  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+42740  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+42561  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+50621  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+39453  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+67522  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+14943  p =  3e-4495    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+11146  p =  1e-2829    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+12224  p =  2e-3103    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R= +8780  p =  5e-1974    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +4382  p =  1.1e-985   FAIL !!!!!!!   
  [Low8/32]DC6-9x1Bytes-1           R=+282008 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+746595 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+3027731 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+489125 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+345874 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+244585 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+144976 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+102526 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+72515  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+51301  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+25942  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+25574  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+10596  p =  6e-8433    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+663327 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+133375932089 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +4111  p =  2e-3233    FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +1124  p~=  2.2e-598   FAIL !!!!!!!   
  [Low8/32]BRank(12):256(2)         R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+12150  p~=  1e-3658    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+11713  p~=  5e-3527    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+20539  p~=  6e-6184    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+566057 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+390178 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+203559 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+104928 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+65226  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+39325  p =  4e-9981    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+19863  p =  7e-5042    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11499  p =  7e-2585    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5769  p =  1e-1297    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+224119 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223042 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888480 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+227094 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+289115 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+370854 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+265393 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 12 test result(s) without anomalies


real	0m2.842s
user	0m2.732s
sys	0m0.096s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe5b79ba0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe5b79ba0
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +2789  p =  7e-1320    FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+470.6  p =  1.5e-222   FAIL !!!!!!    
  BCFN(2+2,13-3,T)                  R=+303.9  p =  1.2e-143   FAIL !!!!!     
  BCFN(2+3,13-3,T)                  R=+320.6  p =  1.6e-151   FAIL !!!!!     
  BCFN(2+4,13-4,T)                  R=+529.3  p =  3.4e-231   FAIL !!!!!!    
  BCFN(2+5,13-5,T)                  R=+387.8  p =  5.4e-152   FAIL !!!!!     
  BCFN(2+6,13-5,T)                  R=+394.5  p =  1.2e-154   FAIL !!!!!     
  BCFN(2+7,13-6,T)                  R=+488.7  p =  8.4e-168   FAIL !!!!!     
  BCFN(2+8,13-6,T)                  R= +51.2  p =  5.8e-18    FAIL !         
  BCFN(2+9,13-7,T)                  R= +23.5  p =  1.0e-7   suspicious       
  BCFN(2+12,13-9,T)                 R= +27.6  p =  2.6e-7   mildly suspicious
  DC6-9x1Bytes-1                    R= +3291  p =  1e-2021    FAIL !!!!!!!!  
  Gap-16:A                          R=+527097 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+1978071 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R= -65.1  p =1-1.4e-59    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= -64.2  p =1-9.8e-59    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= -64.3  p =1-8.3e-59    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= -46.4  p =1-5.2e-47    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= -31.2  p =1-2.0e-30    FAIL !!!       
  FPF-14+6/16:(5,14-2)              R= -33.2  p =1-2.0e-32    FAIL !!!       
  FPF-14+6/16:(6,14-3)              R= -22.5  p =1-1.9e-20    FAIL !         
  FPF-14+6/16:(7,14-4)              R= -16.1  p =1-1.7e-16    FAIL !         
  FPF-14+6/16:(8,14-5)              R= -11.9  p =1-3.9e-12   VERY SUSPICIOUS 
  FPF-14+6/16:(9,14-5)              R= -11.4  p =1-1.3e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(10,14-6)             R=  -8.3  p =1-1.0e-8   very suspicious  
  FPF-14+6/16:(11,14-7)             R=  -5.6  p =1-1.0e-5   unusual          
  FPF-14+6/16:all                   R=-133.8  p =1-2.7e-131   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +4192  p =  1e-1566    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+794.5  p~=  3.4e-240   FAIL !!!!!!    
  BRank(12):768(1)                  R=+734.0  p~=  5.5e-222   FAIL !!!!!!    
  BRank(12):1K(2)                   R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+46826  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+57953  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+42740  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+42561  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+50621  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+39453  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+23279  p =  8e-7973    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+13435  p =  8e-4042    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R=+11340  p =  5e-2879    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+12133  p =  4e-3080    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-9,T)        R= +8780  p =  5e-1974    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R= +4382  p =  1.1e-985   FAIL !!!!!!!   
  [Low8/32]DC6-9x1Bytes-1           R=+282008 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+746595 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+3027731 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+489125 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+345874 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+244585 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+144976 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+102526 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+72515  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+51301  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R=+25942  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+25574  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+10596  p =  6e-8433    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +4284  p =  4e-3083    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+663327 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+133375931716 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R= +4111  p =  2e-3233    FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +1124  p~=  2.2e-598   FAIL !!!!!!!   
  [Low8/32]BRank(12):256(2)         R= +3869  p~=  8e-1166    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +3662  p~=  2e-1103    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+12150  p~=  1e-3658    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+11713  p~=  5e-3527    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+20539  p~=  6e-6184    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+566057 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+390178 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+203559 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+104928 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R=+65226  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R=+39325  p =  4e-9981    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+19863  p =  7e-5042    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-9,T)         R=+11499  p =  7e-2585    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R= +5769  p =  1e-1297    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+224119 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+223042 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+888480 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+227094 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+289115 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+370854 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+265393 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  
  ...and 13 test result(s) without anomalies


real	0m2.836s
user	0m2.740s
sys	0m0.088s
*/
