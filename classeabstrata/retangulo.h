#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica{
public:
    float x0, y0, l, h;
public:
    Retangulo(float x0_, float y0_, float l_, float h_);
    void draw();
};

#endif // RETANGULO_H
