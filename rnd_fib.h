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

#include "rnd_lin.h"
#include "m_array.h"
#include "rnd_base.h"

template<typename T, utyp SIZE, utyp R, T M1, T M2, T A, T MOD=0, utyp INIT=4, utyp SHIFT=0>
class RndFib : public RndBase {
private:
    using TBuff = MArray<T,SIZE>;
    TBuff buff;
    utyp  i1, i2;
public:
    RndFib(){}
    RndFib(const T __sd) {
        seed(__sd);
    }
    void seed(const T __sd) {
        RndLin2b rnd( __sd );
        for( utyp i=0 ; i<4 ; i++ ) {
            for( utyp j=0 ; j<SIZE ; j++ ) {
                buff[j] <<= 16;
                buff[j] ^= rnd();
            }
        }
        i1 = SIZE - 1;
        i2 = SIZE - 1 - R;
        for( utyp i=0 ; i<SIZE*INIT ; i++ ) {
            (*this)();
        }
    }
    result_type operator()() {
        if( ++i1 >= SIZE ) i1 = 0;
        if( ++i2 >= SIZE ) i2 = 0;
        if( MOD == 0 ) {
            return ( buff[i1] = buff[i1] * M1 + buff[i2] * M2 + A ) >> SHIFT;
        } else {
            return ( buff[i1] = (buff[i1] * M1 + buff[i2] * M2 + A) % MOD ) >> SHIFT;
        }
    }
};

using RndFib0  =  RndFib< ultyp,  55u,  24u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 5u >;
using RndFib0a =  RndFib< ultyp,  55u,  24u,  467215392725233709ull,  611270373676516397ull,  869843207682474811ull,  0ull, 4u, 5u >;
using RndFib1  =  RndFib< ultyp,  71u,  65u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 5u >;
using RndFib1a =  RndFib< ultyp,  71u,  65u,  115863979857357701ull,  629390526482068033ull,  657629269220325019ull,  0ull, 4u, 5u >;
using RndFib2  =  RndFib< ultyp, 521u, 353u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 5u >;
using RndFib2a =  RndFib< ultyp, 521u, 353u, 4112492776315134143ull, 2856502054400409791ull, 4455332773284362119ull,  0ull, 4u, 5u >;
using RndFib3  =  RndFib< ultyp, 607u, 334u,                   1ull,                   1ull,                   0ull,  0ull, 4u, 5u >;
using RndFib3a =  RndFib< ultyp, 607u, 334u, 1438097939015544337ull, 2095838886465443359ull, 1126833020129680393ull,  0ull, 4u, 5u >;

