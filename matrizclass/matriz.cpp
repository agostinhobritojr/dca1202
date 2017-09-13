#include "matriz.h"
#include <iostream>

using namespace std;

Matriz::Matriz(int _nl, int _nc):
  nl(_nl), nc(_nc){
  //  cout << "nl = " << nl << endl;
  //  cout << "nc = " << nc << endl;

  x = nullptr;

  // caso a matriz tenha qtde. de
  // linhas ou colunas nula
  // finaliza-se o construtor
  if(nl <= 0 || nc <= 0){
    nl = nc = 0;
    return;
  }

  // aloca a matriz x dinamicamente
  // aloca array auxiliar
  x = new float*[nl];
  if(x == nullptr){
    nl = nc = 0;
    return;
  }

  // aloca array principal para
  // armazenar a matriz
  x[0] = new float[nl*nc]();
  if(x[0] == nullptr){
    delete [] x;
    x = nullptr;
    nl = nc = 0;
    return;
  }


  // organiza os enderecos das linhas
  // no array auxiliar
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }

  for(int i=0; i<nl*nc; i++){
    //  x[0][i] = 0;
  }

  //  memset(x[0], 0, nl*nc);
  //  nl = _nl;
  //  nc = _nc;
}

Matriz::~Matriz(){
  if(x != nullptr){
    delete [] x[0];
    delete [] x;
  }
}

int Matriz::getNl()
{
  return nl;
}

int Matriz::getNc()
{
  return nc;
}

void Matriz::print(){
  cout << "[";
  for(int i=0; i<nl; i++){
    cout << "[";
    for(int j=0; j<nc; j++){
      cout << x[i][j] << " ";
    }
    cout << "]";
    if(i != nl-1)
      cout <<endl;
  }
  cout << "]" << endl;
}

float &Matriz::operator()(int i, int j){
  return x[i][j];
}


