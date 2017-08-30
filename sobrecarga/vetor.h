// o uso do ifndef/define serve para
// evitar a redefinicao de classes
// ou funcoes

#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float x, y;
public:
  void setX(float _x);
  float getX(void);
  void setY(float _y);
  float getY(void);
  void print(void);
  float norma();
  float angulo();
  Vetor soma(Vetor v2);
  Vetor operator + (Vetor v2);
  Vetor operator * (float a);
  Vetor soma(float a);
  Vetor sub(Vetor v2);
  Vetor mult(float a);

  // FUNCOES amigas da classe
  //
  // funcoes amigas podem acessar as variaveis
  // e funcoes privadas sem passar por uma funcao
  friend Vetor operator *(float a, Vetor v);

};

//Vetor operator *(float a, Vetor v);

#endif // VETOR_H


