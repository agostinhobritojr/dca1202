#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica{
    float x, y, raio;
public:
    Circulo(float _x=0, float _y=0, float _raio=1);
    void draw(void);
};

#endif // CIRCULO_H
