// diretiva de compilacao condicional
#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float y;
  float x;
public:
  // funcoes-membro ou metodos
  // funcao construtor
  // construtor default
 // Vetor();

  // construtor com argumentos
  Vetor(float mx=0, float my=0);
//  Vetor(float mxy);

  // construtor de copia
  // &v referencia para v
  Vetor(Vetor&v);

  ~Vetor();

  void setX(float mx);
  float getX(void);
  void setY(float my);
  float getY(void);
  float tamanho(void);
  float angulo(void);
  Vetor unitario(void);
  void print(void);
  float escalar(Vetor v2);
  Vetor soma(Vetor v2);

  Vetor operator + (Vetor v2);

  Vetor soma(float a);
};

#endif // VETOR_H




