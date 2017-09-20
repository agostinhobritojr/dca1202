#include <iostream>
#include <fstream>

#include "matriz.h"

using namespace std;

int main(){
  Matriz m(3,3), n(3,3), o, p(4,5), r=m, z;
  ofstream saida;
  ifstream entrada;

  entrada.open("/tmp/matrizentrada.txt");
  saida.open("/tmp/matrizsaida.txt");

  cout << endl << endl;
  cout << p.getNc() << endl;
  cout << p.getNl() << endl;
  m(1,2) = 3;

  r = o = m;
//  o = m+n;
//  m = p;
  m(0,0) = 4;

  entrada>> z;
  cout << z ;
  cout << "-------\n";
  // impossivel
  // cout.operator <<(m);

  m.print();
  o.print();
  r.print();
  cout << endl << endl;
  m.randomize();
  n.randomize();
  o = m+n;
  m.print();
  n.print();
  o.print();

  cout << "Hello World!" << endl;
  return 0;
}

