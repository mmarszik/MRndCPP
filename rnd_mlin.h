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
#include "rnd_base.h"
#include "init_chaos.h"

namespace MRnd {

//MM: Multi-linear psuedo random numbers generator.
class RndMLin : public RndBase {
private:
    static constexpr TMRND_U32 SIZE0 = 4;
    static constexpr TMRND_U32 SIZE1 = 1 << SIZE0;
private:
    using TBUFF = MxArray<TMRND_U128, SIZE1>;
private:
    const static MxArray<TMRND_U64, SIZE1> A;
    const static MxArray<TMRND_U64, SIZE1> B;
    TBUFF buff;
    TMRND_U64 v;
    TMRND_U32  x;

public:
    RndMLin(CMRND_U64 __sd=0xC9EC74DDDA2D1E1Aull) {
        seed(__sd);
    }
    void seed(CMRND_U64 __sd) {
        letBeChaos<TBUFF>(buff, SIZE1, __sd );
    }
    TMRND_RESULT operator()() {
        v = v * 543657589ull + 4253133281ull;
        CMRND_U32 i = v >> ( MLimits<decltype(v)>::digits() - SIZE0 );
        return ( buff[i] = buff[i] * TMRND_U128(A[i]) + TMRND_U128(B[i]) ) >> 95u;
    }
};


}
