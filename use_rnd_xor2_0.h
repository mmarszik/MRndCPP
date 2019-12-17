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
/// @created on 2019-12-08 03:02:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 9b7aaf86-1d29-4847-bcea-031ec630c093                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_xor2.h"
#include "rnd_mlin.h"

using TRnd = RndXor2<RndMLin,5039,5153>;
/* TEST00
time ./MRndCPP 
407406787
239207623
2217949946
1047795860
3158173004
1591622249
2284727320829099

real	0m17.138s
user	0m17.112s
sys	0m0.008s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.19e+07  |2747038267|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.25104539|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.54165334|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.83049418|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.39330450|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.58899067|  PASSED  
        diehard_opso|   0|   2097152|     100|0.01494245|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.30873320|  PASSED  
         diehard_dna|   0|   2097152|     100|0.58343227|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.26154321|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.29116152|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.40663901|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.92173881|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.54350034|  PASSED  
     diehard_squeeze|   0|    100000|     100|0.21807465|  PASSED  
        diehard_sums|   0|       100|     100|0.48233562|  PASSED  
        diehard_runs|   0|    100000|     100|0.89547763|  PASSED  
        diehard_runs|   0|    100000|     100|0.85474601|  PASSED  
       diehard_craps|   0|    200000|     100|0.00020861|   WEAK   
       diehard_craps|   0|    200000|     100|0.07003431|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.05088108|  PASSED  
         sts_monobit|   1|    100000|     100|0.64855421|  PASSED  
            sts_runs|   2|    100000|     100|0.97073967|  PASSED  
          sts_serial|   1|    100000|     100|0.13484539|  PASSED  
          sts_serial|   2|    100000|     100|0.63395525|  PASSED  
          sts_serial|   3|    100000|     100|0.75872443|  PASSED  
          sts_serial|   3|    100000|     100|0.68781698|  PASSED  
          sts_serial|   4|    100000|     100|0.91382011|  PASSED  
          sts_serial|   4|    100000|     100|0.89189202|  PASSED  
          sts_serial|   5|    100000|     100|0.58798706|  PASSED  
          sts_serial|   5|    100000|     100|0.18672603|  PASSED  
          sts_serial|   6|    100000|     100|0.32603336|  PASSED  
          sts_serial|   6|    100000|     100|0.62710966|  PASSED  
          sts_serial|   7|    100000|     100|0.92148100|  PASSED  
          sts_serial|   7|    100000|     100|0.18101806|  PASSED  
          sts_serial|   8|    100000|     100|0.83702703|  PASSED  
          sts_serial|   8|    100000|     100|0.99884124|   WEAK   
          sts_serial|   9|    100000|     100|0.78598356|  PASSED  
          sts_serial|   9|    100000|     100|0.19255808|  PASSED  
          sts_serial|  10|    100000|     100|0.90988160|  PASSED  
          sts_serial|  10|    100000|     100|0.81276453|  PASSED  
          sts_serial|  11|    100000|     100|0.55122788|  PASSED  
          sts_serial|  11|    100000|     100|0.58440715|  PASSED  
          sts_serial|  12|    100000|     100|0.26970839|  PASSED  
          sts_serial|  12|    100000|     100|0.29226096|  PASSED  
          sts_serial|  13|    100000|     100|0.18601325|  PASSED  
          sts_serial|  13|    100000|     100|0.06822285|  PASSED  
          sts_serial|  14|    100000|     100|0.91285916|  PASSED  
          sts_serial|  14|    100000|     100|0.16545789|  PASSED  
          sts_serial|  15|    100000|     100|0.55329485|  PASSED  
          sts_serial|  15|    100000|     100|0.08032816|  PASSED  
          sts_serial|  16|    100000|     100|0.60569656|  PASSED  
          sts_serial|  16|    100000|     100|0.56453897|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.54752013|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.43942546|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.14693428|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.19904417|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.95408533|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.94478975|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.38914679|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.35239696|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.77310082|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.45037301|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.55976144|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.35098442|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.47603379|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.58120772|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.45594949|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.96619107|  PASSED  
    rgb_permutations|   2|    100000|     100|0.27976179|  PASSED  
    rgb_permutations|   3|    100000|     100|0.94665306|  PASSED  
    rgb_permutations|   4|    100000|     100|0.43863996|  PASSED  
    rgb_permutations|   5|    100000|     100|0.63041530|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.39032450|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.46397652|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.09199559|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.47130019|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.38699834|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.58192048|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.08779742|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.01156347|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.63237130|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.07365345|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.09729429|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.30452922|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.10310211|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.47140354|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.42191582|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.44469291|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.38179288|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.46162700|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.80973674|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.02966740|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.34890325|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.18768883|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.68538304|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.59403393|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.21316274|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.89509660|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.39428046|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.34554152|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.93176308|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.42048472|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.37309366|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.10517120|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.17250490|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.18005332|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.00000000|  FAILED  
             dab_dct| 256|     50000|       1|0.53279302|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.11082025|  PASSED  
        dab_filltree|  32|  15000000|       1|0.00796708|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.01338940|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.12834323|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.87790552|  PASSED  

real	53m23.265s
user	49m29.156s
sys	3m46.020s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xc9e5f09e
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xc9e5f09e
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +17.0  p =  7.5e-8   very suspicious  
  BCFN(2+2,13-3,T)                  R=  +7.6  p =  2.1e-3   unusual          
  DC6-9x1Bytes-1                    R=+167.2  p =  2.7e-102   FAIL !!!!!     
  Gap-16:A                          R=+223.3  p =  7.2e-190   FAIL !!!!!!    
  Gap-16:B                          R= +58.8  p =  4.2e-47    FAIL !!!       
  FPF-14+6/16:(0,14-0)              R= +60.6  p =  9.9e-56    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= +57.0  p =  2.2e-52    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= +55.8  p =  3.0e-51    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= +39.6  p =  7.2e-35    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= +28.8  p =  6.0e-25    FAIL !!        
  FPF-14+6/16:(5,14-2)              R= +33.0  p =  1.1e-28    FAIL !!        
  FPF-14+6/16:(6,14-3)              R= +21.2  p =  2.2e-18    FAIL !         
  FPF-14+6/16:(7,14-4)              R= +14.2  p =  1.4e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(8,14-5)              R=  +9.2  p =  1.6e-7   suspicious       
  FPF-14+6/16:(9,14-5)              R=  +9.1  p =  2.1e-7   suspicious       
  FPF-14+6/16:(10,14-6)             R= +10.9  p =  2.1e-8   very suspicious  
  FPF-14+6/16:(11,14-7)             R=  +7.3  p =  1.1e-5   unusual          
  FPF-14+6/16:all                   R=+120.6  p =  1.1e-112   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +3132  p =  7e-1171    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+137.2  p =  1.4e-91    FAIL !!!!!     
  [Low8/32]Gap-16:A                 R= +60.8  p =  1.9e-49    FAIL !!!!      
  [Low8/32]Gap-16:B                 R= +34.8  p =  1.2e-28    FAIL !!!       
  [Low1/32]DC6-9x1Bytes-1           R=  +6.9  p =  1.1e-3   mildly suspicious
  [Low1/32]Gap-16:A                 R= +31.2  p =  1.0e-24    FAIL !!        
  [Low1/32]Gap-16:B                 R=  +4.4  p =  1.4e-3   unusual          
  ...and 92 test result(s) without anomalies


real	0m2.925s
user	0m2.752s
sys	0m0.168s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0x6eee727
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0x6eee727
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +19.5  p =  5.0e-9    VERY SUSPICIOUS 
  DC6-9x1Bytes-1                    R=+168.7  p =  3.0e-103   FAIL !!!!!     
  Gap-16:A                          R=+216.7  p =  2.8e-184   FAIL !!!!!!    
  Gap-16:B                          R= +46.7  p =  2.0e-37    FAIL !!!       
  FPF-14+6/16:(0,14-0)              R= +61.2  p =  2.8e-56    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= +62.3  p =  2.8e-57    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= +58.2  p =  1.9e-53    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= +38.8  p =  4.3e-34    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= +30.0  p =  5.2e-26    FAIL !!        
  FPF-14+6/16:(5,14-2)              R= +29.9  p =  6.8e-26    FAIL !!        
  FPF-14+6/16:(6,14-3)              R= +22.2  p =  3.2e-19    FAIL !         
  FPF-14+6/16:(7,14-4)              R= +17.1  p =  6.4e-14    FAIL           
  FPF-14+6/16:(8,14-5)              R= +11.8  p =  1.1e-9   very suspicious  
  FPF-14+6/16:(9,14-5)              R= +14.1  p =  1.5e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(10,14-6)             R=  +7.2  p =  1.4e-5   unusual          
  FPF-14+6/16:all                   R=+124.5  p =  2.3e-116   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +3355  p =  3e-1254    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+139.1  p =  7.2e-93    FAIL !!!!!     
  [Low8/32]Gap-16:A                 R= +42.1  p =  4.7e-34    FAIL !!!       
  [Low8/32]Gap-16:B                 R= +14.6  p =  5.0e-12    FAIL           
  [Low1/32]DC6-9x1Bytes-1           R=  +6.3  p =  2.4e-3   unusual          
  [Low1/32]Gap-16:A                 R= +48.1  p =  2.9e-38    FAIL !!!       
  [Low1/32]Gap-16:B                 R= +13.5  p =  2.1e-10   VERY SUSPICIOUS 
  ...and 94 test result(s) without anomalies


real	0m2.877s
user	0m2.736s
sys	0m0.092s
*/
/* TEST00
time ./MRndCPP 
407406787
239207623
2217949946
1047795860
3158173004
1591622249
2284727320829099

real	0m17.181s
user	0m17.132s
sys	0m0.000s
*/
/* TEST01
time ./MRndCPP | dieharder -g200 -a -k2 
#=============================================================================#
#            dieharder version 3.31.1 Copyright 2003 Robert G. Brown          #
#=============================================================================#
   rng_name    |rands/second|   Seed   |
stdin_input_raw|  3.15e+07  |1335746208|
#=============================================================================#
        test_name   |ntup| tsamples |psamples|  p-value |Assessment
#=============================================================================#
   diehard_birthdays|   0|       100|     100|0.89030096|  PASSED  
      diehard_operm5|   0|   1000000|     100|0.97905048|  PASSED  
  diehard_rank_32x32|   0|     40000|     100|0.48542479|  PASSED  
    diehard_rank_6x8|   0|    100000|     100|0.96001776|  PASSED  
   diehard_bitstream|   0|   2097152|     100|0.39737493|  PASSED  
        diehard_opso|   0|   2097152|     100|0.41832243|  PASSED  
        diehard_oqso|   0|   2097152|     100|0.31433751|  PASSED  
         diehard_dna|   0|   2097152|     100|0.03378782|  PASSED  
diehard_count_1s_str|   0|    256000|     100|0.80409580|  PASSED  
diehard_count_1s_byt|   0|    256000|     100|0.06146230|  PASSED  
 diehard_parking_lot|   0|     12000|     100|0.13672068|  PASSED  
    diehard_2dsphere|   2|      8000|     100|0.98645570|  PASSED  
    diehard_3dsphere|   3|      4000|     100|0.99765150|   WEAK   
     diehard_squeeze|   0|    100000|     100|0.19164585|  PASSED  
        diehard_sums|   0|       100|     100|0.55228266|  PASSED  
        diehard_runs|   0|    100000|     100|0.37106990|  PASSED  
        diehard_runs|   0|    100000|     100|0.62197500|  PASSED  
       diehard_craps|   0|    200000|     100|0.86328175|  PASSED  
       diehard_craps|   0|    200000|     100|0.35507160|  PASSED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
 marsaglia_tsang_gcd|   0|  10000000|     100|0.00000000|  FAILED  
         sts_monobit|   1|    100000|     100|0.83269200|  PASSED  
            sts_runs|   2|    100000|     100|0.60345182|  PASSED  
          sts_serial|   1|    100000|     100|0.98167092|  PASSED  
          sts_serial|   2|    100000|     100|0.57320547|  PASSED  
          sts_serial|   3|    100000|     100|0.35305595|  PASSED  
          sts_serial|   3|    100000|     100|0.19017923|  PASSED  
          sts_serial|   4|    100000|     100|0.70585264|  PASSED  
          sts_serial|   4|    100000|     100|0.50248617|  PASSED  
          sts_serial|   5|    100000|     100|0.46842154|  PASSED  
          sts_serial|   5|    100000|     100|0.32780836|  PASSED  
          sts_serial|   6|    100000|     100|0.54817266|  PASSED  
          sts_serial|   6|    100000|     100|0.59579877|  PASSED  
          sts_serial|   7|    100000|     100|0.63676600|  PASSED  
          sts_serial|   7|    100000|     100|0.94227723|  PASSED  
          sts_serial|   8|    100000|     100|0.22321479|  PASSED  
          sts_serial|   8|    100000|     100|0.89924840|  PASSED  
          sts_serial|   9|    100000|     100|0.18170750|  PASSED  
          sts_serial|   9|    100000|     100|0.39595577|  PASSED  
          sts_serial|  10|    100000|     100|0.66349833|  PASSED  
          sts_serial|  10|    100000|     100|0.83419955|  PASSED  
          sts_serial|  11|    100000|     100|0.90843586|  PASSED  
          sts_serial|  11|    100000|     100|0.93170777|  PASSED  
          sts_serial|  12|    100000|     100|0.64749577|  PASSED  
          sts_serial|  12|    100000|     100|0.34378851|  PASSED  
          sts_serial|  13|    100000|     100|0.73221126|  PASSED  
          sts_serial|  13|    100000|     100|0.93104063|  PASSED  
          sts_serial|  14|    100000|     100|0.46574535|  PASSED  
          sts_serial|  14|    100000|     100|0.14165480|  PASSED  
          sts_serial|  15|    100000|     100|0.59167755|  PASSED  
          sts_serial|  15|    100000|     100|0.27155482|  PASSED  
          sts_serial|  16|    100000|     100|0.30231220|  PASSED  
          sts_serial|  16|    100000|     100|0.59843627|  PASSED  
         rgb_bitdist|   1|    100000|     100|0.97296871|  PASSED  
         rgb_bitdist|   2|    100000|     100|0.76969252|  PASSED  
         rgb_bitdist|   3|    100000|     100|0.60722300|  PASSED  
         rgb_bitdist|   4|    100000|     100|0.50033138|  PASSED  
         rgb_bitdist|   5|    100000|     100|0.01608627|  PASSED  
         rgb_bitdist|   6|    100000|     100|0.96530960|  PASSED  
         rgb_bitdist|   7|    100000|     100|0.39426111|  PASSED  
         rgb_bitdist|   8|    100000|     100|0.50659186|  PASSED  
         rgb_bitdist|   9|    100000|     100|0.94178692|  PASSED  
         rgb_bitdist|  10|    100000|     100|0.99247485|  PASSED  
         rgb_bitdist|  11|    100000|     100|0.23017876|  PASSED  
         rgb_bitdist|  12|    100000|     100|0.07264580|  PASSED  
rgb_minimum_distance|   2|     10000|    1000|0.40745715|  PASSED  
rgb_minimum_distance|   3|     10000|    1000|0.01752309|  PASSED  
rgb_minimum_distance|   4|     10000|    1000|0.89088411|  PASSED  
rgb_minimum_distance|   5|     10000|    1000|0.34013324|  PASSED  
    rgb_permutations|   2|    100000|     100|0.13113955|  PASSED  
    rgb_permutations|   3|    100000|     100|0.09787446|  PASSED  
    rgb_permutations|   4|    100000|     100|0.23046236|  PASSED  
    rgb_permutations|   5|    100000|     100|0.76580588|  PASSED  
      rgb_lagged_sum|   0|   1000000|     100|0.38930406|  PASSED  
      rgb_lagged_sum|   1|   1000000|     100|0.11521598|  PASSED  
      rgb_lagged_sum|   2|   1000000|     100|0.41578795|  PASSED  
      rgb_lagged_sum|   3|   1000000|     100|0.15927894|  PASSED  
      rgb_lagged_sum|   4|   1000000|     100|0.10203243|  PASSED  
      rgb_lagged_sum|   5|   1000000|     100|0.19637813|  PASSED  
      rgb_lagged_sum|   6|   1000000|     100|0.74620481|  PASSED  
      rgb_lagged_sum|   7|   1000000|     100|0.04035395|  PASSED  
      rgb_lagged_sum|   8|   1000000|     100|0.42659818|  PASSED  
      rgb_lagged_sum|   9|   1000000|     100|0.24871475|  PASSED  
      rgb_lagged_sum|  10|   1000000|     100|0.24443973|  PASSED  
      rgb_lagged_sum|  11|   1000000|     100|0.68281376|  PASSED  
      rgb_lagged_sum|  12|   1000000|     100|0.42595994|  PASSED  
      rgb_lagged_sum|  13|   1000000|     100|0.33251292|  PASSED  
      rgb_lagged_sum|  14|   1000000|     100|0.48236598|  PASSED  
      rgb_lagged_sum|  15|   1000000|     100|0.19426058|  PASSED  
      rgb_lagged_sum|  16|   1000000|     100|0.18720188|  PASSED  
      rgb_lagged_sum|  17|   1000000|     100|0.95851606|  PASSED  
      rgb_lagged_sum|  18|   1000000|     100|0.03800190|  PASSED  
      rgb_lagged_sum|  19|   1000000|     100|0.28466446|  PASSED  
      rgb_lagged_sum|  20|   1000000|     100|0.99322263|  PASSED  
      rgb_lagged_sum|  21|   1000000|     100|0.16878216|  PASSED  
      rgb_lagged_sum|  22|   1000000|     100|0.13222619|  PASSED  
      rgb_lagged_sum|  23|   1000000|     100|0.36936755|  PASSED  
      rgb_lagged_sum|  24|   1000000|     100|0.31649738|  PASSED  
      rgb_lagged_sum|  25|   1000000|     100|0.06309637|  PASSED  
      rgb_lagged_sum|  26|   1000000|     100|0.21753479|  PASSED  
      rgb_lagged_sum|  27|   1000000|     100|0.83496027|  PASSED  
      rgb_lagged_sum|  28|   1000000|     100|0.05799746|  PASSED  
      rgb_lagged_sum|  29|   1000000|     100|0.05532596|  PASSED  
      rgb_lagged_sum|  30|   1000000|     100|0.09822092|  PASSED  
      rgb_lagged_sum|  31|   1000000|     100|0.97708244|  PASSED  
      rgb_lagged_sum|  32|   1000000|     100|0.16297964|  PASSED  
     rgb_kstest_test|   0|     10000|    1000|0.11332367|  PASSED  
     dab_bytedistrib|   0|  51200000|       1|0.00000000|  FAILED  
             dab_dct| 256|     50000|       1|0.27520667|  PASSED  
Preparing to run test 207.  ntuple = 0
        dab_filltree|  32|  15000000|       1|0.88944326|  PASSED  
        dab_filltree|  32|  15000000|       1|0.53458455|  PASSED  
Preparing to run test 208.  ntuple = 0
       dab_filltree2|   0|   5000000|       1|0.18982455|  PASSED  
       dab_filltree2|   1|   5000000|       1|0.21040035|  PASSED  
Preparing to run test 209.  ntuple = 0
        dab_monobit2|  12|  65000000|       1|0.38020436|  PASSED  

real	51m55.105s
user	48m3.880s
sys	3m44.948s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 100s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xbde30ba6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xbde30ba6
length= 128 megabytes (2^27 bytes), time= 2.3 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R= +17.4  p =  5.0e-8   very suspicious  
  DC6-9x1Bytes-1                    R=+170.0  p =  5.3e-104   FAIL !!!!!     
  Gap-16:A                          R=+210.2  p =  9.2e-179   FAIL !!!!!!    
  Gap-16:B                          R= +51.9  p =  1.3e-41    FAIL !!!       
  FPF-14+6/16:(0,14-0)              R= +61.1  p =  3.9e-56    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= +56.8  p =  3.4e-52    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= +55.6  p =  4.8e-51    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= +41.1  p =  3.4e-36    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= +29.5  p =  1.5e-25    FAIL !!        
  FPF-14+6/16:(5,14-2)              R= +29.5  p =  1.5e-25    FAIL !!        
  FPF-14+6/16:(6,14-3)              R= +22.0  p =  4.7e-19    FAIL !         
  FPF-14+6/16:(7,14-4)              R= +18.9  p =  2.2e-15    FAIL           
  FPF-14+6/16:(8,14-5)              R=  +7.9  p =  2.2e-6   mildly suspicious
  FPF-14+6/16:(9,14-5)              R=  +9.0  p =  2.4e-7   suspicious       
  FPF-14+6/16:(10,14-6)             R= +12.7  p =  8.9e-10  very suspicious  
  FPF-14+6/16:all                   R=+120.9  p =  6.0e-113   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +3153  p =  7e-1179    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+140.8  p =  4.9e-94    FAIL !!!!!     
  [Low8/32]Gap-16:A                 R= +59.2  p =  4.5e-48    FAIL !!!!      
  [Low8/32]Gap-16:B                 R= +32.7  p =  7.1e-27    FAIL !!        
  [Low1/32]DC6-9x1Bytes-1           R=  +6.6  p =  1.6e-3   unusual          
  [Low1/32]Gap-16:A                 R= +73.1  p =  2.1e-58    FAIL !!!!      
  [Low1/32]Gap-16:B                 R= +30.2  p =  5.5e-23    FAIL !!        
  ...and 94 test result(s) without anomalies


real	0m2.913s
user	0m2.776s
sys	0m0.132s
*/
/* TEST01
time ./MRndCPP | RNG_test stdin32 -tlmax 1000s 
RNG_test using PractRand version 0.93
RNG = RNG_stdin32, seed = 0xcf7b54f6
test set = normal, folding = standard (32 bit)

rng=RNG_stdin32, seed=0xcf7b54f6
length= 128 megabytes (2^27 bytes), time= 2.2 seconds
  Test Name                         Raw       Processed     Evaluation
  BCFN(2+0,13-3,T)                  R=  +8.1  p =  1.2e-3   unusual          
  DC6-9x1Bytes-1                    R=+166.7  p =  5.4e-102   FAIL !!!!!     
  Gap-16:A                          R=+256.9  p =  1.3e-218   FAIL !!!!!!    
  Gap-16:B                          R= +93.0  p =  1.7e-74    FAIL !!!!      
  FPF-14+6/16:(0,14-0)              R= +56.5  p =  6.6e-52    FAIL !!!!      
  FPF-14+6/16:(1,14-0)              R= +56.5  p =  7.1e-52    FAIL !!!!      
  FPF-14+6/16:(2,14-0)              R= +56.4  p =  7.8e-52    FAIL !!!!      
  FPF-14+6/16:(3,14-1)              R= +43.3  p =  4.2e-38    FAIL !!!       
  FPF-14+6/16:(4,14-2)              R= +24.8  p =  1.9e-21    FAIL !!        
  FPF-14+6/16:(5,14-2)              R= +30.5  p =  1.7e-26    FAIL !!        
  FPF-14+6/16:(6,14-3)              R= +20.5  p =  9.5e-18    FAIL !         
  FPF-14+6/16:(7,14-4)              R= +16.1  p =  4.2e-13    FAIL           
  FPF-14+6/16:(8,14-5)              R= +13.9  p =  2.0e-11   VERY SUSPICIOUS 
  FPF-14+6/16:(9,14-5)              R=  +9.2  p =  1.5e-7   suspicious       
  FPF-14+6/16:(13,14-8)             R=  +7.9  p =  1.0e-5   unusual          
  FPF-14+6/16:all                   R=+118.2  p =  1.9e-110   FAIL !!!!!     
  FPF-14+6/16:all2                  R= +3021  p =  2e-1129    FAIL !!!!!!!!  
  [Low8/32]DC6-9x1Bytes-1           R=+133.4  p =  5.3e-89    FAIL !!!!!     
  [Low8/32]Gap-16:A                 R= +30.6  p =  1.1e-24    FAIL !!        
  [Low8/32]Gap-16:B                 R=  +6.4  p =  2.7e-5   suspicious       
  [Low1/32]DC6-9x1Bytes-1           R=  +7.6  p =  4.4e-4   mildly suspicious
  [Low1/32]Gap-16:A                 R= +62.7  p =  5.2e-50    FAIL !!!!      
  [Low1/32]Gap-16:B                 R= +19.1  p =  1.2e-14    FAIL !         
  [Low1/32]FPF-14+6/16:cross        R=  +7.6  p =  8.7e-7   very suspicious  
  ...and 93 test result(s) without anomalies


real	0m2.837s
user	0m2.740s
sys	0m0.088s
*/
