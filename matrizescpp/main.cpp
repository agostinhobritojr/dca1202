#include <iostream>
#include "matriz.h"
#include <cstdlib>

using namespace std;

int main(){
  Matriz A(3,3), B(3,3), C, D;
  A.rand();
  B.rand();
  // C=A+B;
  C=2*B+A*5;
  A.print(); cout << endl;
  B.print(); cout << endl;
  C.print(); cout << endl;

  A(1,1) = 4;
  cin >> A;
  //  cout << endl;
  //  B.print();

  //  C.print();
  return 0;
}

