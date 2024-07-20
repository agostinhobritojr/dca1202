#ifndef ELIPSE_H
#define ELIPSE_H

#include "figurageometrica.h"

class Elipse : public FiguraGeometrica{
    float cx, cy, raiox, raioy;
public:
    Elipse(float cx, float cy, float raiox, float raioy);
    void draw();
};

#endif // ELIPSE_H
