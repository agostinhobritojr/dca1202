#include "vetor2d.h"
#include <iostream>

Vetor2d::Vetor2d(){
}

void Vetor2d::print(){
  std::cout << "print: " << this << "\n";
}

void Vetor2d::alo(int x){
  // this aponta para o proprio objeto
  this->x = 3;
}







