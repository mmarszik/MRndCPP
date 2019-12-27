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

template<CMRND_ULONG A=0x60bee2bee120fc15ull, CMRND_ULONG B=0xa3b195354a39b70dull, CMRND_ULONG C=0x1b03738712fad5c9ull, CMRND_UINT BITS=16u>
class RndWyhash64 : public RndBase {

    static_assert( sizeof(TMRND_UINT)      ==  4 , "sizeof(TMRND_UINT)      ==  4" );
    static_assert( sizeof(TMRND_ULONG)     ==  8 , "sizeof(TMRND_ULONG)     ==  8" );
    static_assert( sizeof(TMRND_ULONGLONG) == 16 , "sizeof(TMRND_ULONGLONG) == 16" );

private:
    TMRND_ULONG x;

private:
    TMRND_UINT getValue() {
        x += A;
        TMRND_ULONGLONG t = (TMRND_ULONGLONG)x * B;
        CMRND_ULONG m = (t >> 64) ^ t;
        t = (TMRND_ULONGLONG)m * C;
        return (t >> 64) ^ t;
    }

public:
    RndWyhash64(CMRND_ULONG __sd = 0x25EC1CDA937545ECull) {
        seed( __sd );
    }
    void seed(CMRND_ULONG __sd) {
        x = __sd;
    }
    TMRND_RESULT operator()() {
        TMRND_RESULT r;
        for( TMRND_UINT i=0 ; i<MLimits<TMRND_RESULT>::digits() ; i+=BITS ) {
#pragma GCC diagnostic ignored "-Wuninitialized"
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
            r <<= BITS;
#pragma GCC diagnostic warning "-Wuninitialized"
#pragma GCC diagnostic warning "-Wmaybe-uninitialized"
            r |= getValue() & ((1u<<BITS)-1);
        }
        return r;
    }

};

using RndWyhash64_0 = RndWyhash64<>;

