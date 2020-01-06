TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS  += -O3
QMAKE_CXXFLAGS  += -mtune=native
#QMAKE_CXXFLAGS  += -fprofile-use
#QMAKE_LFLAGS    += -fprofile-use
#QMAKE_CXXFLAGS += -fprofile-generate
#QMAKE_LFLAGS   += -fprofile-generate

#QMAKE_CXXFLAGS += -mavx

INCLUDEPATH += "vendor"

DEFINES += USE_RND_LIN_1
DEFINES += USE_RND_BUFF_1a
DEFINES += TMRND_RND_BUFF_V3
DEFINES += USE_RND_F_BUFF_1a
DEFINES += USE_RND_PROB_0

DEFINES += MX_USING_ARRAY_2
DEFINES += TEST01_PROGRAM

SOURCES += \
    rnd_base.cpp \
    rnd_lin.cpp \
    rnd_mlin.cpp \
    rnd_fib.cpp \
    rnd_wyhash64.cpp \
    rnd_wyhash64m.cpp \
    rnd_float.cpp \
    rnd_buff0.cpp \
    rnd_buff1.cpp \
    rnd_f_buff0.cpp \
    rnd_f_buff1.cpp \
    rnd_prob.cpp \
    rnd_comp.cpp \
    rnd_xor2.cpp \
    rnd_add_rot.cpp \
    sandbox00.cpp \
    test00.cpp \
    test01.cpp \
    test02.cpp \
    test03.cpp \
    test04.cpp \
    init_chaos.cpp \
    rnd_mt1993764.cpp \
    rnd_ranlux48.cpp \
    rnd_knuthb.cpp \
    sandbox01.cpp

HEADERS += \
    buffs.h \
    defs.h \
    prob.h \
    rnd_add_rot.h \
    rnd_base.h \
    rnd_buff0.h \
    rnd_buff1.h \
    rnd_comp.h \
    rnd_f_buff0.h \
    rnd_f_buff1.h \
    rnd_fib.h \
    rnd_lin.h \
    rnd_mlin.h \
    rnd_prob.h \
    rnd_wyhash64.h \
    rnd_wyhash64m.h \
    rnd_xor2.h \
    rnd.h \
    use_rnd_add_rot_1.h \
    use_rnd_add_rot_2.h \
    use_rnd_add_rot_3.h \
    use_rnd_add_rot_4.h \
    use_rnd_add_rot_5.h \
    use_rnd_add_rot_6.h \
    use_rnd_buff_0.h \
    use_rnd_buff_1.h \
    use_rnd_comp_1.h \
    use_rnd_comp_2.h \
    use_rnd_comp_3.h \
    use_rnd_comp_4.h \
    use_rnd_f_buff_0.h \
    use_rnd_f_buff_1.h \
    use_rnd_fib_1.h \
    use_rnd_fib_2.h \
    use_rnd_fib_3.h \
    use_rnd_fib_4.h \
    use_rnd_fib_5.h \
    use_rnd_fib_6.h \
    use_rnd_knuth_b.h \
    use_rnd_lin_1.h \
    use_rnd_lin_2.h \
    use_rnd_lin_3.h \
    use_rnd_lin_4.h \
    use_rnd_lin_5.h \
    use_rnd_lin_6.h \
    use_rnd_mlin_0.h \
    use_rnd_mt19937_64.h \
    use_rnd_prob_0.h \
    use_rnd_ranlux_48.h \
    use_rnd_wyhash64_0.h \
    use_rnd_wyhash64m_0.h \
    use_rnd_xor2_0.h \
    vendor/MxCPP/mx_array.h \
    vendor/MiscCPP/m_limits.h \
    init_chaos.h \
    use_rnd_add_rot_6.h \
    use_rnd_add_rot_5.h \
    rnd_mt1993764.h \
    rnd_ranlux48.h \
    rnd_knuthb.h

DISTFILES += \
    createAtC++.sh \
    tests/test.sh \
    tests/small_test.sh \
    tests/efficiency.sh

