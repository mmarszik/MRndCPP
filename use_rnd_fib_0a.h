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
/// @created on 2019-12-08 02:57:46 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token da5caad5-47b0-45bf-8100-04d7fbb20b94                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib0a;
/* TEST00
time ./MRndCPP 
3233202625
2328409647
3361551064
2495864169
3328962110
888761389
576489105929639766

real	0m0.984s
user	0m0.983s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
3233202625
2328409647
3361551064
2495864169
3328962110
888761389
576489105929639766

real	0m0.911s
user	0m0.910s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
3233202625
2328409647
3361551064
2495864169
3328962110
888761389
576489105929639766

real	0m0.919s
user	0m0.919s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
3233202625
2328409647
3361551064
2495864169
3328962110
888761389
576489105929639766

real	0m0.925s
user	0m0.920s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
3233202625
2328409647
3361551064
2495864169
3328962110
888761389
576489105929639766

real	0m0.916s
user	0m0.916s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
3233202625
2328409647
3361551064
2495864169
3328962110
888761389
576489105929639766

real	0m0.937s
user	0m0.936s
sys	0m0.000s
*/
