#include "a.h"
#include <iostream>
using namespace std;

A::A(){
  cout << "construtor A\n";
}

A::A(int _x, int _y){
  ax = _x; ay = _y;
}

A::~A(){
  cout << "destrutor A\n";
}

void A::print(){
  cout << "print A: "<< ax << ", "
       << ay << "\n";
}
