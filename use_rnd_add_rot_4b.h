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
2687344810
1599707969
475401730
2423414910
1404392874
1864407927
542542912703503658

real	0m33.774s
user	0m33.600s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.24e+07  | 505439132|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.00000000|  FAILED  
      diehard_operm5|   0|   1000000|     100|0.00000000|  FAILED  
  diehard_rank_32x32|   0|     40000|     100|0.00000000|  FAILED  
    diehard_rank_6x8|   0|    100000|     100|0.00000000|  FAILED  
   diehard_bitstream|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_opso|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_oqso|   0|   2097152|     100|0.00000000|  FAILED  
         diehard_dna|   0|   2097152|     100|0.00000000|  FAILED  
diehard_count_1s_str|   0|    256000|     100|0.00000000|  FAILED  
diehard_count_1s_byt|   0|    256000|     100|0.00000000|  FAILED  
 diehard_parking_lot|   0|     12000|     100|0.00000000|  FAILED  
    diehard_2dsphere|   2|      8000|     100|0.00000000|  FAILED  
    diehard_3dsphere|   3|      4000|     100|0.00000000|  FAILED  
     diehard_squeeze|   0|    100000|     100|0.00000000|  FAILED  
        diehard_sums|   0|       100|     100|0.00000000|  FAILED  
        diehard_runs|   0|    100000|     100|0.00000000|  FAILED  
        diehard_runs|   0|    100000|     100|0.00000000|  FAILED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.00000000|  FAILED  
            sts_runs|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   1|    100000|     100|0.00000000|  FAILED  
          sts_serial|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
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
         rgb_bitdist|   7|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   8|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|   9|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|  10|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|  11|    100000|     100|0.00000000|  FAILED  
         rgb_bitdist|  12|    100000|     100|0.00000000|  FAILED  
rgb_minimum_distance|   2|     10000|    1000|0.00000000|  FAILED  
rgb_minimum_distance|   3|     10000|    1000|0.00000000|  FAILED  
rgb_minimum_distance|   4|     10000|    1000|0.00000000|  FAILED  
rgb_minimum_distance|   5|     10000|    1000|0.00000000|  FAILED  
    rgb_permutations|   2|    100000|     100|0.00000000|  FAILED  
    rgb_permutations|   3|    100000|     100|0.00000000|  FAILED  
    rgb_permutations|   4|    100000|     100|0.00000000|  FAILED  
    rgb_permutations|   5|    100000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   0|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   1|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   2|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   3|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   4|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   5|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   6|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   7|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   8|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|   9|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  10|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  11|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  12|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  13|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  14|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  15|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  16|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  17|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  18|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  19|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  20|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  21|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  22|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  23|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  24|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  25|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  26|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  27|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  28|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  29|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  30|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  31|   1000000|     100|0.00000000|  FAILED  
      rgb_lagged_sum|  32|   1000000|     100|0.00000000|  FAILED  
./test.sh: line 7: 17929 Broken pipe             ./MRndCPP
     17930 Terminated              | dieharder -g200 -a -k2 > test.txt

