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
/// @created on 2019-12-18 20:18:01 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token bd5dfe88-f420-49cd-ae50-cef7f57dd83b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot1b;
/* TEST00
time ./MRndCPP 
3243030239
2138190073
184703995
3459243772
1323227394
3220768505
4611653474890530961

real	0m21.196s
user	0m21.168s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.56e+07  | 432101652|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.74324097|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.37455700|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.53204156|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.69895806|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.77684035|  PASSED  
        diehard_opso|   0|   2097152|     100|0.65455492|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.93801865|  PASSED  
         diehard_dna|   0|   2097152|     100|0.25388462|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.82013343|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.93601402|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.17297545|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.27853546|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.99459973|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.98105068|  PASSED  
        diehard_sums|   0|       100|     100|0.31963405|  PASSED  
        diehard_runs|   0|    100000|     100|0.00999581|  PASSED  
        diehard_runs|   0|    100000|     100|0.15765188|  PASSED  
       diehard_craps|   0|    200000|     100|0.38854870|  PASSED  
       diehard_craps|   0|    200000|     100|0.35057014|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.05243763|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.64442806|  PASSED  
         sts_monobit|   1|    100000|     100|0.42461447|  PASSED  
            sts_runs|   2|    100000|     100|0.40960566|  PASSED  
          sts_serial|   1|    100000|     100|0.96029037|  PASSED  
          sts_serial|   2|    100000|     100|0.72405593|  PASSED  
          sts_serial|   3|    100000|     100|0.32991255|  PASSED  
          sts_serial|   3|    100000|     100|0.13021620|  PASSED  
          sts_serial|   4|    100000|     100|0.23728374|  PASSED  
          sts_serial|   4|    100000|     100|0.82112170|  PASSED  
          sts_serial|   5|    100000|     100|0.33335800|  PASSED  
          sts_serial|   5|    100000|     100|0.92254773|  PASSED  
          sts_serial|   6|    100000|     100|0.61721921|  PASSED  
          sts_serial|   6|    100000|     100|0.64890443|  PASSED  
          sts_serial|   7|    100000|     100|0.65039140|  PASSED  
          sts_serial|   7|    100000|     100|0.66476109|  PASSED  
          sts_serial|   8|    100000|     100|0.54679605|  PASSED  
          sts_serial|   8|    100000|     100|0.82854842|  PASSED  
          sts_serial|   9|    100000|     100|0.40519227|  PASSED  
          sts_serial|   9|    100000|     100|0.28281849|  PASSED  
          sts_serial|  10|    100000|     100|0.05753658|  PASSED  
          sts_serial|  10|    100000|     100|0.13279718|  PASSED  
          sts_serial|  11|    100000|     100|0.22267096|  PASSED  
          sts_serial|  11|    100000|     100|0.57717943|  PASSED  
          sts_serial|  12|    100000|     100|0.72078119|  PASSED  
          sts_serial|  12|    100000|     100|0.90874605|  PASSED  
          sts_serial|  13|    100000|     100|0.64085004|  PASSED  
          sts_serial|  13|    100000|     100|0.77683503|  PASSED  
          sts_serial|  14|    100000|     100|0.52591306|  PASSED  
          sts_serial|  14|    100000|     100|0.76029776|  PASSED  
          sts_serial|  15|    100000|     100|0.79291529|  PASSED  
          sts_serial|  15|    100000|     100|0.70314912|  PASSED  
          sts_serial|  16|    100000|     100|0.25144266|  PASSED  
          sts_serial|  16|    100000|     100|0.01358198|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.88228470|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.00698171|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.67403960|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.98424842|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.06923341|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.99075231|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.31012236|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.02535074|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.36577585|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.73643203|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.97116678|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.76934969|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.27101801|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.29934763|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.42025212|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.69022675|  PASSED  
    rgb_permutations|   2|    100000|     100|0.80180235|  PASSED  
    rgb_permutations|   3|    100000|     100|0.74989695|  PASSED  
    rgb_permutations|   4|    100000|     100|0.95907106|  PASSED  
    rgb_permutations|   5|    100000|     100|0.91384646|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.11734208|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.75351364|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.77121289|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.84417016|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.79985839|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.80459356|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.88971856|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.99941156|   WEAK   
      rgb_lagged_sum|   8|   1000000|     100|0.23417287|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.96316015|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.25665247|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.82026718|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.51712391|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.97357702|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.20693794|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.06777015|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.32919927|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.36818109|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.64244590|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.96071987|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.98637985|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.27324655|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.96017109|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.87817709|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.65965153|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.54969661|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.38476648|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.50391818|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.28422521|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.34535901|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.86076877|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.58783448|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.23563019|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.76521547|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.15939479|  PASSED  
             dab_dct| 256|     50000|       1|0.68898288|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.92848920|  PASSED  
        dab_filltree|  32|  15000000|       1|0.14297742|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.17719639|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.49305836|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.25219457|  PASSED  

real	60m18.877s
user	56m47.160s
sys	3m28.248s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2f0dc24b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2f0dc24b
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2f0dc24b
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.9  p =  4.3e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2f0dc24b
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x2f0dc24b
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-1,T)                  R=  +7.5  p =  1.7e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2f0dc24b
length= 2 gigabytes (2^31 bytes), time= 42.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2f0dc24b
length= 4 gigabytes (2^32 bytes), time= 81.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2f0dc24b
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  no anomalies in 159 test result(s)


real	1m42.283s
user	1m38.996s
sys	0m3.164s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3ea66c89
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3ea66c89
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3ea66c89
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.7  p =  3.3e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3ea66c89
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +4.5  p =  2.2e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +5.4  p =  7.5e-4   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3ea66c89
length= 1 gigabyte (2^30 bytes), time= 21.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x3ea66c89
length= 2 gigabytes (2^31 bytes), time= 41.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R=  +9.5  p =  2.8e-4   mildly suspicious
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3ea66c89
length= 4 gigabytes (2^32 bytes), time= 83.8 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.1  p =  7.5e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3ea66c89
length= 4.750 gigabytes (2^32.248 bytes), time= 100 seconds
  no anomalies in 159 test result(s)


real	1m41.093s
user	1m38.084s
sys	0m2.908s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x24993f5b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x24993f5b
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x24993f5b
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x24993f5b
length= 512 megabytes (2^29 bytes), time= 11.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x24993f5b
length= 1 gigabyte (2^30 bytes), time= 22.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x24993f5b
length= 2 gigabytes (2^31 bytes), time= 44.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x24993f5b
length= 4 gigabytes (2^32 bytes), time= 85.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.2  p =  6.7e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x24993f5b
length= 4.750 gigabytes (2^32.248 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.2  p =1-6.2e-3   unusual          
  ...and 158 test result(s) without anomalies


real	1m42.899s
user	1m39.480s
sys	0m3.300s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9aba7c6c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9aba7c6c
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9aba7c6c
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9aba7c6c
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x9aba7c6c
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9aba7c6c
length= 2 gigabytes (2^31 bytes), time= 42.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.4  p =  6.1e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9aba7c6c
length= 4 gigabytes (2^32 bytes), time= 81.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x9aba7c6c
length= 8 gigabytes (2^33 bytes), time= 164 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x9aba7c6c
length= 16 gigabytes (2^34 bytes), time= 338 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x9aba7c6c
length= 32 gigabytes (2^35 bytes), time= 681 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x9aba7c6c
length= 64 gigabytes (2^36 bytes), time= 1383 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x9aba7c6c
length= 128 gigabytes (2^37 bytes), time= 2766 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.0  p =  2.3e-3   unusual          
  ...and 195 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9aba7c6c
length= 166.750 gigabytes (2^37.382 bytes), time= 3601 seconds
  no anomalies in 200 test result(s)


real	60m1.613s
user	58m18.040s
sys	1m39.464s
*/
/* TEST00
time ./MRndCPP 
3243030239
2138190073
184703995
3459243772
1323227394
3220768505
18446422062214648211

real	0m39.538s
user	0m39.500s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.25e+07  |2914765574|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.22043518|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.64422184|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.94847288|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.46318795|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.57089317|  PASSED  
        diehard_opso|   0|   2097152|     100|0.98044629|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.05714798|  PASSED  
         diehard_dna|   0|   2097152|     100|0.19463096|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.70489855|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.45898268|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.19536922|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.36155986|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.38227035|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.85626780|  PASSED  
        diehard_sums|   0|       100|     100|0.02497385|  PASSED  
        diehard_runs|   0|    100000|     100|0.64988281|  PASSED  
        diehard_runs|   0|    100000|     100|0.30257565|  PASSED  
       diehard_craps|   0|    200000|     100|0.72937259|  PASSED  
       diehard_craps|   0|    200000|     100|0.90528860|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.72993215|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.17363181|  PASSED  
         sts_monobit|   1|    100000|     100|0.79243265|  PASSED  
            sts_runs|   2|    100000|     100|0.05245298|  PASSED  
          sts_serial|   1|    100000|     100|0.61327832|  PASSED  
          sts_serial|   2|    100000|     100|0.89668239|  PASSED  
          sts_serial|   3|    100000|     100|0.59100916|  PASSED  
          sts_serial|   3|    100000|     100|0.60869183|  PASSED  
          sts_serial|   4|    100000|     100|0.91213960|  PASSED  
          sts_serial|   4|    100000|     100|0.75621614|  PASSED  
          sts_serial|   5|    100000|     100|0.55243837|  PASSED  
          sts_serial|   5|    100000|     100|0.90534969|  PASSED  
          sts_serial|   6|    100000|     100|0.99813683|   WEAK   
          sts_serial|   6|    100000|     100|0.90263595|  PASSED  
          sts_serial|   7|    100000|     100|0.62693204|  PASSED  
          sts_serial|   7|    100000|     100|0.53205902|  PASSED  
          sts_serial|   8|    100000|     100|0.48790430|  PASSED  
          sts_serial|   8|    100000|     100|0.49482185|  PASSED  
          sts_serial|   9|    100000|     100|0.27543651|  PASSED  
          sts_serial|   9|    100000|     100|0.47665569|  PASSED  
          sts_serial|  10|    100000|     100|0.32714341|  PASSED  
          sts_serial|  10|    100000|     100|0.36047173|  PASSED  
          sts_serial|  11|    100000|     100|0.13063844|  PASSED  
          sts_serial|  11|    100000|     100|0.34508725|  PASSED  
          sts_serial|  12|    100000|     100|0.50699463|  PASSED  
          sts_serial|  12|    100000|     100|0.83193310|  PASSED  
          sts_serial|  13|    100000|     100|0.40845020|  PASSED  
          sts_serial|  13|    100000|     100|0.90976480|  PASSED  
          sts_serial|  14|    100000|     100|0.08286894|  PASSED  
          sts_serial|  14|    100000|     100|0.09934783|  PASSED  
          sts_serial|  15|    100000|     100|0.56968647|  PASSED  
          sts_serial|  15|    100000|     100|0.65436988|  PASSED  
          sts_serial|  16|    100000|     100|0.81814320|  PASSED  
          sts_serial|  16|    100000|     100|0.63940798|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.46987510|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.36325302|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.87805015|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.26426341|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.93592925|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.69090951|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.99673671|   WEAK   
         rgb_bitdist|   8|    100000|     100|0.25325114|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.40832296|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.98027252|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.58787771|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.62912598|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.32165534|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.99395790|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.69565027|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.90192973|  PASSED  
    rgb_permutations|   2|    100000|     100|0.92530191|  PASSED  
    rgb_permutations|   3|    100000|     100|0.88824047|  PASSED  
    rgb_permutations|   4|    100000|     100|0.62058511|  PASSED  
    rgb_permutations|   5|    100000|     100|0.71742877|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.39064650|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.37470483|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.11271433|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.44031769|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.96605571|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.94996616|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.33522524|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.97216155|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.22878691|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.96591475|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.06309172|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.52730089|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.95788786|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.33275970|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.45152771|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.98615085|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.78964237|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.41884746|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.99449438|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.07736302|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.98948368|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.84434702|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.01132689|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.40577762|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.35359270|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.62175321|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.13529561|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.95636656|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.16666276|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.94801533|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.43966294|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.95141693|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.61150486|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.74767063|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.22612456|  PASSED  
             dab_dct| 256|     50000|       1|0.92043407|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.43454705|  PASSED  
        dab_filltree|  32|  15000000|       1|0.59092603|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.85991820|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.59036408|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.11587334|  PASSED  

real	51m10.718s
user	47m37.820s
sys	3m29.620s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x902356f1
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x902356f1
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x902356f1
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  +4.1  p =  6.9e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x902356f1
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.2  p =  9.7e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x902356f1
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+4,13-5,T)         R= +11.1  p =  1.5e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x902356f1
length= 2 gigabytes (2^31 bytes), time= 36.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x902356f1
length= 4 gigabytes (2^32 bytes), time= 71.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x902356f1
length= 5.750 gigabytes (2^32.524 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.916s
user	1m41.448s
sys	0m2.340s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xff004683
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xff004683
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.0  p =  2.2e-4   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xff004683
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.1  p =  1.4e-4   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xff004683
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  +3.8  p =  1.3e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +5.2  p =  1.0e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xff004683
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  +4.7  p =  2.4e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xff004683
length= 2 gigabytes (2^31 bytes), time= 36.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xff004683
length= 4 gigabytes (2^32 bytes), time= 71.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xff004683
length= 5.750 gigabytes (2^32.524 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.408s
user	1m40.860s
sys	0m2.372s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2009afd4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2009afd4
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.2  p =1-1.1e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +4.9  p =  1.6e-3   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2009afd4
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x2009afd4
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.1  p =1-5.6e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2009afd4
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x2009afd4
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x2009afd4
length= 4 gigabytes (2^32 bytes), time= 73.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x2009afd4
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.248s
user	1m41.976s
sys	0m2.140s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd20967dd
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd20967dd
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xd20967dd
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd20967dd
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xd20967dd
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xd20967dd
length= 2 gigabytes (2^31 bytes), time= 36.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xd20967dd
length= 4 gigabytes (2^32 bytes), time= 71.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd20967dd
length= 8 gigabytes (2^33 bytes), time= 146 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xd20967dd
length= 16 gigabytes (2^34 bytes), time= 300 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xd20967dd
length= 32 gigabytes (2^35 bytes), time= 601 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.9  p =1-7.9e-3   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd20967dd
length= 64 gigabytes (2^36 bytes), time= 1217 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -5.2  p =1-1.5e-3   unusual          
  ...and 188 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd20967dd
length= 128 gigabytes (2^37 bytes), time= 2438 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.7  p =1-3.0e-3   unusual          
  ...and 195 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd20967dd
length= 189.750 gigabytes (2^37.568 bytes), time= 3603 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  -2.2  p =1-1.0e-3   unusual          
  ...and 200 test result(s) without anomalies


real	60m2.940s
user	58m45.444s
sys	1m13.624s
*/
