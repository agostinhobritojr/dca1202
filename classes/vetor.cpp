#include "vetor.h"
#include <iostream>

// :: - operador de escopo
// implementacao do metodo setX
// no ESCOPO da classe Vetor
void Vetor::setX(float _x){
  x = _x;
}
float Vetor::getX(void){
  return x;
}
void Vetor::setY(float _y){
  y = _y;
}
float Vetor::getY(void){
  return y;
}
void Vetor::print(void){
  std::cout << "(" << x << ", " << y << ")";
}
