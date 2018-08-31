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
  Vetor();
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
};

#endif // VETOR_H




