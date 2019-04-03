#include <iostream>
#include <vetor2d.h>

using namespace std;

int main()
{
  Vetor2d v1(4,5), v2(-1,3), v3;
  v1.print(); cout << endl;
  v2.print(); cout << endl;
 // v3 = v1.operator+(v2);
  v3 = v1 + v2;
  v3.print(); cout << endl;
  v3 = v1 + 0.4;
  v3.print(); cout << endl;
  v3 = v1 * 0.4;
  v3.print(); cout << endl;
  v3 = 0.4 * v1;
  v3.print(); cout << endl;
  return 0;
}
