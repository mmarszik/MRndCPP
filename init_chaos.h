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
/// @created on 2020-01-03 08:13:20 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5151998e-0810-4c33-9a44-b6dad31de424                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "defs.h"
#include <MiscCPP/m_limits.h>

namespace MRnd {

constexpr CMRND_U32 CMRND_INIT_CHAOS_SIZE = 14U;
extern CMRND_U64 CMRND_INIT_CHAOS[ 1u << CMRND_INIT_CHAOS_SIZE ];

template<typename TARRAY>
static void letBeChaos(
    TARRAY      &buff,
    CMRND_U32   SIZE,
    TMRND_U64   seed,
    CMRND_U32   XORS  = 17,
    CMRND_U32   SKIPS = 71
) {
    static CMRND_U64 A =  543657589ull;
    static CMRND_U64 B = 4253133281ull;
    for( TMRND_U32 i=0 ; i<XORS ; i++ ) {
        for( TMRND_U32 j=0 ; j<SIZE ; j++ ) {
            if( i == 0 ) {
                buff[j] = 0;
            }
            for( TMRND_U32 k=0 ; k<SKIPS ; k++ ) {
                seed = seed * A + B;
            }
            CMRND_U32 v1 = seed >> (MLimits<decltype(seed)>::digits() - CMRND_INIT_CHAOS_SIZE);
            for( TMRND_U32 k=0 ; k<SKIPS ; k++ ) {
                seed = seed * A + B;
            }
            buff[j] = buff[j] ^ (CMRND_INIT_CHAOS[v1] + seed);
        }
    }

}

}
