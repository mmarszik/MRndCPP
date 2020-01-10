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

using TRnd = RndMLin;
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
