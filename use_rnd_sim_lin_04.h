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
/// @created on 2019-12-08 03:02:06 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e8930fec-02e5-4925-88da-85500faa1cd4                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin04;
/* TEST00
time ./MRndCPP 
3497841202
67965748
527131255
182892387
247477018
3100051826
18446287092895951539

real	0m56.939s
user	0m56.644s
sys	0m0.020s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.87e+07  |  97970215|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.98291414|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.91885063|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.48538132|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.35535681|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.26079078|  PASSED  
        diehard_opso|   0|   2097152|     100|0.70575981|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.59496856|  PASSED  
         diehard_dna|   0|   2097152|     100|0.36913519|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.70427596|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.26081516|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.31899023|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.75068895|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.64809910|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.14258198|  PASSED  
        diehard_sums|   0|       100|     100|0.02775212|  PASSED  
        diehard_runs|   0|    100000|     100|0.84299564|  PASSED  
        diehard_runs|   0|    100000|     100|0.67628714|  PASSED  
       diehard_craps|   0|    200000|     100|0.89087093|  PASSED  
       diehard_craps|   0|    200000|     100|0.55343248|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.49008488|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.81128047|  PASSED  
         sts_monobit|   1|    100000|     100|0.48492359|  PASSED  
            sts_runs|   2|    100000|     100|0.66583459|  PASSED  
          sts_serial|   1|    100000|     100|0.33030669|  PASSED  
          sts_serial|   2|    100000|     100|0.99856238|   WEAK   
          sts_serial|   3|    100000|     100|0.96691827|  PASSED  
          sts_serial|   3|    100000|     100|0.94386728|  PASSED  
          sts_serial|   4|    100000|     100|0.60635714|  PASSED  
          sts_serial|   4|    100000|     100|0.99904087|   WEAK   
          sts_serial|   5|    100000|     100|0.91611018|  PASSED  
          sts_serial|   5|    100000|     100|0.79070715|  PASSED  
          sts_serial|   6|    100000|     100|0.32858296|  PASSED  
          sts_serial|   6|    100000|     100|0.87673971|  PASSED  
          sts_serial|   7|    100000|     100|0.33998741|  PASSED  
          sts_serial|   7|    100000|     100|0.42928170|  PASSED  
          sts_serial|   8|    100000|     100|0.74234450|  PASSED  
          sts_serial|   8|    100000|     100|0.58240019|  PASSED  
          sts_serial|   9|    100000|     100|0.42656151|  PASSED  
          sts_serial|   9|    100000|     100|0.02176594|  PASSED  
          sts_serial|  10|    100000|     100|0.43077612|  PASSED  
          sts_serial|  10|    100000|     100|0.29027431|  PASSED  
          sts_serial|  11|    100000|     100|0.97106249|  PASSED  
          sts_serial|  11|    100000|     100|0.87391503|  PASSED  
          sts_serial|  12|    100000|     100|0.93267662|  PASSED  
          sts_serial|  12|    100000|     100|0.72168348|  PASSED  
          sts_serial|  13|    100000|     100|0.30362239|  PASSED  
          sts_serial|  13|    100000|     100|0.28324671|  PASSED  
          sts_serial|  14|    100000|     100|0.36270531|  PASSED  
          sts_serial|  14|    100000|     100|0.71006715|  PASSED  
          sts_serial|  15|    100000|     100|0.23671799|  PASSED  
          sts_serial|  15|    100000|     100|0.48985333|  PASSED  
          sts_serial|  16|    100000|     100|0.49876852|  PASSED  
          sts_serial|  16|    100000|     100|0.44985766|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.68495477|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.99547753|   WEAK   
         rgb_bitdist|   3|    100000|     100|0.46742066|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.15615660|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.51087691|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.47053452|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.24804667|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.17312923|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.97692137|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.18700305|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.78876914|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.23267139|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.60776578|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.91281499|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.27984647|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.49537597|  PASSED  
    rgb_permutations|   2|    100000|     100|0.96622907|  PASSED  
    rgb_permutations|   3|    100000|     100|0.99086535|  PASSED  
    rgb_permutations|   4|    100000|     100|0.99390632|  PASSED  
    rgb_permutations|   5|    100000|     100|0.96101337|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.70258889|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.99446235|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.93915520|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.01200032|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.89154511|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.94847539|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.62086832|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.84991398|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.87976793|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.48243279|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.37136241|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.77585043|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.94600204|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.06135757|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.95942980|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.64050045|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.46764343|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.19914607|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.83149075|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.17042883|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.55777560|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.93639550|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.06645285|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.71989769|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.13497246|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.08457927|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.67903006|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.89210131|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.30424492|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.87216499|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.01167155|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.51981313|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.88900750|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.56201007|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.54990028|  PASSED  
             dab_dct| 256|     50000|       1|0.12297643|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.11681407|  PASSED  
        dab_filltree|  32|  15000000|       1|0.93447184|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.18895892|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.97940604|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.89156522|  PASSED  

real	53m26.455s
user	49m43.640s
sys	3m31.336s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf648d908
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf648d908
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+3,13-3,T)                  R=  -7.8  p =1-2.2e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf648d908
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf648d908
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf648d908
length= 1 gigabyte (2^30 bytes), time= 20.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf648d908
length= 2 gigabytes (2^31 bytes), time= 40.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf648d908
length= 4 gigabytes (2^32 bytes), time= 80.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xf648d908
length= 5.000 gigabytes (2^32.322 bytes), time= 101 seconds
  no anomalies in 159 test result(s)


real	1m41.698s
user	1m38.316s
sys	0m3.120s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x5656055a
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x5656055a
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x5656055a
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x5656055a
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x5656055a
length= 1 gigabyte (2^30 bytes), time= 20.4 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x5656055a
length= 2 gigabytes (2^31 bytes), time= 39.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x5656055a
length= 4 gigabytes (2^32 bytes), time= 76.7 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.2  p =  7.0e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5656055a
length= 8 gigabytes (2^33 bytes), time= 158 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x5656055a
length= 16 gigabytes (2^34 bytes), time= 324 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x5656055a
length= 32 gigabytes (2^35 bytes), time= 650 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:A                 R=  -4.0  p =1-2.2e-3   unusual          
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0x5656055a
length= 48.750 gigabytes (2^35.607 bytes), time= 1000 seconds
  Test Name                         Raw       Processed     Evaluation
  FPF-14+6/16:all                   R=  -4.1  p =1-1.4e-3   unusual          
  [Low8/32]BCFN(2+2,13-0,T)         R=  +8.7  p =  3.5e-4   unusual          
  [Low8/32]Gap-16:A                 R=  -5.8  p =1-1.1e-4   mildly suspicious
  [Low8/32]Gap-16:B                 R=  -5.7  p =1-8.8e-5   mildly suspicious
  ...and 180 test result(s) without anomalies


real	16m40.477s
user	16m7.788s
sys	0m29.316s
*/
