#include "motor.h"

void Motor::setPotencia(float _potencia){
  potencia=_potencia;
  preco = 20;
}

void Motor::setVelocidade(float _velocidade){
  velocidade=_velocidade;
}

float Motor::getPotencia(void){
  return potencia;
}

float Motor::getVelocidade(void){
  return velocidade;
}
