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
/// @created on 2019-12-08 02:57:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8f4635a2-d7ca-4771-81ec-c2e4a2e59fab                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib1;
/* TEST00
time ./MRndCPP 
3090301850
3348895109
565422106
2629194655
2847092240
2295190577
18446413446114897300

real	0m51.878s
user	0m51.660s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.22e+07  |2314184687|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.79468576|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.12373768|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.79030962|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.55660054|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.72887309|  PASSED  
        diehard_opso|   0|   2097152|     100|0.97771979|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.04511200|  PASSED  
         diehard_dna|   0|   2097152|     100|0.16801251|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.97451693|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.44808719|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.26814905|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.22801653|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.99962593|   WEAK   
     diehard_squeeze|   0|    100000|     100|0.77094381|  PASSED  
        diehard_sums|   0|       100|     100|0.13977134|  PASSED  
        diehard_runs|   0|    100000|     100|0.94580452|  PASSED  
        diehard_runs|   0|    100000|     100|0.34434605|  PASSED  
       diehard_craps|   0|    200000|     100|0.97102396|  PASSED  
       diehard_craps|   0|    200000|     100|0.30507481|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.77441174|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.52295189|  PASSED  
         sts_monobit|   1|    100000|     100|0.60644661|  PASSED  
            sts_runs|   2|    100000|     100|0.92285252|  PASSED  
          sts_serial|   1|    100000|     100|0.02103519|  PASSED  
          sts_serial|   2|    100000|     100|0.50014670|  PASSED  
          sts_serial|   3|    100000|     100|0.60987266|  PASSED  
          sts_serial|   3|    100000|     100|0.49256911|  PASSED  
          sts_serial|   4|    100000|     100|0.90791725|  PASSED  
          sts_serial|   4|    100000|     100|0.91228158|  PASSED  
          sts_serial|   5|    100000|     100|0.50622790|  PASSED  
          sts_serial|   5|    100000|     100|0.76749829|  PASSED  
          sts_serial|   6|    100000|     100|0.97102391|  PASSED  
          sts_serial|   6|    100000|     100|0.86831903|  PASSED  
          sts_serial|   7|    100000|     100|0.35091887|  PASSED  
          sts_serial|   7|    100000|     100|0.01168749|  PASSED  
          sts_serial|   8|    100000|     100|0.29877705|  PASSED  
          sts_serial|   8|    100000|     100|0.93595362|  PASSED  
          sts_serial|   9|    100000|     100|0.66324931|  PASSED  
          sts_serial|   9|    100000|     100|0.76674177|  PASSED  
          sts_serial|  10|    100000|     100|0.74314289|  PASSED  
          sts_serial|  10|    100000|     100|0.65288480|  PASSED  
          sts_serial|  11|    100000|     100|0.92848780|  PASSED  
          sts_serial|  11|    100000|     100|0.57379096|  PASSED  
          sts_serial|  12|    100000|     100|0.81359978|  PASSED  
          sts_serial|  12|    100000|     100|0.90049289|  PASSED  
          sts_serial|  13|    100000|     100|0.28479368|  PASSED  
          sts_serial|  13|    100000|     100|0.24109079|  PASSED  
          sts_serial|  14|    100000|     100|0.58640922|  PASSED  
          sts_serial|  14|    100000|     100|0.76984693|  PASSED  
          sts_serial|  15|    100000|     100|0.18749258|  PASSED  
          sts_serial|  15|    100000|     100|0.29992963|  PASSED  
          sts_serial|  16|    100000|     100|0.50531763|  PASSED  
          sts_serial|  16|    100000|     100|0.80208077|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.77172699|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.66908381|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.75257106|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.17235224|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.20475069|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.81535228|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.20220834|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.43804313|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.85070472|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.52210259|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.88173581|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.98504166|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.32186215|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.54337688|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.16260820|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.28243141|  PASSED  
    rgb_permutations|   2|    100000|     100|0.05324220|  PASSED  
    rgb_permutations|   3|    100000|     100|0.77246332|  PASSED  
    rgb_permutations|   4|    100000|     100|0.97343554|  PASSED  
    rgb_permutations|   5|    100000|     100|0.12904120|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.08934288|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.92801581|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.01735303|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.53558751|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.28091799|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.30022996|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.10947547|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.74310828|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.89520731|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.00054978|   WEAK   
      rgb_lagged_sum|  10|   1000000|     100|0.96304292|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.67102789|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.12569843|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.13104849|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.61236560|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.53960817|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.55762765|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.28980957|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.31305311|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.03274800|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.02163708|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.68075303|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.84013310|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.89240137|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.62520934|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.79374680|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.99809963|   WEAK   
      rgb_lagged_sum|  27|   1000000|     100|0.91895376|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.38601407|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.52537245|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.15912366|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.51152744|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.36791070|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.60646048|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.44334575|  PASSED  
             dab_dct| 256|     50000|       1|0.09236455|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.54641668|  PASSED  
        dab_filltree|  32|  15000000|       1|0.81826296|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.95919020|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.76659367|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.98022582|  PASSED  

real	53m2.255s
user	49m16.292s
sys	3m42.772s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2e473db7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2e473db7
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+3,13-5,T)         R=  +9.4  p =  7.2e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2e473db7
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2e473db7
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2e473db7
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2e473db7
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2e473db7
length= 4 gigabytes (2^32 bytes), time= 73.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2e473db7
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.993s
user	1m42.484s
sys	0m2.380s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf333b788
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf333b788
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf333b788
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf333b788
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf333b788
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf333b788
length= 2 gigabytes (2^31 bytes), time= 37.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+4,13-5,T)         R=  -7.2  p =1-1.2e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf333b788
length= 4 gigabytes (2^32 bytes), time= 72.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xf333b788
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.591s
user	1m41.908s
sys	0m2.516s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x717b7e2a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x717b7e2a
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x717b7e2a
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+7,13-5,T)                  R= +11.8  p =  8.2e-5   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x717b7e2a
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x717b7e2a
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x717b7e2a
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x717b7e2a
length= 4 gigabytes (2^32 bytes), time= 71.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.3  p =  7.8e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x717b7e2a
length= 5.750 gigabytes (2^32.524 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.524s
user	1m40.892s
sys	0m2.544s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x28456a30
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x28456a30
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x28456a30
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x28456a30
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  6.7e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x28456a30
length= 1 gigabyte (2^30 bytes), time= 19.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -3.5  p =1-2.6e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x28456a30
length= 2 gigabytes (2^31 bytes), time= 38.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.6  p =1-2.9e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x28456a30
length= 4 gigabytes (2^32 bytes), time= 75.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x28456a30
length= 8 gigabytes (2^33 bytes), time= 155 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +5.3  p =  8.5e-4   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x28456a30
length= 16 gigabytes (2^34 bytes), time= 310 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x28456a30
length= 32 gigabytes (2^35 bytes), time= 614 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x28456a30
length= 64 gigabytes (2^36 bytes), time= 1239 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x28456a30
length= 128 gigabytes (2^37 bytes), time= 2474 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x28456a30
length= 187.250 gigabytes (2^37.549 bytes), time= 3604 seconds
  no anomalies in 201 test result(s)


real	60m4.190s
user	58m44.836s
sys	1m14.668s
*/
