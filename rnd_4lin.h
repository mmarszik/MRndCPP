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

class Rnd4Lin : public RndBase {
private:
    TMRND_U64 a,b,c,d,e;
    TMRND_U32 s1,s2,s3,s4,s5;
private:
    static TMRND_U32 perm( CMRND_U64 a, CMRND_U64 b, CMRND_U64 c) {
        return (TMRND_U32) ( (a >> (64-11)) | ((b >> (64-11)) << 11) | ((c >> (64-10))<<22) );
    }
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
        a = __sd ^ 0x140CA25429E95B21ull;
        b = __sd ^ 0x4A37D2E9E5D5C6A3ull;
        c = __sd ^ 0xD76C0A509DACE77Dull;
        d = __sd ^ 0x2C5A00D35721B705ull;
        e = __sd ^ 0x944AC881D66E20A3ull;
        s1 = s2 = s3 = s4 = s5 = 0;
    }
    TMRND_RESULT operator ()() {
        next( a , s1 ,  6 , 195366727ull,  3788059271ull );
        next( b , s2 , 10 , 201733549ull,  6004841807ull );
        next( c , s3 , 12 ,  87604849ull, 11409409549ull );
        next( d , s4 , 16 , 219699203ull, 16379749871ull );
        next( e , s5 , 18 , 186217943ull, 36457959557ull );
        switch( a >> 61 ) {
            case 0:  return perm(b,c,d) ^ (e>>31);
            case 1:  return perm(b,c,d) ^ (e>>32);
            case 2:  return perm(b,d,c) ^ (e>>31);
            case 3:  return perm(b,d,c) ^ (e>>32);
            case 4:  return perm(c,b,d) ^ (e>>32);
            case 5:  return perm(c,d,b) ^ (e>>32);
            case 6:  return perm(d,b,c) ^ (e>>32);
            default: return perm(d,c,b) ^ (e>>32);
        }
    }

};

