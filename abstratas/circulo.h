#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica{
    int raio;
public:
    Circulo(int x, int y, int raio);
    void draw(std::ostream &os);
};

#endif // CIRCULO_H
