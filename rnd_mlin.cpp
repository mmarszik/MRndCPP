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
/// @created on 2019-12-08 03:04:58 CET                               //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token 8b874b3b-12f8-453e-9746-d9a9d38d6dc2                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#include "rnd_mlin.h"

const MxArray<TMRND_ULONG, RndMLin::SIZE1> RndMLin::A = {47419241ull, 12102661ull, 13794173ull, 21584377ull, 15157847ull, 10621591ull, 14256043ull, 18723209ull, 22706731ull, 22326617ull, 12112703ull, 16092161ull, 18569329ull, 12439723ull, 31530523ull, 14090221ull};
const MxArray<TMRND_ULONG, RndMLin::SIZE1> RndMLin::B = {15425444914155312697ull, 14096522162449405717ull, 15139298917997085001ull, 10591700710506094177ull, 10518945472650288103ull, 16104502190471396477ull, 17659737197056618361ull, 13989857496617634559ull, 10332662733093870833ull, 14995112524401473201ull, 13964140567185167767ull, 12902612179013087771ull, 17993561092619302769ull, 14589499923442078381ull, 16682475420714780749ull, 15499846147571735143ull};


