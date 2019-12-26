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
/// @created on 2019-12-08 02:52:52 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token da8aa6bf-940f-4a8c-b636-639cf373d7d9                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <MxCPP/mx_array.h>
#include <climits>
#include "rnd_lin.h"
#include "rnd_base.h"

template<typename T, TMRND_UINT SIZE, TMRND_UINT R, T M1, T M2, T A, T MOD=0, TMRND_UINT INIT=4, TMRND_UINT SHIFT=0>
class RndFib : public RndBase {
private:
    T *const buff;
    T *i1, *i2;
public:
    RndFib(const T __sd=0x055320D141E7146Eull) : buff(new T[SIZE]) {
        seed(__sd);
    }
    RndFib(const RndFib& other) : buff(new T[SIZE]) {
        this->i1 = other.i1;
        this->i2 = other.i2;
        for( TMRND_UINT i=0 ; i<SIZE ; i++ ) {
            buff[i] = other.buff[i];
        }
    }
    RndFib& operator = (const RndFib& other) {
        delete[] buff;
        return *( new(this)RndFib(other) );
    }
    ~RndFib() {
        delete[] buff;
    }
    void seed(const T __sd) {
        RndLin2b rnd( __sd );
        CMRND_UINT INIT_BITS = 16;
        for( TMRND_UINT i=0 ; i<MLimits<T>::digits()/INIT_BITS ; i++ ) {
            for( TMRND_UINT j=0 ; j<SIZE ; j++ ) {
                buff[j] <<= INIT_BITS;
                buff[j] ^= rnd();
            }
        }
        i1 = buff + SIZE - 1;
        i2 = buff + SIZE - 1 - R;
        for( TMRND_UINT i=0 ; i<SIZE*INIT ; i++ ) {
            (*this)();
        }
    }
    TMRND_RESULT operator()() {
        if( ++i1 == buff + SIZE ) i1 = buff;
        if( ++i2 == buff + SIZE ) i2 = buff;
        if( MOD == 0 ) {
            return ( *i1 = *i1 * M1 + *i2 * M2 + A ) >> SHIFT;
        } else {
            return ( *i1 = ( *i1 * M1 + *i2 * M2 + A ) % MOD ) >> SHIFT;
        }
    }
};


using RndFib3a =  RndFib< TMRND_ULONG,     607u, 334u, 1438097939015544337ull, 2095838886465443359ull, 1126833020129680393ull,  0ull, 4u, 5u >;

using RndFib0  =  RndFib< TMRND_ULONG, 249u, 138u,0xE8E9719081920A0Aull,0x3151A7903A1543E4ull,0x4D6E9C03B7ACDB5Cull,0, 4u, 13u >;
using RndFib0a  =  RndFib< TMRND_ULONG, 847u, 374u,0x6D55388ED3A51E62ull,0xCC3E9608AC733E66ull,0x31E484D3B0ED7C38ull,0, 4u, 0u >;
using RndFib1  =  RndFib< TMRND_ULONG, 719u, 112u,0x4DB9DC4E882C9D41ull,0xEB0CA0664239A373ull,0x46A5398DC7685454ull,0, 4u, 26u >;
using RndFib1a  =  RndFib< TMRND_ULONG, 977u, 177u,0x11EBEC352333905Eull,0x446D809E2571BE29ull,0x495B2B676C9D2124ull,0, 4u, 8u >;
using RndFib2  =  RndFib< TMRND_ULONG, 603u, 195u,0x89E86388DB697353ull,0x0912AC1CCAC58201ull,0x636E89C62B79B176ull,0, 4u, 11u >;
using RndFib2a  =  RndFib< TMRND_ULONG, 456u, 176u,0x73710CE3B3A69B2Bull,0x8D1B44232BCE0510ull,0xA39DD2E0B906D1BAull,0, 4u, 32u >;
using RndFib3  =  RndFib< TMRND_ULONG, 787u, 277u,0x226C460258D1846Eull,0x0238DAB2D7AB5C0Dull,0x1A598454B358A732ull,0, 4u, 17u >;
using RndFib4  =  RndFib< TMRND_ULONG, 788u, 788u,0x6772DED56ED61EBBull,0x6C2B243899B0230Bull,0x179CCC58631B4208ull,0, 4u, 16u >;
using RndFib5  =  RndFib< TMRND_ULONG, 795u, 753u,0x5A57D999025EAD71ull,0xA5CAA9190CEA787Eull,0xC436AC4900B6273Eull,0, 4u, 28u >;
using RndFib6  =  RndFib< TMRND_ULONG, 910u, 711u,0x99C82BA68D505CBEull,0x9EEC9A6134DD6760ull,0x8B7117E2BBB8983Aull,0, 4u, 3u >;
using RndFib7  =  RndFib< TMRND_ULONG, 938u, 541u,0xE71E374A05887C31ull,0x7ADC0B7E8AA29A35ull,0x1D88C251C16E9D76ull,0, 4u, 25u >;
using RndFib8  =  RndFib< TMRND_ULONG, 952u, 322u,0xE0D2BAB442150020ull,0x17BD7A3EE666E054ull,0xED1E07D9852CEE67ull,0, 4u, 0u >;
using RndFib9  =  RndFib< TMRND_ULONG, 683u, 74u,0x1752615C33AC8DD7ull,0xA63480EDE820084Bull,0xB56E016B0B86EC74ull,0, 4u, 8u >;
using RndFib10  =  RndFib< TMRND_ULONG, 882u, 660u,0xA0635088089E10E9ull,0x79151A7CD23B8806ull,0x13E67C9480376B3Cull,0, 4u, 16u >;
using RndFib11  =  RndFib< TMRND_ULONG, 616u, 539u,0x25756673A3E33EB8ull,0x12E156D7C95AEE58ull,0x88ED721413C3788Eull,0, 4u, 28u >;
using RndFib12  =  RndFib< TMRND_ULONG, 280u, 270u,0xC0A41A09D0C54CDBull,0x7C1BC6ED29A27C5Dull,0xD157DBA390BE1616ull,0, 4u, 12u >;
using RndFib13  =  RndFib< TMRND_ULONG, 840u, 832u,0x91AD5A234B772689ull,0x7B4D4A9E62D851BAull,0x9D61348D96338961ull,0, 4u, 4u >;
using RndFib14  =  RndFib< TMRND_ULONG, 496u, 441u,0x56337B2CC55C14C5ull,0xDE2ED95388E70B73ull,0x355145924A89C1ADull,0, 4u, 28u >;
using RndFib15  =  RndFib< TMRND_ULONG, 999u, 902u,0x8C9642AE5C058421ull,0xC77B2B869399EBD6ull,0x22E41E29ACB316D9ull,0, 4u, 1u >;
using RndFib16  =  RndFib< TMRND_ULONG, 734u, 549u,0x51C487DB615891BBull,0x89EC32E7247208C4ull,0xD427EDD44875308Dull,0, 4u, 8u >;
using RndFib17  =  RndFib< TMRND_ULONG, 309u, 3u,0x9BD5101476E7C787ull,0x336B21C747AE6ECBull,0x317189832B1548BDull,0, 4u, 14u >;
using RndFib18  =  RndFib< TMRND_ULONG, 641u, 23u,0xCDB75E0EA3ED38BAull,0x693BDC747D911B36ull,0x9D13544BDA982A32ull,0, 4u, 18u >;
using RndFib19  =  RndFib< TMRND_ULONG, 925u, 481u,0x13E0B92C91DC7C4Dull,0x98CC0C6DEC2BBC5Bull,0x47BD95ADD4331B36ull,0, 4u, 10u >;
using RndFib20  =  RndFib< TMRND_ULONG, 827u, 439u,0x2ACD08125ADA1622ull,0xB765EA23E099638Eull,0x98788D84C9D11512ull,0, 4u, 3u >;



