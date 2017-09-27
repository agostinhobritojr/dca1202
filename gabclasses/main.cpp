#include <iostream>
#include "vetor.h"

using namespace std;


int main(){
  Vetor<int> v1(3,4);
  Vetor<float> v2(4.6, 1.8);
  cout << v1.getX() << endl;
  v2.setX(6.7);
  cout << v2.getX() << endl;
  return 0;
}

