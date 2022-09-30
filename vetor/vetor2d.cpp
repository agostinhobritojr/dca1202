#include "vetor2d.h"
#include <cmath>
#include <iostream>
// nome_classe

/*
 * Vetor2d::Vetor2d(){
  std::cout << "construtor padrao\n";
  x = y = -1;
}*/

Vetor2d::Vetor2d(float x_, float y_){
  // std::cout << "construtor c/ argumentos\n";
  x=x_; y=y_;
}

Vetor2d::Vetor2d(const Vetor2d &v){
  //std::cout << "construtor de copia\n";
  x = v.x; y = v.y;
}

Vetor2d::~Vetor2d(){
  //std::cout << "destrutor\n";
}

void Vetor2d::setX(float x_){
  //        ^^ operador de escopo
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

void Vetor2d::print()
{
  std::cout << "(" << x << "," << y <<
               ")";
}

float Vetor2d::norma(){
  return std::sqrt(x*x+y*y);
}

float Vetor2d::angulo(){
  return atan2 (y,x) * 180 / M_PI;
}

Vetor2d Vetor2d::unitario(){
  Vetor2d ret;
  ret.x = x/norma();
  ret.y = y/norma();
  return ret;
}

Vetor2d Vetor2d::soma(Vetor2d v){
  Vetor2d ret;
  ret.x = x + v.x;
  ret.y = y + v.y;
  return ret;
}

Vetor2d Vetor2d::operator+(Vetor2d v){
  Vetor2d ret;
  ret.x = x + v.x;
  ret.y = y + v.y;
  return ret;
}

Vetor2d Vetor2d::operator=(Vetor2d v){
  x = v.x; y = v.y;
  return v;
}

float Vetor2d::multiplica(Vetor2d v){
  return(x*v.x + y*v.y);
}

Vetor2d Vetor2d::multiplica(float a){
  Vetor2d ret;
  ret.x = x*a;
  ret.y = y*a;
  return ret;
}





