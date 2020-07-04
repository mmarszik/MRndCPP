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
/// @created on 2019-11-06 11:55:57 CEST                              //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token ef0ac903-886d-4a44-bc09-2c0f1268b40a                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "defs.h"
#include <MiscCPP/m_limits.h>
#include <random>

namespace MRnd {

class RndKnuthB : public std::knuth_b {
public:
    RndKnuthB( std::knuth_b::result_type __sd) : std::knuth_b(__sd) {
    }
    static TMRND_RESULT max() {
        return MLimits<TMRND_RESULT>::max();
    }
    TMRND_RESULT operator()() {
        return static_cast<TMRND_RESULT>( std::knuth_b::operator ()() );
    }
    TMRND_RESULT range(CMRND_RESULT _min, CMRND_RESULT _max) {
        return (*this)() % (_max - _min + 1) + _min;
    }
    TMRND_RESULT range(CMRND_RESULT _max) {
        return range(0,_max);
    }
    //Get float between <_min,_max>
    TMRND_F64 getFloat(CMRND_F64 _min, CMRND_F64 _max) {
        return ( _max - _min ) * (*this)() / max() + _min;
    }
    //Get float between <0,_max>
    TMRND_F64 getFloat(CMRND_F64 _max=1) {
        return getFloat(0,_max);
    }

};

}
