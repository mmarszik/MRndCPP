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
/// @created on 2019-12-08 02:58:42 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token c07c75d9-db05-492c-84fb-b06ccecfbe9b                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_fib.h"

using TRnd = RndFib3;
/* TEST00
time ./MRndCPP 
3237930143
924043937
3976843214
62872134
3455282647
3156509901
576430853601464162

real	0m0.737s
user	0m0.729s
sys	0m0.008s
*/
/* TEST00
time ./MRndCPP 
3237930143
924043937
3976843214
62872134
3455282647
3156509901
576430853601464162

real	0m0.706s
user	0m0.706s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
3237930143
924043937
3976843214
62872134
3455282647
3156509901
576430853601464162

real	0m0.726s
user	0m0.726s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
3237930143
924043937
3976843214
62872134
3455282647
3156509901
576430853601464162

real	0m0.762s
user	0m0.762s
sys	0m0.000s
*/
