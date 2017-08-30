#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor v1, v2, v3;

  cout << "tamanho de v1 = " << sizeof(v1)
       << endl;
  cout << "tamanho de Vetor = " << sizeof(Vetor)
       << endl;

//  std::cin >> a;
  v1.setX(3); v1.setY(4);
  v2.setX(1); v2.setY(-8);

  v3 = v1.operator +(v2);
  v3.print();
  cout << endl;

  v3 = v1 + v2;
  v3.print();
  cout << endl;

  v3 = v1*4 + v2*8;
  v3.print();
  cout << endl;

  cout << "2 * v1 = ";
  v3 = 2*v1;
  v3.print();
  cout << endl;


//  cout << "v1 = " << v1.getX() << endl;
  return 0;
}


