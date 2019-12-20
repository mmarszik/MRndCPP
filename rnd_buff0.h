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

#include "rnd.h"

class RndBuff0  {
private:
    TRnd  &rnd;      // Pseudo random number generator.
    TMRND_UINT min;  // Min range.
    TMRND_UINT max;  // Max range.

public:
    RndBuff0( TRnd &rnd, CMRND_UINT min=0, CMRND_UINT max=0 ) : rnd(rnd) {
        setMinMax( min, max );
    }
    void setMinMax( CMRND_UINT min, CMRND_UINT max  ) {
        this->min = min;
        this->max = max;
    }
    TRnd::TYPE_RESULT operator()() {
        return static_cast<TRnd::TYPE_RESULT>( rnd() % (max - min + 1) + min );
    }
};

using TRndBuff = RndBuff0;
