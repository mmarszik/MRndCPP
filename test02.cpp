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
/// @created on 2019-12-18 02:48:12 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token b51eefca-bfe8-40a2-91c3-6640138f8fe8                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////


#ifdef MRND_TEST02_PROGRAM

#include "defs.h"
#include <iostream>
#include <limits>
#include <climits>
#include <typeinfo>

#include <MiscCPP/m_limits.h>

using namespace MRnd;

std::ostream& operator<<( std::ostream& dest, __uint128_t value ) {
    std::string buf;
    while( value ) {
        char c[2] = "0";
        c[0] += value % 10;
        value /= 10;
        buf = c + buf;
    }
    if( buf.size() == 0 ) {
        buf = "0";
    }
    dest << buf;
    return dest;
}

std::ostream& operator<<( std::ostream& dest, __int128_t value ) {
    if( value < 0 ) {
        dest << "-";
        dest << (__uint128_t) -value;
    } else {
        dest << (__uint128_t) value;
    }
    return dest;
}


int main() {
    std::cout << MLimits<TMRND_ULONGLONG>::digits() << std::endl;
    std::cout << MLimits<TMRND_ULONGLONG>::max() << std::endl;
    std::cout << MLimits<TMRND_ULONGLONG>::min() << std::endl;

    std::cout << MLimits<TMRND_LONGLONG>::digits() << std::endl;
    std::cout << MLimits<TMRND_LONGLONG>::max() << std::endl;
    std::cout << MLimits<TMRND_LONGLONG>::min() << std::endl;

    std::cout << std::numeric_limits<TMRND_ULONGLONG>::is_specialized << std::endl;
    std::cout << std::numeric_limits<TMRND_LONGLONG>::is_specialized << std::endl;

    std::cout << sizeof(__int128_t) * CHAR_BIT << std::endl;

    std::cout << std::numeric_limits<double>::digits << std::endl;

    std::cout << typeid(__int128).hash_code() << std::endl;
    std::cout << typeid(__int128_t).hash_code() << std::endl;
    std::cout << typeid(TMRND_LONGLONG).hash_code() << std::endl;
    return 0;
}

#endif
