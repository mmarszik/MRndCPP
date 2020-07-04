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
/// @created on 2019-12-23 10:59:16 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 707fc08e-546b-4def-9cc0-28af16a0a0fb                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "include_rnd.h"
#include <new>

namespace MRnd {

class RndFBuff0 {
private:
    TMRnd        &rnd; // Pseudo random number generator.
    TMRND_F64 min;  // Min range.
    TMRND_F64 max;  // Max range.

public:
    RndFBuff0(TMRnd &rnd, CMRND_F64 min=0, CMRND_F64 max=0) : rnd(rnd) {
        setMinMax( min, max );
    }
    RndFBuff0( const RndFBuff0& other ) : rnd(other.rnd) {
        setMinMax( other.min, other.max );
    }
    RndFBuff0& operator = (const RndFBuff0& other) {
        return *( new(this)RndFBuff0(other) );
    }
    void setMinMax(CMRND_F64 min, CMRND_F64 max) {
        this->min = min;
        this->max = max;
    }
    TMRND_F64 operator()() {
        return rnd.getFloat(min,max);
    }
};

}
