#include <iostream>
#include "vetor2d.h"

using namespace std;

int main(){
  Vetor2d v, u;
  Vetor2d v3(3);
  Vetor2d v4=v3, v5(v4);
  v3.print();
//  v3.Vetor2d(); INVALIDO
  v.setX(3);
  v.setY(4);
  v.print(); cout << endl;
  cout << "tama = " << v.norma() << endl;
  cout << "ang = " << v.teta() << endl;
  u = v.unitario();
  u.print();
  return 0;
}


