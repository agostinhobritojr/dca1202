#include <iostream>
#include "teste.h"

using namespace std;

int main(){
  int *x;
  int **y;
  int nl, nc;

  typedef unsigned long DWORD, *PDWORD, *LPDWORD;

  DWORD alo;

  Teste *t;

  // alocacao de um unico objeto
  t = new Teste();
  t->alo();
  delete t;

  // alocacao de um array de objetos
  cout << "------\n";
  t = new Teste[5];
  for(int i=0; i<5; i++){
     t[i].alo();
  }
//  t->alo();
//  (t+1)->alo();
  delete [] t;

//  t.alo();




  nl=5; nc=3;

  y = new int*[nl];
  y[0] = new int[nl*nc];
  for(int i=1; i<nl; i++){
    y[i] = y[i-1] + nc;
  }
  y[2][1] = 4;
  // libera a memoria
  delete [] y[0];
  delete [] y;

  // operador new/delete
  x = new int;
  *x = 4;
  cout << *x << endl;
  delete x;

  // operador new[]/delete[]
  x = new int[10];
  x[0] = 4;
  cout << x[0] << endl;
  delete [] x;
  return 0;
}

