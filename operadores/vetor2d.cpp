#include "vetor2d.h"
#include <iostream>
#include <cmath>

// :: - operador de escopo
/*
Vetor2d::Vetor2d(){
  std::cout << "Construtor Default\n";
  x = 1; y = 1;
}*/

Vetor2d::Vetor2d(float _x, float _y){
 // std::cout << "Construtor 2 argumentos\n";
  x = _x; y = _y;
}

Vetor2d::Vetor2d(const Vetor2d &copia){
 // std::cout << "Construtor de copia\n";
  x = copia.x;
  y = copia.y;
}

/*
Vetor2d::Vetor2d(float _xy){
  std::cout << "Construtor 1 argumento\n";
  x = y = _xy;
}*/

Vetor2d::~Vetor2d(){
 // std::cout << "Destrutor\n";
}

void Vetor2d::setX(float x_){
  x = x_;
}

float Vetor2d::getX(){
  return x;
}

void Vetor2d::setY(float y_){
  y = y_;
}

float Vetor2d::getY(){
  return y;
}

void Vetor2d::print(void){
  std::cout << "(" << x << "," << y << ")";
}

Vetor2d Vetor2d::produto(float a){
  Vetor2d v2;
  v2.x = a * x;
  v2.y = a * y;
  return v2;
}

float Vetor2d::produto(Vetor2d v2){
  return x*v2.x+y*v2.y;
}

Vetor2d Vetor2d::soma(Vetor2d v){
  Vetor2d ret;
  ret.x = x + v.x;
  ret.y = y + v.y;
  return ret;
}

Vetor2d Vetor2d::operator +(Vetor2d v){
  Vetor2d ret;
  ret.x = x + v.x;
  ret.y = y + v.y;
  return ret;
}

Vetor2d Vetor2d::operator *(float a){
  Vetor2d v2;
  v2.x = a * x;
  v2.y = a * y;
  return v2;
}

std::ostream &operator<<(std::ostream &os, Vetor2d v){
  os << "(" << v.x << ", " << v.y << ")";
  return os;
}

Vetor2d operator *(float a, Vetor2d v){
  Vetor2d ret;
  ret.x = a*v.x;
  ret.y = a*v.y;
  return ret;
}


float Vetor2d::norma(void){
  return std::sqrt(x*x + y*y);
}

