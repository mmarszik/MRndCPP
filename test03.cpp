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
/// @created on 2019-12-23 11:05:06 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 7692dea4-6aea-4d5e-b687-7abd38f356fd                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////


#ifdef TEST03_PROGRAM

#include "defs.h"
#include <iostream>
#include "rnd.h"
#include "buffs.h"

int main( int argc , char *argv[] ) {
    TMRND_ULONG loops = 1ull << 13;
    if( argc == 2 ) {
        loops = 1ull << atoi(argv[1]);
    }
    CMRND_ULONG seed = 1234567890ull;
    TRnd rnd( seed );
    TRndBuff rndBuf(rnd,-23,23);
    TMRND_LONG x = 0;
    for( TMRND_UINT i=0 ; i<10 ; i++ ) {
        for( TMRND_UINT i=0 ; i<10000 ; i++ ) {
            rndBuf();
        }
        std::cout << rndBuf() << std::endl;
    }
    for( TMRND_ULONG i=0 ; i<loops ; i++ ) {
        for( TMRND_ULONG i=0 ; i<(1ull<<20u) ; i++ ) {
            x += rndBuf();
        }
        // simply hash/crc
        x = ((x>>32)^x) * (0xDE76057C215ED528ull+i);
    }
    std::cout << x << std::endl;
    return 0;
}

#endif





