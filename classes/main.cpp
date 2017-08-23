#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor v1;

//  std::cin >> a;
  v1.setX(3);
  v1.setY(4);

  v1.print();
//  cout << endl;
//  cout << "v1 = " << v1.getX() << endl;
  return 0;
}

