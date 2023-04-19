#include <iostream>
#include "vetor2d.h"

int main(void){
  Vetor2d v;
  v.print();
  std::cout << "\n";
//  v.x = 4;
  v.setX(3); v.setY(4);
  v.print();
  std::cout << "\n";
  std::cout << v.norma() << "\n";

//  std::cout << v.getX();
}




