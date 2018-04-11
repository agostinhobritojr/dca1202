#ifndef MOTOR_H
#define MOTOR_H

#include "equipamento.h"

class Motor : public Equipamento{
  float potencia;
  float velocidade;
  float precomotor;
public:
  Motor();
  Motor(float _preco);
  ~Motor();
  void setPreco(float _preco);
  void setPotencia(float _potencia);
  void setVelocidade(float _velocidade);
  float getPotencia(void);
  float getVelocidade(void);
};

#endif // MOTOR_H