real	1140m34.639s
user	1134m57.744s
sys	4m16.804s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x15755d3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x15755d3
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+5622259 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+3057206 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+1634370 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+856243 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+538436 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+320786 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+147593 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+74057  p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+27658  p =  2e-9472    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+11617  p =  5e-3495    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +7853  p =  5e-1994    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R= +5226  p =  2e-1327    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +3094  p =  2.9e-696   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R= +1723  p =  2.4e-388   FAIL !!!!!!!   
  DC6-9x1Bytes-1                    R=+1816928 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+1873045 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+8467221 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+786014 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+462698 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+260042 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+196394 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+148880 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+73773  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+46257  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+29816  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+36658  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+38423  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+348.5  p =  9.0e-267   FAIL !!!!!!    
  FPF-14+6/16:(11,14-7)             R=+178.6  p =  5.4e-142   FAIL !!!!!     
  FPF-14+6/16:(12,14-8)             R= +82.4  p =  2.3e-59    FAIL !!!!      
  FPF-14+6/16:(13,14-8)             R= +36.1  p =  4.8e-26    FAIL !!        
  FPF-14+6/16:(14,14-9)             R= +38.2  p =  2.5e-24    FAIL !!        
  FPF-14+6/16:(15,14-10)            R= +28.0  p =  1.8e-15    FAIL           
  FPF-14+6/16:(16,14-11)            R= +12.6  p =  2.4e-6   unusual          
  FPF-14+6/16:all                   R=+868152 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+230807685878 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+23841  p = 0           FAIL !!!!!!!!  
  BRank(12):256(4)                  R= +5331  p~=  6e-2836    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+14828  p~=  1e-4464    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+31217  p~=  3e-9398    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+2039120 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1042091 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+632779 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+307040 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+141714 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+72571  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+28304  p =  1e-9693    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+11408  p =  5e-3432    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R= +5563  p =  9e-1413    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +3025  p =  8.8e-769   FAIL !!!!!!!   
  [Low8/32]BCFN(2+10,13-9,T)        R= +1439  p =  1.8e-324   FAIL !!!!!!    
  [Low8/32]BCFN(2+11,13-9,T)        R=+498.4  p =  4.1e-113   FAIL !!!!!     
  [Low8/32]DC6-9x1Bytes-1           R=+901660 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+595161 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+2886287 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+321000 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+225018 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+155626 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+96600  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+73132  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+31548  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+32935  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +9280  p =  2e-7693    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+224.1  p =  1.5e-171   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+159.4  p =  1.1e-126   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +83.2  p =  7.1e-60    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +48.7  p =  4.6e-35    FAIL !!!       
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+105.1  p =  1.7e-66    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+205.0  p =  1.2e-109   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(14,14-11)   R=+464.1  p =  4.1e-203   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(15,14-11)   R=+700.9  p =  2.6e-306   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:all          R=+427847 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+46960837780 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+141167 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +2283  p~=  3e-1215    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R= +2132  p~=  7.6e-643   FAIL !!!!!!!   
  [Low8/32]BRank(12):768(1)         R= +3080  p~=  2.4e-928   FAIL !!!!!!!   
  [Low8/32]BRank(12):1K(1)          R=+19936  p~=  1e-6002    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+354366 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+159228 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+66612  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+24606  p =  3e-8427    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +8136  p =  7e-2448    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +1977  p =  9.4e-503   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R=+227.8  p =  9.4e-59    FAIL !!!!      
  [Low1/32]DC6-9x1Bytes-1           R=+283565 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+150138 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+552839 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+154768 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+681.1  p =  9.7e-597   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+505.8  p =  3.1e-413   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+333.3  p =  3.3e-276   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+343.9  p =  6.1e-285   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+206.1  p =  1.0e-157   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(6,14-7)     R=+162.0  p =  9.9e-129   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(7,14-8)     R=+188.2  p =  1.7e-135   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(8,14-8)     R=+182.2  p =  3.4e-131   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(9,14-9)     R=+239.5  p =  4.2e-151   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(10,14-10)   R=+280.8  p =  6.1e-150   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(11,14-11)   R=+353.5  p =  6.3e-155   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(12,14-11)   R=+309.7  p =  7.7e-136   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all          R=+98393  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+6024666486 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+2117199 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2437  p~=  9.8e-735   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +4975  p~=  1e-1498    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +9000  p~=  1e-2710    FAIL !!!!!!!!  
  ...and 10 test result(s) without anomalies


