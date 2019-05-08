#include <iostream>
#include "a.h"
#include "b.h"
#include "c.h"

using namespace std;

int main(){
  A a;  cout << endl;
  B b(3,4);  cout << endl;
  C c;
  a.print();  b.print();  c.print();

  b.A::print();
  return 0;
}
