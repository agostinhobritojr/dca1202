#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float x;
  float y;
public:
  void setX(float mx);
  float getX(void);
  void setY(float my);
  float getY(void);
  Vetor soma(Vetor v2);
  Vetor subt(Vetor v2);
  float produtoEscalar(Vetor v2);
  void print();
}; // <- nao esqueca do ";"

float modulo(Vetor v1);

#endif // VETOR_H
