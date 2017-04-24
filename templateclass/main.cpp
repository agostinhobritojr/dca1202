#include <iostream>
#include "vetor.h"

using namespace std;

int main()
{
  Vetor<int> v1, v4;
  Vetor<float> v2;
  Vetor<double> v3;

  v1.setX(4.6);
  v2.setX(5);
  v3.setX(6);
  v4 = v1.copia();

  cout << v1.getX() << endl;
  cout << v4.getX() << endl;
  cout << v2.getX() << endl;
  cout << v3.getX() << endl;

  return 0;
}

