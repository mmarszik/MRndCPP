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
/// @created on 2019-12-18 19:00:54 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 1bc30f88-ce96-49b1-8e3e-5e6cb229e496                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <random>
#include <new>

#include "rnd_lin.h"
#include "rnd_mlin.h"
#include "rnd_fib.h"
#include "rnd_wyhash64.h"
#include "rnd_wyhash64m.h"

namespace MRnd {

//#define TMRND_RND_ADD_ROOT_V1
//#define TMRND_RND_ADD_ROOT_V2
//#define TMRND_RND_ADD_ROOT_V3

//The below classes contain the implementation of adapter for pseudo
//random number generators. You should set size1 and size2 as primary
//numbers.  The adapter work very fast but random numbers can be not
//perfect. The number of random number generator calls is only size1 + size2.
//But the number of random numbers is up to size1 * size2. However, the weakness
//of this adapter is that it generates numbers using the add-rotation operations of
//consecutive pre-generated numbers.

#if defined( TMRND_RND_ADD_ROOT_V1 )

template<class TRND, CMRND_UINT SIZE1, CMRND_UINT SIZE2, CMRND_UINT RESET=SIZE1*SIZE2>
class RndAddRot : public RndBase {
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
    inline static TMRND_RESULT rot( TMRND_RESULT *const v) {
        return *v = (*v << 1) | ( *v >> ( MLimits<TMRND_RESULT>::digits() - 1 ) );
    }
public:
    RndAddRot( CMRND_RESULT __sd ) : buff(new TMRND_UINT[SIZE1+SIZE2]), end1(buff+SIZE1),end2(buff+SIZE1+SIZE2) {
        seed( __sd );
    }
    RndAddRot( const RndAddRot &other ) : buff(new TMRND_UINT[SIZE1+SIZE2]), end1(buff+SIZE1),end2(buff+SIZE1+SIZE2) {
        rnd = other.rnd;
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = other.buff[i];
        }
        this->i1  = this->buff + (other.i1 - other.buff);
        this->i2  = this->buff + (other.i2 - other.buff);
        i3 = other.i3;
    }
    RndAddRot& operator = (const RndAddRot &other) {
        delete[] buff;
        return *( new(this)RndAddRot( other ) );
    }
    ~RndAddRot() {
        delete[] buff;
    }
    void seed( CMRND_RESULT __sd ) {
        rnd.seed( __sd );
        i1 = end1;
        i2 = end2;
        i3 = RESET;
    }
    TMRND_RESULT operator()() {
        if( RESET == SIZE1 * SIZE2 ) {
            if( i1 == end1 ) {
                if( i2 == end2 ) {
                    reset();
                }
                i1 = buff;
            }
            if( i2 == end2 ) {
                i2 = end1;
            }
            return rot(i1++) + rot(i2++);
        } else {
            if( i3++ >= RESET ) {
                i3 = 1;
                reset();
            }
            if( i1 == end1 ) i1 = buff;
            if( i2 == end2 ) i2 = end1;
            return rot(i1++) + rot(i2++);
        }
    }
};

#elif defined( TMRND_RND_ADD_ROOT_V2 )

template<class TRND, CMRND_UINT SIZE1, CMRND_UINT SIZE2, CMRND_UINT RESET=SIZE1*SIZE2>
class RndAddRot : public RndBase {
private:
    using TBUFF = MxArray<TMRND_RESULT, SIZE1+SIZE2>;
private:
    TRND       rnd;
    TBUFF      buff;
    TMRND_UINT i1, i2, i3;
private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ )
            buff[i] = rnd();
    }
    inline static TMRND_RESULT rot( TMRND_RESULT &v ) {
        return v = (v << 1) | ( v >> ( MLimits<TMRND_RESULT>::digits() - 1 ) );
    }
public:
    RndAddRot( CMRND_RESULT __sd ) {
        seed( __sd );
    }
    void seed( CMRND_RESULT __sd ) {
        rnd.seed( __sd );
        i1 = SIZE1;
        i2 = SIZE1+SIZE2;
        i3 = RESET;
    }
    TMRND_UINT operator()() {
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
            return rot(buff[i1++]) + rot(buff[i2++]);
        } else {
            if( i3++ >= RESET ) {
                i3 = 1;
                reset();
            }
            if( i1 == SIZE1         ) i1 = 0;
            if( i2 == SIZE1 + SIZE2 ) i2 = SIZE1;
            return rot(buff[i1++]) + rot(buff[i2++]);
        }
    }

};

#else

template<class TRND, CMRND_U32 SIZE1, CMRND_U32 SIZE2, CMRND_U32 RESET=SIZE1*SIZE2>
class RndAddRot : public RndBase {
private:
    using TBUFF = MxArray<TMRND_RESULT, SIZE1+SIZE2>;
private:
    TRND       rnd;
    TBUFF      buff;
    TMRND_U32 *i1,*i2;
    TMRND_U32 *const end1;
    TMRND_U32 *const end2;
    TMRND_U32 i3;

private:
    void reset() {
        for( TMRND_U32 i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd();
        }
    }
    inline static TMRND_RESULT rot( TMRND_RESULT *const v) {
        return *v = (*v << 1) | ( *v >> ( MLimits<TMRND_RESULT>::digits() - 1 ) );
    }

public:
    RndAddRot( CMRND_RESULT __sd ) : end1(&buff[0]+SIZE1),end2(end1+SIZE2) {
        seed( __sd );
    }

    RndAddRot( const RndAddRot &other ) : end1(&buff[0]+SIZE1),end2(end1+SIZE2) {
        rnd = other.rnd;
        for( TMRND_U32 i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = other.buff[i];
        }
        this->i1  = this->buff + (other.i1 - &other.buff[0]);
        this->i2  = this->buff + (other.i2 - &other.buff[0]);
        i3 = other.i3;
    }

    RndAddRot& operator = (const RndAddRot &other) {
        return *( new(this)RndAddRot( other ) );
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
            return rot(i1++) + rot(i2++);
        } else {
            if( i3++ >= RESET ) {
                i3 = 1;
                reset();
            }
            if( i1 == end1 ) i1 = &buff[0];
            if( i2 == end2 ) i2 = end1;
            return rot(i1++) + rot(i2++);
        }
    }

};

#endif


using RndAddRot1   = RndAddRot<std::mt19937_64 ,   3061,  2711 >;
using RndAddRot2   = RndAddRot<std::ranlux48   ,   3061,  2711 >;
using RndAddRot3   = RndAddRot<RndFib1         ,   3061,  2711 >;
using RndAddRot4   = RndAddRot<RndMLin         ,   3061,  2711 >;
using RndAddRot5   = RndAddRot<RndWyhash64_0   ,   3061,  2711 >;
using RndAddRot6   = RndAddRot<RndWyhash64m_0  ,   3061,  2711 >;

}
