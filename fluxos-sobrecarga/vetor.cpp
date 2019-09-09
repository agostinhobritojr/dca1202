#include "vetor.h"
#include <iostream>

using namespace std;

Vetor::Vetor(float mx, float my){
x = mx; y = my;
}

void Vetor::print(){
  cout << "(" << x << "," << y << ")";
}

void operator<<(ostream &os, Vetor v1)
{
  os << "(" << v1.x << "," << v1.y << ")";
}
