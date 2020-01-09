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
/// @created on 2019-12-08 02:54:19 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 082856b4-4191-4c27-bdb9-1b2dcdc8664f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once
#include "rnd_base.h"

template<typename T, const T A, const T B, const T M=0, CMRND_UINT BITS=32, CMRND_UINT SHIFT=0, CMRND_UINT SKIP=0>
class RndLin : public RndBase {
    static_assert( sizeof(T) >= sizeof(TMRND_RESULT), "sizeof(T) >= sizeof(TMRND_RESULT)" );
private:
    T v;
private:
    T getRnd() {
        for( TMRND_UINT i=0 ; i<=SKIP ; i++ ) {
            if( M == 0 ) {
                v = v * A + B;
            } else {
                v = ( v * A + B ) % M;
            }
        }
        return v >> SHIFT;
    }

public:
    RndLin(const T __sd=0x59941428651521D6ull) {
        seed(__sd);
    }
    void seed(const T __sd) {
        v = __sd;
    }
    TMRND_RESULT operator()() {
        if( MLimits<TMRND_RESULT>::digits() <= BITS ) {
            return getRnd() ;
        } else {
            TMRND_RESULT r = getRnd();
            for( TMRND_UINT i=BITS ; i<MLimits<TMRND_RESULT>::digits() ; i+=BITS ) {
#pragma GCC diagnostic ignored "-Wshift-count-overflow"
                r <<= BITS;
                r |= getRnd() & ((1u << BITS)-1);
#pragma GCC diagnostic warning "-Wshift-count-overflow"
            }
            return r;
        }
    }
};

using RndLin1 = RndLin<TMRND_ULONG,          219747164629ull,       152680993343ull, 0ull, 16u, 48u, 0>;
using RndLin2 = RndLin<TMRND_ULONG,       178627919555669ull,   1420217663636021ull, 0ull, 16u, 48u, 1>;
using RndLin3 = RndLin<TMRND_ULONG,         3638238676099ull,6441555549709350607ull, 0ull, 16u, 48u, 2>;
using RndLin4 = RndLin<TMRND_ULONG,       965572862617007ull,    661186099983727ull, 0ull, 11u, 53u, 1>;
using RndLin5 = RndLin<TMRND_ULONG,       661186099983727ull,   3390980202202013ull, 0ull,  8u, 56u, 1>;
using RndLin6 = RndLin<TMRND_ULONGLONG,  2018814029453857ull,   2082947326556573ull, 0ull, 32u, 96u, 0>;

