#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float x, y;
public:
  // construtor com argumentos
  // ----
  // a inicializacao dos argumentos
  // com seus valores iniciais
  // deve ser feito no arquivo de
  // HEADER
  Vetor(float mx=0, float my=0);
  // construtor padrao
 // Vetor();
  // destrutor
  ~Vetor();
  // construtor de cohpia
  Vetor(const Vetor &v);

  void setX(float mx);
  float getX();
  void setY(float my);
  float getY();
  float norma(void);
  void print(void);
  float angulo();

  Vetor soma(Vetor v2);

  Vetor operator+ (Vetor v2);
  Vetor operator- (Vetor v2);
  Vetor operator* (float a);
  float operator* (Vetor v2);

  Vetor sub(Vetor v2);
  Vetor mult(float a);
  // sobrecarga de metodos
  float mult(Vetor v2);
  friend Vetor operator*(float a, Vetor v);

  Vetor operator++(); // pre-fixado ++v
  Vetor operator++(int); // pos-fixado v++

};


#endif // VETOR_H












