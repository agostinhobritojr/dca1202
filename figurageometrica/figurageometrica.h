#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica{
protected:
  int posx, posy; // posicao
  float r, g, b; // cor
public:
  FiguraGeometrica();
  // o destrutor virtual
  // forca que na alocacao dinamica
  // o destrutor da SUBCLASSE seja
  // chamado ao inves do da SUPERCLASSE
  virtual ~FiguraGeometrica();
  // classe abstrata porque tem
  // PELO MENOS um metodo
  // VIRTUAL PURO
  virtual void draw()=0;
  virtual void area();
  virtual void posicao();
};

#endif // FIGURAGEOMETRICA_H
