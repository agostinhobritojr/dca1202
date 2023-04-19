// diretivas de compilacao
#ifndef VETOR2D_H
#define VETOR2D_H

// declaracao da classe
class Vetor2d{
private:
  float y;
  float x;
public:
  // metodo construtor
  Vetor2d();
  // metodo destrutor
  ~Vetor2d();
  void setX(float x_);
  float getX();
  void setY(float y_);
  float getY();
  void print(void);
  float norma(void);
};
#endif // VETOR2D_H
