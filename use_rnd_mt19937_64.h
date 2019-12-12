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
    typedef RndBase::TYPE_RESULT TYPE_RESULT;

    TRnd( std::mt19937_64::result_type __sd) : std::mt19937_64(__sd) {
    }

    static TYPE_RESULT max() {
        return std::numeric_limits<TYPE_RESULT>::max();
    }

    TYPE_RESULT operator()() {
        return static_cast<TYPE_RESULT>( std::mt19937_64::operator ()() );
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
132886516036542

real	0m53.266s
user	0m53.144s
sys	0m0.028s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.05e+07  | 784369549|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.57651747|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.74783088|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.55781586|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.85487565|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.82570938|  PASSED  
        diehard_opso|   0|   2097152|     100|0.86712994|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.73593262|  PASSED  
         diehard_dna|   0|   2097152|     100|0.41249923|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.33756269|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.27204989|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.17962474|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.12252474|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.09775899|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.55173767|  PASSED  
        diehard_sums|   0|       100|     100|0.03183866|  PASSED  
        diehard_runs|   0|    100000|     100|0.83496427|  PASSED  
        diehard_runs|   0|    100000|     100|0.14889656|  PASSED  
       diehard_craps|   0|    200000|     100|0.82404082|  PASSED  
       diehard_craps|   0|    200000|     100|0.99089481|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99781424|   WEAK   
 marsaglia_tsang_gcd|   0|  10000000|     100|0.59203785|  PASSED  
         sts_monobit|   1|    100000|     100|0.11617697|  PASSED  
            sts_runs|   2|    100000|     100|0.33208699|  PASSED  
          sts_serial|   1|    100000|     100|0.58225977|  PASSED  
          sts_serial|   2|    100000|     100|0.98683710|  PASSED  
          sts_serial|   3|    100000|     100|0.67658819|  PASSED  
          sts_serial|   3|    100000|     100|0.43371641|  PASSED  
          sts_serial|   4|    100000|     100|0.58586494|  PASSED  
          sts_serial|   4|    100000|     100|0.50879270|  PASSED  
          sts_serial|   5|    100000|     100|0.56674830|  PASSED  
          sts_serial|   5|    100000|     100|0.56886012|  PASSED  
          sts_serial|   6|    100000|     100|0.96401977|  PASSED  
          sts_serial|   6|    100000|     100|0.87920261|  PASSED  
          sts_serial|   7|    100000|     100|0.98558506|  PASSED  
          sts_serial|   7|    100000|     100|0.75030877|  PASSED  
          sts_serial|   8|    100000|     100|0.35422846|  PASSED  
          sts_serial|   8|    100000|     100|0.42905408|  PASSED  
          sts_serial|   9|    100000|     100|0.99212846|  PASSED  
          sts_serial|   9|    100000|     100|0.25021084|  PASSED  
          sts_serial|  10|    100000|     100|0.42997017|  PASSED  
          sts_serial|  10|    100000|     100|0.40357025|  PASSED  
          sts_serial|  11|    100000|     100|0.59887526|  PASSED  
          sts_serial|  11|    100000|     100|0.72072852|  PASSED  
          sts_serial|  12|    100000|     100|0.69869841|  PASSED  
          sts_serial|  12|    100000|     100|0.18813210|  PASSED  
          sts_serial|  13|    100000|     100|0.21654781|  PASSED  
          sts_serial|  13|    100000|     100|0.19902928|  PASSED  
          sts_serial|  14|    100000|     100|0.79933011|  PASSED  
          sts_serial|  14|    100000|     100|0.18533198|  PASSED  
          sts_serial|  15|    100000|     100|0.66258539|  PASSED  
          sts_serial|  15|    100000|     100|0.45459167|  PASSED  
          sts_serial|  16|    100000|     100|0.85551807|  PASSED  
          sts_serial|  16|    100000|     100|0.81659071|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.13004107|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.55653185|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.87218639|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.29858874|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.66801973|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.06085294|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.22590614|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.80151236|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.69848607|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.92034553|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.93214337|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.69395815|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.76840744|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.40339213|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.50921326|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.25286900|  PASSED  
    rgb_permutations|   2|    100000|     100|0.97670580|  PASSED  
    rgb_permutations|   3|    100000|     100|0.31804996|  PASSED  
    rgb_permutations|   4|    100000|     100|0.42475513|  PASSED  
    rgb_permutations|   5|    100000|     100|0.21910424|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.32502186|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.66279291|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.91030188|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.92508263|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.27851980|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.35726897|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.84923790|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.78985192|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.02201090|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.08153915|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.83840991|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.71654398|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.85974851|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.18402188|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.93013870|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.93210046|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.63540497|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.06054766|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.83438871|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.76544417|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.94231635|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.93748913|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.32292047|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.77478675|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.45962491|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.24481908|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.80799537|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.19988021|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.08449671|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.32400599|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.78441844|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.19461335|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.81394427|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.61270511|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.39559207|  PASSED  
             dab_dct| 256|     50000|       1|0.30406855|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.01718762|  PASSED  
        dab_filltree|  32|  15000000|       1|0.10545337|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.54641281|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.56104344|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.32505807|  PASSED  

real	48m36.832s
user	44m52.516s
sys	3m37.592s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3c75aafe
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3c75aafe
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3c75aafe
length= 256 megabytes (2^28 bytes), time= 5.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x3c75aafe
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x3c75aafe
length= 1 gigabyte (2^30 bytes), time= 19.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x3c75aafe
length= 2 gigabytes (2^31 bytes), time= 38.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x3c75aafe
length= 4 gigabytes (2^32 bytes), time= 73.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x3c75aafe
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m44.020s
user	1m40.872s
sys	0m2.868s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8b69f00e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8b69f00e
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x8b69f00e
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8b69f00e
length= 512 megabytes (2^29 bytes), time= 10.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8b69f00e
length= 1 gigabyte (2^30 bytes), time= 19.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x8b69f00e
length= 2 gigabytes (2^31 bytes), time= 37.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8b69f00e
length= 4 gigabytes (2^32 bytes), time= 73.6 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x8b69f00e
length= 8 gigabytes (2^33 bytes), time= 150 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x8b69f00e
length= 16 gigabytes (2^34 bytes), time= 307 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x8b69f00e
length= 32 gigabytes (2^35 bytes), time= 616 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x8b69f00e
length= 51.250 gigabytes (2^35.679 bytes), time= 1001 seconds
  no anomalies in 184 test result(s)


real	16m41.459s
user	16m13.492s
sys	0m25.660s
*/
