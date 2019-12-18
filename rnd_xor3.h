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
/// @created on 2019-12-08 02:55:33 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token d0a10b22-ab31-417d-a98f-41016d5bdb17                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <MxCPP/mx_array.h>

#include "defs.h"
#include "rnd_base.h"

template<typename TRnd, TMRND_UINT SIZE1, TMRND_UINT SIZE2, TMRND_UINT SIZE3>
class RndXor3 : public RndBase {
private:
    using TBuff = MxArray<TMRND_ULONG,SIZE1+SIZE2+SIZE3>;
    TBuff x;
    TMRND_UINT i1,i2,i3;

public:
    RndXor3( CMRND_ULONG __sd ) {
        seed( __sd );
    }
    void seed( CMRND_ULONG __sd ) {
        TRnd rnd(__sd);
        for( TMRND_UINT i=0 ; i<2 ; i++ ) {
            for( TMRND_UINT j=0 ; j<SIZE1+SIZE2+SIZE3 ; j++ ) {
                x[j] = (x[j]<<32) | (rnd() & 0xFFFFFFFFu);
            }
        }
        i1 = SIZE1 - 1;
        i2 = SIZE1 + SIZE2 - 1;
        i3 = SIZE1 + SIZE2 + SIZE3 - 1;
    }
    TYPE_RESULT operator()() {
        if( ++i1 >= SIZE1                 ) i1 = 0;
        if( ++i2 >= SIZE1 + SIZE2         ) i2 = SIZE1;
        if( ++i3 >= SIZE1 + SIZE2 + SIZE3 ) i3 = SIZE1 + SIZE2;
        return x[i1] + x[i2] + x[i3];
    }
};

