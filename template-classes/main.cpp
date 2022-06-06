#include <iostream>
#include "alo.h"

int main(){
  Alo<int> a(4);
  Alo<double> b(4);
  std::cout << "x = " << a.getX() << std::endl;
  return 0;
}



