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

#include "rnd_base.h"
#include <MxCPP/mx_array.h>

//#define TMRND_RND_XOR2_V1
//#define TMRND_RND_XOR2_V2
//#define TMRND_RND_XOR2_V3

#if defined( TMRND_RND_XOR2_V1 )

template<typename TRND, CMRND_UINT SIZE1, CMRND_UINT SIZE2, CMRND_UINT RESET=SIZE1*SIZE2 >
class RndXor2 : public RndBase {
private:
    TRND       rnd;
    TMRND_UINT *const buff;
    TMRND_UINT *i1,*i2;
    TMRND_UINT *const end1, *const end2;
    TMRND_UINT i3;
private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd();
        }
    }
public:
    RndXor2( CMRND_RESULT __sd ) : buff(new TMRND_UINT[SIZE1+SIZE2]), end1(buff+SIZE1),end2(buff+SIZE1+SIZE2) {
        seed( __sd );
    }
    RndXor2( const RndXor2 &other ) : buff(new TMRND_UINT[SIZE1+SIZE2]), end1(buff+SIZE1),end2(buff+SIZE1+SIZE2) {
        rnd = other.rnd;
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = other.buff[i];
        }
        this->i1  = this->buff + (other.i1 - other.buff);
        this->i2  = this->buff + (other.i2 - other.buff);
        i3 = other.i3;
    }
    RndXor2& operator = (const RndXor2 &other) {
        delete[] buff;
        return *( new(this)RndXor2( other ) );
    }
    ~RndXor2() {
        delete[] buff;
    }
    void seed( CMRND_RESULT __sd ) {
        rnd.seed( __sd );
        i1 = end1;
        i2 = end2;
        i3 = RESET;
    }
    TMRND_RESULT operator()() {
        if( RESET == SIZE1*SIZE2 ) {
            if( i1 == end1 ) {
                if( i2 == end2 ) {
                    reset();
                }
                i1 = buff;
            }
            if( i2 == end2 ) {
                i2 = end1;
            }
            return *i1++ ^ *i2++;
        } else {
            if( i3++ >= RESET ) {
                i3 = 1;
                reset();
            }
            if( i1 == end1 ) i1 = buff;
            if( i2 == end2 ) i2 = end1;
            return *i1++ ^ *i2++;
        }
    }
};

#elif defined( TMRND_RND_XOR2_V2 )

template<typename TRND, CMRND_UINT SIZE1, CMRND_UINT SIZE2, CMRND_UINT RESET=SIZE1*SIZE2 >
class RndXor2 : public RndBase {
private:
    using TBuff = MxArray<TMRND_ULONG,SIZE1+SIZE2>;
private:
    TRND  rnd;
    TBuff buff;
    TMRND_UINT i1,i2,i3;
private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd();
        }
    }
public:
    RndXor2( CMRND_ULONG __sd ) {
        seed( __sd );
    }
    void seed( CMRND_ULONG __sd ) {
        rnd.seed( __sd );
        i1 = SIZE1;
        i2 = SIZE1 + SIZE2;
        i3 = RESET;
    }
    TMRND_RESULT operator()() {
        if( RESET == SIZE1*SIZE2 ) {
            if( i1 == SIZE1 ) {
                i1 = 0;
                if( i2 == SIZE1 + SIZE2 ) {
                    reset();
                }
            }
            if( i2 == SIZE1 + SIZE2 ) {
                i2 = SIZE1;
            }
            return buff[i1++] ^ buff[i2++];
        } else {
            if( i3++ >= RESET ) {
                i3 = 1;
                reset();
            }
            if( i1 == SIZE1         ) i1 = 0;
            if( i2 == SIZE1 + SIZE2 ) i2 = SIZE1;
            return buff[i1++] ^ buff[i2++];
        }
    }
};

#else

template<typename TRND, CMRND_UINT SIZE1, CMRND_UINT SIZE2, CMRND_UINT RESET=SIZE1*SIZE2 >
class RndXor2 : public RndBase {
private:
    using TBUFF = MxArray<TMRND_RESULT, SIZE1+SIZE2>;
private:
    TRND       rnd;
    TBUFF      buff;
    TMRND_UINT *i1,*i2;
    TMRND_UINT *const end1, *const end2;
    TMRND_UINT i3;

private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd();
        }
    }
    inline static TMRND_RESULT rot( TMRND_RESULT *const v) {
        return *v = (*v << 1) | ( *v >> ( MLimits<TMRND_RESULT>::digits() - 1 ) );
    }
public:
    RndXor2( CMRND_RESULT __sd ) : end1(&buff[0]+SIZE1), end2(end1+SIZE2) {
        seed( __sd );
    }
    RndXor2( const RndXor2 &other ) : end1(&buff[0]+SIZE1), end2(end1+SIZE2) {
        rnd = other.rnd;
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = other.buff[i];
        }
        this->i1  = this->buff + (other.i1 - &other.buff[0]);
        this->i2  = this->buff + (other.i2 - &other.buff[0]);
        i3 = other.i3;
    }
    RndXor2& operator = (const RndXor2 &other) {
        return *( new(this)RndXor2( other ) );
    }
    void seed( CMRND_RESULT __sd ) {
        rnd.seed( __sd );
        i1 = end1;
        i2 = end2;
        i3 = RESET;
    }
    TMRND_RESULT operator()() {
        if( RESET == SIZE1*SIZE2 ) {
            if( i1 == end1 ) {
                if( i2 == end2 ) {
                    reset();
                }
                i1 = &buff[0];
            }
            if( i2 == end2 ) {
                i2 = end1;
            }
            return *i1++ ^ *i2++;
        } else {
            if( i3++ >= RESET ) {
                i3 = 1;
                reset();
            }
            if( i1 == end1 ) i1 = &buff[0];
            if( i2 == end2 ) i2 = end1;
            return *i1++ ^ *i2++;
        }
    }
};


#endif
