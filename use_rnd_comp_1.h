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
/// @created on 2019-12-08 02:55:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5d4c00a3-ad7a-4d61-8d5a-8bdc687545af                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_sim_lin.h"

using TRnd = RndComp<RndSimLin01,RndSimLin03,10>;

/* TEST00
time ./MRndCPP 
1585682339
2494875974
1870629489
3954548876
3038153523
1357523021
18446250801784945140

real	0m49.758s
user	0m49.700s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.89e+07  | 751278211|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.86741005|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.95116980|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.69164855|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.56153496|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.99287898|  PASSED  
        diehard_opso|   0|   2097152|     100|0.33289303|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.67422423|  PASSED  
         diehard_dna|   0|   2097152|     100|0.07590728|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.88556563|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.98834910|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.36104913|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.32858902|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.63921214|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.71242493|  PASSED  
        diehard_sums|   0|       100|     100|0.04302036|  PASSED  
        diehard_runs|   0|    100000|     100|0.22666121|  PASSED  
        diehard_runs|   0|    100000|     100|0.39969723|  PASSED  
       diehard_craps|   0|    200000|     100|0.77460949|  PASSED  
       diehard_craps|   0|    200000|     100|0.14431057|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.40052339|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.22594767|  PASSED  
         sts_monobit|   1|    100000|     100|0.33227848|  PASSED  
            sts_runs|   2|    100000|     100|0.65977288|  PASSED  
          sts_serial|   1|    100000|     100|0.97470284|  PASSED  
          sts_serial|   2|    100000|     100|0.39866600|  PASSED  
          sts_serial|   3|    100000|     100|0.08385010|  PASSED  
          sts_serial|   3|    100000|     100|0.70644438|  PASSED  
          sts_serial|   4|    100000|     100|0.79185271|  PASSED  
          sts_serial|   4|    100000|     100|0.26654589|  PASSED  
          sts_serial|   5|    100000|     100|0.55044548|  PASSED  
          sts_serial|   5|    100000|     100|0.58119098|  PASSED  
          sts_serial|   6|    100000|     100|0.07311797|  PASSED  
          sts_serial|   6|    100000|     100|0.12501161|  PASSED  
          sts_serial|   7|    100000|     100|0.25454036|  PASSED  
          sts_serial|   7|    100000|     100|0.48430844|  PASSED  
          sts_serial|   8|    100000|     100|0.94643892|  PASSED  
          sts_serial|   8|    100000|     100|0.16030902|  PASSED  
          sts_serial|   9|    100000|     100|0.69217976|  PASSED  
          sts_serial|   9|    100000|     100|0.82674598|  PASSED  
          sts_serial|  10|    100000|     100|0.96546860|  PASSED  
          sts_serial|  10|    100000|     100|0.84601319|  PASSED  
          sts_serial|  11|    100000|     100|0.83839531|  PASSED  
          sts_serial|  11|    100000|     100|0.42885089|  PASSED  
          sts_serial|  12|    100000|     100|0.56923321|  PASSED  
          sts_serial|  12|    100000|     100|0.45994021|  PASSED  
          sts_serial|  13|    100000|     100|0.36392727|  PASSED  
          sts_serial|  13|    100000|     100|0.23566829|  PASSED  
          sts_serial|  14|    100000|     100|0.30709715|  PASSED  
          sts_serial|  14|    100000|     100|0.43893003|  PASSED  
          sts_serial|  15|    100000|     100|0.06388525|  PASSED  
          sts_serial|  15|    100000|     100|0.18170173|  PASSED  
          sts_serial|  16|    100000|     100|0.33715155|  PASSED  
          sts_serial|  16|    100000|     100|0.02637551|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.89397254|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.66239939|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.96195860|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.70455129|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.35179130|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.87500459|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.38064094|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.80329753|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.26544930|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.46932609|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.28994613|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.99703001|   WEAK   
rgb_minimum_distance|   2|     10000|    1000|0.68891000|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.17075748|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.79710000|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.11884060|  PASSED  
    rgb_permutations|   2|    100000|     100|0.70774540|  PASSED  
    rgb_permutations|   3|    100000|     100|0.53211748|  PASSED  
    rgb_permutations|   4|    100000|     100|0.85120389|  PASSED  
    rgb_permutations|   5|    100000|     100|0.99991639|   WEAK   
      rgb_lagged_sum|   0|   1000000|     100|0.95753991|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.77897436|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.02454997|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.22986915|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.70317061|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.08800270|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.32640068|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.11206867|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.79594015|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.79045694|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.38530796|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.10436245|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.58599455|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.09501825|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.90771181|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.77671857|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.08978689|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.10510715|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.15035842|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.97631395|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.39636740|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.51072788|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.52104735|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.13260654|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.84072066|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.24939148|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.91006446|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.39453817|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.39198146|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.78858096|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.51531288|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.14434135|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.88064747|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.81156604|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.65648015|  PASSED  
             dab_dct| 256|     50000|       1|0.95013888|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.55872035|  PASSED  
        dab_filltree|  32|  15000000|       1|0.22646546|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.59638273|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.61510305|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.00034717|   WEAK   

real	56m18.010s
user	52m32.144s
sys	3m35.928s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4f1c8312
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4f1c8312
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4f1c8312
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4f1c8312
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x4f1c8312
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4f1c8312
length= 2 gigabytes (2^31 bytes), time= 40.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-4,T)         R=  +9.9  p =  3.0e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x4f1c8312
length= 4 gigabytes (2^32 bytes), time= 79.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x4f1c8312
length= 5.000 gigabytes (2^32.322 bytes), time= 100 seconds
  no anomalies in 159 test result(s)


real	1m41.156s
user	1m37.312s
sys	0m3.356s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3c95c0f2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3c95c0f2
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3c95c0f2
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x3c95c0f2
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -5.0  p =1-1.6e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3c95c0f2
length= 1 gigabyte (2^30 bytes), time= 22.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x3c95c0f2
length= 2 gigabytes (2^31 bytes), time= 43.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x3c95c0f2
length= 4 gigabytes (2^32 bytes), time= 83.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x3c95c0f2
length= 8 gigabytes (2^33 bytes), time= 172 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x3c95c0f2
length= 16 gigabytes (2^34 bytes), time= 356 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x3c95c0f2
length= 32 gigabytes (2^35 bytes), time= 717 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x3c95c0f2
length= 44.250 gigabytes (2^35.468 bytes), time= 1003 seconds
  no anomalies in 184 test result(s)


real	16m43.560s
user	16m14.124s
sys	0m26.596s
*/
/* TEST00
time ./MRndCPP 
1585682339
2494875974
1870629489
3954548876
3038153523
1357523021
18446250801784945140

real	0m49.751s
user	0m49.680s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.90e+07  | 454153919|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.28151290|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.95170591|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.34139433|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.57850076|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.03078629|  PASSED  
        diehard_opso|   0|   2097152|     100|0.94050686|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.35243160|  PASSED  
         diehard_dna|   0|   2097152|     100|0.65984056|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.77179991|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.65721081|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.96913730|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.11506490|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.38888427|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.03677413|  PASSED  
        diehard_sums|   0|       100|     100|0.09814056|  PASSED  
        diehard_runs|   0|    100000|     100|0.62940511|  PASSED  
        diehard_runs|   0|    100000|     100|0.59848823|  PASSED  
       diehard_craps|   0|    200000|     100|0.07186113|  PASSED  
       diehard_craps|   0|    200000|     100|0.83003992|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.02849194|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.02424248|  PASSED  
         sts_monobit|   1|    100000|     100|0.26240354|  PASSED  
            sts_runs|   2|    100000|     100|0.20622334|  PASSED  
          sts_serial|   1|    100000|     100|0.76586034|  PASSED  
          sts_serial|   2|    100000|     100|0.55057911|  PASSED  
          sts_serial|   3|    100000|     100|0.83855198|  PASSED  
          sts_serial|   3|    100000|     100|0.94154586|  PASSED  
          sts_serial|   4|    100000|     100|0.98757147|  PASSED  
          sts_serial|   4|    100000|     100|0.99556660|   WEAK   
          sts_serial|   5|    100000|     100|0.59668197|  PASSED  
          sts_serial|   5|    100000|     100|0.90958300|  PASSED  
          sts_serial|   6|    100000|     100|0.62060940|  PASSED  
          sts_serial|   6|    100000|     100|0.98911070|  PASSED  
          sts_serial|   7|    100000|     100|0.99447264|  PASSED  
          sts_serial|   7|    100000|     100|0.92646327|  PASSED  
          sts_serial|   8|    100000|     100|0.77520344|  PASSED  
          sts_serial|   8|    100000|     100|0.39594732|  PASSED  
          sts_serial|   9|    100000|     100|0.16204581|  PASSED  
          sts_serial|   9|    100000|     100|0.13371345|  PASSED  
          sts_serial|  10|    100000|     100|0.85936433|  PASSED  
          sts_serial|  10|    100000|     100|0.70541465|  PASSED  
          sts_serial|  11|    100000|     100|0.78494726|  PASSED  
          sts_serial|  11|    100000|     100|0.24853801|  PASSED  
          sts_serial|  12|    100000|     100|0.74802803|  PASSED  
          sts_serial|  12|    100000|     100|0.84447542|  PASSED  
          sts_serial|  13|    100000|     100|0.99821855|   WEAK   
          sts_serial|  13|    100000|     100|0.56383702|  PASSED  
          sts_serial|  14|    100000|     100|0.81333154|  PASSED  
          sts_serial|  14|    100000|     100|0.84968407|  PASSED  
          sts_serial|  15|    100000|     100|0.44712052|  PASSED  
          sts_serial|  15|    100000|     100|0.54143441|  PASSED  
          sts_serial|  16|    100000|     100|0.92577014|  PASSED  
          sts_serial|  16|    100000|     100|0.36015464|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.17244846|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.38220149|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.37633176|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.84835263|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.22881472|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.52730835|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.58561183|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.48909710|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.13780344|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.69113421|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.15813352|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.68719127|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.69790329|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.53403699|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.63983641|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.78986473|  PASSED  
    rgb_permutations|   2|    100000|     100|0.35308956|  PASSED  
    rgb_permutations|   3|    100000|     100|0.95924146|  PASSED  
    rgb_permutations|   4|    100000|     100|0.57489374|  PASSED  
    rgb_permutations|   5|    100000|     100|0.66968698|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.97070372|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.20712160|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.30723807|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.44835775|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.66094234|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.03546654|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.30436627|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.20766713|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.25216961|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.73453278|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.91546857|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.74137326|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.81997313|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.28749996|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.43794646|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.79972935|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.99240125|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.62768345|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.61338863|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.94167506|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.21130550|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.63189806|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.81069154|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.76297781|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.46698626|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.34451163|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.34253850|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.56290744|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.78491854|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.96986024|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.32038521|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.16926326|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.40127332|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.62661537|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.75759071|  PASSED  
             dab_dct| 256|     50000|       1|0.82994075|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.25327099|  PASSED  
        dab_filltree|  32|  15000000|       1|0.09194958|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.79979979|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.69406393|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.20422798|  PASSED  

real	56m40.154s
user	53m7.332s
sys	3m24.856s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4a8932a9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4a8932a9
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4a8932a9
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4a8932a9
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x4a8932a9
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4a8932a9
length= 2 gigabytes (2^31 bytes), time= 39.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x4a8932a9
length= 4 gigabytes (2^32 bytes), time= 77.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x4a8932a9
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.682s
user	1m39.216s
sys	0m3.084s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xec4371a5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xec4371a5
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xec4371a5
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -5.2  p =1-1.2e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xec4371a5
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xec4371a5
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xec4371a5
length= 2 gigabytes (2^31 bytes), time= 39.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xec4371a5
length= 4 gigabytes (2^32 bytes), time= 79.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xec4371a5
length= 8 gigabytes (2^33 bytes), time= 162 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xec4371a5
length= 16 gigabytes (2^34 bytes), time= 327 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xec4371a5
length= 32 gigabytes (2^35 bytes), time= 652 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:cross        R=  +3.8  p =  1.3e-3   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0xec4371a5
length= 48.750 gigabytes (2^35.607 bytes), time= 1000 seconds
  no anomalies in 184 test result(s)


real	16m40.736s
user	16m9.652s
sys	0m28.648s
*/
