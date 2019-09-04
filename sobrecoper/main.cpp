#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor v1(3,5), v2(1,2), v3;

//  v3 = v1.operator+(v2);
  // v3 = v1+v2;
  v3 = 4*v2;
  v3.print();
  cout << endl;
  ++v3;

  cout << "prod interno = " << v1*v2 << endl;
  return 0;
}
