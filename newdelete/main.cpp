#include <iostream>
#include "vetor.h"
int main(){
  Vetor2d *v1, *v2, *v3;

 // v1 = new Vetor2d;
 // v1->print();
 // delete v1;
 // std::cout << std::endl;

  v2 = new Vetor2d(3,4);
  v2->print();
  delete v2;
  std::cout << std::endl;

  v3 = new Vetor2d[3];
  v3[0].print();
  v3[1].print();
  v3[2].print();
  std::cout << std::endl;

  v3->print();
  (v3+1)->print();
  (v3+2)->print();
  std::cout << std::endl;

  delete [] v3;
/*
  int *x;

  x = new int;
  *x = 3;
  std::cout << *x << std::endl;
  delete x;

  x = new int[10];
  x[2] = 3;
  std::cout << x[2] << std::endl;
  delete [] x;
*/
  return 0;
}
