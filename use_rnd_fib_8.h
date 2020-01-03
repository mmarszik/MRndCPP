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
/// @created on 2019-12-18 01:28:13 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token c46418c3-89f6-4e5c-bd9f-8b3315193078                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib8;
/* TEST00
time ./MRndCPP 
338165443
2707947203
317193923
1508376259
342359747
984088259
17555022180322902016

real	0m48.345s
user	0m48.296s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.24e+07  |2575193606|
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
./test.sh: line 7: 21823 Broken pipe             ./MRndCPP
     21824 Segmentation fault      (core dumped) | dieharder -g200 -a -k2 > test.txt

real	187m42.302s
user	183m59.620s
sys	3m29.712s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4f248c45
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4f248c45
length= 256 megabytes (2^28 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18344447 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9763951 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6558106 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3380804 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1727050 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116345 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709857 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357588 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222852 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111832 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68222  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+17941796 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683858 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26208094 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18897301 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all                   R=+20350980 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28710492 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897549 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138999 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087780 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076274 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691826 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351162 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2503284 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943655 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8553332 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5087749 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+5451169 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7545940 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1181228 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628706 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+407139 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209877 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107204 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868131 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354161 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690856 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090294 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+1181158 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1027871 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  


real	0m4.298s
user	0m4.072s
sys	0m0.220s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xaa17000d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xaa17000d
length= 256 megabytes (2^28 bytes), time= 3.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18344447 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9763951 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6558106 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3380804 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1727050 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116345 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709857 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357588 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222852 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111832 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68222  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+17941801 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683861 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26208091 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18897300 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all                   R=+20350980 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28710492 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897549 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138999 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087780 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076274 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691826 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351162 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2503284 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943655 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8553332 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5087749 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+5451169 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7545940 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1181228 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628706 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+407139 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209877 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107204 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868131 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354161 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690856 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090294 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+1181158 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1027871 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  


real	0m4.206s
user	0m4.092s
sys	0m0.100s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc4988750
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc4988750
length= 256 megabytes (2^28 bytes), time= 3.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18344447 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9763951 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6558106 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3380804 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1727050 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116345 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709857 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357588 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222852 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111832 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68222  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+17941798 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683860 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26208098 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18897299 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all                   R=+20350978 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28710492 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897549 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138999 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087780 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076274 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691826 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351162 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2503284 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943655 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8553332 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5087749 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+5451169 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7545940 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1181228 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628706 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+407139 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209877 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107204 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868131 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354161 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690856 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090294 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+1181158 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1027871 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  


real	0m4.220s
user	0m4.092s
sys	0m0.120s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xaa474703
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xaa474703
length= 256 megabytes (2^28 bytes), time= 3.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-2,T)                  R=+18344447 p = 0           FAIL !!!!!!!!  
  BCFN(2+1,13-2,T)                  R=+9763951 p = 0           FAIL !!!!!!!!  
  BCFN(2+2,13-3,T)                  R=+6558106 p = 0           FAIL !!!!!!!!  
  BCFN(2+3,13-3,T)                  R=+3380804 p = 0           FAIL !!!!!!!!  
  BCFN(2+4,13-3,T)                  R=+1727050 p = 0           FAIL !!!!!!!!  
  BCFN(2+5,13-4,T)                  R=+1116345 p = 0           FAIL !!!!!!!!  
  BCFN(2+6,13-5,T)                  R=+709857 p = 0           FAIL !!!!!!!!  
  BCFN(2+7,13-5,T)                  R=+357588 p = 0           FAIL !!!!!!!!  
  BCFN(2+8,13-6,T)                  R=+222852 p = 0           FAIL !!!!!!!!  
  BCFN(2+9,13-6,T)                  R=+111832 p = 0           FAIL !!!!!!!!  
  BCFN(2+10,13-7,T)                 R=+68222  p = 0           FAIL !!!!!!!!  
  BCFN(2+11,13-8,T)                 R=+40590  p = 0           FAIL !!!!!!!!  
  BCFN(2+12,13-8,T)                 R=+20312  p =  8e-5156    FAIL !!!!!!!!  
  BCFN(2+13,13-9,T)                 R=+11682  p =  5e-2626    FAIL !!!!!!!!  
  BCFN(2+14,13-9,T)                 R= +5834  p =  4e-1312    FAIL !!!!!!!!  
  DC6-9x1Bytes-1                    R=+17941799 p = 0           FAIL !!!!!!!!  
  Gap-16:A                          R=+6683861 p = 0           FAIL !!!!!!!!  
  Gap-16:B                          R=+26208090 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:(0,14-0)              R=+18897304 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:all                   R=+20350983 p = 0           FAIL !!!!!!!!  
  FPF-14+6/16:cross                 R=+28710492 p = 0           FAIL !!!!!!!!  
  BRank(12):128(4)                  R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  BRank(12):256(4)                  R=+10768  p~=  1e-5727    FAIL !!!!!!!!  
  BRank(12):384(1)                  R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  BRank(12):512(2)                  R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  BRank(12):768(1)                  R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  BRank(12):1K(2)                   R=+30995  p~=  1e-9331    FAIL !!!!!!!!  
  BRank(12):1536(1)                 R=+32939  p~=  1e-9916    FAIL !!!!!!!!  
  BRank(12):2K(1)                   R=+43961  p~= 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+0,13-3,T)         R=+5897549 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+1,13-3,T)         R=+3138999 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+2,13-4,T)         R=+2087780 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+3,13-4,T)         R=+1076274 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+4,13-5,T)         R=+691826 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+5,13-5,T)         R=+351162 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+6,13-6,T)         R=+220019 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+7,13-6,T)         R=+110827 p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+8,13-7,T)         R=+67788  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+9,13-8,T)         R=+40408  p = 0           FAIL !!!!!!!!  
  [Low8/32]BCFN(2+10,13-8,T)        R=+20247  p =  2e-5139    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+11,13-9,T)        R=+11655  p =  4e-2620    FAIL !!!!!!!!  
  [Low8/32]BCFN(2+12,13-9,T)        R= +5825  p =  5e-1310    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+2503284 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:A                 R=+1943655 p = 0           FAIL !!!!!!!!  
  [Low8/32]Gap-16:B                 R=+8553332 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:(0,14-0)     R=+5087749 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:all          R=+5451169 p = 0           FAIL !!!!!!!!  
  [Low8/32]FPF-14+6/16:cross        R=+7545940 p = 0           FAIL !!!!!!!!  
  [Low8/32]BRank(12):128(4)         R= +5257  p~=  1e-2796    FAIL !!!!!!!!  
  [Low8/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low8/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low8/32]BRank(12):512(2)         R=+15408  p~=  3e-4639    FAIL !!!!!!!!  
  [Low8/32]BRank(12):768(1)         R=+16406  p~=  1e-4939    FAIL !!!!!!!!  
  [Low8/32]BRank(12):1K(1)          R=+21917  p~=  1e-6598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+0,13-5,T)         R=+1181228 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+1,13-5,T)         R=+628706 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+2,13-6,T)         R=+407139 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+3,13-6,T)         R=+209877 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+4,13-6,T)         R=+107204 p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+5,13-7,T)         R=+66218  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+6,13-8,T)         R=+39745  p = 0           FAIL !!!!!!!!  
  [Low1/32]BCFN(2+7,13-8,T)         R=+20012  p =  8e-5080    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+8,13-9,T)         R=+11560  p =  1e-2598    FAIL !!!!!!!!  
  [Low1/32]BCFN(2+9,13-9,T)         R= +5791  p =  2e-1302    FAIL !!!!!!!!  
  [Low1/32]DC6-9x1Bytes-1           R=+868131 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:A                 R=+354161 p = 0           FAIL !!!!!!!!  
  [Low1/32]Gap-16:B                 R=+1690856 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:(0,14-2)     R=+1090294 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:all          R=+1181158 p = 0           FAIL !!!!!!!!  
  [Low1/32]FPF-14+6/16:cross        R=+1027871 p = 0           FAIL !!!!!!!!  
  [Low1/32]BRank(12):128(2)         R= +3717  p~=  5e-1120    FAIL !!!!!!!!  
  [Low1/32]BRank(12):256(2)         R= +7614  p~=  4e-2293    FAIL !!!!!!!!  
  [Low1/32]BRank(12):384(1)         R= +8139  p~=  3e-2451    FAIL !!!!!!!!  
  [Low1/32]BRank(12):512(1)         R=+10895  p~=  1e-3280    FAIL !!!!!!!!  


real	0m4.208s
user	0m4.068s
sys	0m0.132s
*/
