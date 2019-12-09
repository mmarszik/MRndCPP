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
/// @created on 2019-12-08 02:57:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8f4635a2-d7ca-4771-81ec-c2e4a2e59fab                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib1;
/* TEST00
time ./MRndCPP 
2772671560
1230292352
3182881147
2748660412
3615175996
2860307554
576482278611871217

real	0m0.768s
user	0m0.767s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
2772671560
1230292352
3182881147
2748660412
3615175996
2860307554
576482278611871217

real	0m0.754s
user	0m0.750s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
2772671560
1230292352
3182881147
2748660412
3615175996
2860307554
576482278611871217

real	0m0.811s
user	0m0.807s
sys	0m0.004s
*/
