#include "vetor.h"
#include <iostream>
#include <cmath>

using namespace std;

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

float Vetor::norma(){
  return(sqrt(x*x+y*y));
}

float Vetor::angulo(){
  return(atan(y/x));
}

Vetor Vetor::soma(Vetor v2){
  Vetor ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return ret;
}

Vetor Vetor::operator + (Vetor v2){
  Vetor ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return ret;
}

Vetor Vetor::operator *(float a)
{
  Vetor ret;
  ret.x = x * a;
  ret.y = y * a;
  return ret;
}

// sobrecarga de funcoes
Vetor Vetor::soma(float a){
  Vetor ret;
  ret.x = x + a;
  ret.y = y + a;
  return ret;
}

Vetor Vetor::sub(Vetor v2){
  Vetor ret;
  ret.x = x - v2.x;
  ret.y = y - v2.y;
  return ret;
}

Vetor Vetor::mult(float a){
  Vetor ret;
  ret.x = x * a;
  ret.y = y * a;
  return ret;
}

Vetor operator *(float a, Vetor v){
  Vetor ret;
  ret.x = v.x * a;
  ret.y = v.y * a;
  return ret;
}