real	0m3.034s
user	0m2.680s
sys	0m0.316s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc56aec80
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc56aec80
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+5616490 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+3049647 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+1634078 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+855181 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+538695 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+320702 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+148057 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+74279  p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+27727  p =  4e-9496    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+11669  p =  1e-3510    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +7944  p =  3e-2017    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R= +5365  p =  1e-1362    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +3184  p =  1.2e-716   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R= +1778  p =  1.3e-400   FAIL !!!!!!!   
  DC6-9x1Bytes-1                    R=+1818338 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+1873589 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+8469231 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+787863 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+463631 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+260550 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+196757 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+149230 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+73900  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+46418  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+29757  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+36674  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+38496  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+408.4  p =  1.4e-312   FAIL !!!!!!    
  FPF-14+6/16:(11,14-7)             R=+189.3  p =  1.6e-150   FAIL !!!!!     
  FPF-14+6/16:(12,14-8)             R= +95.3  p =  1.3e-68    FAIL !!!!      
  FPF-14+6/16:(13,14-8)             R= +49.2  p =  1.9e-35    FAIL !!!       
  FPF-14+6/16:(14,14-9)             R= +43.8  p =  7.5e-28    FAIL !!        
  FPF-14+6/16:(15,14-10)            R= +23.8  p =  3.0e-13    FAIL           
  FPF-14+6/16:all                   R=+870003 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+231835586422 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+23439  p = 0           FAIL !!!!!!!!  
  BRank(12):256(4)                  R= +5329  p~=  2e-2835    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+14828  p~=  1e-4464    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+31217  p~=  3e-9398    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+2040464 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1043135 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+633620 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+306521 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+141892 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+72823  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+28444  p =  1e-9741    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+11599  p =  2e-3489    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R= +5630  p =  8e-1430    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +3096  p =  1.3e-786   FAIL !!!!!!!   
  [Low8/32]BCFN(2+10,13-9,T)        R= +1482  p =  3.4e-334   FAIL !!!!!!!   
  [Low8/32]BCFN(2+11,13-9,T)        R=+480.5  p =  4.3e-109   FAIL !!!!!     
  [Low8/32]DC6-9x1Bytes-1           R=+901394 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+594760 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+2885248 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+321486 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+225339 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+155912 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+96736  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+73257  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+31611  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+33021  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +9239  p =  9e-7660    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+216.2  p =  1.6e-165   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+156.3  p =  2.9e-124   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +71.0  p =  4.0e-51    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +48.3  p =  9.2e-35    FAIL !!!       
  [Low8/32]FPF-14+6/16:(12,14-9)    R=+104.0  p =  8.7e-66    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+174.0  p =  3.8e-93    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(14,14-11)   R=+399.3  p =  6.8e-175   FAIL !!!!!!    
  [Low8/32]FPF-14+6/16:(15,14-11)   R=+897.5  p =  5.0e-392   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:all          R=+428503 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+47105291758 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+140995 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +2285  p~=  7e-1216    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R= +2134  p~=  2.2e-643   FAIL !!!!!!!   
  [Low8/32]BRank(12):768(1)         R= +3080  p~=  2.4e-928   FAIL !!!!!!!   
  [Low8/32]BRank(12):1K(1)          R=+19936  p~=  1e-6002    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+353066 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+159224 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+67635  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+24756  p =  1e-8478    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +8380  p =  4e-2521    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +1899  p =  6.8e-483   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R=+226.2  p =  2.3e-58    FAIL !!!!      
  [Low1/32]DC6-9x1Bytes-1           R=+283630 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+150081 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+552548 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+154745 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+675.3  p =  1.0e-591   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+470.5  p =  2.3e-384   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+357.3  p =  4.6e-296   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+281.3  p =  4.3e-233   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+266.2  p =  9.5e-204   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(6,14-7)     R=+196.2  p =  5.9e-156   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(7,14-8)     R=+136.7  p =  2.1e-98    FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(8,14-8)     R=+170.2  p =  1.6e-122   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(9,14-9)     R=+210.5  p =  8.0e-133   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(10,14-10)   R=+309.1  p =  5.2e-165   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(11,14-11)   R=+348.8  p =  7.5e-153   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(12,14-11)   R=+388.8  p =  2.7e-170   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:all          R=+98382  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+6022839604 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+2117332 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2437  p~=  9.8e-735   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +4975  p~=  1e-1498    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +9000  p~=  1e-2710    FAIL !!!!!!!!  
  ...and 11 test result(s) without anomalies


