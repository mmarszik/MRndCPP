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
/// @created on 2019-12-08 02:52:52 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token da8aa6bf-940f-4a8c-b636-639cf373d7d9                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <new>
#include <MxCPP/mx_array.h>
#include "rnd_base.h"
#include "init_chaos.h"

namespace MRnd {

template<typename T, TMRND_U32 SIZE, TMRND_U32 R, T M1, T M2, T A, T MOD=0, TMRND_U32 INIT=4, TMRND_U32 SHIFT=0>
class RndFib : public RndBase {
private:
    using TBUFF = MxArray<T, SIZE>;
private:
    TBUFF buff;
    T *i1, *i2;
    T *const end;
public:
    RndFib(const T __sd=0x055320D141E7146Eull) : end(&buff[0] + SIZE) {
        seed(__sd);
    }
    RndFib(const RndFib& other) : end(&buff[0] + SIZE) {
        i1 = &buff[0] + ( other.i1 - &other.buff[0] );
        i2 = &buff[0] + ( other.i2 - &other.buff[0] );
        for( TMRND_U32 i=0 ; i<SIZE ; i++ ) {
            buff[i] = other.buff[i];
        }
    }
    RndFib& operator = (const RndFib& other) {
        return *( new(this)RndFib(other) );
    }
    void seed(const T __sd) {
        letBeChaos<TBUFF>(buff, SIZE, __sd );
        i1 = &buff[0] + SIZE - 1;
        i2 = &buff[0] + SIZE - 1 - R;
        for( TMRND_U32 i=0 ; i<SIZE*INIT ; i++ ) {
            (*this)();
        }
    }
    TMRND_RESULT operator()() {
        if( ++i1 == end ) i1 = &buff[0];
        if( ++i2 == end ) i2 = &buff[0];
        if( MOD == 0 ) {
            return ( *i1 = ( *i1 * M1 + *i2 * M2 + A )       ) >> SHIFT;
        } else {
            return ( *i1 = ( *i1 * M1 + *i2 * M2 + A ) % MOD ) >> SHIFT;
        }
    }
};


using RndFib1   =  RndFib< TMRND_U64, 7732,	6634, 1,                       1,                      0,                      0,    4u, 11u >;
using RndFib2   =  RndFib< TMRND_U64, 7855,	6590, 1,                       1,                      0,                      0,    4u,  7u >;
using RndFib3   =  RndFib< TMRND_U64, 8128,	7239, 1,                       1,                      0,                      0,    4u, 13u >;
using RndFib4   =  RndFib< TMRND_U64, 8315,	8198, 0xE71E374A05887C31ull,   0x7ADC0B7E8AA29A35ull,  0x1D88C251C16E9D76ull,  0,    4u, 25u >;
using RndFib5   =  RndFib< TMRND_U64, 7629,	6510, 0x1752615C33AC8DD7ull,   0xA63480EDE820084Bull,  0xB56E016B0B86EC74ull,  0,    4u,  8u >;
using RndFib6   =  RndFib< TMRND_U64, 7726,   6969, 0xC0A41A09D0C54CDBull,   0x7C1BC6ED29A27C5Dull,  0xD157DBA390BE1616ull,  0,    4u, 12u >;

}
