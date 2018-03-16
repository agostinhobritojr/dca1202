#include "vetor.h"
#include <cmath>
#include <iostream>

using namespace std;

void Vetor::setX(float _x){
  x = _x;
}

float Vetor::getX(void){
  return x;
}

void Vetor::setY(float _y){
  y = _y;
}
float Vetor::getY(void){
  return y;
}

float Vetor::norma(){
  return sqrt(x*x + y*y);
}

float Vetor::teta(){
  return 180*atan(y/x)/M_PI;
}

void Vetor::print(void){
  cout << "(" << x
       << "," << y
       << ")";
}

void Vetor::negativo(void)
{
  x = -x; y = -y;
}

void Vetor::negativo(int mode)
{
  if(mode == 1){
    x = -x;
  }
  if(mode == 2){
    y = -y;
  }
}




