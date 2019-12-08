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
/// @created on 2019-12-08 03:06:19 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token d24a9bbd-9366-41d3-ae29-df879dbbbb89                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "defs.h"

#ifdef TEST00_PROGRAM

#include <iostream>
#include <random>
#include "rnd.h"

int main(int argc, char *argv[]) {

//    std::random_device rd;
//    ultyp seed = 0;
//    for( utyp i=0 ; i<8 ; i++ ) {
//        seed = ( seed << 8 ) | ( rd() & 0xFF );
//    }

    cultyp seed = 1234567890ull;
    TRnd rnd( seed );
    ultyp x = 0;
    for( utyp i=0 ; i<6 ; i++ ) {
        std::cout << rnd() << std::endl;
    }
    for( ultyp i=0 ; i<2000000000ull ; i++ ) {
        x += rnd();
    }
    std::cout << x << std::endl;
    return 0;
}

#endif