real	0m2.787s
user	0m2.672s
sys	0m0.100s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x532836c9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x532836c9
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+5605861 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+3060145 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+1637480 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+855399 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+538054 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+319742 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+148144 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+75569  p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+28053  p =  7e-9608    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+11649  p =  2e-3504    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +7854  p =  3e-1994    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R= +5330  p =  9e-1354    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +3148  p =  1.9e-708   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R= +1768  p =  2.0e-398   FAIL !!!!!!!   
  DC6-9x1Bytes-1                    R=+1813722 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+1874049 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+8475398 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+791147 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+465577 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+261702 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+197678 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+149840 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+74212  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+46651  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+30085  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+36993  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+38735  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+429.1  p =  1.9e-328   FAIL !!!!!!    
  FPF-14+6/16:(11,14-7)             R=+234.3  p =  2.7e-186   FAIL !!!!!!    
  FPF-14+6/16:(12,14-8)             R= +79.5  p =  3.2e-57    FAIL !!!!      
  FPF-14+6/16:(13,14-8)             R= +37.1  p =  9.8e-27    FAIL !!        
  FPF-14+6/16:(14,14-9)             R= +30.5  p =  1.6e-19    FAIL !         
  FPF-14+6/16:(15,14-10)            R= +23.2  p =  6.3e-13   VERY SUSPICIOUS 
  FPF-14+6/16:all                   R=+873764 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+233798522168 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+23923  p = 0           FAIL !!!!!!!!  
  BRank(12):256(4)                  R= +5331  p~=  6e-2836    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+14828  p~=  1e-4464    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+31217  p~=  3e-9398    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+2043379 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1042918 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+631524 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+306016 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+141897 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+73959  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+28770  p =  3e-9853    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+11742  p =  2e-3532    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R= +5693  p =  1e-1445    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +3105  p =  4.9e-789   FAIL !!!!!!!   
  [Low8/32]BCFN(2+10,13-9,T)        R= +1411  p =  3.2e-318   FAIL !!!!!!    
  [Low8/32]BCFN(2+11,13-9,T)        R=+493.7  p =  4.6e-112   FAIL !!!!!     
  [Low8/32]DC6-9x1Bytes-1           R=+901385 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+595631 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+2888231 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+321062 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+225018 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+155772 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+96544  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+73093  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+31562  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+32912  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +9230  p =  7e-7652    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+210.4  p =  4.5e-161   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+151.8  p =  1.1e-120   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +63.9  p =  5.0e-46    FAIL !!!       
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +46.3  p =  2.2e-33    FAIL !!!       
  [Low8/32]FPF-14+6/16:(12,14-9)    R= +71.1  p =  4.7e-45    FAIL !!!       
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+180.1  p =  2.2e-96    FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(14,14-11)   R=+366.3  p =  1.8e-160   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(15,14-11)   R=+809.3  p =  1.4e-353   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:all          R=+427898 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+46977089549 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+141278 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +2273  p~=  1e-1209    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R= +2132  p~=  7.6e-643   FAIL !!!!!!!   
  [Low8/32]BRank(12):768(1)         R= +3080  p~=  2.4e-928   FAIL !!!!!!!   
  [Low8/32]BRank(12):1K(1)          R=+19936  p~=  1e-6002    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+352323 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+158933 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+69458  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+25897  p =  1e-8869    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +8921  p =  7e-2684    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +1996  p =  2.1e-507   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R=+255.1  p =  1.1e-65    FAIL !!!!      
  [Low1/32]DC6-9x1Bytes-1           R=+283647 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+150112 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+552684 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+154802 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+696.2  p =  5.9e-610   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+491.0  p =  4.2e-401   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+335.7  p =  3.8e-278   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+308.0  p =  3.3e-255   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+229.0  p =  2.9e-175   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(6,14-7)     R=+222.9  p =  3.1e-177   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(7,14-8)     R=+155.4  p =  7.2e-112   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(8,14-8)     R=+235.9  p =  8.4e-170   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(9,14-9)     R=+229.5  p =  8.3e-145   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(10,14-10)   R=+320.7  p =  3.5e-171   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(11,14-11)   R=+351.6  p =  4.5e-154   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(12,14-11)   R=+309.5  p =  9.7e-136   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all          R=+98434  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+6027281272 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+2117401 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2438  p~=  5.1e-735   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +4975  p~=  1e-1498    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +9000  p~=  1e-2710    FAIL !!!!!!!!  
  ...and 11 test result(s) without anomalies


