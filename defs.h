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
/// @created on 2019-12-09 20:57:15 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e04feeea-148b-4df8-b67f-a50d6d1762b1                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

using TMRND_UINT = unsigned int;
using TMRND_ULONG = unsigned long long;
using CMRND_ULONG = const TMRND_ULONG;
using TMRND_FLOAT = double;
using TMRND_LONGLONG = __int128_t;
using TMRND_ULONGLONG = __uint128_t;

using CMRND_UINT = const TMRND_UINT;
using CMRND_FLOAT = const TMRND_FLOAT;
using CMRND_LONGLONG = const TMRND_LONGLONG;
using CMRND_ULONGLONG = const TMRND_ULONGLONG;

using TMRND_RESULT = TMRND_UINT;
using CMRND_RESULT = const TMRND_RESULT;
