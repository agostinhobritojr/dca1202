#include "motor.h"
#include <iostream>
#include <cstring>

using namespace std;
Motor::Motor(int a) : Equipamento(a), potencia(17){
  cout << "chamando construtor motor\n";
}

Motor::~Motor(){
  cout << "chamando destrutor motor\n";
}

void Motor::setPotencia(float _potencia){
//  potencia=_potencia;
//  preco = 20;
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
  cout << "meu setpreco " << endl;
  preco = 10*_preco;
}
