#include "vetor.h"
#include <cmath> // para sqrt()
#include <iostream>

// implementacao do metodo setX()
// no ESCOPO da classe Vetor

//using namespace std;

/*Vetor::Vetor(){
  std::cout << "construtor padrao\n";
  x=0; y=0;
}*/

Vetor::Vetor(float mx, float my){
  std::cout << "construtor c/ args\n";
  x = mx; y = my;
}

Vetor::~Vetor()
{
  std::cout << "destrutor\n";
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

float Vetor::norma(void){
  float ret;
  ret = std::sqrt(x*x+y*y);
  return ret;
}

// <mouse right>->refactor->add public declaration
float Vetor::angulo(void){
  float ang;
  ang = std::atan2(y,x);
  return ang;
}

Vetor Vetor::multiplica(float a){
  Vetor ret;
  ret.x = a*x;
  ret.y = a*y;
  return ret;
}

float Vetor::multiplica(Vetor v)
{
  float ret;
  ret = x*v.x+y*v.y;
  return ret;
}

void Vetor::print(){
  std::cout << "(" << x << "," <<
               y << ")" << std::endl;
}










