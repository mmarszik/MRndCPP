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
#include <MxCPP/mx_array.h>

template<CMRND_UINT SIZE1, CMRND_UINT SIZE2>
class RndFBuff1 {
private:
    using TBuff1 = MxArray<TMRND_FLOAT,SIZE1+SIZE2>;
private:
    TRnd          &rnd;        // Pseudo random number generator.
    TMRND_FLOAT   min,max;     // Min-max range.
    TBuff1        buff;        // N-Cyclic buffers to number generator.
    TMRND_UINT    select;      // Select first or second buffer.
    CMRND_FLOAT   *i1, *i2;
    CMRND_FLOAT   *const end1, *const end2;

private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd.getFloat(min,max);
        }
    }

public:
    RndFBuff1(TRnd &rnd, CMRND_FLOAT  min=0, CMRND_FLOAT  max=0) : rnd(rnd), end1(&buff[0]+SIZE1), end2(end1+SIZE2) {
        setMinMax(min,max);
    }
    RndFBuff1(const RndFBuff1& other) : rnd(other.rnd), end1(&buff[0]+SIZE1), end2(end1+SIZE2) {
        this->min = other.min;
        this->max = other.max;
        this->i1  = this->buff + (other.i1 - other.buff);
        this->i2  = this->buff + (other.i2 - other.buff);
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = other.buff[i];
        }
    }
    RndFBuff1& operator = (const RndFBuff1& other) {
        return *( new(this)RndFBuff1(other) );
    }
    ~RndFBuff1() {
        delete[] buff;
    }
    void setMinMax(CMRND_FLOAT  min, CMRND_FLOAT  max) {
        this->min = min;
        this->max = max;
        i1 = end1;
        i2 = end2;
        select = 0;
    }
    TMRND_FLOAT  operator()() {
        if( 1 & select++ ) {
            if( i1 == end1 ) {
                if( i2 == end2 ) {
                    reset();
                }
                i1 = &buff[0];
            }
            return *i1++;
        } else {
            if( i2 == end2 ) {
                if( i1 == end1 ) {
                    reset();
                }
                i2 = end1;
            }
            return *i2++;
        }
    }
};

