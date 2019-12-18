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

#include <MxCPP/mx_array.h>

#include "rnd_lin.h"
#include "rnd_base.h"

template<typename T, TMRND_UINT SIZE, TMRND_UINT R, T M1, T M2, T A, T MOD=0, TMRND_UINT INIT=4, TMRND_UINT SHIFT=0>
class RndFib : public RndBase {
private:
    using TBuff = MxArray<T,SIZE>;
    TBuff buff;
    TMRND_UINT  i1, i2;
public:
    RndFib(){}
    RndFib(const T __sd) {
        seed(__sd);
    }
    void seed(const T __sd) {
        RndLin2b rnd( __sd );
        for( TMRND_UINT i=0 ; i<4 ; i++ ) {
            for( TMRND_UINT j=0 ; j<SIZE ; j++ ) {
                buff[j] <<= 16;
                buff[j] ^= rnd();
            }
        }
        i1 = SIZE - 1;
        i2 = SIZE - 1 - R;
        for( TMRND_UINT i=0 ; i<SIZE*INIT ; i++ ) {
            (*this)();
        }
    }
    TYPE_RESULT operator()() {
        if( ++i1 >= SIZE ) i1 = 0;
        if( ++i2 >= SIZE ) i2 = 0;
        if( MOD == 0 ) {
            return ( buff[i1] = buff[i1] * M1 + buff[i2] * M2 + A ) >> SHIFT;
        } else {
            return ( buff[i1] = (buff[i1] * M1 + buff[i2] * M2 + A) % MOD ) >> SHIFT;
        }
    }
};

using RndFib0  =  RndFib< TMRND_ULONG,      55u,  24u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 5u >;
using RndFib0a =  RndFib< TMRND_ULONG,      55u,  24u,  467215392725233709ull,  611270373676516397ull,  869843207682474811ull,  0ull, 4u, 5u >;
using RndFib1  =  RndFib< TMRND_ULONG,      71u,  65u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 5u >;
using RndFib1a =  RndFib< TMRND_ULONG,      71u,  65u,  115863979857357701ull,  629390526482068033ull,  657629269220325019ull,  0ull, 4u, 5u >;
using RndFib2  =  RndFib< TMRND_ULONG,     521u, 353u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 5u >;
using RndFib2a =  RndFib< TMRND_ULONG,     521u, 353u, 4112492776315134143ull, 2856502054400409791ull, 4455332773284362119ull,  0ull, 4u, 5u >;
using RndFib3  =  RndFib< TMRND_ULONG,     607u, 334u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 5u >;
using RndFib3a =  RndFib< TMRND_ULONG,     607u, 334u, 1438097939015544337ull, 2095838886465443359ull, 1126833020129680393ull,  0ull, 4u, 5u >;

using RndFib4   =  RndFib< TMRND_ULONGLONG, 53u, 9u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 13u >;
using RndFib5   =  RndFib< TMRND_ULONGLONG, 52u, 31u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 4u >;
using RndFib6   =  RndFib< TMRND_ULONGLONG, 82u, 56u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 51u >;
using RndFib7   =  RndFib< TMRND_ULONGLONG, 89u, 88u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 0u >;
using RndFib8   =  RndFib< TMRND_ULONGLONG, 88u, 73u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 17u >;
using RndFib9   =  RndFib< TMRND_ULONGLONG, 20u, 3u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 32u >;
using RndFib10  =  RndFib< TMRND_ULONGLONG, 58u, 19u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 58u >;
using RndFib11  =  RndFib< TMRND_ULONGLONG, 84u, 9u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 20u >;
using RndFib12  =  RndFib< TMRND_ULONGLONG, 70u, 51u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 60u >;
using RndFib13  =  RndFib< TMRND_ULONGLONG, 75u, 9u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 23u >;
using RndFib14  =  RndFib< TMRND_ULONGLONG, 97u, 36u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 0u >;
using RndFib15  =  RndFib< TMRND_ULONGLONG, 97u, 47u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 90u >;
using RndFib16  =  RndFib< TMRND_ULONGLONG, 69u, 68u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 64u >;
using RndFib17  =  RndFib< TMRND_ULONGLONG, 76u, 47u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 55u >;
using RndFib18  =  RndFib< TMRND_ULONGLONG, 62u, 37u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 55u >;
using RndFib19  =  RndFib< TMRND_ULONGLONG, 80u, 63u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 19u >;
using RndFib20  =  RndFib< TMRND_ULONGLONG, 73u, 19u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 88u >;


