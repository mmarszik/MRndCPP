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
/// @created on 2019-12-08 02:56:45 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 20611663-ea55-4b72-863b-3cc66e970785                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib2, RndFib3, 9 >;

/* TEST00
time ./MRndCPP 
1623909407
3839886961
2841323221
3500042686
1429884035
682825171
576499665121925895

real	0m1.166s
user	0m1.164s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1623909407
3839886961
2841323221
3500042686
1429884035
682825171
576499665121925895

real	0m1.117s
user	0m1.117s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1623909407
3839886961
2841323221
3500042686
1429884035
682825171
576499665121925895

real	0m1.145s
user	0m1.141s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
1623909407
3839886961
2841323221
3500042686
1429884035
682825171
576499665121925895

real	0m1.201s
user	0m1.201s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1623909407
3839886961
2841323221
3500042686
1429884035
682825171
576499665121925895

real	0m1.367s
user	0m1.365s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1623909407
3839886961
2841323221
3500042686
1429884035
682825171
576499665121925895

real	0m1.168s
user	0m1.168s
sys	0m0.000s
*/
