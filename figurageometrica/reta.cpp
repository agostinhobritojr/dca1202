#include "reta.h"
#include <iostream>

Reta::Reta(int x0, int y0, int x1, int y1,
           int r, int g, int b){
  this->x0 = x0;  this->y0 = y0;
  this->x1 = x1;  this->y1 = y1;
  this->r = r;
  this->g = g;
  this->b = b;
}

Reta::~Reta()
{
  std::cout << "destrutor reta\n";
}

void Reta::draw(){
  std::cout << "draw reta\n";
  std::cout << "(" << x0 << "," << y0 <<
               "->(" << x1 << "," << y1 <<
               ")\n";

}

void Reta::posicao(){
  std::cout << "posicao reta\n";
}

void Reta::area(){

}
