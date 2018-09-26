#include "matriz.h"
#include <iostream>

using namespace std;

Matriz::Matriz(int _nl, int _nc): nl(_nl), nc(_nc){
  if(nl > 0 && nc > 0){
    // aloca a matriz dinamicamente
    x = new float*[nl];
    if(x == nullptr){
      cout << "deu ruim\n";
      exit(0);
    }
    x[0] = new float[nl*nc];
    if(x[0] == nullptr){
      delete [] x;
      cout << "deu ruim\n";
      exit(0);
    }
    // ajusta os enderecos das linhas
    for(int i=1; i<nl; i++){
      x[i] = x[i-1]+nc;
    }
  }
}
