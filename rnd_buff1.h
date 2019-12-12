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
#include "m_array.h"

//MM: Attention: It is opposite of the good random number generator ;-)
//MM: It is pseudo random number generator with cyclic buffer. It work fast
//MM: but numbers are worse(!!!) than with class TRnd. Next pseudo random
//MM: numbers are given from buffer, each pseudo random number is given REPEAT
//MM: times. So the big value of REPEAT and small value of SIZE implicite the
//MM  worse pseudo random numbers, but accelerate the generate process their.
template<TMRND_UINT SIZE, TMRND_UINT REPEAT, TMRND_UINT MIN, TMRND_UINT max>
class RndBuff1 {
private:
    using TBuff = MxArray<TRnd::TYPE_RESULT,SIZE>;
    CMRND_UINT  max;    // Max range.
    TRnd        &rnd;   // Pseudo random number generator.
    TBuff       buf;    // N-Cyclic buffer to number generator.
    TMRND_UINT  next;   // Index to the next given value.
    TMRND_UINT  repeat; // Number repeat to reset buffer.

private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE ; i++ ) {
            buf[ i ] = rnd() % (max-MIN+1) + MIN;
        }
        repeat = REPEAT;
    }

public:
    RndBuff1( TRnd &rnd, CMRND_UINT max ) : rnd(rnd), max(max) {
        next   = SIZE-1;
        repeat = 1;
    }
    TRnd::TYPE_RESULT operator()() {
        if( ++next == SIZE ) {
            next = 0;
            if( --repeat == 0 ) {
                reset();
            }
        }
        return buf[ next ];
    }
};

template<TMRND_UINT MIN>
using TRndBuff = RndBuff1<1u<<20, 1u<<4, MIN>;

