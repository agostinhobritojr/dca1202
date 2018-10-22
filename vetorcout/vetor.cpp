#include "vetor.h"
#include <iostream>

using namespace std;

Vetor::Vetor(int _x, int _y){
  x = _x;
  y = _y;
}

void Vetor::print()
{
  cout << "(" << x << "," << y << ")\n";
}

istream& operator >>(istream &is, Vetor &v)
{
  is >> v.x >> v.y;
  return is;
}

ostream& operator << (ostream &os, Vetor &v){
  os << "(" << v.x << "," << v.y << ")";
  return os;
}
