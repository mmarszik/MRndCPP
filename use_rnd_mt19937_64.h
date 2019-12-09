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
/// @created on 2019-12-08 03:01:00 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token b16b7874-0043-4a8e-82b2-466e9cf64f8d                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <random>

#include "rnd_base.h"

class TRnd : public std::mt19937_64 {
public:
    typedef RndBase::TYPE_RESULT TYPE_RESULT;

    TRnd( std::mt19937_64::result_type __sd) : std::mt19937_64(__sd) {
    }

    static TYPE_RESULT max() {
        return std::numeric_limits<TYPE_RESULT>::max();
    }

    TYPE_RESULT operator()() {
        return static_cast<TYPE_RESULT>( std::mt19937_64::operator ()() );
    }

};


/* TEST00
time ./MRndCPP 
2458479412
56640046
2419309898
2204864253
607697875
4022608612
576451750571510624

real	0m0.704s
user	0m0.700s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
655014610
3386838144
192173729
1854295942
901277944
864046005
576472046083594020

real	0m1.602s
user	0m1.602s
sys	0m0.000s
*/
