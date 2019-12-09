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
/// @created on 2019-12-08 03:00:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token fcc8a5df-c948-4aa9-85f8-4774fcd52024                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_lin.h"

using TRnd = RndLin2c;
/* TEST00
time ./MRndCPP 
842299235
443731814
3731438431
2717125802
1624458502
4017950209
576436299747106999

real	0m6.681s
user	0m6.672s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
842299235
443731814
3731438431
2717125802
1624458502
4017950209
576436299747106999

real	0m6.528s
user	0m6.528s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
842299235
443731814
3731438431
2717125802
1624458502
4017950209
576436299747106999

real	0m6.535s
user	0m6.533s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
842299235
443731814
3731438431
2717125802
1624458502
4017950209
576436299747106999

real	0m6.794s
user	0m6.779s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
842299235
443731814
3731438431
2717125802
1624458502
4017950209
576436299747106999

real	0m6.525s
user	0m6.524s
sys	0m0.000s
*/
