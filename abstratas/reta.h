#ifndef RETA_H
#define RETA_H

#include "figurageometrica.h"

class Reta : public FiguraGeometrica{
    int xend, yend;
public:
    Reta(int x, int y, int xend, int yend);
    void draw(std::ostream &os);
};

#endif // RETA_H
