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
/// @created on 2019-12-08 02:54:19 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 082856b4-4191-4c27-bdb9-1b2dcdc8664f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once
#include <climits>

#include "defs.h"
#include "rnd_sim_lin.h"
#include "rnd_base.h"

template<typename T, T A, T B, T M=0, TMRND_UINT BITS=32, TMRND_UINT SHIFT=0>
class RndLin : public RndBase {
private:
    RndSimLin<T,A,B,M,SHIFT> rnd;
public:
    RndLin() {
    }
    RndLin(const T __sd) : rnd(__sd) {
    }
    void seed(const T __sd) {
        rnd.seed(__sd);
    }
    TMRND_RESULT operator()() {
        TMRND_UINT r=0;
        for( TMRND_UINT i=0 ; i<MLimits<decltype(r)>::digits() ; i+=BITS ) {
#pragma GCC diagnostic ignored "-Wshift-count-overflow"
            r <<= BITS;
#pragma GCC diagnostic warning "-Wshift-count-overflow"
            r |= rnd() & ((1ull<<BITS)-1);
        }
        return r;
    }
};

using RndLin1  = RndLin<TMRND_ULONG, 1645253ull, 1327634909599ull,             0ull, 32u, 32u>;
using RndLin1a = RndLin<TMRND_ULONG, 1645253ull, 1327634909599ull,             0ull, 16u,  0u>;
using RndLin2  = RndLin<TMRND_ULONG, 1645253ull, 1327634909599ull, 7129848157699ull, 32u,  0u>;
using RndLin2a = RndLin<TMRND_ULONG, 1645253ull, 1327634909599ull, 7129848157699ull, 16u,  0u>;
using RndLin2b = RndLin<TMRND_ULONG, 1645253ull, 1327634909599ull, 7129848157699ull, 11u, 12u>;
using RndLin2c = RndLin<TMRND_ULONG, 1645253ull, 1327634909599ull, 7129848157699ull,  8u,  0u>;

