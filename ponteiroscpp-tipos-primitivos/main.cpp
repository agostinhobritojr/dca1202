#include <iostream>
#include "vetor2d.h"

int main(){
  Vetor2d v, *pv;
  pv = &v;
  std::cout << "ender de  v: " << &v << std::endl;
  std::cout << "valor de pv: " << pv << std::endl;
  pv->print();

  return 0;
}






