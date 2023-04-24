#include "vetor2d.h"
#include <iostream>

/*
Vetor2d::Vetor2d(){
  std::cout << "construtor padrao\n";
  x = y = 0;
}*/

Vetor2d::Vetor2d(int x, int y){
  std::cout << "construtor c/args\n";
  this->x = x; this->y = y;
}

void Vetor2d::print(){
  std::cout << "(" << x << "," << y << ")";
}
