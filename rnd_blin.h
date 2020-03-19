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
/// @created on 2020-03-18 18:58:20 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token caa58f32-2665-4786-9676-2ea5e490a063                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <MxCPP/mx_array.h>
#include "rnd_base.h"
#include "init_chaos.h"

class RndBLin : public RndBase {
private:
    static constexpr TMRND_UINT SIZE0 = 8;
    static constexpr TMRND_UINT SIZE1 = (1 << SIZE0) + sizeof(TMRND_ULONG) - 1;
private:
    using TBUFF = MxArray<TMRND_UBYTE, SIZE1>;
private:
    TBUFF buff;
    TMRND_ULONG v;

public:
    RndBLin(CMRND_ULONG __sd=0xC9EC74DDDA2D1E1Aull) {
        seed(__sd);
    }
    void seed(CMRND_ULONG __sd) {
        initByChaos<TBUFF>(buff, SIZE1, __sd );
    }
    TMRND_RESULT operator()() {
        v = v * 543657589ull + 4253133281ull;
        CMRND_ULONG x = v >> ( MLimits<TMRND_ULONG>::digits() - SIZE0 );
        TMRND_ULONG *const i = (TMRND_ULONG*)( &buff[0] + x );
        return ( *i = *i * 12102661ull + 15425444914155312697ull ) >> 32;
    }
};

