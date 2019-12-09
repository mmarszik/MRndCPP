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
/// @created on 2019-12-08 02:57:13 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token dc59c4c5-12be-4f49-bab5-5c77725f3e2a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_lin.h"

using TRnd = RndComp< RndLin2, RndLin2, 7 >;

/* TEST00
time ./MRndCPP 
840932236
52608534
2736526188
1716577654
15303960
3703642652
576414977683096911

real	0m1.723s
user	0m1.722s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
840932236
52608534
2736526188
1716577654
15303960
3703642652
576414977683096911

real	0m1.700s
user	0m1.700s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
840932236
52608534
2736526188
1716577654
15303960
3703642652
576414977683096911

real	0m1.699s
user	0m1.699s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
840932236
52608534
2736526188
1716577654
15303960
3703642652
576414977683096911

real	0m1.795s
user	0m1.789s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
840932236
52608534
2736526188
1716577654
15303960
3703642652
576414977683096911

real	0m1.689s
user	0m1.688s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
840932236
52608534
2736526188
1716577654
15303960
3703642652
576414977683096911

real	0m1.700s
user	0m1.700s
sys	0m0.000s
*/
