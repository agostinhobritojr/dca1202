#include <iostream>
#include "vetor2d.h"

int main(void){
  Vetor2d v;
  //  v.a = 4;
  //  std::cout << "a=" << v.a << std::endl;
  v.setX(3);
  std::cout << v.getX();
  std::cout << std::endl;
  v.setX(-30);
  std::cout << v.getX();
  std::cout << std::endl;
}
