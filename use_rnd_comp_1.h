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
/// @created on 2019-12-08 02:55:57 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5d4c00a3-ad7a-4d61-8d5a-8bdc687545af                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_sim_lin.h"

using TRnd = RndComp<RndSimLin01,RndSimLin03,10>;

/* TEST00
time ./MRndCPP 
1585682339
2494875974
1870629489
3954548876
3038153523
1357523021
576437842100941474

real	0m1.476s
user	0m1.468s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
1585682339
2494875974
1870629489
3954548876
3038153523
1357523021
576437842100941474

real	0m1.351s
user	0m1.351s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1585682339
2494875974
1870629489
3954548876
3038153523
1357523021
576437842100941474

real	0m1.361s
user	0m1.360s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1585682339
2494875974
1870629489
3954548876
3038153523
1357523021
576437842100941474

real	0m1.395s
user	0m1.394s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1585682339
2494875974
1870629489
3954548876
3038153523
1357523021
576437842100941474

real	0m1.352s
user	0m1.347s
sys	0m0.004s
*/
