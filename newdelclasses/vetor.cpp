#include "vetor.h"
#include <iostream>

using namespace std;

Vetor::Vetor(float mx, float my){
  x = mx; y = my;
}

Vetor::~Vetor(){
  cout << "chamando destrutor vetor\n";
}

void Vetor::print(){
  cout << "(" << x << "," <<
          y << ")" << endl;
}
