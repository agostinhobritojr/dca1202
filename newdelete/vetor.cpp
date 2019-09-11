#include "vetor.h"
#include <iostream>

using namespace std;
Vetor::Vetor(float mx, float my){
  cout << "construtor\n";
  x = mx; y = my;
}

Vetor::~Vetor(){
  cout << "destrutor\n";
}

void Vetor::func(){
  cout << "func\n";
}
