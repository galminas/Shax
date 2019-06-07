include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS +=     \
    ../app/func.h \
    test_can.h \
    test_horse.h \
    test_king.h \
    test_move.h \
    test_peshka.h \
    test_queen.h \
    test_tower.h

SOURCES +=     main.cpp \
    ../app/func.c

INCLUDEPATH += ../app
