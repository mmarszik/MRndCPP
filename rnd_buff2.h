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
/// @created on 2019-12-08 02:52:20 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 9db9b7bd-efdb-4f67-b804-c829fecb22c2                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd.h"
#include "m_array.h"

//MM: Attention: It is opposite of the good random number generator ;-)
//MM: It is other pseudo random number generator with cyclic buffer. It
//MM: work fast, but numbers are worse(!!!) than with class TRnd.
//MM: Attention, SIZE and REPEAT will be used as binary offset,
//MM: SIZE = 1 << SIZE  and  REPAT = 1 << REPAT.
template<utyp SIZE, utyp REPEAT, utyp MIN, utyp max>
class RndBuff2 {
private:
    using TBuff = MArray< TRnd::result_type , 1<<SIZE >;
    cutyp max;    // Max range.
    TRnd  &rnd;   // Pseudo random number generator.
    TBuff buf;    // N-Cyclic buffer to number generator.
    utyp  next;   // Index to the next given value.

public:

    RndBuff2( TRnd &rnd, cutyp max ) : rnd(rnd), max(max) {
        next = 0;
        while( next<SIZE ) {
            buf[ next++ ] = rnd() % (max-MIN+1) + MIN;
        }
    }

    TRnd::result_type operator()() {
        if( next >= SIZE ) {
            next = 0;
        }
        if( ! (next & ((1<<REPEAT)-1)) ) {
            buf[ rnd() & ((1<<SIZE)-1) ] = rnd() % (max - MIN + 1) + MIN;
        }
        return buf[ next ++ ];
    }

};

template<utyp MIN>using TRndBuff = RndBuff2<20u, 4u, MIN>;

