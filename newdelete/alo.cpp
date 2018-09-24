#include "alo.h"
#include <iostream>

using namespace std;

Alo::Alo(int _x){
  x = _x;
  cout << "construtor\n";
}

Alo::~Alo()
{
  cout << "destrutor\n";
}

void Alo::print(){
  cout << "alo, print!\n";
}
