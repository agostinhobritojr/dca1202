#include "matriz.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Matriz::Matriz(int _nl, int _nc){
  if(_nl < 0 || _nc < 0){
    exit(0);
  }
  // marcar o ponteiro com
  // nullptr para marcar quer nada
  // foi alocado ate o momento
  x = nullptr;

  if(_nl == 0 || _nc == 0){
    nl = nc = 0;
    return;
  }

  nl = _nl;
  nc = _nc;

  // aloca array auxiliar
  x = new float*[nl];
  if(x == nullptr){
    exit(0);
  }

  x[0] = new float[nl*nc];
  if(x[0] == nullptr){
    exit(0);
  }
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
}

Matriz::~Matriz(){
  if(x != nullptr){
    delete [] x[0];
    delete [] x;
  }
}

float& Matriz::operator()(int i, int j){
  if(i >=0 && i < nl && j>=0 && j<nc){
    return x[i][j];
  }
  else{
    exit(0);
  }
}

void Matriz::random(){
  for(int i=0; i<nl*nc; i++){
    x[0][i] = rand()%10;
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
