#include "matriz.h"
#include <iostream>
#include <cstring>

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

Matriz::Matriz(Matriz &m){
  nl = m.nl;
  nc = m.nc;
  if(nl == 0 || nc == 0){
    x = nullptr;
    return;
  }
  x = new float*[nl];
  x[0] = new float[nl*nc];
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  memcpy(x[0], m.x[0], nl*nc*sizeof(float));
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

Matriz& Matriz::operator=(Matriz &m){
  // Matriz m;
  // m = m;
  if(&m == this){
    return *this;
  }

  // quando a quantidade de linhas ou
  // colunas eh diferente em ambas
  // as matrizes
  if(m.nl != nl || m.nc != nc){
    // preve liberacao acidental
    // de memoria no caso de este
    // objeto haver sido declarado da
    // forma "Matriz p;"
    if(nl != 0 && nc != 0){
      delete [] x[0];
      delete [] x;
      x = nullptr;
      nl = nc = 0;
    }
  }

  // o array ja foi liberado ou entao
  // nao havia informacao reservada para
  // o mesmo
  if(x == nullptr){
    if(m.nl == 0 || m.nc == 0){
      return *this;
    }
    // a memoria foi realocada
    nl = m.nl;
    nc = m.nc;
    x = new float*[nl];
    x[0] = new float[nl*nc];
    for(int i=1; i<nl; i++){
      x[i] = x[i-1] + nc;
    }
  }

  // neste ponto, as duas matrizes jah
  // terao exatamente o mesmo tamanho

//  for(int i=0; i<nl*nc; i++){
//    x[0][i] = m.x[0][i]
//}
  memcpy(x[0], m.x[0], nl*nc*sizeof(float));
  return *this;
}




