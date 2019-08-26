#include "vetor.h"
#include <cmath>
#include <iostream>

using namespace std;

Vetor::Vetor(float mx, float my){
  cout << "construtor com argumentos\n";
  x = mx; y = my;
}

// construtor default
/*Vetor::Vetor(){
  cout << "construtor padrao\n";
}*/

Vetor::~Vetor(){
  cout << "destrutor\n";
}

Vetor::Vetor(const Vetor &v){
  cout << "construtor de copia\n";
  x = v.x;
  y = v.y;
}

void Vetor::setX(float mx) {
  x = mx;
}
float Vetor::getX(){
  return x;
}
void Vetor::setY(float my){
  y = my;
}
float Vetor::getY(){
  return y;
}
float Vetor::norma(void){
  return sqrt(x*x+y*y);
}
void Vetor::print(void){
  cout << "(" << x << "," << y << ")";
}
float Vetor::angulo(){
  float teta;
  teta = atan2f(y,x);
  return teta*180/M_PI;
}
Vetor Vetor::soma(Vetor v2){
  Vetor ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return ret;
}
Vetor Vetor::sub(Vetor v2){
  Vetor ret;
  ret.x = x - v2.x;
  ret.y = y - v2.y;
  return ret;
}
Vetor Vetor::mult(float a){
  Vetor ret;
  ret.x = x*a; ret.y = y*a;
  return ret;
}

// sobrecarga de metodos
float Vetor::mult(Vetor v2){
  return x*v2.x+y*v2.y;
}

