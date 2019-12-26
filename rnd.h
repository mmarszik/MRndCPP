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

#if defined( USE_RND_SIM_LIN_00 )
    #include "use_rnd_sim_lin_00.h"
#elif  defined( USE_RND_SIM_LIN_01 )
    #include "use_rnd_sim_lin_01.h"
#elif  defined( USE_RND_SIM_LIN_02 )
    #include "use_rnd_sim_lin_02.h"
#elif  defined( USE_RND_SIM_LIN_04 )
    #include "use_rnd_sim_lin_04.h"
#elif  defined( USE_RND_SIM_LIN_05 )
    #include "use_rnd_sim_lin_05.h"
#elif  defined( USE_RND_SIM_LIN_06 )
    #include "use_rnd_sim_lin_06.h"

#elif  defined( USE_RND_FIB_0 )
    #include "use_rnd_fib_0.h"
#elif  defined( USE_RND_FIB_0a )
    #include "use_rnd_fib_0a.h"
#elif  defined( USE_RND_FIB_1 )
    #include "use_rnd_fib_1.h"
#elif  defined( USE_RND_FIB_1a )
    #include "use_rnd_fib_1a.h"
#elif  defined( USE_RND_FIB_2 )
    #include "use_rnd_fib_2.h"
#elif  defined( USE_RND_FIB_3 )
    #include "use_rnd_fib_3.h"
#elif  defined( USE_RND_FIB_2a )
    #include "use_rnd_fib_2a.h"
#elif  defined( USE_RND_FIB_3a )
    #include "use_rnd_fib_3a.h"
#elif  defined( USE_RND_FIB_4 )
    #include "use_rnd_fib_4.h"
#elif  defined( USE_RND_FIB_5 )
    #include "use_rnd_fib_5.h"
#elif  defined( USE_RND_FIB_6 )
    #include "use_rnd_fib_6.h"
#elif  defined( USE_RND_FIB_7 )
    #include "use_rnd_fib_7.h"
#elif  defined( USE_RND_FIB_8 )
    #include "use_rnd_fib_8.h"
#elif  defined( USE_RND_FIB_9 )
    #include "use_rnd_fib_9.h"
#elif  defined( USE_RND_FIB_10 )
    #include "use_rnd_fib_10.h"
#elif  defined( USE_RND_FIB_11 )
    #include "use_rnd_fib_11.h"
#elif  defined( USE_RND_FIB_12 )
    #include "use_rnd_fib_12.h"
#elif  defined( USE_RND_FIB_13 )
    #include "use_rnd_fib_13.h"
#elif  defined( USE_RND_FIB_14 )
    #include "use_rnd_fib_14.h"
#elif  defined( USE_RND_FIB_15 )
    #include "use_rnd_fib_15.h"
#elif  defined( USE_RND_FIB_16 )
    #include "use_rnd_fib_16.h"
#elif  defined( USE_RND_FIB_17 )
    #include "use_rnd_fib_17.h"
#elif  defined( USE_RND_FIB_18 )
    #include "use_rnd_fib_18.h"
#elif  defined( USE_RND_FIB_19 )
    #include "use_rnd_fib_19.h"
#elif  defined( USE_RND_FIB_20 )
    #include "use_rnd_fib_20.h"
#elif  defined( USE_RND_SFIB_0 )
    #include "use_rnd_sfib_0.h"

#elif  defined( USE_RND_COMP_0 )
    #include "use_rnd_comp_0.h"
#elif  defined( USE_RND_COMP_1 )
    #include "use_rnd_comp_1.h"
#elif  defined( USE_RND_COMP_2 )
    #include "use_rnd_comp_2.h"
#elif  defined( USE_RND_COMP_3 )
    #include "use_rnd_comp_3.h"
#elif  defined( USE_RND_COMP_4 )
    #include "use_rnd_comp_4.h"
#elif  defined( USE_RND_COMP_5 )
    #include "use_rnd_comp_5.h"
#elif  defined( USE_RND_COMP_6 )
    #include "use_rnd_comp_6.h"
#elif  defined( USE_RND_COMP_7 )
    #include "use_rnd_comp_7.h"

