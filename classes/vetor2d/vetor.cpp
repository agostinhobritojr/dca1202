#include "vetor.h"
#include <iostream>
#include <cmath>

using namespace std;

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

Vetor Vetor::soma(Vetor v2){
  Vetor v3;
  v3.x = x + v2.x;
  v3.y = y + v2.y;
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
