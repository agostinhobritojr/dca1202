#include <iostream>
#include <cmath>
#include "vetor.h"

using namespace std;

int main(){
  Vetor v1(1,2), v2(1,2), v3(3,-1);
  Vetor v4=v1, v5(v2);

  v1.print(); cout << endl;
  v1.setX(3); v1.setY(4);
  v2.setX(-1); v2.setY(2);

  v3 = v1.soma(v2);

  v3.print();
  cout << endl;
  cout << "escalar = " << v1.mult(v2) << endl;

  v3 = v1.mult( (float)3.0);
  v3.print();

  cout << "x = ";
  cout << v1.getX() << "\n";
  cout << "tamanho = " << v1.norma() << endl;
 // v1.y = 4;
  return 0;
}







