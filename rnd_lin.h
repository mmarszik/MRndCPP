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
#include <limits>

#include "defs.h"
#include "rnd_sim_lin.h"
#include "rnd_base.h"

template<typename T, T A, T B, T M=0, utyp BITS=32, utyp SHIFT=0>
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
    result_type operator()() {
        utyp r=0;
        for( utyp i=0 ; i<std::numeric_limits<decltype(r)>::digits ; i+=BITS ) {
#pragma GCC diagnostic ignored "-Wshift-count-overflow"
            r <<= BITS;
#pragma GCC diagnostic error "-Wshift-count-overflow"
            r |= rnd() & ((1ull<<BITS)-1);
        }
        return r;
    }
};

using RndLin1  = RndLin<ultyp, 1645253ull, 1327634909599ull,             0ull, 32u, 32u>;
using RndLin1a = RndLin<ultyp, 1645253ull, 1327634909599ull,             0ull, 16u,  0u>;
using RndLin2  = RndLin<ultyp, 1645253ull, 1327634909599ull, 7129848157699ull, 32u,  0u>;
using RndLin2a = RndLin<ultyp, 1645253ull, 1327634909599ull, 7129848157699ull, 16u,  0u>;
using RndLin2b = RndLin<ultyp, 1645253ull, 1327634909599ull, 7129848157699ull, 11u, 12u>;
using RndLin2c = RndLin<ultyp, 1645253ull, 1327634909599ull, 7129848157699ull,  8u,  0u>;

