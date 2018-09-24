#include <iostream>
#include "alo.h"
using namespace std;

int main(){
  Alo *a;
  Alo b(8);

  cout << "size b = " << sizeof(b) << endl;
  cout << "size a = " << sizeof(a) << endl;
  b.print();

  a = &b;
  a->print();

  a = new Alo(6);
  a->print();
  delete a;

  // necessariamente a existencia de
  // um construtor padrao deve ser prevista
  // ou um construtor com argumentos
  // iniciais pré-definidos

  // caso contrario, um erro de compilacao
  // será mostrado
  a = new Alo[10];
  a[0].print();
  a[3].print();
  (a+3)->print();

  delete [] a;




  /**
  int *x, *y;
  int n;

  n = 10;
  // aloca memoria para x e y

  // operador new
  y = new int;
  y[0] = 1;
  // operador delete
  delete y;

  // operador new[]
  x = new int[n];
  x[0] = 3;
  x[2] = -4;
  // operador delete[]
  delete [] x;
  **/

  return 0;
}
