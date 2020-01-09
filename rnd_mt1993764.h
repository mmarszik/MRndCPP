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
/// @created on 2020-01-03 10:57:33 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e1ed4ee9-7c32-4224-a4b9-e323fb554feb                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <random>
#include <MiscCPP/m_limits.h>
#include "defs.h"

class RndMt19937_64 : public std::mt19937_64 {
public:
    RndMt19937_64( std::mt19937_64::result_type __sd) : std::mt19937_64(__sd) {
    }
    static TMRND_RESULT max() {
        return MLimits<TMRND_RESULT>::max();
    }
    TMRND_RESULT operator()() {
        return static_cast<TMRND_RESULT>( std::mt19937_64::operator ()() );
    }
    TMRND_RESULT range(CMRND_RESULT _min, CMRND_RESULT _max) {
        return (*this)() % (_max - _min + 1) + _min;
    }
    TMRND_RESULT range(CMRND_RESULT _max) {
        return range(0,_max);
    }

    //Get float between <_min,_max>
    TMRND_FLOAT getFloat(CMRND_FLOAT _min, CMRND_FLOAT _max) {
        return ( _max - _min ) * (*this)() / max() + _min;
    }

    //Get float between <0,_max>
    TMRND_FLOAT getFloat(CMRND_FLOAT _max=1) {
        return getFloat(0,_max);
    }

};
