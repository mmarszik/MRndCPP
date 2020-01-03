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
#include "rnd_base.h"

template<typename T, const T A, const T B, const T M=0, CMRND_UINT BITS=32, CMRND_UINT SHIFT=0, CMRND_UINT SKIP=0>
class RndLin : public RndBase {
private:
    T v;
public:
    RndLin(const T __sd=0x59941428651521D6ull) {
        seed(__sd);
    }
    void seed(const T __sd) {
        v = __sd;
    }

    TMRND_RESULT operator()() {
        TMRND_RESULT r=0;
        for( TMRND_UINT i=0 ; i<MLimits<TMRND_RESULT>::digits() ; i+=BITS ) {
#pragma GCC diagnostic ignored "-Wshift-count-overflow"
            r <<= BITS;
#pragma GCC diagnostic warning "-Wshift-count-overflow"
            for( TMRND_UINT i=0 ; i<SKIP ; i++ ) {
                v = v * A + B;
            }
            if( M == 0 ) {
                r |= ( (v = (v * A + B)    ) >> SHIFT) & ( (1ull << BITS) - 1 );
            } else {
                r |= ( (v = (v * A + B) % M) >> SHIFT) & ( (1ull << BITS) - 1 );
            }
        }
        return r;
    }


};

using RndLin1 = RndLin<TMRND_ULONG,  172281238618939ull,   758001465003151ull, 0ull, 16u, 47u>;
using RndLin2 = RndLin<TMRND_ULONG,  178627919555669ull,  1420217663636021ull, 0ull, 16u, 47u>;
using RndLin3 = RndLin<TMRND_ULONG, 3456967426737059ull,  3232060479518623ull, 0ull, 32u, 31u>;
using RndLin4 = RndLin<TMRND_ULONG, 2018814029453857ull,  2082947326556573ull, 0ull, 16u, 47u>;
using RndLin5 = RndLin<TMRND_ULONG,  965572862617007ull,   661186099983727ull, 0ull, 11u, 52u>;
using RndLin6 = RndLin<TMRND_ULONG,  661186099983727ull,  3390980202202013ull, 0ull,  8u, 55u>;

