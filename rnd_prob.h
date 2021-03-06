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
/// @created on 2019-12-08 02:53:05 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 3c1b3ba5-afd2-4ffb-bbf3-2087ca7d4de7                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <new>

#include "include_rnd.h"
#include "rnd_base.h"

namespace MRnd {

//The optimizer of the random number generator on the
//probability between <0,p>
template<class TRND>
class MRndProb {
private:
    TRND &rnd;
    TMRND_U64 p;
    static_assert( sizeof(p) > sizeof(TMRND_RESULT) , "sizeof(p) > sizeof(TMRND_RESULT)" );

public:
    MRndProb(TRND &rnd, CMRND_F64 p=1) : rnd(rnd) {
        setP( p );
    }
    MRndProb(const MRndProb& other) : rnd(other.rnd) {
        setP( other.p );
    }
    MRndProb& operator = (const MRndProb& other) {
        return *( new(this)MRndProb(other) );
    }
    void setP( CMRND_F64 p ) {
        this->p = static_cast<TMRND_U64>(p * ( TRND::max() + 1.0 ) );
    }
    bool operator()() {
        return rnd() < p;
    }
};


using TRndProb0 = MRndProb<TMRnd>;


/*
template<class TRND>
class RndProb {
private:
    TRND &rnd;
    TMRND_RESULT p;
    constexpr static TMRND_RESULT mask = ~(((TMRND_RESULT)1) << (MLimits<TMRND_RESULT>::digits()-1));

public:
    RndProb(TRND &rnd, CMRND_FLOAT p=1) : rnd(rnd) {
        setP( p );
    }
    RndProb(const RndProb& other) : rnd(other.rnd) {
        setP( other.p );
    }
    RndProb& operator = (const RndProb& other) {
        return *( new(this)RndProb(other) );
    }
    void setP( CMRND_FLOAT p ) {
        this->p = static_cast<TMRND_RESULT>(p * ( ( TRND::max() & mask ) + 1 ) );
    }
    bool operator()() {
        return ( rnd() & mask ) < p;
    }
};
*/

}
