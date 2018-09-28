#include "matriz.h"
#include <cstdlib> // para exit()
#include <iostream> // para cin/cout
#include <iomanip> // para setw() e setprecision()

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

Matriz::~Matriz(){
  if(nl > 0 && nc > 0){
    delete [] x[0];
    delete [] x;
  }
}

void Matriz::print(){
  if(!(nl>0 && nc>0)){
    cout << "[[]]";
    return;
  }
  cout << "[";
  for(int i=0; i<nl; i++){
    if(i!=0) cout << " ";
    cout << "[";
    for(int j=0; j<nc; j++){
      cout << setprecision(1) << fixed;
      cout << setw(4);
      cout << x[i][j];
      if(j!=nc-1)
        cout << " ";
    }
    cout << "]";
    if(i!=nc-2)
      cout << endl;
  }
  cout << "]";
}

void Matriz::randomize(){
  if(!(nl>0 && nc >0)){
    return;
  }
  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      x[i][j] = rand()%20;
    }
  }
}

float& Matriz::operator()(int i, int j){
  return x[i][j];
}

void Matriz::operator*(float a){
  Matriz ret(nl, nc);
  if(!(nl>0 && nc>0)){
    return;
  }
  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      ret.x[i][j] = x[i][j]*a;
    }
  }
  for(int i=0; i<nl*nc; i++){
    x[0][i] = x[0][i]*a
  }
  return "esta matriz";
}











