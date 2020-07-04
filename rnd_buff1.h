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
#include <new>
#include "include_rnd.h"
#include <MxCPP/mx_array.h>

namespace MRnd {

//MM: Attention: It is opposite of the good random number generator ;-)
//MM: It is pseudo random number generator with the double cyclic buffer. It work fast
//MM: but numbers are worse(!!!) than with class TRnd.

//#define TMRND_RND_BUFF_V1
//#define TMRND_RND_BUFF_V2
//#define TMRND_RND_BUFF_V3

#if defined(TMRND_RND_BUFF_V1)

template<CMRND_UINT SIZE1, CMRND_UINT SIZE2, CMRND_UINT RESET=SIZE1*SIZE2*2>
class RndBuff1 {
private:
    TRnd           &rnd;        // Pseudo random number generator.
    TMRND_IRESULT  min,max;     // Min-max range.
    TMRND_IRESULT  *const buff; // N-Cyclic buffers to number generator.
    TMRND_UINT     select;      // Select first or second buffer.
    CMRND_IRESULT  *i1, *i2;
    CMRND_IRESULT  *const end1, *const end2;
    TMRND_UINT     i3;
private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd.range(min,max);
        }
    }
public:
    RndBuff1(TRnd &rnd, CMRND_IRESULT min=0, CMRND_IRESULT max=0) : rnd(rnd), buff(new TMRND_IRESULT[SIZE1+SIZE2]), end1(buff+SIZE1), end2(end1+SIZE2) {
        setMinMax(min,max);
    }
    RndBuff1(const RndBuff1& other) : rnd(other.rnd), buff(new TMRND_IRESULT[SIZE1+SIZE2]), end1(buff+SIZE1), end2(end1+SIZE2) {
        this->min = other.min;
        this->max = other.max;
        this->i1  = this->buff + (other.i1 - other.buff);
        this->i2  = this->buff + (other.i2 - other.buff);
        this->i3  = other.i3;
        this->select = other.select;
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = other.buff[i];
        }
    }
    RndBuff1& operator = (const RndBuff1& other) {
        delete[] buff;
        return *( new(this)RndBuff1(other) );
    }
    ~RndBuff1() {
        delete[] buff;
    }
    void setMinMax(CMRND_IRESULT min, CMRND_IRESULT max) {
        this->min = min;
        this->max = max;
        i1 = end1;
        i2 = end2;
        i3 = RESET;
        select = 1;
    }
    TMRND_IRESULT operator()() {
        if( RESET == SIZE1*SIZE2*2 ) {
            if( 1 & select++ ) {
                if( i1 == end1 ) {
                    i1 = buff;
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
                if( i1 == end1 ) i1 = buff;
                return *i1++;
            } else {
                if( i2 == end2 ) i2 = end1;
                return *i2++;
            }
        }
    }

};

#elif defined(TMRND_RND_BUFF_V2)

template<CMRND_UINT SIZE1, CMRND_UINT SIZE2, CMRND_UINT RESET=SIZE1*SIZE2*2>
class RndBuff1 {
private:
    using TBuff1 = MxArray<TMRND_IRESULT,SIZE1+SIZE2>;
private:
    TRnd           &rnd;          // Pseudo random number generator.
    TMRND_IRESULT  min, max;      // The range.
    TBuff1         buff;          // N-Cyclic buffer to number generator.
    TMRND_UINT     i1,i2, select; // Select first or second buffer.
    TMRND_UINT     i3;
private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd.range(min,max);
        }
    }
public:
    RndBuff1(TRnd &rnd, CMRND_IRESULT min=0, CMRND_IRESULT max=0) : rnd(rnd) {
        setMinMax(min,max);
    }
    RndBuff1(const RndBuff1& other) : rnd(other.rnd) {
        this->min = other.min;
        this->max = other.max;
        this->i1 = other.i1;
        this->i2 = other.i2;
        this->i3 = other.i3;
        this->select = other.select;
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            this->buff[i] = other.buff[i];
        }
    }
    RndBuff1& operator = (const RndBuff1& other) {
        return *( new(this)RndBuff1(other) );
    }
    void setMinMax(CMRND_IRESULT min, CMRND_IRESULT max) {
        this->min = min;
        this->max = max;
        i1 = SIZE1;
        i2 = SIZE1+SIZE2;
        i3 = RESET;
        select = 1;
    }
    TMRND_IRESULT operator()() {
        if( RESET == SIZE1*SIZE2*2 ) {
            if( 1 & select++ ) {
                if( i1 == SIZE1 ) {
                    i1 = 0;
                    if( i2 == SIZE1+SIZE2 ) {
                        reset();
                    }
                }
                return buff[i1++];
            } else {
                if( i2 == SIZE1+SIZE2 ) i2 = SIZE1;
                return buff[i2++];
            }
        } else {
            if( i3++ >= RESET ) {
                i3=1;
                reset();
            }
            if( 1 & select++ ) {
                if( i1 == SIZE1 ) i1 = 0;
                return buff[i1++];
            } else {
                if( i2 == SIZE1+SIZE2 ) i2 = SIZE1;
                return buff[i2++];
            }
        }
    }
};

#else

template<CMRND_U32 SIZE1, CMRND_U32 SIZE2, CMRND_U32 RESET=SIZE1*SIZE2*2>
class RndBuff1 {
private:
    using TBuff1 = MxArray<TMRND_IRESULT,SIZE1+SIZE2>;
private:
    TMRND_U32      i3;
    TRnd           &rnd;        // Pseudo random number generator.
    TMRND_IRESULT  min, max;    // Min range.
    TBuff1         buff;        // N-Cyclic buffer to number generator.
    TMRND_U32      select;      // Select first or second buffer.
    CMRND_IRESULT  *i1, *i2;
    CMRND_IRESULT  *const end1, *const end2;

private:
    void reset() {
        if( min != max ) {
            for( TMRND_U32 i=0 ; i<SIZE1+SIZE2 ; i++ ) {
                buff[i] = rnd.range(min,max);
            }
        } else {
            for( TMRND_U32 i=0 ; i<SIZE1+SIZE2 ; i++ ) {
                buff[i] = rnd();
            }
        }
    }
public:
    RndBuff1(TRnd &rnd, CMRND_IRESULT min=0, CMRND_IRESULT max=0) : rnd(rnd), end1(&buff[0]+SIZE1), end2(end1+SIZE2) {
        setMinMax(min,max);
    }
    RndBuff1(const RndBuff1& other) : rnd(other.rnd), end1(other.end1), end2(other.end2) {
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
    RndBuff1& operator = (const RndBuff1& other) {
        return *( new(this)RndBuff1(other) );
    }
    void setMinMax(CMRND_IRESULT min, CMRND_IRESULT max) {
        this->min = min;
        this->max = max;
        i1 = end1;
        i2 = end2;
        i3 = RESET;
        select = 1;
    }
    TMRND_IRESULT operator()() {
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


#endif
}
