#ifndef MOTOR_H
#define MOTOR_H
#include "equipamento.h"

class Motor : public Equipamento{
  float potencia;
  float velocidade;
public:
  Motor(int a=0);
  void setPotencia(float _potencia);
  void setVelocidade(float _velocidade);
  float getPotencia(void);
  float getVelocidade(void);
  void setPreco(float _preco);
  ~Motor();
};

#endif // MOTOR_H
