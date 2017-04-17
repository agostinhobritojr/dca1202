#ifndef FUNCOES_H
#define FUNCOES_H
#include <iostream>
using namespace std;

template <class Tipo>
Tipo media(Tipo a, Tipo b){
  Tipo c;
  c = (a+b)/2;
  return (c);
}

template <class T, class U>
T funcao(U param){
  return param;
}

template <class T, int n=10>
void alo(T x){
  T v[n];
  for(int i=0; i<n; i++){
    v[i] = x;
    cout << v[i] << endl;
  }
}
#endif // FUNCOES_H

