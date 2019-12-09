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
/// @created on 2019-12-08 02:58:30 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8158fed7-fa4c-4402-8961-e570927f3bc8                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib2a;
/* TEST00
time ./MRndCPP 
3655671857
3112833665
594534808
1954924846
3080878651
1703364130
576439547996395073

real	0m0.914s
user	0m0.907s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
3655671857
3112833665
594534808
1954924846
3080878651
1703364130
576439547996395073

real	0m0.828s
user	0m0.828s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
3655671857
3112833665
594534808
1954924846
3080878651
1703364130
576439547996395073

real	0m0.837s
user	0m0.837s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
3655671857
3112833665
594534808
1954924846
3080878651
1703364130
576439547996395073

real	0m0.968s
user	0m0.956s
sys	0m0.008s
*/
/* TEST00
time ./MRndCPP 
3655671857
3112833665
594534808
1954924846
3080878651
1703364130
576439547996395073

real	0m0.833s
user	0m0.829s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
3655671857
3112833665
594534808
1954924846
3080878651
1703364130
576439547996395073

real	0m0.838s
user	0m0.838s
sys	0m0.000s
*/
