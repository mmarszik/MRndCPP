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
/// @created on 2019-12-08 03:00:46 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5992744a-46f6-4728-9046-d424638b4e1a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_mlin.h"

namespace MRnd {

using TMRnd = RndMLin;

}
/* TEST00
time ./MRndCPP 10 
3965470238
3250315852
198932180
1260725522
1837933855
2678640912
3171553997
955456313
3981407081
1669755761
4344978182468260226

real	0m2.925s
user	0m2.918s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.32e+07  |3762334873|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.62299884|  PASSED  

real	0m22.151s
user	0m22.757s
sys	0m0.552s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 30s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7cd6c5bd
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7cd6c5bd
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7cd6c5bd
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7cd6c5bd
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7cd6c5bd
length= 1 gigabyte (2^30 bytes), time= 22.3 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x7cd6c5bd
length= 1.500 gigabytes (2^30.585 bytes), time= 32.8 seconds
  no anomalies in 187 test result(s)


real	0m33.626s
user	0m33.252s
sys	0m1.242s
*/
/* TEST00
time ./MRndCPP 10 
3965470238
3250315852
198932180
1260725522
1837933855
2678640912
3171553997
955456313
3981407081
1669755761
4344978182468260226

real	0m3.006s
user	0m3.001s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  4.43e+07  |2318861130|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.43301098|  PASSED  

real	0m22.096s
user	0m22.542s
sys	0m0.749s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 300s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x8fb57d9
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x8fb57d9
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 256 megabytes (2^28 bytes), time= 5.8 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.0  p =  9.9e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x8fb57d9
length= 512 megabytes (2^29 bytes), time= 11.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 1 gigabyte (2^30 bytes), time= 22.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 2 gigabytes (2^31 bytes), time= 42.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 4 gigabytes (2^32 bytes), time= 82.4 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 8 gigabytes (2^33 bytes), time= 163 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x8fb57d9
length= 15.000 gigabytes (2^33.907 bytes), time= 303 seconds
  no anomalies in 226 test result(s)


real	5m3.879s
user	5m2.225s
sys	0m10.076s
*/
/* TEST00
time ./MRndCPP 12 
3965470238
3250315852
198932180
1260725522
1837933855
2678640912
3171553997
955456313
3981407081
1669755761
3404092749393829452

real	0m11.871s
user	0m11.853s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 10 
3965470238
3250315852
198932180
1260725522
1837933855
2678640912
3171553997
955456313
3981407081
1669755761
4344978182468260226

real	0m3.596s
user	0m3.592s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -d2 -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.14e+07  |1630937496|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
  diehard_rank_32x32|   0|     40000|     100|0.82497866|  PASSED  

real	0m25.009s
user	0m24.504s
sys	0m0.476s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x3fe181a1
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x3fe181a1
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 1 gigabyte (2^30 bytes), time= 23.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:cross        R=  -2.3  p =1-5.6e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x3fe181a1
length= 2 gigabytes (2^31 bytes), time= 46.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 4 gigabytes (2^32 bytes), time= 88.3 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 8 gigabytes (2^33 bytes), time= 180 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.5  p =  3.8e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x3fe181a1
length= 16 gigabytes (2^34 bytes), time= 368 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x3fe181a1
length= 32 gigabytes (2^35 bytes), time= 735 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-0,T)         R=  +7.9  p =  9.8e-4   unusual          
  [Low1/32]BCFN(2+0,13-1,T)         R=  +8.0  p =  9.5e-4   unusual          
  ...and 233 test result(s) without anomalies

rng=RNG_stdin, seed=0x3fe181a1
length= 43.000 gigabytes (2^35.426 bytes), time= 1001 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-0,T)         R=  +8.9  p =  2.5e-4   unusual          
  ...and 241 test result(s) without anomalies


real	16m42.260s
user	16m23.384s
sys	0m17.708s
*/
/* TEST00
time ./MRndCPP 12 
2362438063
867507993
1510717058
1158113347
143941529
4048593575
897908158
146052071
970705353
4060374917
13561188350106171953

real	0m17.749s
user	0m17.744s
sys	0m0.003s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
test.sh: line 26: dieharder: command not found

real	0m0.003s
user	0m0.002s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7ce40265
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7ce40265
length= 64 megabytes (2^26 bytes), time= 2.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x7ce40265
length= 128 megabytes (2^27 bytes), time= 5.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7ce40265
length= 256 megabytes (2^28 bytes), time= 10.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R=  +9.6  p =  1.0e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  -5.0  p =1-1.5e-3   unusual          
  ...and 160 test result(s) without anomalies

rng=RNG_stdin, seed=0x7ce40265
length= 512 megabytes (2^29 bytes), time= 18.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7ce40265
length= 1 gigabyte (2^30 bytes), time= 35.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x7ce40265
length= 2 gigabytes (2^31 bytes), time= 68.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x7ce40265
length= 4 gigabytes (2^32 bytes), time= 125 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R=  -6.6  p =1-1.5e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x7ce40265
length= 8 gigabytes (2^33 bytes), time= 246 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-2,T)         R=  +7.9  p =  1.3e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x7ce40265
length= 16 gigabytes (2^34 bytes), time= 487 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x7ce40265
length= 32 gigabytes (2^35 bytes), time= 951 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x7ce40265
length= 64 gigabytes (2^36 bytes), time= 1903 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x7ce40265
length= 121.000 gigabytes (2^36.919 bytes), time= 3600 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.4  p =1-7.3e-3   unusual          
  ...and 257 test result(s) without anomalies


real	60m1.676s
user	58m40.431s
sys	1m18.103s
*/
/* TEST00
time ./MRndCPP 12 
2362438063
867507993
1510717058
1158113347
143941529
4048593575
897908158
146052071
970705353
4060374917
13561188350106171953

real	0m19.010s
user	0m19.009s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.22e+07  |3907882021|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.80310026|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.70386323|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.97628487|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.79796090|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.62179590|  PASSED  
        diehard_opso|   0|   2097152|     100|0.83213862|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.10664231|  PASSED  
         diehard_dna|   0|   2097152|     100|0.69684481|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.46375822|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.52765764|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.66609484|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.32604859|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.62162833|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.90542881|  PASSED  
        diehard_sums|   0|       100|     100|0.04143063|  PASSED  
        diehard_runs|   0|    100000|     100|0.89211160|  PASSED  
        diehard_runs|   0|    100000|     100|0.80865869|  PASSED  
       diehard_craps|   0|    200000|     100|0.65439105|  PASSED  
       diehard_craps|   0|    200000|     100|0.51364680|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.10577864|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.24430185|  PASSED  
         sts_monobit|   1|    100000|     100|0.74030795|  PASSED  
            sts_runs|   2|    100000|     100|0.99670871|   WEAK   
          sts_serial|   1|    100000|     100|0.55780634|  PASSED  
          sts_serial|   2|    100000|     100|0.99586731|   WEAK   
          sts_serial|   3|    100000|     100|0.71141837|  PASSED  
          sts_serial|   3|    100000|     100|0.62697185|  PASSED  
          sts_serial|   4|    100000|     100|0.46357567|  PASSED  
          sts_serial|   4|    100000|     100|0.44159083|  PASSED  
          sts_serial|   5|    100000|     100|0.09105371|  PASSED  
          sts_serial|   5|    100000|     100|0.37385707|  PASSED  
          sts_serial|   6|    100000|     100|0.12926645|  PASSED  
          sts_serial|   6|    100000|     100|0.92165045|  PASSED  
          sts_serial|   7|    100000|     100|0.41417962|  PASSED  
          sts_serial|   7|    100000|     100|0.97272248|  PASSED  
          sts_serial|   8|    100000|     100|0.11615980|  PASSED  
          sts_serial|   8|    100000|     100|0.50008718|  PASSED  
          sts_serial|   9|    100000|     100|0.20199111|  PASSED  
          sts_serial|   9|    100000|     100|0.82979504|  PASSED  
          sts_serial|  10|    100000|     100|0.14325879|  PASSED  
          sts_serial|  10|    100000|     100|0.86263816|  PASSED  
          sts_serial|  11|    100000|     100|0.39649336|  PASSED  
          sts_serial|  11|    100000|     100|0.15798894|  PASSED  
          sts_serial|  12|    100000|     100|0.02829795|  PASSED  
          sts_serial|  12|    100000|     100|0.55268634|  PASSED  
          sts_serial|  13|    100000|     100|0.55985823|  PASSED  
          sts_serial|  13|    100000|     100|0.11336045|  PASSED  
          sts_serial|  14|    100000|     100|0.29821153|  PASSED  
          sts_serial|  14|    100000|     100|0.75153295|  PASSED  
          sts_serial|  15|    100000|     100|0.55723682|  PASSED  
          sts_serial|  15|    100000|     100|0.94799805|  PASSED  
          sts_serial|  16|    100000|     100|0.94207066|  PASSED  
          sts_serial|  16|    100000|     100|0.99995241|   WEAK   
         rgb_bitdist|   1|    100000|     100|0.72967272|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.55014813|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.95487582|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.60211029|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.67305236|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.92770664|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.51889073|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.76333185|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.19780798|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.24073240|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.91673765|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.48916587|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.66140254|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.43668470|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.78072799|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.02722487|  PASSED  
    rgb_permutations|   2|    100000|     100|0.26036943|  PASSED  
    rgb_permutations|   3|    100000|     100|0.61739333|  PASSED  
    rgb_permutations|   4|    100000|     100|0.09030484|  PASSED  
    rgb_permutations|   5|    100000|     100|0.27396416|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.00438783|   WEAK   
      rgb_lagged_sum|   1|   1000000|     100|0.66173285|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.98781516|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.41459476|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.70789347|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.69220127|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.99473343|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.15737787|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.44022729|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.63912756|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.34125013|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.64915867|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.99836588|   WEAK   
      rgb_lagged_sum|  13|   1000000|     100|0.13143437|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.04666751|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.72186768|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.04651376|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.19226438|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.74992103|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.95666808|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.17373546|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.20975278|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.36807235|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.60509208|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.22048833|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.99781553|   WEAK   
      rgb_lagged_sum|  26|   1000000|     100|0.58563054|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.34399950|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.42706458|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.53704602|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.26581081|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.70346597|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.72091867|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.20704390|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.85166067|  PASSED  
             dab_dct| 256|     50000|       1|0.48873663|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.76270701|  PASSED  
        dab_filltree|  32|  15000000|       1|0.16650226|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.55857718|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.17122372|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.95803400|  PASSED  

real	70m27.419s
user	62m28.225s
sys	7m57.642s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4a8587fd
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4a8587fd
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 128 megabytes (2^27 bytes), time= 6.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 256 megabytes (2^28 bytes), time= 11.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 512 megabytes (2^29 bytes), time= 19.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 1 gigabyte (2^30 bytes), time= 35.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 2 gigabytes (2^31 bytes), time= 66.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 4 gigabytes (2^32 bytes), time= 128 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 8 gigabytes (2^33 bytes), time= 248 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 16 gigabytes (2^34 bytes), time= 496 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 32 gigabytes (2^35 bytes), time= 961 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-1,T)         R=  -7.0  p =1-1.4e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x4a8587fd
length= 64 gigabytes (2^36 bytes), time= 1918 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.1  p =  8.7e-4   unusual          
  [Low4/32]BCFN(2+2,13-0,T)         R=  +8.1  p =  7.7e-4   unusual          
  ...and 245 test result(s) without anomalies

rng=RNG_stdin, seed=0x4a8587fd
length= 128 gigabytes (2^37 bytes), time= 3818 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 256 gigabytes (2^38 bytes), time= 7569 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 512 gigabytes (2^39 bytes), time= 15530 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 1 terabyte (2^40 bytes), time= 32081 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 2 terabytes (2^41 bytes), time= 63228 seconds
  no anomalies in 299 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 4 terabytes (2^42 bytes), time= 129406 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0x4a8587fd
length= 8 terabytes (2^43 bytes), time= 252562 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:cross        R=  -2.4  p =1-2.8e-4   unusual          
  ...and 321 test result(s) without anomalies

rng=RNG_stdin, seed=0x4a8587fd
length= 11.339 terabytes (2^43.503 bytes), time= 345606 seconds
  no anomalies in 327 test result(s)


real	5760m7.347s
user	5636m30.673s
sys	121m27.882s
*/
/* TEST00
time ./MRndCPP 12 
1406611136
936739793
564986942
3842340640
43913381
3234846780
260561748
1118761733
2817261312
1081815496
10397198807207156141

real	0m11,970s
user	0m11,954s
sys	0m0,004s
*/
/* TEST00
time ./MRndCPP 12 
1406611136
936739793
564986942
3842340640
43913381
3234846780
260561748
1118761733
2817261312
1081815496
10397198807207156141

real	0m12,005s
user	0m12,005s
sys	0m0,000s
*/
/* TEST00
time ./MRndCPP 12 
1406611136
936739793
564986942
3842340640
43913381
3234846780
260561748
1118761733
2817261312
1081815496
10397198807207156141

real	0m13,303s
user	0m13,284s
sys	0m0,004s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x2f74c5d4
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x2f74c5d4
length= 128 megabytes (2^27 bytes), time= 3.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-5,T)         R=  +9.3  p =  7.8e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x2f74c5d4
length= 256 megabytes (2^28 bytes), time= 7.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x2f74c5d4
length= 512 megabytes (2^29 bytes), time= 14.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +6.8  p =  1.0e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x2f74c5d4
length= 1 gigabyte (2^30 bytes), time= 27.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +6.1  p =  2.5e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x2f74c5d4
length= 2 gigabytes (2^31 bytes), time= 49.0 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.5  p =  3.5e-4   unusual          
  [Low4/32]DC6-9x1Bytes-1           R=  +6.3  p =  2.7e-3   unusual          
  ...and 192 test result(s) without anomalies

rng=RNG_stdin, seed=0x2f74c5d4
length= 4 gigabytes (2^32 bytes), time= 93.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -4.1  p =1-2.1e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x2f74c5d4
length= 8 gigabytes (2^33 bytes), time= 184 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -4.6  p =1-7.1e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x2f74c5d4
length= 16 gigabytes (2^34 bytes), time= 342 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x2f74c5d4
length= 29.500 gigabytes (2^34.883 bytes), time= 601 seconds
  no anomalies in 235 test result(s)


real	10m1,580s
user	9m54,596s
sys	0m25,345s
*/
/* TEST00
time ./MRndCPP 14 
./test.sh: line 18: ./MRndCPP_31387255511927116238283472053612292: No such file or directory

real	0m0.001s
user	0m0.000s
sys	0m0.001s
*/
/* TEST00
time ./MRndCPP 14 
1406611136
936739793
564986942
3842340640
43913381
3234846780
260561748
1118761733
2817261312
1081815496
9072967096149172433

real	1m32.016s
user	1m31.800s
sys	0m0.029s
*/
/* TEST00
time ./MRndCPP 14 
1406611136
936739793
564986942
3842340640
43913381
3234846780
260561748
1118761733
2817261312
1081815496
9072967096149172433

real	1m49.608s
user	1m48.985s
sys	0m0.067s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.09e+07  |3123768042|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.69770225|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.26108230|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.37500129|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.39752558|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.96788365|  PASSED  
        diehard_opso|   0|   2097152|     100|0.84262740|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.90077301|  PASSED  
         diehard_dna|   0|   2097152|     100|0.31047579|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.79126390|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.52036333|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.01968226|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.39904276|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.18655010|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.40946639|  PASSED  
        diehard_sums|   0|       100|     100|0.01522341|  PASSED  
        diehard_runs|   0|    100000|     100|0.98584766|  PASSED  
        diehard_runs|   0|    100000|     100|0.36930403|  PASSED  
       diehard_craps|   0|    200000|     100|0.53134455|  PASSED  
       diehard_craps|   0|    200000|     100|0.27130462|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.33944572|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.19338054|  PASSED  
         sts_monobit|   1|    100000|     100|0.49233395|  PASSED  
            sts_runs|   2|    100000|     100|0.04162504|  PASSED  
          sts_serial|   1|    100000|     100|0.51732959|  PASSED  
          sts_serial|   2|    100000|     100|0.26417793|  PASSED  
          sts_serial|   3|    100000|     100|0.34234507|  PASSED  
          sts_serial|   3|    100000|     100|0.55197794|  PASSED  
          sts_serial|   4|    100000|     100|0.78550202|  PASSED  
          sts_serial|   4|    100000|     100|0.12760508|  PASSED  
          sts_serial|   5|    100000|     100|0.54375963|  PASSED  
          sts_serial|   5|    100000|     100|0.61350715|  PASSED  
          sts_serial|   6|    100000|     100|0.29259062|  PASSED  
          sts_serial|   6|    100000|     100|0.17343047|  PASSED  
          sts_serial|   7|    100000|     100|0.78658727|  PASSED  
          sts_serial|   7|    100000|     100|0.05046463|  PASSED  
          sts_serial|   8|    100000|     100|0.79309052|  PASSED  
          sts_serial|   8|    100000|     100|0.65734398|  PASSED  
          sts_serial|   9|    100000|     100|0.37282887|  PASSED  
          sts_serial|   9|    100000|     100|0.51285159|  PASSED  
          sts_serial|  10|    100000|     100|0.51133421|  PASSED  
          sts_serial|  10|    100000|     100|0.87262598|  PASSED  
          sts_serial|  11|    100000|     100|0.59022808|  PASSED  
          sts_serial|  11|    100000|     100|0.82038549|  PASSED  
          sts_serial|  12|    100000|     100|0.26216895|  PASSED  
          sts_serial|  12|    100000|     100|0.58380683|  PASSED  
          sts_serial|  13|    100000|     100|0.88655561|  PASSED  
          sts_serial|  13|    100000|     100|0.63285239|  PASSED  
          sts_serial|  14|    100000|     100|0.91259037|  PASSED  
          sts_serial|  14|    100000|     100|0.47147604|  PASSED  
          sts_serial|  15|    100000|     100|0.91407869|  PASSED  
          sts_serial|  15|    100000|     100|0.35824325|  PASSED  
          sts_serial|  16|    100000|     100|0.77647345|  PASSED  
          sts_serial|  16|    100000|     100|0.80310863|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.35445946|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.44202949|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.36050457|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.51728410|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.73384712|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.21627554|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.21100540|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.49308999|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.41154684|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.97515976|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.68590169|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.16995091|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.53158132|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.61289965|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.02274856|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.80996407|  PASSED  
    rgb_permutations|   2|    100000|     100|0.03821681|  PASSED  
    rgb_permutations|   3|    100000|     100|0.48823042|  PASSED  
    rgb_permutations|   4|    100000|     100|0.80947400|  PASSED  
    rgb_permutations|   5|    100000|     100|0.27220771|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.39480379|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.15324645|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.17235010|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.38971963|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.94863814|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.77871968|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.22738465|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.47728764|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.58348551|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.63486239|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.22241215|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.87758850|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.28708901|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.52270163|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.20579277|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.68004488|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.64694000|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.34845202|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.67918510|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.41657884|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.10420663|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.46234280|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.79575874|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.61847662|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.19675709|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.96429676|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.37365200|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.39923893|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.20596193|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.76207894|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.29442112|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.60882353|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.41864477|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.93502773|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.93815309|  PASSED  
             dab_dct| 256|     50000|       1|0.88294939|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.38853546|  PASSED  
        dab_filltree|  32|  15000000|       1|0.49731612|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.38109512|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.06056093|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.77858733|  PASSED  

real	101m1.618s
user	88m58.742s
sys	11m24.205s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  1.11e+07  |2186239880|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.66554921|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.69687162|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.77758505|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.94840064|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.66585305|  PASSED  
        diehard_opso|   0|   2097152|     100|0.69021593|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.99957458|   WEAK   
         diehard_dna|   0|   2097152|     100|0.72681892|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.00032780|   WEAK   
diehard_count_1s_byt|   0|    256000|     100|0.65366769|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.91461926|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.27991789|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.70070651|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.25949513|  PASSED  
        diehard_sums|   0|       100|     100|0.00576262|  PASSED  
        diehard_runs|   0|    100000|     100|0.88647527|  PASSED  
        diehard_runs|   0|    100000|     100|0.36452388|  PASSED  
       diehard_craps|   0|    200000|     100|0.61010310|  PASSED  
       diehard_craps|   0|    200000|     100|0.17426741|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.02376024|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.17286923|  PASSED  
         sts_monobit|   1|    100000|     100|0.32230323|  PASSED  
            sts_runs|   2|    100000|     100|0.35160404|  PASSED  
          sts_serial|   1|    100000|     100|0.17582891|  PASSED  
          sts_serial|   2|    100000|     100|0.59216592|  PASSED  
          sts_serial|   3|    100000|     100|0.95359550|  PASSED  
          sts_serial|   3|    100000|     100|0.81131890|  PASSED  
          sts_serial|   4|    100000|     100|0.04210771|  PASSED  
          sts_serial|   4|    100000|     100|0.01850879|  PASSED  
          sts_serial|   5|    100000|     100|0.03046894|  PASSED  
          sts_serial|   5|    100000|     100|0.33424326|  PASSED  
          sts_serial|   6|    100000|     100|0.35044669|  PASSED  
          sts_serial|   6|    100000|     100|0.97753296|  PASSED  
          sts_serial|   7|    100000|     100|0.14790669|  PASSED  
          sts_serial|   7|    100000|     100|0.16317205|  PASSED  
          sts_serial|   8|    100000|     100|0.19517183|  PASSED  
          sts_serial|   8|    100000|     100|0.41187500|  PASSED  
          sts_serial|   9|    100000|     100|0.81093087|  PASSED  
          sts_serial|   9|    100000|     100|0.36894478|  PASSED  
          sts_serial|  10|    100000|     100|0.33561009|  PASSED  
          sts_serial|  10|    100000|     100|0.14082265|  PASSED  
          sts_serial|  11|    100000|     100|0.91452686|  PASSED  
          sts_serial|  11|    100000|     100|0.13363293|  PASSED  
          sts_serial|  12|    100000|     100|0.28351091|  PASSED  
          sts_serial|  12|    100000|     100|0.47584667|  PASSED  
          sts_serial|  13|    100000|     100|0.51996011|  PASSED  
          sts_serial|  13|    100000|     100|0.38738538|  PASSED  
          sts_serial|  14|    100000|     100|0.91541217|  PASSED  
          sts_serial|  14|    100000|     100|0.42529882|  PASSED  
          sts_serial|  15|    100000|     100|0.26736787|  PASSED  
          sts_serial|  15|    100000|     100|0.14532028|  PASSED  
          sts_serial|  16|    100000|     100|0.09792884|  PASSED  
          sts_serial|  16|    100000|     100|0.16303348|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.50653187|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.42048240|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.17694602|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.58501020|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.99186621|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.24569688|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.38735056|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.18172774|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.08863296|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.36270662|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.91851769|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.53318280|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.57102054|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.89884925|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.93342964|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.30937918|  PASSED  
    rgb_permutations|   2|    100000|     100|0.18915631|  PASSED  
    rgb_permutations|   3|    100000|     100|0.93739905|  PASSED  
    rgb_permutations|   4|    100000|     100|0.47247166|  PASSED  
    rgb_permutations|   5|    100000|     100|0.28924800|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.47240994|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.07013562|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.49574465|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.38842142|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.62015106|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.22232588|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.47775729|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.80050235|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.17833238|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.16804731|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.46322305|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.51685653|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.90548464|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.35711420|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.27746461|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.68439866|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.74595024|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.93460056|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.50358435|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.53283656|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.89156826|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.03560962|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.18946472|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.19187574|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.06308801|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.16990349|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.16288366|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.23051013|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.72923975|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.19031478|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.70267631|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.61788394|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.98452477|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.05321916|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.79535921|  PASSED  
             dab_dct| 256|     50000|       1|0.74683362|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.40148409|  PASSED  
        dab_filltree|  32|  15000000|       1|0.38296505|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.41196122|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.90850685|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.08244713|  PASSED  

real	101m52.227s
user	90m13.463s
sys	11m9.764s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x898ab93f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x898ab93f
length= 32 megabytes (2^25 bytes), time= 2.5 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 64 megabytes (2^26 bytes), time= 5.5 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 128 megabytes (2^27 bytes), time= 10.4 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 256 megabytes (2^28 bytes), time= 17.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 512 megabytes (2^29 bytes), time= 29.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 1 gigabyte (2^30 bytes), time= 53.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 2 gigabytes (2^31 bytes), time= 99.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 4 gigabytes (2^32 bytes), time= 189 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 8 gigabytes (2^33 bytes), time= 367 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 16 gigabytes (2^34 bytes), time= 726 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 32 gigabytes (2^35 bytes), time= 1421 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 64 gigabytes (2^36 bytes), time= 2850 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x898ab93f
length= 82.000 gigabytes (2^36.358 bytes), time= 3608 seconds
  no anomalies in 251 test result(s)


real	60m10.733s
user	58m25.231s
sys	1m25.655s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xdae5db96
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xdae5db96
length= 32 megabytes (2^25 bytes), time= 2.2 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0xdae5db96
length= 64 megabytes (2^26 bytes), time= 5.3 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xdae5db96
length= 128 megabytes (2^27 bytes), time= 9.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xdae5db96
length= 256 megabytes (2^28 bytes), time= 17.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all          R=  +4.7  p =  7.0e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xdae5db96
length= 512 megabytes (2^29 bytes), time= 29.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xdae5db96
length= 1 gigabyte (2^30 bytes), time= 53.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xdae5db96
length= 2 gigabytes (2^31 bytes), time= 101 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xdae5db96
length= 4 gigabytes (2^32 bytes), time= 190 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xdae5db96
length= 8 gigabytes (2^33 bytes), time= 369 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.7  p =  2.8e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0xdae5db96
length= 16 gigabytes (2^34 bytes), time= 727 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.4  p =  3.6e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0xdae5db96
length= 32 gigabytes (2^35 bytes), time= 1422 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xdae5db96
length= 64 gigabytes (2^36 bytes), time= 2857 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xdae5db96
length= 81.750 gigabytes (2^36.353 bytes), time= 3609 seconds
  no anomalies in 251 test result(s)


real	60m11.383s
user	58m22.044s
sys	1m25.849s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x514e03f7
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x514e03f7
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x514e03f7
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+3,13-3,T)                  R=  +9.7  p =  2.2e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x514e03f7
length= 256 megabytes (2^28 bytes), time= 14.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x514e03f7
length= 512 megabytes (2^29 bytes), time= 26.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x514e03f7
length= 1 gigabyte (2^30 bytes), time= 49.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x514e03f7
length= 2 gigabytes (2^31 bytes), time= 94.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x514e03f7
length= 4 gigabytes (2^32 bytes), time= 180 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.8  p =1-2.1e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x514e03f7
length= 8 gigabytes (2^33 bytes), time= 356 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x514e03f7
length= 16 gigabytes (2^34 bytes), time= 703 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x514e03f7
length= 32 gigabytes (2^35 bytes), time= 1392 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x514e03f7
length= 64 gigabytes (2^36 bytes), time= 2833 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x514e03f7
length= 82.250 gigabytes (2^36.362 bytes), time= 3600 seconds
  no anomalies in 251 test result(s)


real	60m2.236s
user	58m17.923s
sys	1m23.630s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7c9c26b9
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7c9c26b9
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x7c9c26b9
length= 128 megabytes (2^27 bytes), time= 7.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7c9c26b9
length= 256 megabytes (2^28 bytes), time= 13.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.9  p =  5.6e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x7c9c26b9
length= 512 megabytes (2^29 bytes), time= 25.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7c9c26b9
length= 1 gigabyte (2^30 bytes), time= 48.6 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.2  p =  7.0e-4   unusual          
  [Low4/32]BCFN(2+1,13-3,T)         R=  -7.5  p =1-3.3e-4   unusual          
  [Low4/32]DC6-9x1Bytes-1           R=  -5.2  p =1-1.1e-3   unusual          
  ...and 180 test result(s) without anomalies

rng=RNG_stdin, seed=0x7c9c26b9
length= 2 gigabytes (2^31 bytes), time= 94.3 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R= +10.2  p =  6.3e-9    VERY SUSPICIOUS 
  [Low4/32]BCFN(2+1,13-2,T)         R=  -7.2  p =1-7.8e-4   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +6.4  p =  1.8e-3   unusual          
  ...and 191 test result(s) without anomalies

rng=RNG_stdin, seed=0x7c9c26b9
length= 4 gigabytes (2^32 bytes), time= 182 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +7.3  p =  1.6e-6   suspicious       
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x7c9c26b9
length= 8 gigabytes (2^33 bytes), time= 358 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.3  p =  5.8e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x7c9c26b9
length= 16 gigabytes (2^34 bytes), time= 707 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x7c9c26b9
length= 32 gigabytes (2^35 bytes), time= 1391 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x7c9c26b9
length= 64 gigabytes (2^36 bytes), time= 2832 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x7c9c26b9
length= 82.500 gigabytes (2^36.366 bytes), time= 3608 seconds
  no anomalies in 251 test result(s)


real	60m9.656s
user	58m25.006s
sys	1m24.653s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x6e9fcf09
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x6e9fcf09
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +6.1  p =  3.9e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x6e9fcf09
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x6e9fcf09
length= 256 megabytes (2^28 bytes), time= 14.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x6e9fcf09
length= 512 megabytes (2^29 bytes), time= 26.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x6e9fcf09
length= 1 gigabyte (2^30 bytes), time= 48.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x6e9fcf09
length= 2 gigabytes (2^31 bytes), time= 93.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x6e9fcf09
length= 4 gigabytes (2^32 bytes), time= 179 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x6e9fcf09
length= 8 gigabytes (2^33 bytes), time= 352 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x6e9fcf09
length= 16 gigabytes (2^34 bytes), time= 698 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.4  p =  5.9e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x6e9fcf09
length= 32 gigabytes (2^35 bytes), time= 1399 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x6e9fcf09
length= 64 gigabytes (2^36 bytes), time= 2837 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x6e9fcf09
length= 81.750 gigabytes (2^36.353 bytes), time= 3608 seconds
  no anomalies in 251 test result(s)


real	60m10.603s
user	58m26.310s
sys	1m25.403s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xc9bb400d
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xc9bb400d
length= 64 megabytes (2^26 bytes), time= 2.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +5.1  p =  8.9e-4   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xc9bb400d
length= 128 megabytes (2^27 bytes), time= 7.0 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xc9bb400d
length= 256 megabytes (2^28 bytes), time= 13.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xc9bb400d
length= 512 megabytes (2^29 bytes), time= 25.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xc9bb400d
length= 1 gigabyte (2^30 bytes), time= 48.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xc9bb400d
length= 2 gigabytes (2^31 bytes), time= 92.1 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xc9bb400d
length= 4 gigabytes (2^32 bytes), time= 179 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xc9bb400d
length= 8 gigabytes (2^33 bytes), time= 352 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xc9bb400d
length= 16 gigabytes (2^34 bytes), time= 698 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xc9bb400d
length= 32 gigabytes (2^35 bytes), time= 1402 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xc9bb400d
length= 64 gigabytes (2^36 bytes), time= 2848 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xc9bb400d
length= 81.500 gigabytes (2^36.349 bytes), time= 3607 seconds
  no anomalies in 251 test result(s)


real	60m9.085s
user	58m23.864s
sys	1m24.900s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x33580d59
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x33580d59
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.5  p =1-3.2e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x33580d59
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -5.5  p =1-7.9e-4   mildly suspicious
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x33580d59
length= 256 megabytes (2^28 bytes), time= 14.7 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x33580d59
length= 512 megabytes (2^29 bytes), time= 28.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x33580d59
length= 1 gigabyte (2^30 bytes), time= 52.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x33580d59
length= 2 gigabytes (2^31 bytes), time= 98.9 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x33580d59
length= 4 gigabytes (2^32 bytes), time= 186 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x33580d59
length= 8 gigabytes (2^33 bytes), time= 365 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x33580d59
length= 16 gigabytes (2^34 bytes), time= 723 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x33580d59
length= 32 gigabytes (2^35 bytes), time= 1419 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x33580d59
length= 64 gigabytes (2^36 bytes), time= 2838 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x33580d59
length= 81.500 gigabytes (2^36.349 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m5.501s
user	58m24.334s
sys	1m26.382s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x232d0fc5
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x232d0fc5
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x232d0fc5
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x232d0fc5
length= 256 megabytes (2^28 bytes), time= 14.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:B                 R=  -4.1  p =1-1.8e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x232d0fc5
length= 512 megabytes (2^29 bytes), time= 27.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x232d0fc5
length= 1 gigabyte (2^30 bytes), time= 51.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x232d0fc5
length= 2 gigabytes (2^31 bytes), time= 97.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.1  p =1-5.2e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x232d0fc5
length= 4 gigabytes (2^32 bytes), time= 185 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x232d0fc5
length= 8 gigabytes (2^33 bytes), time= 364 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x232d0fc5
length= 16 gigabytes (2^34 bytes), time= 717 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +4.8  p =  7.4e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x232d0fc5
length= 32 gigabytes (2^35 bytes), time= 1417 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x232d0fc5
length= 64 gigabytes (2^36 bytes), time= 2827 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x232d0fc5
length= 81.750 gigabytes (2^36.353 bytes), time= 3602 seconds
  no anomalies in 251 test result(s)


real	60m4.699s
user	58m23.084s
sys	1m25.693s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x7f14c6f3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x7f14c6f3
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x7f14c6f3
length= 128 megabytes (2^27 bytes), time= 7.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x7f14c6f3
length= 256 megabytes (2^28 bytes), time= 14.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x7f14c6f3
length= 512 megabytes (2^29 bytes), time= 27.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x7f14c6f3
length= 1 gigabyte (2^30 bytes), time= 51.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x7f14c6f3
length= 2 gigabytes (2^31 bytes), time= 96.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x7f14c6f3
length= 4 gigabytes (2^32 bytes), time= 185 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x7f14c6f3
length= 8 gigabytes (2^33 bytes), time= 360 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-1,T)          R=  -6.9  p =1-1.5e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x7f14c6f3
length= 16 gigabytes (2^34 bytes), time= 720 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x7f14c6f3
length= 32 gigabytes (2^35 bytes), time= 1414 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x7f14c6f3
length= 64 gigabytes (2^36 bytes), time= 2837 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  -7.6  p =1-6.4e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0x7f14c6f3
length= 81.750 gigabytes (2^36.353 bytes), time= 3601 seconds
  no anomalies in 251 test result(s)


real	60m3.149s
user	58m19.466s
sys	1m23.897s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xc3b26532
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xc3b26532
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xc3b26532
length= 128 megabytes (2^27 bytes), time= 7.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xc3b26532
length= 256 megabytes (2^28 bytes), time= 15.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xc3b26532
length= 512 megabytes (2^29 bytes), time= 27.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xc3b26532
length= 1 gigabyte (2^30 bytes), time= 51.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xc3b26532
length= 2 gigabytes (2^31 bytes), time= 97.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xc3b26532
length= 4 gigabytes (2^32 bytes), time= 186 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xc3b26532
length= 8 gigabytes (2^33 bytes), time= 362 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xc3b26532
length= 16 gigabytes (2^34 bytes), time= 719 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  -4.0  p =1-1.8e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0xc3b26532
length= 32 gigabytes (2^35 bytes), time= 1417 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xc3b26532
length= 64 gigabytes (2^36 bytes), time= 2846 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xc3b26532
length= 81.500 gigabytes (2^36.349 bytes), time= 3601 seconds
  no anomalies in 251 test result(s)


real	60m3.693s
user	58m28.143s
sys	1m22.556s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xbd7d782f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xbd7d782f
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xbd7d782f
length= 128 megabytes (2^27 bytes), time= 7.4 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xbd7d782f
length= 256 megabytes (2^28 bytes), time= 15.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xbd7d782f
length= 512 megabytes (2^29 bytes), time= 27.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xbd7d782f
length= 1 gigabyte (2^30 bytes), time= 50.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xbd7d782f
length= 2 gigabytes (2^31 bytes), time= 95.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.0  p =1-6.3e-3   unusual          
  [Low1/8]Gap-16:A                  R=  -4.0  p =1-1.0e-3   unusual          
  ...and 192 test result(s) without anomalies

rng=RNG_stdin, seed=0xbd7d782f
length= 4 gigabytes (2^32 bytes), time= 183 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xbd7d782f
length= 8 gigabytes (2^33 bytes), time= 364 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xbd7d782f
length= 16 gigabytes (2^34 bytes), time= 718 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xbd7d782f
length= 32 gigabytes (2^35 bytes), time= 1403 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xbd7d782f
length= 64 gigabytes (2^36 bytes), time= 2830 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xbd7d782f
length= 82.000 gigabytes (2^36.358 bytes), time= 3600 seconds
  no anomalies in 251 test result(s)


real	60m3.033s
user	58m25.577s
sys	1m25.172s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x143d7893
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x143d7893
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x143d7893
length= 128 megabytes (2^27 bytes), time= 7.5 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=  +8.0  p =  1.4e-3   unusual          
  FPF-14+6/16:cross                 R=  +4.5  p =  3.6e-4   unusual          
  ...and 149 test result(s) without anomalies

rng=RNG_stdin, seed=0x143d7893
length= 256 megabytes (2^28 bytes), time= 15.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x143d7893
length= 512 megabytes (2^29 bytes), time= 27.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x143d7893
length= 1 gigabyte (2^30 bytes), time= 51.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-1,T)                  R=  +7.6  p =  1.5e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x143d7893
length= 2 gigabytes (2^31 bytes), time= 95.6 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x143d7893
length= 4 gigabytes (2^32 bytes), time= 184 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x143d7893
length= 8 gigabytes (2^33 bytes), time= 362 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x143d7893
length= 16 gigabytes (2^34 bytes), time= 714 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x143d7893
length= 32 gigabytes (2^35 bytes), time= 1400 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x143d7893
length= 64 gigabytes (2^36 bytes), time= 2825 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x143d7893
length= 82.250 gigabytes (2^36.362 bytes), time= 3608 seconds
  no anomalies in 251 test result(s)


real	60m10.374s
user	58m30.724s
sys	1m24.854s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x1e3e8b52
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x1e3e8b52
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x1e3e8b52
length= 128 megabytes (2^27 bytes), time= 7.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+1,13-5,T)          R=  +8.6  p =  1.5e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x1e3e8b52
length= 256 megabytes (2^28 bytes), time= 14.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x1e3e8b52
length= 512 megabytes (2^29 bytes), time= 26.6 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.5  p =  4.1e-4   unusual          
  [Low4/32]DC6-9x1Bytes-1           R=  -4.1  p =1-4.9e-3   unusual          
  ...and 169 test result(s) without anomalies

rng=RNG_stdin, seed=0x1e3e8b52
length= 1 gigabyte (2^30 bytes), time= 49.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x1e3e8b52
length= 2 gigabytes (2^31 bytes), time= 93.1 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x1e3e8b52
length= 4 gigabytes (2^32 bytes), time= 178 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x1e3e8b52
length= 8 gigabytes (2^33 bytes), time= 355 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x1e3e8b52
length= 16 gigabytes (2^34 bytes), time= 702 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x1e3e8b52
length= 32 gigabytes (2^35 bytes), time= 1384 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x1e3e8b52
length= 64 gigabytes (2^36 bytes), time= 2805 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x1e3e8b52
length= 82.500 gigabytes (2^36.366 bytes), time= 3600 seconds
  no anomalies in 251 test result(s)


real	60m2.846s
user	58m29.169s
sys	1m21.794s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xb24cf5ec
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xb24cf5ec
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xb24cf5ec
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xb24cf5ec
length= 256 megabytes (2^28 bytes), time= 14.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +5.5  p =  1.6e-4   mildly suspicious
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xb24cf5ec
length= 512 megabytes (2^29 bytes), time= 27.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xb24cf5ec
length= 1 gigabyte (2^30 bytes), time= 49.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.1  p =1-5.6e-3   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xb24cf5ec
length= 2 gigabytes (2^31 bytes), time= 93.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xb24cf5ec
length= 4 gigabytes (2^32 bytes), time= 180 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xb24cf5ec
length= 8 gigabytes (2^33 bytes), time= 353 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +5.0  p =  3.1e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0xb24cf5ec
length= 16 gigabytes (2^34 bytes), time= 702 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xb24cf5ec
length= 32 gigabytes (2^35 bytes), time= 1384 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xb24cf5ec
length= 64 gigabytes (2^36 bytes), time= 2807 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xb24cf5ec
length= 82.500 gigabytes (2^36.366 bytes), time= 3602 seconds
  no anomalies in 251 test result(s)


real	60m4.363s
user	58m25.203s
sys	1m23.632s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xfa62bbe
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xfa62bbe
length= 64 megabytes (2^26 bytes), time= 3.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xfa62bbe
length= 128 megabytes (2^27 bytes), time= 7.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xfa62bbe
length= 256 megabytes (2^28 bytes), time= 14.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -3.8  p =1-8.1e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xfa62bbe
length= 512 megabytes (2^29 bytes), time= 26.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xfa62bbe
length= 1 gigabyte (2^30 bytes), time= 50.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xfa62bbe
length= 2 gigabytes (2^31 bytes), time= 94.0 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xfa62bbe
length= 4 gigabytes (2^32 bytes), time= 179 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xfa62bbe
length= 8 gigabytes (2^33 bytes), time= 357 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xfa62bbe
length= 16 gigabytes (2^34 bytes), time= 707 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xfa62bbe
length= 32 gigabytes (2^35 bytes), time= 1390 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xfa62bbe
length= 64 gigabytes (2^36 bytes), time= 2766 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xfa62bbe
length= 84.500 gigabytes (2^36.401 bytes), time= 3608 seconds
  no anomalies in 251 test result(s)


real	60m9.428s
user	58m32.520s
sys	1m24.479s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x672bbc61
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x672bbc61
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x672bbc61
length= 128 megabytes (2^27 bytes), time= 7.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.4  p =  8.4e-3   unusual          
  [Low1/32]FPF-14+6/16:cross        R=  +4.5  p =  3.7e-4   unusual          
  ...and 149 test result(s) without anomalies

rng=RNG_stdin, seed=0x672bbc61
length= 256 megabytes (2^28 bytes), time= 14.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x672bbc61
length= 512 megabytes (2^29 bytes), time= 26.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x672bbc61
length= 1 gigabyte (2^30 bytes), time= 48.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x672bbc61
length= 2 gigabytes (2^31 bytes), time= 93.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x672bbc61
length= 4 gigabytes (2^32 bytes), time= 179 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x672bbc61
length= 8 gigabytes (2^33 bytes), time= 357 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x672bbc61
length= 16 gigabytes (2^34 bytes), time= 706 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +6.1  p =  2.3e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x672bbc61
length= 32 gigabytes (2^35 bytes), time= 1385 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x672bbc61
length= 64 gigabytes (2^36 bytes), time= 2755 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x672bbc61
length= 84.750 gigabytes (2^36.405 bytes), time= 3608 seconds
  no anomalies in 251 test result(s)


real	60m11.049s
user	58m34.143s
sys	1m24.466s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd44c404f
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd44c404f
length= 64 megabytes (2^26 bytes), time= 2.7 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xd44c404f
length= 128 megabytes (2^27 bytes), time= 7.0 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd44c404f
length= 256 megabytes (2^28 bytes), time= 14.1 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xd44c404f
length= 512 megabytes (2^29 bytes), time= 26.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.8  p =  1.3e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xd44c404f
length= 1 gigabyte (2^30 bytes), time= 49.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xd44c404f
length= 2 gigabytes (2^31 bytes), time= 96.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd44c404f
length= 4 gigabytes (2^32 bytes), time= 181 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.5  p =  4.1e-4   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0xd44c404f
length= 8 gigabytes (2^33 bytes), time= 352 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xd44c404f
length= 16 gigabytes (2^34 bytes), time= 694 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xd44c404f
length= 32 gigabytes (2^35 bytes), time= 1346 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xd44c404f
length= 64 gigabytes (2^36 bytes), time= 2722 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -5.7  p =1-2.2e-3   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xd44c404f
length= 85.000 gigabytes (2^36.409 bytes), time= 3603 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.6  p =1-7.7e-3   unusual          
  ...and 250 test result(s) without anomalies


real	60m5.655s
user	58m30.271s
sys	1m23.048s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x27815292
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x27815292
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x27815292
length= 128 megabytes (2^27 bytes), time= 7.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-6,T)         R=  -6.0  p =1-5.5e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x27815292
length= 256 megabytes (2^28 bytes), time= 14.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x27815292
length= 512 megabytes (2^29 bytes), time= 26.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x27815292
length= 1 gigabyte (2^30 bytes), time= 49.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x27815292
length= 2 gigabytes (2^31 bytes), time= 97.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x27815292
length= 4 gigabytes (2^32 bytes), time= 183 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x27815292
length= 8 gigabytes (2^33 bytes), time= 354 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x27815292
length= 16 gigabytes (2^34 bytes), time= 698 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x27815292
length= 32 gigabytes (2^35 bytes), time= 1352 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x27815292
length= 64 gigabytes (2^36 bytes), time= 2736 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-0,T)         R=  +8.1  p =  6.9e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0x27815292
length= 84.500 gigabytes (2^36.401 bytes), time= 3601 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-0,T)         R=  +7.4  p =  1.8e-3   unusual          
  ...and 250 test result(s) without anomalies


real	60m3.389s
user	58m22.284s
sys	1m23.815s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x9e562849
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x9e562849
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x9e562849
length= 128 megabytes (2^27 bytes), time= 7.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x9e562849
length= 256 megabytes (2^28 bytes), time= 14.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x9e562849
length= 512 megabytes (2^29 bytes), time= 26.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x9e562849
length= 1 gigabyte (2^30 bytes), time= 50.1 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x9e562849
length= 2 gigabytes (2^31 bytes), time= 95.1 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x9e562849
length= 4 gigabytes (2^32 bytes), time= 181 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x9e562849
length= 8 gigabytes (2^33 bytes), time= 355 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x9e562849
length= 16 gigabytes (2^34 bytes), time= 703 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x9e562849
length= 32 gigabytes (2^35 bytes), time= 1396 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x9e562849
length= 64 gigabytes (2^36 bytes), time= 2816 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x9e562849
length= 82.500 gigabytes (2^36.366 bytes), time= 3600 seconds
  no anomalies in 251 test result(s)


real	60m2.279s
user	58m23.996s
sys	1m24.454s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xa25e880c
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xa25e880c
length= 64 megabytes (2^26 bytes), time= 2.6 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xa25e880c
length= 128 megabytes (2^27 bytes), time= 6.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +6.1  p =  3.0e-3   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0xa25e880c
length= 256 megabytes (2^28 bytes), time= 14.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xa25e880c
length= 512 megabytes (2^29 bytes), time= 25.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xa25e880c
length= 1 gigabyte (2^30 bytes), time= 49.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xa25e880c
length= 2 gigabytes (2^31 bytes), time= 94.1 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xa25e880c
length= 4 gigabytes (2^32 bytes), time= 181 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xa25e880c
length= 8 gigabytes (2^33 bytes), time= 355 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.3  p =  4.5e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0xa25e880c
length= 16 gigabytes (2^34 bytes), time= 703 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xa25e880c
length= 32 gigabytes (2^35 bytes), time= 1392 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xa25e880c
length= 64 gigabytes (2^36 bytes), time= 2805 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xa25e880c
length= 83.000 gigabytes (2^36.375 bytes), time= 3607 seconds
  no anomalies in 251 test result(s)


real	60m9.740s
user	58m25.754s
sys	1m24.441s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xfe258406
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xfe258406
length= 64 megabytes (2^26 bytes), time= 3.2 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xfe258406
length= 128 megabytes (2^27 bytes), time= 7.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xfe258406
length= 256 megabytes (2^28 bytes), time= 14.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xfe258406
length= 512 megabytes (2^29 bytes), time= 26.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xfe258406
length= 1 gigabyte (2^30 bytes), time= 51.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xfe258406
length= 2 gigabytes (2^31 bytes), time= 97.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:B                  R=  +4.1  p =  2.2e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0xfe258406
length= 4 gigabytes (2^32 bytes), time= 186 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xfe258406
length= 8 gigabytes (2^33 bytes), time= 361 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xfe258406
length= 16 gigabytes (2^34 bytes), time= 715 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xfe258406
length= 32 gigabytes (2^35 bytes), time= 1405 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+2,13-0,T)         R=  -7.0  p =1-1.6e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xfe258406
length= 64 gigabytes (2^36 bytes), time= 2788 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xfe258406
length= 83.750 gigabytes (2^36.388 bytes), time= 3602 seconds
  no anomalies in 251 test result(s)


real	60m3.802s
user	58m22.195s
sys	1m22.745s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x65d83dc6
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x65d83dc6
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x65d83dc6
length= 128 megabytes (2^27 bytes), time= 7.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x65d83dc6
length= 256 megabytes (2^28 bytes), time= 14.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x65d83dc6
length= 512 megabytes (2^29 bytes), time= 27.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x65d83dc6
length= 1 gigabyte (2^30 bytes), time= 51.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:cross        R=  +4.1  p =  8.3e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0x65d83dc6
length= 2 gigabytes (2^31 bytes), time= 98.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x65d83dc6
length= 4 gigabytes (2^32 bytes), time= 185 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x65d83dc6
length= 8 gigabytes (2^33 bytes), time= 362 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x65d83dc6
length= 16 gigabytes (2^34 bytes), time= 716 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x65d83dc6
length= 32 gigabytes (2^35 bytes), time= 1403 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x65d83dc6
length= 64 gigabytes (2^36 bytes), time= 2785 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+3,13-0,T)          R=  -7.8  p =1-5.2e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0x65d83dc6
length= 84.000 gigabytes (2^36.392 bytes), time= 3608 seconds
  no anomalies in 251 test result(s)


real	60m10.031s
user	58m29.685s
sys	1m24.674s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x9b708e77
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x9b708e77
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x9b708e77
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x9b708e77
length= 256 megabytes (2^28 bytes), time= 13.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x9b708e77
length= 512 megabytes (2^29 bytes), time= 26.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x9b708e77
length= 1 gigabyte (2^30 bytes), time= 48.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x9b708e77
length= 2 gigabytes (2^31 bytes), time= 93.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x9b708e77
length= 4 gigabytes (2^32 bytes), time= 177 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:B                 R=  +5.3  p =  1.8e-4   mildly suspicious
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x9b708e77
length= 8 gigabytes (2^33 bytes), time= 348 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x9b708e77
length= 16 gigabytes (2^34 bytes), time= 689 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x9b708e77
length= 32 gigabytes (2^35 bytes), time= 1362 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x9b708e77
length= 64 gigabytes (2^36 bytes), time= 2719 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x9b708e77
length= 85.250 gigabytes (2^36.414 bytes), time= 3605 seconds
  no anomalies in 251 test result(s)


real	60m7.386s
user	58m30.831s
sys	1m22.493s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x640f1f5e
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x640f1f5e
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +7.8  p =  5.3e-4   mildly suspicious
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x640f1f5e
length= 128 megabytes (2^27 bytes), time= 7.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x640f1f5e
length= 256 megabytes (2^28 bytes), time= 15.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x640f1f5e
length= 512 megabytes (2^29 bytes), time= 27.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x640f1f5e
length= 1 gigabyte (2^30 bytes), time= 49.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x640f1f5e
length= 2 gigabytes (2^31 bytes), time= 94.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+3,13-3,T)         R=  +9.0  p =  4.6e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x640f1f5e
length= 4 gigabytes (2^32 bytes), time= 177 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x640f1f5e
length= 8 gigabytes (2^33 bytes), time= 348 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x640f1f5e
length= 16 gigabytes (2^34 bytes), time= 690 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x640f1f5e
length= 32 gigabytes (2^35 bytes), time= 1365 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x640f1f5e
length= 64 gigabytes (2^36 bytes), time= 2719 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x640f1f5e
length= 85.000 gigabytes (2^36.409 bytes), time= 3601 seconds
  no anomalies in 251 test result(s)


real	60m2.554s
user	58m19.859s
sys	1m23.634s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4627fb2
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4627fb2
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-5,T)         R=  +9.8  p =  4.9e-4   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x4627fb2
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4627fb2
length= 256 megabytes (2^28 bytes), time= 14.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4627fb2
length= 512 megabytes (2^29 bytes), time= 26.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x4627fb2
length= 1 gigabyte (2^30 bytes), time= 50.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4627fb2
length= 2 gigabytes (2^31 bytes), time= 95.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x4627fb2
length= 4 gigabytes (2^32 bytes), time= 183 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x4627fb2
length= 8 gigabytes (2^33 bytes), time= 352 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x4627fb2
length= 16 gigabytes (2^34 bytes), time= 697 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x4627fb2
length= 32 gigabytes (2^35 bytes), time= 1365 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x4627fb2
length= 64 gigabytes (2^36 bytes), time= 2781 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +6.9  p =  6.0e-4   mildly suspicious
  [Low1/32]FPF-14+6/16:cross        R=  -2.3  p =1-6.4e-4   unusual          
  ...and 245 test result(s) without anomalies

rng=RNG_stdin, seed=0x4627fb2
length= 84.000 gigabytes (2^36.392 bytes), time= 3600 seconds
  no anomalies in 251 test result(s)


real	60m1.581s
user	58m16.401s
sys	1m26.157s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x494ec6dd
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x494ec6dd
length= 64 megabytes (2^26 bytes), time= 2.7 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x494ec6dd
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x494ec6dd
length= 256 megabytes (2^28 bytes), time= 14.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x494ec6dd
length= 512 megabytes (2^29 bytes), time= 26.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x494ec6dd
length= 1 gigabyte (2^30 bytes), time= 49.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x494ec6dd
length= 2 gigabytes (2^31 bytes), time= 94.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x494ec6dd
length= 4 gigabytes (2^32 bytes), time= 182 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x494ec6dd
length= 8 gigabytes (2^33 bytes), time= 351 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x494ec6dd
length= 16 gigabytes (2^34 bytes), time= 698 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+3,13-2,T)         R=  -7.4  p =1-5.4e-4   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x494ec6dd
length= 32 gigabytes (2^35 bytes), time= 1372 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x494ec6dd
length= 64 gigabytes (2^36 bytes), time= 2783 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x494ec6dd
length= 84.250 gigabytes (2^36.397 bytes), time= 3608 seconds
  no anomalies in 251 test result(s)


real	60m10.020s
user	58m31.060s
sys	1m25.225s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xb35475ee
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xb35475ee
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.6  p =  6.4e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xb35475ee
length= 128 megabytes (2^27 bytes), time= 7.4 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xb35475ee
length= 256 megabytes (2^28 bytes), time= 14.3 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xb35475ee
length= 512 megabytes (2^29 bytes), time= 23.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xb35475ee
length= 1 gigabyte (2^30 bytes), time= 38.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xb35475ee
length= 2 gigabytes (2^31 bytes), time= 74.8 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xb35475ee
length= 4 gigabytes (2^32 bytes), time= 159 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:B                  R=  +4.1  p =  2.0e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0xb35475ee
length= 8 gigabytes (2^33 bytes), time= 330 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xb35475ee
length= 16 gigabytes (2^34 bytes), time= 665 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xb35475ee
length= 32 gigabytes (2^35 bytes), time= 1334 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xb35475ee
length= 64 gigabytes (2^36 bytes), time= 2693 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]FPF-14+6/16:cross        R=  -2.2  p =1-1.0e-3   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xb35475ee
length= 86.250 gigabytes (2^36.430 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m4.787s
user	58m30.585s
sys	1m22.736s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xf83a0866
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xf83a0866
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xf83a0866
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xf83a0866
length= 256 megabytes (2^28 bytes), time= 13.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xf83a0866
length= 512 megabytes (2^29 bytes), time= 20.6 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xf83a0866
length= 1 gigabyte (2^30 bytes), time= 34.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.0  p =1-7.2e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +6.0  p =  2.9e-3   unusual          
  ...and 181 test result(s) without anomalies

rng=RNG_stdin, seed=0xf83a0866
length= 2 gigabytes (2^31 bytes), time= 73.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xf83a0866
length= 4 gigabytes (2^32 bytes), time= 157 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xf83a0866
length= 8 gigabytes (2^33 bytes), time= 328 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xf83a0866
length= 16 gigabytes (2^34 bytes), time= 662 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xf83a0866
length= 32 gigabytes (2^35 bytes), time= 1329 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xf83a0866
length= 64 gigabytes (2^36 bytes), time= 2689 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xf83a0866
length= 86.500 gigabytes (2^36.435 bytes), time= 3607 seconds
  no anomalies in 251 test result(s)


real	60m8.854s
user	58m34.448s
sys	1m22.529s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x32435782
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x32435782
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.9  p =1-7.2e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x32435782
length= 128 megabytes (2^27 bytes), time= 7.0 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x32435782
length= 256 megabytes (2^28 bytes), time= 13.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -3.9  p =1-7.1e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +5.3  p =  7.2e-4   unusual          
  ...and 160 test result(s) without anomalies

rng=RNG_stdin, seed=0x32435782
length= 512 megabytes (2^29 bytes), time= 25.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x32435782
length= 1 gigabyte (2^30 bytes), time= 49.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x32435782
length= 2 gigabytes (2^31 bytes), time= 95.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x32435782
length= 4 gigabytes (2^32 bytes), time= 181 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.3  p =  1.3e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x32435782
length= 8 gigabytes (2^33 bytes), time= 356 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.1  p =  1.9e-3   unusual          
  [Low1/32]DC6-9x1Bytes-1           R=  +5.5  p =  7.1e-3   unusual          
  ...and 213 test result(s) without anomalies

rng=RNG_stdin, seed=0x32435782
length= 16 gigabytes (2^34 bytes), time= 703 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.2  p =  1.7e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x32435782
length= 32 gigabytes (2^35 bytes), time= 1383 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x32435782
length= 64 gigabytes (2^36 bytes), time= 2817 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  -2.3  p =1-6.9e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0x32435782
length= 82.000 gigabytes (2^36.358 bytes), time= 3608 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.3  p =1-7.4e-3   unusual          
  ...and 250 test result(s) without anomalies


real	60m10.075s
user	58m29.283s
sys	1m23.954s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x4cd81365
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x4cd81365
length= 64 megabytes (2^26 bytes), time= 2.7 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x4cd81365
length= 128 megabytes (2^27 bytes), time= 6.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x4cd81365
length= 256 megabytes (2^28 bytes), time= 14.0 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x4cd81365
length= 512 megabytes (2^29 bytes), time= 26.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.6  p =1-2.3e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x4cd81365
length= 1 gigabyte (2^30 bytes), time= 49.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x4cd81365
length= 2 gigabytes (2^31 bytes), time= 95.2 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x4cd81365
length= 4 gigabytes (2^32 bytes), time= 179 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x4cd81365
length= 8 gigabytes (2^33 bytes), time= 352 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +6.1  p =  2.6e-3   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0x4cd81365
length= 16 gigabytes (2^34 bytes), time= 694 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +5.7  p =  8.9e-5   mildly suspicious
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x4cd81365
length= 32 gigabytes (2^35 bytes), time= 1369 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x4cd81365
length= 64 gigabytes (2^36 bytes), time= 2793 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.8  p =  2.2e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0x4cd81365
length= 82.750 gigabytes (2^36.371 bytes), time= 3604 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.8  p =  1.9e-4   unusual          
  [Low1/32]FPF-14+6/16:cross        R=  -2.3  p =1-8.8e-4   unusual          
  ...and 249 test result(s) without anomalies


real	60m6.556s
user	58m26.049s
sys	1m24.372s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x42814a9e
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x42814a9e
length= 64 megabytes (2^26 bytes), time= 2.6 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x42814a9e
length= 128 megabytes (2^27 bytes), time= 6.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x42814a9e
length= 256 megabytes (2^28 bytes), time= 14.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+1,13-4,T)          R=  -6.8  p =1-6.0e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x42814a9e
length= 512 megabytes (2^29 bytes), time= 26.2 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x42814a9e
length= 1 gigabyte (2^30 bytes), time= 50.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x42814a9e
length= 2 gigabytes (2^31 bytes), time= 94.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x42814a9e
length= 4 gigabytes (2^32 bytes), time= 183 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x42814a9e
length= 8 gigabytes (2^33 bytes), time= 366 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x42814a9e
length= 16 gigabytes (2^34 bytes), time= 742 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x42814a9e
length= 32 gigabytes (2^35 bytes), time= 1493 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.5  p =1-3.6e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x42814a9e
length= 64 gigabytes (2^36 bytes), time= 2976 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x42814a9e
length= 78.500 gigabytes (2^36.295 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m4.864s
user	58m21.367s
sys	1m25.143s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xc76baaf9
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xc76baaf9
length= 64 megabytes (2^26 bytes), time= 3.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +6.2  p =  3.6e-3   unusual          
  [Low4/32]BCFN(2+0,13-5,T)         R=  +9.9  p =  4.6e-4   unusual          
  ...and 137 test result(s) without anomalies

rng=RNG_stdin, seed=0xc76baaf9
length= 128 megabytes (2^27 bytes), time= 7.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xc76baaf9
length= 256 megabytes (2^28 bytes), time= 15.8 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xc76baaf9
length= 512 megabytes (2^29 bytes), time= 29.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xc76baaf9
length= 1 gigabyte (2^30 bytes), time= 55.8 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xc76baaf9
length= 2 gigabytes (2^31 bytes), time= 107 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xc76baaf9
length= 4 gigabytes (2^32 bytes), time= 207 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xc76baaf9
length= 8 gigabytes (2^33 bytes), time= 415 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xc76baaf9
length= 16 gigabytes (2^34 bytes), time= 842 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xc76baaf9
length= 32 gigabytes (2^35 bytes), time= 1686 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xc76baaf9
length= 64 gigabytes (2^36 bytes), time= 3338 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xc76baaf9
length= 69.500 gigabytes (2^36.119 bytes), time= 3607 seconds
  no anomalies in 247 test result(s)


real	60m8.545s
user	58m30.288s
sys	1m19.513s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x232f7d24
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x232f7d24
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x232f7d24
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x232f7d24
length= 256 megabytes (2^28 bytes), time= 14.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+5,13-6,T)          R=  -6.2  p =1-2.8e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x232f7d24
length= 512 megabytes (2^29 bytes), time= 26.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]BCFN(2+1,13-3,T)         R=  -6.6  p =1-1.6e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x232f7d24
length= 1 gigabyte (2^30 bytes), time= 50.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x232f7d24
length= 2 gigabytes (2^31 bytes), time= 96.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x232f7d24
length= 4 gigabytes (2^32 bytes), time= 185 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x232f7d24
length= 8 gigabytes (2^33 bytes), time= 364 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x232f7d24
length= 16 gigabytes (2^34 bytes), time= 722 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x232f7d24
length= 32 gigabytes (2^35 bytes), time= 1439 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x232f7d24
length= 64 gigabytes (2^36 bytes), time= 2888 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x232f7d24
length= 79.500 gigabytes (2^36.313 bytes), time= 3602 seconds
  no anomalies in 251 test result(s)


real	60m4.125s
user	58m19.040s
sys	1m24.979s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x926705f3
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x926705f3
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.2  p =1-4.9e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x926705f3
length= 128 megabytes (2^27 bytes), time= 7.2 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x926705f3
length= 256 megabytes (2^28 bytes), time= 14.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  -4.1  p =1-4.9e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x926705f3
length= 512 megabytes (2^29 bytes), time= 26.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x926705f3
length= 1 gigabyte (2^30 bytes), time= 51.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x926705f3
length= 2 gigabytes (2^31 bytes), time= 97.3 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x926705f3
length= 4 gigabytes (2^32 bytes), time= 187 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x926705f3
length= 8 gigabytes (2^33 bytes), time= 364 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x926705f3
length= 16 gigabytes (2^34 bytes), time= 723 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +4.6  p =  2.8e-4   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x926705f3
length= 32 gigabytes (2^35 bytes), time= 1442 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x926705f3
length= 64 gigabytes (2^36 bytes), time= 2891 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x926705f3
length= 79.500 gigabytes (2^36.313 bytes), time= 3601 seconds
  no anomalies in 251 test result(s)


real	60m3.210s
user	58m16.631s
sys	1m25.454s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xf67c0d80
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xf67c0d80
length= 64 megabytes (2^26 bytes), time= 3.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +7.3  p =  4.6e-4   mildly suspicious
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xf67c0d80
length= 128 megabytes (2^27 bytes), time= 8.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xf67c0d80
length= 256 megabytes (2^28 bytes), time= 16.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xf67c0d80
length= 512 megabytes (2^29 bytes), time= 29.3 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xf67c0d80
length= 1 gigabyte (2^30 bytes), time= 55.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xf67c0d80
length= 2 gigabytes (2^31 bytes), time= 105 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  +5.1  p =  8.0e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0xf67c0d80
length= 4 gigabytes (2^32 bytes), time= 202 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xf67c0d80
length= 8 gigabytes (2^33 bytes), time= 400 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-2,T)         R=  -7.8  p =1-2.8e-4   unusual          
  ...and 214 test result(s) without anomalies

rng=RNG_stdin, seed=0xf67c0d80
length= 16 gigabytes (2^34 bytes), time= 769 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xf67c0d80
length= 32 gigabytes (2^35 bytes), time= 1500 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  -8.1  p =1-3.3e-4   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xf67c0d80
length= 64 gigabytes (2^36 bytes), time= 3016 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  -8.4  p =1-2.1e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xf67c0d80
length= 75.750 gigabytes (2^36.243 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m4.960s
user	58m20.857s
sys	1m27.790s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x33ee1b54
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x33ee1b54
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+3,13-6,T)          R=  -6.0  p =1-4.6e-4   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x33ee1b54
length= 128 megabytes (2^27 bytes), time= 7.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x33ee1b54
length= 256 megabytes (2^28 bytes), time= 15.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x33ee1b54
length= 512 megabytes (2^29 bytes), time= 29.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x33ee1b54
length= 1 gigabyte (2^30 bytes), time= 54.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x33ee1b54
length= 2 gigabytes (2^31 bytes), time= 105 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x33ee1b54
length= 4 gigabytes (2^32 bytes), time= 202 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x33ee1b54
length= 8 gigabytes (2^33 bytes), time= 399 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x33ee1b54
length= 16 gigabytes (2^34 bytes), time= 765 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x33ee1b54
length= 32 gigabytes (2^35 bytes), time= 1497 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+2,13-0,T)          R=  -7.3  p =1-1.0e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x33ee1b54
length= 64 gigabytes (2^36 bytes), time= 3016 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x33ee1b54
length= 75.750 gigabytes (2^36.243 bytes), time= 3606 seconds
  no anomalies in 251 test result(s)


real	60m8.300s
user	58m26.224s
sys	1m27.923s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd37952ac
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd37952ac
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xd37952ac
length= 128 megabytes (2^27 bytes), time= 7.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd37952ac
length= 256 megabytes (2^28 bytes), time= 16.2 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xd37952ac
length= 512 megabytes (2^29 bytes), time= 29.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -3.7  p =1-9.2e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0xd37952ac
length= 1 gigabyte (2^30 bytes), time= 58.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xd37952ac
length= 2 gigabytes (2^31 bytes), time= 110 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd37952ac
length= 4 gigabytes (2^32 bytes), time= 213 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xd37952ac
length= 8 gigabytes (2^33 bytes), time= 425 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xd37952ac
length= 16 gigabytes (2^34 bytes), time= 825 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]Gap-16:A                  R=  +5.8  p =  3.6e-4   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0xd37952ac
length= 32 gigabytes (2^35 bytes), time= 1614 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xd37952ac
length= 64 gigabytes (2^36 bytes), time= 3201 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xd37952ac
length= 72.250 gigabytes (2^36.175 bytes), time= 3604 seconds
  no anomalies in 247 test result(s)


real	60m6.029s
user	58m22.304s
sys	1m25.921s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xdf238ec6
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xdf238ec6
length= 64 megabytes (2^26 bytes), time= 3.6 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xdf238ec6
length= 128 megabytes (2^27 bytes), time= 8.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xdf238ec6
length= 256 megabytes (2^28 bytes), time= 16.4 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xdf238ec6
length= 512 megabytes (2^29 bytes), time= 31.5 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xdf238ec6
length= 1 gigabyte (2^30 bytes), time= 59.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]Gap-16:B                 R=  -4.9  p =1-3.9e-4   unusual          
  ...and 182 test result(s) without anomalies

rng=RNG_stdin, seed=0xdf238ec6
length= 2 gigabytes (2^31 bytes), time= 112 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xdf238ec6
length= 4 gigabytes (2^32 bytes), time= 213 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-3,T)         R=  -6.5  p =1-1.9e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0xdf238ec6
length= 8 gigabytes (2^33 bytes), time= 425 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xdf238ec6
length= 16 gigabytes (2^34 bytes), time= 825 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xdf238ec6
length= 32 gigabytes (2^35 bytes), time= 1615 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.6  p =1-2.9e-3   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0xdf238ec6
length= 64 gigabytes (2^36 bytes), time= 3210 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.2  p =1-5.7e-3   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xdf238ec6
length= 72.000 gigabytes (2^36.170 bytes), time= 3600 seconds
  no anomalies in 247 test result(s)


real	60m2.303s
user	58m18.005s
sys	1m25.921s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x2386e711
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x2386e711
length= 64 megabytes (2^26 bytes), time= 3.3 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x2386e711
length= 128 megabytes (2^27 bytes), time= 7.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x2386e711
length= 256 megabytes (2^28 bytes), time= 15.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]FPF-14+6/16:all           R=  +5.7  p =  8.2e-5   mildly suspicious
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x2386e711
length= 512 megabytes (2^29 bytes), time= 28.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x2386e711
length= 1 gigabyte (2^30 bytes), time= 55.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x2386e711
length= 2 gigabytes (2^31 bytes), time= 108 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x2386e711
length= 4 gigabytes (2^32 bytes), time= 202 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x2386e711
length= 8 gigabytes (2^33 bytes), time= 401 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x2386e711
length= 16 gigabytes (2^34 bytes), time= 790 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x2386e711
length= 32 gigabytes (2^35 bytes), time= 1526 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]FPF-14+6/16:cross         R=  +4.0  p =  9.4e-4   unusual          
  ...and 234 test result(s) without anomalies

rng=RNG_stdin, seed=0x2386e711
length= 64 gigabytes (2^36 bytes), time= 3003 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+3,13-0,T)          R=  +9.2  p =  1.7e-4   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0x2386e711
length= 77.750 gigabytes (2^36.281 bytes), time= 3605 seconds
  no anomalies in 251 test result(s)


real	60m7.667s
user	58m27.634s
sys	1m25.615s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xb630c61c
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xb630c61c
length= 64 megabytes (2^26 bytes), time= 3.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +5.6  p =  8.0e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xb630c61c
length= 128 megabytes (2^27 bytes), time= 8.1 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xb630c61c
length= 256 megabytes (2^28 bytes), time= 15.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xb630c61c
length= 512 megabytes (2^29 bytes), time= 29.0 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xb630c61c
length= 1 gigabyte (2^30 bytes), time= 57.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xb630c61c
length= 2 gigabytes (2^31 bytes), time= 111 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xb630c61c
length= 4 gigabytes (2^32 bytes), time= 206 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xb630c61c
length= 8 gigabytes (2^33 bytes), time= 405 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xb630c61c
length= 16 gigabytes (2^34 bytes), time= 793 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xb630c61c
length= 32 gigabytes (2^35 bytes), time= 1532 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xb630c61c
length= 64 gigabytes (2^36 bytes), time= 3012 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xb630c61c
length= 77.500 gigabytes (2^36.276 bytes), time= 3604 seconds
  no anomalies in 251 test result(s)


real	60m6.803s
user	58m18.183s
sys	1m26.070s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x96659a2
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x96659a2
length= 64 megabytes (2^26 bytes), time= 3.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  +6.9  p =  1.5e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x96659a2
length= 128 megabytes (2^27 bytes), time= 7.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x96659a2
length= 256 megabytes (2^28 bytes), time= 14.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x96659a2
length= 512 megabytes (2^29 bytes), time= 27.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x96659a2
length= 1 gigabyte (2^30 bytes), time= 52.9 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x96659a2
length= 2 gigabytes (2^31 bytes), time= 105 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x96659a2
length= 4 gigabytes (2^32 bytes), time= 205 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x96659a2
length= 8 gigabytes (2^33 bytes), time= 391 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x96659a2
length= 16 gigabytes (2^34 bytes), time= 750 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x96659a2
length= 32 gigabytes (2^35 bytes), time= 1456 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x96659a2
length= 64 gigabytes (2^36 bytes), time= 2938 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x96659a2
length= 79.000 gigabytes (2^36.304 bytes), time= 3610 seconds
  no anomalies in 251 test result(s)


real	60m12.719s
user	58m36.240s
sys	1m24.291s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xf3531966
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xf3531966
length= 64 megabytes (2^26 bytes), time= 3.0 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.5  p =  3.4e-4   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0xf3531966
length= 128 megabytes (2^27 bytes), time= 7.3 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xf3531966
length= 256 megabytes (2^28 bytes), time= 14.5 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.3  p =  5.2e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xf3531966
length= 512 megabytes (2^29 bytes), time= 27.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xf3531966
length= 1 gigabyte (2^30 bytes), time= 53.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xf3531966
length= 2 gigabytes (2^31 bytes), time= 107 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +6.2  p =  1.3e-5   mildly suspicious
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0xf3531966
length= 4 gigabytes (2^32 bytes), time= 206 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xf3531966
length= 8 gigabytes (2^33 bytes), time= 392 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xf3531966
length= 16 gigabytes (2^34 bytes), time= 752 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xf3531966
length= 32 gigabytes (2^35 bytes), time= 1452 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xf3531966
length= 64 gigabytes (2^36 bytes), time= 2929 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xf3531966
length= 79.250 gigabytes (2^36.308 bytes), time= 3609 seconds
  no anomalies in 251 test result(s)


real	60m12.160s
user	58m33.307s
sys	1m24.431s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xd9aaad81
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xd9aaad81
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xd9aaad81
length= 128 megabytes (2^27 bytes), time= 7.6 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xd9aaad81
length= 256 megabytes (2^28 bytes), time= 15.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xd9aaad81
length= 512 megabytes (2^29 bytes), time= 28.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xd9aaad81
length= 1 gigabyte (2^30 bytes), time= 53.4 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xd9aaad81
length= 2 gigabytes (2^31 bytes), time= 98.5 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xd9aaad81
length= 4 gigabytes (2^32 bytes), time= 188 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xd9aaad81
length= 8 gigabytes (2^33 bytes), time= 372 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xd9aaad81
length= 16 gigabytes (2^34 bytes), time= 735 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xd9aaad81
length= 32 gigabytes (2^35 bytes), time= 1427 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +8.4  p =  5.3e-4   unusual          
  [Low1/8]DC6-9x1Bytes-1            R=  +5.5  p =  5.4e-3   unusual          
  ...and 233 test result(s) without anomalies

rng=RNG_stdin, seed=0xd9aaad81
length= 64 gigabytes (2^36 bytes), time= 2834 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-0,T)                  R=  +7.5  p =  1.6e-3   unusual          
  ...and 246 test result(s) without anomalies

rng=RNG_stdin, seed=0xd9aaad81
length= 81.000 gigabytes (2^36.340 bytes), time= 3609 seconds
  no anomalies in 251 test result(s)


real	60m10.920s
user	58m33.704s
sys	1m26.198s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x71ea30bc
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x71ea30bc
length= 32 megabytes (2^25 bytes), time= 2.2 seconds
  no anomalies in 130 test result(s)

rng=RNG_stdin, seed=0x71ea30bc
length= 64 megabytes (2^26 bytes), time= 5.4 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x71ea30bc
length= 128 megabytes (2^27 bytes), time= 9.9 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x71ea30bc
length= 256 megabytes (2^28 bytes), time= 17.6 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x71ea30bc
length= 512 megabytes (2^29 bytes), time= 30.4 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x71ea30bc
length= 1 gigabyte (2^30 bytes), time= 54.5 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x71ea30bc
length= 2 gigabytes (2^31 bytes), time= 100 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +4.2  p =  5.7e-4   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x71ea30bc
length= 4 gigabytes (2^32 bytes), time= 191 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x71ea30bc
length= 8 gigabytes (2^33 bytes), time= 377 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x71ea30bc
length= 16 gigabytes (2^34 bytes), time= 741 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x71ea30bc
length= 32 gigabytes (2^35 bytes), time= 1431 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x71ea30bc
length= 64 gigabytes (2^36 bytes), time= 2830 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x71ea30bc
length= 81.000 gigabytes (2^36.340 bytes), time= 3605 seconds
  no anomalies in 251 test result(s)


real	60m7.813s
user	58m31.176s
sys	1m24.289s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x9522e876
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x9522e876
length= 64 megabytes (2^26 bytes), time= 2.8 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x9522e876
length= 128 megabytes (2^27 bytes), time= 7.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+3,13-5,T)          R=  -7.0  p =1-1.7e-4   unusual          
  ...and 150 test result(s) without anomalies

rng=RNG_stdin, seed=0x9522e876
length= 256 megabytes (2^28 bytes), time= 15.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low4/32]DC6-9x1Bytes-1           R=  +7.1  p =  5.9e-4   mildly suspicious
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x9522e876
length= 512 megabytes (2^29 bytes), time= 28.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]DC6-9x1Bytes-1            R=  -4.3  p =1-3.6e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin, seed=0x9522e876
length= 1 gigabyte (2^30 bytes), time= 55.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x9522e876
length= 2 gigabytes (2^31 bytes), time= 103 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x9522e876
length= 4 gigabytes (2^32 bytes), time= 196 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x9522e876
length= 8 gigabytes (2^33 bytes), time= 388 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x9522e876
length= 16 gigabytes (2^34 bytes), time= 746 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +4.6  p =  8.7e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x9522e876
length= 32 gigabytes (2^35 bytes), time= 1447 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x9522e876
length= 64 gigabytes (2^36 bytes), time= 2915 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x9522e876
length= 79.000 gigabytes (2^36.304 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m6.230s
user	58m29.010s
sys	1m23.730s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x381f44e
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x381f44e
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x381f44e
length= 128 megabytes (2^27 bytes), time= 7.7 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x381f44e
length= 256 megabytes (2^28 bytes), time= 15.9 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x381f44e
length= 512 megabytes (2^29 bytes), time= 28.7 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x381f44e
length= 1 gigabyte (2^30 bytes), time= 53.7 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x381f44e
length= 2 gigabytes (2^31 bytes), time= 103 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x381f44e
length= 4 gigabytes (2^32 bytes), time= 196 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x381f44e
length= 8 gigabytes (2^33 bytes), time= 387 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x381f44e
length= 16 gigabytes (2^34 bytes), time= 742 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x381f44e
length= 32 gigabytes (2^35 bytes), time= 1442 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x381f44e
length= 64 gigabytes (2^36 bytes), time= 2905 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x381f44e
length= 79.500 gigabytes (2^36.313 bytes), time= 3612 seconds
  no anomalies in 251 test result(s)


real	60m14.023s
user	58m35.257s
sys	1m26.388s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x37394be
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x37394be
length= 64 megabytes (2^26 bytes), time= 3.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +4.2  p =  1.1e-3   unusual          
  ...and 138 test result(s) without anomalies

rng=RNG_stdin, seed=0x37394be
length= 128 megabytes (2^27 bytes), time= 8.8 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x37394be
length= 256 megabytes (2^28 bytes), time= 17.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0x37394be
length= 512 megabytes (2^29 bytes), time= 32.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x37394be
length= 1 gigabyte (2^30 bytes), time= 60.2 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x37394be
length= 2 gigabytes (2^31 bytes), time= 109 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-0,T)                  R=  +7.5  p =  1.5e-3   unusual          
  ...and 193 test result(s) without anomalies

rng=RNG_stdin, seed=0x37394be
length= 4 gigabytes (2^32 bytes), time= 199 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0x37394be
length= 8 gigabytes (2^33 bytes), time= 383 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x37394be
length= 16 gigabytes (2^34 bytes), time= 754 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  -4.4  p =1-1.0e-3   unusual          
  ...and 225 test result(s) without anomalies

rng=RNG_stdin, seed=0x37394be
length= 32 gigabytes (2^35 bytes), time= 1488 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x37394be
length= 64 gigabytes (2^36 bytes), time= 2919 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x37394be
length= 79.750 gigabytes (2^36.317 bytes), time= 3603 seconds
  no anomalies in 251 test result(s)


real	60m4.775s
user	58m29.075s
sys	1m23.238s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 3600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xbcf05ce4
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xbcf05ce4
length= 32 megabytes (2^25 bytes), time= 2.1 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:cross                 R=  +4.0  p =  1.0e-3   unusual          
  ...and 129 test result(s) without anomalies

rng=RNG_stdin, seed=0xbcf05ce4
length= 64 megabytes (2^26 bytes), time= 5.5 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xbcf05ce4
length= 128 megabytes (2^27 bytes), time= 10.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xbcf05ce4
length= 256 megabytes (2^28 bytes), time= 19.5 seconds
  no anomalies in 162 test result(s)

rng=RNG_stdin, seed=0xbcf05ce4
length= 512 megabytes (2^29 bytes), time= 34.9 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xbcf05ce4
length= 1 gigabyte (2^30 bytes), time= 62.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xbcf05ce4
length= 2 gigabytes (2^31 bytes), time= 111 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xbcf05ce4
length= 4 gigabytes (2^32 bytes), time= 200 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xbcf05ce4
length= 8 gigabytes (2^33 bytes), time= 384 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xbcf05ce4
length= 16 gigabytes (2^34 bytes), time= 752 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xbcf05ce4
length= 32 gigabytes (2^35 bytes), time= 1485 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xbcf05ce4
length= 64 gigabytes (2^36 bytes), time= 2919 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xbcf05ce4
length= 79.750 gigabytes (2^36.317 bytes), time= 3604 seconds
  no anomalies in 251 test result(s)


real	60m6.197s
user	58m29.379s
sys	1m24.449s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0x164e1520
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0x164e1520
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 128 megabytes (2^27 bytes), time= 7.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 256 megabytes (2^28 bytes), time= 14.7 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-2,T)                  R=  +7.8  p =  1.5e-3   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0x164e1520
length= 512 megabytes (2^29 bytes), time= 27.1 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 1 gigabyte (2^30 bytes), time= 51.6 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 2 gigabytes (2^31 bytes), time= 97.1 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 4 gigabytes (2^32 bytes), time= 183 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -4.0  p =1-7.8e-3   unusual          
  ...and 202 test result(s) without anomalies

rng=RNG_stdin, seed=0x164e1520
length= 8 gigabytes (2^33 bytes), time= 363 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 16 gigabytes (2^34 bytes), time= 747 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 32 gigabytes (2^35 bytes), time= 1478 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 64 gigabytes (2^36 bytes), time= 2981 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 128 gigabytes (2^37 bytes), time= 5974 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 256 gigabytes (2^38 bytes), time= 11904 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]BCFN(2+0,13-0,T)          R=  +7.5  p =  1.6e-3   unusual          
  ...and 266 test result(s) without anomalies

rng=RNG_stdin, seed=0x164e1520
length= 512 gigabytes (2^39 bytes), time= 23864 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 1 terabyte (2^40 bytes), time= 46583 seconds
  no anomalies in 290 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 2 terabytes (2^41 bytes), time= 92804 seconds
  no anomalies in 299 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 4 terabytes (2^42 bytes), time= 185769 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0x164e1520
length= 7.438 terabytes (2^42.895 bytes), time= 345607 seconds
  no anomalies in 322 test result(s)


real	5760m11.716s
user	5600m44.558s
sys	134m6.191s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 345600s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin, seed = 0xff37bd6e
test set = normal, folding = standard(unknown format)

rng=RNG_stdin, seed=0xff37bd6e
length= 64 megabytes (2^26 bytes), time= 2.9 seconds
  no anomalies in 139 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 128 megabytes (2^27 bytes), time= 7.5 seconds
  no anomalies in 151 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 256 megabytes (2^28 bytes), time= 14.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:cross        R=  +4.1  p =  9.0e-4   unusual          
  ...and 161 test result(s) without anomalies

rng=RNG_stdin, seed=0xff37bd6e
length= 512 megabytes (2^29 bytes), time= 26.8 seconds
  no anomalies in 171 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 1 gigabyte (2^30 bytes), time= 51.0 seconds
  no anomalies in 183 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 2 gigabytes (2^31 bytes), time= 96.4 seconds
  no anomalies in 194 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 4 gigabytes (2^32 bytes), time= 181 seconds
  no anomalies in 203 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 8 gigabytes (2^33 bytes), time= 360 seconds
  no anomalies in 215 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 16 gigabytes (2^34 bytes), time= 741 seconds
  no anomalies in 226 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 32 gigabytes (2^35 bytes), time= 1469 seconds
  no anomalies in 235 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 64 gigabytes (2^36 bytes), time= 2976 seconds
  no anomalies in 247 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 128 gigabytes (2^37 bytes), time= 5967 seconds
  no anomalies in 258 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 256 gigabytes (2^38 bytes), time= 11880 seconds
  no anomalies in 267 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 512 gigabytes (2^39 bytes), time= 23814 seconds
  no anomalies in 279 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 1 terabyte (2^40 bytes), time= 46452 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-0,T)         R=  -7.5  p =1-7.1e-4   unusual          
  ...and 289 test result(s) without anomalies

rng=RNG_stdin, seed=0xff37bd6e
length= 2 terabytes (2^41 bytes), time= 92486 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/8]FPF-14+6/16:cross         R=  +4.0  p =  9.8e-4   unusual          
  ...and 298 test result(s) without anomalies

rng=RNG_stdin, seed=0xff37bd6e
length= 4 terabytes (2^42 bytes), time= 185069 seconds
  no anomalies in 311 test result(s)

rng=RNG_stdin, seed=0xff37bd6e
length= 7.455 terabytes (2^42.898 bytes), time= 345610 seconds
  no anomalies in 322 test result(s)


real	5760m13.453s
user	5599m36.075s
sys	135m11.566s
*/
