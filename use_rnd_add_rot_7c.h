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
/// @created on 2019-12-18 20:14:48 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token a03de2f8-20ac-4edb-9d1f-bb524a000086                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot7c;
/* TEST00
time ./MRndCPP 
1189216038
329840586
2178358327
634518846
1049477356
1913754615
4611694740292686510

real	0m19.494s
user	0m19.476s
sys	0m0.004s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.56e+07  |2403216031|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.93277226|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.96368806|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.52202465|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.06034425|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.63678749|  PASSED  
        diehard_opso|   0|   2097152|     100|0.47933020|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.99929641|   WEAK   
         diehard_dna|   0|   2097152|     100|0.43883585|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.39470286|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.73276354|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.40663901|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.64489847|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.25441753|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.70554638|  PASSED  
        diehard_sums|   0|       100|     100|0.04465405|  PASSED  
        diehard_runs|   0|    100000|     100|0.57677374|  PASSED  
        diehard_runs|   0|    100000|     100|0.69658449|  PASSED  
       diehard_craps|   0|    200000|     100|0.73100162|  PASSED  
       diehard_craps|   0|    200000|     100|0.73971607|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.70298930|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.89273557|  PASSED  
         sts_monobit|   1|    100000|     100|0.64090491|  PASSED  
            sts_runs|   2|    100000|     100|0.83373854|  PASSED  
          sts_serial|   1|    100000|     100|0.74572749|  PASSED  
          sts_serial|   2|    100000|     100|0.40609019|  PASSED  
          sts_serial|   3|    100000|     100|0.45404923|  PASSED  
          sts_serial|   3|    100000|     100|0.48504195|  PASSED  
          sts_serial|   4|    100000|     100|0.00258755|   WEAK   
          sts_serial|   4|    100000|     100|0.12219356|  PASSED  
          sts_serial|   5|    100000|     100|0.10696100|  PASSED  
          sts_serial|   5|    100000|     100|0.99999839|   WEAK   
          sts_serial|   6|    100000|     100|0.04814493|  PASSED  
          sts_serial|   6|    100000|     100|0.56521367|  PASSED  
          sts_serial|   7|    100000|     100|0.64060784|  PASSED  
          sts_serial|   7|    100000|     100|0.40573452|  PASSED  
          sts_serial|   8|    100000|     100|0.65320840|  PASSED  
          sts_serial|   8|    100000|     100|0.15783802|  PASSED  
          sts_serial|   9|    100000|     100|0.75842799|  PASSED  
          sts_serial|   9|    100000|     100|0.99750373|   WEAK   
          sts_serial|  10|    100000|     100|0.99569931|   WEAK   
          sts_serial|  10|    100000|     100|0.87808606|  PASSED  
          sts_serial|  11|    100000|     100|0.89424044|  PASSED  
          sts_serial|  11|    100000|     100|0.95706547|  PASSED  
          sts_serial|  12|    100000|     100|0.94088664|  PASSED  
          sts_serial|  12|    100000|     100|0.99431944|  PASSED  
          sts_serial|  13|    100000|     100|0.71529344|  PASSED  
          sts_serial|  13|    100000|     100|0.68458573|  PASSED  
          sts_serial|  14|    100000|     100|0.38453589|  PASSED  
          sts_serial|  14|    100000|     100|0.44783169|  PASSED  
          sts_serial|  15|    100000|     100|0.17730170|  PASSED  
          sts_serial|  15|    100000|     100|0.43122156|  PASSED  
          sts_serial|  16|    100000|     100|0.27497217|  PASSED  
          sts_serial|  16|    100000|     100|0.94524489|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.31563894|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.88487811|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.74602791|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.45807043|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.49799085|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.13405714|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.65065625|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.10887091|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.99240404|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.85235991|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.99245490|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.68749488|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.02066740|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.14530012|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.19690626|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.04654825|  PASSED  
    rgb_permutations|   2|    100000|     100|0.21898084|  PASSED  
    rgb_permutations|   3|    100000|     100|0.48287586|  PASSED  
    rgb_permutations|   4|    100000|     100|0.48852908|  PASSED  
    rgb_permutations|   5|    100000|     100|0.51355280|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.37721716|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.82182914|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.15364182|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.36214222|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.81260210|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.67171994|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.35675403|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.91844674|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.44108596|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.65764689|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.64378549|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.87821364|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.84501293|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.68457834|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.95989366|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.69653459|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.56817959|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.66381942|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.94818452|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.98343683|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.27674724|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.67062420|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.48754850|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.99030402|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.93558371|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.40914599|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.45531330|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.35041836|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.65970404|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.17484996|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.88206543|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.78358794|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.25281313|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.23138834|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.07069224|  PASSED  
             dab_dct| 256|     50000|       1|0.59090795|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.06269376|  PASSED  
        dab_filltree|  32|  15000000|       1|0.68986622|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.61131174|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.60851766|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.83003669|  PASSED  

real	56m28.103s
user	52m43.988s
sys	3m40.476s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe51a4450
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe51a4450
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xe51a4450
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xe51a4450
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xe51a4450
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xe51a4450
length= 2 gigabytes (2^31 bytes), time= 41.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xe51a4450
length= 4 gigabytes (2^32 bytes), time= 80.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xe51a4450
length= 5.000 gigabytes (2^32.322 bytes), time= 103 seconds
  no anomalies in 159 test result(s)


real	1m43.369s
user	1m39.876s
sys	0m3.344s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x48636219
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x48636219
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x48636219
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x48636219
length= 512 megabytes (2^29 bytes), time= 11.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x48636219
length= 1 gigabyte (2^30 bytes), time= 21.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R=  +8.1  p =  1.0e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x48636219
length= 2 gigabytes (2^31 bytes), time= 42.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-0,T)                  R=  +7.4  p =  1.7e-3   unusual          
  BCFN(2+4,13-1,T)                  R=  +8.8  p =  3.5e-4   unusual          
  ...and 146 test result(s) without anomalies

rng=RNG_stdin32, seed=0x48636219
length= 4 gigabytes (2^32 bytes), time= 81.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x48636219
length= 5.000 gigabytes (2^32.322 bytes), time= 102 seconds
  no anomalies in 159 test result(s)


real	1m42.557s
user	1m39.404s
sys	0m3.044s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x74c03313
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x74c03313
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x74c03313
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x74c03313
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x74c03313
length= 1 gigabyte (2^30 bytes), time= 21.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x74c03313
length= 2 gigabytes (2^31 bytes), time= 41.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  +5.0  p =  9.0e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x74c03313
length= 4 gigabytes (2^32 bytes), time= 82.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-1,T)         R=  +7.2  p =  2.7e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x74c03313
length= 5.000 gigabytes (2^32.322 bytes), time= 104 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -4.0  p =1-6.4e-3   unusual          
  ...and 158 test result(s) without anomalies


real	1m44.957s
user	1m41.648s
sys	0m3.208s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x95e44ef6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x95e44ef6
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +8.2  p =  3.6e-6   suspicious       
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x95e44ef6
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +7.7  p =  6.1e-6   suspicious       
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x95e44ef6
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +7.4  p =  2.0e-5   suspicious       
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x95e44ef6
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+5,13-4,T)         R=  +9.8  p =  3.0e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x95e44ef6
length= 2 gigabytes (2^31 bytes), time= 41.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x95e44ef6
length= 4 gigabytes (2^32 bytes), time= 80.9 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x95e44ef6
length= 8 gigabytes (2^33 bytes), time= 167 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x95e44ef6
length= 16 gigabytes (2^34 bytes), time= 339 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x95e44ef6
length= 32 gigabytes (2^35 bytes), time= 678 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x95e44ef6
length= 64 gigabytes (2^36 bytes), time= 1366 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x95e44ef6
length= 128 gigabytes (2^37 bytes), time= 2732 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x95e44ef6
length= 168.750 gigabytes (2^37.399 bytes), time= 3600 seconds
  no anomalies in 201 test result(s)


real	60m0.198s
user	58m7.032s
sys	1m49.376s
*/
