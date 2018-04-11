#include "vetor.h"
#include <iostream>

using namespace std;

Vetor::Vetor(float _x, float _y){
   x=_x; y=_y;
}

void Vetor::imprime(void){
  cout << "(" << x << ","
       << y << ")" << endl;
}

Vetor Vetor::operator+(Vetor &v1){
  Vetor ret;
  ret.x = x + v1.x;
  ret.y = y + v1.y;
  return ret;
}

Vetor Vetor::operator/(int a){
  Vetor ret;
  ret.x = x/a;
  ret.y = y/a;
  return ret;
}
