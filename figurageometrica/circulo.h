#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica
{
  int x0, y0, raio;
public:
  Circulo(int x0, int y0, int raio,
          float r, float g, float b);
  void draw();
  void area();
  void posicao();
};

#endif // CIRCULO_H
