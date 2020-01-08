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
/// @created on 2020-01-01 17:45:25 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token ea95a43c-b779-4752-b63b-9aa4d1ee7b4d                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_base.h"
#include <MxCPP/mx_array.h>
#include "init_chaos.h"

//#define TMRND_WYHASH64M_V1
//#define TMRND_WYHASH64M_V2

#if defined(TMRND_WYHASH64M_V1)

template<
    CMRND_UINT SIZE1,
    CMRND_UINT SIZE2,
    CMRND_ULONG AW1 = 0x60bee2bee120fc15ull,
    CMRND_ULONG AW2 = 0x2957674240375189ull,
    CMRND_ULONG BW  = 0xa3b195354a39b70dull,
    CMRND_ULONG CW  = 0x1b03738712fad5c9ull
>
class RndWyhash64m : public RndBase {
private:
    using TBUFF = MxArray<TMRND_ULONG, SIZE1+SIZE2>;
private:
    TBUFF buff;
    TMRND_ULONG *i1, *i2;
    TMRND_ULONG *const end1, *const end2;
    constexpr static CMRND_UINT SIZE_CHAOS = 12u;
    static const MxArray<TMRND_ULONG, 1u<<SIZE_CHAOS> CHAOS;

public:
    RndWyhash64m(CMRND_ULONG __sd=0xCD8533B4B9ED944Cull) : end1(&buff[0]+SIZE1), end2(end1+SIZE2) {
        seed( __sd );
    }
    RndWyhash64m(const RndWyhash64m& other) : end1(&buff[0]+SIZE1), end2(end1+SIZE2) {
        for( TMRND_UINT i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = other.buff[i];
        }
        this->i1  = this->buff + (other.i1 - &other.buff[0]);
        this->i2  = this->buff + (other.i2 - &other.buff[0]);
    }
    RndWyhash64m& operator = (const RndWyhash64m& other) {
        return *( new(this)RndWyhash64m(other) );
    }
    void seed(CMRND_ULONG __sd) {
        initByChaos<TBUFF>(buff,SIZE1+SIZE2,__sd);
        i1 = &buff[0];
        i2 = end1;
    }
    TMRND_RESULT operator()() {
        if( i1 >= end1 ) i1 = &buff[0];
        if( i2 >= end2 ) i2 = end1;
        *i1 += AW1;
        *i2 += AW2;
        TMRND_ULONG x = *i1++ + *i2++;
        TMRND_ULONGLONG t = (TMRND_ULONGLONG)x * BW;
        CMRND_ULONG m = (t >> 64) ^ t;
        t = (TMRND_ULONGLONG)m * CW;
        return (t >> 64) ^ t;
    }
};


#else


template<
    CMRND_UINT SIZE1,
    CMRND_UINT SIZE2,
    CMRND_ULONG AW1 = 0x60bee2bee120fc15ull,
    CMRND_ULONG AW2 = 0x2957674240375189ull,
    CMRND_ULONG BW  = 0xa3b195354a39b70dull,
    CMRND_ULONG CW  = 0x1b03738712fad5c9ull
>
class RndWyhash64m : public RndBase {
private:
    using TBUFF = MxArray<TMRND_ULONG, SIZE1+SIZE2>;
private:
    TBUFF buff;
    TMRND_UINT i1, i2;
    constexpr static CMRND_UINT SIZE_CHAOS = 12u;
    static const MxArray<TMRND_ULONG, 1u<<SIZE_CHAOS> CHAOS;

public:
    RndWyhash64m(CMRND_ULONG __sd=0xCD8533B4B9ED944Cull) {
        seed( __sd );
    }
    RndWyhash64m& operator = (const RndWyhash64m& other) {
        return *( new(this)RndWyhash64m(other) );
    }
    void seed(CMRND_ULONG __sd) {
        initByChaos<TBUFF>(buff,SIZE1+SIZE2,__sd);
        i1 = 0;
        i2 = SIZE1;
    }
    TMRND_RESULT operator()() {
        if( i1 >= SIZE1         ) i1 = 0;
        if( i2 >= SIZE1 + SIZE2 ) i2 = SIZE1;
        buff[i1] += AW1;
        buff[i2] += AW2;
        TMRND_ULONG x = buff[i1++] + buff[i2++];
        TMRND_ULONGLONG t = (TMRND_ULONGLONG)x * BW;
        CMRND_ULONG m = (t >> 64) ^ t;
        t = (TMRND_ULONGLONG)m * CW;
        return (t >> 64) ^ t;
    }
};


#endif


using RndWyhash64m_0 = RndWyhash64m<2549,3041>;

