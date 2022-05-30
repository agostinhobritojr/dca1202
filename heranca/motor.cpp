#include "motor.h"
#include <iostream>

Motor::Motor(){
   std::cout << "construtor Motor\n";
}

Motor::Motor(float _preco) : Equipamento(30)
{
  preco = _preco;
  std::cout << "construtor Motor\n";
}

Motor::~Motor()
{
   std::cout << "destrutor Motor\n";
}

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
