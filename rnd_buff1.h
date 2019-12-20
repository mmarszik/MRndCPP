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
/// @created on 2019-12-08 02:51:18 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token db6d6b21-6f78-4423-b0e7-40e0049809ef                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd.h"
#include <MxCPP/mx_array.h>

//MM: Attention: It is opposite of the good random number generator ;-)
//MM: It is pseudo random number generator with the double cyclic buffer. It work fast
//MM: but numbers are worse(!!!) than with class TRnd.
template<CMRND_UINT SIZE1, CMRND_UINT SIZE2>
class RndBuff1 {
private:
    using TBuff1 = MxArray<TRnd::TYPE_RESULT,SIZE1>;
    using TBuff2 = MxArray<TRnd::TYPE_RESULT,SIZE2>;
    TRnd        &rnd;   // Pseudo random number generator.
    TMRND_UINT  min;    // Min range.
    TMRND_UINT  max;    // Max range.
    TBuff1      buf1;   // N-Cyclic buffer to number generator.
    TBuff2      buf2;   // N-Cyclic buffer to number generator.
    TMRND_UINT  i1,i2;  // Index to the next given value.
    TMRND_UINT  select; // Select first or second buffer.

private:
    TRnd::TYPE_RESULT range() {
        return rnd() % ( max - min + 1 ) + min;
    }

    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1 ; i++ )
            buf1[i] = range();
        for( TMRND_UINT i=0 ; i<SIZE2 ; i++ )
            buf2[i] = range();
    }

public:
    RndBuff1( TRnd &rnd, CMRND_UINT min=0, CMRND_UINT max=0 ) : rnd(rnd) {
        setMinMax(min,max);
    }

    void setMinMax(CMRND_UINT min, CMRND_UINT max ) {
        this->min = min;
        this->max = max;
        i1 = SIZE1;
        i2 = SIZE2;
        select = 0;
    }

    TRnd::TYPE_RESULT operator()() {
        if( i1 == SIZE1 && i2 == SIZE2 ) {
            reset();
        }
        if( 1 & select++ ) {
            if( i1 == SIZE1 ) {
                i1 = 0;
            }
            return buf1[i1++];
        }
        if( i2 == SIZE2 ) {
            i2 = 0;
        }
        return buf2[i2++];
    }

};


using TRndBuff = RndBuff1<4159, 3137>;

