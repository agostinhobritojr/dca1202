#ifndef RETA_H
#define RETA_H

#include "figurageometrica.h"

class Reta : public FiguraGeometrica{
    float x0, y0, x1, y1;
public:
    Reta(float x0_, float y0_, float x1_, float y1_);
    void draw();
};

#endif // RETA_H
