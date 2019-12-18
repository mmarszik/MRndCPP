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
/// @created on 2019-12-08 02:54:44 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8d12b7d9-d14f-4ffd-a295-b5accf826291                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <MxCPP/mx_array.h>

#include "rnd_lin.h"
#include "rnd_base.h"

template<typename T, TMRND_UINT SIZE, TMRND_UINT R, TMRND_UINT ROT=1, TMRND_UINT SHIFT=0, TMRND_UINT INIT=4>
class RndSFib : public RndBase {
private:
    using TBuff = MxArray<T,SIZE>;
    TBuff buff;
    TMRND_UINT  i1, i2;

private:
    static T rot( const T v ) {
        return ( v << ROT ) | ( v >> ( MLimits<T>::digits() - ROT ) );
    }

public:
    RndSFib(){}
    RndSFib(const T __sd) {
        seed(__sd);
    }
    void seed(const T __sd) {
        RndLin2b rnd( __sd );
        CMRND_UINT INIT_BITS = 16;
        for( TMRND_UINT i=0 ; i<sizeof(T)*CHAR_BIT/INIT_BITS ; i++ ) {
            for( TMRND_UINT j=0 ; j<SIZE ; j++ ) {
                buff[j] <<= INIT_BITS;
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
        return ( buff[i1] += rot(buff[i2]) ) >> SHIFT;
    }
};

using RndSFib0 =  RndSFib< TMRND_ULONG, 9689u, 4187u, 1u, 0u>;

