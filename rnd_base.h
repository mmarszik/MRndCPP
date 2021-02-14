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
/// @created on 2019-12-01 21:23:09 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 440f92a5-ffc1-4a06-b85b-fccb8c104358                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include <cstring>

#include "defs.h"
#include <MiscCPP/m_limits.h>

namespace MRnd {

class RndBase {
public:
    using result_type = TMRND_RESULT;

private:
    //MM: Get float between <0,1)
    template<typename T>
    T _precisionFloat() {
        T r = static_cast<T>( 0.0 );
        T b = static_cast<T>( 0.5 );
        while( r + b > r ) {
            if( (*this)() & (1u<<28) ) {
                r += b;
            }
            b /= 2;
        }
        return r;
    }

    //MM: Get float between <_min,_max)
    template<typename T>
    T _precisionFloat(const T _min, const T _max) {
        return _precisionFloat<T>() * ( _max - _min ) + _min;
    }


public:
    static TMRND_RESULT max() {
        return MLimits<TMRND_RESULT>::max();
    }
    static TMRND_RESULT min() {
        return 0;
    }

    virtual TMRND_RESULT operator()() = 0;

    TMRND_IRESULT range(CMRND_IRESULT _min, CMRND_IRESULT _max) {
        return static_cast<TMRND_IRESULT>((*this)() % (_max - _min + 1)) + _min;
    }
    TMRND_IRESULT range(CMRND_IRESULT _max) {
        return range(0,_max);
    }

    double precisionFloat(const double _min, const double _max) {
        return _precisionFloat<double>(_min,_max);
    }

    double precisionFloat() {
        return _precisionFloat<double>();
    }

    //MM: Get float between <_min,_max>
    TMRND_F64 getFloat(CMRND_F64 _min, CMRND_F64 _max) {
        return ( _max - _min ) * (*this)() / max() + _min;
    }

    //MM: Get float between <0,_max>
    TMRND_F64 getFloat(CMRND_F64 _max=1) {
        return getFloat(0,_max);
    }

#ifdef MRND_RANDOM_STRINGS

    //MM: Below method return buffer of letters.
    constexpr static const char* buffLetters() {
        return "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    }

    //MM: Below method return buffer of small letters.
    constexpr static const char* buffSmallLetters() {
        return "abcdefghijklmnopqrstuvwxyz";
    }

    //MM: Below method return buffer of digits.
    constexpr static const char* buffDigits() {
        return "0123456789";
    }

    //MM: The following method returns some subset of ascii characters.
    constexpr static const char* buffPrintable() {
        return "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_";
    }

    //MM: The very efficient and very dangerous method. The buffor
    //MM: 'str' have to allocated 'size'+1 bytes of memory in order
    //MM: place char zero on the end of string.
    char* string(char str[], unsigned int sizeOut, const char chars[], const unsigned int sizeChars) {
        for( unsigned int i=0 ; i<sizeOut ; i++ ) {
            str[i] = chars[ this->range( sizeChars-1 ) ];
        }
        str[sizeOut] = '\0';
        return str;
    }
    char* string(char str[], unsigned int sizeOut, const char chars[], const unsigned int sizeChars, const unsigned int skip) {
        for( unsigned int i=0 ; i<sizeOut ; i++ ) {
            for( unsigned int i=0 ; i<skip ; i++ ) {
                (*this)();
            }
            str[i] = chars[ this->range( sizeChars-1 ) ];
        }
        str[sizeOut] = '\0';
        return str;
    }
    char* letters(char str[], const unsigned int size) {
        const char* const chars = buffLetters();
        return string( str , size , chars , strlen(chars) );
    }
    char* letters(char str[], const unsigned int size, const unsigned int skip) {
        const char* const chars = buffLetters();
        return string( str , size , chars , strlen(chars) , skip );
    }

    char* smallLetters(char str[], const unsigned int size) {
        const char* const chars = buffSmallLetters();
        return string( str , size , chars , strlen(chars) );
    }
    char* smallLetters(char str[], const unsigned int size, const unsigned int skip) {
        const char* const chars = buffSmallLetters();
        return string( str , size , chars , strlen(chars) , skip );
    }

    char* digits(char str[], const unsigned int size) {
        const char* const chars = buffDigits();
        return string( str , size , chars , strlen(chars) );
    }
    char* digits(char str[], const unsigned int size, const unsigned int skip) {
        const char* const chars = buffDigits();
        return string( str , size , chars , strlen(chars) , skip );
    }

    char* printable(char str[], const unsigned int size) {
        const char* const chars = buffPrintable();
        return string( str , size , chars , strlen(chars) );
    }
    char* printable(char str[], const unsigned int size, const unsigned int skip) {
        const char* const chars = buffPrintable();
        return string( str , size , chars , strlen(chars) , skip );
    }

    char oneLetter() {
        constexpr static const char* const chars = buffLetters();
        constexpr static const unsigned int size = strlen(chars);
        return chars[ this->range( size-1 ) ];
    }
    char oneLetter( const unsigned int skip) {
        for( unsigned int i=0 ; i<skip ; i++ ) {
            (*this)();
        }
        constexpr static const char* const chars = buffLetters();
        constexpr static const unsigned int size = strlen(chars);
        return chars[ this->range( size-1 ) ];
    }

    char oneSmallLetter() {
        constexpr static const char* const chars = buffSmallLetters();
        constexpr static const unsigned int size = strlen(chars);
        return chars[ this->range( size-1 ) ];
    }
    char oneSmallLetter( const unsigned int skip) {
        for( unsigned int i=0 ; i<skip ; i++ ) {
            (*this)();
        }
        constexpr static const char* const chars = buffSmallLetters();
        constexpr static const unsigned int size = strlen(chars);
        return chars[ this->range( size-1 ) ];
    }

    char oneDigit() {
        constexpr static const char* const chars = buffDigits();
        constexpr static const unsigned int size = strlen(chars);
        return chars[ this->range( size-1 ) ];
    }
    char oneDigit( const unsigned int skip) {
        for( unsigned int i=0 ; i<skip ; i++ ) {
            (*this)();
        }
        constexpr static const char* const chars = buffDigits();
        constexpr static const unsigned int size = strlen(chars);
        return chars[ this->range( size-1 ) ];
    }

    char onePrintable() {
        constexpr static const char* const chars = buffPrintable();
        constexpr static const unsigned int size = strlen(chars);
        return chars[ this->range( size-1 ) ];
    }
    char onePrintable( const unsigned int skip ) {
        for( unsigned int i=0 ; i<skip ; i++ ) {
            (*this)();
        }
        constexpr static const char* const chars = buffPrintable();
        constexpr static const unsigned int size = strlen(chars);
        return chars[ this->range( size-1 ) ];
    }

#endif

};

}
