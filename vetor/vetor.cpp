#include "vetor.h"
#include <cmath>
#include <iostream>

using namespace std;

/*Vetor::Vetor(){
  cout << "construtor padrao (default)\n";
  x = y = 0;
}
*/
Vetor::Vetor(float _x, float _y)
{
//  cout << "contrutor com argumentos\n";
  x = _x; y = _y;
}

Vetor::Vetor(Vetor &v){
 // cout << "construtor de copia\n";
  x = v.x;
  y = v.y;
}

Vetor::~Vetor()
{
 // cout << "destrutor da classe\n";
}

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

Vetor Vetor::soma(Vetor v){
  Vetor ret;
  ret.x = x + v.x;
  ret.y = y + v.y;
  return (ret);
}

Vetor Vetor::subtracao(Vetor v){
  Vetor ret;
  ret.x = x - v.x;
  ret.y = y - v.y;
  return (ret);
}

Vetor Vetor::multiplicacao(float a){
  Vetor ret;
  ret.x = a*x;
  ret.y = a*y;
  return (ret);
}

Vetor Vetor::operator + (Vetor v){
  Vetor ret;
  ret.x = x+v.x;
  ret.y = y+v.y;
  return(ret);
}

Vetor Vetor::operator - (Vetor v){
  Vetor ret;
  ret.x = x-v.x;
  ret.y = y-v.y;
  return(ret);
}

Vetor Vetor::operator *(float a){
  Vetor ret;
  ret.x = a*x;
  ret.y = a*y;
  return (ret);
}

float Vetor::operator* (Vetor v){
  return(x*v.x+y*v.y);
}

Vetor operator*(float a, Vetor v){
  Vetor ret;
  ret.x = a * v.x;
  ret.y = a * v.y;
//  ret.setX(a*v.getX());
//  ret.setY(a*v.getY());
  return(ret);
}

Vetor Vetor::operator++(){
  Vetor ret;
  x++; y++;
  ret.x = x; ret.y = y;
  return (ret);
}

Vetor Vetor::operator++(int a){
  Vetor ret;
  ret.x = x; ret.y = y;
  x++; y++;
  return (ret);
}


