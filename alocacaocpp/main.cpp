#include <iostream>
#include "teste.h"

using namespace std;

int main(){
  int *x;
  Teste *t;

  // invocando o construtor padrao
  t = new Teste;
  delete t;
  cout << "t = " << t << endl;
  // invocando o construtor c/ args
  t = new Teste(5);
  cout << "t = " << t << endl;
  if(t == 0){
    cout << "memoria nao alocada";
  }
  t->alo();
  (*t).alo();
  t[0].alo();
  cout << "tam = " << sizeof(*t) << endl;
  delete t;
  cout << endl << endl;

  t = new Teste[5];
  t[0].alo();
  t->alo();
  (t+2)->alo();
  delete [] t;


{
  x = new int;
  *x = 8;
  x[0] = 8;
  cout << "*x = " << *x << endl;
  cout << "x[0] = " << x[0] << endl;
  delete x;

  x = new int[5];
  // x = (int*) malloc(5*sizeof(int));
  x[0] = 8; x[1] = -9;
  delete [] x;
 }

  return 0;
}
