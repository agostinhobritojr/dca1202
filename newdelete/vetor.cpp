#include "vetor.h"
#include <iostream>

//Vetor2d::Vetor2d(){
//  std::cout << "const padrao\n";
//  x = y = 0.0;
//}

Vetor2d::Vetor2d(float x, float y){
  std::cout << "const argmts\n";
  this->x = x; this->y=y;
}

void Vetor2d::print()
{
  std::cout << "(" << x << "," << y <<
               ")";
}
