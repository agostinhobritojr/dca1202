#include <iostream>

int main(void){
  int *x, n, **y, nl, nc;

  // aloca um unico inteiro
  x = new int;
  *x = 3;
  std::cout << "*x = " << *x << std::endl;
  // libera o bloco alocado
  delete x;
  x = nullptr;

  // alocacao de um vetor de inteiros
  x = new int[n];
  x[3] = 18;
  std::cout << "x[3] = " << x[3] << std::endl;
  delete [] x;
  x = nullptr;

  // alocacao de matriz de inteiros
  nl = 4;
  nc = 3;
  y = new int*[nl];
  y[0] = new int[nl*nc];
  for(int i=1; i<nl; i++){
    y[i] = y[i-1] + nc;
  }
  y[2][3] = 45;
  delete [] y[0];
  delete [] y;
  y = nullptr;

}