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
/// @created on 2019-12-08 02:58:20 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e2ae05fa-041c-4033-ba46-dfc905ce47d2                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib2;
/* TEST00
time ./MRndCPP 
1604262765
3422254557
378000469
1617572592
4148197001
84671980
6258477022639

real	0m26.211s
user	0m26.064s
sys	0m0.016s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.22e+07  |3379870521|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.45050975|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.99987988|   WEAK   
  diehard_rank_32x32|   0|     40000|     100|0.43141906|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.83099301|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.25389670|  PASSED  
        diehard_opso|   0|   2097152|     100|0.87623040|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.38344025|  PASSED  
         diehard_dna|   0|   2097152|     100|0.47937710|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.80296739|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.83662443|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.48712953|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.92500257|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.96891387|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.15115465|  PASSED  
        diehard_sums|   0|       100|     100|0.03885419|  PASSED  
        diehard_runs|   0|    100000|     100|0.63069426|  PASSED  
        diehard_runs|   0|    100000|     100|0.98282436|  PASSED  
       diehard_craps|   0|    200000|     100|0.39716880|  PASSED  
       diehard_craps|   0|    200000|     100|0.32019700|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.93874112|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.71046296|  PASSED  
         sts_monobit|   1|    100000|     100|0.85055882|  PASSED  
            sts_runs|   2|    100000|     100|0.64060613|  PASSED  
          sts_serial|   1|    100000|     100|0.06028713|  PASSED  
          sts_serial|   2|    100000|     100|0.98597151|  PASSED  
          sts_serial|   3|    100000|     100|0.98213568|  PASSED  
          sts_serial|   3|    100000|     100|0.89087981|  PASSED  
          sts_serial|   4|    100000|     100|0.99876866|   WEAK   
          sts_serial|   4|    100000|     100|0.57861539|  PASSED  
          sts_serial|   5|    100000|     100|0.60224995|  PASSED  
          sts_serial|   5|    100000|     100|0.99234979|  PASSED  
          sts_serial|   6|    100000|     100|0.26320841|  PASSED  
          sts_serial|   6|    100000|     100|0.46832713|  PASSED  
          sts_serial|   7|    100000|     100|0.14630120|  PASSED  
          sts_serial|   7|    100000|     100|0.95153551|  PASSED  
          sts_serial|   8|    100000|     100|0.95633071|  PASSED  
          sts_serial|   8|    100000|     100|0.67403513|  PASSED  
          sts_serial|   9|    100000|     100|0.63170629|  PASSED  
          sts_serial|   9|    100000|     100|0.10992878|  PASSED  
          sts_serial|  10|    100000|     100|0.75432356|  PASSED  
          sts_serial|  10|    100000|     100|0.14187305|  PASSED  
          sts_serial|  11|    100000|     100|0.83401487|  PASSED  
          sts_serial|  11|    100000|     100|0.66094527|  PASSED  
          sts_serial|  12|    100000|     100|0.64656621|  PASSED  
          sts_serial|  12|    100000|     100|0.47871664|  PASSED  
          sts_serial|  13|    100000|     100|0.32797973|  PASSED  
          sts_serial|  13|    100000|     100|0.98680768|  PASSED  
          sts_serial|  14|    100000|     100|0.97517069|  PASSED  
          sts_serial|  14|    100000|     100|0.92247100|  PASSED  
          sts_serial|  15|    100000|     100|0.87460394|  PASSED  
          sts_serial|  15|    100000|     100|0.90960002|  PASSED  
          sts_serial|  16|    100000|     100|0.89844322|  PASSED  
          sts_serial|  16|    100000|     100|0.65101138|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.48371654|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.59266411|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.21084533|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.37014686|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.73310631|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.45550451|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.09593946|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.35889699|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.58509241|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.41970166|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.59670214|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.20413430|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.86871386|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.95416724|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.24199581|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.35436463|  PASSED  
    rgb_permutations|   2|    100000|     100|0.89575589|  PASSED  
    rgb_permutations|   3|    100000|     100|0.63843159|  PASSED  
    rgb_permutations|   4|    100000|     100|0.54630639|  PASSED  
    rgb_permutations|   5|    100000|     100|0.13157503|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.60221938|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.54737234|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.33391985|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.61643858|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.75557897|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.25407015|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.10539559|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.38786973|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.69287890|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.09533135|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.80530101|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.06522206|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.69782949|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.76072742|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.09311482|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.78374187|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.47302432|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.39637678|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.48189942|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.94957543|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.72018381|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.99114578|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.87455893|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.06593309|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.43581601|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.51455336|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.98687207|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.35364484|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.85496921|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.81222711|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.63172931|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.79418905|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.74324272|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.41672472|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.69809647|  PASSED  
             dab_dct| 256|     50000|       1|0.03691362|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.53745761|  PASSED  
        dab_filltree|  32|  15000000|       1|0.06902486|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.47429850|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.33183032|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.86255879|  PASSED  

real	48m9.843s
user	44m24.136s
sys	3m36.916s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xd9baecec
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xd9baecec
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.1  p =  9.9e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xd9baecec
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xd9baecec
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xd9baecec
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xd9baecec
length= 2 gigabytes (2^31 bytes), time= 37.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xd9baecec
length= 4 gigabytes (2^32 bytes), time= 73.2 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xd9baecec
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m44.173s
user	1m41.864s
sys	0m1.964s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x47f4c949
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x47f4c949
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x47f4c949
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +6.1  p =  2.9e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x47f4c949
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x47f4c949
length= 1 gigabyte (2^30 bytes), time= 19.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x47f4c949
length= 2 gigabytes (2^31 bytes), time= 37.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-3,T)         R=  +7.8  p =  1.7e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x47f4c949
length= 4 gigabytes (2^32 bytes), time= 72.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.6e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x47f4c949
length= 8 gigabytes (2^33 bytes), time= 149 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x47f4c949
length= 16 gigabytes (2^34 bytes), time= 303 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-2,T)         R= +10.9  p =  3.4e-5   mildly suspicious
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0x47f4c949
length= 32 gigabytes (2^35 bytes), time= 611 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-1,T)         R= +14.2  p =  4.5e-7   very suspicious  
  [Low1/32]BCFN(2+2,13-1,T)         R= +13.6  p =  9.0e-7   very suspicious  
  ...and 178 test result(s) without anomalies

rng=RNG_stdin32, seed=0x47f4c949
length= 52.000 gigabytes (2^35.700 bytes), time= 1003 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-0,T)         R= +25.9  p =  2.1e-13    FAIL           
  [Low1/32]BCFN(2+2,13-1,T)         R= +22.8  p =  9.5e-12    FAIL           
  [Low1/32]BCFN(2+3,13-1,T)         R=  +8.6  p =  4.3e-4   unusual          
  ...and 181 test result(s) without anomalies


real	16m44.348s
user	16m21.416s
sys	0m19.892s
*/
/* TEST00
time ./MRndCPP 
1604262765
3422254557
378000469
1617572592
4148197001
84671980
6258477022639

real	0m26.121s
user	0m26.076s
sys	0m0.012s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.24e+07  |3800127507|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.93610957|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.25261730|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.33158016|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.45127747|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.65520519|  PASSED  
        diehard_opso|   0|   2097152|     100|0.26976215|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.90984542|  PASSED  
         diehard_dna|   0|   2097152|     100|0.08244164|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.40974736|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.99900478|   WEAK   
 diehard_parking_lot|   0|     12000|     100|0.86481685|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.61157657|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.08474216|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.27275263|  PASSED  
        diehard_sums|   0|       100|     100|0.29320375|  PASSED  
        diehard_runs|   0|    100000|     100|0.42545458|  PASSED  
        diehard_runs|   0|    100000|     100|0.37705954|  PASSED  
       diehard_craps|   0|    200000|     100|0.45605353|  PASSED  
       diehard_craps|   0|    200000|     100|0.27625069|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.07467833|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.80552061|  PASSED  
         sts_monobit|   1|    100000|     100|0.96521708|  PASSED  
            sts_runs|   2|    100000|     100|0.28176880|  PASSED  
          sts_serial|   1|    100000|     100|0.96562525|  PASSED  
          sts_serial|   2|    100000|     100|0.74320572|  PASSED  
          sts_serial|   3|    100000|     100|0.42469361|  PASSED  
          sts_serial|   3|    100000|     100|0.10240770|  PASSED  
          sts_serial|   4|    100000|     100|0.53496122|  PASSED  
          sts_serial|   4|    100000|     100|0.56485055|  PASSED  
          sts_serial|   5|    100000|     100|0.95334450|  PASSED  
          sts_serial|   5|    100000|     100|0.05842699|  PASSED  
          sts_serial|   6|    100000|     100|0.95854864|  PASSED  
          sts_serial|   6|    100000|     100|0.26019059|  PASSED  
          sts_serial|   7|    100000|     100|0.90022372|  PASSED  
          sts_serial|   7|    100000|     100|0.69277384|  PASSED  
          sts_serial|   8|    100000|     100|0.55187168|  PASSED  
          sts_serial|   8|    100000|     100|0.59445121|  PASSED  
          sts_serial|   9|    100000|     100|0.84114705|  PASSED  
          sts_serial|   9|    100000|     100|0.85102075|  PASSED  
          sts_serial|  10|    100000|     100|0.80316311|  PASSED  
          sts_serial|  10|    100000|     100|0.37678934|  PASSED  
          sts_serial|  11|    100000|     100|0.49619647|  PASSED  
          sts_serial|  11|    100000|     100|0.96094639|  PASSED  
          sts_serial|  12|    100000|     100|0.82242359|  PASSED  
          sts_serial|  12|    100000|     100|0.99196060|  PASSED  
          sts_serial|  13|    100000|     100|0.67087712|  PASSED  
          sts_serial|  13|    100000|     100|0.29227239|  PASSED  
          sts_serial|  14|    100000|     100|0.15697805|  PASSED  
          sts_serial|  14|    100000|     100|0.08717237|  PASSED  
          sts_serial|  15|    100000|     100|0.67547843|  PASSED  
          sts_serial|  15|    100000|     100|0.79672215|  PASSED  
          sts_serial|  16|    100000|     100|0.99521349|   WEAK   
          sts_serial|  16|    100000|     100|0.54668575|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.18583010|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.49750621|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.63223804|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.45196472|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.04106663|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.58575934|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.60429634|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.88929373|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.03600316|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.55390331|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.54456634|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.02445336|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.45396877|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.19992539|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.32890708|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.58118276|  PASSED  
    rgb_permutations|   2|    100000|     100|0.71183661|  PASSED  
    rgb_permutations|   3|    100000|     100|0.92144656|  PASSED  
    rgb_permutations|   4|    100000|     100|0.44105549|  PASSED  
    rgb_permutations|   5|    100000|     100|0.38504403|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.24537190|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.48027688|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.96509101|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.32867737|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.17502214|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.60019068|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.52139891|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.63671248|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.73893803|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.17041410|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.05073823|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.53521485|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.87038271|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.78005939|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.12715341|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.98105124|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.08311077|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.23209127|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.36015132|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.98016819|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.99496699|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.28019959|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.10953237|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.10914539|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.88614601|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.28052075|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.32544226|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.43651462|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.49054295|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.17701956|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.86663644|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.99628681|   WEAK   
      rgb_lagged_sum|  32|   1000000|     100|0.68867334|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.19986834|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.46783776|  PASSED  
             dab_dct| 256|     50000|       1|0.40395279|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.10673093|  PASSED  
        dab_filltree|  32|  15000000|       1|0.93314840|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.28763508|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.17048707|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.91125233|  PASSED  

real	47m36.237s
user	43m46.896s
sys	3m43.240s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x99582d93
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x99582d93
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  -4.2  p =1-1.6e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x99582d93
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x99582d93
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x99582d93
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x99582d93
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x99582d93
length= 4 gigabytes (2^32 bytes), time= 72.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x99582d93
length= 5.500 gigabytes (2^32.459 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m43.108s
user	1m40.656s
sys	0m2.172s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe934a4b2
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe934a4b2
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xe934a4b2
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xe934a4b2
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xe934a4b2
length= 1 gigabyte (2^30 bytes), time= 19.3 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xe934a4b2
length= 2 gigabytes (2^31 bytes), time= 37.2 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xe934a4b2
length= 4 gigabytes (2^32 bytes), time= 71.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xe934a4b2
length= 8 gigabytes (2^33 bytes), time= 146 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xe934a4b2
length= 16 gigabytes (2^34 bytes), time= 300 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-1,T)         R= +13.1  p =  1.7e-6   very suspicious  
  [Low1/32]DC6-9x1Bytes-1           R=  +5.1  p =  9.3e-3   unusual          
  ...and 170 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe934a4b2
length= 32 gigabytes (2^35 bytes), time= 602 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-1,T)         R= +17.0  p =  1.2e-8    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+2,13-1,T)         R= +13.5  p =  9.9e-7   very suspicious  
  ...and 178 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe934a4b2
length= 52.500 gigabytes (2^35.714 bytes), time= 1001 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+1,13-0,T)         R= +27.9  p =  2.0e-14    FAIL !         
  [Low1/32]BCFN(2+2,13-1,T)         R= +23.5  p =  4.1e-12    FAIL           
  ...and 182 test result(s) without anomalies


real	16m41.201s
user	16m18.756s
sys	0m20.132s
*/
