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

#include "defs.h"
#include "rnd.h"
#include "rnd_base.h"

//The optimizer of the random number generator on the
//probability between <0,p>
class RndProb {
private:
    TRnd &rnd;
    TRnd::TYPE_RESULT p;

public:
    RndProb(TRnd &rnd, CMRND_FLOAT p=1) : rnd(rnd) {
        setP( p );
    }
    RndProb(const RndProb& other) : rnd(other.rnd) {
        setP( other.p );
    }
    void setP( CMRND_FLOAT p ) {
        this->p = static_cast<TRnd::TYPE_RESULT>(p * TRnd::max());
    }
    bool operator()() {
        return rnd() < p;
    }
};

using TRndProb = RndProb;
