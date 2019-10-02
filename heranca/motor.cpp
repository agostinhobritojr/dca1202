#include "motor.h"
#include <iostream>

using namespace std;
Motor::Motor() {
  cout << "Construtor Motor\n";
}

Motor::Motor(float _preco): Equipamento (_preco){
  cout << "Construtor Motor\n";
}

Motor::~Motor()
{
  cout << "Destrutor Motor\n";
}

void Motor::setPotencia(float _potencia){
  potencia=_potencia;
  preco = 33;
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

void Motor::setPreco(float _preco){
  preco = _preco*potencia;
  Equipamento::setPreco(_preco*potencia);
}




