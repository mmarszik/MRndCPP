TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -O3
QMAKE_CXXFLAGS += -mtune=native
QMAKE_CXXFLAGS += -mavx

INCLUDEPATH += "vendor"

DEFINES += USE_RND_MLIN_0
DEFINES += USE_RND_BUFF_1a
DEFINES += USE_RND_F_BUFF_1a
#DEFINES += MX_USING_ARRAY_2
DEFINES += TEST03_PROGRAM


SOURCES += \
    test01.cpp \
    test00.cpp \
    rnd_xor2.cpp \
    rnd_skip_lin.cpp \
    rnd_sim_lin.cpp \
    rnd_sfibb.cpp \
    rnd_mlin.cpp \
    rnd_lin.cpp \
    rnd_float.cpp \
    rnd_fib.cpp \
    rnd_comp_fib.cpp \
    rnd_base.cpp \
    vendor/MxCPP/mx_array.cpp \
    test02.cpp \
    vendor/MiscCPP/m_limits.cpp \
    rnd_add_rot.cpp \
    rnd_f_buff0.cpp \
    rnd_f_buff1.cpp \
    test03.cpp \
    sandbox00.cpp \
    rnd_buff0.cpp \
    rnd_buff1.cpp

HEADERS += \
    use_rnd_xor3_0.h \
    use_rnd_xor2_0.h \
    use_rnd_skip_lin_2b.h \
    use_rnd_skip_lin_1.h \
    use_rnd_sim_lin_05.h \
    use_rnd_sim_lin_04.h \
    use_rnd_sim_lin_02.h \
    use_rnd_sim_lin_01.h \
    use_rnd_sim_lin_00.h \
    use_rnd_sfib_0.h \
    use_rnd_ranlux_48.h \
    use_rnd_mt19937_64.h \
    use_rnd_mlin_0.h \
    use_rnd_ministd.h \
    use_rnd_lin_2c.h \
    use_rnd_lin_2b.h \
    use_rnd_lin_2a.h \
    use_rnd_lin_2.h \
    use_rnd_lin_1a.h \
    use_rnd_lin_1.h \
    use_rnd_knuth_b.h \
    use_rnd_fib_3a.h \
    use_rnd_fib_3.h \
    use_rnd_fib_2a.h \
    use_rnd_fib_2.h \
    use_rnd_fib_1a.h \
    use_rnd_fib_1.h \
    use_rnd_fib_0a.h \
    use_rnd_fib_0.h \
    use_rnd_comp_7.h \
    use_rnd_comp_6.h \
    use_rnd_comp_5.h \
    use_rnd_comp_4.h \
    use_rnd_comp_3.h \
    use_rnd_comp_2.h \
    use_rnd_comp_1.h \
    use_rnd_comp_0.h \
    rnd.h \
    rnd_xor3.h \
    rnd_xor2.h \
    rnd_skip_lin.h \
    rnd_sim_lin.h \
    rnd_sfib.h \
    rnd_mlin.h \
    rnd_lin.h \
    rnd_fib.h \
    rnd_comp.h \
    rnd_buff1.h \
    rnd_buff0.h \
    rnd_base.h \
    defs.h \
    use_rnd_sim_lin_06.h \
    vendor/MxCPP/mx_array.h \
    use_rnd_fib_4.h \
    use_rnd_fib_10.h \
    use_rnd_fib_11.h \
    use_rnd_fib_12.h \
    use_rnd_fib_13.h \
    use_rnd_fib_14.h \
    use_rnd_fib_15.h \
    use_rnd_fib_16.h \
    use_rnd_fib_17.h \
    use_rnd_fib_18.h \
    use_rnd_fib_19.h \
    use_rnd_fib_20.h \
    use_rnd_fib_5.h \
    use_rnd_fib_6.h \
    use_rnd_fib_7.h \
    use_rnd_fib_8.h \
    use_rnd_fib_9.h \
    vendor/MiscCPP/m_limits.h \
    use_rnd_xor_ch_x_0b.h \
    use_rnd_xor_ch_x_0c.h \
    use_rnd_xor_ch_x_1a.h \
    use_rnd_xor_ch_x_1b.h \
    use_rnd_xor_ch_x_1c.h \
    use_rnd_xor_ch_x_2a.h \
    use_rnd_xor_ch_x_2b.h \
    use_rnd_xor_ch_x_2c.h \
    use_rnd_xor_ch_x_3a.h \
    use_rnd_xor_ch_x_3b.h \
    use_rnd_xor_ch_x_3c.h \
    use_rnd_xor_ch_x_4a.h \
    use_rnd_xor_ch_x_4b.h \
    use_rnd_xor_ch_x_4c.h \
    use_rnd_xor_ch_x_5a.h \
    use_rnd_xor_ch_x_5b.h \
    use_rnd_xor_ch_x_5c.h \
    use_rnd_xor_ch_x_6a.h \
    use_rnd_xor_ch_x_6b.h \
    use_rnd_xor_ch_x_6c.h \
    use_rnd_xor_ch_x_7a.h \
    use_rnd_xor_ch_x_7b.h \
    use_rnd_xor_ch_x_7c.h \
    use_rnd_add_rot_0a.h \
    rnd_add_rot.h \
    use_rnd_add_rot_0b.h \
    use_rnd_add_rot_0c.h \
    use_rnd_add_rot_1a.h \
    use_rnd_add_rot_1b.h \
    use_rnd_add_rot_1c.h \
    use_rnd_add_rot_2a.h \
    use_rnd_add_rot_2b.h \
    use_rnd_add_rot_2c.h \
    use_rnd_add_rot_3a.h \
    use_rnd_add_rot_3b.h \
    use_rnd_add_rot_3c.h \
    use_rnd_add_rot_4a.h \
    use_rnd_add_rot_4b.h \
    use_rnd_add_rot_4c.h \
    use_rnd_add_rot_5a.h \
    use_rnd_add_rot_5b.h \
    use_rnd_add_rot_5c.h \
    use_rnd_add_rot_6a.h \
    use_rnd_add_rot_6b.h \
    use_rnd_add_rot_6c.h \
    use_rnd_add_rot_7a.h \
    use_rnd_add_rot_7b.h \
    use_rnd_add_rot_7c.h \
    rnd_prob.h \
    rnd_f_buff0.h \
    rnd_f_buff1.h \
    buff.h \
    use_rnd_buff_0.h \
    use_rnd_buff_1a.h \
    use_rnd_f_buff_1a.h \
    use_rnd_f_buff_0.h

DISTFILES += \
    createAtC++.sh \
    tests/test.sh