/*
template<typename T, TMRND_UINT SIZE, TMRND_UINT R, T M1, T M2, T A, T MOD=0, TMRND_UINT INIT=4, TMRND_UINT SHIFT=0>
class RndFib : public RndBase {
private:
    using TBuff = MxArray<T,SIZE>;
    TBuff buff;
    TMRND_UINT  i1, i2;
public:
    RndFib(){}
    RndFib(const T __sd) {
        seed(__sd);
    }
    void seed(const T __sd) {
        RndLin2b rnd( __sd );
        CMRND_UINT INIT_BITS = 16;
        for( TMRND_UINT i=0 ; i<MLimits<T>::digits()/INIT_BITS ; i++ ) {
            for( TMRND_UINT j=0 ; j<SIZE ; j++ ) {
                buff[j] <<= INIT_BITS;
                buff[j] ^= rnd();
            }
        }
        i1 = SIZE - 1;
        i2 = SIZE - 1 - R;
        for( TMRND_UINT i=0 ; i<SIZE*INIT ; i++ ) {
            (*this)();
        }
    }
    TMRND_RESULT operator()() {
        if( ++i1 >= SIZE ) i1 = 0;
        if( ++i2 >= SIZE ) i2 = 0;
        if( MOD == 0 ) {
            return ( buff[i1] = buff[i1] * M1 + buff[i2] * M2 + A ) >> SHIFT;
        } else {
            return ( buff[i1] = (buff[i1] * M1 + buff[i2] * M2 + A) % MOD ) >> SHIFT;
        }
    }
};
*/

/*
template<typename T, TMRND_UINT SIZE, TMRND_UINT R, T M1, T M2, T A, T MOD=0, TMRND_UINT INIT=4, TMRND_UINT SHIFT=0>
class RndFib : public RndBase {
private:
    T *const buff;
    TMRND_UINT  i1, i2;
public:
    RndFib(const T __sd=0x055320D141E7146Eull) : buff(new T[SIZE]) {
        seed(__sd);
    }
    RndFib(const RndFib& other) : buff(new T[SIZE]) {
        this->i1 = other.i1;
        this->i2 = other.i2;
        for( TMRND_UINT i=0 ; i<SIZE ; i++ ) {
            buff[i] = other.buff[i];
        }
    }
    RndFib& operator = (const RndFib& other) {
        delete[] buff;
        return *( new(this)RndFib(other) );
    }
    ~RndFib() {
        delete[] buff;
    }
    void seed(const T __sd) {
        RndLin2b rnd( __sd );
        CMRND_UINT INIT_BITS = 16;
        for( TMRND_UINT i=0 ; i<MLimits<T>::digits()/INIT_BITS ; i++ ) {
            for( TMRND_UINT j=0 ; j<SIZE ; j++ ) {
                buff[j] <<= INIT_BITS;
                buff[j] ^= rnd();
            }
        }
        i1 = SIZE - 1;
        i2 = SIZE - 1 - R;
        for( TMRND_UINT i=0 ; i<SIZE*INIT ; i++ ) {
            (*this)();
        }
    }
    TMRND_RESULT operator()() {
        if( ++i1 >= SIZE ) i1 = 0;
        if( ++i2 >= SIZE ) i2 = 0;
        if( MOD == 0 ) {
            return ( buff[i1] = buff[i1] * M1 + buff[i2] * M2 + A ) >> SHIFT;
        } else {
            return ( buff[i1] = (buff[i1] * M1 + buff[i2] * M2 + A) % MOD ) >> SHIFT;
        }
    }
};
*/
