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
/// @created on 2019-12-27 07:32:41 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token a09f3138-ab43-4d45-bed0-a8a7c360c103                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_base.h"

template<CMRND_U64 A=0x60bee2bee120fc15ull, CMRND_U64 B=0xa3b195354a39b70dull, CMRND_U64 C=0x1b03738712fad5c9ull>
class RndWyhash64 : public RndBase {
    static_assert( sizeof(TMRND_U32)      ==  4 , "sizeof(TMRND_UINT)      ==  4" );
    static_assert( sizeof(TMRND_U64)     ==  8 , "sizeof(TMRND_ULONG)     ==  8" );
    static_assert( sizeof(TMRND_U128) == 16 , "sizeof(TMRND_ULONGLONG) == 16" );
private:
    TMRND_U64 x;
public:
    RndWyhash64(CMRND_U64 __sd = 0x25EC1CDA937545ECull) {
        seed( __sd );
    }
    void seed(CMRND_U64 __sd) {
        x = __sd;
    }
    TMRND_RESULT operator()() {
        x += A;
        TMRND_U128 t = (TMRND_U128)x * B;
        CMRND_U64 m = (t >> 64) ^ t;
        t = (TMRND_U128)m * C;
        return (t >> 64) ^ t;
    }
};


using RndWyhash64_0 = RndWyhash64<>;

