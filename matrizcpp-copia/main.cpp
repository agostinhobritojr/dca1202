#include <iostream>
#include "matriz.h"

using namespace std;

int main(){
  Matriz a(3,4), b;
  a.randomize();
  b = a;
  a(0,0)=55;
  a.print();
  cout << "\n";
  b = a*4.4;
  b.print();
  cout << "\n";
  return 0;
}
