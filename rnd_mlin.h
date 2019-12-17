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
/// @created on 2019-12-08 02:54:32 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 932ac93d-8e38-4047-bbf9-b3737d3a150a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <MxCPP/mx_array.h>

#include "defs.h"
#include "rnd_base.h"

//MM: Multilinear psuedo random numbers generator.
class RndMLin : public RndBase {
private:
    static constexpr TMRND_UINT SIZE0 = 4;
    static constexpr TMRND_UINT SIZE1 = 1 << SIZE0;
    const static MxArray<TMRND_ULONG, SIZE1> A;
    const static MxArray<TMRND_ULONG, SIZE1> B;
    MxArray<TMRND_ULONGLONG,SIZE1> V;
    TMRND_ULONG v;
    TMRND_UINT x;

public:
    RndMLin(){
    }
    RndMLin(CMRND_ULONG __sd) {
        seed(__sd);
    }
    void seed(CMRND_ULONG __sd) {
        const static MxArray<TMRND_ULONG, SIZE1*2> X = {0x2A8A8E7B69275E7Bull, 0xC60C57AD9B23A6C5ull, 0xD9005720730353ECull, 0xB355D0AC65D932B4ull, 0x93419492C098DCA3ull, 0x67C980BE4B5CBE6Dull, 0xC02690505B01ED78ull, 0x3037D55D993E674Bull, 0xE0443DB9A597DD17ull, 0x17B7E6E04A43D417ull, 0x57322B091789D992ull, 0x97456758E6AE397Eull, 0xE65C5A81589EED86ull, 0x2A1C2E6192C178EDull, 0xC23115A5B5D01A87ull, 0x6B91EDE5889A648Aull, 0xC91EA73561B8CD39ull, 0x4DB893E0CC8248E3ull, 0x98D38A4D5B9BE969ull, 0x2D077C6CB4A823BDull, 0xE712A94440067BB2ull, 0xC30B7025675AE401ull, 0xA23315A68A5B4621ull, 0x22D6B2B1D9714D17ull, 0xD8E26531867CB0A1ull, 0xA76D46B7E90A4086ull, 0xDA71B684588E8C96ull, 0x817E2AD3025EC218ull, 0xB0136A731A8A1B28ull, 0x95E9CC38A11349C2ull, 0x373A30554835A0CCull, 0xBCB37B54049DCE31ull};
        v = __sd;
        x = 0;
        for( TMRND_UINT i=0,j=0 ; i<SIZE1 ; i++ ) {
            V[i] = __sd ^ X[j++];
            V[i] <<= 64;
            V[i] |= __sd ^ X[j++];
        }
        for( TMRND_UINT i=0 ; i<SIZE1*4 ; i++ ) {
            (*this)();
        }
    }
    TYPE_RESULT operator()() {
        v = v * 543657589ull + 4253133281ull;
        CMRND_UINT i = v >> ( 64 - SIZE0 );
        return ( V[i] = V[i] * A[i] + B[i] ) >> 95;
    }
};


