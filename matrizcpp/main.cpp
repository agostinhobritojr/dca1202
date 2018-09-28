#include <iostream>
#include "matriz.h"

using namespace std;

int main(){
  Matriz a(3,4), b;
  a.randomize();
  a(0,0)=55;
//  a.operator ()(0,0) = 33;
  a.print();
  return 0;
}
