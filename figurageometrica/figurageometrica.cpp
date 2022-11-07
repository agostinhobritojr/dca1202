#include "figurageometrica.h"
#include <iostream>
FiguraGeometrica::FiguraGeometrica()
{

}

FiguraGeometrica::~FiguraGeometrica(){
  std::cout << "destrutor figurageometrica\n";
}

void FiguraGeometrica::area()
{
  std::cout << "area figurageometrica\n";
}

void FiguraGeometrica::posicao()
{
  std::cout << "posicao figurageometrica\n";
}
