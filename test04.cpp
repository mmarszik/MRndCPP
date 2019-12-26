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
/// @created on 2019-12-24 16:20:34 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 93e26a40-991e-44ed-9a0f-e76c944bd997                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#ifdef TEST04_PROGRAM

#include <iostream>
#include <random>
#include <ctime>

using ultyp = unsigned long long;
using utyp  = unsigned int;
using cultyp = const ultyp;
using cutyp  = const utyp;

template<class TRND,cutyp SIZE1, cutyp SIZE2>
class RndBuff1 {
private:
    TRND  &rnd;   // Pseudo random number generator.
    utyp  min;    // Min range.
    utyp  max;    // Max range.
    utyp  buff[SIZE1+SIZE2];   // N-Cyclic buffer to number generator.
    utyp  i1,i2;  // Index to the next given value.
    utyp  select; // Select first or second buffer.

private:
    void reset() {
        for( utyp i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd() % (max-min+1)+min;
        }
    }
public:
    RndBuff1( TRND &rnd, cutyp min=0, cutyp max=0 ) : rnd(rnd) {
        setMinMax(min,max);
    }
    void setMinMax(cutyp min, cutyp max   ) {
        this->min = min;
        this->max = max;
        i1 = SIZE1;
        i2 = SIZE1+SIZE2;
        select = 0;
    }
    utyp operator()() {
        if( i1 == SIZE1 && i2 == SIZE1+SIZE2 ) {
            reset();
        }
        if( 1 & select++ ) {
            if( i1 == SIZE1 ) {
                i1 = 0;
            }
            return buff[i1++];
        }
        if( i2 == SIZE1+SIZE2 ) {
            i2 = SIZE1;
        }
        return buff[i2++];
    }

};

template<class TRND,cutyp SIZE1, cutyp SIZE2>
class RndBuff2 {
private:
    TRND  &rnd;   // Pseudo random number generator.
    utyp  min;    // Min range.
    utyp  max;    // Max range.
    utyp  *const buff;   // N-Cyclic buffer to number generator.
    utyp  i1,i2;  // Index to the next given value.
    utyp  select; // Select first or second buffer.

private:
    void reset() {
        for( utyp i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd() % (max-min+1)+min;
        }
    }
public:
    RndBuff2( TRND &rnd, cutyp min=0, cutyp max=0 ) : rnd(rnd), buff(new utyp[SIZE1+SIZE2]) {
        setMinMax(min,max);
    }
    ~RndBuff2() {
        delete[]buff;
    }
    void setMinMax(cutyp min, cutyp max) {
        this->min = min;
        this->max = max;
        i1 = SIZE1;
        i2 = SIZE1+SIZE2;
        select = 0;
    }
    utyp operator()() {
        if( i1 == SIZE1 && i2 == SIZE1+SIZE2 ) {
            reset();
        }
        if( 1 & select++ ) {
            if( i1 == SIZE1 ) {
                i1 = 0;
            }
            return buff[i1++];
        }
        if( i2 == SIZE1+SIZE2 ) {
            i2 = SIZE1;
        }
        return buff[i2++];
    }

};


template<class TRND,cutyp SIZE1, cutyp SIZE2>
class RndBuff3 {
private:
    TRND  &rnd;   // Pseudo random number generator.
    utyp  min;    // Min range.
    utyp  max;    // Max range.
    utyp  *const buff;  // N-Cyclic buffer to number generator.
    cutyp *i1;          // Index to the next given value.
    cutyp *i2;
    utyp  select; // Select first or second buffer.

private:
    void reset() {
        for( utyp i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd() % (max-min+1)+min;
        }
    }
public:
    RndBuff3( TRND &rnd, cutyp min=0, cutyp max=0 ) : rnd(rnd), buff(new utyp[SIZE1+SIZE2]) {
        setMinMax(min,max);
    }
    ~RndBuff3() {
        delete[] buff;
    }
    void setMinMax(cutyp min, cutyp max) {
        this->min = min;
        this->max = max;
        i1 = buff+SIZE1;
        i2 = buff+SIZE1+SIZE2;
        select = 0;
    }
    utyp operator()() {
        if( 1 & select++ ) {
            if( i1 == buff+SIZE1 ) {
                if( i2 == buff+SIZE1+SIZE2 ) {
                    reset();
                }
                i1 = buff;
            }
            return *i1++;
        } else {
            if( i2 == buff+SIZE1+SIZE2 ) {
                if(i1 == buff+SIZE1) {
                    reset();
                }
                i2 = buff+SIZE1;
            }
            return *i2++;
        }
    }

};


