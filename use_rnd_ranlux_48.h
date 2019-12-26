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
    typedef TMRND_RESULT TMRND_RESULT;

    TRnd( std::ranlux48::result_type __sd) : std::ranlux48(__sd) {
    }

    static TMRND_RESULT max() {
        return MLimits<TMRND_RESULT>::max();
    }

    TMRND_RESULT operator()() {
        return static_cast<TMRND_RESULT>( std::ranlux48::operator ()() );
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
4611677104817142794

real	5m51.524s
user	5m50.380s
sys	0m0.144s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  5.07e+06  |1296955282|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.96995647|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.12958129|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.52877063|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.50798575|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.89164363|  PASSED  
        diehard_opso|   0|   2097152|     100|0.89803204|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.35405108|  PASSED  
         diehard_dna|   0|   2097152|     100|0.23006076|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.91202835|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.26829116|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.50364626|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.15057697|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.32857144|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.88791116|  PASSED  
        diehard_sums|   0|       100|     100|0.35413001|  PASSED  
        diehard_runs|   0|    100000|     100|0.88454479|  PASSED  
        diehard_runs|   0|    100000|     100|0.19863755|  PASSED  
       diehard_craps|   0|    200000|     100|0.06475142|  PASSED  
       diehard_craps|   0|    200000|     100|0.85757470|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.42034672|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.73899027|  PASSED  
         sts_monobit|   1|    100000|     100|0.63753936|  PASSED  
            sts_runs|   2|    100000|     100|0.04329785|  PASSED  
          sts_serial|   1|    100000|     100|0.65193719|  PASSED  
          sts_serial|   2|    100000|     100|0.05452858|  PASSED  
          sts_serial|   3|    100000|     100|0.98576432|  PASSED  
          sts_serial|   3|    100000|     100|0.08944016|  PASSED  
          sts_serial|   4|    100000|     100|0.89509010|  PASSED  
          sts_serial|   4|    100000|     100|0.75062733|  PASSED  
          sts_serial|   5|    100000|     100|0.65466234|  PASSED  
          sts_serial|   5|    100000|     100|0.85410668|  PASSED  
          sts_serial|   6|    100000|     100|0.31660880|  PASSED  
          sts_serial|   6|    100000|     100|0.90477681|  PASSED  
          sts_serial|   7|    100000|     100|0.77056119|  PASSED  
          sts_serial|   7|    100000|     100|0.03162243|  PASSED  
          sts_serial|   8|    100000|     100|0.92770881|  PASSED  
          sts_serial|   8|    100000|     100|0.53096581|  PASSED  
          sts_serial|   9|    100000|     100|0.80971602|  PASSED  
          sts_serial|   9|    100000|     100|0.72790654|  PASSED  
          sts_serial|  10|    100000|     100|0.86189962|  PASSED  
          sts_serial|  10|    100000|     100|0.86041354|  PASSED  
          sts_serial|  11|    100000|     100|0.64420719|  PASSED  
          sts_serial|  11|    100000|     100|0.71386551|  PASSED  
          sts_serial|  12|    100000|     100|0.73167129|  PASSED  
          sts_serial|  12|    100000|     100|0.64563366|  PASSED  
          sts_serial|  13|    100000|     100|0.66805653|  PASSED  
          sts_serial|  13|    100000|     100|0.19988772|  PASSED  
          sts_serial|  14|    100000|     100|0.61273746|  PASSED  
          sts_serial|  14|    100000|     100|0.08316559|  PASSED  
          sts_serial|  15|    100000|     100|0.70301319|  PASSED  
          sts_serial|  15|    100000|     100|0.28472033|  PASSED  
          sts_serial|  16|    100000|     100|0.94590268|  PASSED  
          sts_serial|  16|    100000|     100|0.93143954|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.31063884|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.04049136|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.87312220|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.75764478|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.81883323|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.77810696|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.40082913|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.31557475|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.50303111|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.58963068|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.98775750|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.71660258|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.95852022|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.36704509|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.75395868|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.58543065|  PASSED  
    rgb_permutations|   2|    100000|     100|0.87358905|  PASSED  
    rgb_permutations|   3|    100000|     100|0.96658644|  PASSED  
    rgb_permutations|   4|    100000|     100|0.82307901|  PASSED  
    rgb_permutations|   5|    100000|     100|0.44425867|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.12013318|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.86537526|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.47557014|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.83689632|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.54981885|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.99611433|   WEAK   
      rgb_lagged_sum|   6|   1000000|     100|0.85826753|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.74840400|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.43997072|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.60149088|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.56411990|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.65487838|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.46080589|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.98846794|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.17712024|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.54118637|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.82502713|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.30906285|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.23226487|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.26075819|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.63036933|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.39597944|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.49972812|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.31984917|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.88987919|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.98071503|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.82187752|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.79639453|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.98882790|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.79478584|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.20834836|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.75128753|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.47945704|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.63630034|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.27194996|  PASSED  
             dab_dct| 256|     50000|       1|0.38930191|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.97126186|  PASSED  
        dab_filltree|  32|  15000000|       1|0.46825106|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.57955587|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.51161005|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.33055211|  PASSED  

real	220m12.788s
user	216m59.724s
sys	2m45.520s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x4e94201f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x4e94201f
length= 32 megabytes (2^25 bytes), time= 2.1 seconds
  no anomalies in 100 test result(s)

rng=RNG_stdin32, seed=0x4e94201f
length= 64 megabytes (2^26 bytes), time= 4.6 seconds
  no anomalies in 108 test result(s)

rng=RNG_stdin32, seed=0x4e94201f
length= 128 megabytes (2^27 bytes), time= 9.1 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x4e94201f
length= 256 megabytes (2^28 bytes), time= 17.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x4e94201f
length= 512 megabytes (2^29 bytes), time= 33.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x4e94201f
length= 1 gigabyte (2^30 bytes), time= 65.6 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x4e94201f
length= 1.750 gigabytes (2^30.807 bytes), time= 114 seconds
  no anomalies in 144 test result(s)


real	1m54.520s
user	1m52.884s
sys	0m1.456s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe65653ef
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe65653ef
length= 64 megabytes (2^26 bytes), time= 3.9 seconds
  no anomalies in 108 test result(s)

rng=RNG_stdin32, seed=0xe65653ef
length= 128 megabytes (2^27 bytes), time= 8.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xe65653ef
length= 256 megabytes (2^28 bytes), time= 16.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]FPF-14+6/16:all          R=  -4.2  p =1-1.1e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe65653ef
length= 512 megabytes (2^29 bytes), time= 33.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xe65653ef
length= 1 gigabyte (2^30 bytes), time= 64.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -3.9  p =1-6.9e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe65653ef
length= 1.750 gigabytes (2^30.807 bytes), time= 112 seconds
  no anomalies in 144 test result(s)


