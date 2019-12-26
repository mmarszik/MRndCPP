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
/// @created on 2019-12-08 03:01:00 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token b16b7874-0043-4a8e-82b2-466e9cf64f8d                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <random>
#include "rnd_base.h"

class TRnd : public std::mt19937_64 {
public:
    typedef TMRND_RESULT TMRND_RESULT;

    TRnd( std::mt19937_64::result_type __sd) : std::mt19937_64(__sd) {
    }

    static TMRND_RESULT max() {
        return MLimits<TMRND_RESULT>::max();
    }

    TMRND_RESULT operator()() {
        return static_cast<TMRND_RESULT>( std::mt19937_64::operator ()() );
    }

};
/* TEST00
time ./MRndCPP 
655014610
3386838144
192173729
1854295942
901277944
864046005
4611792602556655317

real	0m13.272s
user	0m13.212s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.06e+07  |1592694548|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.34130540|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.47949777|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.01794490|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.35806668|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.80620766|  PASSED  
        diehard_opso|   0|   2097152|     100|0.49465358|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.82812118|  PASSED  
         diehard_dna|   0|   2097152|     100|0.13419933|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.82602461|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.08212899|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.53133973|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.65803929|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.24508028|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.17466274|  PASSED  
        diehard_sums|   0|       100|     100|0.03049594|  PASSED  
        diehard_runs|   0|    100000|     100|0.75300291|  PASSED  
        diehard_runs|   0|    100000|     100|0.35106108|  PASSED  
       diehard_craps|   0|    200000|     100|0.88670544|  PASSED  
       diehard_craps|   0|    200000|     100|0.13982860|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.50031246|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.85599917|  PASSED  
         sts_monobit|   1|    100000|     100|0.05092777|  PASSED  
            sts_runs|   2|    100000|     100|0.08138487|  PASSED  
          sts_serial|   1|    100000|     100|0.65788129|  PASSED  
          sts_serial|   2|    100000|     100|0.80116484|  PASSED  
          sts_serial|   3|    100000|     100|0.22282107|  PASSED  
          sts_serial|   3|    100000|     100|0.05041982|  PASSED  
          sts_serial|   4|    100000|     100|0.57038958|  PASSED  
          sts_serial|   4|    100000|     100|0.25551674|  PASSED  
          sts_serial|   5|    100000|     100|0.71937157|  PASSED  
          sts_serial|   5|    100000|     100|0.75138165|  PASSED  
          sts_serial|   6|    100000|     100|0.30834189|  PASSED  
          sts_serial|   6|    100000|     100|0.76756395|  PASSED  
          sts_serial|   7|    100000|     100|0.97737343|  PASSED  
          sts_serial|   7|    100000|     100|0.65513287|  PASSED  
          sts_serial|   8|    100000|     100|0.71984334|  PASSED  
          sts_serial|   8|    100000|     100|0.60149988|  PASSED  
          sts_serial|   9|    100000|     100|0.10714057|  PASSED  
          sts_serial|   9|    100000|     100|0.61368004|  PASSED  
          sts_serial|  10|    100000|     100|0.16286518|  PASSED  
          sts_serial|  10|    100000|     100|0.26812941|  PASSED  
          sts_serial|  11|    100000|     100|0.03375739|  PASSED  
          sts_serial|  11|    100000|     100|0.13299143|  PASSED  
          sts_serial|  12|    100000|     100|0.56832902|  PASSED  
          sts_serial|  12|    100000|     100|0.85607199|  PASSED  
          sts_serial|  13|    100000|     100|0.89959198|  PASSED  
          sts_serial|  13|    100000|     100|0.45552204|  PASSED  
          sts_serial|  14|    100000|     100|0.80541511|  PASSED  
          sts_serial|  14|    100000|     100|0.94703904|  PASSED  
          sts_serial|  15|    100000|     100|0.85224156|  PASSED  
          sts_serial|  15|    100000|     100|0.14071813|  PASSED  
          sts_serial|  16|    100000|     100|0.34153364|  PASSED  
          sts_serial|  16|    100000|     100|0.99942373|   WEAK   
         rgb_bitdist|   1|    100000|     100|0.20892125|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.38568410|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.52988022|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.70877593|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.53077178|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.73283994|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.05536384|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.96581025|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.10730449|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.61493648|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.79932716|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.35571195|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.33777721|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.44183737|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.64429226|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.54355080|  PASSED  
    rgb_permutations|   2|    100000|     100|0.52202354|  PASSED  
    rgb_permutations|   3|    100000|     100|0.79665524|  PASSED  
    rgb_permutations|   4|    100000|     100|0.60049830|  PASSED  
    rgb_permutations|   5|    100000|     100|0.21406864|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.69946487|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.20316899|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.32116067|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.46392306|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.87768985|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.10245355|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.75506346|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.85737550|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.99533479|   WEAK   
      rgb_lagged_sum|   9|   1000000|     100|0.56188669|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.13045422|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.03369637|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.14197800|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.36026631|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.22866770|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.46282204|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.75318243|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.92452049|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.77113087|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.68737042|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.48233731|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.06197121|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.82226031|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.22944512|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.20579188|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.30177508|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.17576743|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.53374843|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.46824163|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.67369005|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.56605732|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.94485860|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.11337148|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.92778606|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.84066462|  PASSED  
             dab_dct| 256|     50000|       1|0.48783274|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.28389712|  PASSED  
        dab_filltree|  32|  15000000|       1|0.24502073|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.03169525|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.00964723|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.64232428|  PASSED  

real	55m34.663s
user	51m50.576s
sys	3m39.236s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x316f0dcf
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x316f0dcf
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.4  p =  8.3e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x316f0dcf
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x316f0dcf
length= 512 megabytes (2^29 bytes), time= 10.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x316f0dcf
length= 1 gigabyte (2^30 bytes), time= 19.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x316f0dcf
length= 2 gigabytes (2^31 bytes), time= 38.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x316f0dcf
length= 4 gigabytes (2^32 bytes), time= 74.1 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +6.3  p =  2.3e-4   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x316f0dcf
length= 5.250 gigabytes (2^32.392 bytes), time= 100 seconds
  no anomalies in 160 test result(s)


real	1m41.010s
user	1m38.140s
sys	0m2.700s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6faff9d0
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6faff9d0
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x6faff9d0
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x6faff9d0
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x6faff9d0
length= 1 gigabyte (2^30 bytes), time= 19.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x6faff9d0
length= 2 gigabytes (2^31 bytes), time= 38.4 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x6faff9d0
length= 4 gigabytes (2^32 bytes), time= 74.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x6faff9d0
length= 5.500 gigabytes (2^32.459 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:A                          R=  +4.8  p =  2.2e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m42.968s
user	1m40.084s
sys	0m2.696s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8f0cbe4b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8f0cbe4b
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x8f0cbe4b
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8f0cbe4b
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8f0cbe4b
length= 1 gigabyte (2^30 bytes), time= 19.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  -3.8  p =1-9.6e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8f0cbe4b
length= 2 gigabytes (2^31 bytes), time= 38.1 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8f0cbe4b
length= 4 gigabytes (2^32 bytes), time= 76.0 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x8f0cbe4b
length= 5.250 gigabytes (2^32.392 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m42.903s
user	1m39.992s
sys	0m2.708s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x920cb98d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x920cb98d
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +4.6  p =  2.8e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x920cb98d
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x920cb98d
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x920cb98d
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -3.5  p = 0.988     unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x920cb98d
length= 2 gigabytes (2^31 bytes), time= 38.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +4.5  p =  2.3e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x920cb98d
length= 4 gigabytes (2^32 bytes), time= 73.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +4.7  p =  1.3e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x920cb98d
length= 8 gigabytes (2^33 bytes), time= 151 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x920cb98d
length= 16 gigabytes (2^34 bytes), time= 310 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x920cb98d
length= 32 gigabytes (2^35 bytes), time= 623 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x920cb98d
length= 64 gigabytes (2^36 bytes), time= 1262 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x920cb98d
length= 128 gigabytes (2^37 bytes), time= 2528 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x920cb98d
length= 182.500 gigabytes (2^37.512 bytes), time= 3601 seconds
  no anomalies in 201 test result(s)


real	60m1.805s
user	58m10.148s
sys	1m45.812s
*/
