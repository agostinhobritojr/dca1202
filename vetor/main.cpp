#include <iostream>
#include "vetor2d.h"

int main(void){
  Vetor2d v1(1,2), v2(3,4), v3(5,6);
  float prod;
  v1.print(); std::cout << std::endl;
  v2.print(); std::cout << std::endl;
  v3 = v1.soma(v2);
  v3.print();
  std::cout << std::endl;
  v3 = v1.operator+(v2);
  v3.print();
  std::cout << std::endl;
  // prod = v2.multiplica(v3);

//  std::cout << "produto = ";
//  std::cout << prod << std::endl;
  //  v.setX(3);
  //  v.a = 4; // PROIBIDO
  //  std::cout << "a=" << v.a << std::endl;
  //  std::cout << v.getX();
  //  std::cout << std::endl;
  //v.setX(-30);
  //  std::cout << v.getX();
  //  std::cout << std::endl;
}
