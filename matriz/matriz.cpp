#include "matriz.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Matriz::Matriz(int _nl, int _nc){
  nl = _nl; nc = _nc;

  if(nl <= 0 || nc <= 0){
    nl = nc = 0;
  }
//  x = malloc(nl*sizeof(int*));
//  x[0] = malloc(nl*nc*sizeof(int));

  // SOLICITA o bloco de memoria
  x = new int*[nl];
  if(x == nullptr){
    exit(0);
  }
  x[0] = new int[nl*nc];
  if(x[0] == nullptr){
    exit(0);
  }
  // ajusta os enderecos das
  // linhas da matriz
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  for(int i=0; i<nl*nc; i++){
    x[0][i] = 0;
  }
}

Matriz::~Matriz(){
  if(nl == 0 || nc == 0){
    return;
  }
  delete [] x[0];
  delete [] x;
}

int &Matriz::operator ()(int i, int j){
  if( i>= 0 && j>=0 &&
      i<nl && j<nc){
    return x[i][j];
  }
  else{
    exit(0);
  }
}

void Matriz::print(){
  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      cout << x[i][j] << " ";
    }
    cout << endl;
  }
}




