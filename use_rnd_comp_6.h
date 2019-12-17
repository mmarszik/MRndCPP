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
/// @created on 2019-12-08 02:56:59 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 05797b04-8611-4fbb-b369-4396d8dd65c0                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib2a, RndFib3a, 9 >;

/* TEST00
time ./MRndCPP 
1871541365
3259764588
258764547
23779551
2346585856
1841442965
18446742052010868532

real	0m54.403s
user	0m54.164s
sys	0m0.036s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.81e+07  |2980451583|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.05025090|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.23635672|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.69520209|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.86980801|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.66797544|  PASSED  
        diehard_opso|   0|   2097152|     100|0.64704026|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.65445542|  PASSED  
         diehard_dna|   0|   2097152|     100|0.96816609|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.63023154|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.99612870|   WEAK   
 diehard_parking_lot|   0|     12000|     100|0.01507090|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.53308453|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.67370792|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.82061606|  PASSED  
        diehard_sums|   0|       100|     100|0.19686239|  PASSED  
        diehard_runs|   0|    100000|     100|0.25829100|  PASSED  
        diehard_runs|   0|    100000|     100|0.76844118|  PASSED  
       diehard_craps|   0|    200000|     100|0.20746180|  PASSED  
       diehard_craps|   0|    200000|     100|0.24324642|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.40308326|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.74558757|  PASSED  
         sts_monobit|   1|    100000|     100|0.26251452|  PASSED  
            sts_runs|   2|    100000|     100|0.11501078|  PASSED  
          sts_serial|   1|    100000|     100|0.96708267|  PASSED  
          sts_serial|   2|    100000|     100|0.96336514|  PASSED  
          sts_serial|   3|    100000|     100|0.36119447|  PASSED  
          sts_serial|   3|    100000|     100|0.93920516|  PASSED  
          sts_serial|   4|    100000|     100|0.36903623|  PASSED  
          sts_serial|   4|    100000|     100|0.83117406|  PASSED  
          sts_serial|   5|    100000|     100|0.49355174|  PASSED  
          sts_serial|   5|    100000|     100|0.61967481|  PASSED  
          sts_serial|   6|    100000|     100|0.89151066|  PASSED  
          sts_serial|   6|    100000|     100|0.35392336|  PASSED  
          sts_serial|   7|    100000|     100|0.26487355|  PASSED  
          sts_serial|   7|    100000|     100|0.83001373|  PASSED  
          sts_serial|   8|    100000|     100|0.66474910|  PASSED  
          sts_serial|   8|    100000|     100|0.48178589|  PASSED  
          sts_serial|   9|    100000|     100|0.82375141|  PASSED  
          sts_serial|   9|    100000|     100|0.33421737|  PASSED  
          sts_serial|  10|    100000|     100|0.76471179|  PASSED  
          sts_serial|  10|    100000|     100|0.86079772|  PASSED  
          sts_serial|  11|    100000|     100|0.45844835|  PASSED  
          sts_serial|  11|    100000|     100|0.63990147|  PASSED  
          sts_serial|  12|    100000|     100|0.79682250|  PASSED  
          sts_serial|  12|    100000|     100|0.74056201|  PASSED  
          sts_serial|  13|    100000|     100|0.69923542|  PASSED  
          sts_serial|  13|    100000|     100|0.24372250|  PASSED  
          sts_serial|  14|    100000|     100|0.30744569|  PASSED  
          sts_serial|  14|    100000|     100|0.83790638|  PASSED  
          sts_serial|  15|    100000|     100|0.96968788|  PASSED  
          sts_serial|  15|    100000|     100|0.52122634|  PASSED  
          sts_serial|  16|    100000|     100|0.73969453|  PASSED  
          sts_serial|  16|    100000|     100|0.56368314|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.97991630|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.72127222|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.70858180|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.99316944|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.26447589|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.94893158|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.82622308|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.12152402|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.74020875|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.15026907|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.28672941|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.41067945|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.43528189|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.93189059|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.33725708|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.88198383|  PASSED  
    rgb_permutations|   2|    100000|     100|0.93800524|  PASSED  
    rgb_permutations|   3|    100000|     100|0.68219297|  PASSED  
    rgb_permutations|   4|    100000|     100|0.66731156|  PASSED  
    rgb_permutations|   5|    100000|     100|0.44470078|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.10028955|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.23260812|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.96570329|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.07403204|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.82381245|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.96585643|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.69312763|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.99570606|   WEAK   
      rgb_lagged_sum|   8|   1000000|     100|0.82013333|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.62530860|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.87582667|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.83704893|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.04234780|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.97037499|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.05870020|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.59645430|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.98656638|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.55909938|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.46283339|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.42898999|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.36518547|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.85738136|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.13818505|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.71141436|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.29593683|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.99731775|   WEAK   
      rgb_lagged_sum|  26|   1000000|     100|0.46025077|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.38460999|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.07689394|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.48251083|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.48159671|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.46139867|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.76812197|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.56279339|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.84487225|  PASSED  
             dab_dct| 256|     50000|       1|0.57025451|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.89324072|  PASSED  
        dab_filltree|  32|  15000000|       1|0.22169108|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.28243899|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.67649301|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.70801705|  PASSED  

real	52m51.220s
user	49m2.848s
sys	3m37.716s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8a57411b
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8a57411b
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x8a57411b
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8a57411b
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8a57411b
length= 1 gigabyte (2^30 bytes), time= 20.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x8a57411b
length= 2 gigabytes (2^31 bytes), time= 40.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8a57411b
length= 4 gigabytes (2^32 bytes), time= 77.3 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x8a57411b
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.906s
user	1m39.996s
sys	0m3.512s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x60555b7d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x60555b7d
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x60555b7d
length= 256 megabytes (2^28 bytes), time= 5.3 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+12,13-9,T)        R= +22.9  p =  2.9e-6   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x60555b7d
length= 512 megabytes (2^29 bytes), time= 10.5 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x60555b7d
length= 1 gigabyte (2^30 bytes), time= 20.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x60555b7d
length= 2 gigabytes (2^31 bytes), time= 39.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x60555b7d
length= 4 gigabytes (2^32 bytes), time= 77.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R=  +7.8  p =  1.8e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x60555b7d
length= 8 gigabytes (2^33 bytes), time= 154 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R= +11.4  p =  3.6e-5   mildly suspicious
  [Low1/32]BCFN(2+6,13-5,T)         R= +11.6  p =  9.8e-5   unusual          
  ...and 163 test result(s) without anomalies

rng=RNG_stdin32, seed=0x60555b7d
length= 16 gigabytes (2^34 bytes), time= 320 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-2,T)         R= +22.0  p =  7.7e-11   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+3,13-2,T)         R= +10.9  p =  3.8e-5   mildly suspicious
  [Low1/32]BCFN(2+6,13-4,T)         R= +10.6  p =  1.3e-4   unusual          
  ...and 169 test result(s) without anomalies

rng=RNG_stdin32, seed=0x60555b7d
length= 32 gigabytes (2^35 bytes), time= 647 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+1,13-0,T)                  R=  -7.3  p =1-9.7e-4   unusual          
  [Low1/32]BCFN(2+1,13-1,T)         R= +10.4  p =  4.9e-5   mildly suspicious
  [Low1/32]BCFN(2+2,13-1,T)         R= +34.3  p =  6.4e-18    FAIL !         
  [Low1/32]BCFN(2+3,13-1,T)         R= +15.4  p =  9.5e-8   very suspicious  
  [Low1/32]BCFN(2+4,13-2,T)         R= +11.3  p =  2.2e-5   mildly suspicious
  [Low1/32]BCFN(2+5,13-3,T)         R= +11.0  p =  5.1e-5   unusual          
  [Low1/32]BCFN(2+6,13-3,T)         R= +10.5  p =  9.6e-5   unusual          
  ...and 173 test result(s) without anomalies


real	10m47.832s
user	10m25.664s
sys	0m19.848s
*/
/* TEST00
time ./MRndCPP 
1871541365
3259764588
258764547
23779551
2346585856
1841442965
18446742052010868532

real	0m54.011s
user	0m53.800s
sys	0m0.024s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.84e+07  | 515316251|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.06395187|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.85110306|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.85895704|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.69735478|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.54366287|  PASSED  
        diehard_opso|   0|   2097152|     100|0.03640278|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.75284267|  PASSED  
         diehard_dna|   0|   2097152|     100|0.64581362|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.99472108|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.79996300|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.69671967|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.56442593|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.48414184|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.60254256|  PASSED  
        diehard_sums|   0|       100|     100|0.14998387|  PASSED  
        diehard_runs|   0|    100000|     100|0.95977616|  PASSED  
        diehard_runs|   0|    100000|     100|0.91098711|  PASSED  
       diehard_craps|   0|    200000|     100|0.03040008|  PASSED  
       diehard_craps|   0|    200000|     100|0.84744298|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.19461472|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.98541569|  PASSED  
         sts_monobit|   1|    100000|     100|0.55108255|  PASSED  
            sts_runs|   2|    100000|     100|0.56676048|  PASSED  
          sts_serial|   1|    100000|     100|0.44301935|  PASSED  
          sts_serial|   2|    100000|     100|0.93078771|  PASSED  
          sts_serial|   3|    100000|     100|0.41302241|  PASSED  
          sts_serial|   3|    100000|     100|0.58849610|  PASSED  
          sts_serial|   4|    100000|     100|0.08934771|  PASSED  
          sts_serial|   4|    100000|     100|0.06894743|  PASSED  
          sts_serial|   5|    100000|     100|0.00326014|   WEAK   
          sts_serial|   5|    100000|     100|0.42435730|  PASSED  
          sts_serial|   6|    100000|     100|0.60876420|  PASSED  
          sts_serial|   6|    100000|     100|0.35482015|  PASSED  
          sts_serial|   7|    100000|     100|0.68208851|  PASSED  
          sts_serial|   7|    100000|     100|0.97392715|  PASSED  
          sts_serial|   8|    100000|     100|0.77267311|  PASSED  
          sts_serial|   8|    100000|     100|0.14065312|  PASSED  
          sts_serial|   9|    100000|     100|0.76161838|  PASSED  
          sts_serial|   9|    100000|     100|0.14525901|  PASSED  
          sts_serial|  10|    100000|     100|0.29043359|  PASSED  
          sts_serial|  10|    100000|     100|0.49256654|  PASSED  
          sts_serial|  11|    100000|     100|0.82147523|  PASSED  
          sts_serial|  11|    100000|     100|0.70585298|  PASSED  
          sts_serial|  12|    100000|     100|0.41408451|  PASSED  
          sts_serial|  12|    100000|     100|0.15949728|  PASSED  
          sts_serial|  13|    100000|     100|0.61822731|  PASSED  
          sts_serial|  13|    100000|     100|0.92964344|  PASSED  
          sts_serial|  14|    100000|     100|0.74912760|  PASSED  
          sts_serial|  14|    100000|     100|0.67102685|  PASSED  
          sts_serial|  15|    100000|     100|0.24087618|  PASSED  
          sts_serial|  15|    100000|     100|0.00816337|  PASSED  
          sts_serial|  16|    100000|     100|0.99194361|  PASSED  
          sts_serial|  16|    100000|     100|0.98049119|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.13900854|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.43945246|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.36677334|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.28537576|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.42457742|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.65102357|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.14555988|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.54454759|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.98976680|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.01453700|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.90246532|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.34743899|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.35576286|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.38496854|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.62179862|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.49187517|  PASSED  
    rgb_permutations|   2|    100000|     100|0.84093956|  PASSED  
    rgb_permutations|   3|    100000|     100|0.82978609|  PASSED  
    rgb_permutations|   4|    100000|     100|0.43998906|  PASSED  
    rgb_permutations|   5|    100000|     100|0.30600188|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.95744838|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.09804148|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.46931816|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.74401020|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.78080566|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.96107389|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.74794534|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.18243048|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.03571865|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.57076362|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.98523601|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.94929129|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.32573552|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.28883689|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.42715966|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.29314635|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.32571883|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.25293530|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.80644192|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.92403661|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.76184866|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.88227498|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.99971963|   WEAK   
      rgb_lagged_sum|  23|   1000000|     100|0.17562035|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.36229380|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.40036163|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.23857269|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.81618692|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.56041352|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.67126127|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.29729976|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.78409529|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.86173746|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.20229508|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.92101970|  PASSED  
             dab_dct| 256|     50000|       1|0.94647508|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.24503028|  PASSED  
        dab_filltree|  32|  15000000|       1|0.38514328|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.14816727|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.52871114|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.85642025|  PASSED  

real	53m59.844s
user	50m14.588s
sys	3m36.780s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xf4db5655
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xf4db5655
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xf4db5655
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xf4db5655
length= 512 megabytes (2^29 bytes), time= 10.6 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xf4db5655
length= 1 gigabyte (2^30 bytes), time= 20.7 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xf4db5655
length= 2 gigabytes (2^31 bytes), time= 40.0 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xf4db5655
length= 4 gigabytes (2^32 bytes), time= 77.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +6.7  p =  1.0e-3   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xf4db5655
length= 5.250 gigabytes (2^32.392 bytes), time= 103 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+2,13-3,T)         R=  +9.3  p =  3.4e-4   unusual          
  ...and 159 test result(s) without anomalies


real	1m43.655s
user	1m39.916s
sys	0m3.276s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbd5ef446
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbd5ef446
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xbd5ef446
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xbd5ef446
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xbd5ef446
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xbd5ef446
length= 2 gigabytes (2^31 bytes), time= 41.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+5,13-5,T)         R= +11.8  p =  8.1e-5   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbd5ef446
length= 4 gigabytes (2^32 bytes), time= 81.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  -5.3  p =1-9.6e-4   mildly suspicious
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbd5ef446
length= 8 gigabytes (2^33 bytes), time= 163 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-2,T)         R=  +7.3  p =  2.8e-3   unusual          
  [Low1/32]BCFN(2+1,13-2,T)         R=  +8.6  p =  5.3e-4   unusual          
  [Low1/32]BCFN(2+2,13-3,T)         R= +11.0  p =  5.5e-5   mildly suspicious
  [Low1/32]BCFN(2+3,13-3,T)         R= +12.2  p =  1.5e-5   mildly suspicious
  [Low1/32]BCFN(2+6,13-5,T)         R= +14.7  p =  6.4e-6   mildly suspicious
  [Low1/32]DC6-9x1Bytes-1           R=  -4.1  p =1-5.5e-3   unusual          
  ...and 159 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbd5ef446
length= 16 gigabytes (2^34 bytes), time= 330 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-1,T)         R=  +7.3  p =  2.3e-3   unusual          
  [Low1/32]BCFN(2+1,13-1,T)         R=  +7.7  p =  1.4e-3   unusual          
  [Low1/32]BCFN(2+2,13-2,T)         R= +12.4  p =  6.5e-6   suspicious       
  [Low1/32]BCFN(2+3,13-2,T)         R= +15.8  p =  1.0e-7   very suspicious  
  [Low1/32]BCFN(2+5,13-3,T)         R= +15.4  p =  4.4e-7   suspicious       
  [Low1/32]BCFN(2+6,13-4,T)         R= +18.8  p =  3.8e-8   very suspicious  
  ...and 166 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbd5ef446
length= 32 gigabytes (2^35 bytes), time= 658 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+0,13-1,T)         R=  +8.1  p =  7.9e-4   unusual          
  [Low1/32]BCFN(2+1,13-1,T)         R= +15.6  p =  7.3e-8   very suspicious  
  [Low1/32]BCFN(2+2,13-1,T)         R= +20.9  p =  1.0e-10   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+3,13-1,T)         R= +24.6  p =  1.1e-12    FAIL           
  [Low1/32]BCFN(2+4,13-2,T)         R= +15.8  p =  1.1e-7   very suspicious  
  [Low1/32]BCFN(2+5,13-3,T)         R= +21.0  p =  9.8e-10   VERY SUSPICIOUS 
  [Low1/32]BCFN(2+6,13-3,T)         R= +25.7  p =  5.8e-12    FAIL           
  [Low1/32]BCFN(2+7,13-4,T)         R= +11.6  p =  5.3e-5   unusual          
  ...and 172 test result(s) without anomalies


real	10m58.400s
user	10m37.056s
sys	0m19.364s
*/
