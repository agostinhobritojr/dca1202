#include "motor.h"
#include <iostream>

using namespace std;

Motor::Motor(){
  cout << "construtor default Motor\n";
}

Motor::~Motor(){
  cout << "destrutor Motor\n";
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
