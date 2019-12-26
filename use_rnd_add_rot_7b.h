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
/// @created on 2019-12-18 20:15:01 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 47fa0709-8868-4252-a9f9-7a8ff0378bc3                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot7b;
/* TEST00
time ./MRndCPP 
2252776243
1316618735
3937872866
1428168141
3635316044
2126687993
4611710032760244183

real	0m19.177s
user	0m19.128s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.63e+07  |1915517382|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.70949352|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.57791927|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.82198006|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.44596047|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.78524671|  PASSED  
        diehard_opso|   0|   2097152|     100|0.49042373|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.50754240|  PASSED  
         diehard_dna|   0|   2097152|     100|0.81216699|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.79908601|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.83706634|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.68180941|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.10705972|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.51928138|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.56128563|  PASSED  
        diehard_sums|   0|       100|     100|0.75579045|  PASSED  
        diehard_runs|   0|    100000|     100|0.80312467|  PASSED  
        diehard_runs|   0|    100000|     100|0.84031573|  PASSED  
       diehard_craps|   0|    200000|     100|0.83945412|  PASSED  
       diehard_craps|   0|    200000|     100|0.40179595|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.67342669|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.96210122|  PASSED  
         sts_monobit|   1|    100000|     100|0.12811569|  PASSED  
            sts_runs|   2|    100000|     100|0.93930296|  PASSED  
          sts_serial|   1|    100000|     100|0.34011584|  PASSED  
          sts_serial|   2|    100000|     100|0.41722526|  PASSED  
          sts_serial|   3|    100000|     100|0.12697502|  PASSED  
          sts_serial|   3|    100000|     100|0.30736060|  PASSED  
          sts_serial|   4|    100000|     100|0.16395732|  PASSED  
          sts_serial|   4|    100000|     100|0.22382966|  PASSED  
          sts_serial|   5|    100000|     100|0.12513578|  PASSED  
          sts_serial|   5|    100000|     100|0.95452478|  PASSED  
          sts_serial|   6|    100000|     100|0.23768204|  PASSED  
          sts_serial|   6|    100000|     100|0.80526771|  PASSED  
          sts_serial|   7|    100000|     100|0.08220234|  PASSED  
          sts_serial|   7|    100000|     100|0.27102300|  PASSED  
          sts_serial|   8|    100000|     100|0.21287317|  PASSED  
          sts_serial|   8|    100000|     100|0.65579917|  PASSED  
          sts_serial|   9|    100000|     100|0.17700923|  PASSED  
          sts_serial|   9|    100000|     100|0.47677718|  PASSED  
          sts_serial|  10|    100000|     100|0.48975897|  PASSED  
          sts_serial|  10|    100000|     100|0.09325314|  PASSED  
          sts_serial|  11|    100000|     100|0.84211143|  PASSED  
          sts_serial|  11|    100000|     100|0.85699617|  PASSED  
          sts_serial|  12|    100000|     100|0.78298667|  PASSED  
          sts_serial|  12|    100000|     100|0.99695183|   WEAK   
          sts_serial|  13|    100000|     100|0.85035235|  PASSED  
          sts_serial|  13|    100000|     100|0.87142613|  PASSED  
          sts_serial|  14|    100000|     100|0.73554941|  PASSED  
          sts_serial|  14|    100000|     100|0.13174151|  PASSED  
          sts_serial|  15|    100000|     100|0.74801847|  PASSED  
          sts_serial|  15|    100000|     100|0.99524559|   WEAK   
          sts_serial|  16|    100000|     100|0.11123281|  PASSED  
          sts_serial|  16|    100000|     100|0.04458171|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.68415337|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.20103721|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.71399600|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.02494427|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.63658167|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.82969247|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.69505255|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.37435996|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.75949791|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.26167928|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.92564930|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.89624476|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.90242828|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.93683509|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.87944079|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.01331160|  PASSED  
    rgb_permutations|   2|    100000|     100|0.88374431|  PASSED  
    rgb_permutations|   3|    100000|     100|0.49365738|  PASSED  
    rgb_permutations|   4|    100000|     100|0.65177870|  PASSED  
    rgb_permutations|   5|    100000|     100|0.59145677|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.41706125|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.92158884|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.74109912|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.98167392|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.58424161|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.97996478|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.85395799|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.15486145|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.00469297|   WEAK   
      rgb_lagged_sum|   9|   1000000|     100|0.41068749|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.40909034|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.86865347|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.99527717|   WEAK   
      rgb_lagged_sum|  13|   1000000|     100|0.29269568|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.31731647|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.97649834|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.15650889|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.87958631|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.69502593|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.32271130|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.25961588|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.53658549|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.36392598|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.07026627|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.40096451|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.45835488|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.10852316|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.23954328|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.46552621|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.61555350|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.27455180|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.51244335|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.13241971|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.20038505|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.19617524|  PASSED  
             dab_dct| 256|     50000|       1|0.65239354|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.50344246|  PASSED  
        dab_filltree|  32|  15000000|       1|0.11134664|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.23528233|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.98481474|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.64990865|  PASSED  

real	58m40.953s
user	55m5.552s
sys	3m32.200s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x94067069
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x94067069
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x94067069
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x94067069
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x94067069
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x94067069
length= 2 gigabytes (2^31 bytes), time= 41.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.6  p =  2.4e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x94067069
length= 4 gigabytes (2^32 bytes), time= 80.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.3  p =  5.3e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x94067069
length= 5.250 gigabytes (2^32.392 bytes), time= 106 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.3  p =  2.9e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m46.621s
user	1m43.164s
sys	0m3.312s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9f29e189
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9f29e189
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9f29e189
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -4.5  p =1-5.4e-4   unusual          
  [Low8/32]FPF-14+6/16:all          R=  +4.4  p =  1.3e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +5.4  p =  5.3e-4   unusual          
  ...and 121 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9f29e189
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.5  p =  6.2e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9f29e189
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9f29e189
length= 2 gigabytes (2^31 bytes), time= 42.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x9f29e189
length= 4 gigabytes (2^32 bytes), time= 84.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x9f29e189
length= 4.750 gigabytes (2^32.248 bytes), time= 101 seconds
  no anomalies in 159 test result(s)


real	1m41.300s
user	1m38.160s
sys	0m2.876s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf3837df6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf3837df6
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf3837df6
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf3837df6
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  -4.3  p =1-9.3e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf3837df6
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf3837df6
length= 2 gigabytes (2^31 bytes), time= 41.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf3837df6
length= 4 gigabytes (2^32 bytes), time= 80.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xf3837df6
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 159 test result(s)


real	1m41.465s
user	1m37.860s
sys	0m3.444s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9f728f12
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9f728f12
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9f728f12
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9f728f12
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+3,13-5,T)         R=  -6.9  p =1-2.2e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9f728f12
length= 1 gigabyte (2^30 bytes), time= 21.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9f728f12
length= 2 gigabytes (2^31 bytes), time= 41.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x9f728f12
length= 4 gigabytes (2^32 bytes), time= 80.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x9f728f12
length= 8 gigabytes (2^33 bytes), time= 162 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.4  p =  1.3e-3   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9f728f12
length= 16 gigabytes (2^34 bytes), time= 333 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x9f728f12
length= 32 gigabytes (2^35 bytes), time= 671 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x9f728f12
length= 64 gigabytes (2^36 bytes), time= 1363 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x9f728f12
length= 128 gigabytes (2^37 bytes), time= 2734 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.4  p =1-4.0e-3   unusual          
  ...and 195 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9f728f12
length= 168.750 gigabytes (2^37.399 bytes), time= 3604 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.6  p =1-3.4e-3   unusual          
  ...and 200 test result(s) without anomalies


real	60m5.655s
user	58m17.776s
sys	1m43.716s
*/
