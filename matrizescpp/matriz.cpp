#include "matriz.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

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

Matriz::Matriz(Matriz &m){
  nl = m.nl; nc = m.nc;
  x = nullptr;
  if(nl == 0 || nc == 0){
    return;
  }
  // aloca array auxiliar
  x = new float*[nl];
  if(x == nullptr){ exit(0); }

  x[0] = new float[nl*nc];
  if(x[0] == nullptr){ exit(0); }
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  memcpy(x[0], m.x[0], nl*nc*sizeof(float));
}

Matriz Matriz::operator=(const Matriz &m)
{
  // Matriz A(3,3), B(5,4), C;
  // Matriz D(3,3), E;
  //
  // 1: testa se o objeto que executa
  // o metodo eh o mesmo passado como
  // parametro
  // A = A
  if(this == &m){
    // o ponteiro this aponta para o
    // proprio objeto e o conteudo do
    // que estah nesse endereco eh
    // o proprio objeto
    return *this;
  }
  // 2: matrizes de mesmo tamanho mas
  // com possiveis valores diferentes
  // D = A;
  if(nl == m.nl && nc == m.nc){
    if(nl != 0 & nc != 0){
      memcpy(x[0], m.x[0], nl*nc*sizeof(float));
    }
    return *this;
  }
  // 3: matrizes tem tamanhos diferentes
  // - liberar memoria antiga
  // - alocar nova memoria
  // - copiar valores
  if(nl != m.nl || nc != m.nc){
    // if(nl !=0 && nc != 0){
    if( x != nullptr){
      delete [] x[0];
      delete [] x;
    }
    // copia os tamanhos
    nl = m.nl; nc = m.nc;
    // 4: matriz atribuida tem tamanho nulo
    // A = C;
    if(nl == 0 || nc == 0){
      // grava o endereco nulo para lembrar
      // que nao ha memoria associada com
      // o x
      x = nullptr;
      return *this;
    }
    // aloca a memoria
    // identico ao construtor
    x = new float*[nl];
    if(x == nullptr){ exit(0);}
    x[0] = new float[nl*nc];
    if(x[0] == nullptr){ exit(0);}
    for(int i=1; i<nl; i++){
      x[i] = x[i-1] + nc;
    }
    // copia a matriz
    // 5: tambem contemplada (matriz nao possui
    // valores alocados mas recebe matriz com
    // tamanho diferente de zero
    // C = A;
    memcpy(x[0], m.x[0], nl*nc*sizeof(float));
    return *this;
  }
}

Matriz Matriz::operator+(Matriz &m)
{
  if(nl == m.nl && nc == m.nc){
    Matriz ret(nl, nc);

    for(int i=0; i<nl*nc; i++){
      ret.x[0][i] = x[0][i]+m.x[0][i];
    }
    return ret;
  }
  else{
    exit(0);
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
