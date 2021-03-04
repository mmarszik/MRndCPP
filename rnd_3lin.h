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
/// @created on 2020-03-31 16:40:30 CEST                              //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token b9bd7b39-f7a3-4e09-baa4-f4d6bc6e8b20                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_base.h"

namespace MRnd {

class Rnd3Lin : public RndBase {
private:
    TMRND_U64 a,b,c;
    TMRND_U32 sa,sb,sc;
private:
    static bool test( TMRND_U32 &s , CMRND_U32 max) {
        if( s++ < max ) {
            return false;
        }
        s = 0;
        return true;
    }
    static void next( TMRND_U64 &v, CMRND_U64 A, CMRND_U64 B ) {
        v = v * A + B;
    }
    static void next( TMRND_U64 &v, TMRND_U32 &s, CMRND_U32 max, CMRND_U64 A, CMRND_U64 B ) {
        next( v , A , B );
        if( test( s , max ) ) {
            next( v , A , B );
        }
    }
public:
    Rnd3Lin( CMRND_U64 __sd = 0x25EC1CDA937545ECull) {
        seed( __sd );
    }
    void seed( CMRND_U64 __sd ) {
        a = __sd ^ 0x140CA25429E95B21ull;
        b = __sd ^ 0x4A37D2E9E5D5C6A3ull;
        c = __sd ^ 0xD76C0A509DACE77Dull;
        sa = sb = sc = 0;
    }
    TMRND_RESULT operator ()() {
        next( a , sa ,  6 , 195366727ull,  3788059271ull );
        next( b , sb , 10 , 201733549ull,  6004841807ull );
        next( c , sc , 12 ,  87604849ull, 11409409549ull );
        return (TMRND_RESULT) ( ( ( a >> 48 ) | ( ( b >> 48 ) << 16 ) ) ^ ( c >> 32 ) );
    }

};

}
