#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float x, y;
public:
  void setX(float mx);
  float getX(void);
  void setY(float my);
  float getY(void);
  float norma(void);
  float angulo(void);
  // <mouse right>->refactor->add definition
};

#endif // VETOR_H
