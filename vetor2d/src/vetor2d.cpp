#include "vetor2d.h"
#include <iostream>
#include <cmath>

// :: - operador de escopo
Vetor2d::Vetor2d(){
  std::cout << "Construtor Default\n";
  x = 1; y = 1;
}

Vetor2d::~Vetor2d(){
  std::cout << "Destrutor\n";
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

float Vetor2d::norma(void){
  return std::sqrt(x*x + y*y);
}

