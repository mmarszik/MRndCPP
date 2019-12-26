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
/// @created on 2019-12-18 20:16:19 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token b9b72db8-42bc-424d-bd2f-684aeb30348a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot4c;
/* TEST00
time ./MRndCPP 
3237812418
1676371929
1425252878
348610977
1516422812
4286066098
4611677488690802098

real	0m18.307s
user	0m18.272s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.63e+07  | 313492433|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.77965528|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.20154430|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.75103396|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.97993748|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.33155996|  PASSED  
        diehard_opso|   0|   2097152|     100|0.68068978|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.59085469|  PASSED  
         diehard_dna|   0|   2097152|     100|0.51079111|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.93923751|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.99997624|   WEAK   
 diehard_parking_lot|   0|     12000|     100|0.09561419|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.45364574|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.36250781|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.52937399|  PASSED  
        diehard_sums|   0|       100|     100|0.05904436|  PASSED  
        diehard_runs|   0|    100000|     100|0.89090608|  PASSED  
        diehard_runs|   0|    100000|     100|0.62144259|  PASSED  
       diehard_craps|   0|    200000|     100|0.84840825|  PASSED  
       diehard_craps|   0|    200000|     100|0.97961898|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.83982607|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.50270842|  PASSED  
         sts_monobit|   1|    100000|     100|0.66043634|  PASSED  
            sts_runs|   2|    100000|     100|0.23288660|  PASSED  
          sts_serial|   1|    100000|     100|0.29006756|  PASSED  
          sts_serial|   2|    100000|     100|0.35748099|  PASSED  
          sts_serial|   3|    100000|     100|0.39258532|  PASSED  
          sts_serial|   3|    100000|     100|0.83982948|  PASSED  
          sts_serial|   4|    100000|     100|0.76521839|  PASSED  
          sts_serial|   4|    100000|     100|0.53264255|  PASSED  
          sts_serial|   5|    100000|     100|0.70400944|  PASSED  
          sts_serial|   5|    100000|     100|0.43779529|  PASSED  
          sts_serial|   6|    100000|     100|0.93877791|  PASSED  
          sts_serial|   6|    100000|     100|0.25878266|  PASSED  
          sts_serial|   7|    100000|     100|0.39513673|  PASSED  
          sts_serial|   7|    100000|     100|0.48330713|  PASSED  
          sts_serial|   8|    100000|     100|0.86757519|  PASSED  
          sts_serial|   8|    100000|     100|0.37370574|  PASSED  
          sts_serial|   9|    100000|     100|0.45869844|  PASSED  
          sts_serial|   9|    100000|     100|0.12279117|  PASSED  
          sts_serial|  10|    100000|     100|0.99993188|   WEAK   
          sts_serial|  10|    100000|     100|0.38479684|  PASSED  
          sts_serial|  11|    100000|     100|0.49224534|  PASSED  
          sts_serial|  11|    100000|     100|0.12177206|  PASSED  
          sts_serial|  12|    100000|     100|0.11194402|  PASSED  
          sts_serial|  12|    100000|     100|0.06621051|  PASSED  
          sts_serial|  13|    100000|     100|0.87841978|  PASSED  
          sts_serial|  13|    100000|     100|0.75589319|  PASSED  
          sts_serial|  14|    100000|     100|0.43143481|  PASSED  
          sts_serial|  14|    100000|     100|0.27856670|  PASSED  
          sts_serial|  15|    100000|     100|0.86861037|  PASSED  
          sts_serial|  15|    100000|     100|0.26023700|  PASSED  
          sts_serial|  16|    100000|     100|0.37014514|  PASSED  
          sts_serial|  16|    100000|     100|0.71813410|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.27469479|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.00182253|   WEAK   
         rgb_bitdist|   3|    100000|     100|0.03132489|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.66117195|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.99285574|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.91838915|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.05124268|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.52836181|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.75534366|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.44962372|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.13399192|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.50321604|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.48037268|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.54696588|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.99683448|   WEAK   
rgb_minimum_distance|   5|     10000|    1000|0.83782193|  PASSED  
    rgb_permutations|   2|    100000|     100|0.74584223|  PASSED  
    rgb_permutations|   3|    100000|     100|0.22549012|  PASSED  
    rgb_permutations|   4|    100000|     100|0.61383763|  PASSED  
    rgb_permutations|   5|    100000|     100|0.57808691|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.26447380|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.85225197|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.22867436|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.97640250|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.04639944|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.06940395|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.44396051|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.52559944|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.45812309|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.90983574|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.78643831|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.76524237|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.33711234|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.24092544|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.48828098|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.16670321|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.20342272|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.91438561|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.28048462|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.97893717|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.36082079|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.17937774|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.81808030|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.96250709|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.89067172|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.35305526|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.61290738|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.99711465|   WEAK   
      rgb_lagged_sum|  28|   1000000|     100|0.96134446|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.45804607|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.31013821|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.78913327|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.15877433|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.81781781|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.12179407|  PASSED  
             dab_dct| 256|     50000|       1|0.46782183|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.56015555|  PASSED  
        dab_filltree|  32|  15000000|       1|0.11003077|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.78505486|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.73087863|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.08109097|  PASSED  

real	60m18.662s
user	56m47.316s
sys	3m25.772s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x458fa33d
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x458fa33d
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x458fa33d
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R=  +9.3  p =  3.2e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x458fa33d
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +19.4  p =  5.8e-9    VERY SUSPICIOUS 
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x458fa33d
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +37.0  p =  1.6e-18    FAIL !         
  [Low8/32]BCFN(2+2,13-3,T)         R= +14.0  p =  1.9e-6   very suspicious  
  [Low1/32]BCFN(2+1,13-4,T)         R=  +8.0  p =  1.9e-3   unusual          
  ...and 138 test result(s) without anomalies


real	0m22.161s
user	0m21.396s
sys	0m0.724s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x29a2a1ad
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x29a2a1ad
length= 128 megabytes (2^27 bytes), time= 2.7 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x29a2a1ad
length= 256 megabytes (2^28 bytes), time= 5.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +10.9  p =  6.2e-5   mildly suspicious
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x29a2a1ad
length= 512 megabytes (2^29 bytes), time= 11.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +19.5  p =  4.8e-9    VERY SUSPICIOUS 
  [Low1/32]BCFN(2+0,13-5,T)         R=  +8.3  p =  2.0e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x29a2a1ad
length= 1 gigabyte (2^30 bytes), time= 22.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +33.5  p =  1.0e-16    FAIL !         
  [Low8/32]BCFN(2+2,13-3,T)         R= +13.4  p =  3.7e-6   suspicious       
  ...and 139 test result(s) without anomalies


real	0m23.569s
user	0m22.848s
sys	0m0.692s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x813e0856
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x813e0856
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x813e0856
length= 256 megabytes (2^28 bytes), time= 5.7 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +10.7  p =  7.6e-5   mildly suspicious
  [Low1/32]Gap-16:A                 R=  +4.7  p =  2.1e-3   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x813e0856
length= 512 megabytes (2^29 bytes), time= 11.2 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +17.5  p =  4.3e-8   very suspicious  
  [Low8/32]BCFN(2+2,13-3,T)         R=  +7.7  p =  2.0e-3   unusual          
  [Low8/32]DC6-9x1Bytes-1           R=  -4.4  p =1-3.9e-3   unusual          
  [Low1/32]Gap-16:A                 R=  +4.9  p =  1.7e-3   unusual          
  ...and 128 test result(s) without anomalies

rng=RNG_stdin32, seed=0x813e0856
length= 1 gigabyte (2^30 bytes), time= 21.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +37.7  p =  7.7e-19    FAIL !         
  [Low8/32]BCFN(2+2,13-3,T)         R= +13.2  p =  5.0e-6   suspicious       
  [Low1/32]DC6-9x1Bytes-1           R=  -4.0  p =1-6.2e-3   unusual          
  ...and 138 test result(s) without anomalies


real	0m22.564s
user	0m21.852s
sys	0m0.656s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x8e948982
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x8e948982
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-4,T)         R=  +8.6  p =  1.1e-3   unusual          
  [Low1/32]BCFN(2+2,13-6,T)         R=  +9.5  p =  1.1e-3   unusual          
  ...and 115 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8e948982
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +14.4  p =  1.3e-6   very suspicious  
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8e948982
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +22.3  p =  2.4e-10   VERY SUSPICIOUS 
  ...and 131 test result(s) without anomalies

rng=RNG_stdin32, seed=0x8e948982
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +39.9  p =  5.4e-20    FAIL !!        
  [Low8/32]BCFN(2+2,13-3,T)         R= +11.5  p =  3.1e-5   mildly suspicious
  ...and 139 test result(s) without anomalies


real	0m22.042s
user	0m21.320s
sys	0m0.692s
*/
