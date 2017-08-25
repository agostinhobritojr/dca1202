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
  Vetor soma(float a);
};

#endif // VETOR_H

