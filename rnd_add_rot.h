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

#include <MxCPP/mx_array.h>
#include <random>
#include <climits>

#ifdef _MSC_VER
#include <intrin.h>
#else
#include <x86intrin.h>  // Not just <immintrin.h> for compilers other than icc
#endif

#include "rnd_lin.h"
#include "rnd_mlin.h"
#include "rnd_fib.h"

//The below class contain the implementation of adapter for pseudo
//random number generators. You should set size1 and size2 as primary
//numbers.  The adapter work very fast but random numbers can be not
//perfect. The number of random number generator calls is only size1 + size2.
//But the number of random numbers is up to size1 * size2. However, the weakness
//of this adapter is that it generates numbers using the add-rotation operations of
//consecutive pre-generated numbers.
template<class TRND, CMRND_UINT SIZE1, CMRND_UINT SIZE2>
class RndAddRot : public RndBase {
private:
    using TBUFF1 = MxArray<TYPE_RESULT, SIZE1>;
    using TBUFF2 = MxArray<TYPE_RESULT, SIZE2>;

private:
    TRND       rnd;
    TBUFF1     buff1;
    TBUFF2     buff2;
    TMRND_UINT i1, i2;

private:
    void reset() {
        for( TMRND_UINT i=0 ; i<SIZE1 ; i++ )
            buff1[i] = rnd();
        for( TMRND_UINT i=0 ; i<SIZE2 ; i++ )
            buff2[i] = rnd();
    }

    static TYPE_RESULT rot( TYPE_RESULT &v ) {
        return v = (v << 1) | ( v >> ( MLimits<TYPE_RESULT>::digits() - 1 ) );
    }

public:
    RndAddRot( const RndBase::TYPE_RESULT __sd ) {
        seed( __sd );
    }

    void seed( const RndBase::TYPE_RESULT __sd ) {
        rnd.seed( __sd );
        i1 = SIZE1;
        i2 = SIZE2;
    }

    TMRND_UINT operator()() {
        if( i1 == SIZE1 && i2 == SIZE2 ) {
            reset();
        }
        if( i1 == SIZE1 ) i1 = 0;
        if( i2 == SIZE2 ) i2 = 0;
        return rot(buff1[i1++]) + rot(buff2[i2++]);
    }

};



using RndAddRot0a  = RndAddRot<std::mt19937_64 ,   3061,  2711 >;
using RndAddRot0b  = RndAddRot<std::mt19937_64 ,   3019,  2957 >;
using RndAddRot0c  = RndAddRot<std::mt19937_64 ,   3011,  1973 >;
using RndAddRot1a  = RndAddRot<std::ranlux48   ,   3061,  2711 >;
using RndAddRot1b  = RndAddRot<std::ranlux48   ,   3019,  2957 >;
using RndAddRot1c  = RndAddRot<std::ranlux48   ,   3011,  1973 >;
using RndAddRot2a  = RndAddRot<RndLin2b        ,   3061,  2711 >;
using RndAddRot2b  = RndAddRot<RndLin2b        ,   3019,  2957 >;
using RndAddRot2c  = RndAddRot<RndLin2b        ,   3011,  1973 >;
using RndAddRot3a  = RndAddRot<RndMLin         ,   3061,  2711 >;
using RndAddRot3b  = RndAddRot<RndMLin         ,   3019,  2957 >;
using RndAddRot3c  = RndAddRot<RndMLin         ,   3011,  1973 >;
using RndAddRot4a  = RndAddRot<RndFib0         ,   3061,  2711 >;
using RndAddRot4b  = RndAddRot<RndFib0         ,   3019,  2957 >;
using RndAddRot4c  = RndAddRot<RndFib0         ,   3011,  1973 >;
using RndAddRot5a  = RndAddRot<RndFib0a        ,   3061,  2711 >;
using RndAddRot5b  = RndAddRot<RndFib0a        ,   3019,  2957 >;
using RndAddRot5c  = RndAddRot<RndFib0a        ,   3011,  1973 >;
using RndAddRot6a  = RndAddRot<RndFib3         ,   3061,  2711 >;
using RndAddRot6b  = RndAddRot<RndFib3         ,   3019,  2957 >;
using RndAddRot6c  = RndAddRot<RndFib3         ,   3011,  1973 >;
using RndAddRot7a  = RndAddRot<RndFib3a        ,   3061,  2711 >;
using RndAddRot7b  = RndAddRot<RndFib3a        ,   3019,  2957 >;
using RndAddRot7c  = RndAddRot<RndFib3a        ,   3011,  1973 >;