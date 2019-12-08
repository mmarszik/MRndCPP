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
/// @created on 2019-12-08 02:55:21 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 4a60ad85-9b46-4af7-8112-0fa49d6d967f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "defs.h"
#include "m_array.h"
#include "rnd_base.h"

template<typename TRnd, utyp SIZE1, utyp SIZE2>
class RndXor2 : public RndBase {
private:
    using TBuff = MArray<ultyp,SIZE1+SIZE2>;
    TBuff x;
    utyp i1,i2;

public:
    RndXor2( cultyp __sd ) {
        seed( __sd );
    }
    void seed( cultyp __sd ) {
        TRnd rnd(__sd);
        for( utyp i=0 ; i<4 ; i++ ) {
            for( utyp j=0 ; j<SIZE1+SIZE2 ; j++ ) {
                x[j] = (x[j]<<16) | (rnd() & 0xFFFF);
            }
        }
        i1 = SIZE1 - 1;
        i2 = SIZE1 + SIZE2 - 1;
    }
    result_type operator()() {
        if( ++i1 >= SIZE1        ) i1 = 0;
        if( ++i2 >= SIZE1 + SIZE2) i2 = SIZE1;
        return x[i1] ^ x[i2];
    }
};

