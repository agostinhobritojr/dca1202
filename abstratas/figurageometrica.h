#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

/** uma classe abstrata eh uma classe
 * que possui pelo menos uma funcao virtual
 * pura
 *
 * Classes abstratas NAO podem ser INSTANCIADAS
 * e servem apenas como BASE para a criacao
 * de classes derivadas
 *
 **/
class FiguraGeometrica{
public:
  FiguraGeometrica();
  // funcoes virtuais puras servem para
  // forcar as classes derivadas a implementarem
  // esse metodo, de forma que ele possa ser
  // chamado quando necessario for
  virtual void draw()=0;
};

#endif // FIGURAGEOMETRICA_H
