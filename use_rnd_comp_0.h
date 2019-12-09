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
/// @created on 2019-12-08 02:55:44 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token f3d861a8-a940-418e-93ba-af4c51f21089                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_sim_lin.h"

using TRnd = RndComp<RndSimLin00,RndSimLin02,10>;

/* TEST00
time ./MRndCPP 
844443584
2504572837
278761187
3746838637
2321442934
2618716438
576450515359702075

real	0m0.502s
user	0m0.502s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
844443584
2504572837
278761187
3746838637
2321442934
2618716438
576450515359702075

real	0m0.510s
user	0m0.509s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
844443584
2504572837
278761187
3746838637
2321442934
2618716438
576450515359702075

real	0m0.495s
user	0m0.494s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
844443584
2504572837
278761187
3746838637
2321442934
2618716438
576450515359702075

real	0m0.523s
user	0m0.519s
sys	0m0.004s
*/
