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
/// @created on 2019-12-18 01:25:44 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 2ed26032-5d67-4a13-9a29-25b1c4ea0109                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib10;
/* TEST00
time ./MRndCPP 
2744232651
243270151
2364329534
1085616982
2431033928
1066304217
18446707380686734398

real	0m51.532s
user	0m51.484s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.21e+07  |2968594808|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.18512480|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.49751012|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.19661750|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.41406998|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.60475286|  PASSED  
        diehard_opso|   0|   2097152|     100|0.61027339|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.54718029|  PASSED  
         diehard_dna|   0|   2097152|     100|0.64188476|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.60758125|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.78856906|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.24520972|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.90156385|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.76229564|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.61663166|  PASSED  
        diehard_sums|   0|       100|     100|0.08740950|  PASSED  
        diehard_runs|   0|    100000|     100|0.08535502|  PASSED  
        diehard_runs|   0|    100000|     100|0.63894976|  PASSED  
       diehard_craps|   0|    200000|     100|0.46126684|  PASSED  
       diehard_craps|   0|    200000|     100|0.27047975|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.90080554|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.55539685|  PASSED  
         sts_monobit|   1|    100000|     100|0.95869323|  PASSED  
            sts_runs|   2|    100000|     100|0.97999727|  PASSED  
          sts_serial|   1|    100000|     100|0.81303552|  PASSED  
          sts_serial|   2|    100000|     100|0.87952417|  PASSED  
          sts_serial|   3|    100000|     100|0.90039305|  PASSED  
          sts_serial|   3|    100000|     100|0.81436011|  PASSED  
          sts_serial|   4|    100000|     100|0.74553134|  PASSED  
          sts_serial|   4|    100000|     100|0.39481657|  PASSED  
          sts_serial|   5|    100000|     100|0.15129310|  PASSED  
          sts_serial|   5|    100000|     100|0.17671812|  PASSED  
          sts_serial|   6|    100000|     100|0.75513343|  PASSED  
          sts_serial|   6|    100000|     100|0.88006256|  PASSED  
          sts_serial|   7|    100000|     100|0.95364066|  PASSED  
          sts_serial|   7|    100000|     100|0.08382692|  PASSED  
          sts_serial|   8|    100000|     100|0.97737973|  PASSED  
          sts_serial|   8|    100000|     100|0.60047788|  PASSED  
          sts_serial|   9|    100000|     100|0.95581050|  PASSED  
          sts_serial|   9|    100000|     100|0.45444073|  PASSED  
          sts_serial|  10|    100000|     100|0.62892006|  PASSED  
          sts_serial|  10|    100000|     100|0.72549024|  PASSED  
          sts_serial|  11|    100000|     100|0.76888149|  PASSED  
          sts_serial|  11|    100000|     100|0.93732959|  PASSED  
          sts_serial|  12|    100000|     100|0.61205672|  PASSED  
          sts_serial|  12|    100000|     100|0.91819095|  PASSED  
          sts_serial|  13|    100000|     100|0.17125597|  PASSED  
          sts_serial|  13|    100000|     100|0.15198030|  PASSED  
          sts_serial|  14|    100000|     100|0.02465173|  PASSED  
          sts_serial|  14|    100000|     100|0.37419243|  PASSED  
          sts_serial|  15|    100000|     100|0.00737955|  PASSED  
          sts_serial|  15|    100000|     100|0.08621674|  PASSED  
          sts_serial|  16|    100000|     100|0.04879972|  PASSED  
          sts_serial|  16|    100000|     100|0.58297370|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.92966134|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.75795961|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.93162845|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.61987667|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.15319318|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.29038334|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.73171052|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.80489132|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.86653595|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.07700428|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.98771333|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.26393557|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.49516631|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.42414897|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.10612284|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.00220099|   WEAK   
    rgb_permutations|   2|    100000|     100|0.75771000|  PASSED  
    rgb_permutations|   3|    100000|     100|0.93103963|  PASSED  
    rgb_permutations|   4|    100000|     100|0.77616224|  PASSED  
    rgb_permutations|   5|    100000|     100|0.98914227|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.33421405|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.92408301|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.34692595|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.11380151|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.64670752|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.83744626|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.89224234|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.45171563|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.59297712|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.26256700|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.70602946|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.98641151|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.07900336|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.77454774|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.26066233|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.33691402|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.60877727|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.40772527|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.68020856|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.09547563|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.94503941|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.68363394|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.39516764|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.18455421|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.48001896|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.48705102|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.73316161|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.48380164|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.51626603|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.99638793|   WEAK   
      rgb_lagged_sum|  30|   1000000|     100|0.60932185|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.71109151|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.78216093|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.01459785|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.41817698|  PASSED  
             dab_dct| 256|     50000|       1|0.10837128|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.89723879|  PASSED  
        dab_filltree|  32|  15000000|       1|0.15076108|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.77712428|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.58261121|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.32110486|  PASSED  

real	53m12.960s
user	49m35.628s
sys	3m24.712s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xa80ab3a1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xa80ab3a1
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xa80ab3a1
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R= +68.7  p =  3.5e-36    FAIL !!!       
  [Low1/32]Gap-16:A                 R= +61.4  p =  4.1e-52    FAIL !!!!      
  [Low1/32]Gap-16:B                 R= +10.3  p =  2.4e-8    VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +19.7  p =  5.7e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(1,14-2)     R= +16.8  p =  1.7e-14    FAIL           
  [Low1/32]FPF-14+6/16:(2,14-3)     R= +11.0  p =  2.0e-9   very suspicious  
  [Low1/32]FPF-14+6/16:(3,14-4)     R= +10.2  p =  2.9e-8   suspicious       
  [Low1/32]FPF-14+6/16:(4,14-5)     R=  +7.7  p =  2.8e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= +31.4  p =  5.4e-28    FAIL !!!       
  [Low1/32]FPF-14+6/16:all2         R=+187.9  p =  1.0e-65    FAIL !!!!      
  ...and 114 test result(s) without anomalies


real	0m5.782s
user	0m5.484s
sys	0m0.292s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf7e0b040
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf7e0b040
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf7e0b040
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R= +69.1  p =  2.1e-36    FAIL !!!       
  [Low1/32]Gap-16:A                 R= +59.9  p =  6.8e-51    FAIL !!!!      
  [Low1/32]Gap-16:B                 R=  +8.7  p =  4.1e-7   very suspicious  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +18.8  p =  3.1e-16    FAIL !         
  [Low1/32]FPF-14+6/16:(1,14-2)     R= +18.9  p =  2.7e-16    FAIL !         
  [Low1/32]FPF-14+6/16:(2,14-3)     R= +12.2  p =  1.7e-10   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(3,14-4)     R=  +7.2  p =  8.3e-6   unusual          
  [Low1/32]FPF-14+6/16:(4,14-5)     R=  +7.4  p =  5.0e-6   unusual          
  [Low1/32]FPF-14+6/16:(5,14-5)     R=  +7.7  p =  3.1e-6   unusual          
  [Low1/32]FPF-14+6/16:all          R= +32.6  p =  4.3e-29    FAIL !!!       
  [Low1/32]FPF-14+6/16:all2         R=+200.0  p =  7.9e-70    FAIL !!!!      
  ...and 113 test result(s) without anomalies


real	0m5.617s
user	0m5.480s
sys	0m0.128s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xda181107
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xda181107
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xda181107
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R= +65.3  p =  2.2e-34    FAIL !!!       
  [Low1/32]Gap-16:A                 R= +63.7  p =  3.8e-54    FAIL !!!!      
  [Low1/32]Gap-16:B                 R=  +8.3  p =  9.9e-7   very suspicious  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +19.5  p =  8.7e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(1,14-2)     R= +18.5  p =  6.1e-16    FAIL           
  [Low1/32]FPF-14+6/16:(2,14-3)     R= +12.8  p =  5.2e-11   VERY SUSPICIOUS 
  [Low1/32]FPF-14+6/16:(3,14-4)     R=  +9.4  p =  1.2e-7   suspicious       
  [Low1/32]FPF-14+6/16:all          R= +32.0  p =  1.3e-28    FAIL !!!       
  [Low1/32]FPF-14+6/16:all2         R=+201.4  p =  2.6e-70    FAIL !!!!      
  ...and 115 test result(s) without anomalies


real	0m5.640s
user	0m5.476s
sys	0m0.160s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x88b8f8ee
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x88b8f8ee
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=  -6.3  p =1-2.7e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x88b8f8ee
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R= +66.3  p =  6.2e-35    FAIL !!!       
  [Low1/32]Gap-16:A                 R= +61.3  p =  4.6e-52    FAIL !!!!      
  [Low1/32]Gap-16:B                 R=  +8.6  p =  4.9e-7   very suspicious  
  [Low1/32]FPF-14+6/16:(0,14-2)     R= +19.7  p =  5.0e-17    FAIL !         
  [Low1/32]FPF-14+6/16:(1,14-2)     R= +17.8  p =  2.2e-15    FAIL           
  [Low1/32]FPF-14+6/16:(2,14-3)     R= +10.1  p =  1.2e-8   very suspicious  
  [Low1/32]FPF-14+6/16:(4,14-5)     R=  +7.1  p =  9.6e-6   unusual          
  [Low1/32]FPF-14+6/16:(5,14-5)     R=  +8.0  p =  1.8e-6   mildly suspicious
  [Low1/32]FPF-14+6/16:all          R= +31.6  p =  3.1e-28    FAIL !!!       
  [Low1/32]FPF-14+6/16:all2         R=+191.2  p =  7.8e-67    FAIL !!!!      
  ...and 114 test result(s) without anomalies


real	0m6.142s
user	0m5.984s
sys	0m0.140s
*/
