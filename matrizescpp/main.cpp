#include <iostream>
#include "matriz.h"
#include <cstdlib>

using namespace std;

int main(){
  Matriz A(3,3), C;
  A.print();
  A(1,1) = 4;
  cout << endl;
  A.print();
  return 0;
}

