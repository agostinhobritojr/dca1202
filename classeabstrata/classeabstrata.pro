TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        circulo.cpp \
        figurageometrica.cpp \
        main.cpp \
        reta.cpp \
        retangulo.cpp

HEADERS += \
    circulo.h \
    figurageometrica.h \
    reta.h \
    retangulo.h

DISTFILES += \
    figura.txt
