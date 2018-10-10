#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor<int> v1;
  Vetor<double> v2(4.5,8.9);
  cout << v1.getX() << endl;
  cout << v2.getX() << endl;
  cout << sizeof(v1) << endl;
  cout << sizeof(v2) << endl;
  return 0;
}
