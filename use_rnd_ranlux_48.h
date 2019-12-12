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
/// @created on 2019-12-08 03:01:10 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 1558b1d5-f930-4fcb-99b9-14149fee8f7f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <random>
#include "rnd_base.h"

class TRnd : public std::ranlux48 {
public:
    typedef RndBase::TYPE_RESULT TYPE_RESULT;

    TRnd( std::ranlux48::result_type __sd) : std::ranlux48(__sd) {
    }

    static TYPE_RESULT max() {
        return std::numeric_limits<TYPE_RESULT>::max();
    }

    TYPE_RESULT operator()() {
        return static_cast<TYPE_RESULT>( std::ranlux48::operator ()() );
    }

};

/* TEST00
time ./MRndCPP 
466832028
523260929
3251403885
1732303310
1076958659
2680240179
6092453451065

real	23m33.114s
user	23m28.380s
sys	0m0.668s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  5.08e+06  | 889691208|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.88389389|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.18413413|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.78759036|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.80576637|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.82376267|  PASSED  
        diehard_opso|   0|   2097152|     100|0.43690271|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.93628176|  PASSED  
         diehard_dna|   0|   2097152|     100|0.02431339|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.69282384|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.40096994|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.54399718|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.23194743|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.11098316|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.98690797|  PASSED  
        diehard_sums|   0|       100|     100|0.00639841|  PASSED  
        diehard_runs|   0|    100000|     100|0.85794625|  PASSED  
        diehard_runs|   0|    100000|     100|0.83935080|  PASSED  
       diehard_craps|   0|    200000|     100|0.35289127|  PASSED  
       diehard_craps|   0|    200000|     100|0.92990877|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.59609052|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.68770891|  PASSED  
         sts_monobit|   1|    100000|     100|0.78824142|  PASSED  
            sts_runs|   2|    100000|     100|0.99979003|   WEAK   
          sts_serial|   1|    100000|     100|0.41241802|  PASSED  
          sts_serial|   2|    100000|     100|0.45248391|  PASSED  
          sts_serial|   3|    100000|     100|0.29623730|  PASSED  
          sts_serial|   3|    100000|     100|0.90908862|  PASSED  
          sts_serial|   4|    100000|     100|0.52251529|  PASSED  
          sts_serial|   4|    100000|     100|0.98034865|  PASSED  
          sts_serial|   5|    100000|     100|0.84444869|  PASSED  
          sts_serial|   5|    100000|     100|0.93322218|  PASSED  
          sts_serial|   6|    100000|     100|0.94835587|  PASSED  
          sts_serial|   6|    100000|     100|0.85067335|  PASSED  
          sts_serial|   7|    100000|     100|0.72442427|  PASSED  
          sts_serial|   7|    100000|     100|0.99446067|  PASSED  
          sts_serial|   8|    100000|     100|0.76944999|  PASSED  
          sts_serial|   8|    100000|     100|0.80995338|  PASSED  
          sts_serial|   9|    100000|     100|0.62740311|  PASSED  
          sts_serial|   9|    100000|     100|0.17718408|  PASSED  
          sts_serial|  10|    100000|     100|0.96780811|  PASSED  
          sts_serial|  10|    100000|     100|0.93578299|  PASSED  
          sts_serial|  11|    100000|     100|0.03772410|  PASSED  
          sts_serial|  11|    100000|     100|0.01415772|  PASSED  
          sts_serial|  12|    100000|     100|0.04657966|  PASSED  
          sts_serial|  12|    100000|     100|0.14747767|  PASSED  
          sts_serial|  13|    100000|     100|0.20637831|  PASSED  
          sts_serial|  13|    100000|     100|0.92095323|  PASSED  
          sts_serial|  14|    100000|     100|0.98790269|  PASSED  
          sts_serial|  14|    100000|     100|0.32084660|  PASSED  
          sts_serial|  15|    100000|     100|0.79352755|  PASSED  
          sts_serial|  15|    100000|     100|0.18895136|  PASSED  
          sts_serial|  16|    100000|     100|0.50071265|  PASSED  
          sts_serial|  16|    100000|     100|0.80225728|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.35105678|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.75882081|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.75740471|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.48354707|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.84220582|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.28883592|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.45542892|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.54281211|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.87814161|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.96955854|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.06856065|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.58248146|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.63177981|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.95803265|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.26920414|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.82453189|  PASSED  
    rgb_permutations|   2|    100000|     100|0.48775253|  PASSED  
    rgb_permutations|   3|    100000|     100|0.78658714|  PASSED  
    rgb_permutations|   4|    100000|     100|0.65148516|  PASSED  
    rgb_permutations|   5|    100000|     100|0.42952770|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.28231592|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.39323622|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.93508517|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.78450607|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.86764398|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.86360638|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.40647589|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.99232471|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.98686846|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.25669539|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.57552489|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.55086871|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.94652098|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.68299431|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.47967775|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.37408155|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.85997253|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.83519748|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.56415174|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.67054773|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.00828775|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.55573700|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.07707012|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.90677744|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.92340332|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.45474319|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.43088900|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.95340947|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.02838268|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.37407651|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.12065886|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.02969750|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.86700949|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.00182165|   WEAK   
     dab_bytedistrib|   0|  51200000|       1|0.91288401|  PASSED  
             dab_dct| 256|     50000|       1|0.36024799|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.25456452|  PASSED  
        dab_filltree|  32|  15000000|       1|0.84632473|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.05490862|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.98620291|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.94840297|  PASSED  

real	217m56.795s
user	214m22.308s
sys	3m0.640s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xed7d9df
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xed7d9df
length= 32 megabytes (2^25 bytes), time= 2.1 seconds
  no anomalies in 100 test result(s)

rng=RNG_stdin32, seed=0xed7d9df
length= 64 megabytes (2^26 bytes), time= 4.6 seconds
  no anomalies in 108 test result(s)

rng=RNG_stdin32, seed=0xed7d9df
length= 128 megabytes (2^27 bytes), time= 9.1 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xed7d9df
length= 256 megabytes (2^28 bytes), time= 17.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xed7d9df
length= 512 megabytes (2^29 bytes), time= 33.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xed7d9df
length= 1 gigabyte (2^30 bytes), time= 65.6 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+3,13-1,T)                  R=  -7.8  p =1-4.2e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xed7d9df
length= 1.750 gigabytes (2^30.807 bytes), time= 113 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+4,13-1,T)                  R=  +8.7  p =  3.6e-4   unusual          
  ...and 143 test result(s) without anomalies


real	1m53.391s
user	1m51.576s
sys	0m1.576s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbecc7f5a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbecc7f5a
length= 64 megabytes (2^26 bytes), time= 3.9 seconds
  no anomalies in 108 test result(s)

rng=RNG_stdin32, seed=0xbecc7f5a
length= 128 megabytes (2^27 bytes), time= 8.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xbecc7f5a
length= 256 megabytes (2^28 bytes), time= 16.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xbecc7f5a
length= 512 megabytes (2^29 bytes), time= 32.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xbecc7f5a
length= 1 gigabyte (2^30 bytes), time= 64.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xbecc7f5a
length= 2 gigabytes (2^31 bytes), time= 128 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xbecc7f5a
length= 4 gigabytes (2^32 bytes), time= 253 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xbecc7f5a
length= 8 gigabytes (2^33 bytes), time= 503 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xbecc7f5a
length= 16 gigabytes (2^34 bytes), time= 1015 seconds
  no anomalies in 172 test result(s)


real	16m56.746s
user	16m41.508s
sys	0m12.868s
*/
