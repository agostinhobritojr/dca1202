#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica{
public:
  FiguraGeometrica();
  virtual ~FiguraGeometrica();
  // classe eh abstrata
  // pois possui uma funcao virtual
  // PURA
  virtual void draw()=0;
};

#endif // FIGURAGEOMETRICA_H
