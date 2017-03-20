#include "vetor.h"
#include <iostream>
#include <cmath>

using namespace std;

/*
Vetor::Vetor(){
  x = y = 0;
  cout << "construtor padrao\n";
}*/

Vetor::Vetor(float mx, float my){
  x = mx;
  y = my;
  cout << "construtor com argumentos\n";
}

Vetor::Vetor(Vetor &copia){
  cout << "construtor de copia\n";
}

void Vetor::setX(float mx){
  x = mx;
}
float Vetor::getX(void){
  return x;
}
void Vetor::setY(float my){
  y = my;
}
float Vetor::getY(void){
  return y;
}

Vetor::~Vetor(){
  cout << "destrutor" << endl;
}

Vetor Vetor::soma(Vetor v2){
  Vetor v3;
  v3.x = x + v2.x;
  v3.y = y + v2.y;
  return(v3);
}

// sobrecarga de funcoes
Vetor Vetor::soma(float a){
  Vetor v3;
  v3.x = x + a;
  v3.y = y + a;
  return(v3);
}

Vetor Vetor::subt(Vetor v2){
  Vetor v3;
  v3.x = x - v2.x;
  v3.y = y - v2.y;
  return(v3);
}

float Vetor::produtoEscalar(Vetor v2){
  return(x*v2.x + y*v2.y);
}

void Vetor::print(){
  cout << "(" << x << "," << y << ")";
}

float modulo(Vetor v1){
  float mod;
  mod = sqrt(v1.getX()*v1.getX()+v1.getY()*v1.getY());
  return(mod);
}