real	1m52.728s
user	1m51.040s
sys	0m1.484s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x796d4436
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x796d4436
length= 64 megabytes (2^26 bytes), time= 3.9 seconds
  no anomalies in 108 test result(s)

rng=RNG_stdin32, seed=0x796d4436
length= 128 megabytes (2^27 bytes), time= 8.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x796d4436
length= 256 megabytes (2^28 bytes), time= 16.9 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x796d4436
length= 512 megabytes (2^29 bytes), time= 33.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x796d4436
length= 1 gigabyte (2^30 bytes), time= 65.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  -4.8  p =1-2.2e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x796d4436
length= 1.750 gigabytes (2^30.807 bytes), time= 112 seconds
  no anomalies in 144 test result(s)


real	1m52.794s
user	1m51.172s
sys	0m1.432s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x380a7690
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x380a7690
length= 64 megabytes (2^26 bytes), time= 3.9 seconds
  no anomalies in 108 test result(s)

rng=RNG_stdin32, seed=0x380a7690
length= 128 megabytes (2^27 bytes), time= 8.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x380a7690
length= 256 megabytes (2^28 bytes), time= 16.8 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x380a7690
length= 512 megabytes (2^29 bytes), time= 32.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x380a7690
length= 1 gigabyte (2^30 bytes), time= 65.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x380a7690
length= 2 gigabytes (2^31 bytes), time= 130 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x380a7690
length= 4 gigabytes (2^32 bytes), time= 259 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x380a7690
length= 8 gigabytes (2^33 bytes), time= 518 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x380a7690
length= 16 gigabytes (2^34 bytes), time= 1032 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x380a7690
length= 32 gigabytes (2^35 bytes), time= 2056 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x380a7690
length= 56.000 gigabytes (2^35.807 bytes), time= 3603 seconds
  no anomalies in 184 test result(s)


real	60m4.138s
user	59m19.316s
sys	0m39.488s
*/
