#include "vetor.h"
#include <iostream>

using namespace std;

Vetor::Vetor(float mx, float my){
x = mx; y = my;
}

void Vetor::print(){
  cout << "(" << x << "," << y << ")";
}

ostream& operator<<(ostream &os, Vetor v1){
  os << "(" << v1.x << "," << v1.y << ")";
  return  os;
}

istream& operator>>(istream& is,
                    Vetor &v1){
  is >> v1.x >> v1.y;
  return is;
}





