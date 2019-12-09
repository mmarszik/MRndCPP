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
/// @created on 2019-12-08 02:59:53 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 7d31d573-c8f4-4651-ab8e-a8f0b614d221                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2a;
/* TEST00
time ./MRndCPP 
3526497076
1652012899
857344370
3687836006
3554605929
3543896927
576479721978524244

real	0m3.328s
user	0m3.325s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
3526497076
1652012899
857344370
3687836006
3554605929
3543896927
576479721978524244

real	0m3.265s
user	0m3.261s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
3526497076
1652012899
857344370
3687836006
3554605929
3543896927
576479721978524244

real	0m3.270s
user	0m3.270s
sys	0m0.000s
*/
