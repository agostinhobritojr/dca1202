#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
  float x, y;
public:
  // construtor padrao ou default
 // Vetor2d();
  // construtor com argumentos
  Vetor2d(float x_=0, float y_=0);

  // construtor de copia
  Vetor2d(Vetor2d& v);

  // Vetor2d(float xy_);
  // destrutor UNICO
  ~Vetor2d();
  void setX(float x_);
  float getX();
  void setY(float y_);
  float getY();
  void print();
  float angulo();
  Vetor2d produto(float a);
  // sobrecarga de metodo
  float produto(Vetor2d v2);
  // sobrecarga de operador +
  Vetor2d operator +(Vetor2d v);
  Vetor2d operator -(Vetor2d v);
  Vetor2d operator *(float a);
  float operator *(Vetor2d v);
  // friendship (amiga)
  // permite acesso as partes privadas
  friend Vetor2d operator*(float a, Vetor2d v);
};


#endif // VETOR2D_H






