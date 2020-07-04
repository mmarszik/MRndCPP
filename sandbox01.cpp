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
/// @created on 2020-01-04 12:21:36 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token e6373efc-b018-4ff3-99d6-f0bccfcd9219                       //
/// @brief: generate the really random numbers                        //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#ifdef SANDBOX01

#include "defs.h"
#include <iostream>
#include <random>
#include <MiscCPP/m_limits.h>

using namespace MRnd;

int main( int argc , char *argv[] ) {
    TMRND_UINT loops = ( 1ull << 14 );
    if( argc == 2 ) {
        loops = 1ull << atoi(argv[1]);
    }
    std::random_device rd;
    for( TMRND_ULONG loop=0 ; loop<loops ; loop++ ) {
        CMRND_UINT BITS  = 1;
        CMRND_UINT SHIFT = 6;
        CMRND_UINT SKIP  = 30000*4;
        TMRND_ULONG v    = 0;
        for( TMRND_UINT i=0 ; i<MLimits<TMRND_ULONG>::digits() ; i += BITS ) {
            for( TMRND_UINT i=0 ; i<SKIP ; i++ ) {
                rd();
            }
            v = ( v << BITS ) | ( ( rd() >> SHIFT ) & ((1u<<BITS)-1) );
        }
        std::cout << "0x" <<  std::hex << v << "ull, ";
        if( ((loop + 1) & 63) == 0 ) {
            std::cout << "\n";
        }
//        std::cout.flush();
    }
    std::cout << std::endl;
    std::cout <<  "generated " << std::dec << loops << " numbers" << std::endl;
    return 0;
}

#endif
