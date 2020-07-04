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
/// @created on 2020-01-08 17:09:03 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 6c40e537-b017-4b16-ac6c-d93f81b29af9                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////


#ifdef MRND_SANDBOX02

#include "rnd.h"
#include <iostream>
#include <MxCPP/mx_array.h>

using namespace MRnd;

template<typename T>
inline static void rot( T &v , CMRND_UINT bits ) {
    v = ( (v << 1) | ( ( v >> ( bits - 1 ) ) & 1 ) ) & ((1u<<bits)-1);
}


constexpr TMRND_UINT SIZE1 = 13;
constexpr TMRND_UINT SIZE2 = 15;
constexpr TMRND_UINT SIZE = SIZE1 + SIZE2;
constexpr TMRND_UINT BITS =  12;
constexpr TMRND_UINT MASK = ((1u<<BITS)-1);
constexpr TMRND_UINT P1 = 9;
constexpr TMRND_UINT P2 = 7;

using TBuff = MxArray<TMRND_UINT,SIZE1+SIZE2>;


int main( int argc , char *argv[] ) {
    (void)argc;
    (void)argv;
    TMRnd rnd(1250);
    TBuff buff, copy, mask;
    for( TMRND_UINT i=0 ; i<SIZE ; i++ ) {
        mask[i] = MASK ^ ( 1u << ( rnd() % (BITS-1) ) );
        buff[i] = rnd() & mask[i];

    }
    TMRND_UINT copy_crc=0,crc=0;
    TMRND_UINT i1 = 0;
    TMRND_UINT i2 = SIZE1;
    TMRND_ULONG loop=0;
    TMRND_UINT found = 0;
    bool init = false;
    while( found < 15 ) {
        if( i1 >= SIZE1 ) i1 = 0;
        if( i2 >= SIZE  ) i2 = SIZE1;
        crc -= buff[i1] + buff[i2];
        buff[i1] = (buff[i1] + P1) & MASK;
        buff[i2] = (buff[i2] + P2) & MASK;
        rot(buff[i1],BITS);
        rot(buff[i2],BITS);
        crc += buff[i1] + buff[i2];
        loop ++ ;
        if( init ) {
            if( crc == copy_crc ) {
                TMRND_UINT i=0;
                while( i<SIZE && buff[i] == copy[i] ) {
                    i++;
                }
                if( i == SIZE ) {
                    std::cout << "found: " << loop << " " << i1 << " " << i2 << std::endl;
                    loop = 0;
                    found ++ ;
                }
            }
        } else {
            if( loop == 3000000 ) {
                crc = 0;
                for( TMRND_UINT i=0 ; i<SIZE ; i++ ) {
                    crc += copy[i] = buff[i];
                }
                loop = 0;
                copy_crc = crc;
                init = true;
            }
        }
        i1++;
        i2++;
    }
    return 0;
}


#endif
