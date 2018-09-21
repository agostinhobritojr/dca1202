#include "motor.h"
#include <iostream>

using namespace std;

Motor::Motor(){
  cout << "construtor default Motor\n";
  potencia = velocidade = 0;
}

Motor::Motor(float _preco) :
  Equipamento(_preco), potencia(0),
  velocidade (0)
{
  cout << "construtor args Motor\n";

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

void Motor::setPreco(float _fator){
  cout << "setpreco motor\n";
  Equipamento::setPreco(potencia*_fator);
}


float Motor::getPotencia(void){
  return potencia;
}

float Motor::getVelocidade(void){
  return velocidade;
}
