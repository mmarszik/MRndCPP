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
/// @created on 2019-12-18 20:18:09 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 024b232b-fdf8-42f6-bbda-23ef1bb1f202                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot1a;
/* TEST00
time ./MRndCPP 
92309279
3119070050
1845224001
57059159
213157951
2758879820
4611737403008090914

real	0m21.012s
user	0m20.992s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.52e+07  |4024514711|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.91179417|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.52884637|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.45130975|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.50951776|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.20706381|  PASSED  
        diehard_opso|   0|   2097152|     100|0.12361983|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.01341781|  PASSED  
         diehard_dna|   0|   2097152|     100|0.63508731|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.08367412|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.57113121|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.09281939|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.03649684|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.90024301|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.28296849|  PASSED  
        diehard_sums|   0|       100|     100|0.51423430|  PASSED  
        diehard_runs|   0|    100000|     100|0.95058522|  PASSED  
        diehard_runs|   0|    100000|     100|0.73076225|  PASSED  
       diehard_craps|   0|    200000|     100|0.99532669|   WEAK   
       diehard_craps|   0|    200000|     100|0.76632736|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.33769554|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.23319712|  PASSED  
         sts_monobit|   1|    100000|     100|0.40804314|  PASSED  
            sts_runs|   2|    100000|     100|0.68842733|  PASSED  
          sts_serial|   1|    100000|     100|0.89170970|  PASSED  
          sts_serial|   2|    100000|     100|0.84982367|  PASSED  
          sts_serial|   3|    100000|     100|0.13503709|  PASSED  
          sts_serial|   3|    100000|     100|0.03992158|  PASSED  
          sts_serial|   4|    100000|     100|0.08176791|  PASSED  
          sts_serial|   4|    100000|     100|0.72163317|  PASSED  
          sts_serial|   5|    100000|     100|0.05866498|  PASSED  
          sts_serial|   5|    100000|     100|0.51391874|  PASSED  
          sts_serial|   6|    100000|     100|0.28051524|  PASSED  
          sts_serial|   6|    100000|     100|0.75830138|  PASSED  
          sts_serial|   7|    100000|     100|0.47482682|  PASSED  
          sts_serial|   7|    100000|     100|0.32337096|  PASSED  
          sts_serial|   8|    100000|     100|0.94738106|  PASSED  
          sts_serial|   8|    100000|     100|0.30343372|  PASSED  
          sts_serial|   9|    100000|     100|0.99756795|   WEAK   
          sts_serial|   9|    100000|     100|0.76421967|  PASSED  
          sts_serial|  10|    100000|     100|0.96670085|  PASSED  
          sts_serial|  10|    100000|     100|0.97657806|  PASSED  
          sts_serial|  11|    100000|     100|0.85173834|  PASSED  
          sts_serial|  11|    100000|     100|0.33543201|  PASSED  
          sts_serial|  12|    100000|     100|0.42431195|  PASSED  
          sts_serial|  12|    100000|     100|0.10442095|  PASSED  
          sts_serial|  13|    100000|     100|0.35708572|  PASSED  
          sts_serial|  13|    100000|     100|0.31742840|  PASSED  
          sts_serial|  14|    100000|     100|0.17405573|  PASSED  
          sts_serial|  14|    100000|     100|0.55913754|  PASSED  
          sts_serial|  15|    100000|     100|0.80421041|  PASSED  
          sts_serial|  15|    100000|     100|0.30483452|  PASSED  
          sts_serial|  16|    100000|     100|0.76900110|  PASSED  
          sts_serial|  16|    100000|     100|0.78562074|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.06402563|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.83341480|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.56267352|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.75202656|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.15530066|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.97747598|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.05825456|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.79405421|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.94766928|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.88602174|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.92329177|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.89823440|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.91863522|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.27598141|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.57277895|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.26087172|  PASSED  
    rgb_permutations|   2|    100000|     100|0.39150189|  PASSED  
    rgb_permutations|   3|    100000|     100|0.92523133|  PASSED  
    rgb_permutations|   4|    100000|     100|0.83500900|  PASSED  
    rgb_permutations|   5|    100000|     100|0.83254562|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.76880470|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.33978279|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.14419261|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.93603565|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.96577334|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.65770925|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.71075409|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.79000410|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.16196597|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.66861455|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.86762541|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.03371024|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.94471331|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.88926079|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.05487630|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.35364139|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.03675504|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.90291307|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.77545421|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.61591538|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.93210351|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.42339270|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.75463180|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.57299059|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.85955708|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.50174229|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.07023453|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.88287296|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.83421623|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.31858614|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.78710668|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.84799111|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.80379282|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.54245792|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.29051726|  PASSED  
             dab_dct| 256|     50000|       1|0.20641170|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.38159191|  PASSED  
        dab_filltree|  32|  15000000|       1|0.66338408|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.13261892|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.06485241|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.66440168|  PASSED  

real	61m9.785s
user	57m39.372s
sys	3m26.704s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe8012ab3
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe8012ab3
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xe8012ab3
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xe8012ab3
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xe8012ab3
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xe8012ab3
length= 2 gigabytes (2^31 bytes), time= 42.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.9  p =1-7.6e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe8012ab3
length= 4 gigabytes (2^32 bytes), time= 81.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xe8012ab3
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.9  p =1-2.0e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +4.4  p =  2.3e-3   unusual          
  ...and 157 test result(s) without anomalies


real	1m42.278s
user	1m38.708s
sys	0m3.416s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x729a0546
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x729a0546
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x729a0546
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x729a0546
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -5.0  p =1-1.7e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x729a0546
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x729a0546
length= 2 gigabytes (2^31 bytes), time= 42.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x729a0546
length= 4 gigabytes (2^32 bytes), time= 85.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x729a0546
length= 4.750 gigabytes (2^32.248 bytes), time= 102 seconds
  no anomalies in 159 test result(s)


real	1m42.679s
user	1m39.368s
sys	0m3.208s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb46ca4ff
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb46ca4ff
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xb46ca4ff
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xb46ca4ff
length= 512 megabytes (2^29 bytes), time= 11.3 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xb46ca4ff
length= 1 gigabyte (2^30 bytes), time= 22.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xb46ca4ff
length= 2 gigabytes (2^31 bytes), time= 42.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xb46ca4ff
length= 4 gigabytes (2^32 bytes), time= 81.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xb46ca4ff
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.5  p =  2.1e-3   unusual          
  ...and 158 test result(s) without anomalies


real	1m43.012s
user	1m39.552s
sys	0m3.348s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbd69eb3c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbd69eb3c
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xbd69eb3c
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xbd69eb3c
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xbd69eb3c
length= 1 gigabyte (2^30 bytes), time= 21.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xbd69eb3c
length= 2 gigabytes (2^31 bytes), time= 42.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.1  p =  7.6e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbd69eb3c
length= 4 gigabytes (2^32 bytes), time= 81.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xbd69eb3c
length= 8 gigabytes (2^33 bytes), time= 165 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xbd69eb3c
length= 16 gigabytes (2^34 bytes), time= 338 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xbd69eb3c
length= 32 gigabytes (2^35 bytes), time= 679 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  -4.2  p =1-1.1e-3   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbd69eb3c
length= 64 gigabytes (2^36 bytes), time= 1376 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xbd69eb3c
length= 128 gigabytes (2^37 bytes), time= 2756 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xbd69eb3c
length= 167.500 gigabytes (2^37.388 bytes), time= 3603 seconds
  no anomalies in 201 test result(s)


real	60m4.262s
user	58m17.072s
sys	1m43.324s
*/
/* TEST00
time ./MRndCPP 
92309279
3119070050
1845224001
57059159
213157951
2758879820
47292290030937

real	0m40.026s
user	0m39.992s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.21e+07  |2940932025|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.06148355|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.81873657|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.77620451|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.92621284|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.01093399|  PASSED  
        diehard_opso|   0|   2097152|     100|0.46045998|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.21380523|  PASSED  
         diehard_dna|   0|   2097152|     100|0.29754447|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.64887996|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.90304380|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.97807413|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.28756463|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.72149687|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.88217770|  PASSED  
        diehard_sums|   0|       100|     100|0.00006209|   WEAK   
        diehard_runs|   0|    100000|     100|0.37989597|  PASSED  
        diehard_runs|   0|    100000|     100|0.92116713|  PASSED  
       diehard_craps|   0|    200000|     100|0.68467702|  PASSED  
       diehard_craps|   0|    200000|     100|0.28915686|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.65854996|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.70267870|  PASSED  
         sts_monobit|   1|    100000|     100|0.22155199|  PASSED  
            sts_runs|   2|    100000|     100|0.66758054|  PASSED  
          sts_serial|   1|    100000|     100|0.81037679|  PASSED  
          sts_serial|   2|    100000|     100|0.17280080|  PASSED  
          sts_serial|   3|    100000|     100|0.97431221|  PASSED  
          sts_serial|   3|    100000|     100|0.50337310|  PASSED  
          sts_serial|   4|    100000|     100|0.08362670|  PASSED  
          sts_serial|   4|    100000|     100|0.22449367|  PASSED  
          sts_serial|   5|    100000|     100|0.21486145|  PASSED  
          sts_serial|   5|    100000|     100|0.49983516|  PASSED  
          sts_serial|   6|    100000|     100|0.83975619|  PASSED  
          sts_serial|   6|    100000|     100|0.21211425|  PASSED  
          sts_serial|   7|    100000|     100|0.15895276|  PASSED  
          sts_serial|   7|    100000|     100|0.08705284|  PASSED  
          sts_serial|   8|    100000|     100|0.11407849|  PASSED  
          sts_serial|   8|    100000|     100|0.66044215|  PASSED  
          sts_serial|   9|    100000|     100|0.34441064|  PASSED  
          sts_serial|   9|    100000|     100|0.97732222|  PASSED  
          sts_serial|  10|    100000|     100|0.92079292|  PASSED  
          sts_serial|  10|    100000|     100|0.16995791|  PASSED  
          sts_serial|  11|    100000|     100|0.28931600|  PASSED  
          sts_serial|  11|    100000|     100|0.55669550|  PASSED  
          sts_serial|  12|    100000|     100|0.68240265|  PASSED  
          sts_serial|  12|    100000|     100|0.80565601|  PASSED  
          sts_serial|  13|    100000|     100|0.73698357|  PASSED  
          sts_serial|  13|    100000|     100|0.80715055|  PASSED  
          sts_serial|  14|    100000|     100|0.77159654|  PASSED  
          sts_serial|  14|    100000|     100|0.73359527|  PASSED  
          sts_serial|  15|    100000|     100|0.00254561|   WEAK   
          sts_serial|  15|    100000|     100|0.49889091|  PASSED  
          sts_serial|  16|    100000|     100|0.40970753|  PASSED  
          sts_serial|  16|    100000|     100|0.96093259|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.31140846|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.04194696|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.02923982|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.57072402|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.77072179|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.74322636|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.12839780|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.36002713|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.49294338|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.51107164|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.78249262|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.75952881|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.95413960|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.72635761|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.12074023|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.87908148|  PASSED  
    rgb_permutations|   2|    100000|     100|0.52202354|  PASSED  
    rgb_permutations|   3|    100000|     100|0.20140075|  PASSED  
    rgb_permutations|   4|    100000|     100|0.95239180|  PASSED  
    rgb_permutations|   5|    100000|     100|0.58111554|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.76016931|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.49556424|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.62160209|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.49313217|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.19360828|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.87558286|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.72438273|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.16381218|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.53741189|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.03759318|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.76931873|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.98889792|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.84835056|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.73186648|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.59595588|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.16437532|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.35106561|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.06953511|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.65496165|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.89487860|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.03168643|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.96804044|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.88467407|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.50521909|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.46224455|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.76483932|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.20425376|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.63745383|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.47393792|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.00374894|   WEAK   
      rgb_lagged_sum|  30|   1000000|     100|0.36849391|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.98948102|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.34567785|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.73579108|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.06730011|  PASSED  
             dab_dct| 256|     50000|       1|0.20493281|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.09928082|  PASSED  
        dab_filltree|  32|  15000000|       1|0.59409189|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.83292150|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.31638668|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.40696115|  PASSED  

real	52m15.598s
user	48m40.100s
sys	3m32.252s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x119e7936
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x119e7936
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x119e7936
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x119e7936
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x119e7936
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x119e7936
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x119e7936
length= 4 gigabytes (2^32 bytes), time= 72.4 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x119e7936
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.834s
user	1m42.308s
sys	0m2.396s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdcad0a2a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdcad0a2a
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.6  p =  4.8e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xdcad0a2a
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xdcad0a2a
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xdcad0a2a
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xdcad0a2a
length= 2 gigabytes (2^31 bytes), time= 36.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xdcad0a2a
length= 4 gigabytes (2^32 bytes), time= 73.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xdcad0a2a
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.848s
user	1m41.516s
sys	0m2.208s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x7b23de29
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x7b23de29
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x7b23de29
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x7b23de29
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.5e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x7b23de29
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x7b23de29
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x7b23de29
length= 4 gigabytes (2^32 bytes), time= 71.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x7b23de29
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.809s
user	1m42.164s
sys	0m2.500s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xee0a3ce7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xee0a3ce7
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xee0a3ce7
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xee0a3ce7
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.8  p =  1.3e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xee0a3ce7
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xee0a3ce7
length= 2 gigabytes (2^31 bytes), time= 36.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  -2.5  p =1-2.2e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xee0a3ce7
length= 4 gigabytes (2^32 bytes), time= 71.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  -2.3  p =1-7.4e-4   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xee0a3ce7
length= 8 gigabytes (2^33 bytes), time= 143 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xee0a3ce7
length= 16 gigabytes (2^34 bytes), time= 296 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xee0a3ce7
length= 32 gigabytes (2^35 bytes), time= 599 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xee0a3ce7
length= 64 gigabytes (2^36 bytes), time= 1226 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xee0a3ce7
length= 128 gigabytes (2^37 bytes), time= 2456 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xee0a3ce7
length= 188.500 gigabytes (2^37.558 bytes), time= 3602 seconds
  no anomalies in 201 test result(s)


real	60m3.268s
user	58m36.472s
sys	1m13.148s
*/
