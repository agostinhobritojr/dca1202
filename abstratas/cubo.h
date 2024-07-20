#ifndef CUBO_H
#define CUBO_H

#include "figurageometrica.h"

class Cubo : public FiguraGeometrica{
    float cx, cy, lado;
public:
    Cubo(float cx, float cy, float lado);
    void draw();
};

#endif // CUBO_H
