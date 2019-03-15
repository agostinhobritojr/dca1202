#ifndef VETOR2D_H
#define VETOR2D_H
#include <cmath>

class Vetor2d{
private:
  float x, y;
public:
  void setX(float mx);
  float getX(void);
  void setY(float my);
  float getY(void);
  float norma(void);
  float teta(void);
  void print(void);
  Vetor2d unitario(void);
};

#endif // VETOR2D_H
