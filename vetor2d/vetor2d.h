#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
  float x, y;
public:
  void setX(float x_);
  float getX();
  void setY(float y_);
  float getY();
  void print();
  float angulo();
  Vetor2d produto(float a);
  // sobrecarga de metodo
  float produto(Vetor2d v2);
};

#endif // VETOR2D_H