template<class TRND,cutyp SIZE1, cutyp SIZE2>
class RndBuff4 {
private:
    TRND  &rnd;   // Pseudo random number generator.
    utyp  min;    // Min range.
    utyp  max;    // Max range.
    utyp  buff[SIZE1+SIZE2];  // N-Cyclic buffer to number generator.
    cutyp *i1;          // Index to the next given value.
    cutyp *i2;
    utyp  select; // Select first or second buffer.

private:
    void reset() {
        for( utyp i=0 ; i<SIZE1+SIZE2 ; i++ ) {
            buff[i] = rnd() % (max-min+1)+min;
        }
    }
public:
    RndBuff4( TRND &rnd, cutyp min=0, cutyp max=0 ) : rnd(rnd) {
        setMinMax(min,max);
    }
    void setMinMax(cutyp min, cutyp max) {
        this->min = min;
        this->max = max;
        i1 = buff+SIZE1;
        i2 = buff+SIZE1+SIZE2;
        select = 0;
    }
    utyp operator()() {
        if( 1 & select++ ) {
            if( i1 == buff+SIZE1 ) {
                if( i2 == buff+SIZE1+SIZE2 ) {
                    reset();
                }
                i1 = buff;
            }
            return *i1++;
        } else {
            if( i2 == buff+SIZE1+SIZE2 ) {
                if(i1 == buff+SIZE1) {
                    reset();
                }
                i2 = buff+SIZE1;
            }
            return *i2++;
        }
    }

};


constexpr ultyp LOOPS = 1ull << 32;
constexpr utyp  MIN = 11;
constexpr utyp  MAX = 38;
constexpr utyp  SIZE1 = 1249;
constexpr utyp  SIZE2 = 1699;


int main() {
    cultyp mainSeed = 1234567890ull;
    time_t times[5] = {0,0,0,0,0};
    std::mt19937_64 rnd, rndSeed(mainSeed);

    for( utyp test=0 ; true ; test++ ) {
        cultyp seed = rndSeed();
        std::cout << "seed [" << seed << "] nr.:" << (test+1) << std::endl;

        {
            std::cout << "raw mt start   ";
            ultyp sum = 0;
            rnd.seed( seed );
            std::uniform_int_distribution<int> dist(MIN,MAX);
            const time_t start = time(NULL);
            for( ultyp loop=0 ; loop<LOOPS ; loop++ ) {
                sum += dist( rnd );
            }
            times[0] += time(NULL) - start;
            std::cout << sum << " " << times[0] << std::endl;
        }
        {
            std::cout << "RndBuff1 start ";
            ultyp sum = 0;
            rnd.seed( seed );
            RndBuff1<std::mt19937_64,SIZE1,SIZE2> rndBuf(rnd,MIN,MAX);
            const time_t start = time(NULL);
            for( ultyp loop=0 ; loop<LOOPS ; loop++ ) {
                sum += rndBuf();
            }
            times[1] += time(NULL) - start;
            std::cout << sum << " " << times[1] << std::endl;
        }
        {
            std::cout << "RndBuff2 start ";
            ultyp sum = 0;
            rnd.seed( seed );
            RndBuff2<std::mt19937_64,SIZE1,SIZE2> rndBuf(rnd,MIN,MAX);
            const time_t start = time(NULL);
            for( ultyp loop=0 ; loop<LOOPS ; loop++ ) {
                sum += rndBuf();
            }
            times[2] += time(NULL) - start;
            std::cout << sum << " " << times[2] << std::endl;
        }
        {
            std::cout << "RndBuff3 start ";
            ultyp sum = 0;
            rnd.seed( seed );
            RndBuff3<std::mt19937_64,SIZE1,SIZE2> rndBuf(rnd,MIN,MAX);
            const time_t start = time(NULL);
            for( ultyp loop=0 ; loop<LOOPS ; loop++ ) {
                sum += rndBuf();
            }
            times[3] += time(NULL) - start;
            std::cout << sum << " " << times[3] << std::endl;
        }
        {
            std::cout << "RndBuff4 start ";
            ultyp sum = 0;
            rnd.seed( seed );
            RndBuff4<std::mt19937_64,SIZE1,SIZE2> rndBuf(rnd,MIN,MAX);
            const time_t start = time(NULL);
            for( ultyp loop=0 ; loop<LOOPS ; loop++ ) {
                sum += rndBuf();
            }
            times[4] += time(NULL) - start;
            std::cout << sum << " " << times[4] << std::endl;
        }

    }


    return 0;
}

#endif
