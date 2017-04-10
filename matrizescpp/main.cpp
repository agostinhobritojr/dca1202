#include <iostream>
#include "matriz.h"
#include <cstdlib>

using namespace std;

int main(){
  Matriz A(3,3), B(3,3), C;
  A.rand();
  B.rand();
  C = A+B;

  A.print();
//  A(1,1) = 4;
//  cout << endl;
  B.print();

  C.print();
  return 0;
}

