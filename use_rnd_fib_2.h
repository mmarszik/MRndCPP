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
/// @created on 2019-12-08 02:58:20 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e2ae05fa-041c-4033-ba46-dfc905ce47d2                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib2;
/* TEST00
time ./MRndCPP 
1604262765
3422254557
378000469
1617572592
4148197001
84671980
576504914931899349

real	0m0.725s
user	0m0.721s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
1604262765
3422254557
378000469
1617572592
4148197001
84671980
576504914931899349

real	0m0.706s
user	0m0.702s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
1604262765
3422254557
378000469
1617572592
4148197001
84671980
576504914931899349

real	0m0.726s
user	0m0.726s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1604262765
3422254557
378000469
1617572592
4148197001
84671980
576504914931899349

real	0m0.733s
user	0m0.733s
sys	0m0.000s
*/
