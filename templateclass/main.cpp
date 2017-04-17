#include <iostream>
#include "vetor.h"

using namespace std;

int main()
{
  Vetor<int> v1;
  Vetor<float> v2;
  Vetor<double> v3;

  v1.setX(4);
  v2.setX(5);
  v3.setX(6);

  cout << v1.getX() << endl;
  cout << v2.getX() << endl;
  cout << v3.getX() << endl;

  return 0;
}

