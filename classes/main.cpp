#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor v1, v2, v3;

//  std::cin >> a;
  v1.setX(3); v1.setY(4);
  v2.setX(1); v2.setY(-8);

  v3 = v1.soma(v2);
  v3.print();
  cout << endl;

  v3 = v1.soma(1.5);
  v3.print();
  cout << endl;

//  cout << "v1 = " << v1.getX() << endl;
  return 0;
}

