#include "vetor2d.h"
#include <cmath>
#include <iostream>

using namespace std;

void Vetor2d::setX(float mx){
  x = mx;
}
float Vetor2d::getX(void){
  return x;
}
void Vetor2d::setY(float my){
  y = my;
}
float Vetor2d::getY(void){
  return y;
}
float Vetor2d::norma(void){
  float tam;
  tam = sqrt(pow(x,2)+
             pow(y,2));

  tam = sqrt(x*x+y*y);
}
float Vetor2d::teta(void){
  float ang;
  ang = atan2(y,x)*180/M_PI;
  return ang;
}
void Vetor2d::print(void){
  cout << "(" << x << ","
       << y << ")";
}
Vetor2d Vetor2d::unitario(void){
  Vetor2d ret;
  ret.x = x/norma();
  ret.y = y/norma();
  return ret;
}
