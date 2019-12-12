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
/// @created on 2019-12-08 02:59:03 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 6658abc9-f6c4-43c8-b0dc-58d9db250f70                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <random>
#include "rnd_base.h"

class TRnd : public std::knuth_b {
public:
    typedef RndBase::TYPE_RESULT TYPE_RESULT;

    TRnd( std::knuth_b::result_type __sd) : std::knuth_b(__sd) {
    }

    static TYPE_RESULT max() {
        return std::numeric_limits<TYPE_RESULT>::max();
    }

    TYPE_RESULT operator()() {
        return static_cast<TYPE_RESULT>( std::knuth_b::operator ()() );
    }

};

/* TEST00
time ./MRndCPP 
414632433
529571054
23691585
633705974
277539866
1155212522
9223372026443545897

real	3m0.788s
user	3m0.316s
sys	0m0.048s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.02e+07  |1967801164|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.48123833|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.58285348|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.00000000|  FAILED  
    diehard_rank_6x8|   0|    100000|     100|0.22694702|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.00000000|  FAILED  
        diehard_opso|   0|   2097152|     100|0.69079958|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.44642873|  PASSED  
         diehard_dna|   0|   2097152|     100|0.00000000|  FAILED  
diehard_count_1s_str|   0|    256000|     100|0.00000000|  FAILED  
diehard_count_1s_byt|   0|    256000|     100|0.00000000|  FAILED  
 diehard_parking_lot|   0|     12000|     100|0.00000000|  FAILED  
    diehard_2dsphere|   2|      8000|     100|0.00000000|  FAILED  
    diehard_3dsphere|   3|      4000|     100|0.00000000|  FAILED  
     diehard_squeeze|   0|    100000|     100|0.00000000|  FAILED  
        diehard_sums|   0|       100|     100|0.00000000|  FAILED  
        diehard_runs|   0|    100000|     100|0.21635573|  PASSED  
        diehard_runs|   0|    100000|     100|0.30759614|  PASSED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
       diehard_craps|   0|    200000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.80858483|  PASSED  
         sts_monobit|   1|    100000|     100|0.00000000|  FAILED  
            sts_runs|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   1|    100000|     100|0.00000000|  FAILED  
          sts_serial|   2|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.00000000|  FAILED  
          sts_serial|   3|    100000|     100|0.58199045|  PASSED  
          sts_serial|   4|    100000|     100|0.00000000|  FAILED  
          sts_serial|   4|    100000|     100|0.61599641|  PASSED  
          sts_serial|   5|    100000|     100|0.00000000|  FAILED  
          sts_serial|   5|    100000|     100|0.33572869|  PASSED  
          sts_serial|   6|    100000|     100|0.00000000|  FAILED  
          sts_serial|   6|    100000|     100|0.97708257|  PASSED  
          sts_serial|   7|    100000|     100|0.00000000|  FAILED  
          sts_serial|   7|    100000|     100|0.37138744|  PASSED  
          sts_serial|   8|    100000|     100|0.00000000|  FAILED  
          sts_serial|   8|    100000|     100|0.22325515|  PASSED  
          sts_serial|   9|    100000|     100|0.00000000|  FAILED  
          sts_serial|   9|    100000|     100|0.40458764|  PASSED  
          sts_serial|  10|    100000|     100|0.00000000|  FAILED  
          sts_serial|  10|    100000|     100|0.20771275|  PASSED  
          sts_serial|  11|    100000|     100|0.00000000|  FAILED  
          sts_serial|  11|    100000|     100|0.43849957|  PASSED  
          sts_serial|  12|    100000|     100|0.00000000|  FAILED  
          sts_serial|  12|    100000|     100|0.03581485|  PASSED  
          sts_serial|  13|    100000|     100|0.00000000|  FAILED  
          sts_serial|  13|    100000|     100|0.93975148|  PASSED  
          sts_serial|  14|    100000|     100|0.00000000|  FAILED  
          sts_serial|  14|    100000|     100|0.49405210|  PASSED  
          sts_serial|  15|    100000|     100|0.00000000|  FAILED  
          sts_serial|  15|    100000|     100|0.99285678|  PASSED  
          sts_serial|  16|    100000|     100|0.00000000|  FAILED  
          sts_serial|  16|    100000|     100|0.37710504|  PASSED  
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
    rgb_permutations|   2|    100000|     100|0.25944730|  PASSED  
    rgb_permutations|   3|    100000|     100|0.64536276|  PASSED  
    rgb_permutations|   4|    100000|     100|0.95023827|  PASSED  
    rgb_permutations|   5|    100000|     100|0.75919912|  PASSED  
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
./test.sh: line 7:  9072 Broken pipe             ./MRndCPP
      9073 Segmentation fault      (core dumped) | dieharder -g200 -a -k2 > test.txt

real	96m58.322s
user	93m16.520s
sys	3m24.852s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9917360
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9917360
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+207869 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+210831 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+210112 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+205635 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+247877 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+279026 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+226732 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+195646 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+111887 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+69277  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+41033  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20468  p =  1e-5195    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11745  p =  3e-2640    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5857  p =  4e-1317    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+21744  p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R= +9759  p =  9e-8322    FAIL !!!!!!!!  
  Gap-16:B                          R=+48317  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+34290  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+17120  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+12060  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R= +8581  p =  4e-7505    FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R= +4295  p =  4e-3756    FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R= +3029  p =  9e-2655    FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R= +2156  p =  1e-1761    FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R= +1506  p =  5e-1248    FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+772.7  p =  1.9e-640   FAIL !!!!!!!   
  FPF-14+6/16:(10,14-6)             R=+578.0  p =  2.2e-442   FAIL !!!!!!!   
  FPF-14+6/16:(11,14-7)             R=+376.9  p =  8.3e-300   FAIL !!!!!!    
  FPF-14+6/16:(12,14-8)             R=+250.7  p =  1.8e-180   FAIL !!!!!!    
  FPF-14+6/16:(13,14-8)             R=+138.2  p =  1.8e-99    FAIL !!!!!     
  FPF-14+6/16:(14,14-9)             R= +95.9  p =  1.1e-60    FAIL !!!!      
  FPF-14+6/16:all                   R=+33098  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+406567541 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R= +82.8  p =  4.6e-70    FAIL !!!!      
  BRank(12):128(4)                  R= +29.5  p~=  1.8e-16    FAIL !         
  BRank(12):256(4)                  R=+137.8  p~=  4.0e-74    FAIL !!!!      
  BRank(12):384(1)                  R=+152.8  p~=  5.1e-47    FAIL !!!       
  BRank(12):512(2)                  R=+337.8  p~=  1.0e-102   FAIL !!!!!     
  BRank(12):768(1)                  R=+411.1  p~=  8.8e-125   FAIL !!!!!     
  BRank(12):1K(2)                   R=+824.9  p~=  2.3e-249   FAIL !!!!!!    
  BRank(12):1536(1)                 R=+927.7  p~=  2.6e-280   FAIL !!!!!!    
  ...and 76 test result(s) without anomalies


real	0m3.511s
user	0m3.380s
sys	0m0.112s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x53bea504
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x53bea504
length= 128 megabytes (2^27 bytes), time= 3.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=+207361 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-3,T)                  R=+210994 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+210895 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+206123 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-4,T)                  R=+248797 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-5,T)                  R=+281382 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+227513 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-6,T)                  R=+195538 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+111788 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-7,T)                  R=+69242  p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-8,T)                 R=+41033  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+20468  p =  1e-5195    FAIL !!!!!!!!  
  BCFN(2+12,13-9,T)                 R=+11745  p =  3e-2640    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R= +5857  p =  4e-1317    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+21793  p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R= +9759  p =  5e-8322    FAIL !!!!!!!!  
  Gap-16:B                          R=+48335  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(1,14-0)              R=+34264  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(2,14-0)              R=+17135  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(3,14-1)              R=+12137  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(4,14-2)              R= +8594  p =  2e-7516    FAIL !!!!!!!!  
  FPF-14+6/16:(5,14-2)              R= +4286  p =  2e-3748    FAIL !!!!!!!!  
  FPF-14+6/16:(6,14-3)              R= +3013  p =  2e-2640    FAIL !!!!!!!!  
  FPF-14+6/16:(7,14-4)              R= +2141  p =  2e-1749    FAIL !!!!!!!!  
  FPF-14+6/16:(8,14-5)              R= +1540  p =  5e-1277    FAIL !!!!!!!!  
  FPF-14+6/16:(9,14-5)              R=+765.6  p =  1.4e-634   FAIL !!!!!!!   
  FPF-14+6/16:(10,14-6)             R=+541.6  p =  1.5e-414   FAIL !!!!!!!   
  FPF-14+6/16:(11,14-7)             R=+373.9  p =  1.9e-297   FAIL !!!!!!    
  FPF-14+6/16:(12,14-8)             R=+258.5  p =  4.4e-186   FAIL !!!!!!    
  FPF-14+6/16:(13,14-8)             R=+127.7  p =  6.2e-92    FAIL !!!!!     
  FPF-14+6/16:(14,14-9)             R= +85.1  p =  7.7e-54    FAIL !!!!      
  FPF-14+6/16:all                   R=+33114  p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all2                  R=+406676636 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R= +73.6  p =  2.7e-62    FAIL !!!!      
  BRank(12):128(4)                  R= +34.5  p~=  3.7e-19    FAIL !         
  BRank(12):256(4)                  R=+137.8  p~=  4.0e-74    FAIL !!!!      
  BRank(12):384(1)                  R=+152.8  p~=  5.1e-47    FAIL !!!       
  BRank(12):512(2)                  R=+337.8  p~=  1.0e-102   FAIL !!!!!     
  BRank(12):768(1)                  R=+411.1  p~=  8.8e-125   FAIL !!!!!     
  BRank(12):1K(2)                   R=+824.9  p~=  2.3e-249   FAIL !!!!!!    
  BRank(12):1536(1)                 R=+927.7  p~=  2.6e-280   FAIL !!!!!!    
  ...and 76 test result(s) without anomalies


real	0m3.603s
user	0m3.444s
sys	0m0.136s
*/
