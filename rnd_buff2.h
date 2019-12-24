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
/// @created on 2019-12-24 20:49:20 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 855198e8-ab34-4618-a2f2-42ee015c6d1a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once
#include <new>
#include "rnd.h"



//MM: Attention: It is opposite of the good random number generator ;-)
//MM: It is pseudo random number generator with the double cyclic buffer. It work fast
//MM: but numbers are worse(!!!) than with class TRnd.
template<CMRND_UINT SIZE1, CMRND_UINT SIZE2, CMRND_UINT SIZE3, CMRND_UINT SIZE4>
class RndBuff2 {
private:
    TRnd        &rnd;       // Pseudo random number generator.
    TMRND_UINT  min;        // Min range.
    TMRND_UINT  max;        // Max range.
    TMRND_UINT *const buff; // N-Cyclic buffer to number generator.
    TMRND_UINT  select;     // Select first or second buffer.

    const TRnd::TYPE_RESULT *ptr[4];
    const TRnd::TYPE_RESULT *end[4];
    const TRnd::TYPE_RESULT *start[4];

private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2+SIZE3+SIZE4 ; i++ ) {
            buff[i] = rnd.range(min,max);
        }
    }

public:
    RndBuff2(TRnd &rnd, CMRND_UINT min=0, CMRND_UINT max=0) : rnd(rnd), buff(new TRnd::TYPE_RESULT[SIZE1+SIZE2+SIZE3+SIZE4]) {
        ptr[0] = end[0] = buff   + SIZE1;
        ptr[1] = end[1] = end[0] + SIZE2;
        ptr[2] = end[2] = end[1] + SIZE3;
        ptr[3] = end[3] = end[2] + SIZE4;
        start[0] = buff;
        start[1] = start[0] + SIZE1;
        start[2] = start[1] + SIZE2;
        start[3] = start[2] + SIZE3;
        setMinMax(min,max);
    }

    RndBuff2(const RndBuff2& other) : rnd(other.rnd) {
        this->min = other.min;
        this->max = other.max;
        for( TMRND_UINT i=0 ; i<4 ; i++ ) {
            ptr[i] = buff + (other.ptr[i] - other.buff);
        }
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2+SIZE3+SIZE4 ; i++ ) {
            buff[i] = other.buff[i];
        }
    }

    RndBuff2& operator = (const RndBuff2& other) {
        return *( new(this)RndBuff2(other) );
    }

    ~RndBuff2() {
        delete[] buff;
    }

    void setMinMax(CMRND_UINT min, CMRND_UINT max) {
        this->min = min;
        this->max = max;
        for( TMRND_UINT i=0 ; i<4 ; i++ ) {
            this->ptr[i] = this->end[i];
        }
        select = 0;
    }

    TRnd::TYPE_RESULT operator()() {
        select &= 3;
        if( ptr[select] == end[select] ) {
            if( ptr[0] == end[0] && ptr[1] == end[1] && ptr[2] == end[2] && ptr[3] == end[3] ) {
                reset();
            }
            ptr[select] = start[select];
        }
        return *ptr[select++]++;
    }

};





//template<CMRND_UINT SIZE1, CMRND_UINT SIZE2, CMRND_UINT SIZE3, CMRND_UINT SIZE4>
//class RndBuff2 {
//private:
//    TRnd        &rnd;       // Pseudo random number generator.
//    TMRND_UINT  min;        // Min range.
//    TMRND_UINT  max;        // Max range.
//    TMRND_UINT *const buff; // N-Cyclic buffer to number generator.
//    TMRND_UINT  select;     // Select first or second buffer.

//    const TRnd::TYPE_RESULT *i1;
//    const TRnd::TYPE_RESULT *i2;
//    const TRnd::TYPE_RESULT *i3;
//    const TRnd::TYPE_RESULT *i4;
//    const TRnd::TYPE_RESULT *const end1;
//    const TRnd::TYPE_RESULT *const end2;
//    const TRnd::TYPE_RESULT *const end3;
//    const TRnd::TYPE_RESULT *const end4;

//private:
//    void reset() {
//        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2+SIZE3+SIZE4 ; i++ ) {
//            buff[i] = rnd.range(min,max);
//        }
//    }

//public:
//    RndBuff2(TRnd &rnd, CMRND_UINT min=0, CMRND_UINT max=0) : rnd(rnd), buff(new TRnd::TYPE_RESULT[SIZE1+SIZE2+SIZE3+SIZE4]), end1(buff+SIZE1), end2(buff+SIZE1+SIZE2),end3(buff+SIZE1+SIZE2+SIZE3),end4(buff+SIZE1+SIZE2+SIZE3+SIZE4) {
//        setMinMax(min,max);
//    }

//    RndBuff2(const RndBuff2& other) : rnd(other.rnd), end1(end1), end2(end2), end3(end3), end4(end4) {
//        this->min = other.min;
//        this->max = other.max;
//        this->i1  = this->buff + (other.i1 - other.buff);
//        this->i2  = this->buff + (other.i2 - other.buff);
//        this->i3  = this->buff + (other.i3 - other.buff);
//        this->i4  = this->buff + (other.i4 - other.buff);
//        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2+SIZE3+SIZE4 ; i++ ) {
//            buff[i] = other.buff[i];
//        }
//    }

//    RndBuff2& operator = (const RndBuff2& other) {
//        return *( new(this)RndBuff2(other) );
//    }

//    ~RndBuff2() {
//        delete[] buff;
//    }

//    void setMinMax(CMRND_UINT min, CMRND_UINT max) {
//        this->min = min;
//        this->max = max;
//        i1 = end1;
//        i2 = end2;
//        i3 = end3;
//        i4 = end4;
//        select = 0;
//    }

//    TRnd::TYPE_RESULT operator()() {
//        switch( 3 & select++) {
//            case 0:
//                if( i1 == end1 ) {
//                    if( i2 == end2 && i3 == end3 && i4 == end4 ) {
//                        reset();
//                    }
//                    i1 = buff;
//                }
//                return *i1++;
//            case 1:
//                if( i2 == end2 ) {
//                    if( i1 == end1 && i3 == end3 && i4 == end4 ) {
//                        reset();
//                    }
//                    i2 = end1;
//                }
//                return *i2++;
//            case 2:
//                if( i3 == end3 ) {
//                    if( i1 == end1 && i2 == end2 && i4 == end4 ) {
//                        reset();
//                    }
//                    i3 = end2;
//                }
//                return *i3++;
//            case 3:
//                if( i4 == end4 ) {
//                    if( i1 == end1 && i2 == end2 && i3 == end3 ) {
//                        reset();
//                    }
//                    i4 = end3;
//                }
//                return *i4++;
//        }
//    }

//};
