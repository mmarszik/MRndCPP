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
#include "rnd.h"

//MM: Attention: It is opposite of the good random number generator ;-)
//MM: It is pseudo random number generator with the double cyclic buffer. It work fast
//MM: but numbers are worse(!!!) than with class TRnd.
template<CMRND_UINT SIZE1, CMRND_UINT SIZE2>
class RndBuff1 {
private:
    TRnd           &rnd;        // Pseudo random number generator.
    TMRND_IRESULT  min,max;     // Min-max range.
    TMRND_IRESULT  *const buff; // N-Cyclic buffers to number generator.
    TMRND_UINT     select;      // Select first or second buffer.
    CMRND_IRESULT  *i1, *i2;
    CMRND_IRESULT  *const end1, *const end2;

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
        select = 0;
    }

    TMRND_IRESULT operator()() {
        if( 1 & select++ ) {
            if( i1 == end1 ) {
                if( i2 == end2 ) {
                    reset();
                }
                i1 = buff;
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



//template<CMRND_UINT SIZE1, CMRND_UINT SIZE2>
//class RndBuff1 {
//private:
//    using TBuff1 = MxArray<TMRND_IRESULT,SIZE1>;
//    using TBuff2 = MxArray<TMRND_IRESULT,SIZE2>;
//    TRnd        &rnd;   // Pseudo random number generator.
//    TMRND_UINT  min;    // Min range.
//    TMRND_UINT  max;    // Max range.
//    TBuff1      buf1;   // N-Cyclic buffer to number generator.
//    TBuff2      buf2;   // N-Cyclic buffer to number generator.
//    TMRND_UINT  i1,i2;  // Index to the next given value.
//    TMRND_UINT  select; // Select first or second buffer.

//private:
//    void reset() {
//        for( TMRND_UINT i=0 ; i<SIZE1 ; i++ ) {
//            buf1[i] = rnd.range(min,max);
//        }
//        for( TMRND_UINT i=0 ; i<SIZE2 ; i++ ) {
//            buf2[i] = rnd.range(min,max);
//        }
//    }
//public:
//    RndBuff1( TRnd &rnd, CMRND_UINT min=0, CMRND_UINT max=0 ) : rnd(rnd) {
//        setMinMax(min,max);
//    }
//    RndBuff1( const RndBuff1& other ) : rnd(other.rnd) {
//        setMinMax( other.min, other.max );
//    }
//    RndBuff1& operator = (const RndBuff1& other) {
//        return *( new(this)RndBuff1(other) );
//    }
//    void setMinMax(CMRND_UINT min, CMRND_UINT max   ) {
//        this->min = min;
//        this->max = max;
//        i1 = SIZE1;
//        i2 = SIZE2;
//        select = 0;
//    }
//    TMRND_IRESULT operator()() {
//        if( i1 == SIZE1 && i2 == SIZE2 ) {
//            reset();
//        }
//        if( 1 & select++ ) {
//            if( i1 == SIZE1 ) {
//                i1 = 0;
//            }
//            return buf1[i1++];
//        }
//        if( i2 == SIZE2 ) {
//            i2 = 0;
//        }
//        return buf2[i2++];
//    }

//};



//template<CMRND_UINT SIZE1, CMRND_UINT SIZE2>
//class RndBuff1 {
//private:
//    using TBuff1 = MxArray<TMRND_IRESULT,SIZE1>;
//    using TBuff2 = MxArray<TMRND_IRESULT,SIZE2>;
//    TRnd        &rnd;   // Pseudo random number generator.
//    TMRND_UINT  min;    // Min range.
//    TMRND_UINT  max;    // Max range.
//    TBuff1      buf1;   // N-Cyclic buffer to number generator.
//    TBuff2      buf2;   // N-Cyclic buffer to number generator.
//    TMRND_UINT  select; // Select first or second buffer.

//    CMRND_IRESULT *i1;
//    CMRND_IRESULT *i2;
//    CMRND_IRESULT *const end1;
//    CMRND_IRESULT *const end2;


//private:
//    void reset() {
//        for( TMRND_UINT i=0 ; i<SIZE1 ; i++ ) {
//            buf1[i] = rnd.range(min,max);
//        }
//        for( TMRND_UINT i=0 ; i<SIZE2 ; i++ ) {
//            buf2[i] = rnd.range(min,max);
//        }
//    }
//public:
//    RndBuff1( TRnd &rnd, CMRND_UINT min=0, CMRND_UINT max=0 ) : rnd(rnd), end1(&buf1[0]+SIZE1), end2(&buf2[0]+SIZE2) {
//        setMinMax(min,max);
//    }
//    RndBuff1( const RndBuff1& other ) : rnd(other.rnd), end1(other.end1), end2(other.end2) {
//        setMinMax( other.min, other.max );
//    }
//    RndBuff1& operator = (const RndBuff1& other) {
//        return *( new(this)RndBuff1(other) );
//    }
//    void setMinMax(CMRND_UINT min, CMRND_UINT max   ) {
//        this->min = min;
//        this->max = max;
//        i1 = end1;
//        i2 = end2;
//        select = 0;
//    }
//    TMRND_IRESULT operator()() {
//        if( i1 == end1 && i2 == end2 ) {
//            reset();
//        }
//        if( 1 & select++ ) {
//            if( i1 == end1 ) {
//                i1 = buf1;
//            }
//            return *i1++;
//        }
//        if( i2 == end2 ) {
//            i2 = buf2;
//        }
//        return *i2++;
//    }

//};


//template<CMRND_UINT SIZE1, CMRND_UINT SIZE2>
//class RndBuff1 {
//private:
//    using TBuff1 = MxArray<TMRND_IRESULT,SIZE1>;
//    using TBuff2 = MxArray<TMRND_IRESULT,SIZE2>;
//    TRnd        &rnd;   // Pseudo random number generator.
//    TMRND_UINT  min;    // Min range.
//    TMRND_UINT  max;    // Max range.
//    TBuff1      buf1;   // N-Cyclic buffer to number generator.
//    TBuff2      buf2;   // N-Cyclic buffer to number generator.
//    TMRND_UINT  select; // Select first or second buffer.

//    CMRND_IRESULT *i1;
//    CMRND_IRESULT *i2;
//    CMRND_IRESULT *const end1;
//    CMRND_IRESULT *const end2;


//private:
//    void reset() {
//        for( TMRND_UINT i=0 ; i<SIZE1 ; i++ ) {
//            buf1[i] = rnd.range(min,max);
//        }
//        for( TMRND_UINT i=0 ; i<SIZE2 ; i++ ) {
//            buf2[i] = rnd.range(min,max);
//        }
//    }
//public:
//    RndBuff1( TRnd &rnd, CMRND_UINT min=0, CMRND_UINT max=0 ) : rnd(rnd), end1(&buf1[0]+SIZE1), end2(&buf2[0]+SIZE2) {
//        setMinMax(min,max);
//    }
//    RndBuff1( const RndBuff1& other ) : rnd(other.rnd), end1(other.end1), end2(other.end2) {
//        setMinMax( other.min, other.max );
//    }
//    RndBuff1& operator = (const RndBuff1& other) {
//        return *( new(this)RndBuff1(other) );
//    }
//    void setMinMax(CMRND_UINT min, CMRND_UINT max   ) {
//        this->min = min;
//        this->max = max;
//        i1 = end1;
//        i2 = end2;
//        select = 0;
//    }
//    TMRND_IRESULT operator()() {
//        if( 1 & select++ ) {
//            if( i1 == end1 ) {
//                if( i2 == end2 ) {
//                    reset();
//                }
//                i1 = buf1;
//            }
//            return *i1++;
//        }
//        if( i2 == end2 ) {
//            if( i1 == end1 ) {
//                reset();
//            }
//            i2 = buf2;
//        }
//        return *i2++;
//    }

//};



//template<CMRND_UINT SIZE1, CMRND_UINT SIZE2>
//class RndBuff1 {
//private:
//    using TBuff1 = MxArray<TMRND_IRESULT,SIZE1>;
//    using TBuff2 = MxArray<TMRND_IRESULT,SIZE2>;
//    TRnd        &rnd;   // Pseudo random number generator.
//    TMRND_UINT  min;    // Min range.
//    TMRND_UINT  max;    // Max range.
//    TBuff1      buf1;   // N-Cyclic buffer to number generator.
//    TBuff2      buf2;   // N-Cyclic buffer to number generator.
//    TMRND_UINT  select; // Select first or second buffer.
//    CMRND_IRESULT *i1;
//    CMRND_IRESULT *i2;
//    CMRND_IRESULT *const end1;
//    CMRND_IRESULT *const end2;
//private:
//    void reset() {
//        for( TMRND_UINT i=0 ; i<SIZE1 ; i++ ) {
//            buf1[i] = rnd.range(min,max);
//        }
//        for( TMRND_UINT i=0 ; i<SIZE2 ; i++ ) {
//            buf2[i] = rnd.range(min,max);
//        }
//    }
//public:
//    RndBuff1(TRnd &rnd, CMRND_UINT min=0, CMRND_UINT max=0) : rnd(rnd), end1(&buf1[0]+SIZE1), end2(&buf2[0]+SIZE2) {
//        setMinMax(min,max);
//    }
//    RndBuff1(const RndBuff1& other) : rnd(other.rnd), end1(other.end1), end2(other.end2) {
//        setMinMax( other.min, other.max );
//    }
//    RndBuff1& operator = (const RndBuff1& other) {
//        return *( new(this)RndBuff1(other) );
//    }
//    void setMinMax(CMRND_UINT min, CMRND_UINT max) {
//        this->min = min;
//        this->max = max;
//        i1 = end1;
//        i2 = end2;
//        select = 0;
//    }
//    TMRND_IRESULT operator()() {
//        if( 1 & select++ ) {
//            if( i1 == end1 ) {
//                if( i2 == end2 ) {
//                    reset();
//                }
//                i1 = &buf1[0];
//            }
//            return *i1++;
//        } else {
//            if( i2 == end2 ) {
//                if( i1 == end1 ) {
//                    reset();
//                }
//                i2 = &buf2[0];
//            }
//            return *i2++;
//        }
//    }
//};



//template<CMRND_UINT SIZE1, CMRND_UINT SIZE2>
//class RndBuff1 {
//private:
//    using TBuff1 = TMRND_IRESULT[SIZE1+SIZE2];
//private:
//    TRnd        &rnd;       // Pseudo random number generator.
//    TMRND_UINT  min;        // Min range.
//    TMRND_UINT  max;        // Max range.
//    TBuff1      buff; // N-Cyclic buffer to number generator.
//    TMRND_UINT  select;     // Select first or second buffer.
//    CMRND_IRESULT *i1;
//    CMRND_IRESULT *i2;
//    CMRND_IRESULT *const end1;
//    CMRND_IRESULT *const end2;
//private:
//    void reset() {
//        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
//            buff[i] = rnd.range(min,max);
//        }
//    }
//public:
//    RndBuff1(TRnd &rnd, CMRND_UINT min=0, CMRND_UINT max=0) : rnd(rnd), end1(&buff[0]+SIZE1), end2(end1+SIZE2) {
//        setMinMax(min,max);
//    }
//    RndBuff1(const RndBuff1& other) : rnd(other.rnd), end1(other.end1), end2(other.end2) {
//        setMinMax( other.min, other.max );
//    }
//    RndBuff1& operator = (const RndBuff1& other) {
//        return *( new(this)RndBuff1(other) );
//    }
//    void setMinMax(CMRND_UINT min, CMRND_UINT max) {
//        this->min = min;
//        this->max = max;
//        i1 = end1;
//        i2 = end2;
//        select = 0;
//    }
//    TMRND_IRESULT operator()() {
//        if( 1 & select++ ) {
//            if( i1 == end1 ) {
//                if( i2 == end2 ) {
//                    reset();
//                }
//                i1 = buff;
//            }
//            return *i1++;
//        } else {
//            if( i2 == end2 ) {
//                if( i1 == end1 ) {
//                    reset();
//                }
//                i2 = end1;
//            }
//            return *i2++;
//        }
//    }
//};
