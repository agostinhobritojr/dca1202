#include "motor.h"

void Motor::setPotencia(float _potencia){
  preco = 20;
  potencia=_potencia;
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
