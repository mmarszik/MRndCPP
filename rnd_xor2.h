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

#include "defs.h"
#include "rnd_base.h"

template<typename TRND, TMRND_UINT SIZE1, TMRND_UINT SIZE2>
class RndXor2 : public RndBase {
private:
    TRND       rnd;
    TMRND_UINT *const buff;
    TMRND_UINT *i1,*i2;
    TMRND_UINT *const end1, *const end2;

private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd();
        }
    }
    static TMRND_RESULT rot( TMRND_RESULT *v ) {
        return *v = (*v << 1) | ( *v >> ( MLimits<TMRND_RESULT>::digits() - 1 ) );
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
        i1 = other.i1;
        i2 = other.i2;
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
    }
    TMRND_RESULT operator()() {
        if( i1 == end1 ) {
            i1 = buff;
            if( i2 == end2 ) {
                reset();
            }
        }
        if( i2 == end2 ) {
            i2 = end1;
        }
        return *i1++ ^ *i2++;
    }
};


/*
template<typename TRnd, TMRND_UINT SIZE1, TMRND_UINT SIZE2>
class RndXor2 : public RndBase {
private:
    using TBuff = MxArray<TMRND_ULONG,SIZE1+SIZE2>;
    TBuff x;
    TMRND_UINT i1,i2;

public:
    RndXor2( CMRND_ULONG __sd ) {
        seed( __sd );
    }
    void seed( CMRND_ULONG __sd ) {
        TRnd rnd(__sd);
        for( TMRND_UINT i=0 ; i<4 ; i++ ) {
            for( TMRND_UINT j=0 ; j<SIZE1+SIZE2 ; j++ ) {
                x[j] = (x[j]<<16) | (rnd() & 0xFFFF);
            }
        }
        i1 = SIZE1 - 1;
        i2 = SIZE1 + SIZE2 - 1;
    }
    TMRND_RESULT operator()() {
        if( ++i1 >= SIZE1        ) i1 = 0;
        if( ++i2 >= SIZE1 + SIZE2) i2 = SIZE1;
        return x[i1] ^ x[i2];
    }
};
*/
