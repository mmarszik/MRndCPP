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
/// @created on 2019-12-08 03:00:04 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 313a58a6-94ed-47d2-9194-ccfa066f2f73                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2b;
/* TEST00
time ./MRndCPP 
4081487542
2598378608
2001728541
3754126217
2651817580
3324873846
18446638183304969733

real	2m44.023s
user	2m43.664s
sys	0m0.048s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.11e+07  | 437865558|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.44758590|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.98006029|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.90465881|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.55356978|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.97892691|  PASSED  
        diehard_opso|   0|   2097152|     100|0.92662040|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.65285870|  PASSED  
         diehard_dna|   0|   2097152|     100|0.48322566|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.74488196|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.42320124|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.64976124|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.81987057|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.55809191|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.04283311|  PASSED  
        diehard_sums|   0|       100|     100|0.13369880|  PASSED  
        diehard_runs|   0|    100000|     100|0.43108880|  PASSED  
        diehard_runs|   0|    100000|     100|0.23799534|  PASSED  
       diehard_craps|   0|    200000|     100|0.75348626|  PASSED  
       diehard_craps|   0|    200000|     100|0.45805582|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.43171866|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.99492613|  PASSED  
         sts_monobit|   1|    100000|     100|0.96193520|  PASSED  
            sts_runs|   2|    100000|     100|0.97734323|  PASSED  
          sts_serial|   1|    100000|     100|0.29596548|  PASSED  
          sts_serial|   2|    100000|     100|0.64205834|  PASSED  
          sts_serial|   3|    100000|     100|0.42817449|  PASSED  
          sts_serial|   3|    100000|     100|0.68997325|  PASSED  
          sts_serial|   4|    100000|     100|0.67508430|  PASSED  
          sts_serial|   4|    100000|     100|0.04932307|  PASSED  
          sts_serial|   5|    100000|     100|0.30606373|  PASSED  
          sts_serial|   5|    100000|     100|0.47294532|  PASSED  
          sts_serial|   6|    100000|     100|0.26419395|  PASSED  
          sts_serial|   6|    100000|     100|0.87485763|  PASSED  
          sts_serial|   7|    100000|     100|0.32050465|  PASSED  
          sts_serial|   7|    100000|     100|0.90710246|  PASSED  
          sts_serial|   8|    100000|     100|0.39730294|  PASSED  
          sts_serial|   8|    100000|     100|0.33741393|  PASSED  
          sts_serial|   9|    100000|     100|0.36867319|  PASSED  
          sts_serial|   9|    100000|     100|0.64597156|  PASSED  
          sts_serial|  10|    100000|     100|0.57510129|  PASSED  
          sts_serial|  10|    100000|     100|0.46135032|  PASSED  
          sts_serial|  11|    100000|     100|0.59482499|  PASSED  
          sts_serial|  11|    100000|     100|0.86200735|  PASSED  
          sts_serial|  12|    100000|     100|0.93351412|  PASSED  
          sts_serial|  12|    100000|     100|0.99910749|   WEAK   
          sts_serial|  13|    100000|     100|0.10758943|  PASSED  
          sts_serial|  13|    100000|     100|0.24062289|  PASSED  
          sts_serial|  14|    100000|     100|0.58553091|  PASSED  
          sts_serial|  14|    100000|     100|0.20919103|  PASSED  
          sts_serial|  15|    100000|     100|0.10473644|  PASSED  
          sts_serial|  15|    100000|     100|0.18565629|  PASSED  
          sts_serial|  16|    100000|     100|0.15898556|  PASSED  
          sts_serial|  16|    100000|     100|0.61702584|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.29574469|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.72884001|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.27899001|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.92732320|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.81491540|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.64616296|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.97671427|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.90631169|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.53440114|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.34741239|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.87346770|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.08740133|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.66208612|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.74272301|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.56104246|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.17066110|  PASSED  
    rgb_permutations|   2|    100000|     100|0.55344158|  PASSED  
    rgb_permutations|   3|    100000|     100|0.96061753|  PASSED  
    rgb_permutations|   4|    100000|     100|0.08105136|  PASSED  
    rgb_permutations|   5|    100000|     100|0.45035904|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.24667698|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.40643177|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.58060329|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.10363508|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.66246282|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.32664036|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.54337621|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.62133785|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.38210548|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.76293446|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.69895575|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.52010411|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.75491464|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.07891440|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.52319587|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.80109387|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.66052041|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.48508085|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.83582086|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.79960571|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.95092229|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.17333943|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.41196863|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.28436813|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.20305789|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.73666234|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.81286417|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.84752465|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.53969096|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.01675903|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.28992433|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.74369369|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.54967002|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.57342796|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.65943974|  PASSED  
             dab_dct| 256|     50000|       1|0.45759718|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.64615387|  PASSED  
        dab_filltree|  32|  15000000|       1|0.36480611|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.89279188|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.66845695|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.41628090|  PASSED  

real	70m28.918s
user	66m49.148s
sys	3m28.628s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x194f39f4
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x194f39f4
length= 128 megabytes (2^27 bytes), time= 3.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x194f39f4
length= 256 megabytes (2^28 bytes), time= 7.0 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x194f39f4
length= 512 megabytes (2^29 bytes), time= 13.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x194f39f4
length= 1 gigabyte (2^30 bytes), time= 27.5 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x194f39f4
length= 2 gigabytes (2^31 bytes), time= 52.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x194f39f4
length= 4 gigabytes (2^32 bytes), time= 103 seconds
  no anomalies in 156 test result(s)


real	1m43.519s
user	1m40.144s
sys	0m2.956s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x1639c3ec
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x1639c3ec
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x1639c3ec
length= 256 megabytes (2^28 bytes), time= 6.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x1639c3ec
length= 512 megabytes (2^29 bytes), time= 12.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x1639c3ec
length= 1 gigabyte (2^30 bytes), time= 25.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x1639c3ec
length= 2 gigabytes (2^31 bytes), time= 48.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x1639c3ec
length= 4 gigabytes (2^32 bytes), time= 98.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]DC6-9x1Bytes-1           R=  +5.0  p = 0.012     unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x1639c3ec
length= 8 gigabytes (2^33 bytes), time= 201 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x1639c3ec
length= 16 gigabytes (2^34 bytes), time= 402 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0x1639c3ec
length= 32 gigabytes (2^35 bytes), time= 800 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0x1639c3ec
length= 40.250 gigabytes (2^35.331 bytes), time= 1005 seconds
  no anomalies in 183 test result(s)


real	16m45.878s
user	16m17.828s
sys	0m24.832s
*/
/* TEST00
time ./MRndCPP 
4081487542
2598378608
2001728541
3754126217
2651817580
3324873846
18446638183304969733

real	2m43.401s
user	2m42.928s
sys	0m0.040s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.10e+07  |2542746904|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.93058940|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.68604058|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.90046852|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.99743149|   WEAK   
   diehard_bitstream|   0|   2097152|     100|0.57839861|  PASSED  
        diehard_opso|   0|   2097152|     100|0.64950669|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.32392000|  PASSED  
         diehard_dna|   0|   2097152|     100|0.64829630|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.69737917|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.42386690|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.87630056|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.68024153|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.68960936|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.04538903|  PASSED  
        diehard_sums|   0|       100|     100|0.30815686|  PASSED  
        diehard_runs|   0|    100000|     100|0.84213923|  PASSED  
        diehard_runs|   0|    100000|     100|0.63816971|  PASSED  
       diehard_craps|   0|    200000|     100|0.51419634|  PASSED  
       diehard_craps|   0|    200000|     100|0.67324463|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.37612630|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.95760298|  PASSED  
         sts_monobit|   1|    100000|     100|0.38215866|  PASSED  
            sts_runs|   2|    100000|     100|0.42550623|  PASSED  
          sts_serial|   1|    100000|     100|0.59782004|  PASSED  
          sts_serial|   2|    100000|     100|0.43522052|  PASSED  
          sts_serial|   3|    100000|     100|0.59147420|  PASSED  
          sts_serial|   3|    100000|     100|0.97550140|  PASSED  
          sts_serial|   4|    100000|     100|0.94070885|  PASSED  
          sts_serial|   4|    100000|     100|0.80138886|  PASSED  
          sts_serial|   5|    100000|     100|0.94944900|  PASSED  
          sts_serial|   5|    100000|     100|0.44312345|  PASSED  
          sts_serial|   6|    100000|     100|0.78229721|  PASSED  
          sts_serial|   6|    100000|     100|0.53768521|  PASSED  
          sts_serial|   7|    100000|     100|0.30134514|  PASSED  
          sts_serial|   7|    100000|     100|0.44632727|  PASSED  
          sts_serial|   8|    100000|     100|0.66843762|  PASSED  
          sts_serial|   8|    100000|     100|0.97377251|  PASSED  
          sts_serial|   9|    100000|     100|0.47984807|  PASSED  
          sts_serial|   9|    100000|     100|0.49851055|  PASSED  
          sts_serial|  10|    100000|     100|0.85546314|  PASSED  
          sts_serial|  10|    100000|     100|0.27009159|  PASSED  
          sts_serial|  11|    100000|     100|0.40799807|  PASSED  
          sts_serial|  11|    100000|     100|0.16505101|  PASSED  
          sts_serial|  12|    100000|     100|0.73308848|  PASSED  
          sts_serial|  12|    100000|     100|0.61941715|  PASSED  
          sts_serial|  13|    100000|     100|0.99200959|  PASSED  
          sts_serial|  13|    100000|     100|0.82318814|  PASSED  
          sts_serial|  14|    100000|     100|0.47491766|  PASSED  
          sts_serial|  14|    100000|     100|0.73005202|  PASSED  
          sts_serial|  15|    100000|     100|0.06977405|  PASSED  
          sts_serial|  15|    100000|     100|0.57612287|  PASSED  
          sts_serial|  16|    100000|     100|0.26656535|  PASSED  
          sts_serial|  16|    100000|     100|0.37795683|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.98571933|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.58570740|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.67031665|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.93469461|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.94268707|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.11135996|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.78396591|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.72984166|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.63289330|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.69227010|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.11088269|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.08899063|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.49859336|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.76575371|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.08403552|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.29412642|  PASSED  
    rgb_permutations|   2|    100000|     100|0.31163984|  PASSED  
    rgb_permutations|   3|    100000|     100|0.94874087|  PASSED  
    rgb_permutations|   4|    100000|     100|0.34294827|  PASSED  
    rgb_permutations|   5|    100000|     100|0.89146521|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.88771450|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.42612889|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.38348292|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.84669194|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.34044662|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.13769620|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.66294219|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.48571684|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.02429501|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.46124324|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.74516140|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.75711413|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.87086380|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.82841076|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.78129184|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.61361200|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.40976592|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.88219865|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.14454438|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.95838170|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.89579867|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.11405835|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.65905428|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.97191748|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.87204833|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.72643111|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.02832733|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.17714044|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.60811743|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.34382654|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.96577832|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.66824830|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.56874595|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.54528688|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.00965502|  PASSED  
             dab_dct| 256|     50000|       1|0.18655533|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.32250711|  PASSED  
        dab_filltree|  32|  15000000|       1|0.89067264|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.22650804|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.16971996|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.63098178|  PASSED  

real	70m12.124s
user	66m37.516s
sys	3m25.560s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9a52d92c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9a52d92c
length= 128 megabytes (2^27 bytes), time= 2.9 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9a52d92c
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  -3.8  p =1-7.9e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9a52d92c
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x9a52d92c
length= 1 gigabyte (2^30 bytes), time= 23.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9a52d92c
length= 2 gigabytes (2^31 bytes), time= 46.5 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+2,13-1,T)                  R=  +8.4  p =  5.4e-4   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9a52d92c
length= 4 gigabytes (2^32 bytes), time= 90.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x9a52d92c
length= 4.500 gigabytes (2^32.170 bytes), time= 102 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+7,13-4,T)         R=  -7.6  p =1-1.4e-4   unusual          
  ...and 155 test result(s) without anomalies


real	1m42.658s
user	1m39.580s
sys	0m2.884s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc876b0c7
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc876b0c7
length= 128 megabytes (2^27 bytes), time= 2.8 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xc876b0c7
length= 256 megabytes (2^28 bytes), time= 6.2 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xc876b0c7
length= 512 megabytes (2^29 bytes), time= 12.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  -3.8  p =1-3.0e-3   unusual          
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0xc876b0c7
length= 1 gigabyte (2^30 bytes), time= 23.9 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xc876b0c7
length= 2 gigabytes (2^31 bytes), time= 46.5 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xc876b0c7
length= 4 gigabytes (2^32 bytes), time= 93.8 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xc876b0c7
length= 8 gigabytes (2^33 bytes), time= 191 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0xc876b0c7
length= 16 gigabytes (2^34 bytes), time= 383 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xc876b0c7
length= 32 gigabytes (2^35 bytes), time= 766 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xc876b0c7
length= 41.500 gigabytes (2^35.375 bytes), time= 1001 seconds
  no anomalies in 184 test result(s)


real	16m41.983s
user	16m13.028s
sys	0m26.524s
*/
