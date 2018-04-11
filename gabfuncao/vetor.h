#ifndef VETOR_H
#define VETOR_H

class Vetor{
  float x, y;
public:
  Vetor(float _x=0, float _y=0);
  void imprime();
  Vetor operator+(Vetor &v1);
  Vetor operator/(int a);
};

#endif // VETOR_H
