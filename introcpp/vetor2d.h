#ifndef VETOR2D_H
#define VETOR2D_H

#include <cmath>

class Vetor2d{
private:
  float x, y;
public:
  // construtor default
  //  Vetor2d(void);
  // os valores iniciais devem estar
  // necessariamente no arquivo de
  // header (.h)
  Vetor2d(float mx=0, float my=0);
  //
  // INCORRETO
  // Vetor2d(float mx=0, float my);
  //
  // o uso de valores iniciais para
  // os argumentos tambem eh permitido
  // em funcoes

  // Construtor de copia
  Vetor2d(Vetor2d &v);

  void setX(float mx=0);
  float getX(void);
  void setY(float my);
  float getY(void);
  float norma(void);
  float teta(void);
  void print(void);
  Vetor2d unitario(void);
};

#endif // VETOR2D_H
