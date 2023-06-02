#ifndef ESTRELA_H
#define ESTRELA_H
#include "figurageometrica.h"

class Estrela : public FiguraGeometrica{
    int raio, npontas;
public:
    Estrela(int x, int y, int raio, int npontas);
    ~Estrela();
    void draw(std::ostream &os);
};

#endif // ESTRELA_H
