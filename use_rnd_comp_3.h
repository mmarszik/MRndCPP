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
/// @created on 2019-12-08 02:56:18 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 0ff3b5f3-789f-404a-9120-d809aa46f6fd                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_comp.h"
#include "rnd_fib.h"

using TRnd = RndComp< RndFib0a, RndFib1a, 7 >;

/* TEST00
time ./MRndCPP 
1973536367
3381483824
3556148829
2430275353
1787476771
1747937403
576427605297747582

real	0m1.915s
user	0m1.899s
sys	0m0.012s
*/
/* TEST00
time ./MRndCPP 
1973536367
3381483824
3556148829
2430275353
1787476771
1747937403
576427605297747582

real	0m1.490s
user	0m1.490s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1973536367
3381483824
3556148829
2430275353
1787476771
1747937403
576427605297747582

real	0m1.530s
user	0m1.525s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
1973536367
3381483824
3556148829
2430275353
1787476771
1747937403
576427605297747582

real	0m1.627s
user	0m1.621s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
1973536367
3381483824
3556148829
2430275353
1787476771
1747937403
576427605297747582

real	0m1.607s
user	0m1.602s
sys	0m0.004s
*/
