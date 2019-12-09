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
/// @created on 2019-12-08 02:58:07 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 38931ffa-bf5e-4829-bb95-e5060ccd5ca1                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib1a;
/* TEST00
time ./MRndCPP 
4217143007
2263514851
3622271318
4017173772
731841040
1586642232
576461455706458233

real	0m0.861s
user	0m0.860s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
4217143007
2263514851
3622271318
4017173772
731841040
1586642232
576461455706458233

real	0m0.868s
user	0m0.866s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
4217143007
2263514851
3622271318
4017173772
731841040
1586642232
576461455706458233

real	0m0.855s
user	0m0.855s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
4217143007
2263514851
3622271318
4017173772
731841040
1586642232
576461455706458233

real	0m0.854s
user	0m0.854s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
4217143007
2263514851
3622271318
4017173772
731841040
1586642232
576461455706458233

real	0m0.858s
user	0m0.858s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
4217143007
2263514851
3622271318
4017173772
731841040
1586642232
576461455706458233

real	0m0.862s
user	0m0.858s
sys	0m0.004s
*/
