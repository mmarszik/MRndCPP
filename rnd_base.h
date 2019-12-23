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
/// @created on 2019-12-01 21:23:09 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 440f92a5-ffc1-4a06-b85b-fccb8c104358                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once


#include "defs.h"
#include <MiscCPP/m_limits.h>

class RndBase {
public:
    using TYPE_RESULT = TMRND_UINT;

    static TYPE_RESULT max() {
        return MLimits<TYPE_RESULT>::max();
    }

    virtual TYPE_RESULT operator()() = 0;

    TYPE_RESULT operator()(const TYPE_RESULT _max) {
        return (*this)() % (_max+1);
    }

    TYPE_RESULT operator()(const TYPE_RESULT _min, const TYPE_RESULT _max) {
        return (*this)() % (_max-_min+1) + _min;
    }

    //Get float between <0,_max>
    TMRND_FLOAT flt(CMRND_FLOAT _max=1) {
        return _max * (*this)() / max();
    }

    //Get float between <_min,_max>
    TMRND_FLOAT flt(CMRND_FLOAT _min, CMRND_FLOAT _max) {
        return (_max - _min) * (*this)() / max() + _min;
    }

};

