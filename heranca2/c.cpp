#include "c.h"
#include <iostream>

using namespace std;

C::C(){
  cout << "construtor C\n";
}

C::~C(){
   cout << "destrutor C\n";
}

void C::print(){
  cout << "print C\n";
}

