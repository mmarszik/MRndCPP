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
/// @created on 2019-12-08 02:52:34 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 98c2759f-81be-4d41-9287-9d6c97145402                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <MxCPP/mx_array.h>

#include "defs.h"
#include "rnd_base.h"

//MM: The composition of two pseudo random number generators with lagged.
template<class TRnd1, class TRnd2, TMRND_UINT SIZE>
class RndComp : public RndBase {
private:
    using TBuff = MxArray< TMRND_UINT , 1u<<SIZE >;
    TBuff buff;
    TRnd1 rnd1;
    TRnd2 rnd2;
public:
    RndComp( CMRND_ULONG __sd ) {
        seed( __sd );
    }
    void seed( CMRND_ULONG __sd ) {
        rnd1.seed( __sd ^ 0x4B3B2985634D008 );
        rnd2.seed( __sd ^ 0x73CD8A180586D6A );
        for( TMRND_UINT i=0 ; i < (1u<<SIZE) ; i++ ) {
            buff[i] = rnd1();
        }
    }
    TYPE_RESULT operator()() {
        CMRND_UINT r = rnd2() & ((1u<<SIZE)-1);
        CMRND_ULONG v = buff[r];
        buff[r] = rnd1();
        return v;
    }
//    utyp operator()() {
//        buff[ rnd2() & ((1u<<SIZE)-1) ] = rnd1();
//        return buff[ rnd2() & ((1u<<SIZE)-1) ];
//    }
//    utyp operator()() {
//        return rnd1() ^ rnd2();
//    }

};

