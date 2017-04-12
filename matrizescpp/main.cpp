#include <iostream>
#include "matriz.h"
#include <cstdlib>

using namespace std;

int main(){
  Matriz A(3,3), B(3,3), C, D;
  A.rand();
  B.rand();
  D = C=A+B;
  A.print(); cout << endl;
  B.print(); cout << endl;
  C.print(); cout << endl;
  D.print(); cout << endl;
//  A(1,1) = 4;
//  cout << endl;
//  B.print();

//  C.print();
  return 0;
}

