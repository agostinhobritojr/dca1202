#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
  float x, y;
public:
  // construtor padrao nao tem argumentos
  // eh invocado quando apenas o nome
  // do objeto eh fornecido
//  Vetor2d(); // Vetor2d v;
  // construtor com argumentos
  // e valores iniciais default
  Vetor2d(float x_=0, float y_=0);
  // construtor de copia
  Vetor2d(const Vetor2d &v);
  // destrutor
  // SOH PODE HAVER UM!
  ~Vetor2d();
  void setX(float x_);
  float getX();
  void setY(float y_);
  float getY(void);
  void print();
  float norma(void);
  float angulo(void);
  Vetor2d unitario(void);
  Vetor2d soma(Vetor2d v);
  Vetor2d operator+(Vetor2d v);
  Vetor2d operator=(Vetor2d v);
  // produto escalar
  float multiplica(Vetor2d v);
  // produto POR escalar
  Vetor2d multiplica(float a);
};

#endif // VETOR2D_H







