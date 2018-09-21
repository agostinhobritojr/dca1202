#include <iostream>
#include "c.h"

using namespace std;

int main(){
  C c;
 // c.printA();
 // c.printB();
  c.A::print();
  c.printC();
  c.test();
  return 0;
}
