#include <iostream>
#include "vetor2d.h"

int main(void){
  Vetor2d v(3,4), v2(5), v3;
  // v.x = 3; // proibido!
  v.print();
  v2.print();
  v3.print();

//  v.setX(3); v.setY(4);
  v3.setX(5); v3.setY(6);
  v.print(); std::cout << "\n";

  std::cout << "ang = " << v.angulo() << "\n";

  std::cout << "vetor por escalar\n";
  v2 = v.produto(2);
  v2.print();  std::cout << "\n";

  std::cout << "\n\n";
  std::cout << "vetor por vetor\n";
  std::cout << "escalar = " <<
               v.produto(v3)
            << "\n";
  std::cout << "saiu de vetor por vetor\n\n";
}

