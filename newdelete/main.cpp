#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  int *x;
  // aloca a memoria
  x = new int;
  // verifica se a alocacao foi
  // bem sucedida
  if (x == nullptr)
    exit(0);
  // usa a memoria
  *x = 4;
  x[0] = 4;
  cout << *x << endl;
  // libera a memoria alocada
  delete x;

  x = new int[10];
  x[0] = 4;
  x[1] = -6;
  delete [] x;

  return 0;
}



