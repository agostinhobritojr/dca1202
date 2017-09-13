#include <iostream>
#include "matriz.h"

using namespace std;

int main(){
  Matriz m(3,3), n(3,3), o, p(4,5);
  cout << endl << endl;
  cout << p.getNc() << endl;
  cout << p.getNl() << endl;
  m(1,2) = 3;
  o = m;
//  o = m+n;
//  m = p;
  m(0,0) = 4;
  m.print();
  o.print();
  cout << "Hello World!" << endl;
  return 0;
}

