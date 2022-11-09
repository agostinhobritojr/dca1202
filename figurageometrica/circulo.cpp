#include "circulo.h"
#include <iostream>

Circulo::Circulo(int x0, int y0, int raio, float r, float g, float b)
{
  this->x0 = x0; this->y0 = y0;
  this->raio = raio;
  this->r = r; this->g = g; this->b = b;
}

void Circulo::draw()
{
  std::cout << "draw circulo\n";
  std::cout << "(" << x0 << "," << y0 <<
               "): raio (" << raio <<
               ")\n";

}

void Circulo::area()
{

}

void Circulo::posicao()
{

}
