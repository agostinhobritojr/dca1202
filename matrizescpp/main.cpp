#include <iostream>
#include "matriz.h"

using namespace std;

int main()
{
  Matriz B(3,3), C(3,3);
  B.random();
  B(0,0) = -1;
  B.print();
//  Matriz A;
/*  A.print();
  cout << A(0,1) << endl;
  A = B+C;
*/
  return 0;
}
