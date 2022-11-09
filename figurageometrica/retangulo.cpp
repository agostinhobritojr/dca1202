#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(int x0, int y0, int x1, int y1,
                     int r, int g, int b){
            this->x0 = x0;  this->y0 = y0;
            this->x1 = x1;  this->y1 = y1;
            this->r = r;
            this->g = g;
            this->b = b;
}

void Retangulo::draw(){
  std::cout << "draw retangulo\n";
  std::cout << "(" << x0 << "," << y0 <<
               ")[](" << x1 << "," << y1 <<
               ")\n";
}

void Retangulo::area()
{

}

void Retangulo::posicao()
{

}
