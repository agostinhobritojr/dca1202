#include "vetor2d.h"
#include <iostream>

using namespace std;

Vetor2d::Vetor2d(float mx, float my){
  x=mx, y=my;
}

Vetor2d::~Vetor2d(){

}

void Vetor2d::print()
{
  cout << "(" << x << ", " << y <<
          ")";
}

Vetor2d Vetor2d::soma(Vetor2d v1){
  Vetor2d ret;
  ret.x = x + v1.x;
  ret.y = y + v1.y;
  return ret;
}

Vetor2d Vetor2d::operator+(Vetor2d v1){
  Vetor2d ret;
  ret.x = x + v1.x;
  ret.y = y + v1.y;
  return ret;
}

Vetor2d Vetor2d::operator+(float a)
{
  Vetor2d ret;
  ret.x = x + a;
  ret.y = y + a;
  return ret;
}

Vetor2d Vetor2d::operator*(float a)
{
  Vetor2d ret;
  ret.x = x * a;
  ret.y = y * a;
  return ret;
}


Vetor2d operator*(float a, Vetor2d v1)
{
  Vetor2d ret;
//  ret.setX(a*v1.getX());
//  ret.setY(a*v1.getY());
  ret.x = a*v1.x;
  ret.y = a*v1.y;
  return ret;
}


