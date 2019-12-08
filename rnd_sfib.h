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

#include "rnd_lin.h"
#include "m_array.h"
#include "rnd_base.h"

template<typename T, utyp SIZE, utyp R, utyp ROT=1, utyp SHIFT=0, utyp INIT=4>
class RndSFib : public RndBase {
private:
    using TBuff = MArray<T,SIZE>;
    TBuff buff;
    utyp  i1, i2;

private:
    static T rot( const T v ) {
        return ( v << ROT ) | ( v >> ( std::numeric_limits<T>::digits - ROT ) );
    }

public:
    RndSFib(){}
    RndSFib(const T __sd) {
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
        return ( buff[i1] += rot(buff[i2]) ) >> SHIFT;
    }
};

using RndSFib0 =  RndSFib< ultyp, 9689u, 4187u, 1u, 0u>;

