#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica
{
public:
  FiguraGeometrica();
  // metodos virtuais forcam que os
  // ponteiros para a classe base
  // executem metodos da classe derivada
  // quando apontarem para objetos dessa
  // classe derivada

  // funcao virtual pura forca que os
  // descendentes CRIEM suas versoes
  // do metodo draw

  // classes que possuem funcoes virtuais
  // puras sao chamadas de classes abstratas
  virtual void draw()=0;
};

#endif // FIGURAGEOMETRICA_H
