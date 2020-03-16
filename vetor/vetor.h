#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float x, y;
public:
  // CONSTRUTORES SAO CHAMADOS
  // AUTOMATICAMENTE PELO S.O.

  // chamado construtor PADRAO (default)
  // Vetor();
  // construtor com argumentos
  // E VALORES INICIAIS
  Vetor(float my=0, float mx=0);

  // destrutor da classe
  ~Vetor();

  void setX(float mx=0);
  float getX(void);
  void setY(float my);
  float getY(void);
  float norma(void);
  float angulo(void);
  // sobrecargas da funcao multiplica
  Vetor multiplica(float a);
  float multiplica(Vetor v);
  void print();
  // nao permitido!!!
  //  Vetor multiplica(Vetor v);

  // <mouse right>->refactor->add definition
};

#endif // VETOR_H