real	0m2.899s
user	0m2.752s
sys	0m0.128s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf0ad7b33
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf0ad7b33
length= 128 megabytes (2^27 bytes), time= 2.1 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+5619148 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+3054403 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+1634440 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+854359 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+536599 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+317682 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+145906 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+73713  p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+27620  p =  1e-9459    FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+11487  p =  1e-3455    FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R= +7924  p =  6e-2012    FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R= +5265  p =  4e-1337    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R= +3149  p =  8.5e-709   FAIL !!!!!!!   
  BCFN(2+13,13-9,T)                 R= +1732  p =  2.6e-390   FAIL !!!!!!!   
  DC6-9x1Bytes-1                    R=+1819891 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+1874404 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+8473655 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+784416 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+461768 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+259519 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+196016 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R=+148587 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R=+73656  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R=+46182  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R=+29791  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R=+36622  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+38332  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(10,14-6)             R=+404.7  p =  9.8e-310   FAIL !!!!!!    
  FPF-14+6/16:(11,14-7)             R=+231.4  p =  5.3e-184   FAIL !!!!!!    
  FPF-14+6/16:(12,14-8)             R= +82.6  p =  1.8e-59    FAIL !!!!      
  FPF-14+6/16:(13,14-8)             R= +31.6  p =  8.2e-23    FAIL !!        
  FPF-14+6/16:(14,14-9)             R= +26.2  p =  8.5e-17    FAIL !         
  FPF-14+6/16:(15,14-10)            R= +25.4  p =  4.3e-14    FAIL           
  FPF-14+6/16:(16,14-11)            R= +12.0  p =  4.6e-6   unusual          
  FPF-14+6/16:all                   R=+866417 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+229877664840 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+23392  p = 0           FAIL !!!!!!!!  
  BRank(12):256(4)                  R= +5329  p~=  2e-2835    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+14827  p~=  1e-4464    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+31217  p~=  3e-9398    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-4,T)         R=+2042658 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-4,T)         R=+1042769 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-5,T)         R=+632383 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-5,T)         R=+305964 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+140731 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-6,T)         R=+72519  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+28081  p =  2e-9617    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-7,T)         R=+11474  p =  9e-3452    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-8,T)         R= +5616  p =  2e-1426    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R= +3043  p =  2.5e-773   FAIL !!!!!!!   
  [Low8/32]BCFN(2+10,13-9,T)        R= +1425  p =  2.4e-321   FAIL !!!!!!    
  [Low8/32]BCFN(2+11,13-9,T)        R=+495.2  p =  2.1e-112   FAIL !!!!!     
  [Low8/32]DC6-9x1Bytes-1           R=+902284 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+595065 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+2887464 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+321725 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(1,14-1)     R=+225519 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(2,14-2)     R=+155989 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(3,14-2)     R=+96665  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(4,14-3)     R=+73130  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(5,14-4)     R=+31651  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(6,14-5)     R=+32897  p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(7,14-5)     R= +9372  p =  8e-7770    FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(8,14-6)     R=+217.4  p =  2.2e-166   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(9,14-7)     R=+164.0  p =  2.5e-130   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(10,14-8)    R= +70.8  p =  5.5e-51    FAIL !!!!      
  [Low8/32]FPF-14+6/16:(11,14-8)    R= +53.9  p =  8.4e-39    FAIL !!!       
  [Low8/32]FPF-14+6/16:(12,14-9)    R= +74.8  p =  2.0e-47    FAIL !!!       
  [Low8/32]FPF-14+6/16:(13,14-10)   R=+204.9  p =  1.4e-109   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(14,14-11)   R=+367.6  p =  4.4e-161   FAIL !!!!!     
  [Low8/32]FPF-14+6/16:(15,14-11)   R= +1041  p =  1.1e-454   FAIL !!!!!!!   
  [Low8/32]FPF-14+6/16:all          R=+428731 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all2         R=+47160149670 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+140917 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +2295  p~=  3e-1221    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R= +2132  p~=  7.6e-643   FAIL !!!!!!!   
  [Low8/32]BRank(12):768(1)         R= +3080  p~=  2.4e-928   FAIL !!!!!!!   
  [Low8/32]BRank(12):1K(1)          R=+19936  p~=  1e-6002    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-6,T)         R=+353290 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-6,T)         R=+158817 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+65990  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+23749  p =  8e-8134    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-7,T)         R= +8023  p =  7e-2414    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-8,T)         R= +1718  p =  5.9e-437   FAIL !!!!!!!   
  [Low1/32]BCFN(2+6,13-8,T)         R=+217.7  p =  3.4e-56    FAIL !!!!      
  [Low1/32]DC6-9x1Bytes-1           R=+283647 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+150088 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+552752 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+154812 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(1,14-3)     R=+675.6  p =  6.4e-592   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(2,14-4)     R=+506.8  p =  4.5e-414   FAIL !!!!!!!   
  [Low1/32]FPF-14+6/16:(3,14-5)     R=+359.9  p =  3.3e-298   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(4,14-5)     R=+333.0  p =  5.9e-276   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(5,14-6)     R=+239.0  p =  6.5e-183   FAIL !!!!!!    
  [Low1/32]FPF-14+6/16:(6,14-7)     R=+211.8  p =  2.2e-168   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(7,14-8)     R=+164.6  p =  1.7e-118   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(8,14-8)     R=+187.8  p =  3.3e-135   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(9,14-9)     R=+246.0  p =  3.5e-155   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(10,14-10)   R=+275.1  p =  6.4e-147   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(11,14-11)   R=+331.5  p =  2.5e-145   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:(12,14-11)   R=+273.3  p =  6.0e-120   FAIL !!!!!     
  [Low1/32]FPF-14+6/16:all          R=+98451  p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all2         R=+6028088299 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+2117310 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +2437  p~=  1.7e-734   FAIL !!!!!!!   
  [Low1/32]BRank(12):384(1)         R= +4975  p~=  1e-1498    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R= +9000  p~=  1e-2710    FAIL !!!!!!!!  
  ...and 10 test result(s) without anomalies


real	0m2.786s
user	0m2.680s
sys	0m0.072s
*/
