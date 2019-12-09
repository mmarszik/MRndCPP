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
/// @created on 2019-12-08 03:01:54 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 3d0be239-049e-4082-b213-9b26bfc18ea2                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_sim_lin.h"

using TRnd = RndSimLin02;
/* TEST00
time ./MRndCPP 
./test.sh: line 15: ./MRndCPP: No such file or directory

real	0m0.001s
user	0m0.001s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1889262655
331459241
3829589973
902451912
3434156384
458466171
576446317042439062

real	0m0.431s
user	0m0.427s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
1889262655
331459241
3829589973
902451912
3434156384
458466171
576446317042439062

real	0m0.427s
user	0m0.427s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1889262655
331459241
3829589973
902451912
3434156384
458466171
576446317042439062

real	0m0.431s
user	0m0.431s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
1889262655
331459241
3829589973
902451912
3434156384
458466171
576446317042439062

real	0m0.438s
user	0m0.436s
sys	0m0.000s
*/
