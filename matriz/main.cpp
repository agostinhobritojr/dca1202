#include <iostream>
#include "matriz.h"

using namespace std;

int main()
{
  Matriz a(3,4), b;
  a.print();
  cout << endl;
  a(2,3) = 4;
  a(4,5) = 8;
  a.print();
  return 0;
}
