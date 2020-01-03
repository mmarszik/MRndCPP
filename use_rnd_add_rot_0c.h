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
/// @created on 2019-12-18 20:18:19 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 9c9234e7-409b-45a8-8779-d4aefda23f09                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot0c;
/* TEST00
time ./MRndCPP 
4031305346
3074426320
2043356723
3063646087
3327086304
2108954493
4611747533577488751

real	0m15.797s
user	0m15.788s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.73e+07  | 534596054|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.19914678|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.86463214|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.94625056|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.91524857|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.25522593|  PASSED  
        diehard_opso|   0|   2097152|     100|0.26112557|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.17436674|  PASSED  
         diehard_dna|   0|   2097152|     100|0.43061151|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.49565362|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.99415743|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.33164281|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.20442763|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.17609278|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.67452564|  PASSED  
        diehard_sums|   0|       100|     100|0.14285307|  PASSED  
        diehard_runs|   0|    100000|     100|0.89550949|  PASSED  
        diehard_runs|   0|    100000|     100|0.33044490|  PASSED  
       diehard_craps|   0|    200000|     100|0.93976287|  PASSED  
       diehard_craps|   0|    200000|     100|0.90081567|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.48858685|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.32130684|  PASSED  
         sts_monobit|   1|    100000|     100|0.51019536|  PASSED  
            sts_runs|   2|    100000|     100|0.08225977|  PASSED  
          sts_serial|   1|    100000|     100|0.66701903|  PASSED  
          sts_serial|   2|    100000|     100|0.97524332|  PASSED  
          sts_serial|   3|    100000|     100|0.13565877|  PASSED  
          sts_serial|   3|    100000|     100|0.39060981|  PASSED  
          sts_serial|   4|    100000|     100|0.12224113|  PASSED  
          sts_serial|   4|    100000|     100|0.25828168|  PASSED  
          sts_serial|   5|    100000|     100|0.87282418|  PASSED  
          sts_serial|   5|    100000|     100|0.00963930|  PASSED  
          sts_serial|   6|    100000|     100|0.85703143|  PASSED  
          sts_serial|   6|    100000|     100|0.74872110|  PASSED  
          sts_serial|   7|    100000|     100|0.92119966|  PASSED  
          sts_serial|   7|    100000|     100|0.95742484|  PASSED  
          sts_serial|   8|    100000|     100|0.59980517|  PASSED  
          sts_serial|   8|    100000|     100|0.73075375|  PASSED  
          sts_serial|   9|    100000|     100|0.57547874|  PASSED  
          sts_serial|   9|    100000|     100|0.21092890|  PASSED  
          sts_serial|  10|    100000|     100|0.76009245|  PASSED  
          sts_serial|  10|    100000|     100|0.02411788|  PASSED  
          sts_serial|  11|    100000|     100|0.52451776|  PASSED  
          sts_serial|  11|    100000|     100|0.39726965|  PASSED  
          sts_serial|  12|    100000|     100|0.11799917|  PASSED  
          sts_serial|  12|    100000|     100|0.57741977|  PASSED  
          sts_serial|  13|    100000|     100|0.26861405|  PASSED  
          sts_serial|  13|    100000|     100|0.97998514|  PASSED  
          sts_serial|  14|    100000|     100|0.43695424|  PASSED  
          sts_serial|  14|    100000|     100|0.81426128|  PASSED  
          sts_serial|  15|    100000|     100|0.82208858|  PASSED  
          sts_serial|  15|    100000|     100|0.27241032|  PASSED  
          sts_serial|  16|    100000|     100|0.32238159|  PASSED  
          sts_serial|  16|    100000|     100|0.52810447|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.99909737|   WEAK   
         rgb_bitdist|   2|    100000|     100|0.99419274|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.70038216|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.87133910|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.50097562|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.38574282|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.62288204|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.84041947|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.44116623|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.74445269|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.25842554|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.09715116|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.82299824|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.11089184|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.98919036|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.53829039|  PASSED  
    rgb_permutations|   2|    100000|     100|0.58677024|  PASSED  
    rgb_permutations|   3|    100000|     100|0.87423216|  PASSED  
    rgb_permutations|   4|    100000|     100|0.56099160|  PASSED  
    rgb_permutations|   5|    100000|     100|0.66942407|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.79151124|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.36771693|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.97196113|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.57457992|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.58580618|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.31438696|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.97960817|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.83805907|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.68878560|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.88126233|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.13092177|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.60061188|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.98651794|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.12484509|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.27370242|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.81204330|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.74954774|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.29367781|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.95654691|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.99799106|   WEAK   
      rgb_lagged_sum|  20|   1000000|     100|0.86329145|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.41229796|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.59811942|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.89838403|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.67179519|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.60111858|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.42544563|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.11888955|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.73836602|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.55250795|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.78789814|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.50425241|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.92596003|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.97210630|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.39587824|  PASSED  
             dab_dct| 256|     50000|       1|0.43586690|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.95817546|  PASSED  
        dab_filltree|  32|  15000000|       1|0.18284106|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.33867802|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.75969337|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.00271777|   WEAK   

real	53m21.578s
user	49m55.224s
sys	3m23.432s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x9e41de74
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x9e41de74
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x9e41de74
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x9e41de74
length= 512 megabytes (2^29 bytes), time= 10.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +6.6  p =  8.2e-5   mildly suspicious
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9e41de74
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x9e41de74
length= 2 gigabytes (2^31 bytes), time= 40.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x9e41de74
length= 4 gigabytes (2^32 bytes), time= 78.8 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]Gap-16:B                 R=  +4.4  p =  1.2e-3   unusual          
  ...and 155 test result(s) without anomalies

rng=RNG_stdin32, seed=0x9e41de74
length= 5.250 gigabytes (2^32.392 bytes), time= 105 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.7  p =  4.2e-3   unusual          
  ...and 159 test result(s) without anomalies


real	1m46.209s
user	1m42.400s
sys	0m3.680s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xec7ae53c
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xec7ae53c
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xec7ae53c
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xec7ae53c
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xec7ae53c
length= 1 gigabyte (2^30 bytes), time= 20.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]DC6-9x1Bytes-1           R=  +5.9  p =  4.2e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0xec7ae53c
length= 2 gigabytes (2^31 bytes), time= 40.6 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xec7ae53c
length= 4 gigabytes (2^32 bytes), time= 78.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xec7ae53c
length= 5.250 gigabytes (2^32.392 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.815s
user	1m41.296s
sys	0m3.380s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x75a9559
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x75a9559
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]FPF-14+6/16:all2         R=  -1.5  p =1-5.8e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x75a9559
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x75a9559
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x75a9559
length= 1 gigabyte (2^30 bytes), time= 21.1 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+0,13-2,T)         R=  +7.3  p =  2.7e-3   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x75a9559
length= 2 gigabytes (2^31 bytes), time= 40.9 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x75a9559
length= 4 gigabytes (2^32 bytes), time= 81.7 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x75a9559
length= 5.000 gigabytes (2^32.322 bytes), time= 103 seconds
  no anomalies in 159 test result(s)


real	1m43.786s
user	1m40.392s
sys	0m3.272s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8f814004
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8f814004
length= 128 megabytes (2^27 bytes), time= 2.4 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x8f814004
length= 256 megabytes (2^28 bytes), time= 5.4 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0x8f814004
length= 512 megabytes (2^29 bytes), time= 10.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x8f814004
length= 1 gigabyte (2^30 bytes), time= 21.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R=  +9.0  p =  3.5e-4   unusual          
  ...and 140 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8f814004
length= 2 gigabytes (2^31 bytes), time= 40.7 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x8f814004
length= 4 gigabytes (2^32 bytes), time= 79.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x8f814004
length= 8 gigabytes (2^33 bytes), time= 163 seconds
  no anomalies in 165 test result(s)

rng=RNG_stdin32, seed=0x8f814004
length= 16 gigabytes (2^34 bytes), time= 333 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.3  p =  1.1e-3   unusual          
  ...and 171 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8f814004
length= 32 gigabytes (2^35 bytes), time= 666 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +6.2  p =  3.5e-5   mildly suspicious
  ...and 179 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8f814004
length= 64 gigabytes (2^36 bytes), time= 1345 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0x8f814004
length= 128 gigabytes (2^37 bytes), time= 2695 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0x8f814004
length= 171.250 gigabytes (2^37.420 bytes), time= 3602 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.4  p =  1.1e-3   unusual          
  ...and 200 test result(s) without anomalies


real	60m3.079s
user	58m16.400s
sys	1m42.764s
*/
/* TEST00
time ./MRndCPP 
4031305346
3074426320
2043356723
3063646087
3327086304
2108954493
203082874836662

real	0m37.709s
user	0m37.672s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.24e+07  |3560708523|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.99989113|   WEAK   
      diehard_operm5|   0|   1000000|     100|0.75650992|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.86826720|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.86542543|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.01302687|  PASSED  
        diehard_opso|   0|   2097152|     100|0.25133362|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.33004989|  PASSED  
         diehard_dna|   0|   2097152|     100|0.11220360|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.81767790|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.86752880|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.36104913|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.60627568|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.68897169|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.65522636|  PASSED  
        diehard_sums|   0|       100|     100|0.06258476|  PASSED  
        diehard_runs|   0|    100000|     100|0.21074732|  PASSED  
        diehard_runs|   0|    100000|     100|0.73887290|  PASSED  
       diehard_craps|   0|    200000|     100|0.82200518|  PASSED  
       diehard_craps|   0|    200000|     100|0.86573959|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.70746153|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.26751661|  PASSED  
         sts_monobit|   1|    100000|     100|0.91929036|  PASSED  
            sts_runs|   2|    100000|     100|0.54575251|  PASSED  
          sts_serial|   1|    100000|     100|0.13193732|  PASSED  
          sts_serial|   2|    100000|     100|0.99456574|  PASSED  
          sts_serial|   3|    100000|     100|0.66287506|  PASSED  
          sts_serial|   3|    100000|     100|0.64932090|  PASSED  
          sts_serial|   4|    100000|     100|0.37402194|  PASSED  
          sts_serial|   4|    100000|     100|0.13466148|  PASSED  
          sts_serial|   5|    100000|     100|0.72973397|  PASSED  
          sts_serial|   5|    100000|     100|0.85729716|  PASSED  
          sts_serial|   6|    100000|     100|0.52214057|  PASSED  
          sts_serial|   6|    100000|     100|0.17415796|  PASSED  
          sts_serial|   7|    100000|     100|0.53963451|  PASSED  
          sts_serial|   7|    100000|     100|0.76492640|  PASSED  
          sts_serial|   8|    100000|     100|0.72097323|  PASSED  
          sts_serial|   8|    100000|     100|0.95724346|  PASSED  
          sts_serial|   9|    100000|     100|0.44201737|  PASSED  
          sts_serial|   9|    100000|     100|0.85910395|  PASSED  
          sts_serial|  10|    100000|     100|0.22515111|  PASSED  
          sts_serial|  10|    100000|     100|0.98438663|  PASSED  
          sts_serial|  11|    100000|     100|0.19958865|  PASSED  
          sts_serial|  11|    100000|     100|0.58892130|  PASSED  
          sts_serial|  12|    100000|     100|0.18643259|  PASSED  
          sts_serial|  12|    100000|     100|0.00104220|   WEAK   
          sts_serial|  13|    100000|     100|0.94529208|  PASSED  
          sts_serial|  13|    100000|     100|0.27597084|  PASSED  
          sts_serial|  14|    100000|     100|0.65959989|  PASSED  
          sts_serial|  14|    100000|     100|0.85578171|  PASSED  
          sts_serial|  15|    100000|     100|0.79657793|  PASSED  
          sts_serial|  15|    100000|     100|0.97895026|  PASSED  
          sts_serial|  16|    100000|     100|0.94669752|  PASSED  
          sts_serial|  16|    100000|     100|0.46835750|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.11493080|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.50731355|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.33238208|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.88244500|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.99593145|   WEAK   
         rgb_bitdist|   6|    100000|     100|0.70685367|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.70426779|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.94522500|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.94998332|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.50621957|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.80910876|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.54413064|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.78227446|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.78248778|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.39672818|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.30411238|  PASSED  
    rgb_permutations|   2|    100000|     100|0.87314951|  PASSED  
    rgb_permutations|   3|    100000|     100|0.76023262|  PASSED  
    rgb_permutations|   4|    100000|     100|0.60910008|  PASSED  
    rgb_permutations|   5|    100000|     100|0.97254705|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.67595509|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.93125114|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.65838310|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.49947869|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.49677143|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.62508444|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.73491117|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.13781287|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.91380017|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.12523515|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.52132139|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.65323695|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.43717826|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.94809593|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.73132655|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.58759161|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.88774084|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.47354482|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.53293640|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.89390194|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.29115086|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.66117865|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.14835645|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.01055054|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.10830432|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.93113134|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.97612877|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.99775850|   WEAK   
      rgb_lagged_sum|  28|   1000000|     100|0.76102873|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.42817497|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.99894201|   WEAK   
      rgb_lagged_sum|  31|   1000000|     100|0.96187927|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.91238735|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.03291329|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.09248332|  PASSED  
             dab_dct| 256|     50000|       1|0.56484320|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.14989712|  PASSED  
        dab_filltree|  32|  15000000|       1|0.33985461|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.93919648|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.52628826|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.82218016|  PASSED  

real	47m32.029s
user	43m47.676s
sys	3m41.748s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x3318adab
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x3318adab
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x3318adab
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:B                 R=  +4.3  p =  1.7e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3318adab
length= 512 megabytes (2^29 bytes), time= 9.9 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x3318adab
length= 1 gigabyte (2^30 bytes), time= 19.2 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x3318adab
length= 2 gigabytes (2^31 bytes), time= 37.0 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.3  p =  1.4e-3   unusual          
  ...and 147 test result(s) without anomalies

rng=RNG_stdin32, seed=0x3318adab
length= 4 gigabytes (2^32 bytes), time= 71.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x3318adab
length= 5.750 gigabytes (2^32.524 bytes), time= 104 seconds
  no anomalies in 160 test result(s)


real	1m44.607s
user	1m42.220s
sys	0m2.248s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xdc161324
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xdc161324
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xdc161324
length= 256 megabytes (2^28 bytes), time= 5.1 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xdc161324
length= 512 megabytes (2^29 bytes), time= 10.1 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xdc161324
length= 1 gigabyte (2^30 bytes), time= 19.8 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xdc161324
length= 2 gigabytes (2^31 bytes), time= 38.3 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xdc161324
length= 4 gigabytes (2^32 bytes), time= 74.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xdc161324
length= 5.500 gigabytes (2^32.459 bytes), time= 102 seconds
  no anomalies in 160 test result(s)


real	1m43.207s
user	1m40.860s
sys	0m2.216s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x43a96f5
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x43a96f5
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+3,13-6,T)         R= +11.6  p =  2.0e-4   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0x43a96f5
length= 256 megabytes (2^28 bytes), time= 4.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]BCFN(2+3,13-6,T)         R= +12.3  p =  1.2e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x43a96f5
length= 512 megabytes (2^29 bytes), time= 9.7 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0x43a96f5
length= 1 gigabyte (2^30 bytes), time= 19.0 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0x43a96f5
length= 2 gigabytes (2^31 bytes), time= 36.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0x43a96f5
length= 4 gigabytes (2^32 bytes), time= 72.5 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0x43a96f5
length= 5.500 gigabytes (2^32.459 bytes), time= 103 seconds
  no anomalies in 160 test result(s)


real	1m43.400s
user	1m40.976s
sys	0m2.312s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xe839cc65
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xe839cc65
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  DC6-9x1Bytes-1                    R=  +5.1  p =  9.7e-3   unusual          
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe839cc65
length= 256 megabytes (2^28 bytes), time= 5.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.6  p =  2.8e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe839cc65
length= 512 megabytes (2^29 bytes), time= 9.8 seconds
  no anomalies in 132 test result(s)

rng=RNG_stdin32, seed=0xe839cc65
length= 1 gigabyte (2^30 bytes), time= 19.1 seconds
  no anomalies in 141 test result(s)

rng=RNG_stdin32, seed=0xe839cc65
length= 2 gigabytes (2^31 bytes), time= 36.8 seconds
  no anomalies in 148 test result(s)

rng=RNG_stdin32, seed=0xe839cc65
length= 4 gigabytes (2^32 bytes), time= 71.1 seconds
  no anomalies in 156 test result(s)

rng=RNG_stdin32, seed=0xe839cc65
length= 8 gigabytes (2^33 bytes), time= 146 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low1/32]Gap-16:A                 R=  +4.5  p =  2.5e-3   unusual          
  ...and 164 test result(s) without anomalies

rng=RNG_stdin32, seed=0xe839cc65
length= 16 gigabytes (2^34 bytes), time= 299 seconds
  no anomalies in 172 test result(s)

rng=RNG_stdin32, seed=0xe839cc65
length= 32 gigabytes (2^35 bytes), time= 601 seconds
  no anomalies in 180 test result(s)

rng=RNG_stdin32, seed=0xe839cc65
length= 64 gigabytes (2^36 bytes), time= 1218 seconds
  no anomalies in 189 test result(s)

rng=RNG_stdin32, seed=0xe839cc65
length= 128 gigabytes (2^37 bytes), time= 2446 seconds
  no anomalies in 196 test result(s)

rng=RNG_stdin32, seed=0xe839cc65
length= 188.750 gigabytes (2^37.560 bytes), time= 3603 seconds
  no anomalies in 201 test result(s)


real	60m4.068s
user	58m47.476s
sys	1m12.716s
*/
