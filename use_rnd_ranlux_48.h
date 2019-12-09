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
/// @created on 2019-12-08 03:01:10 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 1558b1d5-f930-4fcb-99b9-14149fee8f7f                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <random>
#include "rnd_base.h"

class TRnd : public std::ranlux48 {
public:
    typedef RndBase::TYPE_RESULT TYPE_RESULT;

    TRnd( std::ranlux48::result_type __sd) : std::ranlux48(__sd) {
    }

    static TYPE_RESULT max() {
        return std::numeric_limits<TYPE_RESULT>::max();
    }

    TYPE_RESULT operator()() {
        return static_cast<TYPE_RESULT>( std::ranlux48::operator ()() );
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

real	0m0.877s
user	0m0.868s
sys	0m0.004s
*/
/* TEST00
time ./MRndCPP 
466832028
523260929
3251403885
1732303310
1076958659
2680240179
576456069562290119

real	0m34.202s
user	0m34.188s
sys	0m0.012s
*/
/* TEST00
time ./MRndCPP 
466832028
523260929
3251403885
1732303310
1076958659
2680240179
576456069562290119

real	0m32.933s
user	0m32.917s
sys	0m0.000s
*/
/* TEST00
time ./MRndCPP 
466832028
523260929
3251403885
1732303310
1076958659
2680240179
576456069562290119

real	0m33.349s
user	0m33.333s
sys	0m0.008s
*/
