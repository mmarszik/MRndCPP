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
/// @created on 2019-12-18 20:16:48 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 52cf9d86-135a-4adb-9d2c-2ceef87b8482                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_add_rot.h"

using TRnd = RndAddRot4a;
/* TEST00
time ./MRndCPP 
4051669067
3812969026
599999173
2578881063
1888225422
1941034849
4611721096877706774

real	0m18.309s
user	0m18.292s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  2.62e+07  |2516303182|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.31738322|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.04854370|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.83450871|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.02720792|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.38225704|  PASSED  
        diehard_opso|   0|   2097152|     100|0.88805684|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.79514665|  PASSED  
         diehard_dna|   0|   2097152|     100|0.18190360|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.86055754|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.43368414|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.45602493|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.77993108|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.96772760|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.72743304|  PASSED  
        diehard_sums|   0|       100|     100|0.00232655|   WEAK   
        diehard_runs|   0|    100000|     100|0.24557483|  PASSED  
        diehard_runs|   0|    100000|     100|0.59754769|  PASSED  
       diehard_craps|   0|    200000|     100|0.88548222|  PASSED  
       diehard_craps|   0|    200000|     100|0.51455161|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.49586360|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.17351937|  PASSED  
         sts_monobit|   1|    100000|     100|0.26514414|  PASSED  
            sts_runs|   2|    100000|     100|0.03576799|  PASSED  
          sts_serial|   1|    100000|     100|0.41731315|  PASSED  
          sts_serial|   2|    100000|     100|0.24122299|  PASSED  
          sts_serial|   3|    100000|     100|0.03622997|  PASSED  
          sts_serial|   3|    100000|     100|0.08707709|  PASSED  
          sts_serial|   4|    100000|     100|0.58413392|  PASSED  
          sts_serial|   4|    100000|     100|0.96461717|  PASSED  
          sts_serial|   5|    100000|     100|0.35072646|  PASSED  
          sts_serial|   5|    100000|     100|0.96246782|  PASSED  
          sts_serial|   6|    100000|     100|0.88892850|  PASSED  
          sts_serial|   6|    100000|     100|0.14731864|  PASSED  
          sts_serial|   7|    100000|     100|0.28764249|  PASSED  
          sts_serial|   7|    100000|     100|0.33561533|  PASSED  
          sts_serial|   8|    100000|     100|0.62353197|  PASSED  
          sts_serial|   8|    100000|     100|0.70465781|  PASSED  
          sts_serial|   9|    100000|     100|0.30517949|  PASSED  
          sts_serial|   9|    100000|     100|0.91818657|  PASSED  
          sts_serial|  10|    100000|     100|0.66551095|  PASSED  
          sts_serial|  10|    100000|     100|0.38499278|  PASSED  
          sts_serial|  11|    100000|     100|0.56593895|  PASSED  
          sts_serial|  11|    100000|     100|0.40202112|  PASSED  
          sts_serial|  12|    100000|     100|0.91238375|  PASSED  
          sts_serial|  12|    100000|     100|0.99308129|  PASSED  
          sts_serial|  13|    100000|     100|0.78722484|  PASSED  
          sts_serial|  13|    100000|     100|0.69779932|  PASSED  
          sts_serial|  14|    100000|     100|0.74007641|  PASSED  
          sts_serial|  14|    100000|     100|0.07823244|  PASSED  
          sts_serial|  15|    100000|     100|0.65730190|  PASSED  
          sts_serial|  15|    100000|     100|0.84101656|  PASSED  
          sts_serial|  16|    100000|     100|0.79121844|  PASSED  
          sts_serial|  16|    100000|     100|0.48498846|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.93046013|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.81121611|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.67390349|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.81196725|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.92022520|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.68057737|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.61692951|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.37936010|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.70705471|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.42318477|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.01988276|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.68944675|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.12132251|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.79980610|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.92516316|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.28839721|  PASSED  
    rgb_permutations|   2|    100000|     100|0.97707747|  PASSED  
    rgb_permutations|   3|    100000|     100|0.65895684|  PASSED  
    rgb_permutations|   4|    100000|     100|0.99329744|  PASSED  
    rgb_permutations|   5|    100000|     100|0.95922890|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.33996190|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.38689992|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.44538989|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.82407021|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.44005575|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.02146506|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.76978195|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.34547709|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.51412592|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.92234861|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.99164863|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.20005651|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.63965415|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.65851903|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.74510318|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.59672447|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.20970416|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.74360700|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.43868294|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.47918545|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.15506749|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.73934646|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.64885654|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.12988198|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.86974278|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.10219934|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.12909140|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.44969231|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.60544255|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.52018493|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.97722680|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.09172454|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.97270522|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.60935463|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.21951070|  PASSED  
             dab_dct| 256|     50000|       1|0.03207646|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.90235648|  PASSED  
        dab_filltree|  32|  15000000|       1|0.71513432|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.47920885|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.79072244|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.75316343|  PASSED  

real	55m38.662s
user	51m54.264s
sys	3m31.992s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x65102ea9
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x65102ea9
length= 128 megabytes (2^27 bytes), time= 2.6 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x65102ea9
length= 256 megabytes (2^28 bytes), time= 5.6 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +13.0  p =  5.9e-6   suspicious       
  [Low1/32]Gap-16:A                 R=  +4.6  p =  3.0e-3   unusual          
  ...and 122 test result(s) without anomalies

rng=RNG_stdin32, seed=0x65102ea9
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.9  p =  3.6e-4   unusual          
  [Low8/32]BCFN(2+1,13-3,T)         R= +22.0  p =  3.4e-10   VERY SUSPICIOUS 
  [Low8/32]BCFN(2+2,13-3,T)         R= +18.2  p =  2.0e-8    VERY SUSPICIOUS 
  ...and 129 test result(s) without anomalies

rng=RNG_stdin32, seed=0x65102ea9
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  Test Name                         Raw       Processed     Evaluation
  Gap-16:B                          R=  +4.6  p =  8.1e-4   unusual          
  [Low8/32]BCFN(2+1,13-2,T)         R= +38.9  p =  1.7e-19    FAIL !!        
  [Low8/32]BCFN(2+2,13-3,T)         R= +22.2  p =  2.6e-10   VERY SUSPICIOUS 
  [Low8/32]BCFN(2+4,13-3,T)         R=  +9.4  p =  3.0e-4   unusual          
  ...and 137 test result(s) without anomalies


real	0m22.215s
user	0m21.436s
sys	0m0.768s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xb5bfde5f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xb5bfde5f
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-5,T)         R= +13.1  p =  2.5e-5   mildly suspicious
  ...and 116 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb5bfde5f
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+2,13-4,T)         R=  +8.6  p =  1.0e-3   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb5bfde5f
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +14.6  p =  1.0e-6   very suspicious  
  [Low8/32]BCFN(2+2,13-3,T)         R= +13.4  p =  4.0e-6   suspicious       
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xb5bfde5f
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +35.6  p =  9.0e-18    FAIL !         
  [Low8/32]BCFN(2+2,13-3,T)         R= +19.1  p =  7.7e-9    VERY SUSPICIOUS 
  [Low8/32]BCFN(2+3,13-3,T)         R=  +8.8  p =  5.9e-4   unusual          
  ...and 138 test result(s) without anomalies


real	0m22.175s
user	0m21.464s
sys	0m0.688s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x2df3dc0f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x2df3dc0f
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0x2df3dc0f
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R=  +9.5  p =  2.6e-4   unusual          
  ...and 123 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2df3dc0f
length= 512 megabytes (2^29 bytes), time= 10.9 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +15.8  p =  2.7e-7   very suspicious  
  [Low8/32]BCFN(2+2,13-3,T)         R=  +8.5  p =  8.4e-4   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0x2df3dc0f
length= 1 gigabyte (2^30 bytes), time= 21.4 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +29.6  p =  1.0e-14    FAIL !         
  [Low8/32]BCFN(2+2,13-3,T)         R= +13.8  p =  2.5e-6   suspicious       
  [Low1/32]BCFN(2+1,13-4,T)         R= +10.5  p =  1.6e-4   mildly suspicious
  ...and 138 test result(s) without anomalies


real	0m22.064s
user	0m21.372s
sys	0m0.660s
*/
/* TEST01 s
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbb43423f
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbb43423f
length= 128 megabytes (2^27 bytes), time= 2.5 seconds
  no anomalies in 117 test result(s)

rng=RNG_stdin32, seed=0xbb43423f
length= 256 megabytes (2^28 bytes), time= 5.5 seconds
  no anomalies in 124 test result(s)

rng=RNG_stdin32, seed=0xbb43423f
length= 512 megabytes (2^29 bytes), time= 11.0 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-3,T)         R= +17.4  p =  4.8e-8   very suspicious  
  [Low8/32]DC6-9x1Bytes-1           R=  -4.6  p =1-2.8e-3   unusual          
  ...and 130 test result(s) without anomalies

rng=RNG_stdin32, seed=0xbb43423f
length= 1 gigabyte (2^30 bytes), time= 21.5 seconds
  Test Name                         Raw       Processed     Evaluation
  [Low8/32]BCFN(2+1,13-2,T)         R= +40.5  p =  2.6e-20    FAIL !!        
  [Low8/32]BCFN(2+2,13-3,T)         R=  +9.8  p =  2.0e-4   mildly suspicious
  ...and 139 test result(s) without anomalies


real	0m22.175s
user	0m21.488s
sys	0m0.656s
*/
