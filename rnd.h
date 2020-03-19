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
/// @created on 2019-11-30, 09:14:33 CET                              //
/// @author MMarszik (Mariusz Marszalkowski sqnett.com)               //
/// @email mmarszik@gmail.com                                         //
/// @package MRndCPP                                                  //
/// @token becb9f33-4018-48b1-b41d-6147f9dedb2c                       //
/// @brief:                                                           //
///                                                                   //
////////////////////////////////////////////////////////////////////////

#pragma once

#include "defs.h"

#if defined( USE_RND_WYHASH64_0 )
    #include "use_rnd_wyhash64_0.h"
#elif  defined( USE_RND_WYHASH64M_0 )
    #include "use_rnd_wyhash64m_0.h"

#elif  defined( USE_RND_FIB_1 )
    #include "use_rnd_fib_1.h"
#elif  defined( USE_RND_FIB_2 )
    #include "use_rnd_fib_2.h"
#elif  defined( USE_RND_FIB_3 )
    #include "use_rnd_fib_3.h"
#elif  defined( USE_RND_FIB_4 )
    #include "use_rnd_fib_4.h"
#elif  defined( USE_RND_FIB_5 )
    #include "use_rnd_fib_5.h"
#elif  defined( USE_RND_FIB_6 )
    #include "use_rnd_fib_6.h"

#elif  defined( USE_RND_RANLUX_48 )
    #include "use_rnd_ranlux_48.h"
#elif  defined( USE_RND_MT19937_64 )
    #include "use_rnd_mt19937_64.h"

#elif  defined( USE_RND_MLIN_0 )
    #include "use_rnd_mlin_0.h"
#elif  defined( USE_RND_BLIN_0 )
    #include "use_rnd_blin_0.h"

#elif  defined( USE_RND_LIN_1 )
    #include "use_rnd_lin_1.h"
#elif  defined( USE_RND_LIN_2 )
    #include "use_rnd_lin_2.h"
#elif  defined( USE_RND_LIN_3 )
    #include "use_rnd_lin_3.h"
#elif  defined( USE_RND_LIN_4 )
    #include "use_rnd_lin_4.h"
#elif  defined( USE_RND_LIN_5 )
    #include "use_rnd_lin_5.h"
#elif  defined( USE_RND_LIN_6 )
    #include "use_rnd_lin_6.h"


#endif