#elif  defined( USE_RND_LIN_1 )
    #include "use_rnd_lin_1.h"
#elif  defined( USE_RND_LIN_1a )
    #include "use_rnd_lin_1a.h"
#elif  defined( USE_RND_LIN_2 )
    #include "use_rnd_lin_2.h"
#elif  defined( USE_RND_LIN_2a )
    #include "use_rnd_lin_2a.h"
#elif  defined( USE_RND_LIN_2b )
    #include "use_rnd_lin_2b.h"
#elif  defined( USE_RND_LIN_2c )
    #include "use_rnd_lin_2c.h"

#elif  defined( USE_RND_MLIN_0 )
    #include "use_rnd_mlin_0.h"

#elif  defined( USE_RND_RANLUX_48 )
    #include "use_rnd_ranlux_48.h"
#elif  defined( USE_RND_MT19937_64 )
    #include "use_rnd_mt19937_64.h"
#elif  defined( USE_RND_KNUTH_B )
    #include "use_rnd_knuth_b.h"

#elif  defined( USE_RND_SKIP_LIN_1 )
    #include "use_rnd_skip_lin_1.h"
#elif  defined( USE_RND_SKIP_LIN_2b )
    #include "use_rnd_skip_lin_2b.h"

#elif  defined( USE_RND_XOR2_0 )
    #include "use_rnd_xor2_0.h"

#elif  defined( USE_RND_ADD_ROT_0a )
    #include "use_rnd_add_rot_0a.h"
#elif  defined( USE_RND_ADD_ROT_0b )
    #include "use_rnd_add_rot_0b.h"
#elif  defined( USE_RND_ADD_ROT_0c )
    #include "use_rnd_add_rot_0c.h"
#elif  defined( USE_RND_ADD_ROT_1a )
    #include "use_rnd_add_rot_1a.h"
#elif  defined( USE_RND_ADD_ROT_1b )
    #include "use_rnd_add_rot_1b.h"
#elif  defined( USE_RND_ADD_ROT_1c )
    #include "use_rnd_add_rot_1c.h"
#elif  defined( USE_RND_ADD_ROT_2a )
    #include "use_rnd_add_rot_2a.h"
#elif  defined( USE_RND_ADD_ROT_2b )
    #include "use_rnd_add_rot_2b.h"
#elif  defined( USE_RND_ADD_ROT_2c )
    #include "use_rnd_add_rot_2c.h"
#elif  defined( USE_RND_ADD_ROT_3a )
    #include "use_rnd_add_rot_3a.h"
#elif  defined( USE_RND_ADD_ROT_3b )
    #include "use_rnd_add_rot_3b.h"
#elif  defined( USE_RND_ADD_ROT_3c )
    #include "use_rnd_add_rot_3c.h"
#elif  defined( USE_RND_ADD_ROT_4a )
    #include "use_rnd_add_rot_4a.h"
#elif  defined( USE_RND_ADD_ROT_4b )
    #include "use_rnd_add_rot_4b.h"
#elif  defined( USE_RND_ADD_ROT_4c )
    #include "use_rnd_add_rot_4c.h"
#elif  defined( USE_RND_ADD_ROT_5a )
    #include "use_rnd_add_rot_5a.h"
#elif  defined( USE_RND_ADD_ROT_5b )
    #include "use_rnd_add_rot_5b.h"
#elif  defined( USE_RND_ADD_ROT_5c )
    #include "use_rnd_add_rot_5c.h"
#elif  defined( USE_RND_ADD_ROT_6a )
    #include "use_rnd_add_rot_6a.h"
#elif  defined( USE_RND_ADD_ROT_6b )
    #include "use_rnd_add_rot_6b.h"
#elif  defined( USE_RND_ADD_ROT_6c )
    #include "use_rnd_add_rot_6c.h"
#elif  defined( USE_RND_ADD_ROT_7a )
    #include "use_rnd_add_rot_7a.h"
#elif  defined( USE_RND_ADD_ROT_7b )
    #include "use_rnd_add_rot_7b.h"
#elif  defined( USE_RND_ADD_ROT_7c )
    #include "use_rnd_add_rot_7c.h"

#endif
