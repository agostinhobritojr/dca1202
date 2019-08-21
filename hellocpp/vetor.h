#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float x, y;
public:
  void setX(float mx);
  float getX();
  void setY(float my);
  float getY();
  float norma(void);
  void print(void);
  float angulo();
  Vetor soma(Vetor v2);
  Vetor sub(Vetor v2);
  Vetor mult(float a);
  // sobrecarga de metodos
  float mult(Vetor v2);
};
#endif // VETOR_H
