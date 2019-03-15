#include <iostream>
#include "vetor2d.h"

using namespace std;

int main(){
  Vetor2d v, u;
  v.setX(3);
  v.setY(4);
  v.print(); cout << endl;
  cout << "tama = " << v.norma() << endl;
  cout << "ang = " << v.teta() << endl;
  u = v.unitario();
  u.print();
  return 0;
}


