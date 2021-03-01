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

#ifdef NATIVE_U128_BIT
#else
#include "MiscCPP/m_uint128.h"
#endif

namespace MRnd {

using TMRND_U8   = unsigned char;
using TMRND_I32  = int;
using TMRND_U32  = unsigned int;
using TMRND_I64  = long long;
using TMRND_U64  = unsigned long long;
using TMRND_F64  = double;
//using TMRND_I128 = __int128_t;

#ifdef NATIVE_U128_BIT
using TMRND_U128 = __uint128_t;
#else
using TMRND_U128 = MUint128;
#endif

using CMRND_U8   = const TMRND_U8;
using CMRND_U32  = const TMRND_U32;
using CMRND_I64  = const TMRND_I64;
using CMRND_U64  = const TMRND_U64;
using CMRND_F64  = const TMRND_F64;
//using CMRND_I128 = const TMRND_I128;
using CMRND_U128 = const TMRND_U128;

using TMRND_RESULT  = TMRND_U32;
using CMRND_RESULT  = const TMRND_RESULT;

using TMRND_IRESULT = TMRND_I32;
using CMRND_IRESULT = const TMRND_IRESULT;

}
