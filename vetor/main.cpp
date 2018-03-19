#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor v1(3,4), v2(-1,10), v3;

  v1.print(); cout << endl;


//  v2.setX(-1);
//  v2.setY(10);

  v3 = v1.soma(v2);
  v3.print();
  cout << endl;

  v1.print();
  v1.negativo();
  v1.print();

  cout << endl;
  cout << "norma = " << v1.norma() << endl;
  cout << "teta  = " << v1.teta() << endl;
  cout << "v1x = " << v1.getX() << endl;
  return 0;
}
