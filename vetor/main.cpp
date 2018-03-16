#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor v1;

  v1.setX(4);
  v1.setY(3);
  v1.print();
  v1.negativo();
  v1.print();

  cout << endl;
  cout << "norma = " << v1.norma() << endl;
  cout << "teta  = " << v1.teta() << endl;
  cout << "v1x = " << v1.getX() << endl;
  return 0;
}
