// diretivas de compilacao
#ifndef VETOR2D_H
#define VETOR2D_H
#include <ostream>

class Vetor3d;

// declaracao da classe
class Vetor2d{
private:
  float x, y;
public:
  // metodo construtor
 // Vetor2d(); // construtor padrao (default)

  // metodo construtor COM ARGUMENTOS
  Vetor2d(float _x=0, float _y=0);
 // Vetor2d(float _xy);

  // metodo construtor DE COPIA
  // const informa que a variavel copia
  // NAO PODERA SER ALTERADA
  // usado para COPIA PROFUNDA (deep copy)
  Vetor2d(const Vetor2d &copia);

  // metodo destrutor
  ~Vetor2d();
  void setX(float x_);
  float getX();
  void setY(float y_);
  float getY();
  void print(void);
  float norma(void);

  // sobrecargas dos metodos produto
  Vetor2d produto(float a);
  float produto(Vetor2d v2);

  Vetor2d soma(Vetor2d v);
  Vetor2d operator + (Vetor2d v);

  Vetor2d operator *(float a);
  // uma funcao amiga eh uma funcao
  // cujo acesso aos campos privados eh
  // permitido
  friend Vetor2d operator *(float a, Vetor2d v);

  friend std::ostream &operator<< (std::ostream& os, Vetor2d v);

};
// FUNCAO
// 4*v1 -> operator*(4,v1)
//Vetor2d operator *(float a, Vetor2d v);

#endif // VETOR2D_H




