#include "motor.h"
#include <iostream>

using namespace std;

Motor::Motor(int a) : Equipamento(a){
  cout << "construtor de motor com chamada de"
          "construtor da superclasse\n";
}

Motor::Motor(){
  cout << "construtor padrao\n";
}

Motor::~Motor(){
  cout << "destrutor de motor\n";
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

void Motor::setPreco(float _preco)
{
  cout << "meu preco\n";
}
