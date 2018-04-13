#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor<int> v1(3, 4);
  Vetor<float> v2(4.5, -6.3);
  Vetor<float> v3(2.5, 9.3);
  Vetor<float> v4(0,0);
  cout << v1.getX() << endl;
  cout << v2.getX() << endl;
  v4 = v2+v3;
  cout << v4.getX() << endl;
  return 0;
}
