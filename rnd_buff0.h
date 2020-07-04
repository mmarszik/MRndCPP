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
/// @created on 2019-11-30 09:14:47 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 31447f18-ce96-4e91-a79f-8d0524260371                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "include_rnd.h"
#include <new>

namespace MRnd {

class RndBuff0  {
private:
    TMRnd          &rnd; // Pseudo random number generator.
    TMRND_IRESULT min;  // Min range.
    TMRND_IRESULT max;  // Max range.

public:
    RndBuff0( TMRnd &rnd, CMRND_IRESULT min=0, CMRND_IRESULT max=0 ) : rnd(rnd) {
        setMinMax( min, max );
    }
    RndBuff0( const RndBuff0& other ) : rnd(other.rnd) {
        setMinMax( other.min, other.max );
    }
    RndBuff0& operator = (const RndBuff0& other) {
        return *( new(this)RndBuff0(other) );
    }
    void setMinMax( CMRND_IRESULT min, CMRND_IRESULT max  ) {
        this->min = min;
        this->max = max;
    }
    TMRND_IRESULT operator()() {
        return rnd.range(min,max);
    }
};

}
