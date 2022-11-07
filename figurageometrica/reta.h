#ifndef RETA_H
#define RETA_H

#include "figurageometrica.h"

class Reta : public FiguraGeometrica{
  int x0, y0, x1, y1;
public:
  Reta(int x0, int y0, int x1, int y1,
       int r, int g, int b);
  ~Reta();
  void draw();
  void posicao();
  void area();
};

#endif // RETA_H
