#include <iostream>
#include "vetor2d.h"

int main(void){
  Vetor2d v(3,4), v1(5,6), v2, v3(5);

  // invoca o copy constructor
  Vetor2d v4(v3), v5=v4;
  v.print();  std::cout << "\n";
  v1.print();  std::cout << "\n";
  v2.print();  std::cout << "\n";
  v3.print();  std::cout << "\n";

//  v.x = 4;
//  v.setX(3); v.setY(4);
//  v1.setX(5); v1.setY(6);
  v2 = v1.produto(2);
  v2.print();
  std::cout << std::endl;
  std::cout << "escalar = " <<
               v1.produto(v2) << "\n";
//  v.print();
  std::cout << "\n";
  std::cout << v.norma() << "\n";

//  std::cout << v.getX();
}




