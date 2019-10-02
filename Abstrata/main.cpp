#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

int main(){
  A a, *pa;
  B b, *pb;
  a.print();
  b.print();
  pa = &a; pb= &b;
  pa->print();
  pb->print();
  pa = &b;
  pa->print();
 // pb = &a;  TIPOS INCOMPATIVEIS
  return 0;
}





