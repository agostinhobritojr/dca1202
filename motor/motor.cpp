#include "motor.h"
#include <iostream>
#include <cstring>

Motor::Motor()
{

}

void Motor::setPotencia(float _potencia){
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
