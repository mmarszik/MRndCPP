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
/// @created on 2019-12-23 11:00:53 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 5a546290-47b4-4681-94bd-b65b92f057e3                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd.h"

template<CMRND_UINT SIZE1, CMRND_UINT SIZE2>
class RndFBuff1 {
private:
    using TBuff1 = MxArray<TMRND_FLOAT,SIZE1>;
    using TBuff2 = MxArray<TMRND_FLOAT,SIZE2>;
    TRnd        &rnd;   // Pseudo random number generator.
    TMRND_FLOAT min;    // Min range.
    TMRND_FLOAT max;    // Max range.
    TBuff1      buf1;   // N-Cyclic buffer to number generator.
    TBuff2      buf2;   // N-Cyclic buffer to number generator.
    TMRND_UINT  i1,i2;  // Index to the next given value.
    TMRND_UINT  select; // Select first or second buffer.

private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1 ; i++ ) {
            buf1[i] = rnd.getFloat(min,max);
        }
        for( TMRND_UINT i=0 ; i<SIZE2 ; i++ ) {
            buf2[i] = rnd.getFloat(min,max);
        }
    }

public:
    RndFBuff1(TRnd &rnd, CMRND_FLOAT min=0, CMRND_FLOAT max=0) : rnd(rnd) {
        setMinMax(min,max);
    }
    RndFBuff1( const RndFBuff1& other ) : rnd(other.rnd) {
        setMinMax( other.min, other.max );
    }
    RndFBuff1& operator = (const RndFBuff1& other) {
        return *( new(this)RndFBuff1(other) );
    }
    void setMinMax(CMRND_FLOAT min, CMRND_FLOAT max) {
        this->min = min;
        this->max = max;
        i1 = SIZE1;
        i2 = SIZE2;
        select = 0;
    }
    TMRND_FLOAT operator()() {
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



