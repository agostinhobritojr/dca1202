#include <iostream>
#include <cmath>
#include "vetor.h"

using namespace std;

// implementacao do metodo setX
// no ESCOPO (::) da classe Vetor
/*Vetor::Vetor(){
  x = 0;
  y = 0;
  cout << "chamou o construtor\n";
}*/

Vetor::Vetor(float mx, float my){
  x = mx; y = my;
}

/*
 Vetor::Vetor(float mxy)
{
  x = y = mxy;
}
*/

Vetor::Vetor(const Vetor &v){
  cout << "construtor de copia\n";
  x = v.x; y = v.y;
}

Vetor::~Vetor(){
  cout << "chamando destrutor\n";
}

void Vetor::setX(float mx){
  x = mx;
}

float Vetor::getX(void){
  return x;
}

void Vetor::setY(float my){
  y = my;
}

float Vetor::getY(void){
  return y;
}

float Vetor::tamanho(void){
  return sqrt(x*x+y*y);
}

float Vetor::angulo(void){
  return 180.0/3.1415*atan(y/x);
}

Vetor Vetor::unitario(void){
  Vetor ret;
  ret.x = x / tamanho();
  ret.y = y / tamanho();
  return ret;
}

void Vetor::print(void){
  cout << "(" << x << ","
       << y << ")";
}

float Vetor::escalar(Vetor v2){
  return x*v2.x+y*v2.y;
}

Vetor Vetor::soma(Vetor v2){
  Vetor ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return ret;
}

Vetor Vetor::operator+(Vetor v2){
  Vetor ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return ret;
}

Vetor Vetor::operator*(float a){
  Vetor ret;
  ret.x = a*x; ret.y = a*y;
  return ret;
}

Vetor operator-(const Vetor &v1, const Vetor &v2){
  Vetor ret;
  ret.x = v1.x-v2.x;
  ret.y = v1.y-v2.y;
  return ret;
}

// pos-fixado.... v2++
Vetor Vetor::operator++(int){
  Vetor ret;
  ret.x = x; ret.y = y;
  x++; y++;
  return ret;
}
// pre-fixado.... ++v2
Vetor Vetor::operator++(void){
  Vetor ret;
  x++; y++;
  ret.x = x; ret.y = y;
  return ret;
}


float Vetor::operator *(Vetor v2){
  return x*v2.x + y*v2.y;
}

// sobrecarga do metodo soma
Vetor Vetor::soma(float a){
  Vetor ret;
  ret.x = x + a;
  ret.y = y + a;
  return ret;
}

Vetor operator*(float a, Vetor v2){
  Vetor ret;
  ret.x = a*v2.x;
  ret.y = a*v2.y;
  //ret.setX(a*v2.getX());
  //ret.setY(a*v2.getY());
  return ret;
}


