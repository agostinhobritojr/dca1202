#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica{
    float x0, y0, raio;
public:
    Circulo(float x0_, float y0_, float raio_);
    void draw();
};

#endif // CIRCULO_H
