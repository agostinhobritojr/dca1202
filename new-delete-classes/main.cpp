#include <iostream>
#include "vetor2d.h"

int main(){
  Vetor2d *v1, *v2, *v3;
  v1 = new Vetor2d;
  v1->print(); std::cout << "\n";
  v1[0].print(); std::cout << "\n";
  delete v1;

  v2 = new Vetor2d(3,4);
  v2->print(); std::cout << "\n";
  delete v2;

  v3 = new Vetor2d[5];
  v3[1].print(); std::cout << "\n";
  (v3+1)->print(); std::cout << "\n";
  (*(v3+1)).print(); std::cout << "\n";
  delete [] v3;
  return 0;

}




