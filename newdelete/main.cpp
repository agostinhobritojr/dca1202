#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  /*
  int *x, n=10;
  x = new int; //x=(int*)malloc(sizeof(int));
  *x = 3;
  cout << "*x= " << *x << endl;
  delete x;
  x = new int[n]; //x=(int*)malloc(n*sizeof(int));
  x[0] = 3;
  cout << "x[0] = " << x[0] << endl;
  delete [] x;
  */

  Vetor *v;

  v = new Vetor(3,4);
  v->func();
  (*v).func();
  v[0].func();
  delete v;

  // na alocacao com new[], o construtor
  // default eh OBRIGATORIO!!!!
  v = new Vetor[5];
  v[2].func();
  delete [] v;
  return 0;
}



