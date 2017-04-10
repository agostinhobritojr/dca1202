#include <iostream>
#include "matriz.h"
using namespace std;

#define NULL 0

Matriz::Matriz(int nlin, int ncol){
  // armazena linhas e colunas
  this->nlin = nlin;
  this->ncol = ncol;

  if(nlin <= 0 || ncol <=0){
    x = NULL;
    return;
  }
  
  // aloca a memoria auxiliar e da matriz
  x = new float* [nlin];
  if( x == NULL){
    exit(0);
  }
  cout << "x = " << x;
  x[0] = new float [nlin*ncol];
  if( x[0] == NULL){
    exit(0);
  }
  // ajusta os enderecos
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }

}

Matriz::~Matriz(){
  if (x != NULL){
    delete [] x[0];
    delete [] x;
  }
}

Matriz::Matriz(Matriz &m){
  nlin = m.nlin;
  ncol = m.ncol;
  if(nlin == 0 || ncol == 0){
    x = NULL;
    return;
  }
  x = new float[nlin];
  if(x == NULL){
    exit(0);
  }
  x[0] = new float[nlin*ncol];
  if(x[0] == NULL){
    exit(0);
  }
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }
  // copia a matriz
  for(int i=0; i<nlin*ncol; i++){
    x[0][i] = m.x[0][i];
  }
}



float& Matriz::operator()(int i, int j){
  if(i>=0 && i<nlin && j>=0 && j<ncol){
    return(x[i][j]);
  }
  exit(0);
}

void Matriz::print(){
  for(int i=0; i<nlin; i++){
    for(int j=0; j<ncol; j++){
      cout << x[i][j] << " ";
    }
    cout << endl;
  }
}














