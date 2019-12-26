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
/// @created on 2019-12-08 02:54:55 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 2ee0cb84-49cd-4a29-9ae2-daf7c3e937be                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "defs.h"
#include "rnd_base.h"

//MM: Simplest linear psuedo random numbers generator.
template<typename T, T A, T B, T M=0, TMRND_UINT SHIFT=0>
class RndSimLin : public RndBase {
private:
    T v;
public:
    RndSimLin(){
    }
    RndSimLin(const T __sd) {
        seed(__sd);
    }
    void seed(const T __sd) {
        v = __sd;
        for( TMRND_UINT i=0 ; i<10 ; i++ ) {
            (*this)();
        }
    }
    TMRND_RESULT operator()() {
        if( M == 0 ) {
            if( SHIFT == 0 ) {
                return v = v * A + B;
            }
            return (v = v * A + B) >> SHIFT;
        }
        if( SHIFT == 0 ) {
            return v = (v * A + B) % M;
        }
        return (v = (v * A + B) % M) >> SHIFT;
    }
};

using RndSimLin00 = RndSimLin< TMRND_ULONG,  785269ull,      1259391056969ull,                  0ull,   31u >;
using RndSimLin01 = RndSimLin< TMRND_ULONG,  785269ull,      1259391056969ull,     21641981640689ull,    0u >;
using RndSimLin02 = RndSimLin< TMRND_ULONG,  991811ull,      2842826673569ull,                  0ull,   31u >;
using RndSimLin03 = RndSimLin< TMRND_ULONG,  991811ull,      2842826673569ull,     12639539681863ull,    0u >;
using RndSimLin04 = RndSimLin< TMRND_ULONG, 1645253ull,      1327634909599ull,      7129848157699ull,    0u >;
using RndSimLin06 = RndSimLin< TMRND_ULONG,  119179ull,    721101119472589ull, 1413800657682953999ull,   0u >;

using RndSimLin05 = RndSimLin< TMRND_ULONGLONG, 12102661ull, 14096522162449405717ull, 0ull, 95u >;


