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
/// @created on 2019-12-08 03:02:17 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 995f3936-f3cc-4472-9a0d-d22eb4f2f7e1                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin05;

/* TEST00
time ./MRndCPP 
450647553
1626776225
2111440573
3385282940
1835585326
2004076447
576477191959463100

real	0m0.622s
user	0m0.618s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
450647553
1626776225
2111440573
3385282940
1835585326
2004076447
576477191959463100

real	0m0.618s
user	0m0.614s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
450647553
1626776225
2111440573
3385282940
1835585326
2004076447
576477191959463100

real	0m0.623s
user	0m0.618s
sys	0m0.004s
*/
