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

#include "include_rnd.h"
#include <MxCPP/mx_array.h>

namespace MRnd {

template<CMRND_U32 SIZE1, CMRND_U32 SIZE2, CMRND_U32 RESET=SIZE1*SIZE2*2>
class RndFBuff1 {
private:
    using TBuff1 = MxArray<TMRND_F64,SIZE1+SIZE2>;
private:
    TMRnd       &rnd;         // Pseudo random number generator.
    TMRND_F64   min,max;     // Min-max range.
    TBuff1      buff;        // N-Cyclic buffers to number generator.
    TMRND_U32   select;      // Select first or second buffer.
    CMRND_F64  *i1, *i2;
    CMRND_F64  *const end1, *const end2;
    TMRND_U32   i3;

private:
    void reset() {
        for( TMRND_U32 i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd.getFloat(min,max);
        }
    }

public:
    RndFBuff1(TMRnd &rnd, CMRND_F64  min=0, CMRND_F64  max=0) : rnd(rnd), end1(&buff[0]+SIZE1), end2(end1+SIZE2) {
        setMinMax(min,max);
    }
    RndFBuff1(const RndFBuff1& other) : rnd(other.rnd), end1(&buff[0]+SIZE1), end2(end1+SIZE2) {
        this->min = other.min;
        this->max = other.max;
        this->i1  = this->buff + (other.i1 - &other.buff[0]);
        this->i2  = this->buff + (other.i2 - &other.buff[0]);
        this->i3  = other.i3;
        this->select = other.select;
        for( TMRND_U32 i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = other.buff[i];
        }
    }
    RndFBuff1& operator = (const RndFBuff1& other) {
        return *( new(this)RndFBuff1(other) );
    }
    void setMinMax(CMRND_F64  min, CMRND_F64  max) {
        this->min = min;
        this->max = max;
        i1 = end1;
        i2 = end2;
        i3 = RESET;
        select = 1;
    }
    TMRND_F64  operator()() {
        if( RESET == SIZE1*SIZE2*2 ) {
            if( 1 & select++ ) {
                if( i1 == end1 ) {
                    i1 = &buff[0];
                    if( i2 == end2 ) {
                        reset();
                    }
                }
                return *i1++;
            } else {
                if( i2 == end2 ) i2 = end1;
                return *i2++;
            }
        } else {
            if( i3++ >= RESET ) {
                i3=1;
                reset();
            }
            if( 1 & select++ ) {
                if( i1 == end1 ) i1 = &buff[0];
                return *i1++;
            } else {
                if( i2 == end2 ) i2 = end1;
                return *i2++;
            }
        }
    }
};

}
