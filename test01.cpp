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
/// @created on 2019-12-08 03:06:32 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token fe854c6d-aa99-4649-ad4c-1b28612dabb8                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////


#ifdef MRND_TEST01_PROGRAM

#include "defs.h"
#include <cstdio>
#include <random>
#include <climits>
#include "rnd.h"

using namespace MRnd;

constexpr TMRND_U32 BUFFSIZE = ( 1 << 12 );

int main() {
    std::random_device rd;
    TMRND_U64 seed = 0;
    for( TMRND_U32 i=0 ; i<8 ; i++ ) {
        seed = ( seed << 8 ) | ( rd() & 0xFF );
    }
    TRnd rnd( seed );
    for( TMRND_U64 loop=0 ;true ; loop++ ) {
        TMRND_U32 buf[ BUFFSIZE ];
        for( TMRND_U32 i=0 ; i<BUFFSIZE ; i++) {
            buf[i] = rnd() ;
        }
        fwrite( buf, 1, sizeof(buf), stdout );
    }
    return 0;
}

#endif
