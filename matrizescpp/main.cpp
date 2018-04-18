#include <iostream>
#include "matriz.h"

using namespace std;

int main()
{
  Matriz B(3,3), F(3,3), C(5,6), D;
  B.random();
  F.random();
  D = B+F;
  D.print();
  Matriz E=B;
  B(0,0) = -1;
  B = B; // 1

  cout << "b = " << endl;
  B.print();  cout << endl;

  cout << "e = " << endl;
  E.print();  cout << endl;

  cout << "c = " << endl;
  C.print();
  C = B; // 2
  cout << "c = " << endl;
  C.print();
  C = D;
  cout << "c = " << endl;
  C.print();
//  Matriz A;
/*  A.print();
  cout << A(0,1) << endl;
  A = B+C;
*/
  return 0;
}
