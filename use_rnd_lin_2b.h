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
576454062088637878

real	0m5.026s
user	0m5.024s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
4081487542
2598378608
2001728541
3754126217
2651817580
3324873846
576454062088637878

real	0m4.899s
user	0m4.896s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
4081487542
2598378608
2001728541
3754126217
2651817580
3324873846
576454062088637878

real	0m4.891s
user	0m4.890s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
4081487542
2598378608
2001728541
3754126217
2651817580
3324873846
576454062088637878

real	0m4.998s
user	0m4.994s
sys	0m0.004s
*/
