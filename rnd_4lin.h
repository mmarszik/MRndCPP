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
/// @created on 2020-03-24 13:26:04 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 069ac6b3-98e6-4728-89d1-505e72039423                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "rnd_base.h"


class Rnd4Lin  : public RndBase {
private:
    TMRND_U64 a,b,c,d;
    TMRND_U32 sa,sb,sc,sd;
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
    Rnd4Lin( CMRND_U64 __sd) {
        seed( __sd );
    }
    void seed( CMRND_U64 __sd ) {
        a = __sd ^ 0x055910041214AED9ULL;
        b = __sd ^ 0xAC1144C2DA18253EULL;
        c = __sd ^ 0xD775B26A5E40A18AULL;
        d = __sd ^ 0xC22556BCAAB6EC12ULL;
        sa = sb = sc = sd = 0;
    }
    TMRND_RESULT operator ()() {
        next( a , sa , 10 , 119821673ull,  53695357673ull );
        next( b , sb , 12 , 174990143ull,  67869171119ull );
        next( c , sc , 16 , 139917857ull,  18819389437ull );
        next( d , sd , 18 ,  11744023ull,  65463955637ull );
        return (TMRND_RESULT) (
            (
              ( ( a >> (64-11) ) <<  0 ) |
              ( ( b >> (64-11) ) << 11 ) |
              ( ( c >> (64-10) ) << 22 )
            ) ^ ( d >> 32 )
        );
    }

};

