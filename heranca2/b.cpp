#include "b.h"
#include <iostream>

using namespace std;

B::B(){
  cout << "construtor B\n";
}

B::B(int _x, int _y) : A(_x, _y)
{

}

B::~B(){
  cout << "destrutor B\n";
}

void B::print(){
  cout << "print B\n";
}
