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
/// @created on 2019-12-08 03:02:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 995f3936-f3cc-4472-9a0d-d22eb4f2f7e1                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin05;

/* TEST00
time ./MRndCPP 
450647553
1626776225
2111440573
3385282940
1835585326
2004076447
45469838354975

real	0m24.206s
user	0m24.168s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.22e+07  |3469172527|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.22672655|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.22992173|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.29446174|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.63076995|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.57802836|  PASSED  
        diehard_opso|   0|   2097152|     100|0.65776718|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.09374649|  PASSED  
         diehard_dna|   0|   2097152|     100|0.77476036|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.13665152|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.51645931|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.45362429|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.07579353|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.93026033|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.97119109|  PASSED  
        diehard_sums|   0|       100|     100|0.00123830|   WEAK   
        diehard_runs|   0|    100000|     100|0.25186974|  PASSED  
        diehard_runs|   0|    100000|     100|0.23586327|  PASSED  
       diehard_craps|   0|    200000|     100|0.38896413|  PASSED  
       diehard_craps|   0|    200000|     100|0.93259809|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.23082064|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.03831878|  PASSED  
         sts_monobit|   1|    100000|     100|0.20942684|  PASSED  
            sts_runs|   2|    100000|     100|0.68914691|  PASSED  
          sts_serial|   1|    100000|     100|0.58989930|  PASSED  
          sts_serial|   2|    100000|     100|0.99480164|  PASSED  
          sts_serial|   3|    100000|     100|0.41243046|  PASSED  
          sts_serial|   3|    100000|     100|0.31952725|  PASSED  
          sts_serial|   4|    100000|     100|0.97911358|  PASSED  
          sts_serial|   4|    100000|     100|0.92968216|  PASSED  
          sts_serial|   5|    100000|     100|0.70436482|  PASSED  
          sts_serial|   5|    100000|     100|0.67477014|  PASSED  
          sts_serial|   6|    100000|     100|0.77328572|  PASSED  
          sts_serial|   6|    100000|     100|0.17725629|  PASSED  
          sts_serial|   7|    100000|     100|0.96170990|  PASSED  
          sts_serial|   7|    100000|     100|0.32586718|  PASSED  
          sts_serial|   8|    100000|     100|0.43651068|  PASSED  
          sts_serial|   8|    100000|     100|0.80220764|  PASSED  
          sts_serial|   9|    100000|     100|0.05389405|  PASSED  
          sts_serial|   9|    100000|     100|0.51883652|  PASSED  
          sts_serial|  10|    100000|     100|0.02163925|  PASSED  
          sts_serial|  10|    100000|     100|0.52888813|  PASSED  
          sts_serial|  11|    100000|     100|0.69629851|  PASSED  
          sts_serial|  11|    100000|     100|0.28185869|  PASSED  
          sts_serial|  12|    100000|     100|0.59663254|  PASSED  
          sts_serial|  12|    100000|     100|0.64135452|  PASSED  
          sts_serial|  13|    100000|     100|0.68371737|  PASSED  
          sts_serial|  13|    100000|     100|0.42887155|  PASSED  
          sts_serial|  14|    100000|     100|0.07548908|  PASSED  
          sts_serial|  14|    100000|     100|0.09905571|  PASSED  
          sts_serial|  15|    100000|     100|0.59407007|  PASSED  
          sts_serial|  15|    100000|     100|0.93743056|  PASSED  
          sts_serial|  16|    100000|     100|0.73782739|  PASSED  
          sts_serial|  16|    100000|     100|0.03643265|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.99933473|   WEAK   
         rgb_bitdist|   2|    100000|     100|0.81496806|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.27822500|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.61786031|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.57505455|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.23488006|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.97926197|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.64424609|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.07136859|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.25317126|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.79300493|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.16281024|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.88649631|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.13682302|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.93163281|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.73068962|  PASSED  
    rgb_permutations|   2|    100000|     100|0.26856586|  PASSED  
    rgb_permutations|   3|    100000|     100|0.94338229|  PASSED  
    rgb_permutations|   4|    100000|     100|0.58910274|  PASSED  
    rgb_permutations|   5|    100000|     100|0.14222283|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.36637531|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.89900957|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.78776661|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.65843628|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.07371821|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.24508557|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.05528297|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.27315909|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.91207441|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.09362343|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.63904005|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.94362931|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.98124214|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.20840323|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.64479435|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.34371360|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.18867547|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.06873578|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.64465225|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.34863574|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.91492723|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.97272754|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.29904187|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.65379547|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.99504357|   WEAK   
      rgb_lagged_sum|  25|   1000000|     100|0.96679878|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.54083315|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.79340374|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.08347645|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.48526151|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.87684644|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.23964209|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.22131068|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.29159389|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.25692311|  PASSED  
             dab_dct| 256|     50000|       1|0.88294939|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.16230720|  PASSED  
        dab_filltree|  32|  15000000|       1|0.59929657|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.16836014|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.14405794|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.88851292|  PASSED  

real	49m17.795s
user	45m27.944s
sys	3m32.828s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd8b4c517
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd8b4c517
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=  +7.4  p =  2.8e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd8b4c517
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.6  p =1-2.4e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd8b4c517
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xd8b4c517
length= 1 gigabyte (2^30 bytes), time= 19.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xd8b4c517
length= 2 gigabytes (2^31 bytes), time= 37.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xd8b4c517
length= 4 gigabytes (2^32 bytes), time= 73.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd8b4c517
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.264s
user	1m41.564s
sys	0m2.396s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbd6ad14b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbd6ad14b
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -3.7  p =1-1.2e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbd6ad14b
length= 256 megabytes (2^28 bytes), time= 6.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xbd6ad14b
length= 512 megabytes (2^29 bytes), time= 11.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  -2.3  p =1-6.8e-4   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbd6ad14b
length= 1 gigabyte (2^30 bytes), time= 23.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xbd6ad14b
length= 2 gigabytes (2^31 bytes), time= 45.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xbd6ad14b
length= 4 gigabytes (2^32 bytes), time= 88.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xbd6ad14b
length= 8 gigabytes (2^33 bytes), time= 185 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xbd6ad14b
length= 16 gigabytes (2^34 bytes), time= 383 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xbd6ad14b
length= 32 gigabytes (2^35 bytes), time= 773 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xbd6ad14b
length= 41.500 gigabytes (2^35.375 bytes), time= 1014 seconds
  no anomalies in 184 test result(s)


real	16m55.173s
user	16m37.288s
sys	0m15.160s
*/
/* TEST00
time ./MRndCPP 
450647553
1626776225
2111440573
3385282940
1835585326
2004076447
45469838354975

real	0m24.107s
user	0m24.036s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.26e+07  |3288921344|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.43010140|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.42109503|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.09607192|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.94259378|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.96228030|  PASSED  
        diehard_opso|   0|   2097152|     100|0.84551854|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.82069794|  PASSED  
         diehard_dna|   0|   2097152|     100|0.10588279|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.58801598|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.90812322|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.78081639|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.18222706|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.60849512|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.19824799|  PASSED  
        diehard_sums|   0|       100|     100|0.06116452|  PASSED  
        diehard_runs|   0|    100000|     100|0.53076867|  PASSED  
        diehard_runs|   0|    100000|     100|0.36774294|  PASSED  
       diehard_craps|   0|    200000|     100|0.88486201|  PASSED  
       diehard_craps|   0|    200000|     100|0.49256627|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.55356163|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.57707803|  PASSED  
         sts_monobit|   1|    100000|     100|0.13922004|  PASSED  
            sts_runs|   2|    100000|     100|0.59224826|  PASSED  
          sts_serial|   1|    100000|     100|0.28957093|  PASSED  
          sts_serial|   2|    100000|     100|0.56514512|  PASSED  
          sts_serial|   3|    100000|     100|0.04594408|  PASSED  
          sts_serial|   3|    100000|     100|0.09183825|  PASSED  
          sts_serial|   4|    100000|     100|0.15550989|  PASSED  
          sts_serial|   4|    100000|     100|0.75884389|  PASSED  
          sts_serial|   5|    100000|     100|0.86524592|  PASSED  
          sts_serial|   5|    100000|     100|0.01716493|  PASSED  
          sts_serial|   6|    100000|     100|0.28611495|  PASSED  
          sts_serial|   6|    100000|     100|0.54101220|  PASSED  
          sts_serial|   7|    100000|     100|0.46204120|  PASSED  
          sts_serial|   7|    100000|     100|0.26165263|  PASSED  
          sts_serial|   8|    100000|     100|0.96972443|  PASSED  
          sts_serial|   8|    100000|     100|0.98852856|  PASSED  
          sts_serial|   9|    100000|     100|0.45538861|  PASSED  
          sts_serial|   9|    100000|     100|0.59683859|  PASSED  
          sts_serial|  10|    100000|     100|0.13824407|  PASSED  
          sts_serial|  10|    100000|     100|0.46808061|  PASSED  
          sts_serial|  11|    100000|     100|0.02203433|  PASSED  
          sts_serial|  11|    100000|     100|0.35576688|  PASSED  
          sts_serial|  12|    100000|     100|0.42642561|  PASSED  
          sts_serial|  12|    100000|     100|0.75102948|  PASSED  
          sts_serial|  13|    100000|     100|0.37004685|  PASSED  
          sts_serial|  13|    100000|     100|0.29938484|  PASSED  
          sts_serial|  14|    100000|     100|0.82025526|  PASSED  
          sts_serial|  14|    100000|     100|0.68403681|  PASSED  
          sts_serial|  15|    100000|     100|0.50062879|  PASSED  
          sts_serial|  15|    100000|     100|0.07988834|  PASSED  
          sts_serial|  16|    100000|     100|0.90108443|  PASSED  
          sts_serial|  16|    100000|     100|0.41108096|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.41790054|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.47625980|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.00180768|   WEAK   
         rgb_bitdist|   4|    100000|     100|0.32688132|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.54595311|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.89807155|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.18301992|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.78953739|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.83936231|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.96657436|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.41768356|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.04562329|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.17968293|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.62803728|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.29520596|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.61849751|  PASSED  
    rgb_permutations|   2|    100000|     100|0.03533612|  PASSED  
    rgb_permutations|   3|    100000|     100|0.83998766|  PASSED  
    rgb_permutations|   4|    100000|     100|0.51750705|  PASSED  
    rgb_permutations|   5|    100000|     100|0.49288050|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.92984244|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.02831329|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.58806633|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.86503464|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.31419665|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.42201614|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.71700350|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.30141308|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.73561613|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.23398437|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.06188256|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.95970254|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.19352924|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.57094512|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.62482340|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.52580863|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.70356669|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.51522048|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.73251945|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.27825318|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.87145112|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.87318426|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.50779368|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.25700940|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.64905161|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.04458205|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.57025118|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.86333993|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.21812230|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.64911510|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.95142543|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.40793543|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.55066439|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.66959596|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.43860472|  PASSED  
             dab_dct| 256|     50000|       1|0.73491303|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.79581067|  PASSED  
        dab_filltree|  32|  15000000|       1|0.72001742|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.08797886|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.55304174|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.88912035|  PASSED  

real	52m3.487s
user	48m11.240s
sys	3m45.908s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc637730b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc637730b
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc637730b
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc637730b
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xc637730b
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc637730b
length= 2 gigabytes (2^31 bytes), time= 37.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.0e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc637730b
length= 4 gigabytes (2^32 bytes), time= 73.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xc637730b
length= 5.500 gigabytes (2^32.459 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.491s
user	1m42.028s
sys	0m2.204s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc8ba7fd0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc8ba7fd0
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc8ba7fd0
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc8ba7fd0
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xc8ba7fd0
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc8ba7fd0
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xc8ba7fd0
length= 4 gigabytes (2^32 bytes), time= 71.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xc8ba7fd0
length= 8 gigabytes (2^33 bytes), time= 145 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xc8ba7fd0
length= 16 gigabytes (2^34 bytes), time= 299 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xc8ba7fd0
length= 32 gigabytes (2^35 bytes), time= 604 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xc8ba7fd0
length= 52.500 gigabytes (2^35.714 bytes), time= 1003 seconds
  no anomalies in 184 test result(s)


real	16m43.132s
user	16m21.560s
sys	0m19.108s
*/
