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
/// @created on 2019-12-08 02:55:09 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token fe8ca39f-cb8c-45cf-a80d-d2db50f800ed                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <limits>
#include <array>

#include "rnd_sim_lin.h"
#include "m_array.h"
#include "rnd_base.h"
#define SKIP_SZIE (64)

template<typename T, T A, T B, T M=0, utyp BITS=32, utyp SHIFT=0>
class RndSkipLin : public RndBase {
private:
    static cutyp skip[SKIP_SZIE];
    RndSimLin<T,A,B,M,SHIFT> rnd;
    utyp is;
public:
    RndSkipLin(const T __sd) {
        seed( __sd );
    }
    void seed(const T __sd) {
        rnd.seed(__sd);
        is = 0;
    }
    result_type operator()() {
        utyp r=0;
        for( utyp i=0 ; i<std::numeric_limits<decltype(r)>::digits ; i+=BITS ) {
            for( utyp j=0 ; j<skip[is] ; j++ ) {
                rnd();
            }
            r <<= BITS;
            r |= rnd() & ((1ull<<BITS)-1);
            if( ++is >= SKIP_SZIE ) {
                is = 0;
            }
        }
        return r;
    }
};

template<typename T, T A, T B, T M, utyp BITS, utyp SHIFT> cutyp RndSkipLin<T,A,B,M,BITS,SHIFT>::skip[SKIP_SZIE] = {1,2,0,2,2,0,2,2,2,1,2,0,1,2,2,2,1,2,2,2,2,1,1,0,3,1,2,2,2,2,2,3,2,2,3,2,1,1,1,2,1,2,2,2,1,2,1,2,1,2,3,1,1,3,2,0,2,0,0,1,2,2,2,1};

using RndSkipLin1  = RndSkipLin<ultyp, 1645253ull, 1327634909599ull,             0ull, 32u,  0u>;
using RndSkipLin2a = RndSkipLin<ultyp, 1645253ull, 1327634909599ull, 7129848157699ull, 16u,  0u>;
using RndSkipLin2b = RndSkipLin<ultyp, 1645253ull, 1327634909599ull, 7129848157699ull, 11u, 12u>;
using RndSkipLin2c = RndSkipLin<ultyp, 1645253ull, 1327634909599ull, 7129848157699ull,  8u,  0u>;
