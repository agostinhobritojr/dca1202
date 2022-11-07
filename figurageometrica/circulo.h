#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica
{
public:
  Circulo();
  void draw();
  void area();
  void posicao();
};

#endif // CIRCULO_H
