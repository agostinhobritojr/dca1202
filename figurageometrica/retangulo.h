#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
  int x0, y0, x1, y1;
public:
  Retangulo(int x0, int y0, int x1, int y1,
            int r, int g, int b);
  void draw();
  void area();
  void posicao();

};

#endif // RETANGULO_H
