#include <iostream>
#include "vetor.hpp"

using namespace std;

int main(){
  Vetor<int> v1(3.2,4);
  Vetor<float> v2(3.2,4);

  cout << "x1 = " << v1.getX() << endl;
  cout << "y1 = " << v1.getY() << endl;
  cout << "x2 = " << v2.getX() << endl;
  cout << "y2 = " << v2.getY() << endl;
  return 0;
}
