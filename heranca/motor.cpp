#include "motor.h"
#include <iostream>

using namespace std;

Motor::Motor(){
  cout << "construtor de motor" << endl;
}

// a lista de inicializacoes que vai
// após os ":" incluem a escolha do
// construtor da classe base que será
// escolhida e possiveis variaveis
// da classe
Motor::Motor(float _preco) :
  Equipamento(_preco),
  potencia(0){
}

Motor::~Motor()
{
  cout << "destrutor de motor" << endl;
}

void Motor::setPreco(float _preco)
{
  cout << "precomotor" << endl;
  precomotor = _preco;
}

void Motor::setPotencia(float _potencia){
  potencia=_potencia;
  // preco eh variavel privada
  // da classe Equipamento
  // e nao pode ser acessada
  // pela classe Motor
 // preco = 20;
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
